#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

class UCapsuleComponent;

UCLASS()
class SP1_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	AMovingPlatform();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MaxRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FVector Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;

	FVector StartLocation;
	FVector NewLocation;
	FVector ChangeLocation;
	bool bIsTrip;
	FTimerHandle MoveTimerHandle;
	FTimerHandle VisibleTimerHandle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform Settings")
	USceneComponent* SceneComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	UCapsuleComponent* CollisionComp;

	
	void MoveActorLocation();
	void ActorChangeLocation();

	UFUNCTION()
	void OnComponentBeginOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
};
