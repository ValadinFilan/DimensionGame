// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractingActor.h"
#include "ManagedInteractingActor.generated.h"

class AActorManager;

/**
 * Class for group of actors 
 */
UCLASS()
class DIMENTIONGAME_API AManagedInteractingActor : public AInteractingActor
{
	GENERATED_BODY()
	
public:
	//Manager of group
	UPROPERTY(EditInstanceOnly, Category = "Group", BlueprintReadWrite)
	AActorManager* Manager;

	UPROPERTY(EditAnywhere, Category = "Acting", BlueprintReadWrite)
	bool IsMetCondition;

	//Calls for acting
	virtual void Act() override;

	//Calls for creating new quest on actor
	virtual void CreateQuestForPlayer(APlayerGameController* PlayerController) override;

	//Calls for interacting with Player by E
	virtual void Interact(APlayerGameController* PlayerController) override;
};
