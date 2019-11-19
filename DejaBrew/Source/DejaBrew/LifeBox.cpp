// Fill out your copyright notice in the Description page of Project Settings.

#include "LifeBox.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DejaBrewCharacter.h"

// Sets default values
ALifeBox::ALifeBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	trigger = CreateDefaultSubobject<UBoxComponent>("trigger");
	trigger->OnComponentEndOverlap.AddDynamic(this, &ALifeBox::OnOverlapEnd);
	trigger->SetCollisionResponseToAllChannels(ECR_Overlap);
}

// Called when the game starts or when spawned
void ALifeBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALifeBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALifeBox::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) 
{
	if (Cast<ADejaBrewCharacter>(OtherActor))
		Cast<ADejaBrewCharacter>(OtherActor)->Die();
}