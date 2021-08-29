// Copyright Epic Games, Inc. All Rights Reserved.

#include "raskaanaGameMode.h"
#include "raskaanaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AraskaanaGameMode::AraskaanaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
