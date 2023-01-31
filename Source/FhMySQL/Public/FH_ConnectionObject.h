#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include <FhMYSQLConnectorLibrary/MariaDBConnector/include/mysql.h>
#include "FH_ConnectionObject.generated.h"

UCLASS(BlueprintType)
class FHMYSQL_API UFH_ConnectionObject : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	MYSQL *Fh_ConnMysql;
};