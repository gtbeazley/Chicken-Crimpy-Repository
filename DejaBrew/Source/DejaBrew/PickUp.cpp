// Fill out your copyright notice in the Description page of Project Settings.

#include "PickUp.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>

// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

	TriggerBox = CreateDefaultSubobject<UBoxComponent>("TriggerBox");
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


/** Gain Acces to the Mesh component */
 UStaticMeshComponent* APickUp::GetMesh()
{
	 return Mesh;
}

/** Get Access to the TriggerBox component */
 UBoxComponent* APickUp::GetTriiggerBox()
{
	return TriggerBox;
}