// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SparataProject/Public/SpartaCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
SPARATAPROJECT_API UClass* Z_Construct_UClass_ASpartaCharacter();
SPARATAPROJECT_API UClass* Z_Construct_UClass_ASpartaCharacter_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SparataProject();
// End Cross Module References

// Begin Class ASpartaCharacter Function AddHealth
struct Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics
{
	struct SpartaCharacter_eventAddHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xed\x9a\x8c\xeb\xb3\xb5\xec\x8b\x9c\xed\x82\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xed\x9a\x8c\xeb\xb3\xb5\xec\x8b\x9c\xed\x82\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaCharacter_eventAddHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "AddHealth", nullptr, nullptr, Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::SpartaCharacter_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::SpartaCharacter_eventAddHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaCharacter_AddHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_AddHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execAddHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function AddHealth

// Begin Class ASpartaCharacter Function GetHealth
struct Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics
{
	struct SpartaCharacter_eventGetHealth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\x84 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::SpartaCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::SpartaCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function GetHealth

// Begin Class ASpartaCharacter Function Look
struct Z_Construct_UFunction_ASpartaCharacter_Look_Statics
{
	struct SpartaCharacter_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaCharacter_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaCharacter_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaCharacter_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ASpartaCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaCharacter_Look_Statics::SpartaCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaCharacter_Look_Statics::SpartaCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function Look

// Begin Class ASpartaCharacter Function Move
struct Z_Construct_UFunction_ASpartaCharacter_Move_Statics
{
	struct SpartaCharacter_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x80 FInputActionValue\xeb\xa1\x9c \xec\xa0\x84\xeb\x8b\xac\xeb\x90\xa9\xeb\x8b\x88\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x80 FInputActionValue\xeb\xa1\x9c \xec\xa0\x84\xeb\x8b\xac\xeb\x90\xa9\xeb\x8b\x88\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaCharacter_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaCharacter_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaCharacter_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ASpartaCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaCharacter_Move_Statics::SpartaCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaCharacter_Move_Statics::SpartaCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function Move

// Begin Class ASpartaCharacter Function OnDeath
struct Z_Construct_UFunction_ASpartaCharacter_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xeb\xa7\x9d \xec\xb2\x98\xeb\xa6\xac \xed\x95\xa8\xec\x88\x98 (\xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\xb4 0 \xec\x9d\xb4\xed\x95\x98\xea\xb0\x80 \xeb\x90\x98\xec\x97\x88\xec\x9d\x84 \xeb\x95\x8c \xed\x98\xb8\xec\xb6\x9c)\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xeb\xa7\x9d \xec\xb2\x98\xeb\xa6\xac \xed\x95\xa8\xec\x88\x98 (\xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\xb4 0 \xec\x9d\xb4\xed\x95\x98\xea\xb0\x80 \xeb\x90\x98\xec\x97\x88\xec\x9d\x84 \xeb\x95\x8c \xed\x98\xb8\xec\xb6\x9c)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpartaCharacter_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execOnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath();
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function OnDeath

// Begin Class ASpartaCharacter Function StartJump
struct Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics
{
	struct SpartaCharacter_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaCharacter_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::SpartaCharacter_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::SpartaCharacter_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaCharacter_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function StartJump

// Begin Class ASpartaCharacter Function StartSprint
struct Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics
{
	struct SpartaCharacter_eventStartSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaCharacter_eventStartSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "StartSprint", nullptr, nullptr, Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::SpartaCharacter_eventStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::SpartaCharacter_eventStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaCharacter_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execStartSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function StartSprint

// Begin Class ASpartaCharacter Function StopJump
struct Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics
{
	struct SpartaCharacter_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaCharacter_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::SpartaCharacter_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::SpartaCharacter_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaCharacter_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function StopJump

// Begin Class ASpartaCharacter Function StopSprint
struct Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics
{
	struct SpartaCharacter_eventStopSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaCharacter_eventStopSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaCharacter, nullptr, "StopSprint", nullptr, nullptr, Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::SpartaCharacter_eventStopSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::SpartaCharacter_eventStopSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaCharacter_StopSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaCharacter_StopSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaCharacter::execStopSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaCharacter Function StopSprint

// Begin Class ASpartaCharacter
void ASpartaCharacter::StaticRegisterNativesASpartaCharacter()
{
	UClass* Class = ASpartaCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHealth", &ASpartaCharacter::execAddHealth },
		{ "GetHealth", &ASpartaCharacter::execGetHealth },
		{ "Look", &ASpartaCharacter::execLook },
		{ "Move", &ASpartaCharacter::execMove },
		{ "OnDeath", &ASpartaCharacter::execOnDeath },
		{ "StartJump", &ASpartaCharacter::execStartJump },
		{ "StartSprint", &ASpartaCharacter::execStartSprint },
		{ "StopJump", &ASpartaCharacter::execStopJump },
		{ "StopSprint", &ASpartaCharacter::execStopSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaCharacter);
UClass* Z_Construct_UClass_ASpartaCharacter_NoRegister()
{
	return ASpartaCharacter::StaticClass();
}
struct Z_Construct_UClass_ASpartaCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpartaCharacter.h" },
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverheadWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb8\xb0\xeb\xb3\xb8 \xea\xb1\xb7\xea\xb8\xb0 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb8\xb0\xeb\xb3\xb8 \xea\xb1\xb7\xea\xb8\xb0 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \"\xea\xb8\xb0\xeb\xb3\xb8 \xec\x86\x8d\xeb\x8f\x84\" \xeb\x8c\x80\xeb\xb9\x84 \xeb\xaa\x87 \xeb\xb0\xb0\xeb\xa1\x9c \xeb\xb9\xa0\xeb\xa5\xb4\xea\xb2\x8c \xeb\x8b\xac\xeb\xa6\xb4\xec\xa7\x80 \xea\xb2\xb0\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"\xea\xb8\xb0\xeb\xb3\xb8 \xec\x86\x8d\xeb\x8f\x84\" \xeb\x8c\x80\xeb\xb9\x84 \xeb\xaa\x87 \xeb\xb0\xb0\xeb\xa1\x9c \xeb\xb9\xa0\xeb\xa5\xb4\xea\xb2\x8c \xeb\x8b\xac\xeb\xa6\xb4\xec\xa7\x80 \xea\xb2\xb0\xec\xa0\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/SpartaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverheadWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpartaCharacter_AddHealth, "AddHealth" }, // 2159509763
		{ &Z_Construct_UFunction_ASpartaCharacter_GetHealth, "GetHealth" }, // 2936891103
		{ &Z_Construct_UFunction_ASpartaCharacter_Look, "Look" }, // 1680129857
		{ &Z_Construct_UFunction_ASpartaCharacter_Move, "Move" }, // 1568313068
		{ &Z_Construct_UFunction_ASpartaCharacter_OnDeath, "OnDeath" }, // 203361649
		{ &Z_Construct_UFunction_ASpartaCharacter_StartJump, "StartJump" }, // 3397102948
		{ &Z_Construct_UFunction_ASpartaCharacter_StartSprint, "StartSprint" }, // 3724542354
		{ &Z_Construct_UFunction_ASpartaCharacter_StopJump, "StopJump" }, // 1721884577
		{ &Z_Construct_UFunction_ASpartaCharacter_StopSprint, "StopSprint" }, // 14016579
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaCharacter, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverheadWidget_MetaData), NewProp_OverheadWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaCharacter, NormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSpeed_MetaData), NewProp_NormalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaCharacter, SprintSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedMultiplier_MetaData), NewProp_SprintSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_OverheadWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_NormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_SprintSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaCharacter_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SparataProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaCharacter_Statics::ClassParams = {
	&ASpartaCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpartaCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaCharacter()
{
	if (!Z_Registration_Info_UClass_ASpartaCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaCharacter.OuterSingleton, Z_Construct_UClass_ASpartaCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaCharacter.OuterSingleton;
}
template<> SPARATAPROJECT_API UClass* StaticClass<ASpartaCharacter>()
{
	return ASpartaCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaCharacter);
ASpartaCharacter::~ASpartaCharacter() {}
// End Class ASpartaCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaCharacter, ASpartaCharacter::StaticClass, TEXT("ASpartaCharacter"), &Z_Registration_Info_UClass_ASpartaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaCharacter), 3411555443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaCharacter_h_525145753(TEXT("/Script/SparataProject"),
	Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
