#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "DebuffItem.generated.h"


UCLASS()
class SP1_API ADebuffItem : public ABaseItem
{
	GENERATED_BODY()
	
public:
	ADebuffItem();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Effect")
	UTexture2D* DebuffIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Effect")
	float DebuffDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Effect")
	float DebuffAmount;

	virtual void ApplyDebuff(AActor* Activator);
	virtual void RemoveDebuff();
	virtual void ActivateItem(AActor* Activator) override;
};
