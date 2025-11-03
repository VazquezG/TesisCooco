// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC_BehaviourState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLUGINENEMIGOS_NPC_BehaviourState_generated_h
#error "NPC_BehaviourState.generated.h already included, missing '#pragma once' in NPC_BehaviourState.h"
#endif
#define PLUGINENEMIGOS_NPC_BehaviourState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_BehaviourState_h


#define FOREACH_ENUM_ENPC_BEHAVIOURSTATE(op) \
	op(ENPC_BehaviourState::Patrol) \
	op(ENPC_BehaviourState::Chase) \
	op(ENPC_BehaviourState::Attacking) \
	op(ENPC_BehaviourState::Wonder) \
	op(ENPC_BehaviourState::Talking) \
	op(ENPC_BehaviourState::Flee) 

enum class ENPC_BehaviourState : uint8;
template<> struct TIsUEnumClass<ENPC_BehaviourState> { enum { Value = true }; };
template<> PLUGINENEMIGOS_API UEnum* StaticEnum<ENPC_BehaviourState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
