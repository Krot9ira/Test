// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShostGameMode.h"
#include "ShostHUD.h"
#include "ShostCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShostGameMode::AShostGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShostHUD::StaticClass();
}
