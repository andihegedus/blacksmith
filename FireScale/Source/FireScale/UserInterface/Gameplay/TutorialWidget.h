#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TutorialWidget.generated.h"

class UButton;
class UHorizontalBox;
class APCharacter;
class APController;
class UFireScaleGameInstance;
class AFireScaleHUD;

UCLASS()
class UTutorialWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// FUNCTIONS
	// -----------------------------

	virtual void NativeOnInitialized() override;

	virtual void NativeConstruct() override;

	// PROPERTIES & VARIABLES
	// -----------------------------

	UPROPERTY()
	APCharacter* PlayerCharacter;

	UPROPERTY()
	APController* PlayerController;

	UPROPERTY()
	UFireScaleGameInstance* GameInstance;

	UPROPERTY(EditAnywhere)
	AFireScaleHUD* HUD;
};
