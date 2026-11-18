#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAWSHelperBlueprintLibrary_UploadFile_Params
{
	class UAWSHelper*                                  CosHelper;                                                
	struct FString                                     FromFilePath;                                             
	struct FString                                     ToURL;                                                    
	struct FString                                     NoneMatchHeader;                                          
	struct FScriptDelegate                             OnComplete;                                               
	struct FScriptDelegate                             OnProgress;                                               
};


struct UAWSHelperBlueprintLibrary_UploadBinary_Params
{
	class UAWSHelper*                                  CosHelper;                                                
	TArray<unsigned char>                              FromBinaries;                                             
	struct FString                                     ToURL;                                                    
	struct FString                                     NoneMatchHeader;                                          
	struct FScriptDelegate                             OnComplete;                                               
	struct FScriptDelegate                             OnProgress;                                               
};


struct UAWSHelperBlueprintLibrary_DownloadFile_Params
{
	class UAWSHelper*                                  CosHelper;                                                
	struct FString                                     FromURL;                                                  
	struct FString                                     ToFilePath;                                               
	struct FScriptDelegate                             OnComplete;                                               
	struct FScriptDelegate                             OnProgress;                                               
};


struct UAWSHelperBlueprintLibrary_DownloadBinary_Params
{
	class UAWSHelper*                                  CosHelper;                                                
	struct FString                                     FromURL;                                                  
	struct FScriptDelegate                             OnComplete;                                               
	struct FScriptDelegate                             OnProgress;                                               
};


struct UAWSHelperBlueprintLibrary_DestroyAWSHelper_Params
{
	class UAWSHelper*                                  AWSHelper;                                                
};


struct UAWSHelperBlueprintLibrary_ConstructAWSHelper_Params
{
	class UAWSHelper*                                  ReturnValue;                                              
};


struct UAWSResponse_IsOK_Params
{
	bool                                               ReturnValue;                                              
};


struct UAWSResponse_GetResponseCode_Params
{
	int                                                ReturnValue;                                              
};


struct UAWSResponse_GetRequestURL_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAWSResponse_GetErrorMessage_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAWSResponse_GetErrorCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAWSResponse_GetContentAsString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAWSResponse_GetContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};

}

