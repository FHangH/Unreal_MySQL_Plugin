#include "FhMySQL.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FFhMySQLModule"

void FFhMySQLModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString BaseDir = IPluginManager::Get().FindPlugin("FhMySQL")->GetBaseDir();

	// Add on the relative location of the third party dll and load it
	FString LibraryPath;
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/FhMYSQLConnectorLibrary/Win64/libmariadb.dll"));
	FhMYSQLLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;
}

void FFhMySQLModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FPlatformProcess::FreeDllHandle(FhMYSQLLibraryHandle);
	FhMYSQLLibraryHandle = nullptr;	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFhMySQLModule, FhMySQL)