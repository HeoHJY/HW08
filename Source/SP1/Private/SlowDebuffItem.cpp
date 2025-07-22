#include "SlowDebuffItem.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MainCharacter.h"


ASlowDebuffItem::ASlowDebuffItem()
{
	DebuffDuration = 5.0f;
	DebuffAmount = 150.f;
	ItemType = "SlowDebuff";
}

void ASlowDebuffItem::ApplyDebuff(AActor* Activator)  
{  
    if (Activator && Activator->ActorHasTag("Player"))  
    {  
        AMainCharacter* PlayerCharacter = Cast<AMainCharacter>(Activator);  
        if (PlayerCharacter)  
        {  
            DebuffedActor = Activator;

            OriginalSpeed = PlayerCharacter->GetSpeed();
            PlayerCharacter->SetSpeed(DebuffAmount);

            GetWorld()->GetTimerManager().SetTimer(
                DebuffTimerHandle,
                this,
                &ASlowDebuffItem::RemoveDebuff,
                DebuffDuration,
                false
            );
            
        }  
    }  
}

void ASlowDebuffItem::RemoveDebuff()
{
    if (DebuffedActor && DebuffedActor->ActorHasTag("Player"))
    {
        AMainCharacter* PlayerCharacter = Cast<AMainCharacter>(DebuffedActor);
        if (PlayerCharacter)
        {
            UE_LOG(LogTemp, Error, TEXT("Im OKay."));
			PlayerCharacter->SetSpeed(OriginalSpeed);
        }
        Destroy();
    }
}