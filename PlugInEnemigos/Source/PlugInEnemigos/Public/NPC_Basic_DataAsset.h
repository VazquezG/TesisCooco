// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NameTypes.h"
#include "Engine/DataAsset.h"
#include "Animation/AnimMontage.h"
#include "NPC_Basic_DataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PLUGINENEMIGOS_API UNPC_Basic_DataAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    // === Datos generales para todos los NPCs ===
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "General")
    FName NPCName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    float Health = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float WalkSpeed = 200.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float RunSpeed = 400.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    bool Roaming = true;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Patrol")
    TArray<FVector> PatrolPoints;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
    UAnimMontage* WalkAnim;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
    UAnimMontage* RunAnim;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
    UAnimMontage* DeathAnim;
};