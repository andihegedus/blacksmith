// Copyright Epic Games, Inc. All Rights Reserved.


#include "FireScaleGameModeBase.h"
#include "System/FireScaleHUD.h"

AFireScaleGameModeBase::AFireScaleGameModeBase(const FObjectInitializer& ObjectInitializer)
{
	HUDClass = AFireScaleHUD::StaticClass();
}

void AFireScaleGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}
