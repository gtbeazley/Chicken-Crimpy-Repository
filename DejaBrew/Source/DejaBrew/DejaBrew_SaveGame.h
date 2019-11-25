// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DejaBrew_SaveGame.generated.h"

//class ADoor;
class AFuel;
class ACoffeeBean;
class ASlimeEnemy;
class ACheckpoint;
class AThorn;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 curScore;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	TArray<ADoor*> DoorRefs;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	TArray<bool> DoorOpened;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ACoffeeBean*> CoffeeBeanRefs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<bool> BeanCollected;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AFuel*> FuelRefs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<bool> FuelCollected;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ASlimeEnemy*> EnemyRefs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FVector> EnemyLoc;
	
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AThorn*> ThornRefs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FVector> ThornLoc;



	
	
};
