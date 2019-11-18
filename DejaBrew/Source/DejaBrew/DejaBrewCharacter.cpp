// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DejaBrewCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "DejaBrewGameMode.h"
#include "DejaBrew_SaveGame.h"
#include "Thorn.h"
#include "Spike.h"
#include "SlimeEnemy.h" 
#include "Checkpoint.h"

ADejaBrewCharacter::ADejaBrewCharacter()
{
	//static ConstructorHelpers::FObjectFinder<TSubclassOf<UUserWidget>>

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ADejaBrewCharacter::OnOverlapBegin);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &ADejaBrewCharacter::OnOverlapEnd);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true; // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,125.f);
	CameraBoom->RelativeRotation = FRotator(0.f,180.f,0.f);
	 
	
	// Create a camera and attach to boom
	SideViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCamera->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	//Setting up the widgets
	CrosshairBoundWidget = CreateDefaultSubobject<UWidgetComponent>("CrosshairBoundWidget");
	static ConstructorHelpers::FClassFinder<UUserWidget> ClassFinder4Widget(TEXT("/Game/SideScrollerCPP/Blueprints/Widgets/CrosshairBoundsWidget_BP"));
	CrosshairBoundWidget->SetWidgetClass(ClassFinder4Widget.Class);
	CrosshairBoundWidget->SetDrawSize(FVector2D(1000, 1000));

	CrosshairWidget = CreateDefaultSubobject<UWidgetComponent>("CrosshairWidget");
	static ConstructorHelpers::FClassFinder<UUserWidget> ClassFinderCrosshairWidget(TEXT("/Game/SideScrollerCPP/Blueprints/Widgets/CrosshairWidget_BP"));
	CrosshairWidget->SetWidgetClass(ClassFinderCrosshairWidget.Class);
	CrosshairWidget->SetDrawSize(FVector2D(1000, 1000));
	CrosshairWidget->SetupAttachment(CrosshairBoundWidget);

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false;  
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); 
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;
	GetCharacterMovement()->MaxWalkSpeed = m_moveSpeed * 600.0f;

	USkeletalMeshComponent* Mesh = GetMesh();
	Mesh->SetGenerateOverlapEvents(true);

	UCapsuleComponent* CapsuleCollider = GetCapsuleComponent();
	CapsuleCollider->SetGenerateOverlapEvents(true);

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	m_compressionCharge = m_initialCompressionCharge;
 	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}


//////////////////////////////////////////////////////////////////////////
// Input

void ADejaBrewCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up action bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &ADejaBrewCharacter::Pause);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ADejaBrewCharacter::Shoot);

	//set up axis bindings
	PlayerInputComponent->BindAxis("MoveRight", this, &ADejaBrewCharacter::MoveRight);
	PlayerInputComponent->BindAxis("MoveLeft", this, &ADejaBrewCharacter::MoveLeft);
	//PlayerInputComponent->BindAxis("CameraPanUp", this, &ADejaBrewCharacter::PanCameraUp);
	//PlayerInputComponent->BindAxis("CameraPanDown", this, &ADejaBrewCharacter::PanCameraUp);
	//PlayerInputComponent->BindAxis("CameraPanRight", this, &ADejaBrewCharacter::PanCameraRight);
	//PlayerInputComponent->BindAxis("CameraPanLeft", this, &ADejaBrewCharacter::PanCameraRight);

	//PlayerInputComponent->BindAxis("CursorPanUp", this, &ADejaBrewCharacter::PanCursorUp);
	//PlayerInputComponent->BindAxis("CursorPanRight", this, &ADejaBrewCharacter::PanCursorRight);
	

}

void ADejaBrewCharacter::OffSetCrosshair()
{ 
	if (SideViewCamera != nullptr)
	{
		FVector l_camLoc = SideViewCamera->GetComponentLocation();
		FVector l_actorLoc = GetActorLocation();

		FVector l_actorDir = l_camLoc - l_actorLoc;
		float l_actorDirLength = l_actorDir.Size();
		FRotator l_newCamRot = FRotationMatrix::MakeFromX(l_actorDir).Rotator();

		l_actorDir.Normalize();

		CrosshairBoundWidget->SetWorldLocationAndRotation(l_actorLoc + (l_actorDir * (l_actorDirLength * 0.5)), l_newCamRot);
	}
}

void ADejaBrewCharacter::Tick(float a_dt)
{
	Super::Tick(a_dt); 
	if (m_compressionCharge <= 0)
		bCanShoot = false;
	else
		bCanShoot = true;
	OffSetCrosshair(); 
	UpdateCompressionCharge();

	
}

void ADejaBrewCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ADejaBrewCharacter::MoveRight(float a_val)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f, 1.f ,0.f), -a_val * m_moveSpeed);
}

void ADejaBrewCharacter::MoveLeft(float a_val)
{
	AddMovementInput(FVector(0, 1, 0), -a_val * m_moveSpeed);
}

void ADejaBrewCharacter::Pause()
{
}

void ADejaBrewCharacter::Shoot()
{
	if (bCanShoot)
	{
		FVector l_crosshairLoc = CrosshairWidget->GetComponentLocation(),
			l_boundsLoc = CrosshairBoundWidget->GetComponentLocation(),
			l_cursorDir = l_crosshairLoc - l_boundsLoc;
		float l_crosshairLength = l_cursorDir.Size();
		float l_percentToMinus = (l_crosshairLength / m_maxCursorDistance) * 100;

		l_cursorDir.Normalize();

		if (m_compressionCharge - l_percentToMinus < 0)
		{
			l_percentToMinus += m_compressionCharge - l_percentToMinus;
			l_crosshairLength *= l_percentToMinus * 0.01;
			if(l_percentToMinus < 20)
				CompressionBlastMoveCharacter(l_cursorDir, l_crosshairLength, false, false);
			else
				CompressionBlastMoveCharacter(l_cursorDir, l_crosshairLength, true, true);
		}
		else
			CompressionBlastMoveCharacter(l_cursorDir, l_crosshairLength, true, true);
		CompressionBlastMoveActor(l_cursorDir, l_crosshairLength);
		DepleteCharge(l_percentToMinus * (1 + (m_chargeChangeImpact / 100)));
	}
}

void ADejaBrewCharacter::CompressionBlastMoveCharacter(FVector a_dir, float a_length, bool a_setForceXY, bool a_setForceZ)
{
	if (CanJump())
		LaunchCharacter( (a_dir * (a_length * -10)) * .25, false, false);
	else
		LaunchCharacter(a_dir * (a_length * -10), a_setForceXY, a_setForceZ);
}

void ADejaBrewCharacter::CompressionBlastMoveActor(FVector a_dir, float a_length)
{
	TArray<FHitResult> l_outHits;
	FVector l_traceStartLoc = GetActorLocation(), l_traceEndLoc = l_traceStartLoc + (a_dir * (2 * a_length));
	DrawDebugLine(GetWorld(), l_traceStartLoc, l_traceEndLoc, FColor::Green, true);
	GetWorld()->LineTraceMultiByChannel(l_outHits, l_traceStartLoc, l_traceEndLoc, ECC_Visibility);
	//static ConstructorHelpers::FClassFinder<ASlimeEnemy> SlimeEnemy(TEXT("/Game/SideScrollerCPP/Blueprints/SlimeEnemy_BP"));
	for (auto hitResult : l_outHits)
	{
		
		if (Cast<ASlimeEnemy>(hitResult.Actor))
		{ 
			Cast<ASlimeEnemy>(hitResult.Actor)->LaunchCharacter(a_dir * (10 * a_length), true, true); 
		}
		else if (Cast<AThorn>(hitResult.Actor))
		{
			Cast<AThorn>(hitResult.Actor)->Thorn1->AddForce(a_dir * (1000 * a_length)); 
		}
	}
}

void ADejaBrewCharacter::DepleteCharge(float a_percentTominus)
{
	if (m_compressionCharge - a_percentTominus < 0)
		m_compressionCharge = 0;
	else
		m_compressionCharge = m_compressionCharge - a_percentTominus;
	m_timeLeftForCharging = m_timeTillChargeLimit;
}


void ADejaBrewCharacter::UpdateCompressionCharge()
{
	if (m_compressionCharge < 200)
	{
		if (m_timeLeftForCharging <= 0)
		{
			m_timeLeftForCharging = 0;
			m_compressionCharge += m_chargeSpeed;
		}
		else
			m_timeLeftForCharging--;
		if (!bIsCharging)
			bIsCharging = true;
	}
	else
		bIsCharging = false;
}

void ADejaBrewCharacter::SetMouseSpeed(float a_newMouseSpeed)
{
	m_mouseSpeed = a_newMouseSpeed;
}

void ADejaBrewCharacter::Die()
{
	LoadLastCheckpoint();
}

void ADejaBrewCharacter::LoadLastCheckpoint()
{
	FString slotName = Cast<ADejaBrewGameMode>(UGameplayStatics::GetGameMode(this))->SlotName;
	if (UGameplayStatics::DoesSaveGameExist(slotName, 0))
	{
		UDejaBrew_SaveGame* SGInstance = Cast<UDejaBrew_SaveGame>(UGameplayStatics::LoadGameFromSlot(slotName, 0));
		SetActorLocation(SGInstance->PlayerLoc);
	}

}

void ADejaBrewCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherbodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<AThorn>(OtherActor) || Cast<ASpike>(OtherActor) || Cast<ASlimeEnemy>(OtherActor))
	{
		Die();
	}

}


void ADejaBrewCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherbodyIndex)
{
	if (Cast<ACheckpoint>(OtherActor))
	{
		Cast<ACheckpoint>(OtherActor)->SaveThisMoment();
	}
}

