#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCreativeLuaVM_Step_Params
{
};


struct UCreativeLuaVM_SetUGCLuaMemoryProfile_Params
{
	bool                                               bEnable;                                                  
};


struct UCreativeLuaVM_SetUGCLuaMemoryAllocDebugPrint_Params
{
	bool                                               bEnable;                                                  
};


struct UCreativeLuaVM_SetPerformanceLog_Params
{
	bool                                               bEnable;                                                  
};


struct UCreativeLuaVM_SetNowRC_Params
{
	int                                                idx;                                                      
};


struct UCreativeLuaVM_SetCodeOutputDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               
};


struct UCreativeLuaVM_SetCodeFinishDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               
};


struct UCreativeLuaVM_ResetUGCLuaMemoryProfile_Params
{
};


struct UCreativeLuaVM_Reset_Params
{
};


struct UCreativeLuaVM_RequireMain_Params
{
};


struct UCreativeLuaVM_RegisterLuaFunctions_Params
{
	struct FString                                     ModuleName;                                               
	TArray<struct FString>                             OpenFunctions;                                            
};


struct UCreativeLuaVM_RegisterLuaAPIStringValue_Params
{
	struct FString                                     ModuleName;                                               
	struct FString                                     Name;                                                     
	struct FString                                     Value;                                                    
};


struct UCreativeLuaVM_RegisterLuaAPINumberValue_Params
{
	struct FString                                     ModuleName;                                               
	struct FString                                     Name;                                                     
	float                                              Value;                                                    
};


struct UCreativeLuaVM_RegisterLuaAPIBoolValue_Params
{
	struct FString                                     ModuleName;                                               
	struct FString                                     Name;                                                     
	bool                                               Value;                                                    
};


struct UCreativeLuaVM_RefreshLastCommentInfo_Params
{
};


struct UCreativeLuaVM_PostInit_Params
{
};


struct UCreativeLuaVM_LogBlockExecuteTime_Params
{
	struct FString                                     blockId;                                                  
};


struct UCreativeLuaVM_KillJob_Params
{
	int                                                JobId;                                                    
	bool                                               bReset;                                                   
};


struct UCreativeLuaVM_InitEditMods_Params
{
	TArray<struct FString>                             mods;                                                     
};


struct UCreativeLuaVM_Init_Params
{
	int                                                MemLimit;                                                 
};


struct UCreativeLuaVM_GetUGCLuaBlockMemoryLiveBytes_Params
{
	struct FString                                     blockId;                                                  
	int                                                ReturnValue;                                              
};


struct UCreativeLuaVM_GetNowRC_Params
{
	int                                                ReturnValue;                                              
};


struct UCreativeLuaVM_GetMemoryUsed_Params
{
	int                                                ReturnValue;                                              
};


struct UCreativeLuaVM_GetLastCommentInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeLuaVM_FreezeGameTime_Params
{
	bool                                               bCond;                                                    
};


struct UCreativeLuaVM_ExtractCurrentCode_Params
{
	int                                                CodeIdx;                                                  
	struct FString                                     code;                                                     
};


struct UCreativeLuaVM_ExportUGCLuaMemoryProfileAsSluaStat_Params
{
	struct FString                                     FilePath;                                                 
	struct FString                                     outFilePath;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaVM_ExeCodeUntilSuspended_Params
{
};


struct UCreativeLuaVM_EnqueueCode_Params
{
	struct FString                                     RuntimeCode;                                              
	int                                                CodeUID;                                                  
	int                                                ReturnValue;                                              
};


struct UCreativeLuaVM_DumpUGCLuaBlockMemoryProfile_Params
{
	int                                                TopN;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UCreativeLuaVM_DescribeLuaThread_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeLuaVM_Close_Params
{
};


struct UCreativeLuaVM_AllowRequire_Params
{
	bool                                               bAllow;                                                   
};


struct UCreativeEntityInterface_UUID2UObject_Params
{
	int64_t                                            UUID;                                                     
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeEntityInterface_UUID2Type_Params
{
	int64_t                                            UUID;                                                     
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeEntityInterface_UUID2Key_Params
{
	int64_t                                            UUID;                                                     
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeEntityInterface_RemoveUUID_Params
{
	int64_t                                            UUID;                                                     
};


struct UCreativeEntityInterface_GetInstanceObjectUUID_Params
{
	int64_t                                            UUID;                                                     
	int64_t                                            ReturnValue;                                              
};


struct UCreativeEntityInterface_CreateEntityIfNotExistsFromUObject_Params
{
	class UObject*                                     Object;                                                   
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	int64_t                                            ReturnValue;                                              
};


struct UCreativeEntityInterface_CreateEntityIfNotExistsFromKey_Params
{
	uint32_t                                           Key;                                                      
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	int64_t                                            ReturnValue;                                              
};

}

