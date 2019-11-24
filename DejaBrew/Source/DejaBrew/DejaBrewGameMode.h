// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DejaBrewGameMode.generated.h"

UCLASS(minimalapi)
class ADejaBrewGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADejaBrewGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString SlotName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName NextLevelName = "";
};



