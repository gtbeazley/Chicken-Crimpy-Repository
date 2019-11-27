// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DejaBrewGameMode.h"
#include "DejaBrewCharacter.h"
#include "DejaBrew_SaveGame.h" 
#include "Fuel.h"
#include "CoffeeBean.h"
#include "SlimeEnemy.h"
#include "Checkpoint.h"
#include "Thorn.h" 
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

ADejaBrewGameMode::ADejaBrewGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/DejaBrewCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADejaBrewGameMode::SetSlotName(FString a_slotName)
{
	SlotName = a_slotName;
	BestGameSlotName = FString(a_slotName + "_BGS");
}

void ADejaBrewGameMode::LoadCheckpoint(FVector a_playerLoc, FRotator a_playerRot)
{
	APlayerController* PCInstance = UGameplayStatics::GetPlayerController(this, 0);
	PCInstance->bShowMouseCursor = false;
	PCInstance->SetInputMode(FInputModeGameOnly::FInputModeGameOnly());
	if (UGameplayStatics::DoesSaveGameExist(SlotName, 0))
	{
		UGameplayStatics::DeleteGameInSlot(SlotName, 0);
	}
	
	UDejaBrew_SaveGame* SGInstance = Cast<UDejaBrew_SaveGame>(UGameplayStatics::CreateSaveGameObject(UDejaBrew_SaveGame::StaticClass()));
	TArray<AActor*> OutActors;
	ADejaBrewCharacter* CharInstance = Cast<ADejaBrewCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	//Saving Players Stats
	SGInstance->PlayerLoc = a_playerLoc;
	SGInstance->PlayerRot = a_playerRot;
	if(CharInstance)
	SGInstance->curScore = CharInstance->GetCurScore();

	//Saving all Coffee Beans States
	UGameplayStatics::GetAllActorsOfClass(this, ACoffeeBean::StaticClass(), OutActors);
	for (auto Bean : OutActors)
	{
		if (Bean)
		{
			SGInstance->CoffeeBeanRefs.Add(Cast<ACoffeeBean>(Bean));
			SGInstance->BeanCollected.Add(Cast<ACoffeeBean>(Bean)->Collected);
		}
	}
	OutActors.Empty();

	//Saving all fuel states
	UGameplayStatics::GetAllActorsOfClass(this, AFuel::StaticClass(), OutActors);
	for (auto Fuel : OutActors)
	{
		if (Fuel)
		{
			SGInstance->FuelRefs.Add(Cast<AFuel>(Fuel));
			SGInstance->FuelCollected.Add(Cast<AFuel>(Fuel)->Collected);
		}
	}
	OutActors.Empty();

	//Saving all Thorns
	UGameplayStatics::GetAllActorsOfClass(this, AThorn::StaticClass(), OutActors);
	for (auto Thorn : OutActors)
	{
		if (Thorn)
		{
			SGInstance->ThornRefs.Add(Cast<AThorn>(Thorn));
			SGInstance->ThornLoc.Add(Cast<AThorn>(Thorn)->GetActorLocation());
		}
	}
	OutActors.Empty();

	//Saving all SlimeEnemys
	UGameplayStatics::GetAllActorsOfClass(this, ASlimeEnemy::StaticClass(), OutActors);
	for (auto Enemy : OutActors)
	{
		if (Enemy)
		{
			SGInstance->EnemyRefs.Add(Cast<ASlimeEnemy>(Enemy));
			SGInstance->EnemyLoc.Add(Cast<ASlimeEnemy>(Enemy)->GetActorLocation());
		}
	}

	UGameplayStatics::SaveGameToSlot(SGInstance, SlotName, 0);

	Cast<ADejaBrewCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0))->LoadLastCheckpoint();
}