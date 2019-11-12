// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Thorn.generated.h"

UCLASS()
class DEJABREW_API AThorn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThorn();

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Thorn1;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Thorn2;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Thorn3;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Thorn4;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Thorn5; 
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
