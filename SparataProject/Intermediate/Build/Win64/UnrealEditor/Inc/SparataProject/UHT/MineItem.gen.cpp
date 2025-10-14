// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SparataProject/Public/MineItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMineItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
SPARATAPROJECT_API UClass* Z_Construct_UClass_ABaseItem();
SPARATAPROJECT_API UClass* Z_Construct_UClass_AMineItem();
SPARATAPROJECT_API UClass* Z_Construct_UClass_AMineItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SparataProject();
// End Cross Module References

// Begin Class AMineItem
void AMineItem::StaticRegisterNativesAMineItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMineItem);
UClass* Z_Construct_UClass_AMineItem_NoRegister()
{
	return AMineItem::StaticClass();
}
struct Z_Construct_UClass_AMineItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MineItem.h" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionCollision_MetaData[] = {
		{ "Category", "Item|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDelay_MetaData[] = {
		{ "Category", "Mine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8f\xad\xeb\xb0\x9c\xea\xb9\x8c\xec\xa7\x80 \xea\xb1\xb8\xeb\xa6\xac\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84 (5\xec\xb4\x88)     \n" },
#endif
		{ "ModuleRelativePath", "Public/MineItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xad\xeb\xb0\x9c\xea\xb9\x8c\xec\xa7\x80 \xea\xb1\xb8\xeb\xa6\xac\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84 (5\xec\xb4\x88)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Mine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8f\xad\xeb\xb0\x9c \xeb\xb2\x94\xec\x9c\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/MineItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xad\xeb\xb0\x9c \xeb\xb2\x94\xec\x9c\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "Mine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8f\xad\xeb\xb0\x9c \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/MineItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xad\xeb\xb0\x9c \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionParticle_MetaData[] = {
		{ "Category", "Item|Effects" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionSound_MetaData[] = {
		{ "Category", "Item|Effects" },
		{ "ModuleRelativePath", "Public/MineItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMineItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionCollision = { "ExplosionCollision", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionCollision_MetaData), NewProp_ExplosionCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionDelay = { "ExplosionDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDelay_MetaData), NewProp_ExplosionDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDamage_MetaData), NewProp_ExplosionDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionParticle = { "ExplosionParticle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionParticle_MetaData), NewProp_ExplosionParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionSound = { "ExplosionSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMineItem, ExplosionSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionSound_MetaData), NewProp_ExplosionSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMineItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMineItem_Statics::NewProp_ExplosionSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMineItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMineItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SparataProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMineItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMineItem_Statics::ClassParams = {
	&AMineItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMineItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMineItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMineItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMineItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMineItem()
{
	if (!Z_Registration_Info_UClass_AMineItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMineItem.OuterSingleton, Z_Construct_UClass_AMineItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMineItem.OuterSingleton;
}
template<> SPARATAPROJECT_API UClass* StaticClass<AMineItem>()
{
	return AMineItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMineItem);
AMineItem::~AMineItem() {}
// End Class AMineItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_MineItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMineItem, AMineItem::StaticClass, TEXT("AMineItem"), &Z_Registration_Info_UClass_AMineItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMineItem), 2222879637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_MineItem_h_2102684501(TEXT("/Script/SparataProject"),
	Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_MineItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_MineItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
