#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FireScaleGameInstance.generated.h"

class USaveData;

UCLASS()
class FIRESCALE_API UFireScaleGameInstance :  public UGameInstance
{
	GENERATED_BODY()
	
public:
	// FUNCTIONS
	// -----------------------------

	UFireScaleGameInstance();
	
	virtual void Init() override;
	
	void CreateSaveFile();

	void SaveGame();

	void LoadGame();
	

	// PROPERTIES & VARIABLES
	// -----------------------------

	UPROPERTY()
	APCharacter* PlayerCharacter;
	
	UPROPERTY()
	USaveData* GameSaveInstance;
};
