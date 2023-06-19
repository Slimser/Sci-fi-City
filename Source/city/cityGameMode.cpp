// Copyright Epic Games, Inc. All Rights Reserved.

#include "cityGameMode.h"
#include "cityCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcityGameMode::AcityGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
