// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActingActor.h"
#include "ManagedInteractingActor.h"
#include "ActorManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateManagerEvent);

UCLASS()
class DIMENTIONGAME_API AActorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//The target object
	UPROPERTY(EditAnywhere, Category = "Group managing", BlueprintReadWrite)
	TArray<AActingActor*> Targets;

	//The list of connected objects
	UPROPERTY(EditAnywhere, Category = "Group managing", BlueprintReadWrite)
	TArray<AManagedInteractingActor*> Actors;

	//Manage objects
	UFUNCTION(BlueprintCallable)
	void UpdateManager();

	//Delagate for blueprint callback programing
	UPROPERTY(BlueprintAssignable)
	FUpdateManagerEvent OnUpdateManager;
};
