// Copyright Epic Games, Inc. All Rights Reserved.

#include "FeatherFightGameMode.h"
#include "FeatherFightCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFeatherFightGameMode::AFeatherFightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
