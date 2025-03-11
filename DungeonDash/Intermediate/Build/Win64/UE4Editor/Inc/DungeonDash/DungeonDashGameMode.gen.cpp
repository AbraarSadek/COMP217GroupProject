// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonDash/DungeonDashGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonDashGameMode() {}
// Cross Module References
	DUNGEONDASH_API UClass* Z_Construct_UClass_ADungeonDashGameMode_NoRegister();
	DUNGEONDASH_API UClass* Z_Construct_UClass_ADungeonDashGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonDash();
// End Cross Module References
	void ADungeonDashGameMode::StaticRegisterNativesADungeonDashGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADungeonDashGameMode_NoRegister()
	{
		return ADungeonDashGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonDashGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonDashGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonDash,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonDashGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DungeonDashGameMode.h" },
		{ "ModuleRelativePath", "DungeonDashGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonDashGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonDashGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonDashGameMode_Statics::ClassParams = {
		&ADungeonDashGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonDashGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDashGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonDashGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonDashGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonDashGameMode, 2213495094);
	template<> DUNGEONDASH_API UClass* StaticClass<ADungeonDashGameMode>()
	{
		return ADungeonDashGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonDashGameMode(Z_Construct_UClass_ADungeonDashGameMode, &ADungeonDashGameMode::StaticClass, TEXT("/Script/DungeonDash"), TEXT("ADungeonDashGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonDashGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
