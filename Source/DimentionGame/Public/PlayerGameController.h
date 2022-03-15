// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InventoryComponent.h"
#include "PlayerGameController.generated.h"

USTRUCT(BlueprintType)
struct FQuest {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Text;
};

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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UInventoryComponent* Inventory;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FQuest> Quests;
};
