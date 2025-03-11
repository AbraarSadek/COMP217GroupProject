// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DungeonDash : ModuleRules
{
	public DungeonDash(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
