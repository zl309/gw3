// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class c1017 : ModuleRules
{
	public c1017(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
