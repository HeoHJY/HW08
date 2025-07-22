#pragma once

#include "CoreMinimal.h"
#include "DebuffItem.h"
#include "DarknessDebuffItem.generated.h"


UCLASS()
class SP1_API ADarknessDebuffItem : public ADebuffItem
{
	GENERATED_BODY()
	
public:
    ADarknessDebuffItem();

protected:
    virtual void ApplyDebuff(AActor* Activator) override;
    virtual void RemoveDebuff() override;

private:
    FTimerHandle DebuffTimerHandle;

    AActor* DebuffedActor;
};
