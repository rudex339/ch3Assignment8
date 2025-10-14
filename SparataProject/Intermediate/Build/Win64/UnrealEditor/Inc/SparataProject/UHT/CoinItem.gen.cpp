// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SparataProject/Public/CoinItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinItem() {}

// Begin Cross Module References
SPARATAPROJECT_API UClass* Z_Construct_UClass_ABaseItem();
SPARATAPROJECT_API UClass* Z_Construct_UClass_ACoinItem();
SPARATAPROJECT_API UClass* Z_Construct_UClass_ACoinItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SparataProject();
// End Cross Module References

// Begin Class ACoinItem
void ACoinItem::StaticRegisterNativesACoinItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinItem);
UClass* Z_Construct_UClass_ACoinItem_NoRegister()
{
	return ACoinItem::StaticClass();
}
struct Z_Construct_UClass_ACoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CoinItem.h" },
		{ "ModuleRelativePath", "Public/CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointValue_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbd\x94\xec\x9d\xb8 \xed\x9a\x8d\xeb\x93\x9d \xec\x8b\x9c \xec\x96\xbb\xec\x9d\x84 \xec\xa0\x90\xec\x88\x98 (\xec\x9e\x90\xec\x8b\x9d \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x97\x90\xec\x84\x9c \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xec\x95\x84 \xea\xb0\x92\xeb\xa7\x8c \xeb\xb0\x94\xea\xbf\x94\xec\xa4\x84 \xec\x98\x88\xec\xa0\x95)\n" },
#endif
		{ "ModuleRelativePath", "Public/CoinItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbd\x94\xec\x9d\xb8 \xed\x9a\x8d\xeb\x93\x9d \xec\x8b\x9c \xec\x96\xbb\xec\x9d\x84 \xec\xa0\x90\xec\x88\x98 (\xec\x9e\x90\xec\x8b\x9d \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x97\x90\xec\x84\x9c \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xec\x95\x84 \xea\xb0\x92\xeb\xa7\x8c \xeb\xb0\x94\xea\xbf\x94\xec\xa4\x84 \xec\x98\x88\xec\xa0\x95)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinItem_Statics::NewProp_PointValue = { "PointValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinItem, PointValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointValue_MetaData), NewProp_PointValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinItem_Statics::NewProp_PointValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SparataProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinItem_Statics::ClassParams = {
	&ACoinItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACoinItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoinItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinItem()
{
	if (!Z_Registration_Info_UClass_ACoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinItem.OuterSingleton, Z_Construct_UClass_ACoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinItem.OuterSingleton;
}
template<> SPARATAPROJECT_API UClass* StaticClass<ACoinItem>()
{
	return ACoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinItem);
ACoinItem::~ACoinItem() {}
// End Class ACoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_CoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinItem, ACoinItem::StaticClass, TEXT("ACoinItem"), &Z_Registration_Info_UClass_ACoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinItem), 4044344036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_CoinItem_h_1540612181(TEXT("/Script/SparataProject"),
	Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_CoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_CoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
