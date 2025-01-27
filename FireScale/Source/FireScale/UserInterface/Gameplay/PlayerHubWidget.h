#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHubWidget.generated.h"

class AFireScaleHUD;
class APCharacter;
class APController;

UCLASS()
class FIRESCALE_API UPlayerHubWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// FUNCTIONS
	// -----------------------------

	UFUNCTION()
	void CloseWidget();
	

	// PROPERTIES & VARIABLES
	// -----------------------------

	UPROPERTY()
	APCharacter* PlayerCharacter;

	UPROPERTY()
	APController* PlayerController;

	UPROPERTY(EditAnywhere)
	AFireScaleHUD* HUD;
};
