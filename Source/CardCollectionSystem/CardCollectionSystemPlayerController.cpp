// Copyright Epic Games, Inc. All Rights Reserved.

#include "CardCollectionSystemPlayerController.h"

ACardCollectionSystemPlayerController::ACardCollectionSystemPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
