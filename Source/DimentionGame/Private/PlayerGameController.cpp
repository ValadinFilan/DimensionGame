// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerGameController.h"

APlayerGameController::APlayerGameController() {
	Inventory = CreateDefaultSubobject<UInventoryComponent>("Inventory component");
	AddInstanceComponent(Inventory);
}
