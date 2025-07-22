#include "MainGameState.h"
#include "MainGameInstance.h"
#include "MainPlayerController.h"
#include "Kismet/GamePlayStatics.h"
#include "SpawnVolume.h"
#include "CoinItem.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"

AMainGameState::AMainGameState()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	WaveDuration = 30.0f;
	CurrentLevelIndex = 0;
	MaxLevels = 3;
	CurrentWaveIndex = 0;
	MaxWaves = 3;
}

void AMainGameState::BeginPlay()
{
	Super::BeginPlay();

	StartLevel();

	GetWorldTimerManager().SetTimer(
		HUDUpdateTimerHandle,
		this,
		&AMainGameState::UpdateHUD,
		0.1f,
		true
	);
}

int32 AMainGameState::GetScore() const
{
	return Score;
}

void AMainGameState::AddScore(int32 Amount)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UMainGameInstance* MainGameInstance = Cast<UMainGameInstance>(GameInstance);
		if (MainGameInstance)
		{
			MainGameInstance->AddToScore(Amount);
		}
	}
}

void AMainGameState::StartLevel()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AMainPlayerController* MainPlayerController = Cast<AMainPlayerController>(PlayerController))
		{
			MainPlayerController->ShowGameHUD();
		}
	}

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UMainGameInstance* MainGameInstance = Cast<UMainGameInstance>(GameInstance);
		if (MainGameInstance)
		{
			CurrentLevelIndex = MainGameInstance->CurrentLevelIndex;
		}
	}

	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);

	const int32 ItemToSpawn = 40;

	for (int32 i = 0; i < ItemToSpawn; i++)
	{
		if (FoundVolumes.Num() > 0)
		{
			ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[0]);
			if (SpawnVolume)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}
			}
		}
	}

	GetWorldTimerManager().SetTimer(
		LevelTimerHandle,
		this,
		&AMainGameState::OnWaveTimeUp,
		WaveDuration,
		true
	);
}

void AMainGameState::OnWaveTimeUp()
{
	++CurrentWaveIndex;

	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);


	if (CurrentWaveIndex >= MaxWaves)
	{
		EndLevel();
		UE_LOG(LogTemp, Error, TEXT("Level %d End!"), CurrentLevelIndex + 1);
	}
	else if (CurrentWaveIndex == 1)
	{
		for (int32 i = 0; i < 80 * (CurrentLevelIndex + 1); i++)
		{
			if (FoundVolumes.Num() > 0)
			{
				ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[1]);
				if (SpawnVolume)
				{
					AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				}
			}
		}
	}
	else if (CurrentWaveIndex == 2)
	{
		GetWorldTimerManager().SetTimer(
			SpawnTimerHandle,
			this,
			&AMainGameState::SpawnFallActor,
			2.f,
			true
		);
	}

	for (int32 i = 0; i < 10 * (CurrentLevelIndex + CurrentWaveIndex); i++)
	{
		if (FoundVolumes.Num() > 0)
		{
			ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[3]);
			if (SpawnVolume)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
			}
		}
	}
}

void AMainGameState::OnCoinCollected()
{
	CollectedCoinCount++;

	UE_LOG(LogTemp, Warning, TEXT("Coin Collected: %d / %d"), CollectedCoinCount, SpawnedCoinCount);

	if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
	{
		EndLevel();
	}
}

void AMainGameState::EndLevel()
{
	GetWorldTimerManager().ClearTimer(LevelTimerHandle);

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		UMainGameInstance* MainGameInstance = Cast<UMainGameInstance>(GameInstance);
		if (MainGameInstance)
		{
			AddScore(Score);
			CurrentLevelIndex++;
			MainGameInstance->CurrentLevelIndex = CurrentLevelIndex;
		}
	}

	if (CurrentLevelIndex >= MaxLevels)
	{
		OnGameOver();
		return;
	}
	
	if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
	{
		UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
	}
	else
	{
		OnGameOver();
	}
}

void AMainGameState::OnGameOver()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AMainPlayerController* MainPlayerController = Cast<AMainPlayerController>(PlayerController))
		{
			MainPlayerController->SetPause(true);
			MainPlayerController->ShowMainMenu(true);
		}
	}
}

void AMainGameState::UpdateHUD()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (AMainPlayerController* MainPlayerController = Cast<AMainPlayerController>(PlayerController))
		{
			if (UUserWidget* HUDWidget = MainPlayerController->GetHUDWidget())
			{
				if (UTextBlock* TimeText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Time"))))
				{
					float RemainingTime = GetWorldTimerManager().GetTimerRemaining(LevelTimerHandle);
					TimeText->SetText(FText::FromString(FString::Printf(TEXT("Time: %.1f"), RemainingTime)));
				}

				if (UTextBlock* ScoreText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Score"))))
				{
					if (UGameInstance* GameInstance = GetGameInstance())
					{
						UMainGameInstance* MainGameInstance = Cast<UMainGameInstance>(GameInstance);
						if (MainGameInstance)
						{
							ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), MainGameInstance->TotalScore)));
						}
					}
				}

				if (UTextBlock* LevelIndexText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Level"))))
				{
					LevelIndexText->SetText(FText::FromString(FString::Printf(TEXT("Level: %d"), CurrentLevelIndex + 1)));
				}

				if (UTextBlock* WaveIndexText = Cast<UTextBlock>(HUDWidget->GetWidgetFromName(TEXT("Wave"))))
				{
					WaveIndexText->SetText(FText::FromString(FString::Printf(TEXT("Wave: %d/%d"), CurrentWaveIndex + 1, MaxWaves)));
				}
			}
		}
	}
}

void AMainGameState::SpawnFallActor()
{
	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);

	if (CurrentWaveIndex == 2)
	{
		for (int32 i = 0; i < 5 * (CurrentLevelIndex + 1); i++)
		{
			if (FoundVolumes.Num() > 0)
			{
				ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[2]);
				if (SpawnVolume)
				{
					AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				}
			}
		}
	}
}