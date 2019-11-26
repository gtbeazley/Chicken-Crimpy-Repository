// Fill out your copyright notice in the Description page of Project Settings.

#include "DejaBrew_SaveGame.h"
//#include "Door.h"
#include "Fuel.h"
#include "CoffeeBean.h"
#include "SlimeEnemy.h"
#include "Checkpoint.h"
#include "Thorn.h"

UDejaBrew_SaveGame::UDejaBrew_SaveGame()
{
	PlayerLoc = FVector();
	PlayerRot = FRotator(0, 0, 90);
	curScore = 0;
}


