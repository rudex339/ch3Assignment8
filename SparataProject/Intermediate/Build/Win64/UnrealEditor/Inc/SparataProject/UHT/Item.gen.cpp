// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SparataProject/Public/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPARATAPROJECT_API UClass* Z_Construct_UClass_AItem();
SPARATAPROJECT_API UClass* Z_Construct_UClass_AItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SparataProject();
// End Cross Module References

// Begin Class AItem
void AItem::StaticRegisterNativesAItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
UClass* Z_Construct_UClass_AItem_NoRegister()
{
	return AItem::StaticClass();
}
struct Z_Construct_UClass_AItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item.h" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SparataProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
	&AItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItem()
{
	if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem.OuterSingleton;
}
template<> SPARATAPROJECT_API UClass* StaticClass<AItem>()
{
	return AItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
AItem::~AItem() {}
// End Class AItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 275660030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_Item_h_3327874574(TEXT("/Script/SparataProject"),
	Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
