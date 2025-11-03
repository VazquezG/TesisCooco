// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "NPC_BehaviourState.generated.h"

UENUM(BlueprintType)
enum class ENPC_BehaviourState : uint8
{

    Patrol      UMETA(DisplayName = "Patrol"),
    Chase       UMETA(DisplayName = "Chase"),
    Attacking   UMETA(DisplayName = "Attacking"),
    Wonder      UMETA(DisplayName = "Wonder"),
    Talking     UMETA(DisplayName = "Talking"),
    Flee     UMETA(DisplayName = "Flee")
};
