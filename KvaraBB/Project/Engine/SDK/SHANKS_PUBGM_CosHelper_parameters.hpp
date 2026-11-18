#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCosBase_GetContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCosHelperBlueprintLibrary_UploadFileMemory_Params
{
	class UCosHelper*                                  CosHelper;                                                
	TArray<unsigned char>                              FileMemoryBuffer;                                         
	struct FString                                     URIPathName;                                              
	struct FString                                     URLParameters;                                            
	struct FScriptDelegate                             OnCosRequestCompleted;                                    
	class UCosRequest*                                 ReturnValue;                                              
};


struct UCosHelperBlueprintLibrary_UploadFile_Params
{
	class UCosHelper*                                  CosHelper;                                                
	struct FString                                     FilePathName;                                             
	struct FString                                     URIPathName;                                              
	struct FString                                     URLParameters;                                            
	struct FScriptDelegate                             OnCosRequestCompleted;                                    
	class UCosRequest*                                 ReturnValue;                                              
};


struct UCosHelperBlueprintLibrary_InitCosInfo_Params
{
	struct FString                                     Section;                                                  
	struct FCosHelperInitializeInfo                    ReturnValue;                                              
};


struct UCosHelperBlueprintLibrary_GetFileInfo_Params
{
	class UCosHelper*                                  CosHelper;                                                
	struct FString                                     URIPathName;                                              
	struct FString                                     URLParameters;                                            
	int                                                FileInfoType;                                             
	struct FScriptDelegate                             OnCosRequestCompleted;                                    
	class UCosRequest*                                 ReturnValue;                                              
};


struct UCosHelperBlueprintLibrary_DownloadFile_Params
{
	class UCosHelper*                                  CosHelper;                                                
	struct FString                                     URIPathName;                                              
	struct FString                                     URLParameters;                                            
	struct FString                                     SavedPathName;                                            
	struct FScriptDelegate                             OnCosRequestCompleted;                                    
	class UCosRequest*                                 ReturnValue;                                              
};


struct UCosHelperBlueprintLibrary_DestroyCosHelper_Params
{
	class UCosHelper*                                  CosHelper;                                                
};


struct UCosHelperBlueprintLibrary_ConstructCosHelper_Params
{
	struct FCosHelperInitializeInfo                    InitializeInfo;                                           
	class UCosHelper*                                  ReturnValue;                                              
};


struct UCosResponse_IsOK_Params
{
	bool                                               ReturnValue;                                              
};


struct UCosResponse_GetResponseCode_Params
{
	int                                                ReturnValue;                                              
};


struct UCosResponse_GetRequestURL_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCosResponse_GetFileInfo_Params
{
	ECosHelperFileInfoType                             InFileInfoType;                                           
	struct FString                                     ReturnValue;                                              
};


struct UCosResponse_GetContentAsString_Params
{
	struct FString                                     ReturnValue;                                              
};

}

