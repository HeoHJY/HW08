#include "PoisonDebuffItem.h"
#include "MainCharacter.h"

APoisonDebuffItem::APoisonDebuffItem()
{
    DebuffDuration = 5;
	DebuffAmount = -3.f;
    ItemType = "PoisonDebuff";
}

void APoisonDebuffItem::ApplyDebuff(AActor* Activator)
{
    if (Activator && Activator->ActorHasTag("Player"))
    {
        DebuffedActor = Activator;

        GetWorld()->GetTimerManager().SetTimer(
            PoisonTimerHandle,
            this,
            &APoisonDebuffItem::ApplyPoisonDamage,
            1.0f,
            true
        );
    }
}

void APoisonDebuffItem::ApplyPoisonDamage()
{
    if (DebuffedActor && DebuffedActor->ActorHasTag("Player"))
    {
        AMainCharacter* PlayerCharacter = Cast<AMainCharacter>(DebuffedActor);
        if (PlayerCharacter)
        {
            PlayerCharacter->AddHealth(DebuffAmount);
        }
    }

    DebuffDuration -= 1.f;
    if (DebuffDuration <= 0.f)
    {
        RemoveDebuff();
    }
}

void APoisonDebuffItem::RemoveDebuff()
{
    GetWorld()->GetTimerManager().ClearTimer(PoisonTimerHandle);
    Destroy();
}