// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerGameController.h"
#include "ActingActor.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActEvent);

UCLASS()
class DIMENTIONGAME_API AActingActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AActingActor();

	//Thue when can act
	UPROPERTY(EditAnywhere, Category = "Details", BlueprintReadWrite)
	bool Enabled;

	//Name of the actor
	UPROPERTY(EditAnywhere, Category = "Quest", BlueprintReadWrite)
	FName Name;

	//Quest text
	UPROPERTY(EditAnywhere, Category = "Quest", BlueprintReadWrite)
	FString QuestText;

	//Calls for acting
	UFUNCTION(BlueprintCallable)
	virtual void Act();

	//Calls for creating new quest on actor
	UFUNCTION(BlueprintCallable)
	virtual void CreateQuestForPlayer(APlayerGameController* PlayerController);

	UPROPERTY(BlueprintAssignable)
	FActEvent OnAct;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
