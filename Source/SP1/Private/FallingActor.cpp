#include "FallingActor.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

AFallingActor::AFallingActor()
{
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneComp);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneComp);

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	CollisionComp->SetupAttachment(SceneComp);
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AFallingActor::OnComponentBeginOverlap);

	FallSpeed = 50.f;
	FallGravity = 0.f;
	FallDistance = 3500.f;
	Gravity = 2.f;
	Damage = 30.f;
}

void AFallingActor::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();

	GetWorldTimerManager().SetTimer(
		FallingTimerHandle,
		this,
		&AFallingActor::FallActor,
		0.02f,
		true
	);
}

void AFallingActor::FallActor()
{
	FVector NewLocation = GetActorLocation();
	FallGravity += Gravity * GetWorld()->GetDeltaSeconds();
	NewLocation.Z -= FallGravity + FallSpeed * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
	if (NewLocation.Z < StartLocation.Z - FallDistance)
	{
		Destroy();
	}
}

void AFallingActor::OnComponentBeginOverlap(
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