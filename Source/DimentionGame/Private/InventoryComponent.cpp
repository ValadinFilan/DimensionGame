// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryComponent::AddItem(FItem Item)
{
	Items.Add(Item);
}

FItem UInventoryComponent::GetItem(FString Name)
{
	for (int32 i = 0; i < Items.Num(); i++)
	{
		if (Items[i].Name == Name)
		{
			Items.RemoveAt(i);
			return Items[i];
		}
	}
	return FItem();
}

bool UInventoryComponent::IsItemInInventory(FString Name)
{
	for(int32 i = 0; i < Items.Num(); i++)
	{
		if (Items[i].Name == Name) return true;
	}
	return false;
}

FItem UInventoryComponent::FindItem(FString Name)
{
	for (int32 i = 0; i < Items.Num(); i++)
	{
		if (Items[i].Name == Name) return Items[i];
	}
	return FItem();
}
