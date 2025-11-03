// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC_Basic_DataAsset.h"
#include "Neutral_NPC_DataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PLUGINENEMIGOS_API UNeutral_NPC_DataAsset : public UNPC_Basic_DataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UAnimMontage* ScaredAnim;
};
