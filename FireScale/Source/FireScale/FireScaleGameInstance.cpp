#include "FireScaleGameInstance.h"

#include "Data/SaveData.h"
#include "Kismet/GameplayStatics.h"

UFireScaleGameInstance::UFireScaleGameInstance()
{
}

void UFireScaleGameInstance::Init()
{
	Super::Init();
}

void UFireScaleGameInstance::CreateSaveFile()
{
	UGameplayStatics::DeleteGameInSlot("Save1", 0);
	
	GameSaveInstance = Cast<USaveData>(UGameplayStatics::CreateSaveGameObject(USaveData::StaticClass()));
	
	UGameplayStatics::SaveGameToSlot(GameSaveInstance, "Save1", 0);
}

void UFireScaleGameInstance::SaveGame()
{
	GameSaveInstance = Cast<USaveData>(UGameplayStatics::LoadGameFromSlot("Save1", 0));

	if (GameSaveInstance != nullptr)
	{
		UGameplayStatics::SaveGameToSlot(GameSaveInstance, "Save1",0);
	}
	else if (!UGameplayStatics::DoesSaveGameExist("Save1", 0))
	{
		CreateSaveFile();
	}
}

void UFireScaleGameInstance::LoadGame()
{
	GameSaveInstance = Cast<USaveData>(UGameplayStatics::LoadGameFromSlot("Save1", 0));
	
	if (!UGameplayStatics::DoesSaveGameExist("Save1", 0))
	{
		CreateSaveFile();
	}
}
