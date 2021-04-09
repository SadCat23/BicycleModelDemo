// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BicycleTest/BicycleTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBicycleTestGameModeBase() {}
// Cross Module References
	BICYCLETEST_API UClass* Z_Construct_UClass_ABicycleTestGameModeBase_NoRegister();
	BICYCLETEST_API UClass* Z_Construct_UClass_ABicycleTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BicycleTest();
// End Cross Module References
	void ABicycleTestGameModeBase::StaticRegisterNativesABicycleTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABicycleTestGameModeBase_NoRegister()
	{
		return ABicycleTestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABicycleTestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABicycleTestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BicycleTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABicycleTestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BicycleTestGameModeBase.h" },
		{ "ModuleRelativePath", "BicycleTestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABicycleTestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABicycleTestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABicycleTestGameModeBase_Statics::ClassParams = {
		&ABicycleTestGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABicycleTestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABicycleTestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABicycleTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABicycleTestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABicycleTestGameModeBase, 160217137);
	template<> BICYCLETEST_API UClass* StaticClass<ABicycleTestGameModeBase>()
	{
		return ABicycleTestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABicycleTestGameModeBase(Z_Construct_UClass_ABicycleTestGameModeBase, &ABicycleTestGameModeBase::StaticClass, TEXT("/Script/BicycleTest"), TEXT("ABicycleTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABicycleTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
