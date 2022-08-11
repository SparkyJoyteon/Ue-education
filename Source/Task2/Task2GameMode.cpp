// Copyright Epic Games, Inc. All Rights Reserved.

#include "Task2GameMode.h"
#include "Task2Character.h"
#include "UObject/ConstructorHelpers.h"

ATask2GameMode::ATask2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
