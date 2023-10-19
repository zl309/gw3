// Copyright Epic Games, Inc. All Rights Reserved.

#include "c1017GameMode.h"
#include "c1017Character.h"
#include "UObject/ConstructorHelpers.h"

Ac1017GameMode::Ac1017GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
