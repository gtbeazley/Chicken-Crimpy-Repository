// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoffeeBag.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class DEJABREW_API ACoffeeBag : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoffeeBag();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UBoxComponent* Trigger;
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CanContinue = false;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
