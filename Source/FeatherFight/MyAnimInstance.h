// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class FEATHERFIGHT_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	virtual void NativeInitalizeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation")
	bool isMoving = false;
	bool isAttackinglight = false;
	bool isAttackingHeavy = false;
	bool isJumping = false;
	bool isParrying = false;
	bool isDodging = false;
	bool gettingHit = false;
};
