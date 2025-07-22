#include "MovingPlatform.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

AMovingPlatform::AMovingPlatform()
{
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneComp);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneComp);

	CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	CollisionComp->SetupAttachment(SceneComp);
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AMovingPlatform::OnComponentBeginOverlap);

	MoveSpeed = 7.0f;
	MaxRange = 150.0f;
	Velocity = { 0, 0, 1 };
	bIsTrip = false;
	Damage = 20.0f;
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
	ChangeLocation = StartLocation;
	NewLocation = StartLocation;
	GetWorld()->GetTimerManager().SetTimer
	(
		MoveTimerHandle, this, &AMovingPlatform::MoveActorLocation, 0.01f, true
	);
}

void AMovingPlatform::MoveActorLocation()
{
	const float MoveDeltaTime = 0.2f;

	if (FVector::Dist(StartLocation, NewLocation) > MaxRange)
	{
		Velocity = -Velocity;

		if (!bIsTrip)
		{
			bIsTrip = true;
		}
		else
		{
			bIsTrip = false;
			ActorChangeLocation();
		}
	}

	NewLocation = NewLocation + (Velocity * MoveSpeed * MoveDeltaTime);

	SetActorLocation(NewLocation);
}

void AMovingPlatform::ActorChangeLocation()
{
	ChangeLocation.X = FMath::FRandRange(static_cast<float>(ChangeLocation.X - 200), static_cast<float>(ChangeLocation.X + 200));
	ChangeLocation.Y = FMath::FRandRange(static_cast<float>(ChangeLocation.Y - 200), static_cast<float>(ChangeLocation.Y + 200));
	StartLocation.X = ChangeLocation.X;
	StartLocation.Y = ChangeLocation.Y;
	NewLocation = ChangeLocation;
}

void AMovingPlatform::OnComponentBeginOverlap(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	TArray<AActor*> OverlappingActors;
	CollisionComp->GetOverlappingActors(OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		if (Actor && Actor->ActorHasTag("Player"))
		{
			UGameplayStatics::ApplyDamage(
				Actor,
				Damage,
				nullptr,
				this,
				UDamageType::StaticClass()
			);

			Destroy();
		}
	}
}
