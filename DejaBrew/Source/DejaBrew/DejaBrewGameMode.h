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
	
	UFUNCTION(BlueprintCallable)
		void SetSlotName(FString a_SlotName);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString SlotName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString BestGameSlotName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName NextLevelName = "";

	UFUNCTION(BlueprintCallable)
		void LoadCheckpoint(FVector a_playerLoc, FRotator a_playerRotator);
};



