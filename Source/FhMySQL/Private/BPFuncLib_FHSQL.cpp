#include "BPFuncLib_FHSQL.h"
#include <FhMYSQLConnectorLibrary/MariaDBConnector/include/mysql.h>
#include "string"
#include "FH_ConnectionObject.h"

UBPFuncLib_FHSQL::UBPFuncLib_FHSQL(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	
}

UFH_ConnectionObject* UBPFuncLib_FHSQL::ConnectToMySQL(FString Host, FString UserName, FString PassWord, FString DBName,
                                                       int32 Port, FString &ConnectMessage)
{
	const std::string m_Host(TCHAR_TO_UTF8(*Host));
	const std::string m_UserName(TCHAR_TO_UTF8(*UserName));
	const std::string m_PassWord(TCHAR_TO_UTF8(*PassWord));
	const std::string m_DBName(TCHAR_TO_UTF8(*DBName));
	const uint32 m_Port = Port; 
	
	UFH_ConnectionObject *ConnectionObject = NewObject<UFH_ConnectionObject>();
	ConnectionObject->Fh_ConnMysql = mysql_init(nullptr);

	constexpr bool reconnect = 0;
	mysql_options(ConnectionObject->Fh_ConnMysql, MYSQL_OPT_RECONNECT, &reconnect);
	
	// 判断连接是否成功，失败返回 NULL
	const auto IsConnected = mysql_real_connect(
				ConnectionObject->Fh_ConnMysql,
				m_Host.c_str(),
				m_UserName.c_str(),
				m_PassWord.c_str(),
				m_DBName.c_str(),
				m_Port,
				nullptr,
				0);
	if (IsConnected == nullptr)
	{
		ConnectMessage = TEXT("Connect Failed");
		ConnectionObject = nullptr;
	}
	else
	{
		ConnectMessage = TEXT("Connect Succeed");
	}
	
	return ConnectionObject;
}

bool UBPFuncLib_FHSQL::GetConnectionState(UFH_ConnectionObject* ConnectionObject)
{
	// 判断当前 MySQL 连接状态
	if (ConnectionObject && ConnectionObject->Fh_ConnMysql != nullptr)
	{
		return true;
	}
	return false;
}

bool UBPFuncLib_FHSQL::CloseConnection(UFH_ConnectionObject* ConnectionObject)
{
	if (GetConnectionState(ConnectionObject))
	{
		mysql_close(ConnectionObject->Fh_ConnMysql);
		ConnectionObject->Fh_ConnMysql = nullptr;
		ConnectionObject = nullptr;
		return true;
	}
	return true;
}

bool UBPFuncLib_FHSQL::ActionOnTableData(UFH_ConnectionObject* ConnectionObject, FString SqlQuery)
{
	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));
	
	if (!ConnectionObject || !ConnectionObject->Fh_ConnMysql){return false;}
		
	if (mysql_query(ConnectionObject->Fh_ConnMysql, m_SqlQuery.c_str()) == 0)
	{
		return true;
	}
	return false;
}

FString UBPFuncLib_FHSQL::InsertFormatSqlQuery(FString TableName, FString InsertValues)
{
	// INSERT INTO TableName VALUES(InsertValues);
	FString SqlQuery = FString::Printf(TEXT("INSERT INTO %s VALUES(%s);"), *TableName, *InsertValues);
	return SqlQuery;
}

FString UBPFuncLib_FHSQL::UpdateAllFormatSqlQuery(FString TableName, FString UpdateRowName, FString UpdateValue)
{	// UPDATE TableName SET RowName=UpdateValue;
	FString SqlQuery = "UPDATE " + TableName + " SET " + UpdateRowName + "=" + UpdateValue + ";";
	return SqlQuery;
}

FString UBPFuncLib_FHSQL::UpdateByWhereFormatSqlQuery(FString TableName, FString UpdateRowName, FString WhereName, FString WhereSymbol, FString WhereValue, FString UpdateValue)
{
	// UPDATE TableName SET UpdateRowName=UpdateValue WHERE WhereName=WhereValue;
	FString SqlQuery = "UPDATE " + TableName + " SET " + UpdateRowName + "=" + UpdateValue + " WHERE " + WhereName + WhereSymbol + WhereValue + ";";
	return SqlQuery;
}

FString UBPFuncLib_FHSQL::DeleteAllFormatSqlQuery(FString TableName)
{
	// DELETE FROM TableName;
	FString SqlQuery = "DELETE FROM " + TableName + ";";
	return SqlQuery;
}

FString UBPFuncLib_FHSQL::DeleteByWhereFormatSqlQuery(FString TableName, FString WhereName, FString WhereSymbol, FString WhereValue)
{
	// DELETE FROM TableName WHERE WhereName=‘WhereValue’;
	FString SqlQuery = "DELETE FROM " + TableName + " WHERE " + WhereName + WhereSymbol + "'" + WhereValue + "';";
	return SqlQuery;
}

/*
 * version = 2.0
 * 蓝图里可以得到数据库查询的所有值，存在 TArray<>里
 * TArray<>可以当数组用，TArray[0] == 数据表的第一行 == TMap<Key, Value>
 * TMap<Key, Value> => Key == 数据表列的名称(字段名)，Value == 对应列(字段名)的值
 * 用法：
 *	1. 先中断 FResArray(Struct) 得到 FRowMap(Struct)[]
 *	2. 遍历 FRowMap(Struct)[] 得到 FRowMap(Struct)
 *	3. 中断 FRowMap(Struct) 得到 RowMap(Map)
 *	4. 获得 RowMap的 Keys, 遍历 keys, 通过key -> find Map 得到 value
 */
bool UBPFuncLib_FHSQL::SelectOnTableToMap(UFH_ConnectionObject* ConnectionObject, FString SqlQuery, FResArray& ResArray)
{
	if (!ConnectionObject || !ConnectionObject->Fh_ConnMysql){ResArray = {}; return false;}
	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));
	
	if (mysql_query(ConnectionObject->Fh_ConnMysql, m_SqlQuery.c_str()) == 0)
	{
		MYSQL_RES* Res = mysql_store_result(ConnectionObject->Fh_ConnMysql);
		const int32 num_rows = mysql_num_rows(Res);
		const int32 num_fields = mysql_num_fields(Res);
		const MYSQL_FIELD* field = mysql_fetch_field(Res);

		ResArray.ResArray.Init(FRowMap{}, num_rows);
		for (int i = 0; i < num_rows; ++i)
		{
			const MYSQL_ROW row = mysql_fetch_row(Res);
			for (int j = 0; j < num_fields; ++j)
			{
				ResArray.ResArray[i].RowMap.Add(field[j].name, row[j]);
			}
		}
		mysql_free_result(Res);
		return true;
	}
	return false;
}

/*
 * version = 3.0
 * 只能查返回一个值的，可能返回多个的，用 SelectOnTableToMap
 */
bool UBPFuncLib_FHSQL::SelectOnTableGetWhatByCondition(UFH_ConnectionObject* ConnectionObject, FString TableName,
	FString GetWhat, FString ConditionKey, FString ConditionValue, FString& ResStr)
{
	if (!ConnectionObject || !ConnectionObject->Fh_ConnMysql){return false;}
	// SELECT GetWhat FROM TableName WHERE ConditionKey='ConditionValue';
	// SELECT UserPassWord FROM UserInfo WHERE UserName='fh';
	const FString SqlQuery =
		"SELECT " + GetWhat + " FROM " + TableName + " WHERE " + ConditionKey + "='" + ConditionValue + "';";
	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));
	
	if (!mysql_query(ConnectionObject->Fh_ConnMysql, m_SqlQuery.c_str()))
	{
		MYSQL_RES* Res = mysql_store_result(ConnectionObject->Fh_ConnMysql);
		if (mysql_num_rows(Res))
		{
			const MYSQL_ROW row = mysql_fetch_row(Res);
			ResStr = row[0];
		}
		mysql_free_result(Res);
		return true;
	}
	return false;
}

bool UBPFuncLib_FHSQL::SelectOnTableGetWhatByMultiCondition(UFH_ConnectionObject* ConnectionObject, FString SqlQuery,
	FString& ResStr)
{
	// SELECT UserID FROM UserInfo WHERE UserName='' AND UserEmail='';
	if (!ConnectionObject || !ConnectionObject->Fh_ConnMysql) { return false; }
	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));
	if (!mysql_query(ConnectionObject->Fh_ConnMysql, m_SqlQuery.c_str()))
	{
		MYSQL_RES* Res = mysql_store_result(ConnectionObject->Fh_ConnMysql);
		if (mysql_num_rows(Res))
		{
			const MYSQL_ROW row = mysql_fetch_row(Res);
			ResStr = row[0];
		}
		mysql_free_result(Res);
		return true;
	}
	return false;
}

FString UBPFuncLib_FHSQL::SelectAllFormatSqlQuery(FString TableName)
{
	// SELECT * FROM TableName;
	FString SqlQuery = "SELECT * FROM " + TableName + ";";
	return SqlQuery;
}

FString UBPFuncLib_FHSQL::SelectByColumnsFormatSqlQuery(FString TableName, FString Columns)
{
	// SELECT Columns1, Columns2 FROM TableName;
	FString SqlQuery = "SELECT " + Columns + " FROM " + TableName + ";";
	return SqlQuery;
}

FQueryResultRow UBPFuncLib_FHSQL::SelectGetRowByIndex(const FQueryResultRows &ResultRows, int32 RowIndex)
{
	const FQueryResultRow m_Row = ResultRows.RowsValue[RowIndex];
	return m_Row;
}
