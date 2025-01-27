#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveLoadWidget.generated.h"

class AFireScaleHUD;
class UFireScaleGameInstance;
class APCharacter;
class APController;
class UButton;

UCLASS()
class FIRESCALE_API USaveLoadWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// FUNCTIONS
	// -----------------------------
	UFUNCTION()
	void NewGame();

	UFUNCTION()
	void LoadGame();

	UFUNCTION()
	void CloseGame();

	// PROPERTIES & VARIABLES
	// -----------------------------

	UPROPERTY()
	APCharacter* PlayerCharacter;

	UPROPERTY()
	APController* PlayerController;
	
	UPROPERTY()
	UFireScaleGameInstance* GameInstance;

	UPROPERTY()
	AFireScaleHUD* HUD;

protected:
	// FUNCTIONS
	// -----------------------------

	virtual void NativeOnInitialized() override;

	virtual void NativeConstruct() override;
	

	// PROPERTIES & VARIABLES
	// -----------------------------
	
	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
	UButton* NewGameButton;

	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
	UButton* LoadGameButton;
	
	UPROPERTY(VisibleAnywhere, meta = (BindWidget))
	UButton* CloseGameButton;
	
	
};