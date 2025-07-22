#include "DarknessDebuffItem.h"
#include "MainCharacter.h"

ADarknessDebuffItem::ADarknessDebuffItem()
{
    DebuffDuration = 2.f;
    ItemType = "DarknessDebuff";
}

void ADarknessDebuffItem::ApplyDebuff(AActor* Activator)
{
    if (Activator && Activator->ActorHasTag("Player"))
    {
        DebuffedActor = Activator;

        AMainCharacter* PlayerCharacter = Cast<AMainCharacter>(Activator);
        if (PlayerCharacter)
        {
            APlayerController* PlayerController = Cast<APlayerController>(PlayerCharacter->GetController());
            if (PlayerController)
            {
                PlayerController->PlayerCameraManager->StartCameraFade(0.f, 1.f, 0.5f, FLinearColor::Black, false, true);
            }

            GetWorld()->GetTimerManager().SetTimer(
                DebuffTimerHandle,
                this,
                &ADarknessDebuffItem::RemoveDebuff,
                DebuffDuration,
                false
            );
        }
    }
}

void ADarknessDebuffItem::RemoveDebuff()
{
    if (DebuffedActor && DebuffedActor->ActorHasTag("Player"))
    {
        AMainCharacter* PlayerCharacter = Cast<AMainCharacter>(DebuffedActor);
        if (PlayerCharacter)
        {
            APlayerController* PlayerController = Cast<APlayerController>(PlayerCharacter->GetController());
            if (PlayerController)
            {
                PlayerController->PlayerCameraManager->StartCameraFade(1.f, 0.f, 0.5f, FLinearColor::Black, false, true);
            }
        }
    }

    Destroy(); 
}
