#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FireScaleHUD.generated.h"

UCLASS()
class FIRESCALE_API AFireScaleHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	// FUNCTIONS
	// -----------------------------

	AFireScaleHUD();

	virtual void BeginPlay() override;
};
