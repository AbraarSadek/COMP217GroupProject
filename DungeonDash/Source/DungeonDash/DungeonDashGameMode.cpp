// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonDashGameMode.h"
#include "DungeonDashCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonDashGameMode::ADungeonDashGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
