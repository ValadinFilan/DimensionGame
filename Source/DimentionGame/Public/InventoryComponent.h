// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DIMENTIONGAME_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();
	
	//The list of items
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UItem*> Items;

	//Add new item to inventory 
	void Add(UItem* Item);

	//Returns the item from inventory and delete it from inventory
	void Get(FString Name);

	//Returns true if item is in inventory
	void Find(FString Name);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
