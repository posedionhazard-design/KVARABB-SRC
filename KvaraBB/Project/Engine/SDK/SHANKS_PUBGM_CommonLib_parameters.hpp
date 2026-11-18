#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UTextWidgetInterface_GetTextContent_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCommonLuaLibrary_IsMatch_Params
{
	struct FString                                     Source;                                                   
	struct FString                                     regex;                                                    
	bool                                               ReturnValue;                                              
};


struct UCommonLuaLibrary_GetName_Params
{
	class UObject*                                     Obj;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UCommonLuaLibrary_GetModNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCommonLuaLibrary_GetGWorld_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UCommonLuaLibrary_GetFullName_Params
{
	class UObject*                                     Obj;                                                      
	struct FString                                     ReturnValue;                                              
};


struct URuntimeFilesDownloaderLibrary_DownloadFile_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     SavePath;                                                 
	class URuntimeFilesDownloaderLibrary*              ReturnValue;                                              
};


struct URuntimeFilesDownloaderLibrary_CreateDownloader_Params
{
	class URuntimeFilesDownloaderLibrary*              ReturnValue;                                              
};


struct UServiceManager_UnregisterService_Params
{
	class UClass*                                      ServiceType;                                              
	struct FString                                     serviceName;                                              
};


struct UServiceManager_RegisterService_Params
{
	class UObject*                                     Service;                                                  
	class UClass*                                      ServiceType;                                              
	struct FString                                     serviceName;                                              
};


struct UServiceManager_GetService_Params
{
	class UClass*                                      ServiceType;                                              
	struct FString                                     serviceName;                                              
	class UObject*                                     ReturnValue;                                              
};

}

