// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BicycleTest/FileParser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileParser() {}
// Cross Module References
	BICYCLETEST_API UScriptStruct* Z_Construct_UScriptStruct_FFrameInfoFusionCrowd();
	UPackage* Z_Construct_UPackage__Script_BicycleTest();
	BICYCLETEST_API UScriptStruct* Z_Construct_UScriptStruct_FAgentInfo();
	BICYCLETEST_API UClass* Z_Construct_UClass_UFileParser_NoRegister();
	BICYCLETEST_API UClass* Z_Construct_UClass_UFileParser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FFrameInfoFusionCrowd::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BICYCLETEST_API uint32 Get_Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrameInfoFusionCrowd, Z_Construct_UPackage__Script_BicycleTest(), TEXT("FrameInfoFusionCrowd"), sizeof(FFrameInfoFusionCrowd), Get_Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Hash());
	}
	return Singleton;
}
template<> BICYCLETEST_API UScriptStruct* StaticStruct<FFrameInfoFusionCrowd>()
{
	return FFrameInfoFusionCrowd::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrameInfoFusionCrowd(FFrameInfoFusionCrowd::StaticStruct, TEXT("/Script/BicycleTest"), TEXT("FrameInfoFusionCrowd"), false, nullptr, nullptr);
static struct FScriptStruct_BicycleTest_StaticRegisterNativesFFrameInfoFusionCrowd
{
	FScriptStruct_BicycleTest_StaticRegisterNativesFFrameInfoFusionCrowd()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrameInfoFusionCrowd")),new UScriptStruct::TCppStructOps<FFrameInfoFusionCrowd>);
	}
} ScriptStruct_BicycleTest_StaticRegisterNativesFFrameInfoFusionCrowd;
	struct Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_agentsInfoForFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_agentsInfoForFrame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_agentsInfoForFrame_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrameInfoFusionCrowd>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::NewProp_agentsInfoForFrame_MetaData[] = {
		{ "Category", "FusionCrowd" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::NewProp_agentsInfoForFrame = { "agentsInfoForFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameInfoFusionCrowd, agentsInfoForFrame), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::NewProp_agentsInfoForFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::NewProp_agentsInfoForFrame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::NewProp_agentsInfoForFrame_Inner = { "agentsInfoForFrame", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAgentInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::NewProp_agentsInfoForFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::NewProp_agentsInfoForFrame_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BicycleTest,
		nullptr,
		&NewStructOps,
		"FrameInfoFusionCrowd",
		sizeof(FFrameInfoFusionCrowd),
		alignof(FFrameInfoFusionCrowd),
		Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrameInfoFusionCrowd()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BicycleTest();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrameInfoFusionCrowd"), sizeof(FFrameInfoFusionCrowd), Get_Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Hash() { return 27502799U; }
class UScriptStruct* FAgentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BICYCLETEST_API uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentInfo, Z_Construct_UPackage__Script_BicycleTest(), TEXT("AgentInfo"), sizeof(FAgentInfo), Get_Z_Construct_UScriptStruct_FAgentInfo_Hash());
	}
	return Singleton;
}
template<> BICYCLETEST_API UScriptStruct* StaticStruct<FAgentInfo>()
{
	return FAgentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgentInfo(FAgentInfo::StaticStruct, TEXT("/Script/BicycleTest"), TEXT("AgentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BicycleTest_StaticRegisterNativesFAgentInfo
{
	FScriptStruct_BicycleTest_StaticRegisterNativesFAgentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AgentInfo")),new UScriptStruct::TCppStructOps<FAgentInfo>);
	}
} ScriptStruct_BicycleTest_StaticRegisterNativesFAgentInfo;
	struct Z_Construct_UScriptStruct_FAgentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orient_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_orient_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orient_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_orient_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_delta_MetaData[] = {
		{ "Category", "FusionCrowd" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, delta), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_Y_MetaData[] = {
		{ "Category", "FusionCrowd" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_Y = { "orient_Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, orient_Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_X_MetaData[] = {
		{ "Category", "FusionCrowd" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_X = { "orient_X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, orient_X), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_y_MetaData[] = {
		{ "Category", "FusionCrowd" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_x_MetaData[] = {
		{ "Category", "FusionCrowd" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id_MetaData[] = {
		{ "Category", "FusionCrowd" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BicycleTest,
		nullptr,
		&NewStructOps,
		"AgentInfo",
		sizeof(FAgentInfo),
		alignof(FAgentInfo),
		Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BicycleTest();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgentInfo"), sizeof(FAgentInfo), Get_Z_Construct_UScriptStruct_FAgentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash() { return 2801989200U; }
	DEFINE_FUNCTION(UFileParser::execGetDataFromCSV)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFrameInfoFusionCrowd>*)Z_Param__Result=P_THIS->GetDataFromCSV(Z_Param_filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileParser::execParseFrameInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_frameString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameInfoFusionCrowd*)Z_Param__Result=P_THIS->ParseFrameInfo(Z_Param_frameString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileParser::execParseFileLines)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ParseFileLines(Z_Param_filename);
		P_NATIVE_END;
	}
	void UFileParser::StaticRegisterNativesUFileParser()
	{
		UClass* Class = UFileParser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataFromCSV", &UFileParser::execGetDataFromCSV },
			{ "ParseFileLines", &UFileParser::execParseFileLines },
			{ "ParseFrameInfo", &UFileParser::execParseFrameInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics
	{
		struct FileParser_eventGetDataFromCSV_Parms
		{
			FString filename;
			TArray<FFrameInfoFusionCrowd> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileParser_eventGetDataFromCSV_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameInfoFusionCrowd, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileParser_eventGetDataFromCSV_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileParser, nullptr, "GetDataFromCSV", nullptr, nullptr, sizeof(FileParser_eventGetDataFromCSV_Parms), Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileParser_GetDataFromCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileParser_GetDataFromCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileParser_ParseFileLines_Statics
	{
		struct FileParser_eventParseFileLines_Parms
		{
			FString filename;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileParser_eventParseFileLines_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileParser_eventParseFileLines_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileParser, nullptr, "ParseFileLines", nullptr, nullptr, sizeof(FileParser_eventParseFileLines_Parms), Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileParser_ParseFileLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileParser_ParseFileLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics
	{
		struct FileParser_eventParseFrameInfo_Parms
		{
			FString frameString;
			FFrameInfoFusionCrowd ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_frameString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileParser_eventParseFrameInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameInfoFusionCrowd, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::NewProp_frameString = { "frameString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileParser_eventParseFrameInfo_Parms, frameString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::NewProp_frameString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileParser, nullptr, "ParseFrameInfo", nullptr, nullptr, sizeof(FileParser_eventParseFrameInfo_Parms), Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileParser_ParseFrameInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileParser_ParseFrameInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileParser_NoRegister()
	{
		return UFileParser::StaticClass();
	}
	struct Z_Construct_UClass_UFileParser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileParser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BicycleTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileParser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileParser_GetDataFromCSV, "GetDataFromCSV" }, // 2326834058
		{ &Z_Construct_UFunction_UFileParser_ParseFileLines, "ParseFileLines" }, // 2851309925
		{ &Z_Construct_UFunction_UFileParser_ParseFrameInfo, "ParseFrameInfo" }, // 4231581491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileParser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileParser.h" },
		{ "ModuleRelativePath", "FileParser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileParser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileParser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileParser_Statics::ClassParams = {
		&UFileParser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileParser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileParser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileParser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileParser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileParser, 278620724);
	template<> BICYCLETEST_API UClass* StaticClass<UFileParser>()
	{
		return UFileParser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileParser(Z_Construct_UClass_UFileParser, &UFileParser::StaticClass, TEXT("/Script/BicycleTest"), TEXT("UFileParser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileParser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
