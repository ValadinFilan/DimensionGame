// Fill out your copyright notice in the Description page of Project Settings.


#include "ActingActor.h"

// Sets default values
AActingActor::AActingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AActingActor::Act()
{
	OnAct.Broadcast();
}

void AActingActor::CreateQuestForPlayer(APlayerGameController* PlayerController)
{
}

// Called when the game starts or when spawned
void AActingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

