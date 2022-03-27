#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FH_ConnectionObject.h"
#include "BPFuncLib_FHSQL.generated.h"

USTRUCT(BlueprintType)
struct FQueryResultRow
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="MySQL|Result Row Value")
	TArray<FString> RowValue;
};

USTRUCT(BlueprintType)
struct FQueryResultRows
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category="MySQL|Result Rows Value")
	TArray<FQueryResultRow> RowsValue;
};

UCLASS(BlueprintType)
class FH_MYSQL_API UBPFuncLib_FHSQL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/*
	 * Connection == MySQL Object
	 * @return *UFH_ConnectionObject == MySQL Connector
	 */
	UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
	static UFH_ConnectionObject *ConnectToMySQL(FString Host, FString UserName, FString PassWord, FString DBName,
												int32 Port, FString &ConnectMessage);

	/*
	 * ConnectionObject == MySQL Object
	 * @return bool == ConnectionState
	 */
	UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
	static bool GetConnectionState(UFH_ConnectionObject *ConnectionObject);

	/*
	 * ConnectionObject == MySQL Object
	 * @return bool == ConnectionState
	 */
	UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
	static bool CloseConnection(UFH_ConnectionObject *ConnectionObject);

	/*
	 * ConnectionObject == MySQL Object
	 * @return bool == Insert, Update, Delete Data Is Succeed Or Failed
	 */
	UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
	static bool ActionOnTableData(UFH_ConnectionObject *ConnectionObject, FString SqlQuery);
	
	/*
	 * TableName = DataBase TableName
	 * InsertValues = MySQL Insert Values to Table
	 * @return FString = MySQL Insert Query -> Insert
	 */
	UFUNCTION(BlueprintPure, Category="MySQL|Utils")
	static FString InsertFormatSqlQuery(FString TableName, FString InsertValues);

	/*
	 * TableName = DataBase TableName
	 * RowName = Need Update Row
	 * @return FString = MySQL Update Query -> Update
	 */	
	UFUNCTION(BlueprintPure, Category="MySQL|Utils")
	static FString UpdateAllFormatSqlQuery(FString TableName, FString RowName, FString UpdateValue);

	/*
	 * TableName = DataBase TableName
	 * RowName = Need Update Row
	 * WhereName = Update Where
	 * WhereSymbol = Operator Or Symbol
	 * WhereValue = Condition Name
	 * UpdateValue = Need Update Date Value
	 * @return FString = MySQL Update Query -> Update
	 */	
	UFUNCTION(BlueprintPure, Category="MySQL|Utils")
	static FString UpdateByWhereFormatSqlQuery(FString TableName, FString RowName, FString WhereName, FString WhereSymbol, FString WhereValue, FString UpdateValue);

	/*
	 * TableName = DataBase TableName
	 * @return FString = MySQL Delete Query -> Delete
	 */
	UFUNCTION(BlueprintPure, Category="MySQL|Utils")
	static FString DeleteAllFormatSqlQuery(FString TableName);

	/*
	 * TableName = DataBase TableName
	 * WhereName = Update Where
	 * WhereSymbol = Operator Or Symbol
	 * WhereValue = Condition Name
	 * @return FString = MySQL Delete Query -> Delete
	 */
	UFUNCTION(BlueprintPure, Category="MySQL|Utils")
	static FString DeleteByWhereFormatSqlQuery(FString TableName, FString WhereName, FString WhereSymbol, FString WhereValue);

	/*
	 * ConnectionObject == MySQL Object
	 * @return bool == Select Data Is Succeed Or Failed
	 */	
	UFUNCTION(BlueprintCallable, Category="MySQL|Utils")
	static bool SelectOnTableData(UFH_ConnectionObject *ConnectionObject, FString SqlQuery, FQueryResultRows &ResultRows);
	
	/*
	 * TableName = DataBase TableName
	 * @return FString = MySQL Select Query -> Select
	 */
	UFUNCTION(BlueprintPure, Category="MySQL|Utils")
	static FString SelectAllFormatSqlQuery(FString TableName);

	/*
	 * TableName = DataBase TableName
	 * @return FString = MySQL Select Query -> Select
	 */	
	UFUNCTION(BlueprintPure, Category="MySQL|Utils")
	static FString SelectByColumnsFormatSqlQuery(FString TableName, FString Columns);

	/*
	 * TableName = DataBase TableName
	 * @return TArray<FString> = Get All Rows -> In All Columns Values
	 */		
	UFUNCTION(BlueprintPure, Category="MySQL|Utils")
	static FQueryResultRow GetRowByIndex(const FQueryResultRows &ResultRows, int32 RowIndex);
};