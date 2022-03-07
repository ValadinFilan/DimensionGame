// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InventoryComponent.h"
#include "PlayerGameController.generated.h"

/**
 * 
 */
UCLASS()
class DIMENTIONGAME_API APlayerGameController : public APlayerController
{
	GENERATED_BODY()
	
public:
	//Sets default values for this component's properties
	APlayerGameController();

	//Inventory component
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInventoryComponent* Inventory;
};
