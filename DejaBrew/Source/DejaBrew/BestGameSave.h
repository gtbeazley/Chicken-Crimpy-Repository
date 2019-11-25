// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BestGameSave.generated.h"

/**
 * 
 */
UCLASS()
class DEJABREW_API UBestGameSave : public USaveGame
{
	GENERATED_BODY()

public:
	UBestGameSave();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Highscore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 FastestTime;
};
