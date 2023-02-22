// Copyright Epic Games, Inc. All Rights Reserved.

#include "PortalsGameMode.h"
#include "PortalsCharacter.h"
#include "UObject/ConstructorHelpers.h"

APortalsGameMode::APortalsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
