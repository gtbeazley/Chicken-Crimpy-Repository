// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DejaBrew_SaveGame.generated.h"

/**
 * 
 */
UCLASS()
class DEJABREW_API UDejaBrew_SaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UDejaBrew_SaveGame();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector PlayerLoc;
	
	
};
