// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorManager.h"

// Sets default values
AActorManager::AActorManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AActorManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AActorManager::UpdateManager()
{
	OnUpdateManager.Broadcast();
}

