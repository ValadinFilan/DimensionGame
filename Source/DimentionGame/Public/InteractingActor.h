// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActingActor.h"
#include "InteractingActor.generated.h"

UCLASS()
class DIMENTIONGAME_API AInteractingActor : public AActingActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Text for showing
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InteractingText;

	//Calls for acting
	virtual void Act() override;

	//Calls for creating new quest on actor
	virtual void CreateQuestForPlayer(APlayerGameController* PlayerController) override;

	//Calls for interacting with Player by E
	UFUNCTION(BlueprintCallable)
	virtual void Interact(APlayerGameController* PlayerController);

};
