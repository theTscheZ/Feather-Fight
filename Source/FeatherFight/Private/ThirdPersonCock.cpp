// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdPersonCock.h"

// Sets default values
AThirdPersonCock::AThirdPersonCock()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThirdPersonCock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThirdPersonCock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThirdPersonCock::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

