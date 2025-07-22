#pragma once

#include "CoreMinimal.h"
#include "DebuffItem.h"
#include "SlowDebuffItem.generated.h"

UCLASS()
class SP1_API ASlowDebuffItem : public ADebuffItem
{
	GENERATED_BODY()
	
public:
	ASlowDebuffItem();

protected:
	virtual void ApplyDebuff(AActor* Activator) override;
	virtual void RemoveDebuff() override;

	float OriginalSpeed;
	float OriginalSprintSpeed;
	FTimerHandle DebuffTimerHandle;
	AActor* DebuffedActor;
};
