#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BeatButton.generated.h"

class UFireScaleGameInstance;
class AFireScaleHUD;
class APController;
class APCharacter;

UCLASS()
class FIRESCALE_API ABeatButton : public AActor
{
	GENERATED_BODY()
	
public:
	// FUNCTIONS
	// -----------------------------
	
	ABeatButton();
	
	virtual void BeginPlay() override;

	// PROPERTIES & VARIABLES
	// -----------------------------

	UPROPERTY()
	AFireScaleHUD* HUD;

	UPROPERTY()
	APCharacter* PlayerCharacter;

	UPROPERTY()
	APController* PlayerController;

	UPROPERTY()
	UFireScaleGameInstance* GameInstance;
};
