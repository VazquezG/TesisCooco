// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlugInEnemigos/Public/NPC_Basic_DataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_Basic_DataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PLUGINENEMIGOS_API UClass* Z_Construct_UClass_UNPC_Basic_DataAsset();
PLUGINENEMIGOS_API UClass* Z_Construct_UClass_UNPC_Basic_DataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlugInEnemigos();
// End Cross Module References

// Begin Class UNPC_Basic_DataAsset
void UNPC_Basic_DataAsset::StaticRegisterNativesUNPC_Basic_DataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPC_Basic_DataAsset);
UClass* Z_Construct_UClass_UNPC_Basic_DataAsset_NoRegister()
{
	return UNPC_Basic_DataAsset::StaticClass();
}
struct Z_Construct_UClass_UNPC_Basic_DataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NPC_Basic_DataAsset.h" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCName_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Datos generales para todos los NPCs ===\n" },
#endif
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Datos generales para todos los NPCs ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roaming_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "Patrol" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/NPC_Basic_DataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static void NewProp_Roaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Roaming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPC_Basic_DataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_NPCName = { "NPCName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPC_Basic_DataAsset, NPCName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCName_MetaData), NewProp_NPCName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPC_Basic_DataAsset, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPC_Basic_DataAsset, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPC_Basic_DataAsset, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
void Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_Roaming_SetBit(void* Obj)
{
	((UNPC_Basic_DataAsset*)Obj)->Roaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_Roaming = { "Roaming", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPC_Basic_DataAsset), &Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_Roaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roaming_MetaData), NewProp_Roaming_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPC_Basic_DataAsset, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPoints_MetaData), NewProp_PatrolPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_WalkAnim = { "WalkAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPC_Basic_DataAsset, WalkAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkAnim_MetaData), NewProp_WalkAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_RunAnim = { "RunAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPC_Basic_DataAsset, RunAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunAnim_MetaData), NewProp_RunAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_DeathAnim = { "DeathAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPC_Basic_DataAsset, DeathAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnim_MetaData), NewProp_DeathAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_NPCName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_Roaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_PatrolPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_PatrolPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_WalkAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_RunAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::NewProp_DeathAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_PlugInEnemigos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::ClassParams = {
	&UNPC_Basic_DataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPC_Basic_DataAsset()
{
	if (!Z_Registration_Info_UClass_UNPC_Basic_DataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPC_Basic_DataAsset.OuterSingleton, Z_Construct_UClass_UNPC_Basic_DataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPC_Basic_DataAsset.OuterSingleton;
}
template<> PLUGINENEMIGOS_API UClass* StaticClass<UNPC_Basic_DataAsset>()
{
	return UNPC_Basic_DataAsset::StaticClass();
}
UNPC_Basic_DataAsset::UNPC_Basic_DataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPC_Basic_DataAsset);
UNPC_Basic_DataAsset::~UNPC_Basic_DataAsset() {}
// End Class UNPC_Basic_DataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_Basic_DataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPC_Basic_DataAsset, UNPC_Basic_DataAsset::StaticClass, TEXT("UNPC_Basic_DataAsset"), &Z_Registration_Info_UClass_UNPC_Basic_DataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPC_Basic_DataAsset), 3909572591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_Basic_DataAsset_h_2421263973(TEXT("/Script/PlugInEnemigos"),
	Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_Basic_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_NPC_Basic_DataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
