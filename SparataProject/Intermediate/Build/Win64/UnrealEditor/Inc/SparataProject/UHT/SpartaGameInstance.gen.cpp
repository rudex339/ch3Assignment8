// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SparataProject/Public/SpartaGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
SPARATAPROJECT_API UClass* Z_Construct_UClass_USpartaGameInstance();
SPARATAPROJECT_API UClass* Z_Construct_UClass_USpartaGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_SparataProject();
// End Cross Module References

// Begin Class USpartaGameInstance Function AddToScore
struct Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics
{
	struct SpartaGameInstance_eventAddToScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/SpartaGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaGameInstance_eventAddToScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpartaGameInstance, nullptr, "AddToScore", nullptr, nullptr, Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::SpartaGameInstance_eventAddToScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::SpartaGameInstance_eventAddToScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpartaGameInstance_AddToScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpartaGameInstance_AddToScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpartaGameInstance::execAddToScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class USpartaGameInstance Function AddToScore

// Begin Class USpartaGameInstance
void USpartaGameInstance::StaticRegisterNativesUSpartaGameInstance()
{
	UClass* Class = USpartaGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToScore", &USpartaGameInstance::execAddToScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpartaGameInstance);
UClass* Z_Construct_UClass_USpartaGameInstance_NoRegister()
{
	return USpartaGameInstance::StaticClass();
}
struct Z_Construct_UClass_USpartaGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpartaGameInstance.h" },
		{ "ModuleRelativePath", "Public/SpartaGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[] = {
		{ "Category", "GameData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\x8c\xec\x9e\x84 \xec\xa0\x84\xec\xb2\xb4 \xeb\x88\x84\xec\xa0\x81 \xec\xa0\x90\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xec\xa0\x84\xec\xb2\xb4 \xeb\x88\x84\xec\xa0\x81 \xec\xa0\x90\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "GameData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4 (GameState\xec\x97\x90\xec\x84\x9c\xeb\x8f\x84 \xea\xb4\x80\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\xa7\x80\xeb\xa7\x8c, \xeb\xa7\xb5 \xec\xa0\x84\xed\x99\x98 \xed\x9b\x84\xec\x97\x90\xeb\x8f\x84 \xec\x82\xb4\xeb\xa6\xac\xea\xb3\xa0 \xec\x8b\xb6\xeb\x8b\xa4\xeb\xa9\xb4 GameInstance\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c)\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4 (GameState\xec\x97\x90\xec\x84\x9c\xeb\x8f\x84 \xea\xb4\x80\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\xa7\x80\xeb\xa7\x8c, \xeb\xa7\xb5 \xec\xa0\x84\xed\x99\x98 \xed\x9b\x84\xec\x97\x90\xeb\x8f\x84 \xec\x82\xb4\xeb\xa6\xac\xea\xb3\xa0 \xec\x8b\xb6\xeb\x8b\xa4\xeb\xa9\xb4 GameInstance\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpartaGameInstance_AddToScore, "AddToScore" }, // 2901152938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpartaGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpartaGameInstance_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpartaGameInstance, TotalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalScore_MetaData), NewProp_TotalScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpartaGameInstance_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpartaGameInstance, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpartaGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpartaGameInstance_Statics::NewProp_TotalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpartaGameInstance_Statics::NewProp_CurrentLevelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpartaGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpartaGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_SparataProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpartaGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpartaGameInstance_Statics::ClassParams = {
	&USpartaGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpartaGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpartaGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpartaGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USpartaGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpartaGameInstance()
{
	if (!Z_Registration_Info_UClass_USpartaGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpartaGameInstance.OuterSingleton, Z_Construct_UClass_USpartaGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpartaGameInstance.OuterSingleton;
}
template<> SPARATAPROJECT_API UClass* StaticClass<USpartaGameInstance>()
{
	return USpartaGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpartaGameInstance);
USpartaGameInstance::~USpartaGameInstance() {}
// End Class USpartaGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpartaGameInstance, USpartaGameInstance::StaticClass, TEXT("USpartaGameInstance"), &Z_Registration_Info_UClass_USpartaGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpartaGameInstance), 1616999942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_3034903601(TEXT("/Script/SparataProject"),
	Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
