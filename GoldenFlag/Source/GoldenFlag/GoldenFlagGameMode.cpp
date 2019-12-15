// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GoldenFlagGameMode.h"
#include "GoldenFlagHUD.h"
#include "GoldenFlagCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGoldenFlagGameMode::AGoldenFlagGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGoldenFlagHUD::StaticClass();
}
