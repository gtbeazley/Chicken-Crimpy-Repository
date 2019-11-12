// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGame_DejaBrew.generated.h"
#include "SlimeEnemy.h"
#include "Thorn.h"
#include "Door.h"
/**
 * 
 */
UCLASS()
class DEJABREW_API USaveGame_DejaBrew : public USaveGame
{
	GENERATED_BODY()

public:
	FTransform PlayerTransform;
	TArray<FVector> EnemyLoc;
	TArray<ASlimeEnemy> EnemyRef;
	TArray<FVector> ThornLoc;
	TArray<AThorn> ThornRef;
	TArray<FVector> PlatformLoc;
	TArray<bool> IsDoorOpen;
	TArray<ADoor> DoorRef;
	TArray<bool> IsFuelCollected;
	//TArray<AFuel> FuelRef;
	TArray<bool> IsBeanCollected;
	//TArray<ABean> BeanRef

	int32 CurScore;
	//TArray<APlatform> PlatformRef;
	int32 FastestTime;
	int32 HighestScore;
	bool levelComplete;
};
