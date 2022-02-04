// Copyright Epic Games, Inc. All Rights Reserved.

#include "CardCollectionSystemGameMode.h"
#include "CardCollectionSystemPlayerController.h"
#include "CardCollectionSystemPawn.h"

ACardCollectionSystemGameMode::ACardCollectionSystemGameMode()
{
	// no pawn by default
	DefaultPawnClass = ACardCollectionSystemPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ACardCollectionSystemPlayerController::StaticClass();
}
