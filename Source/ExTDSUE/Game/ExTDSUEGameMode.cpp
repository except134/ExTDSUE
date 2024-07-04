// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExTDSUEGameMode.h"
#include "ExTDSUEPlayerController.h"
#include "../Character/ExTDSUECharacter.h"
#include "UObject/ConstructorHelpers.h"

AExTDSUEGameMode::AExTDSUEGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AExTDSUEPlayerController::StaticClass();
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/Character/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}