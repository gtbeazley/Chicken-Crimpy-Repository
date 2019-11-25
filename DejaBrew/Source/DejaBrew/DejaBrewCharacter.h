// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DejaBrewCharacter.generated.h"

UCLASS(config=Game)
class ADejaBrewCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	/** Accessible by any class to use players death functionality */
	void Die();
protected:
	/** Side view camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* SideViewCamera;

	/** Camera boom positioning the camera bebside the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** The bounds that the cross can not pass, only a widget */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetComponent* CrosshairBoundWidget;

	/** The Crosshair widget that will determine the blast strength and length  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UWidgetComponent* CrosshairWidget;

	UFUNCTION()
		void OnOverlapBegin( UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherbodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd( UPrimitiveComponent* OverlappedComp,  AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherbodyIndex);

	UPROPERTY(EditAnywhere)
		bool bIsCharging = false;

	UPROPERTY(EditAnywhere)
		bool bCanShoot = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCameraIsMoving = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_mouseSpeed = .5;

	UPROPERTY(EditAnywhere)
		float m_moveSpeed = 1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_CameraMoveSpeed = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_maxCursorDistance = 140;

	UPROPERTY(EditAnywhere)
		float m_timeLeftForCharging = 0;

	UPROPERTY(EditAnywhere)
		float m_timeTillChargeLimit = 96;
	
	UPROPERTY(EditAnywhere)
		float m_chargeSpeed = 3;

	UPROPERTY(EditAnywhere)
		float m_chargeChangeImpact = 5;

	UPROPERTY(EditAnywhere)
		float m_initialCompressionCharge = 200;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0, ClampMax = 200))
		float m_compressionCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0))
		int32 m_curScore = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 m_scoreIncrementing = 1; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 m_fuelToFind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 m_curFuel = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 m_timeInLevel = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 frame = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 m_timeFrameIncrement = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_timeCounting = false;

	/**Tick event called every frame
	@param a_dt time from the start of the last frame*/
	void Tick(float a_dt) override;

	void BeginPlay() override;

	//ACTION INPUT FUNCTIONS
	/** Called for activating the pause state*/
	void Pause();

	/** Called for shooting the compression charge gun*/
	void Shoot();

	//AXIS IMPUT FUNCTIONS
	/** Called for side scroller characters right movement*/
	void MoveRight(float a_val);

	/** Called for side scroller characters left movement*/
	void MoveLeft(float a_val);

	/** Loads the game savedand loads last checkpoint */
	void LoadLastCheckpoint();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	/** Setting the offset of the Crosshair Widget (and its children) */
	void OffSetCrosshair();

	/** Sends the character..
	@param a_dir ..in this direction..
	@param a_length ..measured by this length 
	@param a_setForceXY Determines whether to set force on the xy scale..
	@param a_setForceZ ..and Z scale*/
	void CompressionBlastMoveCharacter(FVector a_dir, float a_length, bool a_setForceXY = true, bool a_setForceZ = false );

	void CompressionBlastMoveActor(FVector a_dir, float a_length);

	/**Decrements the compression blasts percentage*/
	void DepleteCharge(float a_percentTominus);

	/** Updates the Compression Blasts Charge and time till it charges */
	void UpdateCompressionCharge();
public:
	ADejaBrewCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCamera; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** Acceses current Compression Charge*/
	UFUNCTION(BlueprintPure)
		float GetCurrentCompressionCharge() { return m_compressionCharge; }

	/** Accesses time in level */
	UFUNCTION(BlueprintPure)
		int GetCurTime() { return m_timeInLevel; }

	/** Accesses collected beancount */
	UFUNCTION(BlueprintPure)
		int GetCurScore() { return m_curScore; }

	/** Access collected fuel count */
	UFUNCTION(BlueprintPure)
		int GetCurFuelCount();

	/** Accesses the current Mouse Speed */
	UFUNCTION(BlueprintPure)
		float GetMouseSpeed() { return m_mouseSpeed; }

	/** Sets the speed of the mouse */
	UFUNCTION(BlueprintCallable)
		void SetMouseSpeed(float a_newMouseSpeed);

	/** Sets the initial fuel max count */
	UFUNCTION(BlueprintCallable)
		void SetMaxFuel(int32 a_fuelToFind);
	 
};
