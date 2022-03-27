// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FH_MySQL/Public/BPFuncLib_FHSQL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFuncLib_FHSQL() {}
// Cross Module References
	FH_MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRows();
	UPackage* Z_Construct_UPackage__Script_FH_MySQL();
	FH_MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRow();
	FH_MYSQL_API UClass* Z_Construct_UClass_UBPFuncLib_FHSQL_NoRegister();
	FH_MYSQL_API UClass* Z_Construct_UClass_UBPFuncLib_FHSQL();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FH_MYSQL_API UClass* Z_Construct_UClass_UFH_ConnectionObject_NoRegister();
// End Cross Module References
class UScriptStruct* FQueryResultRows::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FH_MYSQL_API uint32 Get_Z_Construct_UScriptStruct_FQueryResultRows_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultRows, Z_Construct_UPackage__Script_FH_MySQL(), TEXT("QueryResultRows"), sizeof(FQueryResultRows), Get_Z_Construct_UScriptStruct_FQueryResultRows_Hash());
	}
	return Singleton;
}
template<> FH_MYSQL_API UScriptStruct* StaticStruct<FQueryResultRows>()
{
	return FQueryResultRows::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueryResultRows(FQueryResultRows::StaticStruct, TEXT("/Script/FH_MySQL"), TEXT("QueryResultRows"), false, nullptr, nullptr);
static struct FScriptStruct_FH_MySQL_StaticRegisterNativesFQueryResultRows
{
	FScriptStruct_FH_MySQL_StaticRegisterNativesFQueryResultRows()
	{
		UScriptStruct::DeferCppStructOps<FQueryResultRows>(FName(TEXT("QueryResultRows")));
	}
} ScriptStruct_FH_MySQL_StaticRegisterNativesFQueryResultRows;
	struct Z_Construct_UScriptStruct_FQueryResultRows_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RowsValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowsValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRows_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultRows>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_Inner = { "RowsValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQueryResultRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_MetaData[] = {
		{ "Category", "MySQL|Result Rows Value" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue = { "RowsValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueryResultRows, RowsValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueryResultRows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultRows_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FH_MySQL,
		nullptr,
		&NewStructOps,
		"QueryResultRows",
		sizeof(FQueryResultRows),
		alignof(FQueryResultRows),
		Z_Construct_UScriptStruct_FQueryResultRows_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRows_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRows_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRows_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRows()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueryResultRows_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FH_MySQL();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueryResultRows"), sizeof(FQueryResultRows), Get_Z_Construct_UScriptStruct_FQueryResultRows_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueryResultRows_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueryResultRows_Hash() { return 1163561120U; }
class UScriptStruct* FQueryResultRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FH_MYSQL_API uint32 Get_Z_Construct_UScriptStruct_FQueryResultRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultRow, Z_Construct_UPackage__Script_FH_MySQL(), TEXT("QueryResultRow"), sizeof(FQueryResultRow), Get_Z_Construct_UScriptStruct_FQueryResultRow_Hash());
	}
	return Singleton;
}
template<> FH_MYSQL_API UScriptStruct* StaticStruct<FQueryResultRow>()
{
	return FQueryResultRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueryResultRow(FQueryResultRow::StaticStruct, TEXT("/Script/FH_MySQL"), TEXT("QueryResultRow"), false, nullptr, nullptr);
static struct FScriptStruct_FH_MySQL_StaticRegisterNativesFQueryResultRow
{
	FScriptStruct_FH_MySQL_StaticRegisterNativesFQueryResultRow()
	{
		UScriptStruct::DeferCppStructOps<FQueryResultRow>(FName(TEXT("QueryResultRow")));
	}
} ScriptStruct_FH_MySQL_StaticRegisterNativesFQueryResultRow;
	struct Z_Construct_UScriptStruct_FQueryResultRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RowValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultRow>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_Inner = { "RowValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_MetaData[] = {
		{ "Category", "MySQL|Result Row Value" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue = { "RowValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueryResultRow, RowValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FH_MySQL,
		nullptr,
		&NewStructOps,
		"QueryResultRow",
		sizeof(FQueryResultRow),
		alignof(FQueryResultRow),
		Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueryResultRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FH_MySQL();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueryResultRow"), sizeof(FQueryResultRow), Get_Z_Construct_UScriptStruct_FQueryResultRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueryResultRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueryResultRow_Hash() { return 2757909222U; }
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execGetRowByIndex)
	{
		P_GET_STRUCT_REF(FQueryResultRows,Z_Param_Out_ResultRows);
		P_GET_PROPERTY(FIntProperty,Z_Param_RowIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQueryResultRow*)Z_Param__Result=UBPFuncLib_FHSQL::GetRowByIndex(Z_Param_Out_ResultRows,Z_Param_RowIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execSelectByColumnsFormatSqlQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Columns);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFuncLib_FHSQL::SelectByColumnsFormatSqlQuery(Z_Param_TableName,Z_Param_Columns);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execSelectAllFormatSqlQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFuncLib_FHSQL::SelectAllFormatSqlQuery(Z_Param_TableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execSelectOnTableData)
	{
		P_GET_OBJECT(UFH_ConnectionObject,Z_Param_ConnectionObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlQuery);
		P_GET_STRUCT_REF(FQueryResultRows,Z_Param_Out_ResultRows);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBPFuncLib_FHSQL::SelectOnTableData(Z_Param_ConnectionObject,Z_Param_SqlQuery,Z_Param_Out_ResultRows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execDeleteByWhereFormatSqlQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_WhereName);
		P_GET_PROPERTY(FStrProperty,Z_Param_WhereSymbol);
		P_GET_PROPERTY(FStrProperty,Z_Param_WhereValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFuncLib_FHSQL::DeleteByWhereFormatSqlQuery(Z_Param_TableName,Z_Param_WhereName,Z_Param_WhereSymbol,Z_Param_WhereValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execDeleteAllFormatSqlQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFuncLib_FHSQL::DeleteAllFormatSqlQuery(Z_Param_TableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execUpdateByWhereFormatSqlQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_RowName);
		P_GET_PROPERTY(FStrProperty,Z_Param_WhereName);
		P_GET_PROPERTY(FStrProperty,Z_Param_WhereSymbol);
		P_GET_PROPERTY(FStrProperty,Z_Param_WhereValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_UpdateValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFuncLib_FHSQL::UpdateByWhereFormatSqlQuery(Z_Param_TableName,Z_Param_RowName,Z_Param_WhereName,Z_Param_WhereSymbol,Z_Param_WhereValue,Z_Param_UpdateValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execUpdateAllFormatSqlQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_RowName);
		P_GET_PROPERTY(FStrProperty,Z_Param_UpdateValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFuncLib_FHSQL::UpdateAllFormatSqlQuery(Z_Param_TableName,Z_Param_RowName,Z_Param_UpdateValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execInsertFormatSqlQuery)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InsertValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBPFuncLib_FHSQL::InsertFormatSqlQuery(Z_Param_TableName,Z_Param_InsertValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execActionOnTableData)
	{
		P_GET_OBJECT(UFH_ConnectionObject,Z_Param_ConnectionObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBPFuncLib_FHSQL::ActionOnTableData(Z_Param_ConnectionObject,Z_Param_SqlQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execCloseConnection)
	{
		P_GET_OBJECT(UFH_ConnectionObject,Z_Param_ConnectionObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBPFuncLib_FHSQL::CloseConnection(Z_Param_ConnectionObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execGetConnectionState)
	{
		P_GET_OBJECT(UFH_ConnectionObject,Z_Param_ConnectionObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBPFuncLib_FHSQL::GetConnectionState(Z_Param_ConnectionObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFuncLib_FHSQL::execConnectToMySQL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Host);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PassWord);
		P_GET_PROPERTY(FStrProperty,Z_Param_DBName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ConnectMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFH_ConnectionObject**)Z_Param__Result=UBPFuncLib_FHSQL::ConnectToMySQL(Z_Param_Host,Z_Param_UserName,Z_Param_PassWord,Z_Param_DBName,Z_Param_Port,Z_Param_Out_ConnectMessage);
		P_NATIVE_END;
	}
	void UBPFuncLib_FHSQL::StaticRegisterNativesUBPFuncLib_FHSQL()
	{
		UClass* Class = UBPFuncLib_FHSQL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActionOnTableData", &UBPFuncLib_FHSQL::execActionOnTableData },
			{ "CloseConnection", &UBPFuncLib_FHSQL::execCloseConnection },
			{ "ConnectToMySQL", &UBPFuncLib_FHSQL::execConnectToMySQL },
			{ "DeleteAllFormatSqlQuery", &UBPFuncLib_FHSQL::execDeleteAllFormatSqlQuery },
			{ "DeleteByWhereFormatSqlQuery", &UBPFuncLib_FHSQL::execDeleteByWhereFormatSqlQuery },
			{ "GetConnectionState", &UBPFuncLib_FHSQL::execGetConnectionState },
			{ "GetRowByIndex", &UBPFuncLib_FHSQL::execGetRowByIndex },
			{ "InsertFormatSqlQuery", &UBPFuncLib_FHSQL::execInsertFormatSqlQuery },
			{ "SelectAllFormatSqlQuery", &UBPFuncLib_FHSQL::execSelectAllFormatSqlQuery },
			{ "SelectByColumnsFormatSqlQuery", &UBPFuncLib_FHSQL::execSelectByColumnsFormatSqlQuery },
			{ "SelectOnTableData", &UBPFuncLib_FHSQL::execSelectOnTableData },
			{ "UpdateAllFormatSqlQuery", &UBPFuncLib_FHSQL::execUpdateAllFormatSqlQuery },
			{ "UpdateByWhereFormatSqlQuery", &UBPFuncLib_FHSQL::execUpdateByWhereFormatSqlQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics
	{
		struct BPFuncLib_FHSQL_eventActionOnTableData_Parms
		{
			UFH_ConnectionObject* ConnectionObject;
			FString SqlQuery;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SqlQuery;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventActionOnTableData_Parms, ConnectionObject), Z_Construct_UClass_UFH_ConnectionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::NewProp_SqlQuery = { "SqlQuery", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventActionOnTableData_Parms, SqlQuery), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPFuncLib_FHSQL_eventActionOnTableData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPFuncLib_FHSQL_eventActionOnTableData_Parms), &Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::NewProp_ConnectionObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::NewProp_SqlQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * ConnectionObject == MySQL Object\n\x09 * @return bool == Insert, Update, Delete Data Is Succeed Or Failed\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* ConnectionObject == MySQL Object\n* @return bool == Insert, Update, Delete Data Is Succeed Or Failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "ActionOnTableData", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventActionOnTableData_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics
	{
		struct BPFuncLib_FHSQL_eventCloseConnection_Parms
		{
			UFH_ConnectionObject* ConnectionObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventCloseConnection_Parms, ConnectionObject), Z_Construct_UClass_UFH_ConnectionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPFuncLib_FHSQL_eventCloseConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPFuncLib_FHSQL_eventCloseConnection_Parms), &Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::NewProp_ConnectionObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * ConnectionObject == MySQL Object\n\x09 * @return bool == ConnectionState\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* ConnectionObject == MySQL Object\n* @return bool == ConnectionState" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "CloseConnection", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventCloseConnection_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics
	{
		struct BPFuncLib_FHSQL_eventConnectToMySQL_Parms
		{
			FString Host;
			FString UserName;
			FString PassWord;
			FString DBName;
			int32 Port;
			FString ConnectMessage;
			UFH_ConnectionObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PassWord;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DBName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventConnectToMySQL_Parms, Host), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventConnectToMySQL_Parms, UserName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_PassWord = { "PassWord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventConnectToMySQL_Parms, PassWord), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_DBName = { "DBName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventConnectToMySQL_Parms, DBName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventConnectToMySQL_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_ConnectMessage = { "ConnectMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventConnectToMySQL_Parms, ConnectMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventConnectToMySQL_Parms, ReturnValue), Z_Construct_UClass_UFH_ConnectionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_Host,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_PassWord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_DBName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_ConnectMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * Connection == MySQL Object\n\x09 * @return *UFH_ConnectionObject == MySQL Connector\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* Connection == MySQL Object\n* @return *UFH_ConnectionObject == MySQL Connector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "ConnectToMySQL", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventConnectToMySQL_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics
	{
		struct BPFuncLib_FHSQL_eventDeleteAllFormatSqlQuery_Parms
		{
			FString TableName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventDeleteAllFormatSqlQuery_Parms, TableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventDeleteAllFormatSqlQuery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * TableName = DataBase TableName\n\x09 * @return FString = MySQL Delete Query -> Delete\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* TableName = DataBase TableName\n* @return FString = MySQL Delete Query -> Delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "DeleteAllFormatSqlQuery", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventDeleteAllFormatSqlQuery_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics
	{
		struct BPFuncLib_FHSQL_eventDeleteByWhereFormatSqlQuery_Parms
		{
			FString TableName;
			FString WhereName;
			FString WhereSymbol;
			FString WhereValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WhereName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WhereSymbol;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WhereValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventDeleteByWhereFormatSqlQuery_Parms, TableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_WhereName = { "WhereName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventDeleteByWhereFormatSqlQuery_Parms, WhereName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_WhereSymbol = { "WhereSymbol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventDeleteByWhereFormatSqlQuery_Parms, WhereSymbol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_WhereValue = { "WhereValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventDeleteByWhereFormatSqlQuery_Parms, WhereValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventDeleteByWhereFormatSqlQuery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_WhereName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_WhereSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_WhereValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * TableName = DataBase TableName\n\x09 * WhereName = Update Where\n\x09 * WhereSymbol = Operator Or Symbol\n\x09 * WhereValue = Condition Name\n\x09 * @return FString = MySQL Delete Query -> Delete\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* TableName = DataBase TableName\n* WhereName = Update Where\n* WhereSymbol = Operator Or Symbol\n* WhereValue = Condition Name\n* @return FString = MySQL Delete Query -> Delete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "DeleteByWhereFormatSqlQuery", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventDeleteByWhereFormatSqlQuery_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics
	{
		struct BPFuncLib_FHSQL_eventGetConnectionState_Parms
		{
			UFH_ConnectionObject* ConnectionObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventGetConnectionState_Parms, ConnectionObject), Z_Construct_UClass_UFH_ConnectionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPFuncLib_FHSQL_eventGetConnectionState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPFuncLib_FHSQL_eventGetConnectionState_Parms), &Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::NewProp_ConnectionObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * ConnectionObject == MySQL Object\n\x09 * @return bool == ConnectionState\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* ConnectionObject == MySQL Object\n* @return bool == ConnectionState" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "GetConnectionState", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventGetConnectionState_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics
	{
		struct BPFuncLib_FHSQL_eventGetRowByIndex_Parms
		{
			FQueryResultRows ResultRows;
			int32 RowIndex;
			FQueryResultRow ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultRows;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_ResultRows_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_ResultRows = { "ResultRows", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventGetRowByIndex_Parms, ResultRows), Z_Construct_UScriptStruct_FQueryResultRows, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_ResultRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_ResultRows_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventGetRowByIndex_Parms, RowIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventGetRowByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FQueryResultRow, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_ResultRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_RowIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * TableName = DataBase TableName\n\x09 * @return TArray<FString> = Get All Rows -> In All Columns Values\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* TableName = DataBase TableName\n* @return TArray<FString> = Get All Rows -> In All Columns Values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "GetRowByIndex", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventGetRowByIndex_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics
	{
		struct BPFuncLib_FHSQL_eventInsertFormatSqlQuery_Parms
		{
			FString TableName;
			FString InsertValues;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InsertValues;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventInsertFormatSqlQuery_Parms, TableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::NewProp_InsertValues = { "InsertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventInsertFormatSqlQuery_Parms, InsertValues), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventInsertFormatSqlQuery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::NewProp_InsertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * TableName = DataBase TableName\n\x09 * InsertValues = MySQL Insert Values to Table\n\x09 * @return FString = MySQL Insert Query -> Insert\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* TableName = DataBase TableName\n* InsertValues = MySQL Insert Values to Table\n* @return FString = MySQL Insert Query -> Insert" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "InsertFormatSqlQuery", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventInsertFormatSqlQuery_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics
	{
		struct BPFuncLib_FHSQL_eventSelectAllFormatSqlQuery_Parms
		{
			FString TableName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventSelectAllFormatSqlQuery_Parms, TableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventSelectAllFormatSqlQuery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * TableName = DataBase TableName\n\x09 * @return FString = MySQL Select Query -> Select\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* TableName = DataBase TableName\n* @return FString = MySQL Select Query -> Select" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "SelectAllFormatSqlQuery", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventSelectAllFormatSqlQuery_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics
	{
		struct BPFuncLib_FHSQL_eventSelectByColumnsFormatSqlQuery_Parms
		{
			FString TableName;
			FString Columns;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Columns;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventSelectByColumnsFormatSqlQuery_Parms, TableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventSelectByColumnsFormatSqlQuery_Parms, Columns), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventSelectByColumnsFormatSqlQuery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::NewProp_Columns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * TableName = DataBase TableName\n\x09 * @return FString = MySQL Select Query -> Select\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* TableName = DataBase TableName\n* @return FString = MySQL Select Query -> Select" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "SelectByColumnsFormatSqlQuery", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventSelectByColumnsFormatSqlQuery_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics
	{
		struct BPFuncLib_FHSQL_eventSelectOnTableData_Parms
		{
			UFH_ConnectionObject* ConnectionObject;
			FString SqlQuery;
			FQueryResultRows ResultRows;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SqlQuery;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultRows;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventSelectOnTableData_Parms, ConnectionObject), Z_Construct_UClass_UFH_ConnectionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_SqlQuery = { "SqlQuery", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventSelectOnTableData_Parms, SqlQuery), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_ResultRows = { "ResultRows", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventSelectOnTableData_Parms, ResultRows), Z_Construct_UScriptStruct_FQueryResultRows, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPFuncLib_FHSQL_eventSelectOnTableData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPFuncLib_FHSQL_eventSelectOnTableData_Parms), &Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_ConnectionObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_SqlQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_ResultRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * ConnectionObject == MySQL Object\n\x09 * @return bool == Select Data Is Succeed Or Failed\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* ConnectionObject == MySQL Object\n* @return bool == Select Data Is Succeed Or Failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "SelectOnTableData", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventSelectOnTableData_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics
	{
		struct BPFuncLib_FHSQL_eventUpdateAllFormatSqlQuery_Parms
		{
			FString TableName;
			FString RowName;
			FString UpdateValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdateValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateAllFormatSqlQuery_Parms, TableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateAllFormatSqlQuery_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::NewProp_UpdateValue = { "UpdateValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateAllFormatSqlQuery_Parms, UpdateValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateAllFormatSqlQuery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::NewProp_UpdateValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * TableName = DataBase TableName\n\x09 * RowName = Need Update Row\n\x09 * @return FString = MySQL Update Query -> Update\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* TableName = DataBase TableName\n* RowName = Need Update Row\n* @return FString = MySQL Update Query -> Update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "UpdateAllFormatSqlQuery", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventUpdateAllFormatSqlQuery_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics
	{
		struct BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms
		{
			FString TableName;
			FString RowName;
			FString WhereName;
			FString WhereSymbol;
			FString WhereValue;
			FString UpdateValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WhereName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WhereSymbol;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WhereValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdateValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms, TableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_WhereName = { "WhereName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms, WhereName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_WhereSymbol = { "WhereSymbol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms, WhereSymbol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_WhereValue = { "WhereValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms, WhereValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_UpdateValue = { "UpdateValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms, UpdateValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_WhereName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_WhereSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_WhereValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_UpdateValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "Comment", "/*\n\x09 * TableName = DataBase TableName\n\x09 * RowName = Need Update Row\n\x09 * WhereName = Update Where\n\x09 * WhereSymbol = Operator Or Symbol\n\x09 * WhereValue = Condition Name\n\x09 * UpdateValue = Need Update Date Value\n\x09 * @return FString = MySQL Update Query -> Update\n\x09 */" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
		{ "ToolTip", "* TableName = DataBase TableName\n* RowName = Need Update Row\n* WhereName = Update Where\n* WhereSymbol = Operator Or Symbol\n* WhereValue = Condition Name\n* UpdateValue = Need Update Date Value\n* @return FString = MySQL Update Query -> Update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFuncLib_FHSQL, nullptr, "UpdateByWhereFormatSqlQuery", nullptr, nullptr, sizeof(BPFuncLib_FHSQL_eventUpdateByWhereFormatSqlQuery_Parms), Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPFuncLib_FHSQL_NoRegister()
	{
		return UBPFuncLib_FHSQL::StaticClass();
	}
	struct Z_Construct_UClass_UBPFuncLib_FHSQL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPFuncLib_FHSQL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FH_MySQL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPFuncLib_FHSQL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_ActionOnTableData, "ActionOnTableData" }, // 1104053166
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_CloseConnection, "CloseConnection" }, // 1361561152
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_ConnectToMySQL, "ConnectToMySQL" }, // 3398291177
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteAllFormatSqlQuery, "DeleteAllFormatSqlQuery" }, // 3845522033
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_DeleteByWhereFormatSqlQuery, "DeleteByWhereFormatSqlQuery" }, // 721037480
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_GetConnectionState, "GetConnectionState" }, // 243299912
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_GetRowByIndex, "GetRowByIndex" }, // 1391840925
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_InsertFormatSqlQuery, "InsertFormatSqlQuery" }, // 599586277
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectAllFormatSqlQuery, "SelectAllFormatSqlQuery" }, // 877747612
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectByColumnsFormatSqlQuery, "SelectByColumnsFormatSqlQuery" }, // 925715676
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_SelectOnTableData, "SelectOnTableData" }, // 325756417
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateAllFormatSqlQuery, "UpdateAllFormatSqlQuery" }, // 4035700281
		{ &Z_Construct_UFunction_UBPFuncLib_FHSQL_UpdateByWhereFormatSqlQuery, "UpdateByWhereFormatSqlQuery" }, // 1362119360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPFuncLib_FHSQL_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BPFuncLib_FHSQL.h" },
		{ "ModuleRelativePath", "Public/BPFuncLib_FHSQL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPFuncLib_FHSQL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPFuncLib_FHSQL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPFuncLib_FHSQL_Statics::ClassParams = {
		&UBPFuncLib_FHSQL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPFuncLib_FHSQL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPFuncLib_FHSQL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPFuncLib_FHSQL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPFuncLib_FHSQL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPFuncLib_FHSQL, 3192633230);
	template<> FH_MYSQL_API UClass* StaticClass<UBPFuncLib_FHSQL>()
	{
		return UBPFuncLib_FHSQL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPFuncLib_FHSQL(Z_Construct_UClass_UBPFuncLib_FHSQL, &UBPFuncLib_FHSQL::StaticClass, TEXT("/Script/FH_MySQL"), TEXT("UBPFuncLib_FHSQL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPFuncLib_FHSQL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
