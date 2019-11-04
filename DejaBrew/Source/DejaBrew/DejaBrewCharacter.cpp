// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DejaBrewCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ConstructorHelpers.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

ADejaBrewCharacter::ADejaBrewCharacter()
{
	//static ConstructorHelpers::FObjectFinder<TSubclassOf<UUserWidget>>

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

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
	CrosshairWidget->SetManuallyRedraw(false);

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;
	GetCharacterMovement()->MaxWalkSpeed = m_moveSpeed * 600.0f;

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
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ADejaBrewCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ADejaBrewCharacter::StopSprinting);
	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &ADejaBrewCharacter::Pause);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ADejaBrewCharacter::Shoot);

	//set up axis bindings
	PlayerInputComponent->BindAxis("MoveRight", this, &ADejaBrewCharacter::MoveRight);
	PlayerInputComponent->BindAxis("MoveLeft", this, &ADejaBrewCharacter::MoveLeft);
	PlayerInputComponent->BindAxis("CameraPanUp", this, &ADejaBrewCharacter::PanCameraUp);
	PlayerInputComponent->BindAxis("CameraPanDown", this, &ADejaBrewCharacter::PanCameraUp);
	PlayerInputComponent->BindAxis("CameraPanLeft", this, &ADejaBrewCharacter::PanCameraRight);
	PlayerInputComponent->BindAxis("CameraPanRight", this, &ADejaBrewCharacter::PanCameraRight);

	PlayerInputComponent->BindAxis("CursorPanUp", this, &ADejaBrewCharacter::PanCursorUp);
	PlayerInputComponent->BindAxis("CursorPanRight", this, &ADejaBrewCharacter::PanCursorRight);
	

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
//	if (m_compressionBlastCharge <= 0)
//		bCanShoot = false;
//	else
//		bCanShoot = true;
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
	AddMovementInput(FVector(0.f, 1.f ,0.f), a_val * m_moveSpeed);
}

void ADejaBrewCharacter::MoveLeft(float a_val)
{
	AddMovementInput(FVector(0, 1, 0), a_val * m_moveSpeed);
}

void ADejaBrewCharacter::PanCameraUp(float a_val)
{
}

void ADejaBrewCharacter::PanCameraRight(float a_val)
{
}

void ADejaBrewCharacter::PanCursorRight(float a_val)
{
	FVector l_newLoc = CrosshairWidget->GetComponentLocation() + FVector(0, -a_val * m_mouseSpeed, 0);

	if ((CrosshairBoundWidget->GetComponentLocation() - l_newLoc).Size() <= m_maxCursorDistance)
		CrosshairWidget->SetWorldLocation(l_newLoc);
}

void ADejaBrewCharacter::PanCursorUp(float a_val)
{
	FVector l_newLoc = CrosshairWidget->GetComponentLocation() + FVector(0, 0, a_val * m_mouseSpeed);

	if ((CrosshairBoundWidget->GetComponentLocation() - l_newLoc).Size() <= m_maxCursorDistance)
		CrosshairWidget->SetWorldLocation(l_newLoc);
}

void ADejaBrewCharacter::Pause()
{
}

void ADejaBrewCharacter::Shoot()
{
	FVector l_crosshairLoc = CrosshairWidget->GetComponentLocation(), 
		l_boundsLoc = CrosshairBoundWidget->GetComponentLocation(),
		l_cursorDir = l_crosshairLoc - l_boundsLoc;
	float l_crosshairLength = l_cursorDir.Size();

	l_cursorDir.Normalize();
	
	CompressionBlastMoveCharacter(l_cursorDir, l_crosshairLength);
	DepleteCharge((l_crosshairLength / m_maxCursorDistance) * 100);

}

void ADejaBrewCharacter::Sprint()
{
	if(CanJump())
		GetCharacterMovement()->MaxWalkSpeed = m_sprintSpeed * 600.0f;
}

void ADejaBrewCharacter::StopSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed = m_moveSpeed * 600.0f;
}

void ADejaBrewCharacter::CompressionBlastMoveCharacter(FVector a_dir, float a_length)
{
	if (CanJump())
		LaunchCharacter( (a_dir * (a_length * -10)) * .25, false, false);
	else
		LaunchCharacter(a_dir * (a_length * -10), true, true);
}

void ADejaBrewCharacter::DepleteCharge(float a_percentTominus)
{
	//if (m_compressionBlastCharge - a_percentTominus < 0)
	//	m_compressionBlastCharge = 0;
	//else
	//	m_compressionBlastCharge = m_compressionBlastCharge - a_percentTominus;
	m_timeLeftForCharging = m_timeTillChargeLimit;
}


void ADejaBrewCharacter::UpdateCompressionCharge()
{
	//if (m_compressionBlastCharge < 200)
	//{
	//	if (m_timeTillChargeLimit <= 0)
	//		m_compressionBlastCharge += m_chargeSpeed;
	//	else
	//		m_timeLeftForCharging--;
	//	if (!bIsCharging)
	//		bIsCharging = true;
	//}
	//else
	//	bIsCharging = false;
}