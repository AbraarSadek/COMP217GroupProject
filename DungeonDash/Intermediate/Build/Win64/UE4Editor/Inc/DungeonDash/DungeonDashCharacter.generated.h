// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONDASH_DungeonDashCharacter_generated_h
#error "DungeonDashCharacter.generated.h already included, missing '#pragma once' in DungeonDashCharacter.h"
#endif
#define DUNGEONDASH_DungeonDashCharacter_generated_h

#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_SPARSE_DATA
#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_RPC_WRAPPERS
#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonDashCharacter(); \
	friend struct Z_Construct_UClass_ADungeonDashCharacter_Statics; \
public: \
	DECLARE_CLASS(ADungeonDashCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonDash"), NO_API) \
	DECLARE_SERIALIZER(ADungeonDashCharacter)


#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADungeonDashCharacter(); \
	friend struct Z_Construct_UClass_ADungeonDashCharacter_Statics; \
public: \
	DECLARE_CLASS(ADungeonDashCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonDash"), NO_API) \
	DECLARE_SERIALIZER(ADungeonDashCharacter)


#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonDashCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonDashCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonDashCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonDashCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonDashCharacter(ADungeonDashCharacter&&); \
	NO_API ADungeonDashCharacter(const ADungeonDashCharacter&); \
public:


#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonDashCharacter(ADungeonDashCharacter&&); \
	NO_API ADungeonDashCharacter(const ADungeonDashCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonDashCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonDashCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonDashCharacter)


#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADungeonDashCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADungeonDashCharacter, FollowCamera); }


#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_9_PROLOG
#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_SPARSE_DATA \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_RPC_WRAPPERS \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_INCLASS \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_SPARSE_DATA \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DungeonDash_Source_DungeonDash_DungeonDashCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONDASH_API UClass* StaticClass<class ADungeonDashCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DungeonDash_Source_DungeonDash_DungeonDashCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
