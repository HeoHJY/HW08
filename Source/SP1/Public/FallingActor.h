#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FallingActor.generated.h"

class USphereComponent;

UCLASS()
class SP1_API AFallingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AFallingActor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Scene")
	USceneComponent* SceneComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	USphereComponent* CollisionComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Falling Setting")
	float FallSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Falling Setting")
	float Gravity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Falling Setting")
	float FallDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;

	float FallGravity;
	FVector StartLocation;

	FTimerHandle FallingTimerHandle;

	void FallActor();

	UFUNCTION()
	void OnComponentBeginOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
};
