// Fill out your copyright notice in the Description page of Project Settings.


#include "DimentionCharacter.h"

// Sets default values
ADimentionCharacter::ADimentionCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Camera = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	//Camera->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ADimentionCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADimentionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADimentionCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

