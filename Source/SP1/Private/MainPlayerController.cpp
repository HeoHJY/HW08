#include "MainPlayerController.h"
#include "MainGameState.h"
#include "MainGameInstance.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"

AMainPlayerController::AMainPlayerController()
	: InputMappingContext(nullptr), MoveAction(nullptr), JumpAction(nullptr), PauseAction(nullptr),
	LookAction(nullptr), SprintAction(nullptr), HUDWidgetClass(nullptr), HUDWidgetInstance(nullptr),
	MainMenuWidgetClass(nullptr), MainMenuWidgetInstance(nullptr), PauseMenuWidgetClass(nullptr), PauseMenuWidgetInstance(nullptr)
{

}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}

	FString CurrentMapName = GetWorld()->GetMapName();
	if (CurrentMapName.Contains("MenuLevel"))
	{
		ShowMainMenu(false);
	}
}

UUserWidget* AMainPlayerController::GetHUDWidget() const
{
	if (HUDWidgetInstance)
	{
		return HUDWidgetInstance;
	}
	return nullptr;
}

void AMainPlayerController::ShowMainMenu(bool bIsRestart)
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (PauseMenuWidgetInstance)
	{
		PauseMenuWidgetInstance->RemoveFromParent();
		PauseMenuWidgetInstance = nullptr;
	}

	if (MainMenuWidgetClass)
	{
		MainMenuWidgetInstance = CreateWidget<UUserWidget>(this, MainMenuWidgetClass);
		if (MainMenuWidgetInstance)
		{
			MainMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
		}

		if (UTextBlock* ButtonText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName(TEXT("StartButtonText"))))
		{
			if (bIsRestart)
			{
				ButtonText->SetText(FText::FromString(TEXT("Restart")));
			}
			else
			{
				ButtonText->SetText(FText::FromString(TEXT("Start")));
			}

			if (bIsRestart)
			{
				UFunction* PlayAnumFunc = MainMenuWidgetInstance->FindFunction(FName("PlayGameOverAnim"));
				if (PlayAnumFunc)
				{
					MainMenuWidgetInstance->ProcessEvent(PlayAnumFunc, nullptr);
				}

				if (UTextBlock* TotalScoreText = Cast<UTextBlock>(MainMenuWidgetInstance->GetWidgetFromName("TotalScoreText")))
				{
					if (UMainGameInstance* MainGameInstance = Cast<UMainGameInstance>(UGameplayStatics::GetGameInstance(this)))
					{
						TotalScoreText->SetText(FText::FromString(FString::Printf(TEXT("Total Score: %d"), MainGameInstance->TotalScore)));
					}
				}
			}
		}

	}
}

void AMainPlayerController::ShowGameHUD()
{
	if (HUDWidgetInstance)
	{
		HUDWidgetInstance->RemoveFromParent();
		HUDWidgetInstance = nullptr;
	}

	if (MainMenuWidgetInstance)
	{
		MainMenuWidgetInstance->RemoveFromParent();
		MainMenuWidgetInstance = nullptr;
	}

	if (PauseMenuWidgetInstance)
	{
		PauseMenuWidgetInstance->RemoveFromParent();
		PauseMenuWidgetInstance = nullptr;
	}

	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();

			bShowMouseCursor = false;
			SetInputMode(FInputModeGameOnly());
		}

		AMainGameState* MainGameState = GetWorld() ? GetWorld()->GetGameState<AMainGameState>() : nullptr;
		if (MainGameState)
		{
			MainGameState->UpdateHUD();
		}
	}
}

void AMainPlayerController::StartGame()
{
	if (UMainGameInstance* MainGameInstance = Cast<UMainGameInstance>(UGameplayStatics::GetGameInstance(this)))
	{
		MainGameInstance->CurrentLevelIndex = 0;
		MainGameInstance->TotalScore = 0;
	}

	UGameplayStatics::OpenLevel(GetWorld(), FName("BasicLevel"));
	SetPause(false);
}

void AMainPlayerController::QuitGame()
{
	UKismetSystemLibrary::QuitGame(this, this, EQuitPreference::Quit, false);
}

void AMainPlayerController::ReturnMenu()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("MenuLevel"));
}

void AMainPlayerController::ShowPauseMenu()
{
	if (PauseMenuWidgetInstance)
	{
		PauseMenuWidgetInstance->RemoveFromParent();
		PauseMenuWidgetInstance = nullptr;
	}

	if (PauseMenuWidgetClass)
	{
		PauseMenuWidgetInstance = CreateWidget<UUserWidget>(this, PauseMenuWidgetClass);
		if (PauseMenuWidgetInstance)
		{
			PauseMenuWidgetInstance->AddToViewport();

			bShowMouseCursor = true;
			SetInputMode(FInputModeUIOnly());
			SetPause(true);
		}
	}
}

void AMainPlayerController::ResumeGame()
{
	if (PauseMenuWidgetInstance)
	{
		PauseMenuWidgetInstance->RemoveFromParent();
		PauseMenuWidgetInstance = nullptr;
	}
	
	bShowMouseCursor = false;
	SetInputMode(FInputModeGameOnly());
	SetPause(false);
}