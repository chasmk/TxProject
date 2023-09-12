// Copyright Epic Games, Inc. All Rights Reserved.

#include "TxGameMode.h"
#include "TxHUD.h"
#include "TxCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATxGameMode::ATxGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATxHUD::StaticClass();
}
