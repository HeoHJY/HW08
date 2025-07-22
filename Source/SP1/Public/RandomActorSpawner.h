#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomActorSpawner.generated.h"

UCLASS()
class SP1_API ARandomActorSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	ARandomActorSpawner();

	FTimerHandle SpawnTimerHandle;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	bool bIsRepeatSpawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	int SpawnCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	int MaxVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnSetting")
	int MinVector;

	FVector CurrentLocation;
	FVector RandomLocation;

	UPROPERTY(EditAnywhere, Category = "SpawnSetting")
	TSubclassOf<AActor> Actor;
};
