// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlugInEnemigos/Public/Enemy_NPC_DataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_NPC_DataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
PLUGINENEMIGOS_API UClass* Z_Construct_UClass_UEnemy_NPC_DataAsset();
PLUGINENEMIGOS_API UClass* Z_Construct_UClass_UEnemy_NPC_DataAsset_NoRegister();
PLUGINENEMIGOS_API UClass* Z_Construct_UClass_UNPC_Basic_DataAsset();
UPackage* Z_Construct_UPackage__Script_PlugInEnemigos();
// End Cross Module References

// Begin Class UEnemy_NPC_DataAsset
void UEnemy_NPC_DataAsset::StaticRegisterNativesUEnemy_NPC_DataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemy_NPC_DataAsset);
UClass* Z_Construct_UClass_UEnemy_NPC_DataAsset_NoRegister()
{
	return UEnemy_NPC_DataAsset::StaticClass();
}
struct Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemy_NPC_DataAsset.h" },
		{ "ModuleRelativePath", "Public/Enemy_NPC_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Variables espec\xef\xbf\xbd""ficas para el NPC agresivo ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy_NPC_DataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Variables espec\xef\xbf\xbd""ficas para el NPC agresivo ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Enemy_NPC_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCoolDown_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Enemy_NPC_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Enemy_NPC_DataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCoolDown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy_NPC_DataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy_NPC_DataAsset, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy_NPC_DataAsset, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::NewProp_AttackCoolDown = { "AttackCoolDown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy_NPC_DataAsset, AttackCoolDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCoolDown_MetaData), NewProp_AttackCoolDown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemy_NPC_DataAsset, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnim_MetaData), NewProp_AttackAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::NewProp_AttackCoolDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::NewProp_AttackAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNPC_Basic_DataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_PlugInEnemigos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::ClassParams = {
	&UEnemy_NPC_DataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemy_NPC_DataAsset()
{
	if (!Z_Registration_Info_UClass_UEnemy_NPC_DataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemy_NPC_DataAsset.OuterSingleton, Z_Construct_UClass_UEnemy_NPC_DataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemy_NPC_DataAsset.OuterSingleton;
}
template<> PLUGINENEMIGOS_API UClass* StaticClass<UEnemy_NPC_DataAsset>()
{
	return UEnemy_NPC_DataAsset::StaticClass();
}
UEnemy_NPC_DataAsset::UEnemy_NPC_DataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy_NPC_DataAsset);
UEnemy_NPC_DataAsset::~UEnemy_NPC_DataAsset() {}
// End Class UEnemy_NPC_DataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_Enemy_NPC_DataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemy_NPC_DataAsset, UEnemy_NPC_DataAsset::StaticClass, TEXT("UEnemy_NPC_DataAsset"), &Z_Registration_Info_UClass_UEnemy_NPC_DataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemy_NPC_DataAsset), 891185522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_Enemy_NPC_DataAsset_h_2216726483(TEXT("/Script/PlugInEnemigos"),
	Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_Enemy_NPC_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_Enemy_NPC_DataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
