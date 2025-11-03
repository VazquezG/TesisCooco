// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC_Basic_DataAsset.h"
#include "Friendly_NPC_DataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PLUGINENEMIGOS_API UFriendly_NPC_DataAsset : public UNPC_Basic_DataAsset
{
	GENERATED_BODY()
	
public:
	// === Lista de líneas de diálogo del NPC amigable ===
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogues", meta = (MultiLine = true))
	TArray<FText> DialogueLines;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UAnimMontage* ScaredAnim;
};
