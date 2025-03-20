// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonDash/TestEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestEnemy() {}
// Cross Module References
	DUNGEONDASH_API UClass* Z_Construct_UClass_ATestEnemy_NoRegister();
	DUNGEONDASH_API UClass* Z_Construct_UClass_ATestEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonDash();
// End Cross Module References
	void ATestEnemy::StaticRegisterNativesATestEnemy()
	{
	}
	UClass* Z_Construct_UClass_ATestEnemy_NoRegister()
	{
		return ATestEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ATestEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestEnemy.h" },
		{ "ModuleRelativePath", "TestEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestEnemy_Statics::ClassParams = {
		&ATestEnemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATestEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestEnemy, 4290059048);
	template<> DUNGEONDASH_API UClass* StaticClass<ATestEnemy>()
	{
		return ATestEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestEnemy(Z_Construct_UClass_ATestEnemy, &ATestEnemy::StaticClass, TEXT("/Script/DungeonDash"), TEXT("ATestEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
