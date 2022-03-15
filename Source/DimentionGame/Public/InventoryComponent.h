// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FItem {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Texture;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DIMENTIONGAME_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();
	
	//The list of items
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FItem> Items;

	//Add new item to inventory 
	UFUNCTION(BlueprintCallable)
	void AddItem(FItem Item);

	//Returns the item from inventory and delete it from inventory
	UFUNCTION(BlueprintCallable)
	FItem GetItem(FString Name);

	//Item if it is in inventory
	UFUNCTION(BlueprintCallable)
	FItem FindItem(FString Name);

	//Returns true if item is in inventory
	UFUNCTION(BlueprintCallable)
	bool IsItemInInventory(FString Name);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
