using System.IO;
using UnrealBuildTool;

public class FhMYSQLConnectorLibrary : ModuleRules
{
	public FhMYSQLConnectorLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "MariaDBConnector", "lib", "libmariadb.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "MariaDBConnector", "lib", "libmariadbclient.lib"));

			// Delay-load the DLL, so we can load it from the right place first
			PublicDelayLoadDLLs.Add("libmariadb.dll");

			// Ensure that the DLL is staged along with the executable
			RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/FhMYSQLConnectorLibrary/Win64/libmariadb.dll");
        }
	}
}
