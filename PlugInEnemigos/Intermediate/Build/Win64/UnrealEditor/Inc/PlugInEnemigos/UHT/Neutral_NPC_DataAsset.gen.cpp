// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlugInEnemigos/Public/Neutral_NPC_DataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeutral_NPC_DataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
PLUGINENEMIGOS_API UClass* Z_Construct_UClass_UNeutral_NPC_DataAsset();
PLUGINENEMIGOS_API UClass* Z_Construct_UClass_UNeutral_NPC_DataAsset_NoRegister();
PLUGINENEMIGOS_API UClass* Z_Construct_UClass_UNPC_Basic_DataAsset();
UPackage* Z_Construct_UPackage__Script_PlugInEnemigos();
// End Cross Module References

// Begin Class UNeutral_NPC_DataAsset
void UNeutral_NPC_DataAsset::StaticRegisterNativesUNeutral_NPC_DataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeutral_NPC_DataAsset);
UClass* Z_Construct_UClass_UNeutral_NPC_DataAsset_NoRegister()
{
	return UNeutral_NPC_DataAsset::StaticClass();
}
struct Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Neutral_NPC_DataAsset.h" },
		{ "ModuleRelativePath", "Public/Neutral_NPC_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaredAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Neutral_NPC_DataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScaredAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeutral_NPC_DataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::NewProp_ScaredAnim = { "ScaredAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeutral_NPC_DataAsset, ScaredAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaredAnim_MetaData), NewProp_ScaredAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::NewProp_ScaredAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNPC_Basic_DataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_PlugInEnemigos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::ClassParams = {
	&UNeutral_NPC_DataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNeutral_NPC_DataAsset()
{
	if (!Z_Registration_Info_UClass_UNeutral_NPC_DataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeutral_NPC_DataAsset.OuterSingleton, Z_Construct_UClass_UNeutral_NPC_DataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNeutral_NPC_DataAsset.OuterSingleton;
}
template<> PLUGINENEMIGOS_API UClass* StaticClass<UNeutral_NPC_DataAsset>()
{
	return UNeutral_NPC_DataAsset::StaticClass();
}
UNeutral_NPC_DataAsset::UNeutral_NPC_DataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNeutral_NPC_DataAsset);
UNeutral_NPC_DataAsset::~UNeutral_NPC_DataAsset() {}
// End Class UNeutral_NPC_DataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_Neutral_NPC_DataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNeutral_NPC_DataAsset, UNeutral_NPC_DataAsset::StaticClass, TEXT("UNeutral_NPC_DataAsset"), &Z_Registration_Info_UClass_UNeutral_NPC_DataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeutral_NPC_DataAsset), 3441684090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_Neutral_NPC_DataAsset_h_3910065314(TEXT("/Script/PlugInEnemigos"),
	Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_Neutral_NPC_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlugInEnemigos_Source_PlugInEnemigos_Public_Neutral_NPC_DataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
