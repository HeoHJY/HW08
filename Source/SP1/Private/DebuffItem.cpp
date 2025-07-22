#include "DebuffItem.h"

ADebuffItem::ADebuffItem()
{
	DebuffIcon = nullptr;
	DebuffDuration = 5.0f;
	DebuffAmount = 10.0f;
	ItemType = "Debuff";
}

void ADebuffItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);
	if (Activator && Activator->ActorHasTag("Player"))
	{
		UE_LOG(LogTemp, Warning, TEXT("DebuffTest. ActivateItem"));
		ApplyDebuff(Activator);
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
	}
}

void ADebuffItem::ApplyDebuff(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		UE_LOG(LogTemp, Warning, TEXT("DebuffTest. ApplyDebuff"));
	}
}

void ADebuffItem::RemoveDebuff()
{

}