// Fill out your copyright notice in the Description page of Project Settings.


#include "RootOfWinCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ARootOfWinCharacter::ARootOfWinCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARootOfWinCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARootOfWinCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARootOfWinCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

