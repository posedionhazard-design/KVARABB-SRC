#pragma once


 
namespace SDK
{





enum class EIOSMetalShaderStandard : uint8_t
{
	EIOSMetalShaderStandard__IOSMetalSLStandard_1 = 0,
	EIOSMetalShaderStandard__IOSMetalSLStandard_101 = 1,
	EIOSMetalShaderStandard__IOSMetalSLStandard_102 = 2,
	EIOSMetalShaderStandard__IOSMetalSLStandard_2 = 3,
	EIOSMetalShaderStandard__IOSMetalSLStandard_201 = 4,
	EIOSMetalShaderStandard__IOSMetalSLStandard_202 = 5,
	EIOSMetalShaderStandard__IOSMetalSLStandard_203 = 6,
	EIOSMetalShaderStandard__IOSMetalSLStandard_204 = 7,
	EIOSMetalShaderStandard__IOSMetalSLStandard_MAX = 8
};



enum class EIOSVersion : uint8_t
{
	EIOSVersion__IOS               = 0,
	EIOSVersion__IOS01             = 1,
	EIOSVersion__IOS02             = 2,
	EIOSVersion__IOS03             = 3,
	EIOSVersion__IOS04             = 4,
	EIOSVersion__IOS05             = 5,
	EIOSVersion__IOS06             = 6,
	EIOSVersion__IOS07             = 7,
	EIOSVersion__IOS08             = 8,
	EIOSVersion__IOS09             = 9,
	EIOSVersion__IOS_MAX           = 10
};



enum class EPowerUsageFrameRateLock : uint8_t
{
	EPowerUsageFrameRateLock__PUFRL_None = 0,
	EPowerUsageFrameRateLock__PUFRL = 1,
	EPowerUsageFrameRateLock__PUFRL01 = 2,
	EPowerUsageFrameRateLock__PUFRL02 = 3,
	EPowerUsageFrameRateLock__PUFRL_MAX = 4
};









struct FIOSBuildResourceDirectory
{
	struct FString                                     Path;                                                     
};



struct FIOSBuildResourceFilePath
{
	struct FString                                     FilePath;                                                 
};

}

