#include "MineItem.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MainCharacter.h"

AMineItem::AMineItem()
{
	ExplosionDelay = 2.5f;
	ExplosionRadius = 300.0f;
	ExplosionDamage = 5.0f;
	ExplosionStrength = 1000.f;
	ItemType = "Mine";

	ExplosionCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionCollision"));
	ExplosionCollision->InitSphereRadius(ExplosionRadius);
	ExplosionCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	ExplosionCollision->SetupAttachment(Scene);
}

void AMineItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);

	Explode();
}

void AMineItem::Explode()
{
	TArray<AActor*> OverlappingActors;
	ExplosionCollision->GetOverlappingActors(OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		if (Actor && Actor->ActorHasTag("Player"))
		{
			UGameplayStatics::ApplyDamage(
				Actor,
				ExplosionDamage,
				nullptr,
				this,
				UDamageType::StaticClass()
			);

			AMainCharacter* Character = Cast<AMainCharacter>(Actor);
			if (Character)
			{
				FVector Direction = (Character->GetActorLocation() - GetActorLocation()).GetSafeNormal();

				Character->LaunchCharacter(Direction * ExplosionStrength, true, true);
			}
		}
	}


	DestroyItem();
}