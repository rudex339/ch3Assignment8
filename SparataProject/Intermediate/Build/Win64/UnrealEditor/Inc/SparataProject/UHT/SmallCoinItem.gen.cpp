// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SparataProject/Public/SmallCoinItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmallCoinItem() {}

// Begin Cross Module References
SPARATAPROJECT_API UClass* Z_Construct_UClass_ACoinItem();
SPARATAPROJECT_API UClass* Z_Construct_UClass_ASmallCoinItem();
SPARATAPROJECT_API UClass* Z_Construct_UClass_ASmallCoinItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SparataProject();
// End Cross Module References

// Begin Class ASmallCoinItem
void ASmallCoinItem::StaticRegisterNativesASmallCoinItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmallCoinItem);
UClass* Z_Construct_UClass_ASmallCoinItem_NoRegister()
{
	return ASmallCoinItem::StaticClass();
}
struct Z_Construct_UClass_ASmallCoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SmallCoinItem.h" },
		{ "ModuleRelativePath", "Public/SmallCoinItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmallCoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASmallCoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACoinItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SparataProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASmallCoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmallCoinItem_Statics::ClassParams = {
	&ASmallCoinItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASmallCoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASmallCoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASmallCoinItem()
{
	if (!Z_Registration_Info_UClass_ASmallCoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmallCoinItem.OuterSingleton, Z_Construct_UClass_ASmallCoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASmallCoinItem.OuterSingleton;
}
template<> SPARATAPROJECT_API UClass* StaticClass<ASmallCoinItem>()
{
	return ASmallCoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASmallCoinItem);
ASmallCoinItem::~ASmallCoinItem() {}
// End Class ASmallCoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SmallCoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASmallCoinItem, ASmallCoinItem::StaticClass, TEXT("ASmallCoinItem"), &Z_Registration_Info_UClass_ASmallCoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmallCoinItem), 3417274491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SmallCoinItem_h_2822359293(TEXT("/Script/SparataProject"),
	Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SmallCoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SmallCoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
