// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameInfoFusionCrowd;
#ifdef BICYCLETEST_FileParser_generated_h
#error "FileParser.generated.h already included, missing '#pragma once' in FileParser.h"
#endif
#define BICYCLETEST_FileParser_generated_h

#define BicycleTest_Source_BicycleTest_FileParser_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFrameInfoFusionCrowd_Statics; \
	BICYCLETEST_API static class UScriptStruct* StaticStruct();


template<> BICYCLETEST_API UScriptStruct* StaticStruct<struct FFrameInfoFusionCrowd>();

#define BicycleTest_Source_BicycleTest_FileParser_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAgentInfo_Statics; \
	BICYCLETEST_API static class UScriptStruct* StaticStruct();


template<> BICYCLETEST_API UScriptStruct* StaticStruct<struct FAgentInfo>();

#define BicycleTest_Source_BicycleTest_FileParser_h_41_SPARSE_DATA
#define BicycleTest_Source_BicycleTest_FileParser_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataFromCSV); \
	DECLARE_FUNCTION(execParseFrameInfo); \
	DECLARE_FUNCTION(execParseFileLines);


#define BicycleTest_Source_BicycleTest_FileParser_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataFromCSV); \
	DECLARE_FUNCTION(execParseFrameInfo); \
	DECLARE_FUNCTION(execParseFileLines);


#define BicycleTest_Source_BicycleTest_FileParser_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileParser(); \
	friend struct Z_Construct_UClass_UFileParser_Statics; \
public: \
	DECLARE_CLASS(UFileParser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BicycleTest"), NO_API) \
	DECLARE_SERIALIZER(UFileParser)


#define BicycleTest_Source_BicycleTest_FileParser_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUFileParser(); \
	friend struct Z_Construct_UClass_UFileParser_Statics; \
public: \
	DECLARE_CLASS(UFileParser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BicycleTest"), NO_API) \
	DECLARE_SERIALIZER(UFileParser)


#define BicycleTest_Source_BicycleTest_FileParser_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileParser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileParser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileParser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileParser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileParser(UFileParser&&); \
	NO_API UFileParser(const UFileParser&); \
public:


#define BicycleTest_Source_BicycleTest_FileParser_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileParser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileParser(UFileParser&&); \
	NO_API UFileParser(const UFileParser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileParser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileParser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileParser)


#define BicycleTest_Source_BicycleTest_FileParser_h_41_PRIVATE_PROPERTY_OFFSET
#define BicycleTest_Source_BicycleTest_FileParser_h_38_PROLOG
#define BicycleTest_Source_BicycleTest_FileParser_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BicycleTest_Source_BicycleTest_FileParser_h_41_PRIVATE_PROPERTY_OFFSET \
	BicycleTest_Source_BicycleTest_FileParser_h_41_SPARSE_DATA \
	BicycleTest_Source_BicycleTest_FileParser_h_41_RPC_WRAPPERS \
	BicycleTest_Source_BicycleTest_FileParser_h_41_INCLASS \
	BicycleTest_Source_BicycleTest_FileParser_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BicycleTest_Source_BicycleTest_FileParser_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BicycleTest_Source_BicycleTest_FileParser_h_41_PRIVATE_PROPERTY_OFFSET \
	BicycleTest_Source_BicycleTest_FileParser_h_41_SPARSE_DATA \
	BicycleTest_Source_BicycleTest_FileParser_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	BicycleTest_Source_BicycleTest_FileParser_h_41_INCLASS_NO_PURE_DECLS \
	BicycleTest_Source_BicycleTest_FileParser_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BICYCLETEST_API UClass* StaticClass<class UFileParser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BicycleTest_Source_BicycleTest_FileParser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
