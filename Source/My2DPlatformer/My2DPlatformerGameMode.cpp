// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "My2DPlatformer.h"
#include "My2DPlatformerGameMode.h"
#include "My2DPlatformerCharacter.h"

AMy2DPlatformerGameMode::AMy2DPlatformerGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AMy2DPlatformerCharacter::StaticClass();	
}
