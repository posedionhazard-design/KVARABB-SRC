#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UMMKVObject_TotalSize_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UMMKVObject_SetString_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UMMKVObject_SetInt32_Params
{
	struct FString                                     Key;                                                      
	int                                                Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UMMKVObject_SetErrorLogDelegate_Params
{
	struct FScriptDelegate                             Handler;                                                  
};


struct UMMKVObject_SetDouble_Params
{
	struct FString                                     Key;                                                      
	double                                             Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UMMKVObject_SetBuffer_Params
{
	struct FString                                     Key;                                                      
	TArray<unsigned char>                              Buffer;                                                   
	bool                                               ReturnValue;                                              
};


struct UMMKVObject_SetBool_Params
{
	struct FString                                     Key;                                                      
	bool                                               Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UMMKVObject_Remove_Params
{
	struct FString                                     Key;                                                      
};


struct UMMKVObject_MMKVLogError__DelegateSignature_Params
{
	struct FString                                     MapID;                                                    
	int                                                errorType;                                                
};


struct UMMKVObject_Init_Params
{
	struct FString                                     MMapID;                                                   
	struct FString                                     RootPath;                                                 
};


struct UMMKVObject_GetValueSize_Params
{
	struct FString                                     Key;                                                      
	uint32_t                                           ReturnValue;                                              
};


struct UMMKVObject_GetString_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UMMKVObject_GetInt32_Params
{
	struct FString                                     Key;                                                      
	int                                                ReturnValue;                                              
};


struct UMMKVObject_GetDouble_Params
{
	struct FString                                     Key;                                                      
	double                                             ReturnValue;                                              
};


struct UMMKVObject_GetBuffer_Params
{
	struct FString                                     Key;                                                      
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UMMKVObject_GetBool_Params
{
	struct FString                                     Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UMMKVObject_GetAllKeys_Params
{
	TMap<struct FString, bool>                         ReturnValue;                                              
};


struct UMMKVObject_ContainsKey_Params
{
	struct FString                                     Key;                                                      
	bool                                               ReturnValue;                                              
};

}

