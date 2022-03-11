// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractingActor.h"

// Sets default values
AInteractingActor::AInteractingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractingActor::Act()
{
	Super::Act();
}

void AInteractingActor::CreateQuestForPlayer(APlayerGameController* PlayerController)
{
	Super::CreateQuestForPlayer(PlayerController);
}

void AInteractingActor::Interact(APlayerGameController* PlayerController)
{
	OnInteract.Broadcast(PlayerController);
}

