#pragma once


 
namespace SDK
{





enum class EDownloadResult : uint8_t
{
	SuccessDownloading             = 0,
	DownloadFailed                 = 1,
	SaveFailed                     = 2,
	DirectoryCreationFailed        = 3,
	DownloadResult_MAX             = 4
};









struct FServiceCollection
{
	TMap<struct FString, class UObject*>               ServiceMap;                                               
};

}

