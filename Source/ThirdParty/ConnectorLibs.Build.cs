using System.IO;
using UnrealBuildTool;

public class ConnectorLibs : ModuleRules
{
	public ConnectorLibs(ReadOnlyTargetRules target) : base(target)
	{
		Type = ModuleType.External;

		//Reference Header File
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "ConnectorLibs", "include"));

		if (target.Platform == UnrealTargetPlatform.Win64)
		{
			//Reference Library File
			PublicSystemLibraryPaths.Add(Path.Combine(ModuleDirectory, "ConnectorLibs", "lib"));
			PublicSystemLibraries.Add("mysqlclient.lib");
		}
	}
}