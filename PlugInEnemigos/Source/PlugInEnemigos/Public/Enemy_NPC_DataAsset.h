// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC_Basic_DataAsset.h"
#include "Enemy_NPC_DataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PLUGINENEMIGOS_API UEnemy_NPC_DataAsset : public UNPC_Basic_DataAsset
{
    GENERATED_BODY()

public:
    // --- Variables específicas para el NPC agresivo ---
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
    float AttackDamage = 20.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
    float AttackRange = 150.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
    float AttackCoolDown = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
    UAnimMontage* AttackAnim;

    /*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Behavior")
    TEnumAsByte<EState_Enemy_NPC> BehaviorState;*/
};
