#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UTApmHelper_ValidateDevice_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UTApmHelper_UpdateGameStatusToVmp_Params
{
	int                                                Key;                                                      
	struct FString                                     Value;                                                    
};


struct UTApmHelper_SetVersionIden_Params
{
	struct FString                                     versionName;                                              
};


struct UTApmHelper_SetUserId_Params
{
	struct FString                                     UserId;                                                   
};


struct UTApmHelper_SetTragetFrameRate_Params
{
	int                                                Target;                                                   
};


struct UTApmHelper_SetQuality_Params
{
	int                                                Quality;                                                  
};


struct UTApmHelper_SetPssManualMode_Params
{
};


struct UTApmHelper_SetPostValueQueueLength_Params
{
	int                                                postValueQueueLength;                                     
	bool                                               ReturnValue;                                              
};


struct UTApmHelper_SetLocale_Params
{
	struct FString                                     Locale;                                                   
};


struct UTApmHelper_SetDeviceLevel_Params
{
	int                                                DeviceLevel;                                              
};


struct UTApmHelper_setAffinityForThread_Params
{
	int                                                tid;                                                      
};


struct UTApmHelper_requestResourceGuarantee_Params
{
	int                                                Condition;                                                
	int                                                LoadType;                                                 
	int                                                applyType;                                                
};


struct UTApmHelper_RequestPssSample_Params
{
};


struct UTApmHelper_ReleaseStepEventContext_Params
{
};


struct UTApmHelper_RegisterRomCallBackMeta_Params
{
	struct FString                                     OpenID;                                                   
	struct FString                                     ZoneID;                                                   
};


struct UTApmHelper_PutKVS_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UTApmHelper_PutKVI_Params
{
	struct FString                                     Key;                                                      
	int                                                Value;                                                    
};


struct UTApmHelper_PutKVD_Params
{
	struct FString                                     Key;                                                      
	float                                              Value;                                                    
};


struct UTApmHelper_PostValueS_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UTApmHelper_PostValueI3_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                C;                                                        
};


struct UTApmHelper_PostValueI2_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	int                                                A;                                                        
	int                                                B;                                                        
};


struct UTApmHelper_PostValueI1_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	int                                                A;                                                        
};


struct UTApmHelper_PostValueF3_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              C;                                                        
};


struct UTApmHelper_PostValueF2_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	float                                              A;                                                        
	float                                              B;                                                        
};


struct UTApmHelper_PostValueF1_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	float                                              A;                                                        
};


struct UTApmHelper_PostTrackState_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              Pitch;                                                    
	float                                              Yaw;                                                      
	float                                              Roll;                                                     
};


struct UTApmHelper_PostStreamEvent_Params
{
	int                                                stepId;                                                   
	int                                                status;                                                   
	int                                                code;                                                     
	struct FString                                     Info;                                                     
};


struct UTApmHelper_PostStepEvent_Params
{
	struct FString                                     eventCategory;                                            
	int                                                stepId;                                                   
	int                                                status;                                                   
	int                                                code;                                                     
	struct FString                                     Msg;                                                      
	struct FString                                     extraKey;                                                 
};


struct UTApmHelper_PostNTL_Params
{
	int                                                latency;                                                  
};


struct UTApmHelper_PostLargeValueS_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UTApmHelper_PostLagStatus_Params
{
	float                                              Distance;                                                 
};


struct UTApmHelper_PostGameStatusToTGPASS_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UTApmHelper_PostGameStatusToTGPASMap_Params
{
	struct FString                                     Key;                                                      
	TMap<struct FString, struct FString>               mapData;                                                  
};


struct UTApmHelper_PostGameStatusToTGPAIS_Params
{
	int                                                Key;                                                      
	struct FString                                     Value;                                                    
};


struct UTApmHelper_PostFrame_Params
{
	float                                              DeltaTime;                                                
};


struct UTApmHelper_PostEvent_Params
{
	int                                                Key;                                                      
	struct FString                                     Info;                                                     
	bool                                               savetolocal;                                              
};


struct UTApmHelper_MarkLevelLoadCompleted_Params
{
};


struct UTApmHelper_MarkLevelLoad_Params
{
	struct FString                                     SceneName;                                                
	int                                                Quality;                                                  
};


struct UTApmHelper_MarkLevelFin_Params
{
};


struct UTApmHelper_MarkHideLoadingUI_Params
{
};


struct UTApmHelper_MarkAppFinishLaunch_Params
{
};


struct UTApmHelper_LinkLastStepEventSession_Params
{
	struct FString                                     eventCategory;                                            
};


struct UTApmHelper_InitTGPA_Params
{
};


struct UTApmHelper_InitStepEventContext_Params
{
};


struct UTApmHelper_GetOptCfgStr_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UTApmHelper_GetDeviceLevelByQcc_Params
{
	struct FString                                     ConfigName;                                               
	struct FString                                     GPUFamily;                                                
	int                                                ReturnValue;                                              
};


struct UTApmHelper_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UTApmHelper_GetDataFromTGPA_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UTApmHelper_EndTupleWrap_Params
{
};


struct UTApmHelper_EndTag_Params
{
};


struct UTApmHelper_EndExclude_Params
{
};


struct UTApmHelper_EnableDebugMode_Params
{
};


struct UTApmHelper_DumpEvent_Params
{
	struct FString                                     dumpfile;                                                 
};


struct UTApmHelper_cancelAffinityForThread_Params
{
	int                                                tid;                                                      
};


struct UTApmHelper_BeginTupleWrap_Params
{
	struct FString                                     Key;                                                      
};


struct UTApmHelper_BeginExclude_Params
{
};


struct UTApmHelper_AddTag_Params
{
	struct FString                                     TagName;                                                  
};


struct UTApmSceneMarker_SetEnable_Params
{
	bool                                               Enabled;                                                  
};


struct UTApmSceneMarker_MarkOPScene_Params
{
	int                                                ID;                                                       
};


struct UTApmSceneMarker_MarkFlowScene_Params
{
	int                                                ID;                                                       
};


struct UTApmSceneMarker_CancelOPScene_Params
{
	int                                                ID;                                                       
};

}

