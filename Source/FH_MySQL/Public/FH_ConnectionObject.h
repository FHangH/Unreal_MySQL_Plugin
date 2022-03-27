#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "mysql.h"
#include "FH_ConnectionObject.generated.h"

UCLASS(BlueprintType)
class FH_MYSQL_API UFH_ConnectionObject : public UObject
{
	GENERATED_BODY()

private:
	UFH_ConnectionObject();

public:
	MYSQL *Fh_ConnMysql;
};
