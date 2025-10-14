// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpartaGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARATAPROJECT_SpartaGameInstance_generated_h
#error "SpartaGameInstance.generated.h already included, missing '#pragma once' in SpartaGameInstance.h"
#endif
#define SPARATAPROJECT_SpartaGameInstance_generated_h

#define FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddToScore);


#define FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpartaGameInstance(); \
	friend struct Z_Construct_UClass_USpartaGameInstance_Statics; \
public: \
	DECLARE_CLASS(USpartaGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SparataProject"), NO_API) \
	DECLARE_SERIALIZER(USpartaGameInstance)


#define FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpartaGameInstance(USpartaGameInstance&&); \
	USpartaGameInstance(const USpartaGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpartaGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpartaGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpartaGameInstance) \
	NO_API virtual ~USpartaGameInstance();


#define FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_12_PROLOG
#define FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARATAPROJECT_API UClass* StaticClass<class USpartaGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_practice_SparataProject_Source_SparataProject_Public_SpartaGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
