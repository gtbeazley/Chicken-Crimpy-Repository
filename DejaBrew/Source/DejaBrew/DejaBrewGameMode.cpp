// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DejaBrewGameMode.h"
#include "DejaBrewCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADejaBrewGameMode::ADejaBrewGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
