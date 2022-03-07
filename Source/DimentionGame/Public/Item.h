// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS()
class DIMENTIONGAME_API UItem : public UObject
{
	GENERATED_BODY()
public:
	//Name of the item
	UPROPERTY(EditAnywhere, Category = "Details", BlueprintReadWrite)
	FName Name;
	/*
	//Texture of the item
	UPROPERTY(EditAnywhere, Category = "Details", BlueprintReadWrite)
	FTexture Image;
	*/
};
