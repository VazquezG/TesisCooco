// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlugInEnemigos/Public/NPC_BehaviourState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_BehaviourState() {}

// Begin Cross Module References
PLUGINENEMIGOS_API UEnum* Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState();
UPackage* Z_Construct_UPackage__Script_PlugInEnemigos();
// End Cross Module References

// Begin Enum ENPC_BehaviourState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENPC_BehaviourState;
static UEnum* ENPC_BehaviourState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENPC_BehaviourState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENPC_BehaviourState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState, (UObject*)Z_Construct_UPackage__Script_PlugInEnemigos(), TEXT("ENPC_BehaviourState"));
	}
	return Z_Registration_Info_UEnum_ENPC_BehaviourState.OuterSingleton;
}
template<> PLUGINENEMIGOS_API UEnum* StaticEnum<ENPC_BehaviourState>()
{
	return ENPC_BehaviourState_StaticEnum();
}
struct Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking" },
		{ "Attacking.Name", "ENPC_BehaviourState::Attacking" },
		{ "BlueprintType", "true" },
		{ "Chase.DisplayName", "Chase" },
		{ "Chase.Name", "ENPC_BehaviourState::Chase" },
		{ "Flee.DisplayName", "Flee" },
		{ "Flee.Name", "ENPC_BehaviourState::Flee" },
		{ "ModuleRelativePath", "Public/NPC_BehaviourState.h" },
		{ "Patrol.DisplayName", "Patrol" },
		{ "Patrol.Name", "ENPC_BehaviourState::Patrol" },
		{ "Talking.DisplayName", "Talking" },
		{ "Talking.Name", "ENPC_BehaviourState::Talking" },
		{ "Wonder.DisplayName", "Wonder" },
		{ "Wonder.Name", "ENPC_BehaviourState::Wonder" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENPC_BehaviourState::Patrol", (int64)ENPC_BehaviourState::Patrol },
		{ "ENPC_BehaviourState::Chase", (int64)ENPC_BehaviourState::Chase },
		{ "ENPC_BehaviourState::Attacking", (int64)ENPC_BehaviourState::Attacking },
		{ "ENPC_BehaviourState::Wonder", (int64)ENPC_BehaviourState::Wonder },
		{ "ENPC_BehaviourState::Talking", (int64)ENPC_BehaviourState::Talking },
		{ "ENPC_BehaviourState::Flee", (int64)ENPC_BehaviourState::Flee },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlugInEnemigos,
	nullptr,
	"ENPC_BehaviourState",
	"ENPC_BehaviourState",
	Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState()
{
	if (!Z_Registration_Info_UEnum_ENPC_BehaviourState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENPC_BehaviourState.InnerSingleton, Z_Construct_UEnum_PlugInEnemigos_ENPC_BehaviourState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENPC_BehaviourState.InnerSingleton;
}
// End Enum ENPC_BehaviourState

// Begin Registration
struct Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_BehaviourState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENPC_BehaviourState_StaticEnum, TEXT("ENPC_BehaviourState"), &Z_Registration_Info_UEnum_ENPC_BehaviourState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 229453712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_BehaviourState_h_1421199678(TEXT("/Script/PlugInEnemigos"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_BehaviourState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_BehaviourState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
