#include "FH_ConnectionObject.h"

UFH_ConnectionObject::UFH_ConnectionObject(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), Fh_ConnMysql(nullptr)
{
}