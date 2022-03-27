// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQueryResultRows;
struct FQueryResultRow;
class UFH_ConnectionObject;
#ifdef FH_MYSQL_BPFuncLib_FHSQL_generated_h
#error "BPFuncLib_FHSQL.generated.h already included, missing '#pragma once' in BPFuncLib_FHSQL.h"
#endif
#define FH_MYSQL_BPFuncLib_FHSQL_generated_h

#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultRows_Statics; \
	FH_MYSQL_API static class UScriptStruct* StaticStruct();


template<> FH_MYSQL_API UScriptStruct* StaticStruct<struct FQueryResultRows>();

#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultRow_Statics; \
	FH_MYSQL_API static class UScriptStruct* StaticStruct();


template<> FH_MYSQL_API UScriptStruct* StaticStruct<struct FQueryResultRow>();

#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_SPARSE_DATA
#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRowByIndex); \
	DECLARE_FUNCTION(execSelectByColumnsFormatSqlQuery); \
	DECLARE_FUNCTION(execSelectAllFormatSqlQuery); \
	DECLARE_FUNCTION(execSelectOnTableData); \
	DECLARE_FUNCTION(execDeleteByWhereFormatSqlQuery); \
	DECLARE_FUNCTION(execDeleteAllFormatSqlQuery); \
	DECLARE_FUNCTION(execUpdateByWhereFormatSqlQuery); \
	DECLARE_FUNCTION(execUpdateAllFormatSqlQuery); \
	DECLARE_FUNCTION(execInsertFormatSqlQuery); \
	DECLARE_FUNCTION(execActionOnTableData); \
	DECLARE_FUNCTION(execCloseConnection); \
	DECLARE_FUNCTION(execGetConnectionState); \
	DECLARE_FUNCTION(execConnectToMySQL);


#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRowByIndex); \
	DECLARE_FUNCTION(execSelectByColumnsFormatSqlQuery); \
	DECLARE_FUNCTION(execSelectAllFormatSqlQuery); \
	DECLARE_FUNCTION(execSelectOnTableData); \
	DECLARE_FUNCTION(execDeleteByWhereFormatSqlQuery); \
	DECLARE_FUNCTION(execDeleteAllFormatSqlQuery); \
	DECLARE_FUNCTION(execUpdateByWhereFormatSqlQuery); \
	DECLARE_FUNCTION(execUpdateAllFormatSqlQuery); \
	DECLARE_FUNCTION(execInsertFormatSqlQuery); \
	DECLARE_FUNCTION(execActionOnTableData); \
	DECLARE_FUNCTION(execCloseConnection); \
	DECLARE_FUNCTION(execGetConnectionState); \
	DECLARE_FUNCTION(execConnectToMySQL);


#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPFuncLib_FHSQL(); \
	friend struct Z_Construct_UClass_UBPFuncLib_FHSQL_Statics; \
public: \
	DECLARE_CLASS(UBPFuncLib_FHSQL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FH_MySQL"), NO_API) \
	DECLARE_SERIALIZER(UBPFuncLib_FHSQL)


#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUBPFuncLib_FHSQL(); \
	friend struct Z_Construct_UClass_UBPFuncLib_FHSQL_Statics; \
public: \
	DECLARE_CLASS(UBPFuncLib_FHSQL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FH_MySQL"), NO_API) \
	DECLARE_SERIALIZER(UBPFuncLib_FHSQL)


#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFuncLib_FHSQL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFuncLib_FHSQL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFuncLib_FHSQL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFuncLib_FHSQL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPFuncLib_FHSQL(UBPFuncLib_FHSQL&&); \
	NO_API UBPFuncLib_FHSQL(const UBPFuncLib_FHSQL&); \
public:


#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFuncLib_FHSQL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPFuncLib_FHSQL(UBPFuncLib_FHSQL&&); \
	NO_API UBPFuncLib_FHSQL(const UBPFuncLib_FHSQL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFuncLib_FHSQL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFuncLib_FHSQL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFuncLib_FHSQL)


#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_26_PROLOG
#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_SPARSE_DATA \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_RPC_WRAPPERS \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_INCLASS \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_SPARSE_DATA \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FH_MYSQL_API UClass* StaticClass<class UBPFuncLib_FHSQL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FH_MySQL_Source_FH_MySQL_Public_BPFuncLib_FHSQL_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
