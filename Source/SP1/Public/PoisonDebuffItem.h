#pragma once

#include "CoreMinimal.h"
#include "DebuffItem.h"
#include "PoisonDebuffItem.generated.h"

UCLASS()
class SP1_API APoisonDebuffItem : public ADebuffItem
{
    GENERATED_BODY()

public:
    APoisonDebuffItem();

protected:
    virtual void ApplyDebuff(AActor* Activator) override;
    virtual void RemoveDebuff() override;
    void ApplyPoisonDamage();

    int32 RemainingDuration;
    FTimerHandle PoisonTimerHandle;
    AActor* DebuffedActor;
};