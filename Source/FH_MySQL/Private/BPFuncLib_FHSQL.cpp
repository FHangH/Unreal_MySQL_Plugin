#include "BPFuncLib_FHSQL.h"
#include "mysql.h"
#include <string>

UFH_ConnectionObject* UBPFuncLib_FHSQL::ConnectToMySQL(FString Host, FString UserName, FString PassWord, FString DBName,
	int32 Port, FString &ConnectMessage)
{
	const std::string m_Host(TCHAR_TO_UTF8(*Host));
	const std::string m_UserName(TCHAR_TO_UTF8(*UserName));
	const std::string m_PassWord(TCHAR_TO_UTF8(*PassWord));
	const std::string m_DBName(TCHAR_TO_UTF8(*DBName));
	const uint32 m_Port = Port; 

	// Create MySQL Connection Object
	UFH_ConnectionObject *ConnectionObject = NewObject<UFH_ConnectionObject>();
	// Init DataBase Connection Object
	ConnectionObject->Fh_ConnMysql = mysql_init(nullptr);

	// Judge Connection Status And Return ConnectMessage
	if (mysql_real_connect(ConnectionObject->Fh_ConnMysql, m_Host.c_str(), m_UserName.c_str(), m_PassWord.c_str(),
	                       m_DBName.c_str(), m_Port, nullptr, 0))
	{
		ConnectMessage = TEXT("Connect Succeed");
	}
	else
	{
		ConnectMessage = TEXT("Connect Failed");
	}

	// Return MySQL Connection Object
	return ConnectionObject;
}

bool UBPFuncLib_FHSQL::GetConnectionState(UFH_ConnectionObject* ConnectionObject)
{
	// Judge Current MySQL Connection State
	if (ConnectionObject)
	{
		if (ConnectionObject->Fh_ConnMysql != nullptr)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool UBPFuncLib_FHSQL::CloseConnection(UFH_ConnectionObject* ConnectionObject)
{
	// If MySQL Connected -> Close MySQL Connection; Return True
	// Else -> Return True
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

	// Judge MySQL Is Connected
	if (!ConnectionObject)
	{
		return false;
	}
	// Judge SqlQuery Is Apply Succeed
	if (mysql_query(ConnectionObject->Fh_ConnMysql, m_SqlQuery.c_str()) == 0)
	{
		return true;
	}
	return true;
}

FString UBPFuncLib_FHSQL::InsertFormatSqlQuery(FString TableName, FString InsertValues)
{
	// INSERT INTO TableName VALUES(InsertValues);
	FString SqlQuery = "INSERT INTO " + TableName + " VALUES(" + InsertValues + ");";
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

bool UBPFuncLib_FHSQL::SelectOnTableData(UFH_ConnectionObject* ConnectionObject, FString SqlQuery, FQueryResultRows &ResultRows)
{
	MYSQL_RES *m_Res = nullptr;
	MYSQL_ROW m_Column;
	TArray<FString> m_ColumnNames;
	FQueryResultRows m_Rows;
	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));

	if (!ConnectionObject){return false;}
	if (!ConnectionObject->Fh_ConnMysql){return false;}

	if (!mysql_query(ConnectionObject->Fh_ConnMysql, m_SqlQuery.c_str()))
	{
		ResultRows = {};
		m_Res = mysql_store_result(ConnectionObject->Fh_ConnMysql);
		const int m_Columns = mysql_num_fields(m_Res);

		while ((m_Column = mysql_fetch_row(m_Res)) != nullptr)
		{
			FQueryResultRow m_Row;
			for (int i = 0; i < m_Columns; ++i)
			{
				m_Row.RowValue.Add(UTF8_TO_TCHAR(m_Column[i]));
			}
			ResultRows.RowsValue.Add(m_Row);
		}
	}
	
	mysql_free_result(m_Res);
	return true;
}

FString UBPFuncLib_FHSQL::SelectAllFormatSqlQuery(FString TableName)
{
	// SELECT * FROM TableName;
	FString SqlQuery = "SELECT * FROM " + TableName + ";";
	return SqlQuery;
}

FString UBPFuncLib_FHSQL::SelectByColumnsFormatSqlQuery(FString TableName, FString Columns)
{
	// SELECT CustomerName, City, Country FROM Customers;
	FString SqlQuery = "SELECT " + Columns + " FROM " + TableName + ";";
	return SqlQuery;
}

FQueryResultRow UBPFuncLib_FHSQL::GetRowByIndex(const FQueryResultRows &ResultRows, int32 RowIndex)
{
	const FQueryResultRow m_Row = ResultRows.RowsValue[RowIndex];
	return m_Row;
}
