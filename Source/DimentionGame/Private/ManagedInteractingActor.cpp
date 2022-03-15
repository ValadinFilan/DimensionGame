// Fill out your copyright notice in the Description page of Project Settings.


#include "ManagedInteractingActor.h"

void AManagedInteractingActor::Act()
{
	Super::Act();
}

void AManagedInteractingActor::CreateQuestForPlayer(APlayerGameController* PlayerController)
{
	Super::CreateQuestForPlayer(PlayerController);
}

void AManagedInteractingActor::Interact(APlayerGameController* PlayerController)
{
	Super::Interact(PlayerController);
}
