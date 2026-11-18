#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ACreateBackpackRepActor_InitCustomItemDataInfo_Params
{
};


struct ACreateBackpackRepActor_CustomItemDataInitComplete_Params
{
};


struct UCreativeAbilitySystemComponent_UpdateGridGhostBuildingLocation_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UCreativeAbilitySystemComponent_UpdateGhostBuildingTransform_Params
{
};


struct UCreativeAbilitySystemComponent_SetSnapTargetTransform_Params
{
	struct FTransform                                  SnapTargetTransform;                                      
};


struct UCreativeAbilitySystemComponent_SetOverrideBuild_Params
{
	struct FVector                                     Position;                                                 
	struct FRotator                                    Rotation;                                                 
};


struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformScale_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformRotation_Params
{
	float                                              Roll;                                                     
	float                                              Yaw;                                                      
	float                                              Pitch;                                                    
};


struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformLocation_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UCreativeAbilitySystemComponent_LuaGhostBuildingInstaUpdate_Params
{
};


struct UCreativeAbilitySystemComponent_GetSnappedLocAxisZ_Params
{
	float                                              Loc;                                                      
	float                                              Base;                                                     
	float                                              ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_GetSnappedLocAxis_Params
{
	float                                              Value;                                                    
	int                                                AxisType;                                                 
	float                                              ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_GetSetupBuildingID_Params
{
	int                                                ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_GetPlayerController_Params
{
	class ASTExtraPlayerController*                    ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_GetLuaSnapTargetTransform_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_GetLuaInstanceBoundingBox_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_GetGhostBuildingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_GetBuildingInstanceID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_GetBuildDistance_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeAbilitySystemComponent_ClearOverrideBuild_Params
{
};


struct UCreativeActorDataManager_SetNeedInitAbstractClassIDList_Params
{
	TArray<int>                                        InNeedInitAbstractClassIDList;                            
	struct FString                                     InAuthorID;                                               
};


struct UCreativeActorDataManager_SetActorDataNodes_Params
{
	TArray<struct FCreativeActorDataNode>              ActorDataNodes;                                           
};


struct UCreativeActorDataManager_RemoveActorData_Params
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Type;                                                     
};


struct UCreativeActorDataManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};


struct UCreativeActorDataManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeActorDataManager_OnRep_NeedInitAbstractClassIDList_Params
{
};


struct UCreativeActorDataManager_OnPostSetLuaEventBridgeInstance_Params
{
};


struct UCreativeActorDataManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeActorDataManager_GetActorDataNodes_Params
{
	TArray<uint32_t>                                   DataHashKeys;                                             
	TArray<struct FCreativeActorDataNode>              ReturnValue;                                              
};


struct UCreativeActorDataManager_GetActorDataContent_Params
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Type;                                                     
	TArray<unsigned char>                              OutContent;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeActorDataManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeActorDataManager*                   ReturnValue;                                              
};


struct UCreativeActorDataManager_ChangeActorData_Params
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Type;                                                     
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeActorDataManager_CallOnReceivePreActorDataRemove_Params
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Type;                                                     
};


struct UCreativeActorDataManager_CallOnReceivePostActorDataChange_Params
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Type;                                                     
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeActorDataManager_CallOnReceivePostActorDataAdd_Params
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Type;                                                     
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeActorDataManager_AddActorData_Params
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Type;                                                     
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeModeActorInteractionComponent_SortCanEditParamsObjs_Params
{
};


struct UCreativeModeActorInteractionComponent_SetCrossHairTransformObjInstanceID_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeModeActorInteractionComponent_SetCrossHairSelectedObjInstanceID_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeModeActorInteractionComponent_SetCrossHairPickActor_Params
{
	class AActor*                                      PickActor;                                                
};


struct UCreativeModeActorInteractionComponent_SectorCheckImplement_Params
{
	float                                              CheckDistance;                                            
	float                                              CheckAngle;                                               
};


struct UCreativeModeActorInteractionComponent_GetSectorCheckIntervalCfg_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_GetSectorCheckDistance_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_GetSectorCheckAngle_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_GetPlayerHalfHeight_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_GetPlayerController_Params
{
	class ASTExtraPlayerController*                    ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_GetCrossHairTransformDistanceCfg_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_GetCrossHairPickDistanceCfg_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_GetCrossHairCheckIntervalCfg_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_GetCrossHairCheckDistanceCfg_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeActorInteractionComponent_CrossHairCheckImplement_Params
{
	float                                              Distance;                                                 
};


struct UCreativeModeActorInteractionComponent_ClearCanEditParamsObjs_Params
{
};


struct UCreativeModeActorInteractionComponent_AddCanEditObject_Params
{
	class UObject*                                     uCanEditObject;                                           
	float                                              Angle;                                                    
	float                                              Distance;                                                 
};


struct UCreativeAdaptiveSchedulManager_SetObjectProfile_Params
{
	bool                                               bOpen;                                                    
};


struct UCreativeAdaptiveSchedulManager_SetLuaProfile_Params
{
	bool                                               bOpen;                                                    
};


struct UCreativeAdaptiveSchedulManager_RecordFunctionStart_Params
{
	struct FString                                     ClassName;                                                
	struct FString                                     FunctionName;                                             
	int                                                ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_RecordFunctionEnd_Params
{
	struct FString                                     ClassName;                                                
	struct FString                                     FunctionName;                                             
	int                                                Cycles;                                                   
};


struct UCreativeAdaptiveSchedulManager_LuaPath2Tag_Params
{
	struct FString                                     luaPath;                                                  
	struct FString                                     FunctionName;                                             
	int                                                ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_LogOutputObjectMemoryInfo_Params
{
	bool                                               bClear;                                                   
};


struct UCreativeAdaptiveSchedulManager_LogOutputLuaFunctionCallInfo_Params
{
	bool                                               bClear;                                                   
};


struct UCreativeAdaptiveSchedulManager_LogoutLuaRecord_Params
{
	TMap<int, int64_t>                                 ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_LLMEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_InitTagIfNotExist_Params
{
	struct FString                                     TagName;                                                  
	int                                                ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_InitNewLuaPath2Tag_Params
{
	struct FString                                     luaPath;                                                  
	struct FString                                     FunctionName;                                             
	int                                                ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_GetPureLuaUsedBytes_Params
{
	uint64_t                                           ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_GetLuaUsedBytes_Params
{
	uint64_t                                           ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeAdaptiveSchedulManager*             ReturnValue;                                              
};


struct UCreativeAdaptiveSchedulManager_AfterDead_Params
{
	int                                                SpecType;                                                 
};


struct UCreativeLuaSignalObjectBase_TryBeginPlay_Params
{
};


struct UCreativeLuaSignalObjectBase_SetLuaFilePath_Params
{
	struct FString                                     FilePath;                                                 
};


struct UCreativeLuaSignalObjectBase_RemoveCommonEvent_Params
{
	int                                                EventHandle;                                              
};


struct UCreativeLuaSignalObjectBase_ReceivePostBeginPlay_Params
{
};


struct UCreativeLuaSignalObjectBase_ReceiveBeginPlay_Params
{
};


struct UCreativeLuaSignalObjectBase_HookObject_Params
{
};


struct UCreativeLuaSignalObjectBase_ClearAllCommonEvent_Params
{
};


struct UCreativeLuaSignalObjectBase_AddCommonEvent_Params
{
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	struct FString                                     FunctionName;                                             
};


struct UCreativeApiObject_SetModuleName_Params
{
	struct FString                                     NewName;                                                  
};


struct UCreativeApiObject_GetModuleName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeAssetManager_RemoveAssetInfo_Params
{
	int                                                AssetId;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeAssetManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeAssetManager_ReceiveInitAssetInfo_Params
{
	int                                                AssetId;                                                  
};


struct UCreativeAssetManager_ReceiveGetCustomAssetAsyncWithStringForManage_Params
{
	struct FString                                     CustomAssetKey;                                           
};


struct UCreativeAssetManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeAssetManager_OnCustomAssetLoadComplete_Params
{
	struct FString                                     CustomAssetKey;                                           
	class UObject*                                     LoadObject;                                               
};


struct UCreativeAssetManager_GetObbyMeshPath_Params
{
	int                                                AssetId;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UCreativeAssetManager_GetMaterialPath_Params
{
	int                                                MaterialID;                                               
	struct FString                                     ReturnValue;                                              
};


struct UCreativeAssetManager_GetCustomAssetAsyncWithStringForManage_Params
{
	struct FString                                     CustomAssetKey;                                           
	struct FString                                     InputString;                                              
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 
};


struct UCreativeAssetManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeAssetManager*                       ReturnValue;                                              
};


struct UCreativeAssetManager_AddAssetInfo_Params
{
	int                                                AssetId;                                                  
	struct FCreativeAssetInfo                          AssetInfo;                                                
};


struct UCreativeAudioBlueprintFunctionLibrary_SaveWemToConvert_Params
{
	TArray<unsigned char>                              WemData;                                                  
	struct FString                                     SavePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeAudioBlueprintFunctionLibrary_RegisterWwiseBaseDir_Params
{
	struct FString                                     BaseDir;                                                  
};


struct UCreativeAudioBlueprintFunctionLibrary_GetWavLength_Params
{
	TArray<unsigned char>                              WavData;                                                  
	float                                              ReturnValue;                                              
};


struct UCreativeAudioBlueprintFunctionLibrary_GetMp3Length_Params
{
	TArray<unsigned char>                              Mp3Data;                                                  
	float                                              ReturnValue;                                              
};


struct UCreativeAudioBlueprintFunctionLibrary_GetAudioWaveform_Params
{
	uint32_t                                           WemMediaID;                                               
	float                                              SampleInterval;                                           
	struct FScriptDelegate                             Callback;                                                 
};


struct UCreativeAutoGenComponent_GetNodeSegmentContent_Params
{
	struct FCreativeAutoGenItemDataSegment             Segment;                                                  
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeAutoGenComponent_AddInstanceDataContent_Params
{
	struct FCreativeAutoGenDataSegment                 Segment;                                                  
	TArray<unsigned char>                              Content;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBackpackUtils_ResCanAddToBackpackNum_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        
	int                                                resID;                                                    
	int                                                AddNum;                                                   
	int                                                ReturnValue;                                              
};


struct UCreativeModeBackpackUtils_GetItemMaxCount_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        
	int                                                resID;                                                    
	int                                                ReturnValue;                                              
};


struct UCreativeModeBackpackUtils_AddAIAvatarItem_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        
	int                                                ID;                                                       
	int                                                Color;                                                    
	int                                                Pattern;                                                  
	int                                                Num;                                                      
};


struct UCreativeBaseWidget_StopCustomAnimation_Params
{
	bool                                               bReset;                                                   
};


struct UCreativeBaseWidget_SetZOrderBatchData_Params
{
	struct FString                                     InInstanceID;                                             
	int                                                InOriginalLayer;                                          
};


struct UCreativeBaseWidget_SetEndForceVolatileDelayTime_Params
{
	float                                              InDelayTime;                                              
};


struct UCreativeBaseWidget_SetAnimationForceVolatileEnable_Params
{
	bool                                               bEnable;                                                  
};


struct UCreativeBaseWidget_ResumeCustomAnimation_Params
{
};


struct UCreativeBaseWidget_PlayCustomAnimation_Params
{
	struct FCreativeUITweenInfo                        InTweenInfo;                                              
	struct FCreativeUIAnimationGoal                    InGoal;                                                   
};


struct UCreativeBaseWidget_PauseCustomAnimation_Params
{
};


struct UCreativeBaseWidget_IsCustomAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeBaseWidget_IsCustomAnimationPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeBaseWidget_GetZOrderBatchSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UCreativeBinaryDataManager_SetInitBinaryDataSize_Params
{
	uint32_t                                           DataSize;                                                 
};


struct UCreativeBinaryDataManager_ReceiveOnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  
};


struct UCreativeBinaryDataManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};


struct UCreativeBinaryDataManager_ReceiveOnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    
};


struct UCreativeBinaryDataManager_OnRep_InitBinaryDataSize_Params
{
};


struct UCreativeBinaryDataManager_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  
};


struct UCreativeBinaryDataManager_OnPostSetLuaEventBridgeInstance_Params
{
};


struct UCreativeBinaryDataManager_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    
};


struct UCreativeBinaryDataManager_GetInitBinaryDataSize_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeBinaryDataManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeBinaryDataManager*                  ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_SetRTLOffsetY_Params
{
	float                                              Offset;                                                   
};


struct UCreativeBlockyLuaManager_SetLTROffsetY_Params
{
	float                                              Offset;                                                   
};


struct UCreativeBlockyLuaManager_SetFontSize_Params
{
	int                                                FontSize;                                                 
};


struct UCreativeBlockyLuaManager_SetBlockIdFromSlotString_Params
{
	struct FBlockySlotString                           SlotString;                                               
	struct FString                                     blockId;                                                  
};


struct UCreativeBlockyLuaManager_ReturnPresetDescsToCache_Params
{
	TArray<class UPresetDesc*>                         ReturnDescs;                                              
};


struct UCreativeBlockyLuaManager_ReturnGraphDataObject_Params
{
	class UBlockyGraphData*                            GraphDataObj;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_RemoveDynamicPresetDescs_Params
{
	TArray<class UPresetDesc*>                         PresetDescs;                                              
};


struct UCreativeBlockyLuaManager_RegisterNameCache_Params
{
	class UBlockyGraphData*                            GraphData;                                                
};


struct UCreativeBlockyLuaManager_RefreshBlockyFont_Params
{
	struct FSlateFontInfo                              DefaultFont;                                              
};


struct UCreativeBlockyLuaManager_ReceivePresetFromCustomSelection_Params
{
	class UObjectDesc*                                 Desc;                                                     
};


struct UCreativeBlockyLuaManager_ReceiveOutBlockyluaDownloadImage_Params
{
	class UTexture2D*                                  Texture;                                                  
	struct FString                                     IconPath;                                                 
};


struct UCreativeBlockyLuaManager_ReceiveOpenGuide_Params
{
};


struct UCreativeBlockyLuaManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeBlockyLuaManager_ReceivedGetLocalizeResStrHandleFailed_Params
{
	struct FString                                     IdOrStr;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_ReceiveCheckStringValidFunction_Params
{
	struct FString                                     CheckString;                                              
	struct FCheckStringHandleData                      Data;                                                     
};


struct UCreativeBlockyLuaManager_ReceiveCheckStringResult_Params
{
	bool                                               Result;                                                   
	struct FString                                     ValidString;                                              
	struct FCheckStringHandleData                      Data;                                                     
};


struct UCreativeBlockyLuaManager_OnReceiveMessageData_Params
{
	TArray<struct FMessageDataWrapper>                 MessageDatas;                                             
};


struct UCreativeBlockyLuaManager_OnReceiveInitDisableFunc_Params
{
};


struct UCreativeBlockyLuaManager_OnInitBlockyLuaConfig_Params
{
};


struct UCreativeBlockyLuaManager_OnGameTypePreChanged_Params
{
	unsigned char                                      LastGameType;                                             
	unsigned char                                      CurrentGameType;                                          
};


struct UCreativeBlockyLuaManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeBlockyLuaManager_IsLTRLanguage_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_IsLTR_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_InitDisableFunction_Params
{
	TArray<struct FString>                             funcs;                                                    
};


struct UCreativeBlockyLuaManager_GetPresetDescs_Params
{
	struct FString                                     TypeName;                                                 
	int                                                GetCount;                                                 
	TArray<class UPresetDesc*>                         ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GetPresetDesc_Params
{
	struct FString                                     TypeName;                                                 
	class UPresetDesc*                                 ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GetGraphDataObjectFormTemplateContent_Params
{
	TArray<unsigned char>                              GrapbAstContent;                                          
	bool                                               CallLoadFinish;                                           
	bool                                               IsLoadPresetsInGraph;                                     
	class UBlockyGraphData*                            ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GetGraphDataObjectFormContent_Params
{
	TArray<unsigned char>                              GrapbAstContent;                                          
	TArray<unsigned char>                              GlobalVarAstContent;                                      
	bool                                               CallLoadFinish;                                           
	bool                                               IsSingleton;                                              
	class UBlockyGraphData*                            ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GetDynamicPresetDescsByKey_Params
{
	struct FString                                     KeyName;                                                  
	class UPresetDesc*                                 ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GetBlockyLuaConfig_Params
{
	class UBlockyLuaConfig*                            ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GetBlockNameByStr_Params
{
	struct FString                                     BlockyId;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GetBlockIdFromSlotString_Params
{
	struct FBlockySlotString                           SlotString;                                               
	struct FString                                     ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GetAllDynamicPresetJson_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeBlockyLuaManager*                   ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GenerateLuaCodeFormJson_Params
{
	struct FString                                     JsonText;                                                 
	struct FString                                     GlobalVarJsonText;                                        
	bool                                               GenGlobalVarLua;                                          
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GenerateLuaCodeFormGraphDataObject_Params
{
	class UBlockyGraphData*                            GraphDataObj;                                             
	bool                                               GenGlobalVarLua;                                          
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_GenerateLuaCodeFormContent_Params
{
	TArray<unsigned char>                              GrapbAstContent;                                          
	TArray<unsigned char>                              GlobalVarAstContent;                                      
	bool                                               GenGlobalVarLua;                                          
	bool                                               CallLoadFinish;                                           
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_ClearNameIndexCache_Params
{
};


struct UCreativeBlockyLuaManager_ClearDynamicPresetDescs_Params
{
	TArray<class UPresetDesc*>                         ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_ClearCacheObjects_Params
{
	bool                                               CallBeginDestroy;                                         
};


struct UCreativeBlockyLuaManager_ClearBlockyLuaHotfixUtility_Params
{
};


struct UCreativeBlockyLuaManager_BlockyluaShowPresetPanelHandle_Params
{
	bool                                               IsShow;                                                   
};


struct UCreativeBlockyLuaManager_BlockyluaPresetSoundFunctionHandle_Params
{
	struct FString                                     SoundPath;                                                
};


struct UCreativeBlockyLuaManager_BlockyluaPresetSelectCheckHandle_Params
{
	class UObjectDesc*                                 Desc;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_BlockyluaModifyTipHandle_Params
{
	struct FText                                       OriginalTip;                                              
	struct FText                                       ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_BlockyluaMessageDataHandle_Params
{
	TArray<struct FMessageDataStruct>                  MessageDatas;                                             
};


struct UCreativeBlockyLuaManager_BlockyluaGetLocalizeResStrHandle_Params
{
	struct FString                                     IdOrStr;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_BlockyluaDownloadImage_Params
{
	struct FString                                     IconPath;                                                 
};


struct UCreativeBlockyLuaManager_BlockyluaCustomInputHandle_Params
{
	struct FString                                     CustomClickType;                                          
	class UObjectDesc*                                 Desc;                                                     
	TArray<class UObjectDesc*>                         followers;                                                
};


struct UCreativeBlockyLuaManager_BlockyluaCheckShowPresetFitlerBtnHandle_Params
{
	struct FString                                     TypeName;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_BlockyluaCheckShowCustomInputHandle_Params
{
	struct FString                                     CustomClickType;                                          
	class UObjectDesc*                                 Desc;                                                     
	TArray<class UObjectDesc*>                         followers;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_BindUndoCustomCommandHandle_Params
{
	bool                                               IsUndo;                                                   
};


struct UCreativeBlockyLuaManager_BindSetBlockNewStatusHandle_Params
{
	struct FString                                     blockId;                                                  
	bool                                               showstate;                                                
};


struct UCreativeBlockyLuaManager_BindGetPresetValidityDurationHandle_Params
{
	class UPresetDesc*                                 PresetDesc;                                               
	int                                                ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_BindGetBlockNewStatusHandle_Params
{
	struct FString                                     blockId;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeBlockyLuaManager_BindCallShortCutKeyHandleHandle_Params
{
	int                                                ShortCutKey;                                              
};


struct UCreativeBlockyLuaManager_BindBlockyLuaStubFunc_Params
{
	struct FString                                     BindFuncName;                                             
	struct FString                                     OverrdeFuncName;                                          
};


struct UCreativeBlockyLuaManager_AddEmptyCustomCommand_Params
{
	class UBlockyGraphData*                            GraphData;                                                
};


struct UCreativeBlockyLuaManager_AddDynamicPresetDescs_Params
{
	TArray<class UPresetDesc*>                         PresetDescs;                                              
};


struct UCreativeBlockyLuaManager_AddCustomCommand_Params
{
	class UBlockyCustomCommand*                        Command;                                                  
	class UBlockyGraphData*                            GraphData;                                                
};


struct UCreativeModeBlueprintLibrary_ZSTDDecompressData_Params
{
	TArray<unsigned char>                              CompressedData;                                           
	TArray<unsigned char>                              DecompressedData;                                         
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_ZSTDCompressData_Params
{
	TArray<unsigned char>                              UncompressedData;                                         
	TArray<unsigned char>                              CompressedData;                                           
	int                                                CompressionLevel;                                         
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_WindowsReadFileSummary_Params
{
	struct FString                                     FilePath;                                                 
	TArray<struct FString>                             Properties;                                               
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_WindowsPickFile_Params
{
	struct FString                                     filter;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_WidgetAbsoluteSizeToLocalSize_Params
{
	class UWidget*                                     Widget;                                                   
	struct FVector2D                                   AbsoluteSize;                                             
	struct FVector2D                                   ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_UObjSnapshot_Params
{
	class UWorld*                                      MyWorld;                                                  
};


struct UCreativeModeBlueprintLibrary_TransformRevert_Params
{
	struct FTransform                                  TransformRelative;                                        
	struct FTransform                                  TransformB;                                               
	struct FTransform                                  ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_TransformMultiplyBy_Params
{
	struct FTransform                                  Source;                                                   
	struct FTransform                                  M;                                                        
};


struct UCreativeModeBlueprintLibrary_TransformBounds_Params
{
	struct FBoxSphereBounds                            Bounds;                                                   
	struct FTransform                                  M;                                                        
};


struct UCreativeModeBlueprintLibrary_ToMilliseconds64_Params
{
	uint64_t                                           Cycles;                                                   
	double                                             ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_TextureToPNG_Params
{
	class UTexture2D*                                  Texture;                                                  
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_TextureToJPEG_Params
{
	class UTexture2D*                                  Texture;                                                  
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_TakeSnapshot_Params
{
	class UWidget*                                     WindowWidget;                                             
	int                                                X1;                                                       
	int                                                Y1;                                                       
	int                                                X2;                                                       
	int                                                Y2;                                                       
	struct FString                                     Filename;                                                 
	bool                                               bUseCrop;                                                 
	bool                                               bFillRect;                                                
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_SynchronizePropertiesWidget_Params
{
	class UWidget*                                     TargetWidget;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_SphereOverlapComponentsByChannel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     SpherePos;                                                
	float                                              SphereRadius;                                             
	TArray<TEnumAsByte<ECollisionChannel>>             Channels;                                                 
	class UClass*                                      ComponentClassFilter;                                     
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_SphereOverlapActorsByChannel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     SpherePos;                                                
	float                                              SphereRadius;                                             
	TArray<TEnumAsByte<ECollisionChannel>>             Channels;                                                 
	class UClass*                                      ActorClassFilter;                                         
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class AActor*>                              OutActors;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_ShouldCreatePhysicsState_Params
{
	class UPrimitiveComponent*                         Component;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_SetWorldGravityZ_Params
{
	float                                              GravityZ;                                                 
	class UObject*                                     WorldContext;                                             
	float                                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_SetWidgetVisiblePass_Params
{
	class UWidget*                                     Widget;                                                   
	bool                                               bVisiblePass;                                             
};


struct UCreativeModeBlueprintLibrary_SetStaticMeshMobility_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              
};


struct UCreativeModeBlueprintLibrary_SetSpeedOverLimit_Params
{
	class AActor*                                      Actor;                                                    
};


struct UCreativeModeBlueprintLibrary_SetRelativeCamRotation_Params
{
	class APlayerController*                           PlayerController;                                         
	class USceneComponent*                             Component;                                                
};


struct UCreativeModeBlueprintLibrary_SetParticleCullingDistance_Params
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  
	float                                              Distance;                                                 
};


struct UCreativeModeBlueprintLibrary_SetInstanceValue_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     InstanceID;                                               
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UCreativeModeBlueprintLibrary_SetCreativeLuaReplicatedBytes2048_Params
{
	struct FCreativeLuaReplicatedBytes2048             ReplicatedBytes;                                          
	TArray<unsigned char>                              InData;                                                   
};


struct UCreativeModeBlueprintLibrary_SetCreativeLuaReplicatedBytes1024_Params
{
	struct FCreativeLuaReplicatedBytes1024             ReplicatedBytes;                                          
	TArray<unsigned char>                              InData;                                                   
};


struct UCreativeModeBlueprintLibrary_SetCreativeInstanceDataContentSegment_Params
{
	struct FCreativeInstanceDataContentSegment         InstanceDataContentSegment;                               
	TArray<unsigned char>                              DataContent;                                              
};


struct UCreativeModeBlueprintLibrary_SetCreativeInstanceDataContent_Params
{
	struct FCreativeInstanceDataContent                InstanceDataContent;                                      
	TArray<unsigned char>                              DataContent;                                              
};


struct UCreativeModeBlueprintLibrary_SetCommandLineValue_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     NewValue;                                                 
};


struct UCreativeModeBlueprintLibrary_SetCollisionMobility_Params
{
	class UShapeComponent*                             Component;                                                
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              
};


struct UCreativeModeBlueprintLibrary_SetAICrowdSimulationState_Params
{
	class AAIController*                               AICtrl;                                                   
	unsigned char                                      NewState;                                                 
};


struct UCreativeModeBlueprintLibrary_SetAICrowdObstacleAvoidance_Params
{
	class AAIController*                               AICtrl;                                                   
	bool                                               bEnable;                                                  
	bool                                               bUpdateAgent;                                             
};


struct UCreativeModeBlueprintLibrary_SetActorRegionBasedNetConsideration_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               bNewValue;                                                
};


struct UCreativeModeBlueprintLibrary_SaveStringToFileByFullPath_Params
{
	struct FString                                     String;                                                   
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_SaveStringToFile_Params
{
	struct FString                                     String;                                                   
	struct FString                                     Filename;                                                 
};


struct UCreativeModeBlueprintLibrary_SaveRawStringToFile_Params
{
	TArray<unsigned char>                              Content;                                                  
	struct FString                                     FilePath;                                                 
};


struct UCreativeModeBlueprintLibrary_SaveAssetStringToFile_Params
{
	struct FString                                     String;                                                   
	struct FString                                     Filename;                                                 
};


struct UCreativeModeBlueprintLibrary_RotatorCrossInverse_Params
{
	struct FRotator                                    Rot1;                                                     
	struct FRotator                                    Rot2;                                                     
	struct FRotator                                    ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_RotatorCross_Params
{
	struct FRotator                                    Rot1;                                                     
	struct FRotator                                    Rot2;                                                     
	struct FRotator                                    ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_Rotation2Vector_Params
{
	struct FRotator                                    Rotator;                                                  
	int                                                Axis;                                                     
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_RenderTargetToRGB_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_RenderTargetToPNG_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	bool                                               bLinearToGamma;                                           
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_RenameObject_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     NewName;                                                  
};


struct UCreativeModeBlueprintLibrary_RecreatePhysicsState_Params
{
	class UPrimitiveComponent*                         Component;                                                
};


struct UCreativeModeBlueprintLibrary_QuatCrossInverse_Params
{
	struct FQuat                                       Quat1;                                                    
	struct FQuat                                       Quat2;                                                    
	struct FQuat                                       ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_QuatCross_Params
{
	struct FQuat                                       Quat1;                                                    
	struct FQuat                                       Quat2;                                                    
	struct FQuat                                       ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_ProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_PrependInt32ToBytes_Params
{
	int                                                Number;                                                   
	TArray<unsigned char>                              InBytes;                                                  
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_PopulateParticleProperties_Params
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  
};


struct UCreativeModeBlueprintLibrary_ParseInt32FromBytes_Params
{
	TArray<unsigned char>                              InBytes;                                                  
	int                                                OutNumber;                                                
	TArray<unsigned char>                              OutBytes;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_MoveComponentToNoLatent_Params
{
	class USceneComponent*                             Component;                                                
	struct FVector                                     TargetRelativeLocation;                                   
	struct FRotator                                    TargetRelativeRotation;                                   
	bool                                               bEaseOut;                                                 
	bool                                               bEaseIn;                                                  
	float                                              OverTime;                                                 
	bool                                               bForceShortestRotationPath;                               
	TEnumAsByte<EMoveComponentAction>                  MoveAction;                                               
};


struct UCreativeModeBlueprintLibrary_MoveComponentTo_Params
{
	class USceneComponent*                             Component;                                                
	struct FVector                                     WorldLocation;                                            
	struct FRotator                                    WorldRotation;                                            
	bool                                               bEaseOut;                                                 
	bool                                               bEaseIn;                                                  
	float                                              OverTime;                                                 
	bool                                               bForceShortestRotationPath;                               
	TEnumAsByte<EMoveComponentAction>                  MoveAction;                                               
};


struct UCreativeModeBlueprintLibrary_MinAreaRectangle_Params
{
	class UObject*                                     WorldContextObject;                                       
	TArray<struct FVector>                             InPoints;                                                 
	struct FVector                                     SampleSurfaceNormal;                                      
	struct FVector                                     OutRectCenter;                                            
	struct FRotator                                    OutRectRotation;                                          
	float                                              OutRectLengthX;                                           
	float                                              OutRectLengthY;                                           
	bool                                               bDebugDraw;                                               
	TArray<int>                                        PolyVertIndices;                                          
};


struct UCreativeModeBlueprintLibrary_MD5HashByteArray_Params
{
	TArray<unsigned char>                              inArray;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_MD5HashAnsiString_Params
{
	struct FString                                     str;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_Lz4DecompressData_Params
{
	TArray<unsigned char>                              CompressedData;                                           
	TArray<unsigned char>                              DecompressedData;                                         
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_Lz4CompressData_Params
{
	TArray<unsigned char>                              UncompressedData;                                         
	TArray<unsigned char>                              CompressedData;                                           
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_LoadRawFileToString_Params
{
	struct FString                                     FilePath;                                                 
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_LoadFileToArrayByFullPath_Params
{
	struct FString                                     FullPathName;                                             
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_LoadAssetFileToString_Params
{
	struct FString                                     Filename;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_LineTraceTouchComponent_Params
{
	struct FVector2D                                   TouchPos;                                                 
	class APlayerController*                           PlayerController;                                         
	struct FVector                                     TouchHitLoc;                                              
	TArray<class AActor*>                              IgnoreActors;                                             
	class USceneComponent*                             ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_LineTraceTouchAxis_Params
{
	struct FVector2D                                   TouchPos;                                                 
	class APlayerController*                           PlayerController;                                         
	struct FVector                                     TouchHitLoc;                                              
	TArray<class AActor*>                              IgnoreActors;                                             
	int                                                ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_LineTraceInstance_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	TArray<class AActor*>                              IgnoreActors;                                             
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsWindows_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsPointWithinRotatedBounds_Params
{
	struct FVector                                     BoxCenter;                                                
	struct FVector                                     BoxExtent;                                                
	float                                              YawDegrees;                                               
	struct FVector                                     Point;                                                    
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsPointInVolume_Params
{
	class AVolume*                                     Volume;                                                   
	struct FVector                                     Position;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsPhysicsStateCreated_Params
{
	class UPrimitiveComponent*                         Component;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsPersistentModeEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsPerformanceSensitive_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsOfflineBuild_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsMCPModeEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsLLMEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsCreativeMode_Params
{
	class UWorld*                                      World;                                                    
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsBoxOverlapWithRotatedBox_Params
{
	struct FVector                                     StaticBoxCenter;                                          
	struct FVector                                     StaticBoxExtent;                                          
	struct FVector                                     RotatedBoxCenter;                                         
	struct FVector                                     RotatedBoxExtent;                                         
	float                                              RotatedBoxYaw;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IsAABBVisible_Params
{
	TArray<struct FBox>                                TargetBoxs;                                               
	TArray<struct FString>                             InstanceIDs;                                              
	struct FVector                                     FarPlanePoint;                                            
	struct FVector                                     CameraForward;                                            
	TArray<float>                                      PlanesParams;                                             
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_IgnoreClientMovementErrorChecksAndCorrection_Params
{
	class ACharacter*                                  Charcter;                                                 
	bool                                               bIsIgnore;                                                
};


struct UCreativeModeBlueprintLibrary_HideEnvironmentalActorsInSceneCapture_Params
{
	class USceneCaptureComponent2D*                    SceneCapture;                                             
	class ADirectionalLight*                           LightToKeep;                                              
	bool                                               bHideSkyBox;                                              
	bool                                               bHideEnvironmentLights;                                   
	bool                                               bHideAtmosphere;                                          
	int                                                ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetWidgetRect_Params
{
	class UWidget*                                     Widget;                                                   
	int                                                X1;                                                       
	int                                                Y1;                                                       
	int                                                X2;                                                       
	int                                                Y2;                                                       
};


struct UCreativeModeBlueprintLibrary_GetUrlValue_Params
{
	class UObject*                                     WorldContext;                                             
	struct FString                                     Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetUObjAssetPath_Params
{
	class UObject*                                     Level;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetUClassName_Params
{
	class UClass*                                      UClass;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetTexture2DFromDiskFile_Params
{
	struct FString                                     FilePath;                                                 
	class UTexture2D*                                  ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetSyncDataIsEqual_Params
{
	struct FNetAvatarSyncData                          SyncDataFirst;                                            
	struct FNetAvatarSyncData                          SyncDataSecond;                                           
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetStaticMeshTriangleAndDrawCallCount_Params
{
	class UStaticMesh*                                 StaticMesh;                                               
	int                                                TriangleCount;                                            
	int                                                DrawCallCount;                                            
};


struct UCreativeModeBlueprintLibrary_GetSkeletalMeshTriangleAndDrawCallCount_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             
	int                                                TriangleCount;                                            
	int                                                DrawCallCount;                                            
};


struct UCreativeModeBlueprintLibrary_GetRTValidMaxArea_Params
{
	class UTextureRenderTarget2D*                      TextureTarget;                                            
	int                                                ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetReplicateAddDataArrayVaildNum_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FReplicateAddDataArray                      ReplicateAddDataArray;                                    
	int                                                StartIndex;                                               
	int                                                ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetRelativeTransform_Params
{
	struct FTransform                                  Base;                                                     
	struct FTransform                                  Other;                                                    
	struct FTransform                                  ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetPlatformSeconds_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetObjectScreenPos_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     InstanceID;                                               
	struct FVector2D                                   pos;                                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetObjectMap_Params
{
	class UObject*                                     WorldContextObject;                                       
	TMap<struct FString, class UObject*>               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetObjectInheritanceChain_Params
{
	class UObject*                                     Object;                                                   
	TArray<class UClass*>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetMinFovForAABB_Params
{
	struct FVector                                     CameraLocation;                                           
	struct FRotator                                    CameraRotation;                                           
	TArray<struct FVector>                             AABBVertices;                                             
	float                                              AspectRatio;                                              
	float                                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetLastInteractionElapsedTime_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetInstanceSpaceBoundingBox_Params
{
	struct FString                                     InstanceID;                                               
	float                                              Yaw;                                                      
	class UCreativeAbilitySystemComponent*             Component;                                                
};


struct UCreativeModeBlueprintLibrary_GetImageSize_Params
{
	TArray<unsigned char>                              ImageBuffer;                                              
	int                                                Format;                                                   
	struct FVector2D                                   ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetHashByString_Params
{
	struct FString                                     str;                                                      
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetGroupInstanceSpaceBoundingBox_Params
{
	struct FString                                     GroupID;                                                  
	TArray<struct FString>                             ChildrenIds;                                              
	TMap<struct FString, struct FTransform>            ChildrenTransforms;                                       
	float                                              Yaw;                                                      
	class UCreativeAbilitySystemComponent*             Component;                                                
};


struct UCreativeModeBlueprintLibrary_GetGameWorld_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UWorld*                                      ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetGameTypeAsString_Params
{
	ECreativeModeGameType                              GameType;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetDataConttentByInstanceDataContent_Params
{
	struct FCreativeInstanceDataContent                InstanceDataContent;                                      
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetDataContentByInstanceDataContentSegment_Params
{
	struct FCreativeInstanceDataContentSegment         InstanceDataContentSegment;                               
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCustomEventHashString_Params
{
	struct FString                                     CustomEventName;                                          
	bool                                               isSampleHash;                                             
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCurFrameNumber_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCurFrameCounter_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCubeTouchAxisFace_Params
{
	class UWidget*                                     Widget;                                                   
	struct FVector2D                                   ScreenPosition;                                           
	float                                              Width;                                                    
	float                                              Distance;                                                 
	struct FVector                                     OffsetLocation;                                           
	int                                                ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCreativeLuaReplicatedBytes2048_Params
{
	struct FCreativeLuaReplicatedBytes2048             ReplicatedBytes;                                          
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCreativeLuaReplicatedBytes1024_Params
{
	struct FCreativeLuaReplicatedBytes1024             ReplicatedBytes;                                          
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCopiedAvatarSyncData_Params
{
	struct FNetAvatarSyncData                          SyncData;                                                 
	struct FNetAvatarSyncData                          ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetContentPatchData_Params
{
	TArray<unsigned char>                              OldData;                                                  
	TArray<unsigned char>                              DiffData;                                                 
	TArray<unsigned char>                              outNewData;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetContentDiffData_Params
{
	TArray<unsigned char>                              OldData;                                                  
	TArray<unsigned char>                              NewData;                                                  
	TArray<unsigned char>                              outDiffData;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCommandLineValue_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetClassInheritanceChain_Params
{
	class UClass*                                      UClass;                                                   
	TArray<class UClass*>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCharacterSocketPos_Params
{
	class ACharacter*                                  Character;                                                
	struct FName                                       SocketName;                                               
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetCameraFrustumPlane_Params
{
	class UObject*                                     WorldContext;                                             
	TArray<struct FVector4>                            ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetBoundingBoxOfInstances_Params
{
	class UObject*                                     WorldContext;                                             
	TArray<struct FString>                             Ids;                                                      
	float                                              Yaw;                                                      
	struct FVector                                     Center;                                                   
	struct FVector                                     BoxExtent;                                                
};


struct UCreativeModeBlueprintLibrary_GetBoundingBoxOfActors_Params
{
	TArray<class AActor*>                              Actors;                                                   
	float                                              Yaw;                                                      
	struct FVector                                     Center;                                                   
	struct FVector                                     BoxExtent;                                                
};


struct UCreativeModeBlueprintLibrary_GetBlockyListInDisplayName_Params
{
	class UBlockBase*                                  BlockBase;                                                
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetBigUObject_Params
{
	int                                                MaxN;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetBigLuaValue_Params
{
	class UObject*                                     WorldContext;                                             
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetAllInstanceInScreenBox_Params
{
	class UObject*                                     WorldContext;                                             
	struct FVector2D                                   Start;                                                    
	struct FVector2D                                   End;                                                      
	int                                                CheckDistance;                                            
	int                                                CountLimit;                                               
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetAllInstanceInBox_Params
{
	class UObject*                                     WorldContext;                                             
	struct FVector                                     Center;                                                   
	struct FVector                                     Extent;                                                   
	struct FRotator                                    Rotator;                                                  
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetAllFilesInDir_Params
{
	struct FString                                     Dir;                                                      
	struct FString                                     Pattern;                                                  
	bool                                               bRelative;                                                
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetActorsInCameraFrustumByLayer_Params
{
	class UWorld*                                      World;                                                    
	struct FVector                                     Origin;                                                   
	struct FRotator                                    CameraRot;                                                
	float                                              MaxDistance;                                              
	float                                              AngleWidth;                                               
	float                                              AngleHeight;                                              
	int                                                NumLayers;                                                
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bDrawDebug;                                               
	struct FColor                                      DebugColor;                                               
	float                                              DebugLifeTime;                                            
	TArray<struct FOverlapResult>                      ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GetActorMeshBoundsByTag_Params
{
	class AActor*                                      Actor;                                                    
	struct FVector                                     Origin;                                                   
	struct FVector                                     BoxExtent;                                                
	struct FString                                     IgnoreTag;                                                
	struct FString                                     IncludeTag;                                               
};


struct UCreativeModeBlueprintLibrary_GenerateUIntGuid_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GenerateMemoryArray_Params
{
	int                                                SizeInMB;                                                 
	TArray<int>                                        ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_GenerateGuid_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_FindAttachedActorByName_Params
{
	class AActor*                                      ParentActor;                                              
	struct FString                                     PartialName;                                              
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_FindActorByName_Params
{
	class UWorld*                                      World;                                                    
	struct FString                                     PartialName;                                              
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_EncryptToBase64_Params
{
	TArray<unsigned char>                              inArray;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_EditorMessage_Params
{
	struct FString                                     Message;                                                  
	float                                              Time;                                                     
};


struct UCreativeModeBlueprintLibrary_DumpCurrentWorldObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     Suffix;                                                   
};


struct UCreativeModeBlueprintLibrary_DumpActorNetReplicate_Params
{
	class UObject*                                     WorldContext;                                             
	struct FString                                     Name;                                                     
};


struct UCreativeModeBlueprintLibrary_DrawLine_Params
{
	struct FPaintContext                               InContext;                                                
	struct FVector2D                                   Start;                                                    
	struct FVector2D                                   End;                                                      
	struct FLinearColor                                LineColor;                                                
	int                                                LayerOffset;                                              
	float                                              LineThickness;                                            
	bool                                               bAntiAlias;                                               
};


struct UCreativeModeBlueprintLibrary_DrawGrids_Params
{
	struct FPaintContext                               InContext;                                                
	float                                              CellSize;                                                 
	int                                                CellCountX;                                               
	int                                                CellCountY;                                               
	float                                              PosOffsetX;                                               
	float                                              PosOffsetY;                                               
	struct FLinearColor                                LineColor;                                                
	float                                              LineThickness;                                            
	bool                                               bAntiAlias;                                               
	int                                                LayerOffset;                                              
};


struct UCreativeModeBlueprintLibrary_DrawGridCell_Params
{
	struct FPaintContext                               InContext;                                                
	float                                              CellSize;                                                 
	int                                                CellIndexX;                                               
	int                                                CellIndexY;                                               
	float                                              PosOffsetX;                                               
	float                                              PosOffsetY;                                               
	struct FLinearColor                                LineColor;                                                
	int                                                LayerOffset;                                              
};


struct UCreativeModeBlueprintLibrary_DestroyUObject_Params
{
	class UObject*                                     Object;                                                   
};


struct UCreativeModeBlueprintLibrary_DestroyInstance_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     InstanceID;                                               
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_DecryptFromBase64_Params
{
	struct FString                                     inString;                                                 
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_DarwCameraFrustumDebugLine_Params
{
	class UObject*                                     WorldContext;                                             
	struct FVector                                     FarPlanePoint;                                            
	struct FVector                                     CameraForward;                                            
	TArray<float>                                      PlanesParams;                                             
	float                                              Duration;                                                 
};


struct UCreativeModeBlueprintLibrary_CreativeInstanceDataContentSegment_Params
{
	TArray<unsigned char>                              DataContent;                                              
	struct FCreativeInstanceDataContentSegment         ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_CreativeInstanceDataContent_Params
{
	TArray<unsigned char>                              DataContent;                                              
	struct FCreativeInstanceDataContent                ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_CreateRGBATexture_Params
{
	int                                                Width;                                                    
	int                                                Height;                                                   
	bool                                               bSRGB;                                                    
	class UTexture2D*                                  ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_CreateCreativeMovingAudio_Params
{
	class AActor*                                      Actor;                                                    
	int                                                Sequence;                                                 
	uint64_t                                           ConfigID;                                                 
	bool                                               bShowMark;                                                
	int                                                Duration;                                                 
	float                                              Volume;                                                   
	struct FCreativeMovingAudio                        ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_ConvertForwardToRotator_Params
{
	struct FVector                                     Forward;                                                  
	struct FRotator                                    ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_CombineRGBATexture_Params
{
	class UTexture2D*                                  DstTexture;                                               
	class UTexture2D*                                  RGSourceTexture;                                          
	class UTexture2D*                                  BSourceTexture;                                           
	class UTexture2D*                                  ASourceTexture;                                           
	bool                                               bRGSrgb;                                                  
	bool                                               bBSrgb;                                                   
	bool                                               bASrgb;                                                   
	unsigned char                                      DefaultR;                                                 
	unsigned char                                      DefaultG;                                                 
	unsigned char                                      DefaultB;                                                 
	unsigned char                                      DefaultA;                                                 
};


struct UCreativeModeBlueprintLibrary_CombineChannelsToRGBATexture_Params
{
	class UTexture2D*                                  DstTexture;                                               
	class UTexture2D*                                  RGSourceTexture;                                          
	class UTexture2D*                                  BSourceTexture;                                           
	class UTexture2D*                                  ASourceTexture;                                           
	bool                                               bRGSrgb;                                                  
	bool                                               bBSrgb;                                                   
	bool                                               bASrgb;                                                   
};


struct UCreativeModeBlueprintLibrary_ClearGrassByMaskTexture_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTexture2D*                                  MaskTexture;                                              
	struct FVector2D                                   WorldStart;                                               
	struct FVector2D                                   WorldEnd;                                                 
};


struct UCreativeModeBlueprintLibrary_CheckWidgetsOverlap_Params
{
	class UWidget*                                     Widget1;                                                  
	class UWidget*                                     Widget2;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_CharacterPlayCreativeDynamicMontage_Params
{
	class ACharacter*                                  CharacterOwner;                                           
	class UAnimSequenceBase*                           Asset;                                                    
	float                                              BlendInTime;                                              
	float                                              BlendOutTime;                                             
	float                                              InPlayRate;                                               
	int                                                LoopCount;                                                
	bool                                               bIsLoop;                                                  
	float                                              InTimeToStartMontageAt;                                   
	struct FName                                       SlotNodeName;                                             
};


struct UCreativeModeBlueprintLibrary_CaptureWidget_Params
{
	class UObject*                                     WorldContext;                                             
	class UClass*                                      WidgetClass;                                              
	struct FString                                     Path;                                                     
	int                                                X;                                                        
	int                                                Y;                                                        
	bool                                               FlipY;                                                    
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_BoxOverlapComponentsByChannel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     BoxPos;                                                   
	struct FVector                                     BoxExtent;                                                
	TArray<TEnumAsByte<ECollisionChannel>>             Channels;                                                 
	class UClass*                                      ComponentClassFilter;                                     
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_BoxOverlapComponents_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     BoxPos;                                                   
	struct FVector                                     BoxExtent;                                                
	TArray<int>                                        ObjectTypes;                                              
	class UClass*                                      CompClassFilter;                                          
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class UPrimitiveComponent*>                 OutComps;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_BoxOverlapActorsByChannel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     BoxPos;                                                   
	struct FVector                                     BoxExtent;                                                
	TArray<TEnumAsByte<ECollisionChannel>>             Channels;                                                 
	class UClass*                                      ActorClassFilter;                                         
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class AActor*>                              OutActors;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_BoxOverlapActors_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     BoxPos;                                                   
	struct FVector                                     BoxExtent;                                                
	TArray<int>                                        ObjectTypes;                                              
	class UClass*                                      ActorClassFilter;                                         
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class AActor*>                              OutActors;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_BlueprintSuggestProjectileVelocity_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     TossVelocity;                                             
	struct FVector                                     StartLocation;                                            
	struct FVector                                     EndLocation;                                              
	float                                              LaunchSpeed;                                              
	float                                              OverrideGravityZ;                                         
	TEnumAsByte<ESuggestProjVelocityTraceOption>       TraceOption;                                              
	float                                              CollisionRadius;                                          
	bool                                               bFavorHighArc;                                            
	bool                                               bDrawDebug;                                               
	float                                              Tolerance;                                                
	TArray<class AActor*>                              ActorsToIgnore;                                           
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_BeginDeferredActorSpawnWithName_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      ActorClass;                                               
	struct FTransform                                  SpawnTransform;                                           
	struct FName                                       Name;                                                     
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                
	class AActor*                                      Owner;                                                    
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_AttachOutlineBox_Params
{
	class AActor*                                      AttachedActor;                                            
	float                                              Yaw;                                                      
	class AActor*                                      OutlineBox;                                               
};


struct UCreativeModeBlueprintLibrary_AttachInstanceOutlineBox_Params
{
	struct FString                                     AttachedId;                                               
	bool                                               bGridEnable;                                              
	float                                              Yaw;                                                      
	class AActor*                                      OutlineBox;                                               
};


struct UCreativeModeBlueprintLibrary_AttachGroupOutlineBox_Params
{
	class AActor*                                      GroupObject;                                              
	TArray<class AActor*>                              AttachedActors;                                           
	float                                              Yaw;                                                      
	class AActor*                                      OutlineBox;                                               
};


struct UCreativeModeBlueprintLibrary_AttachGroupInstanceOutlineBox_Params
{
	struct FString                                     GroupID;                                                  
	TArray<struct FString>                             ChildrenIds;                                              
	TMap<struct FString, struct FTransform>            ChildrenTransforms;                                       
	bool                                               bGridEnable;                                              
	float                                              Yaw;                                                      
	class AActor*                                      OutlineBox;                                               
};


struct UCreativeModeBlueprintLibrary_AimSceneCaptureAtPawnSocket_Params
{
	class USceneComponent*                             SceneCapture;                                             
	class APawn*                                       TargetPawn;                                               
	struct FName                                       SocketName;                                               
	float                                              Distance;                                                 
	float                                              FOV;                                                      
	struct FVector                                     Offset;                                                   
	float                                              PawnHeight;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeModeBlueprintLibrary_AddVectorCurvePoint_Params
{
	struct FInterpCurveVector                          Curve;                                                    
	float                                              InVal;                                                    
	struct FVector                                     OutVal;                                                   
	struct FVector                                     ArriveTangent;                                            
	struct FVector                                     LeaveTangent;                                             
	int                                                InterpCurveMode;                                          
};


struct UCreativeModeBlueprintLibrary_AddOnScreenDebugMessage_Params
{
	struct FString                                     Msg;                                                      
};


struct UCreativeModeBlueprintLibrary_AddLinearColorCurvePoint_Params
{
	struct FInterpCurveLinearColor                     Curve;                                                    
	float                                              InVal;                                                    
	struct FLinearColor                                OutVal;                                                   
	struct FLinearColor                                ArriveTangent;                                            
	struct FLinearColor                                LeaveTangent;                                             
	int                                                InterpCurveMode;                                          
};


struct UCreativeModeBlueprintLibrary_AddFloatCurvePoint_Params
{
	struct FInterpCurveFloat                           Curve;                                                    
	float                                              InVal;                                                    
	float                                              OutVal;                                                   
	float                                              ArriveTangent;                                            
	float                                              LeaveTangent;                                             
	int                                                InterpCurveMode;                                          
};


struct UCreativeBounceMovementComponent_SyncUpdatedComponentDS_Params
{
};


struct UCreativeBounceMovementComponent_SetVelocityInLocalSpaceDS_Params
{
	struct FVector                                     InVelocity;                                               
};


struct UCreativeBounceMovementComponent_SetUpdatedComponentDSCPP_Params
{
	class USceneComponent*                             NewUpdatedComponent;                                      
};


struct UCreativeBounceMovementComponent_SetSlideableFloorAngleDS_Params
{
	float                                              InSlideableFloorAngle;                                    
};


struct UCreativeBounceMovementComponent_SetSlideableFloorAngle_Params
{
	float                                              InSlideableFloorAngle;                                    
};


struct UCreativeBounceMovementComponent_SetProjectileGravityScaleDS_Params
{
	float                                              InGravityScale;                                           
};


struct UCreativeBounceMovementComponent_SetMassDS_Params
{
	float                                              InMass;                                                   
};


struct UCreativeBounceMovementComponent_SetFrictionDS_Params
{
	float                                              InFriction;                                               
};


struct UCreativeBounceMovementComponent_SetBouncinessDS_Params
{
	float                                              InBounciness;                                             
};


struct UCreativeBounceMovementComponent_OnRep_UpdatedComponentDS_Params
{
	class USceneComponent*                             OldUpdatedComponent;                                      
};


struct UCreativeBounceMovementComponent_OnRep_SlideableFloorAngleDS_Params
{
	float                                              OldValue;                                                 
};


struct UCreativeBounceMovementComponent_OnRep_ProjectileGravityScaleDS_Params
{
	float                                              OldValue;                                                 
};


struct UCreativeBounceMovementComponent_OnRep_MassDS_Params
{
	float                                              OldValue;                                                 
};


struct UCreativeBounceMovementComponent_OnRep_FrictionDS_Params
{
	float                                              OldValue;                                                 
};


struct UCreativeBounceMovementComponent_OnRep_BouncinessDS_Params
{
	float                                              OldValue;                                                 
};


struct UCreativeBounceMovementComponent_MulticastSyncVelocity_Params
{
	struct FBounceMovementSnapshot                     Snapshot;                                                 
};


struct UCreativeBounceMovementComponent_MulticastSyncStop_Params
{
	struct FBounceMovementSnapshot                     Snapshot;                                                 
};


struct UCreativeBounceMovementComponent_MulticastSyncMove_Params
{
	struct FBounceMovementSnapshot                     Snapshot;                                                 
};


struct UCreativeBounceMovementComponent_MulticastSyncLocation_Params
{
	struct FBounceMovementSnapshot                     Snapshot;                                                 
};


struct UCreativeBounceMovementComponent_MulticastSyncBounce_Params
{
	struct FBounceMovementSnapshot                     Snapshot;                                                 
};


struct UCreativeBounceMovementComponent_IsInAir_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeBounceMovementComponent_GetBaseFloorActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeBounceMovementComponent_GetBaseFloor_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              
};


struct ACreativeModeLuaSpectatorPawn_UnRegistLuaTick_Params
{
};


struct ACreativeModeLuaSpectatorPawn_SetController_Params
{
	class APlayerController*                           InController;                                             
};


struct ACreativeModeLuaSpectatorPawn_SetAbilitySystemComponentAvatar_Params
{
};


struct ACreativeModeLuaSpectatorPawn_RegistLuaTick_Params
{
	float                                              TickInterval;                                             
};


struct ACreativeModeLuaSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      
};


struct ACreativeModeLuaSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      
};


struct ACreativeModeLuaSpectatorPawn_GetActiveSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              
};


struct ACreativeCameraDeviceActor_UpdateFollowStatus_Params
{
};


struct ACreativeCameraDeviceActor_UpdateFollowPos_Params
{
};


struct ACreativeCameraDeviceActor_RotCamera_Params
{
	float                                              Yaw;                                                      
	float                                              Pitch;                                                    
};


struct ACreativeCameraDeviceActor_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       
};


struct ACreativeCameraDeviceActor_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       
};


struct ACreativeCameraDeviceActor_MoveUp_Params
{
	float                                              Val;                                                      
};


struct ACreativeCameraDeviceActor_MoveRight_Params
{
	float                                              Val;                                                      
};


struct ACreativeCameraDeviceActor_MoveForward_Params
{
	float                                              Val;                                                      
};


struct ACreativeCameraDeviceActor_LerpToTarget_Params
{
	float                                              DeltaSeconds;                                             
};


struct ACreativeCameraDeviceActor_LerpActor_Params
{
	float                                              BlendPct;                                                 
};


struct ACreativeCameraDeviceActor_IsVecInvalid_Params
{
	struct FVector                                     Vect;                                                     
	bool                                               ReturnValue;                                              
};


struct ACreativeCameraDeviceActor_IsRotInvalid_Params
{
	struct FRotator                                    Rot;                                                      
	bool                                               ReturnValue;                                              
};


struct ACreativeCameraDeviceActor_InterpolateToSpringRotation_Params
{
	float                                              LerpValue;                                                
};


struct ACreativeCameraDeviceActor_InitStartPoint_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeCameraDeviceActor_GetSpringArmForCamera_Params
{
	class UCameraComponent*                            Camera;                                                   
	class USpringArmComponent*                         ReturnValue;                                              
};


struct ACreativeCameraDeviceActor_GetLerpTime_Params
{
	float                                              BlendTimeToGo;                                            
	float                                              ReturnValue;                                              
};


struct ACreativeCameraDeviceActor_GetCameraPointPosition_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ACreativeCameraDeviceActor_GetActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              
};


struct UCreativeCameraGetter_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeCustomActorManager_UnhookUserConstructionScript_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               ReturnValue;                                              
};


struct UCreativeCustomActorManager_SpawnCustomActor_Params
{
	class UClass*                                      ActorClass;                                               
	struct FTransform                                  Transform;                                                
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeCustomActorManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeCustomActorManager_ReceiveClearAllCustomActor_Params
{
};


struct UCreativeCustomActorManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeCustomActorManager_IsUserConstructionScriptHooked_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               ReturnValue;                                              
};


struct UCreativeCustomActorManager_HookUserConstructionScript_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               ReturnValue;                                              
};


struct UCreativeCustomActorManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeCustomActorManager*                 ReturnValue;                                              
};


struct UCreativeCustomActorManager_ClearAllCustomActor_Params
{
};


struct UCreativeCustomCameraComponent_InterpolateToTargetRotation_Params
{
	float                                              LerpValue;                                                
};


struct UCreativeCustomCameraComponent_InterpolateToTargetFOV_Params
{
	float                                              LerpValue;                                                
};


struct UCreativeCustomParameterManager_RemoveCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              
	uint32_t                                           PlayerKey;                                                
};


struct UCreativeCustomParameterManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeCustomParameterManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeCustomParameterManager_GetCustomParameterDataNodes_Params
{
	uint32_t                                           ParameterID;                                              
	TArray<struct FCreativeCustomParameterDataNode>    OutCustomParameterDataNodes;                              
};


struct UCreativeCustomParameterManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeCustomParameterManager*             ReturnValue;                                              
};


struct UCreativeCustomParameterManager_ChangeCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              
	uint32_t                                           PlayerKey;                                                
	int8_t                                             TeamID;                                                   
	TArray<unsigned char>                              DataContent;                                              
};


struct UCreativeCustomParameterManager_AddCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              
	uint32_t                                           PlayerKey;                                                
	int8_t                                             TeamID;                                                   
	TArray<unsigned char>                              DataContent;                                              
	bool                                               bPropagateToChildren;                                     
};


struct UCreativeCustomPrefabComponent_GetNodeSegmentContent_Params
{
	struct FCreativePrefabDataSegment                  Segment;                                                  
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeCustomPrefabComponent_AddInstanceDataContent_Params
{
	struct FCreativeCustomPrefabDataSegment            Segment;                                                  
	TArray<unsigned char>                              Content;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeCustomUIDataComponent_SetCustomUIDataFromTransferNodes_Params
{
	TArray<struct FCreativeCustomUIDataTransferNode>   TransferNodes;                                            
};


struct UCreativeCustomUIDataComponent_SetCustomUIDataById_Params
{
	uint32_t                                           ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeCustomUIDataComponent_RemovePullRequestById_Params
{
	uint32_t                                           ID;                                                       
};


struct UCreativeCustomUIDataComponent_RemoveCustomUI_Params
{
	struct FString                                     ID;                                                       
};


struct UCreativeCustomUIDataComponent_GetCustomUIDataTransferNodes_Params
{
	TArray<uint32_t>                                   IDList;                                                   
	TArray<struct FCreativeCustomUIDataTransferNode>   ReturnValue;                                              
};


struct UCreativeCustomUIDataComponent_GetCustomUIContent_Params
{
	struct FString                                     ID;                                                       
	TArray<unsigned char>                              OutContent;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeCustomUIDataComponent_ChangeCustomUI_Params
{
	struct FString                                     ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeCustomUIDataComponent_CallOnReceivePreCustomUIDataRemove_Params
{
	uint32_t                                           ID;                                                       
};


struct UCreativeCustomUIDataComponent_CallOnReceivePostCustomUIDataChange_Params
{
	uint32_t                                           ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeCustomUIDataComponent_CallOnReceivePostCustomUIDataAdd_Params
{
	uint32_t                                           ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeCustomUIDataComponent_AddCustomUI_Params
{
	struct FString                                     ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeCustomUIVFXWidget_SetImageBrushMaterialBlend_Params
{
	float                                              V;                                                        
};


struct ACreativeDestructibleMeshActor_SetDamageEnable_Params
{
	bool                                               bEnable;                                                  
};


struct ACreativeDestructibleMeshActor_OnHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct ACreativeDestructibleMeshActor_InitHP_Params
{
	float                                              fHP;                                                      
};


struct ACreativeDestructibleMeshActor_GetFracturedComponent_Params
{
	class UPhotonDestructibleMeshComponent*            ReturnValue;                                              
};


struct ACreativeDestructibleMeshActor_AddCanDamageWeapon_Params
{
	struct FString                                     Weapon;                                                   
};


struct ACreativeDestructibleMeshBatchActor_RemoveAllCacheReplicationData_Params
{
};


struct UCreativeDropItemCurveAnimComponent_StopItemClient_Params
{
	int                                                Group;                                                    
	class AActor*                                      Target;                                                   
};


struct UCreativeDropItemCurveAnimComponent_OnParticleSystemComponentFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      
};


struct UCreativeDropItemCurveAnimComponent_IsInViewport_Params
{
	class APlayerController*                           PC;                                                       
	int                                                ViewportX;                                                
	int                                                ViewportY;                                                
	struct FVector                                     CenterPos;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeDropItemCurveAnimComponent_InitConfig_Params
{
	struct FCreativeDropAnimConfig                     Config;                                                   
	int                                                BaseConfigID;                                             
};


struct UCreativeDropItemCurveAnimComponent_DynamicReduceItemGroup_Params
{
	int                                                CurrentGroup;                                             
	int                                                Num;                                                      
};


struct UCreativeDropItemCurveAnimComponent_DecodeDropItemGroupID_Params
{
	int                                                GroupID;                                                  
	int                                                ConfigID;                                                 
	int                                                Num;                                                      
};


struct UCreativeDropItemCurveAnimComponent_AddItemClient_Params
{
	int                                                Group;                                                    
	struct FVector                                     InStartPos;                                               
	struct FVector                                     InEndPos;                                                 
	class AActor*                                      Target;                                                   
};


struct UCreativeDSLParserLibrary_ParseDSLText_Params
{
	class UDSLParser*                                  Parser;                                                   
	struct FString                                     Source;                                                   
	class UDSLParserASTTree*                           ReturnValue;                                              
};


struct UCreativeDSLParserLibrary_ParseDSLFile_Params
{
	class UDSLParser*                                  Parser;                                                   
	struct FString                                     FilePath;                                                 
	class UDSLParserASTTree*                           ReturnValue;                                              
};


struct UCreativeDSLParserLibrary_LoadDSLGrammarFromString_Params
{
	class UDSLParser*                                  Parser;                                                   
	struct FString                                     GrammarText;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeDSLParserLibrary_LoadDSLGrammarFromFile_Params
{
	class UDSLParser*                                  Parser;                                                   
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeDSLParserLibrary_CreateDSLParser_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UDSLParser*                                  ReturnValue;                                              
};


struct UCreativeDSLParserLibrary_AddDSLGrammarRule_Params
{
	class UDSLParser*                                  Parser;                                                   
	struct FString                                     RuleName;                                                 
	struct FString                                     RuleBody;                                                 
};


struct UCreativeModeLiteComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 
	uint32_t                                           RecycledSeq;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeModeLiteComponent_GetObjectFromPool_Params
{
	int                                                PoolId;                                                   
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeModeGameModeBaseComponent_SetGameStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         NewGameStateComponent;                                    
};


struct UCreativeModeGameModeBaseComponent_ReceivePostInitializeComponents_Params
{
};


struct UCreativeModeGameModeBaseComponent_GetGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              
};


struct UCreativeModeGameModeBaseComponent_GetGameMode_Params
{
	class ACreativeModeGameMode*                       ReturnValue;                                              
};


struct UCreativeModeGameModeBaseComponent_FindPlayerStartOverride_Params
{
	class AController*                                 Player;                                                   
	struct FString                                     IncomingName;                                             
	bool                                               bIsRevive;                                                
	class AActor*                                      ReturnValue;                                              
};


struct ACreativeModeEditorObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
	bool                                               Destroy;                                                  
};


struct ACreativeModeEditorObject_ShowSelectedEffect_Params
{
	bool                                               ShowEff;                                                  
	struct FLinearColor                                OutlineColor;                                             
	float                                              OutlineThickness;                                         
};


struct ACreativeModeEditorObject_ShowOutlineEffect_Params
{
	bool                                               ShowEff;                                                  
	class UMaterialInstance*                           Material;                                                 
	struct FString                                     IgnoreTag;                                                
};


struct ACreativeModeEditorObject_SetPhotographyMode_Params
{
	bool                                               bIsCapturing;                                             
};


struct ACreativeModeEditorObject_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 
};


struct ACreativeModeEditorObject_SetActorState_Params
{
	ECreativeModeActorState                            NewState;                                                 
};


struct ACreativeModeEditorObject_ReturnObjectToPool_Params
{
	class UObject*                                     Obj;                                                      
};


struct ACreativeModeEditorObject_ReturnObjectsToPool_Params
{
	TArray<class UObject*>                             Objs;                                                     
};


struct ACreativeModeEditorObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
};


struct ACreativeModeEditorObject_ReceivePostBeginPlay_Params
{
};


struct ACreativeModeEditorObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeEditorObject_ReceiveInitializeLiteComponent_Params
{
};


struct ACreativeModeEditorObject_ReceiveInitCanEditFlag_Params
{
};


struct ACreativeModeEditorObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeEditorObject_OnRepActorStateOverride_Params
{
	ECreativeModeActorState                            NewState;                                                 
};


struct ACreativeModeEditorObject_OnRep_ActorState_Params
{
	ECreativeModeActorState                            LastState;                                                
};


struct ACreativeModeEditorObject_InCollisionState_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeEditorObject_GetObjectsFromPool_Params
{
	TArray<struct FCreativePoolGetObjectParamInfo>     ObjectParams;                                             
	TArray<class UObject*>                             ReturnValue;                                              
};


struct ACreativeModeEditorObject_GetObjectFromPool_Params
{
	int                                                PoolId;                                                   
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
	class UObject*                                     ReturnValue;                                              
};


struct ACreativeModeEditorObject_GetLocationToIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct ACreativeModeEditorObject_GetActorState_Params
{
	ECreativeModeActorState                            ReturnValue;                                              
};


struct ACreativeModeEditorObject_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           
	class ULiteComponent*                              ReturnValue;                                              
};


struct UCreativeModeGameStateBaseComponent_ReceivePostInitializeComponents_Params
{
};


struct UCreativeModeGameStateBaseComponent_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              
};


struct UCreativeModeGameStateBaseComponent_GetGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              
};


struct UCreativeModeGameStateBaseComponent_GetGameState_Params
{
	class ACreativeModeGameState*                      ReturnValue;                                              
};


struct UCreativeEventObject_ReHookObject_Params
{
};


struct UCreativeEventObject_EventObjectConditionalBeginDestroy_Params
{
};


struct UCreativeExportSandboxApiLibrary_IsObjectValid_Params
{
	class UObject*                                     Object;                                                   
	bool                                               ReturnValue;                                              
};


struct UCreativeExportSandboxApiLibrary_IsObjectA_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ClassName;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeExportSandboxApiLibrary_GetObjectWorld_Params
{
	class UObject*                                     Object;                                                   
	class UWorld*                                      ReturnValue;                                              
};


struct UCreativeExportSandboxApiLibrary_GetObjectPathName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UCreativeExportSandboxApiLibrary_GetObjectOuter_Params
{
	class UObject*                                     Object;                                                   
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeExportSandboxApiLibrary_GetObjectName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UCreativeExportSandboxApiLibrary_GetObjectFullName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UCreativeExportSandboxApiLibrary_GetObjectClass_Params
{
	class UObject*                                     Object;                                                   
	class UClass*                                      ReturnValue;                                              
};


struct UCreativeExportSandboxApiLibrary_FindObjectFunction_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
	class UFunction*                                   ReturnValue;                                              
};


struct UCreativeGameAPIObject_GetPlayersInSphere_Params
{
	struct FVector                                     SphereCenter;                                             
	float                                              SphereRadius;                                             
	int                                                TeamID;                                                   
	bool                                               FilterNonPlayable;                                        
	TArray<int64_t>                                    ReturnValue;                                              
};


struct UCreativeGameAPIObject_GetPlayersInRectangle_Params
{
	struct FVector                                     RectangleCenter;                                          
	float                                              RectangleX;                                               
	float                                              RectangleY;                                               
	float                                              RectangleZ;                                               
	int                                                TeamID;                                                   
	bool                                               FilterNonPlayable;                                        
	TArray<int64_t>                                    ReturnValue;                                              
};


struct ACreativeModeGameMode_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
};


struct ACreativeModeGameMode_SetShowDropEffectEnable_Params
{
	bool                                               Enable;                                                   
};


struct ACreativeModeGameMode_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 
};


struct ACreativeModeGameMode_SetItemGenerate_Params
{
	bool                                               bIsOpen;                                                  
};


struct ACreativeModeGameMode_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              
};


struct ACreativeModeGameMode_ReInitItemGenerate_Params
{
	struct FString                                     NewItemClassPath;                                         
};


struct ACreativeModeGameMode_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
};


struct ACreativeModeGameMode_ReceiveInitializeLiteComponent_Params
{
};


struct ACreativeModeGameMode_IsStandAloneGameMode_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameMode_IsRestartPlayerUsePawnRotation_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameMode_GetCurrentModeComponent_Params
{
	class UCreativeModeGameModeBaseComponent*          ReturnValue;                                              
};


struct ACreativeModeGameMode_GetCreativeModeRealTeamNum_Params
{
	int                                                ReturnValue;                                              
};


struct ACreativeModeGameMode_GetCreativeModeRealTeamIDs_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct ACreativeModeGameMode_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           
	class ULiteComponent*                              ReturnValue;                                              
};


struct ACreativeModeGameMode_DSPlayerKickOut_Params
{
	uint64_t                                           UID;                                                      
	struct FName                                       PlayerType;                                               
	struct FString                                     ExitReason;                                               
};


struct ACreativeModeGameMode_CreativeModeFindPlayerStart_Params
{
	class AController*                                 Player;                                                   
	struct FString                                     IncomingName;                                             
	bool                                               bIsRevive;                                                
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeModeGameModeComponent_ReceiveCallPlayStateFunction_Params
{
};


struct UCreativeModeGameObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
	bool                                               Destroy;                                                  
};


struct UCreativeModeGameObject_ReturnObjectToPool_Params
{
	class UObject*                                     Obj;                                                      
};


struct UCreativeModeGameObject_ReturnObjectsToPool_Params
{
	TArray<class UObject*>                             Objs;                                                     
};


struct UCreativeModeGameObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
};


struct UCreativeModeGameObject_ReceivePostBeginPlay_Params
{
};


struct UCreativeModeGameObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeGameObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeGameObject_ReceiveEndPlay_Params
{
};


struct UCreativeModeGameObject_ReceiveBeginPlay_Params
{
};


struct UCreativeModeGameObject_GetObjectsFromPool_Params
{
	TArray<struct FCreativePoolGetObjectParamInfo>     ObjectParams;                                             
	TArray<class UObject*>                             ReturnValue;                                              
};


struct UCreativeModeGameObject_GetObjectFromPool_Params
{
	int                                                PoolId;                                                   
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeModeGameObject_GetDynamicSpawnObjUUIDs_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeGameParameterManager_SetGameParameterResumeNodes_Params
{
	TArray<struct FCreativeGameParameter>              GameParameterNodes;                                       
};


struct UCreativeGameParameterManager_RemoveGameParameter_Params
{
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
};


struct UCreativeGameParameterManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeGameParameterManager_OnReceivePreGameParameterRemove_Params
{
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
};


struct UCreativeGameParameterManager_OnReceivePostGameParameterChange_Params
{
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeGameParameterManager_OnReceivePostGameParameterAdd_Params
{
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeGameParameterManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeGameParameterManager_GetHistoryData_Params
{
	uint32_t                                           HeadHash;                                                 
	unsigned char                                      Seq;                                                      
	TArray<unsigned char>                              OutContent;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeGameParameterManager_GetGameParameterResumeNodes_Params
{
	TArray<uint32_t>                                   ParameterHeadHashs;                                       
	TArray<struct FCreativeGameParameter>              ReturnValue;                                              
};


struct UCreativeGameParameterManager_GetGameParameterContent_Params
{
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
	TArray<unsigned char>                              OutContent;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeGameParameterManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeGameParameterManager*               ReturnValue;                                              
};


struct UCreativeGameParameterManager_ChangeGameParameter_Params
{
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeGameParameterManager_AddGameParameter_Params
{
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
	TArray<unsigned char>                              Content;                                                  
};


struct ACreativeModeGameState_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
};


struct ACreativeModeGameState_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 
};


struct ACreativeModeGameState_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               
};


struct ACreativeModeGameState_SetEnvLuaRunning_Params
{
	bool                                               bRunning;                                                 
};


struct ACreativeModeGameState_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              
};


struct ACreativeModeGameState_RPC_Replay_SetInstanceDataContent_Params
{
	uint32_t                                           InstanceID;                                               
	struct FCreativeInstanceDataContent                InstanceDataContent;                                      
};


struct ACreativeModeGameState_RPC_Replay_GeneraicUGC_LuaImpl_Params
{
	TArray<unsigned char>                              Content;                                                  
};


struct ACreativeModeGameState_RPC_Replay_GeneraicUGC_Params
{
	TArray<unsigned char>                              Content;                                                  
};


struct ACreativeModeGameState_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
};


struct ACreativeModeGameState_ReceiveInitializeLiteComponent_Params
{
};


struct ACreativeModeGameState_ReceiveCreativeCollectGarbage_Params
{
};


struct ACreativeModeGameState_ReceiveAddEnvLuaRunningToCrashKit_Params
{
};


struct ACreativeModeGameState_ReceiveAddContextDataToCrashKit_Params
{
};


struct ACreativeModeGameState_OnViewportSizeChanged_Params
{
	struct FVector2D                                   OldViewportSize;                                          
	struct FVector2D                                   NewViewportSize;                                          
};


struct ACreativeModeGameState_OnRep_LargeDataContent_Params
{
};


struct ACreativeModeGameState_OnRep_InitializeGameType_Params
{
	ECreativeModeGameType                              LastInitializeGameType;                                   
};


struct ACreativeModeGameState_OnRep_EnvLuaRunning_Params
{
	bool                                               OldLuaRunning;                                            
};


struct ACreativeModeGameState_OnRep_CurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         LastComponent;                                            
};


struct ACreativeModeGameState_OnRep_CurrentGameTypeReplicated_Params
{
	ECreativeModeGameType                              LastCurrentGameTypeReplicated;                            
};


struct ACreativeModeGameState_OnRep_CreativeModTemplateId_Params
{
	int                                                LastCreativeModTemplateId;                                
};


struct ACreativeModeGameState_OnRep_CreativeModID_Params
{
	int                                                LastCreativeModID;                                        
};


struct ACreativeModeGameState_OnRep_BlockySlotStrings_Params
{
	TArray<struct FExtendedBlockySlotString>           BlockySlotStrings;                                        
};


struct ACreativeModeGameState_OnCurrentStateComponentChanged_Params
{
	class UCreativeModeGameStateBaseComponent*         LastComponent;                                            
};


struct ACreativeModeGameState_OnClientRecordingStateChange_Params
{
	EClientRecordingType                               Type;                                                     
};


struct ACreativeModeGameState_IsOfficialGame_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameState_IsEditorMode_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameState_IsDemoGame_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameState_IsCreativeMode_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameState_IsCreativeEditor_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameState_IsAIUseDynamicBehaviorTaskNode_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameState_InitCreativeModID_Params
{
	int                                                ModID;                                                    
	int                                                TemplateID;                                               
};


struct ACreativeModeGameState_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              
};


struct ACreativeModeGameState_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct ACreativeModeGameState_GetInitializeGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              
};


struct ACreativeModeGameState_GetEnvLuaRunning_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameState_GetDisableDistanceLevelsOutsideBox_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	int                                                W;                                                        
	int                                                L;                                                        
	float                                              RotationAngle;                                            
	bool                                               bUseFilter;                                               
	TArray<struct FString>                             ReturnValue;                                              
};


struct ACreativeModeGameState_GetCurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         ReturnValue;                                              
};


struct ACreativeModeGameState_GetCurrentGameTypeReplicated_Params
{
	ECreativeModeGameType                              ReturnValue;                                              
};


struct ACreativeModeGameState_GetCurrentGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              
};


struct ACreativeModeGameState_GetCurCreativeType_Params
{
	int                                                ReturnValue;                                              
};


struct ACreativeModeGameState_GetCurCreativeModResList_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ACreativeModeGameState_GetCurCreativeModMapID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ACreativeModeGameState_GetCurCreativeModID_Params
{
	int                                                ReturnValue;                                              
};


struct ACreativeModeGameState_GetCreativeModTemplateId_Params
{
	int                                                ReturnValue;                                              
};


struct ACreativeModeGameState_GetCreativeModID_Params
{
	int                                                ReturnValue;                                              
};


struct ACreativeModeGameState_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           
	class ULiteComponent*                              ReturnValue;                                              
};


struct ACreativeModeGameState_FilterLevelByName_Params
{
	struct FName                                       LevelName;                                                
	bool                                               ReturnValue;                                              
};


struct ACreativeModeGameState_ClientSetCurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         CurStateComponent;                                        
};


struct ACreativeModeGameState_ClearInstance_Params
{
};


struct ACreativeModeGameState_ClearAndReImportInstance_Params
{
};


struct ACreativeModeGameState_CanShowDropEffectByItemID_Params
{
	int                                                ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UCreativeModeGameStateComponent_SetPlayState_Params
{
	ECreativeModePlayState                             newPlayState;                                             
};


struct UCreativeModeGameStateComponent_OnRep_RuntimePlayerBattleDataObject_Params
{
};


struct UCreativeModeGameStateComponent_OnRep_IntegralMechanismComponent_Params
{
};


struct UCreativeModeGameStateComponent_OnRep_CurPlayState_Params
{
};


struct UCreativeModeGameStateComponent_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              
};


struct UCreativeGlobalApiObject_Print_Params
{
	struct FString                                     LogText;                                                  
};


struct UCreativeGlobalApiObject_CPPExecutionConsumptionTest_Params
{
	int                                                A;                                                        
	float                                              B;                                                        
	double                                             C;                                                        
	float                                              ReturnValue;                                              
};


struct UCreativeGridLevelsManager_UpdateBatchActorInstances_Params
{
	struct FString                                     GridName;                                                 
	int                                                AssetId;                                                  
	int                                                MaterialID;                                               
	bool                                               ReplaceAll;                                               
};


struct UCreativeGridLevelsManager_UnLoadGridLevelsBatchActor_Params
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  CellIndex;                                                
};


struct UCreativeGridLevelsManager_StaticMeshObjectRelieveBatch_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeGridLevelsManager_StaticMeshObjectReBatch_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeGridLevelsManager_RemoveObject_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_ReceiveRegistInstanceValueListener_Params
{
};


struct UCreativeGridLevelsManager_ReceiveDelayUpdateBatchActorInstances_Params
{
	struct FString                                     GridName;                                                 
	int                                                AssetId;                                                  
	int                                                MaterialID;                                               
	bool                                               ReplaceAll;                                               
	float                                              MoveForwardTimeStamp;                                     
};


struct UCreativeGridLevelsManager_ReceiveClearAllData_Params
{
};


struct UCreativeGridLevelsManager_ReceiveCheckObjectCanBatch_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_ObjectAddToGridCellMap_Params
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  Index;                                                    
	struct FString                                     InstanceID;                                               
};


struct UCreativeGridLevelsManager_LoadGridLevelsBatchActor_Params
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  CellIndex;                                                
};


struct UCreativeGridLevelsManager_IsCreativeEidtMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GridCellMapRemoveObject_Params
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  Index;                                                    
	struct FString                                     InstanceID;                                               
};


struct UCreativeGridLevelsManager_GetStaticMeshBatchActorPath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetSingleDestructibleMeshBatchActor_Params
{
	class ACreativeDestructibleMeshBatchActor*         ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetSingleBatchActor_Params
{
	struct FString                                     GridName;                                                 
	class ACreativeModeStaticMeshBatchActor*           ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetRelieveBatchDistance_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetReBatchDistance_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetOnCellIndex_Params
{
	struct FString                                     GridName;                                                 
	struct FVector                                     Location;                                                 
	struct FIntVector                                  ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetObjectTransform_Params
{
	struct FString                                     ID;                                                       
	struct FTransform                                  ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetObjectStreamingType_Params
{
	struct FString                                     ID;                                                       
	ECreativeModeActorStreamingType                    ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetObjectRuntimeGrid_Params
{
	struct FString                                     ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetObjectOnCellIndexByLocation_Params
{
	struct FString                                     InstanceID;                                               
	struct FString                                     GridName;                                                 
	struct FVector                                     Location;                                                 
	struct FIntVector                                  ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetObjectOnCellIndex_Params
{
	struct FString                                     InstanceID;                                               
	struct FIntVector                                  ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetObjectIsPrefab_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetObjectAssetID_Params
{
	struct FString                                     ID;                                                       
	int                                                ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetGridLoadingRange_Params
{
	struct FString                                     GridName;                                                 
	float                                              ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetGridList_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetDestructibleMeshBatchActorPath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetDefaultGridName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetCellWidthHeight_Params
{
	struct FString                                     GridName;                                                 
	struct FVector2D                                   ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetCellCenterLocation_Params
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  CellIndex;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeGridLevelsManager_GetAxisIndex_Params
{
	float                                              pos;                                                      
	float                                              BlockLenght;                                              
	int                                                ReturnValue;                                              
};


struct UCreativeGridLevelsManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeGridLevelsManager*                  ReturnValue;                                              
};


struct UCreativeGridLevelsManager_CheckObjectBeRelieveBatch_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_CheckObjectBeBatch_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_CheckAndRemoveObjectForBatchData_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_CheckAndAddObjectToBatchData_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_ChangeObjectTransform_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_ChangeObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               
	ECreativeModeActorStreamingType                    NewStremaingType;                                         
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_ChangeObjectMaterialIds_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_ChangeObjectMaterialId_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_ChangeObjectIsPrefab_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               bIsPrefab;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_AddObjectToGridLevels_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeGridLevelsManager_ActivateAllAlwaysLoadCellIndex_Params
{
};


struct UCreativeGroupManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeGroupManager*                       ReturnValue;                                              
};


struct UCreativeGuideComponent_SweepSingleByChannel_Params
{
	struct FHitResult                                  OutHit;                                                   
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	TArray<class AActor*>                              IgnoreActors;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeGuideComponent_GenereateSplineMeshes_Params
{
	TArray<struct FVector>                             Points;                                                   
};


struct UCreativeGuideMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 
	uint32_t                                           RecycledSeq;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeGuideMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
};


struct ACreativeModeInGameManagerCenter_GetIsBeginPlayEnded_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_UpdateModBinInstanceCount_Params
{
};


struct UCreativeInstanceManager_SetModBinInstanceCount_Params
{
	int                                                Count;                                                    
};


struct UCreativeInstanceManager_SetInstanceValue_Params
{
	struct FString                                     InstanceID;                                               
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_SetInstanceDataContents_Params
{
	uint16_t                                           Seq;                                                      
	TArray<struct FCreativeInstanceDataContent>        InstanceDataContents;                                     
};


struct UCreativeInstanceManager_SetInstanceContainerContent_Params
{
	TArray<unsigned char>                              ContainerContent;                                         
	uint32_t                                           NewSeq;                                                   
};


struct UCreativeInstanceManager_SendModBinaryDataToReplay_Params
{
	TArray<unsigned char>                              InBinaryData;                                             
};


struct UCreativeInstanceManager_ReqInstanceContainerContentTimeoutCheck_Params
{
};


struct UCreativeInstanceManager_ReqInstanceContainerContentEnd_Params
{
	bool                                               IsTimeout;                                                
};


struct UCreativeInstanceManager_RemoveInstance_Params
{
	struct FString                                     ID;                                                       
	bool                                               bSkipCheck;                                               
};


struct UCreativeInstanceManager_RemoveCppInstanceNode_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_RecordInstanceDataListToReplayRPC_Params
{
	TArray<struct FString>                             InstanceIDs;                                              
};


struct UCreativeInstanceManager_RecordAllInstanceDataByRPC_Params
{
};


struct UCreativeInstanceManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeInstanceManager_OnRep_RPCReplicatedInstanceContainerSeq_Params
{
};


struct UCreativeInstanceManager_OnRep_ModBinInstanceCount_Params
{
};


struct UCreativeInstanceManager_OnReceivePreInstanceRemove_Params
{
	struct FString                                     ID;                                                       
	bool                                               IsRollback;                                               
};


struct UCreativeInstanceManager_OnReceivePostInstanceChange_Params
{
	struct FString                                     ID;                                                       
	TArray<unsigned char>                              Content;                                                  
	bool                                               IsRollback;                                               
};


struct UCreativeInstanceManager_OnReceivePostInstanceAdd_Params
{
	struct FString                                     ID;                                                       
	TArray<unsigned char>                              Content;                                                  
	bool                                               IsRollback;                                               
};


struct UCreativeInstanceManager_OnReceiveClearNotReplicatedData_Params
{
};


struct UCreativeInstanceManager_OnReadyToAddInstance_Params
{
};


struct UCreativeInstanceManager_OnPlayerControllerBeginPlay_Params
{
	class APlayerController*                           PlayerController;                                         
};


struct UCreativeInstanceManager_OnGameTypeChanged_Params
{
	unsigned char                                      LastGameType;                                             
	unsigned char                                      CurrentGameType;                                          
};


struct UCreativeInstanceManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeInstanceManager_IsInstanceReplicatTreeReplicateComplete_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_IsInstanceDataTreeReplicateComplete_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_IsAssetRuntimeObjectBox_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_InitExpiredAndDebugAssetID_Params
{
	TArray<int>                                        ExpiredAssets;                                            
	TArray<int>                                        DebugAssets;                                              
};


struct UCreativeInstanceManager_HasReadyToAddInstance_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_HasAuthorityOrReplay_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_GetObjectAssetPath_Params
{
	struct FString                                     ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UCreativeInstanceManager_GetModBinInstanceCount_Params
{
	int                                                ReturnValue;                                              
};


struct UCreativeInstanceManager_GetModBinaryDataFromReplay_Params
{
	TArray<unsigned char>                              InBinaryData;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceIsDestructible_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceIsCustomUI_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceDataTreeCount_Params
{
	int                                                ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceDataContents_Params
{
	TArray<uint32_t>                                   InstanceIDs;                                              
	TArray<struct FCreativeInstanceRespondPullDataSegment> ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceDataContent_Params
{
	struct FString                                     InstanceID;                                               
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceContainerCount_Params
{
	int                                                ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceContainerContent_Params
{
	uint32_t                                           BaseSeq;                                                  
	uint32_t                                           OutSeq;                                                   
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceBoxSphereBoundsList_Params
{
	TArray<struct FString>                             InstanceIDs;                                              
	TArray<struct FBoxSphereBounds>                    ReturnValue;                                              
};


struct UCreativeInstanceManager_GetInstanceBox_Params
{
	struct FString                                     ID;                                                       
	struct FBox                                        ReturnValue;                                              
};


struct UCreativeInstanceManager_GetCppInstanceNode_Params
{
	struct FString                                     ID;                                                       
	struct FCreativeInstanceNode                       ReturnValue;                                              
};


struct UCreativeInstanceManager_GetAssetBox_Params
{
	struct FString                                     ID;                                                       
	struct FBox                                        ReturnValue;                                              
};


struct UCreativeInstanceManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeInstanceManager*                    ReturnValue;                                              
};


struct UCreativeInstanceManager_GenerateDestructionUniqueID_Params
{
	uint32_t                                           ID;                                                       
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeInstanceManager_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               
	struct FString                                     ReturnValue;                                              
};


struct UCreativeInstanceManager_ClientPreAddInstance_Params
{
	struct FString                                     ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeInstanceManager_ClearInstanceTree_Params
{
};


struct UCreativeInstanceManager_CheckAndReqRPCReplicatedInstanceContainerContent_Params
{
};


struct UCreativeInstanceManager_ChangeInstance_Params
{
	struct FString                                     ID;                                                       
	TArray<unsigned char>                              Content;                                                  
	bool                                               bCallReceiveChange;                                       
};


struct UCreativeInstanceManager_ChangeCppInstanceNode_Params
{
	struct FString                                     ID;                                                       
	struct FString                                     Key;                                                      
	struct FCreativeInstanceNode                       Node;                                                     
};


struct UCreativeInstanceManager_AddInstance_Params
{
	struct FString                                     ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeInstanceManager_AddCppInstanceNode_Params
{
	struct FString                                     ID;                                                       
	struct FCreativeInstanceNode                       Node;                                                     
};


struct UCreativeInstanceManager_AddBuildingFlag_Params
{
	struct FString                                     ID;                                                       
};


struct UCreativeInstanceStaticMeshComponent_UpdateAllInstanceByRelativeLocation_Params
{
	TArray<struct FVector>                             RelativeLocations;                                        
	struct FVector                                     Scale;                                                    
};


struct UCreativeInstanceStaticMeshComponent_UnInitInstancedStaticMeshComponntByGroupBuild_Params
{
};


struct UCreativeInstanceStaticMeshComponent_SetISMMaterial_Params
{
	class UMaterialInterface*                          NewMaterial;                                              
};


struct UCreativeInstanceStaticMeshComponent_OnStaticMeshAsyncLoaded_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           
};


struct UCreativeInstanceStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 
	uint32_t                                           RecycledSeq;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeInstanceStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
};


struct UCreativeInstanceStaticMeshComponent_InitInstancedStaticMeshComponntByGroupBuildStaticMesh_Params
{
	class USceneComponent*                             Parent;                                                   
	TArray<struct FTransform>                          InstanceTransforms;                                       
	class UObject*                                     StaticMeshObj;                                            
	class UMaterialInterface*                          Material;                                                 
};


struct UCreativeInstanceStaticMeshComponent_InitInstancedStaticMeshComponntByGroupBuild_Params
{
	class USceneComponent*                             Parent;                                                   
	TArray<struct FTransform>                          InstanceTransforms;                                       
	struct FString                                     MeshPath;                                                 
	class UMaterialInterface*                          Material;                                                 
};


struct UCreativeModeIntegralMechanismComponent_SetPlayerIntegral_Params
{
	struct FString                                     UID;                                                      
	int                                                TeamID;                                                   
	int                                                curIntegral;                                              
	int                                                curStageIntegral;                                         
	int                                                integralAddSeq;                                           
	bool                                               ReturnValue;                                              
};


struct UCreativeModeIntegralMechanismComponent_OnRepPlayerIntegralsOverride_Params
{
};


struct UCreativeModeIntegralMechanismComponent_OnRep_PlayerIntegrals_Params
{
};


struct UCreativeModeIntegralMechanismComponent_ClearPlayerIntegrals_Params
{
};


struct UCreativeModeIntegralMechanismLiteComponent_SetPlayerIntegral_Params
{
	struct FString                                     UID;                                                      
	int                                                TeamID;                                                   
	int                                                curIntegral;                                              
	int                                                curStageIntegral;                                         
	int                                                integralAddSeq;                                           
	int                                                curFunctionalIntegral;                                    
	bool                                               ReturnValue;                                              
};


struct UCreativeModeIntegralMechanismLiteComponent_PlayerIntegralContains_Params
{
	struct FString                                     UID;                                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeModeIntegralMechanismLiteComponent_OnRepPlayerIntegralsOverride_Params
{
};


struct UCreativeModeIntegralMechanismLiteComponent_OnRep_TestIndex_Params
{
	int                                                LastIndex;                                                
};


struct UCreativeModeIntegralMechanismLiteComponent_OnRep_PlayerIntegrals_Params
{
};


struct UCreativeModeIntegralMechanismLiteComponent_ClearPlayerIntegrals_Params
{
};


struct UCreativeInterpCurveWidget_Undo_Params
{
};


struct UCreativeInterpCurveWidget_SetZoomLimits_Params
{
	float                                              InMinViewRangeInput;                                      
	float                                              InMaxViewRangeInput;                                      
	float                                              InMinViewRangeOutput;                                     
	float                                              InMaxViewRangeOutput;                                     
};


struct UCreativeInterpCurveWidget_SetViewRange_Params
{
	float                                              MinInput;                                                 
	float                                              MaxInput;                                                 
	float                                              MinOutput;                                                
	float                                              MaxOutput;                                                
};


struct UCreativeInterpCurveWidget_SetSampleStep_Params
{
	float                                              InSampleStep;                                             
};


struct UCreativeInterpCurveWidget_SetKeyData_Params
{
	int                                                CurveIndex;                                               
	int                                                KeyIndex;                                                 
	float                                              InVal;                                                    
	float                                              OutVal;                                                   
	float                                              ArriveTangent;                                            
	float                                              LeaveTangent;                                             
	unsigned char                                      InterpMode;                                               
};


struct UCreativeInterpCurveWidget_SetDragThreshold_Params
{
	float                                              InDragThreshold;                                          
};


struct UCreativeInterpCurveWidget_SetCurves_Params
{
	TArray<struct FInterpCurveFloat>                   InCurves;                                                 
	TArray<struct FLinearColor>                        InColors;                                                 
};


struct UCreativeInterpCurveWidget_Redo_Params
{
};


struct UCreativeInterpCurveWidget_MarkDirty_Params
{
};


struct UCreativeInterpCurveWidget_GetCurves_Params
{
	TArray<struct FInterpCurveFloat>                   ReturnValue;                                              
};


struct UCreativeInterpCurveWidget_FitVertical_Params
{
};


struct UCreativeInterpCurveWidget_FitToView_Params
{
};


struct UCreativeInterpCurveWidget_FitHorizontal_Params
{
};


struct UCreativeInterpCurveWidget_DeleteSelectedKey_Params
{
};


struct UCreativeInterpCurveWidget_CanUndo_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeInterpCurveWidget_CanRedo_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeInterpCurveWidget_AddPoint_Params
{
	int                                                CurveIndex;                                               
	float                                              InVal;                                                    
	float                                              OutVal;                                                   
	float                                              ArriveTangent;                                            
	float                                              LeaveTangent;                                             
	unsigned char                                      InterpMode;                                               
};


struct UCreativeItemGeneratorComponent_SetWeightMul_Params
{
	TMap<struct FString, int>                          Weight;                                                   
};


struct UCreativeItemGeneratorComponent_SetAddSpotPercentMul_Params
{
	float                                              percent;                                                  
};


struct UCreativeItemGeneratorComponent_ClearWeightMul_Params
{
};


struct UCreativeLoadManager_UnloadSomeObjects_Params
{
	TArray<struct FString>                             InstanceIDs;                                              
	bool                                               bRemovePhysicsObject;                                     
};


struct UCreativeLoadManager_UnloadObject_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               bRemovePhysicsObject;                                     
};


struct UCreativeLoadManager_LoadSomeObjects_Params
{
	TArray<struct FString>                             InstanceIDs;                                              
	bool                                               bLoadImmediately;                                         
};


struct UCreativeLoadManager_LoadObject_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeLoadManager_LoadCustomUIObject_Params
{
	struct FString                                     InstanceID;                                               
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeLoadManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeLoadManager*                        ReturnValue;                                              
};


struct UCreativeLoadManager_AddObject_Params
{
	struct FString                                     InstanceID;                                               
	struct FCreativeInstanceNode                       InstanceNode;                                             
};


struct UCreativeLuaAnimGraphInstance_SetRuntimeTime_Params
{
	int                                                NodeId;                                                   
	float                                              Time;                                                     
};


struct UCreativeLuaAnimGraphInstance_SetRuntimeSelection_Params
{
	int                                                NodeId;                                                   
	struct FString                                     Selection;                                                
};


struct UCreativeLuaAnimGraphInstance_SetRuntimePlayRate_Params
{
	int                                                NodeId;                                                   
	float                                              Rate;                                                     
};


struct UCreativeLuaAnimGraphInstance_SetRuntimeLoop_Params
{
	int                                                NodeId;                                                   
	bool                                               bLoop;                                                    
};


struct UCreativeLuaAnimGraphInstance_SetRuntimeAssetPath_Params
{
	int                                                NodeId;                                                   
	struct FString                                     AssetPath;                                                
};


struct UCreativeLuaAnimGraphInstance_SetRuntimeAlpha_Params
{
	int                                                NodeId;                                                   
	float                                              Alpha;                                                    
};


struct UCreativeLuaAnimGraphInstance_SetPropertyString_Params
{
	struct FName                                       Name;                                                     
	struct FString                                     Value;                                                    
};


struct UCreativeLuaAnimGraphInstance_SetPropertyInt_Params
{
	struct FName                                       Name;                                                     
	int                                                Value;                                                    
};


struct UCreativeLuaAnimGraphInstance_SetPropertyFloat_Params
{
	struct FName                                       Name;                                                     
	float                                              Value;                                                    
};


struct UCreativeLuaAnimGraphInstance_SetPropertyBool_Params
{
	struct FName                                       Name;                                                     
	bool                                               Value;                                                    
};


struct UCreativeLuaAnimGraphInstance_SetPostProcessUpperBoneFilter_Params
{
	struct FName                                       BoneName;                                                 
	int                                                BlendDepth;                                               
};


struct UCreativeLuaAnimGraphInstance_SetOverrideOutputNodeId_Params
{
	int                                                InOverrideOutputNodeId;                                   
};


struct UCreativeLuaAnimGraphInstance_SetOverrideHookEnabled_Params
{
	ECreativeLuaAnimOverrideHook                       Hook;                                                     
	bool                                               bEnabled;                                                 
};


struct UCreativeLuaAnimGraphInstance_SetNodeSelection_Params
{
	int                                                NodeId;                                                   
	struct FString                                     Selection;                                                
};


struct UCreativeLuaAnimGraphInstance_SetNodePlayRate_Params
{
	int                                                NodeId;                                                   
	float                                              Rate;                                                     
};


struct UCreativeLuaAnimGraphInstance_SetNodeOverrideMode_Params
{
	int                                                NodeId;                                                   
	int                                                Mode;                                                     
};


struct UCreativeLuaAnimGraphInstance_SetNodeLoop_Params
{
	int                                                NodeId;                                                   
	bool                                               bLoop;                                                    
};


struct UCreativeLuaAnimGraphInstance_SetNodeExternalTime_Params
{
	int                                                NodeId;                                                   
	float                                              Time;                                                     
};


struct UCreativeLuaAnimGraphInstance_SetNodeBlendAlpha_Params
{
	int                                                NodeId;                                                   
	float                                              Alpha;                                                    
};


struct UCreativeLuaAnimGraphInstance_SetNodeAssetPath_Params
{
	int                                                NodeId;                                                   
	struct FString                                     AssetPath;                                                
};


struct UCreativeLuaAnimGraphInstance_SetNodeAsset_Params
{
	int                                                NodeId;                                                   
	struct FString                                     AssetPath;                                                
	float                                              BlendTime;                                                
};


struct UCreativeLuaAnimGraphInstance_SetBypassEvaluate_Params
{
	bool                                               bInBypassEvaluate;                                        
};


struct UCreativeLuaAnimGraphInstance_SetActiveHookMask_Params
{
	int                                                InMask;                                                   
};


struct UCreativeLuaAnimGraphInstance_RefreshActiveHookMask_Params
{
};


struct UCreativeLuaAnimGraphInstance_PrewarmGraphAnimAssets_Params
{
};


struct UCreativeLuaAnimGraphInstance_PreloadAnimAssetAsync_Params
{
	struct FString                                     AssetPath;                                                
};


struct UCreativeLuaAnimGraphInstance_PostUpdateAnimation_Params
{
	float                                              DeltaSeconds;                                             
};


struct UCreativeLuaAnimGraphInstance_OnUpdateAnimation_Params
{
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateSelect_Params
{
	int                                                NodeId;                                                   
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateNode_Params
{
	int                                                NodeId;                                                   
	ECreativeLuaAnimNodeType                           NodeType;                                                 
	struct FString                                     NodeName;                                                 
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateMask_Params
{
	int                                                NodeId;                                                   
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateLayeredBoneBlend_Params
{
	int                                                NodeId;                                                   
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateGraph_Params
{
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateBoneRotate_Params
{
	int                                                NodeId;                                                   
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateBlendSpace2D_Params
{
	int                                                NodeId;                                                   
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateBlendSpace_Params
{
	int                                                NodeId;                                                   
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateBlendAlpha_Params
{
	int                                                NodeId;                                                   
	float                                              OutAlpha;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnPreEvaluateAnimationPlayer_Params
{
	int                                                NodeId;                                                   
	float                                              DeltaSeconds;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_OnLuaAnimGraphPlayEvent__DelegateSignature_Params
{
	int                                                NodeId;                                                   
	int                                                EventType;                                                
};


struct UCreativeLuaAnimGraphInstance_OnLocomotionDrive__DelegateSignature_Params
{
	float                                              DeltaSeconds;                                             
};


struct UCreativeLuaAnimGraphInstance_OnEvaluateFailed_Params
{
	int                                                FailedNodeId;                                             
};


struct UCreativeLuaAnimGraphInstance_IsOverrideHookEnabled_Params
{
	ECreativeLuaAnimOverrideHook                       Hook;                                                     
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_IsGraphValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetRuntimeTime_Params
{
	int                                                NodeId;                                                   
	float                                              ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetRuntimeSelection_Params
{
	int                                                NodeId;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetRuntimePlayRate_Params
{
	int                                                NodeId;                                                   
	float                                              ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetRuntimeNodeInfo_Params
{
	int                                                NodeId;                                                   
	ECreativeLuaAnimNodeType                           OutNodeType;                                              
	struct FString                                     OutNodeName;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetRuntimeLoop_Params
{
	int                                                NodeId;                                                   
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetRuntimeAssetPath_Params
{
	int                                                NodeId;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetRuntimeAlpha_Params
{
	int                                                NodeId;                                                   
	float                                              ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetPropertyString_Params
{
	struct FName                                       Name;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetPropertyInt_Params
{
	struct FName                                       Name;                                                     
	int                                                ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetPropertyFloat_Params
{
	struct FName                                       Name;                                                     
	float                                              ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetPropertyBool_Params
{
	struct FName                                       Name;                                                     
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetPropertiesTable_Params
{
	struct FSluaBPVar                                  ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetOwnerActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetAnimationPlayerTime_Params
{
	int                                                NodeId;                                                   
	float                                              ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetAnimationPlayerDuration_Params
{
	int                                                NodeId;                                                   
	float                                              ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_GetActiveHookMask_Params
{
	int                                                ReturnValue;                                              
};


struct UCreativeLuaAnimGraphInstance_ClearGraph_Params
{
};


struct UCreativeLuaAnimGraphInstance_ClearAllEvaluateOverrides_Params
{
};


struct UCreativeLuaAnimGraphInstance_ApplyEvaluateOverrides_Params
{
};


struct UCreativeLuaAnimGraphManager_SetRuntimeAnimData_Params
{
	struct FString                                     Key;                                                      
	class UCreativeRuntimeAnimData*                    Data;                                                     
};


struct UCreativeLuaAnimGraphManager_SetAnimPropertyString_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	struct FName                                       Name;                                                     
	struct FString                                     Value;                                                    
};


struct UCreativeLuaAnimGraphManager_SetAnimPropertyInt_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	struct FName                                       Name;                                                     
	int                                                Value;                                                    
};


struct UCreativeLuaAnimGraphManager_SetAnimPropertyFloat_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	struct FName                                       Name;                                                     
	float                                              Value;                                                    
};


struct UCreativeLuaAnimGraphManager_SetAnimPropertyBool_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	struct FName                                       Name;                                                     
	bool                                               Value;                                                    
};


struct UCreativeLuaAnimGraphManager_RemoveGraphFromMesh_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
};


struct UCreativeLuaAnimGraphManager_RemoveGraphFromActor_Params
{
	class AActor*                                      TargetActor;                                              
};


struct UCreativeLuaAnimGraphManager_RegisterAnimSequenceByKey_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     AssetPath;                                                
	class UCreativeRuntimeAnimData*                    ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_RegisterAnimSequence_Params
{
	struct FString                                     Key;                                                      
	class UAnimSequenceBase*                           Anim;                                                     
	class UCreativeRuntimeAnimData*                    ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_RegisterAIGCAnim_Params
{
	struct FString                                     Key;                                                      
	class UAIGCAnimObject*                             AIGCData;                                                 
	int                                                FrameRate;                                                
	class UCreativeRuntimeAnimData*                    ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_GetRuntimeAnimData_Params
{
	struct FString                                     Key;                                                      
	class UCreativeRuntimeAnimData*                    ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_GetPreviewMeshComponent_Params
{
	class AActor*                                      TargetActor;                                              
	class USkeletalMeshComponent*                      ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_GetAnimInstance_Params
{
	class AActor*                                      TargetActor;                                              
	class UCreativeLuaAnimGraphInstance*               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeLuaAnimGraphManager*                ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_DestroyPreviewMeshComponent_Params
{
	class AActor*                                      TargetActor;                                              
};


struct UCreativeLuaAnimGraphManager_CreatePreviewMeshComponent_Params
{
	class AActor*                                      TargetActor;                                              
	class USkeletalMesh*                               InSkeletalMesh;                                           
	struct FVector                                     RelativeOffset;                                           
	class USkeletalMeshComponent*                      ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_ClearRuntimeAnimData_Params
{
	struct FString                                     Key;                                                      
};


struct UCreativeLuaAnimGraphManager_ClearAllRuntimeAnimData_Params
{
};


struct UCreativeLuaAnimGraphManager_ApplyGraphToMesh_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	struct FSluaBPVar                                  GraphTable;                                               
	bool                                               bUseCustomAssetKey;                                       
	class UCreativeLuaAnimGraphInstance*               ReturnValue;                                              
};


struct UCreativeLuaAnimGraphManager_ApplyGraphToActor_Params
{
	class AActor*                                      TargetActor;                                              
	struct FSluaBPVar                                  GraphTable;                                               
	bool                                               bUseCustomAssetKey;                                       
	class UCreativeLuaAnimGraphInstance*               ReturnValue;                                              
};


struct UCreativeLuaAPIObjectManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeLuaAPIObjectManager*                ReturnValue;                                              
};


struct UCreativeLuaBlueprintLibrary_CheckTriggerAreaOverlaps_Params
{
	TArray<class UCreativeTriggerCheckData*>           TriggerDataList;                                          
	TArray<struct FCreativeTriggerActorType>           OutTriggerEnter;                                          
	TArray<struct FCreativeTriggerActorType>           OutTriggerLeave;                                          
};


struct UCreativeLuaCodeManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeLuaCodeManager_OnRep_ReplicatedLuaCodeInfoMapSeq_Params
{
};


struct UCreativeLuaCodeManager_OnPreCreativeLuaVMUnLoad_Params
{
};


struct UCreativeLuaCodeManager_OnPlayerControllerBeginPlay_Params
{
	class APlayerController*                           PlayerController;                                         
};


struct UCreativeLuaCodeManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeLuaCodeManager_OnCreativeLuaInitialized_Params
{
};


struct UCreativeLuaCodeManager_MarkReplicatedLuaCodeInfoMapDirty_Params
{
};


struct UCreativeLuaCodeManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeLuaCodeManager*                     ReturnValue;                                              
};


struct UCreativeLuaEntityManager_UUID2UObject_Params
{
	int64_t                                            UUID;                                                     
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeLuaEntityManager_UUID2Type_Params
{
	int64_t                                            UUID;                                                     
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaEntityManager_UUID2Key_Params
{
	int64_t                                            UUID;                                                     
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeLuaEntityManager_ResolveUObjectUUID_Params
{
	class UObject*                                     Object;                                                   
	int64_t                                            ReturnValue;                                              
};


struct UCreativeLuaEntityManager_ResetAll_Params
{
};


struct UCreativeLuaEntityManager_RemoveUUID_Params
{
	int64_t                                            UUID;                                                     
};


struct UCreativeLuaEntityManager_LuaUUID2UObject_Params
{
	struct FString                                     UUID;                                                     
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeLuaEntityManager_LuaUUID2Type_Params
{
	struct FString                                     UUID;                                                     
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaEntityManager_LuaUUID2Key_Params
{
	struct FString                                     UUID;                                                     
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UCreativeLuaEntityManager_LuaRemoveUUID_Params
{
	struct FString                                     UUID;                                                     
};


struct UCreativeLuaEntityManager_LuaCreateEntityIfNotExistsFromUObject_Params
{
	class UObject*                                     Object;                                                   
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UCreativeLuaEntityManager_GetInstanceObjectUUID_Params
{
	int64_t                                            UUID;                                                     
	int64_t                                            ReturnValue;                                              
};


struct UCreativeLuaEntityManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeLuaEntityManager*                   ReturnValue;                                              
};


struct UCreativeLuaEntityManager_GenUUID_Params
{
	struct FString                                     Key;                                                      
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	int64_t                                            ReturnValue;                                              
};


struct UCreativeLuaEntityManager_CreateEntityIfNotExistsFromUObject_Params
{
	class UObject*                                     Object;                                                   
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	int64_t                                            ReturnValue;                                              
};


struct UCreativeLuaEntityManager_CreateEntityIfNotExistsFromKey_Params
{
	uint32_t                                           Key;                                                      
	EEntityType                                        Type;                                                     
	unsigned char                                      SubType;                                                  
	int64_t                                            ReturnValue;                                              
};


struct UCreativeLuaEntityManager_ContainsUUID_Params
{
	int64_t                                            UUID;                                                     
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaSignalManager_SpawnApiObjectsByConfig_Params
{
};


struct UCreativeLuaSignalManager_RegisterObject_Params
{
	class UCreativeApiObject*                          NewObject;                                                
};


struct UCreativeLuaSignalManager_OnPreCreativeLuaVMUnLoad_Params
{
};


struct UCreativeLuaSignalManager_OnCreativeLuaVMLoaded_Params
{
};


struct UCreativeLuaSignalManager_GetObject_Params
{
	struct FString                                     ModuleName;                                               
	class UCreativeApiObject*                          ReturnValue;                                              
};


struct UCreativeLuaSignalManager_GetCreativeLuaVM_Params
{
	class UCreativeBridgeLuaVM*                        ReturnValue;                                              
};


struct UCreativeLuaSignalManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeLuaSignalManager*                   ReturnValue;                                              
};


struct UCreativeLuaSignalManager_ExecuteAPI_Params
{
	class UCreativeBridgeLuaVM*                        VM;                                                       
	struct FString                                     ModuleName;                                               
	struct FString                                     FuncName;                                                 
	int                                                ReturnValue;                                              
};


struct UCreativeLuaSignalManager_CGetAPIObject_Params
{
	struct FString                                     ModuleName;                                               
	class UCreativeApiObject*                          ReturnValue;                                              
};


struct UCreativeLuaSignalManager_CClearAPIObject_Params
{
};


struct UCreativeLuaSignalManager_CAddAPIObject_Params
{
	struct FString                                     ModuleName;                                               
	class UCreativeApiObject*                          Object;                                                   
};


struct UCreativeLuaTraitManager_GetSupportEntitiesByTraits_Params
{
	TArray<struct FString>                             TraitNames;                                               
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeLuaTraitManager_GetSupportEntitiesByTrait_Params
{
	struct FString                                     TraitName;                                                
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeLuaTraitManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeLuaTraitManager*                    ReturnValue;                                              
};


struct UCreativeLuaVMManager_UnRegisterGameTypePreChangedDelegate_Params
{
};


struct UCreativeLuaVMManager_RegisterGameTypePreChangedDelegate_Params
{
};


struct UCreativeLuaVMManager_ReceiveSluaCustomMemoryOutCallback_Params
{
};


struct UCreativeLuaVMManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeLuaVMManager_ReceiveCheckAndLoadLuaVM_Params
{
};


struct UCreativeLuaVMManager_OpenEnvLuaProfile_Params
{
};


struct UCreativeLuaVMManager_OpenCustomMemoryLimit_Params
{
	int64_t                                            memoryLimit;                                              
};


struct UCreativeLuaVMManager_OnLuaVMAtPanic_Params
{
	struct FString                                     errMsg;                                                   
};


struct UCreativeLuaVMManager_OnGameTypePreChanged_Params
{
	unsigned char                                      LastGameType;                                             
	unsigned char                                      CurrentGameType;                                          
};


struct UCreativeLuaVMManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeLuaVMManager_LoadLuaVM_Params
{
};


struct UCreativeLuaVMManager_GetCreativeLuaVM_Params
{
	class UCreativeBridgeLuaVM*                        ReturnValue;                                              
};


struct UCreativeLuaVMManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeLuaVMManager*                       ReturnValue;                                              
};


struct UCreativeLuaVMManager_CreativeLuaVMLoaded_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaVMManager_CreativeLuaInitialized_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeLuaVMManager_ClosenEnvLuaProfile_Params
{
};


struct UCreativeLuaVMManager_CloseCustomMemoryLimit_Params
{
};


struct UCreativeModeModDataCheckManager_ReceiveOnPreAddInstance_Params
{
};


struct UCreativeModeModDataCheckManager_ReceiveOnPostAddInstance_Params
{
};


struct UCreativeModeModDataCheckManager_OnPreAddInstance_Params
{
};


struct UCreativeModeModDataCheckManager_OnPostAddInstance_Params
{
};


struct UCreativeModeModDataCheckManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeModeModDataCheckManager*            ReturnValue;                                              
};


struct UCreativeModeChatBubbleUI_TickLua_Params
{
};


struct UCreativeModeChatBubbleUI_ForceUpdatePosition_Params
{
};


struct UCreativeModeGlobalManagerCenter_OnCreativeDelegateCreated_Params
{
};


struct UCreativeModeNetBlueprintLibrary_NetSerializeObject_Params
{
	class UObject*                                     Obj;                                                      
	uint32_t                                           OutNetGUID;                                               
	struct FString                                     OutPath;                                                  
	bool                                               OutIsDynamic;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeModeNetBlueprintLibrary_IsObjectReplicatable_Params
{
	class UObject*                                     Object;                                                   
	bool                                               ReturnValue;                                              
};


struct UCreativeModeNetBlueprintLibrary_HasActorChannelForPC_Params
{
	class UObject*                                     Object;                                                   
	class APlayerController*                           PC;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeModeNetBlueprintLibrary_GetOrAssignNetGUID_Params
{
	class UObject*                                     Obj;                                                      
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeModeNetBlueprintLibrary_GetObjectFromNetGUID_Params
{
	class UObject*                                     WorldContextObject;                                       
	uint32_t                                           NetGUID;                                                  
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeModeNetBlueprintLibrary_GetNetGUID_Params
{
	class UObject*                                     Obj;                                                      
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeModeNetBlueprintLibrary_DeserializeObject_Params
{
	uint32_t                                           NetGUID;                                                  
	struct FString                                     Path;                                                     
	bool                                               bIsDynamic;                                               
	class UObject*                                     ReturnValue;                                              
};


struct ACreativeModeStaticMeshBatchActor_SetISMStaticMeshAndMaterials_Params
{
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             
	int                                                AssetId;                                                  
	int                                                StaticMeshIndex;                                          
	int                                                MaterialID;                                               
};


struct UCreativeModeTouchWidget_OnHandleTouchStart_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UCreativeModeTouchWidget_OnHandleTouchMove_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UCreativeModeTouchWidget_OnHandleTouchEnd_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UCreativeModeTouchWidget_OnHandleTouch_Params
{
	int                                                Type;                                                     
	int                                                FingerIndex;                                              
	struct FVector2D                                   pos;                                                      
	bool                                               ReturnValue;                                              
};


struct UTaskProgressItem_Update_Params
{
	float                                              DeltaTime;                                                
};


struct UTaskProgressItem_SetCurrentProgress_Params
{
	int                                                Value;                                                    
};


struct UTaskProgressItem_GetTaskInstance_Params
{
	class UTaskInstance*                               ReturnValue;                                              
};


struct UTaskProgressItem_GetStageRuntimeState_Params
{
	class UStageRuntimeState*                          ReturnValue;                                              
};


struct UTaskProgressItem_GetProgressType_Params
{
	int                                                ReturnValue;                                              
};


struct UTaskProgressItem_GetMaxProgress_Params
{
	int                                                ReturnValue;                                              
};


struct UTaskProgressItem_GetCurrentProgress_Params
{
	int                                                ReturnValue;                                              
};


struct UTaskProgressItem_Deactivate_Params
{
};


struct UTaskProgressItem_AddProgress_Params
{
	int                                                Delta;                                                    
};


struct UTaskProgressItem_Activate_Params
{
};


struct UStageRuntimeState_Update_Params
{
	float                                              DeltaTime;                                                
	bool                                               ReturnValue;                                              
};


struct UStageRuntimeState_GetStageIdx_Params
{
	int                                                ReturnValue;                                              
};


struct UStageRuntimeState_GetProgressItems_Params
{
	TArray<class UTaskProgressItem*>                   ReturnValue;                                              
};


struct UStageRuntimeState_GetOwnTaskInstance_Params
{
	class UTaskInstance*                               ReturnValue;                                              
};


struct UStageRuntimeState_FindProgressItemByConfigIndex_Params
{
	int                                                Index;                                                    
	class UTaskProgressItem*                           ReturnValue;                                              
};


struct UStageRuntimeState_Deactivate_Params
{
};


struct UStageRuntimeState_AddProgressItem_Params
{
	int                                                ProgressType;                                             
	class UTaskProgressItem*                           ReturnValue;                                              
};


struct UStageRuntimeState_Activate_Params
{
};


struct UTaskInstance_Update_Params
{
	float                                              DeltaTime;                                                
	bool                                               ReturnValue;                                              
};


struct UTaskInstance_SetTaskStatus_Params
{
	ETaskStatus                                        StatusVal;                                                
};


struct UTaskInstance_SetShouldReplicated_Params
{
	bool                                               Val;                                                      
};


struct UTaskInstance_SetReservedString_Params
{
	struct FString                                     Val;                                                      
};


struct UTaskInstance_RemovePlayer_Params
{
	uint32_t                                           PlayerKey;                                                
};


struct UTaskInstance_ReceiveSetTaskStatus_Params
{
	ETaskStatus                                        PreviousStatusVal;                                        
	ETaskStatus                                        NextStatusVal;                                            
};


struct UTaskInstance_ReceiveOnDeactivate_Params
{
};


struct UTaskInstance_MarkTaskDirty_Params
{
};


struct UTaskInstance_IsRefbyPlayer_Params
{
	uint32_t                                           PlayerKey;                                                
	bool                                               ReturnValue;                                              
};


struct UTaskInstance_InitializeStageInfo_Params
{
};


struct UTaskInstance_GetTaskTypeID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UTaskInstance_GetPlayerKeys_Params
{
	TArray<uint32_t>                                   ReturnValue;                                              
};


struct UTaskInstance_GetCurrentStage_Params
{
	class UStageRuntimeState*                          ReturnValue;                                              
};


struct UTaskInstance_AdvanceToNextStage_Params
{
	class UStageRuntimeState*                          NewStageInfo;                                             
};


struct UTaskInstance_AddPlayer_Params
{
	uint32_t                                           PlayerKey;                                                
};


struct UTaskInstance_AddNewStage_Params
{
	class UStageRuntimeState*                          ReturnValue;                                              
};


struct UCreativeModeGameTaskManager_Reset_Params
{
};


struct UCreativeModeGameTaskManager_RemoveTaskInstance_Params
{
	class UTaskInstance*                               TaskInstance;                                             
};


struct UCreativeModeGameTaskManager_ReceiveGetProgressItemLuaPathByType_Params
{
	int                                                ProgressType;                                             
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeGameTaskManager_GetProgressItemLuaPathByType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCreativeModeGameTaskManager_GetAllTaskInstances_Params
{
	TArray<class UTaskInstance*>                       ReturnValue;                                              
};


struct UCreativeModeGameTaskManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeModeGameTaskManager*                ReturnValue;                                              
};


struct UCreativeModeGameTaskManager_FindTaskInstanceByType_Params
{
	struct FString                                     TaskTypeID;                                               
	class UTaskInstance*                               ReturnValue;                                              
};


struct UCreativeModeGameTaskManager_CreateTaskInstance_Params
{
	struct FString                                     TaskTypeID;                                               
	class UTaskInstance*                               ReturnValue;                                              
};


struct UCreativeMonsterAnimInstance_PlayCreativeDynamicMontage_Params
{
	class UAnimSequenceBase*                           Asset;                                                    
	float                                              BlendInTime;                                              
	float                                              BlendOutTime;                                             
	float                                              InPlayRate;                                               
	int                                                LoopCount;                                                
	bool                                               bIsLoop;                                                  
	float                                              InTimeToStartMontageAt;                                   
	struct FName                                       SlotNodeName;                                             
};


struct UCreativeMonsterAnimInstance_ClearAnimReferences_Params
{
};


struct UCreativeMonsterAnimInstance_CacheAnimVarOverride_Params
{
};


struct UCreativeMonsterAnimInstance_BP_CacheAnimVarOverride_Params
{
};


struct UCreativeModeNavigationManager_SetTimeSliceConfig_Params
{
	int                                                MaxTaskPerSlice;                                          
	int                                                SliceTimeLen;                                             
};


struct UCreativeModeNavigationManager_SetNavmeshBuildPolicy_Params
{
	int                                                PolicyVal;                                                
};


struct UCreativeModeNavigationManager_SetDynamicModeEnable_Params
{
	bool                                               bEnable;                                                  
};


struct UCreativeModeNavigationManager_SetDebugOutputEnable_Params
{
	bool                                               bEnable;                                                  
};


struct UCreativeModeNavigationManager_SetConcurrentTaskNum_Params
{
	int                                                Num;                                                      
};


struct UCreativeModeNavigationManager_SerializeDynamicTileToByteArr_Params
{
	int                                                MaxFileSize;                                              
	int                                                MaxTileToAdd;                                             
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativeModeNavigationManager_RevokePendingBuildingTasks_Params
{
};


struct UCreativeModeNavigationManager_ReceiveOnUnInit_Params
{
};


struct UCreativeModeNavigationManager_ReceiveOnInit_Params
{
};


struct UCreativeModeNavigationManager_RebuildDynamicTilesByCoord_Params
{
	TArray<struct FIntPoint>                           DynamicTiles;                                             
};


struct UCreativeModeNavigationManager_RebuildDynamicTiles_Params
{
	TArray<class AActor*>                              Actors;                                                   
};


struct UCreativeModeNavigationManager_IsBuildingInProgress_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeModeNavigationManager_ImportDynamicTile_Params
{
	struct FString                                     Path;                                                     
};


struct UCreativeModeNavigationManager_GetWalkableTrianglesInBox_Params
{
	struct FBox                                        bBox;                                                     
	TArray<struct FVector>                             OutVertices;                                              
	TArray<int>                                        OutIndices;                                               
};


struct UCreativeModeNavigationManager_GetDynamicTilesCount_Params
{
	int                                                ReturnValue;                                              
};


struct UCreativeModeNavigationManager_GetDynamicTileMemCost_Params
{
	int                                                Total;                                                    
	int                                                OctTree;                                                  
	int                                                TileCache;                                                
	int                                                DynamicTile;                                              
	int                                                DynamicTileCount;                                         
	bool                                               ReturnValue;                                              
};


struct UCreativeModeNavigationManager_GetDynamicTileCoordByPos_Params
{
	struct FVector                                     pos;                                                      
	struct FIntPoint                                   ReturnValue;                                              
};


struct UCreativeModeNavigationManager_GetAllAssociateActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct UCreativeModeNavigationManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeModeNavigationManager*              ReturnValue;                                              
};


struct UCreativeModeNavigationManager_ExportDynamicTileStandard_Params
{
	struct FString                                     Path;                                                     
};


struct UCreativeModeNavigationManager_ExportDynamicTile_Params
{
	struct FString                                     Path;                                                     
};


struct UCreativeModeNavigationManager_EnsureDynamicBuildCompletion_Params
{
};


struct UCreativeModeNavigationManager_DeserializeDynamicTileFromByteArr_Params
{
	TArray<unsigned char>                              ByteArr;                                                  
};


struct UCreativeModeNavigationManager_ComputeTotalWalkableSurfaceAreaInBox_Params
{
	struct FBox                                        bBox;                                                     
	float                                              ReturnValue;                                              
};


struct UCreativeModeNavigationManager_ClearNavCollision_Params
{
};


struct UCreativeModeNavigationManager_ClearDynamicOctreeData_Params
{
};


struct UCreativeModeNavigationManager_ClearDynamicNavMesh_Params
{
};


struct UCreativeModeNavigationManager_ClearAssociateActors_Params
{
};


struct UCreativeModeNavigationManager_CalSamplePointsInBoxLegacy_Params
{
	struct FVector                                     BoxMin;                                                   
	struct FVector                                     BoxMax;                                                   
	float                                              StepSize;                                                 
	int                                                MaxPoints;                                                
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UCreativeModeNavigationManager_CalSamplePointsInBox_Params
{
	struct FVector                                     BoxMin;                                                   
	struct FVector                                     BoxMax;                                                   
	float                                              StepSize;                                                 
	int                                                MaxPoints;                                                
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UCreativeModeNavigationManager_CalSamplePoints_Params
{
	struct FVector                                     StartPos;                                                 
	float                                              StepSize;                                                 
	int                                                MaxPoints;                                                
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UCreativeModeNavigationManager_AddNavAffectedObjects_Params
{
	TArray<class AActor*>                              Actors;                                                   
};


struct UCreativeModeNavigationManager_AddNavAffectedObject_Params
{
	class AActor*                                      Actor;                                                    
};


struct UCreativeNetPacketInspectorBridge_ToggleCapture_Params
{
};


struct UCreativeNetPacketInspectorBridge_SetFilter_Params
{
	struct FString                                     filter;                                                   
};


struct UCreativeNetPacketInspectorBridge_SelectRecord_Params
{
	int                                                RecordIndex;                                              
};


struct UCreativeNetPacketInspectorBridge_CopyText_Params
{
	struct FString                                     Text;                                                     
};


struct UCreativeNetPacketInspectorBridge_Copy_Params
{
	struct FString                                     CopyTarget;                                               
};


struct UCreativeNetPacketInspectorBridge_Clear_Params
{
};


struct ACreativeObjectEditAxisActor_StartEdit_Params
{
	int                                                Axis;                                                     
	struct FVector2D                                   pos;                                                      
	struct FVector                                     HitPos;                                                   
};


struct ACreativeObjectEditAxisActor_SetForceHideAxis_Params
{
	struct FVector                                     State;                                                    
};


struct ACreativeObjectEditAxisActor_SetFixedAxisSize_Params
{
	float                                              FixedSize;                                                
};


struct ACreativeObjectEditAxisActor_SetEditType_Params
{
	int                                                InEditType;                                               
	int                                                InEditSubType;                                            
};


struct ACreativeObjectEditAxisActor_SetComponentVisible_Params
{
	class USceneComponent*                             Comp;                                                     
	bool                                               bVisible;                                                 
};


struct ACreativeObjectEditAxisActor_SetAxisState_Params
{
	struct FVector                                     State;                                                    
};


struct ACreativeObjectEditAxisActor_MarkEditing_Params
{
	bool                                               bDoing;                                                   
};


struct ACreativeObjectEditAxisActor_GetObjectScreenPos_Params
{
	struct FVector2D                                   OutPos;                                                   
	bool                                               ReturnValue;                                              
};


struct ACreativeObjectEditAxisActor_GetEditAxisWorldDir_Params
{
	struct FVector                                     OutDir;                                                   
	bool                                               ReturnValue;                                              
};


struct ACreativeObjectEditAxisActor_CalScale_Params
{
	struct FVector2D                                   pos;                                                      
	struct FVector                                     OutScale;                                                 
};


struct ACreativeObjectEditAxisActor_CalRotation_Params
{
	struct FVector2D                                   pos;                                                      
	struct FRotator                                    OutRot;                                                   
	float                                              ReturnValue;                                              
};


struct ACreativeObjectEditAxisActor_CalLocation_Params
{
	struct FVector2D                                   pos;                                                      
	struct FVector                                     OutLoc;                                                   
};


struct UCreativeModeObjectInterface_ReceiveOnPostSetInstanceId_Params
{
	struct FString                                     InstanceID;                                               
};


struct ACreativeObjectLocalAxisActor_SetAxisComponents_Params
{
	class USceneComponent*                             Axis;                                                     
	class USceneComponent*                             Grid;                                                     
};


struct ACreativeObjectLocalAxisActor_NeedUpdate_Params
{
};


struct UCreativeObjectManager_SpawnObjectForStreaming_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeObjectManager_SpawnObject_Params
{
	struct FString                                     InstanceID;                                               
	struct FString                                     Path;                                                     
	struct FTransform                                  SpawnTransform;                                           
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeObjectManager_SetObjectTempStreamingType_Params
{
	struct FString                                     InstanceID;                                               
	ECreativeModeActorStreamingType                    TempStreamingType;                                        
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_ResetObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_RemoveSpawnObjectInfoFormQueue_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_RemovePhysicsObject_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeObjectManager_RemoveObject_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               bRemovePhysicsObject;                                     
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_RemoveDestroyObjectInfoFormQueue_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_ReceiveUnregisterObject_Params
{
	struct FString                                     InstanceID;                                               
	class UObject*                                     NewObject;                                                
};


struct UCreativeObjectManager_ReceiveRegisterObject_Params
{
	struct FString                                     InstanceID;                                               
	class UObject*                                     NewObject;                                                
};


struct UCreativeObjectManager_ReceiveOnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    
};


struct UCreativeObjectManager_ReceiveClearAllObjects_Params
{
};


struct UCreativeObjectManager_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    
};


struct UCreativeObjectManager_OnObjectSpawnComplete_Params
{
	struct FString                                     ID;                                                       
};


struct UCreativeObjectManager_IsLogicObject_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_IsGroupObject_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_IsCanBatchObject_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_GetObjectTransform_Params
{
	struct FString                                     ID;                                                       
	struct FTransform                                  ReturnValue;                                              
};


struct UCreativeObjectManager_GetObjectNum_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeObjectManager_GetObjectAssetPath_Params
{
	struct FString                                     ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UCreativeObjectManager_GetObjectAssetID_Params
{
	struct FString                                     ID;                                                       
	int                                                ReturnValue;                                              
};


struct UCreativeObjectManager_GetObject_Params
{
	struct FString                                     InstanceID;                                               
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeObjectManager_GetActiveObjectNum_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UCreativeObjectManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeObjectManager*                      ReturnValue;                                              
};


struct UCreativeObjectManager_DestroyObjectForStreaming_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeObjectManager_DestroyObject_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_CheckObjectBeBatch_Params
{
	struct FString                                     ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_ChangeObjectTransform_Params
{
	struct FString                                     InstanceID;                                               
	struct FTransform                                  Transform;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_AddSpawnObjectToQueue_Params
{
	struct FString                                     InstanceID;                                               
	struct FString                                     Path;                                                     
	struct FTransform                                  SpawnTransform;                                           
};


struct UCreativeObjectManager_AddObject_Params
{
	struct FString                                     InstanceID;                                               
	struct FCreativeModeStreamingParameters            StreamingParameters;                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeObjectManager_AddDestroyObjectToQueue_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeObjectStateManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeObjectStateManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeObjectStateManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeObjectStateManager*                 ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_ShouldMergeData_Params
{
	struct FOctreeData                                 ExistingData;                                             
	struct FOctreeData                                 NewData;                                                  
	float                                              Distance;                                                 
	bool                                               ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_ResetTree_Params
{
};


struct UCreativeOctreeSyncManager_RemoveDataInBoundsByActorRecursive_Params
{
	struct FOctreeNode                                 Node;                                                     
	struct FBox                                        BoundingBox;                                              
	class AActor*                                      Actor;                                                    
	int                                                ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_RemoveDataInBoundsByActor_Params
{
	struct FBox                                        BoundingBox;                                              
	class AActor*                                      Actor;                                                    
};


struct UCreativeOctreeSyncManager_RemoveDataByUIDs_Params
{
};


struct UCreativeOctreeSyncManager_RemoveDataByUID_Params
{
	int                                                UID;                                                      
};


struct UCreativeOctreeSyncManager_RemoveDataByPlayerKey_Params
{
	struct FString                                     PlayerKey;                                                
};


struct UCreativeOctreeSyncManager_InsertData_Params
{
	struct FOctreeData                                 InData;                                                   
};


struct UCreativeOctreeSyncManager_Initialize_Params
{
	float                                              InCellSize;                                               
	float                                              InMergeDistance;                                          
	int                                                InMaxDepth;                                               
	float                                              InMinCellSize;                                            
};


struct UCreativeOctreeSyncManager_HookDecalManager_Params
{
	class ACreativeDecalManager*                       DecalManager;                                             
	bool                                               bRegister;                                                
};


struct UCreativeOctreeSyncManager_HasObstacleBetween_Params
{
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_GetOffsetLocationForObstacleCheck_Params
{
	struct FVector                                     Location;                                                 
	struct FVector                                     Forward;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_GetNodeData_Params
{
	struct FOctreeNode                                 Node;                                                     
	TArray<struct FOctreeData>                         ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_GetNodeChildren_Params
{
	struct FOctreeNode                                 Node;                                                     
	TArray<struct FOctreeNode>                         ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_GetNearbyDataRecursive_Params
{
	struct FOctreeNode                                 Node;                                                     
	struct FVector                                     Location;                                                 
	float                                              SearchRadius;                                             
	TArray<struct FOctreeData>                         OutData;                                                  
	int                                                MaxCount;                                                 
	bool                                               bExpandSearch;                                            
};


struct UCreativeOctreeSyncManager_GetNearbyData_Params
{
	struct FVector                                     Location;                                                 
	int                                                MaxCount;                                                 
	bool                                               bSortByDistance;                                          
	bool                                               bExpandSearch;                                            
	TArray<struct FOctreeData>                         ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_GetAllData_Params
{
	TArray<struct FOctreeData>                         ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeOctreeSyncManager*                  ReturnValue;                                              
};


struct UCreativeOctreeSyncManager_ExpandRootNode_Params
{
	struct FVector                                     Point;                                                    
};


struct UCreativeOctreeSyncManager_EnsureRootContainsPoint_Params
{
	struct FVector                                     Point;                                                    
};


struct UCreativeOfflineBuildManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};


struct UCreativeOfflineBuildManager_OnPostSetLuaEventBridgeInstance_Params
{
};


struct UCreativeOfflineBuildManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeOfflineBuildManager*                ReturnValue;                                              
};


struct UCreativeOpenUIRoundTripToolBridge_RunTest_Params
{
	struct FString                                     SCOPE;                                                    
	int                                                Iterations;                                               
	float                                              Tolerance;                                                
	struct FString                                     ExportFlavor;                                             
};


struct UCreativeOpenUIRoundTripToolBridge_OpenReportFolder_Params
{
};


struct UCreativeOpenUIRoundTripToolBridge_CopyOutput_Params
{
};


struct UCreativeOverlapCheckComponent_StartOverlapCheck_Params
{
};


struct UCreativeOverlapCheckComponent_IsOverlapClass_Params
{
	class AActor*                                      OverlapActor;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeOverlapCheckComponent_InitOverlapComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                
};


struct UCreativeOverlapCheckComponent_EndOverlapCheck_Params
{
};


struct UCreativeOverlapCheckComponent_EnableFilterInVehicle_Params
{
	bool                                               bEnable;                                                  
};


struct UCreativeOverlapCheckComponent_CheckOverlapActors_Params
{
};


struct UCreativeOverlapCheckComponent_AddOverlapClass_Params
{
	class UClass*                                      OverlapClass;                                             
};


struct UCreativeParentChildManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeParentChildManager*                 ReturnValue;                                              
};


struct UCreativePerfManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativePerfManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativePerfManager_GetUObjectMemoryUsage_Params
{
	TMap<struct FName, float>                          ReturnValue;                                              
};


struct UCreativePerfManager_GetResult_Params
{
	TArray<struct FCreaitvePerfDataMap>                ReturnValue;                                              
};


struct UCreativePerfManager_GetNetData_Params
{
	struct FCreativeNetData                            ReturnValue;                                              
};


struct UCreativePerfManager_GetMemoryData_Params
{
	struct FCreativeMemoryData                         ReturnValue;                                              
};


struct UCreativePerfManager_GetCPUUsage_Params
{
	float                                              OutCPUTimePct;                                            
	float                                              OutCPUTimePctRelative;                                    
	int                                                Type;                                                     
};


struct UCreativePerfManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativePerfManager*                        ReturnValue;                                              
};


struct UCreativePerfManager_EndSample_Params
{
};


struct UCreativePerfManager_BeginSample_Params
{
};


struct UCreativePerfManager_AddActorToRecord_Params
{
	class AActor*                                      Actor;                                                    
	int                                                AssetId;                                                  
	struct FName                                       ScopeName;                                                
};


struct UCreativePhotonDestructibleMeshComponent_SetInstanceActive_Params
{
	bool                                               bActive;                                                  
};


struct UCreativePhotonDestructibleMeshComponent_SetDestructionParam_Params
{
	struct FPhotonDestructionParam                     Param;                                                    
};


struct UCreativePhotonDestructibleMeshComponent_SetCreativeServerDamagedDelegate_Params
{
	struct FScriptDelegate                             del;                                                      
};


struct UCreativePhotonDestructibleMeshComponent_SetCreativeClientFragmentStateChangedDelegate_Params
{
	struct FScriptDelegate                             del;                                                      
};


struct UCreativePhotonDestructibleMeshComponent_RebornOneFragment_Params
{
	int                                                FragmentIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonDestructibleMeshComponent_RebornInstance_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonDestructibleMeshComponent_RandomRecoverOneFragment_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonDestructibleMeshComponent_RandomDestroyOneFragment_Params
{
};


struct UCreativePhotonDestructibleMeshComponent_DestroyInstance_Params
{
};


struct UCreativePhotonDestructibleMeshComponent_CheckFragmentOverlap_Params
{
	int                                                FragmentIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetServerDamagedInstancedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetInstanceMaxHp_Params
{
	int                                                InstanceIndex;                                            
	float                                              MaxHP;                                                    
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetInstanceActive_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               bActive;                                                  
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetDestructionParam_Params
{
	TArray<int>                                        InstanceIndex;                                            
	TArray<struct FPhotonDestructionParam>             DestructionParams;                                        
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RebornOneFragment_Params
{
	struct FString                                     InstanceID;                                               
	int                                                FragmentIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RebornInstance_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RandomRecoverOneFragment_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RandomDestroyOneFragment_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_OnClientInitial_Params
{
	int                                                InstanceIndex;                                            
	TArray<int>                                        ImpactFragmentItemIndex;                                  
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_OnClientDamaged_Params
{
	int                                                InstanceIndex;                                            
	TArray<int>                                        ImpactFragmentItemIndex;                                  
	struct FVector                                     LocalImpactPoint;                                         
	struct FVector                                     LocalVelocity;                                            
	int                                                HitType;                                                  
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_GetUGCInstanceID_Params
{
	int                                                InstanceIndex;                                            
	struct FString                                     ReturnValue;                                              
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_CheckFragmentOverlap_Params
{
	int                                                InstanceIndex;                                            
	int                                                FragmentIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonInstancedDestructibleMeshComponent_SetServerDamagedInstancedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               
};


struct UCreativePhotonInstancedDestructibleMeshComponent_SetInstanceMaxHp_Params
{
	int                                                InstanceIndex;                                            
	float                                              MaxHP;                                                    
};


struct UCreativePhotonInstancedDestructibleMeshComponent_SetInstanceActive_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               bActive;                                                  
};


struct UCreativePhotonInstancedDestructibleMeshComponent_SetDestructionParam_Params
{
	TArray<int>                                        InstanceIndex;                                            
	TArray<struct FPhotonDestructionParam>             DestructionParams;                                        
};


struct UCreativePhotonInstancedDestructibleMeshComponent_RebornOneFragment_Params
{
	struct FString                                     InstanceID;                                               
	int                                                FragmentIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonInstancedDestructibleMeshComponent_RebornInstance_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonInstancedDestructibleMeshComponent_RandomRecoverOneFragment_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativePhotonInstancedDestructibleMeshComponent_RandomDestroyOneFragment_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativePhotonInstancedDestructibleMeshComponent_OnClientInitial_Params
{
	int                                                InstanceIndex;                                            
	TArray<int>                                        ImpactFragmentItemIndex;                                  
};


struct UCreativePhotonInstancedDestructibleMeshComponent_OnClientDamaged_Params
{
	int                                                InstanceIndex;                                            
	TArray<int>                                        ImpactFragmentItemIndex;                                  
	struct FVector                                     LocalImpactPoint;                                         
	struct FVector                                     LocalVelocity;                                            
	int                                                HitType;                                                  
};


struct UCreativePhotonInstancedDestructibleMeshComponent_GetUGCInstanceID_Params
{
	int                                                InstanceIndex;                                            
	struct FString                                     ReturnValue;                                              
};


struct UCreativePhotonInstancedDestructibleMeshComponent_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativePhotonInstancedDestructibleMeshComponent_CheckFragmentOverlap_Params
{
	int                                                InstanceIndex;                                            
	int                                                FragmentIndex;                                            
	bool                                               ReturnValue;                                              
};


struct ACreativePhysicsBatchActor_UpdatePhysicsComponentMaterial_Params
{
	struct FString                                     ComponentID;                                              
	struct FString                                     MaterialPath;                                             
};


struct ACreativePhysicsBatchActor_UpdatePhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              
	struct FTransform                                  Transform;                                                
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         
};


struct ACreativePhysicsBatchActor_UnRegisterPhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              
	bool                                               ReturnValue;                                              
};


struct ACreativePhysicsBatchActor_SetPhysicsComponentEnabled_Params
{
	struct FString                                     ComponentID;                                              
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         
};


struct ACreativePhysicsBatchActor_RegisterPhysicsComponentByMesh_Params
{
	struct FString                                     InstanceID;                                               
	struct FString                                     ComponentID;                                              
	struct FTransform                                  Transform;                                                
	struct FString                                     MeshPath;                                                 
	struct FName                                       CollisionProfileName;                                     
};


struct ACreativePhysicsBatchActor_OnLoadMeshSuccessByPath_Params
{
	class UObject*                                     Obj;                                                      
	struct FString                                     ComponentID;                                              
};


struct ACreativePhysicsBatchActor_OnLoadMeshSuccess_Params
{
	class UObject*                                     Obj;                                                      
	struct FString                                     ComponentID;                                              
};


struct ACreativePhysicsBatchActor_IsLoadFinish_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativePhysicsBatchActor_GetRegisterNum_Params
{
	int                                                ReturnValue;                                              
};


struct ACreativePhysicsBatchActor_GetPhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              
	class UCreativePhysicsComponent*                   ReturnValue;                                              
};


struct ACreativePhysicsBatchActor_ClearAllPhysicsComponent_Params
{
};


struct UCreativePhysicsComponent_SetIsReplicatedOnly_Params
{
	bool                                               ShouldReplicate;                                          
};


struct UCreativePhysicsComponent_OnLoadMaterialSuccess_Params
{
	class UObject*                                     Obj;                                                      
	struct FString                                     Path;                                                     
};


struct UCreativePhysicsManager_UpdatePhysicsObjectCellInfo_Params
{
	struct FString                                     InstanceID;                                               
	struct FString                                     GridName;                                                 
	struct FIntVector                                  CellIndex;                                                
};


struct UCreativePhysicsManager_SetStreamingEnable_Params
{
	bool                                               Enable;                                                   
};


struct UCreativePhysicsManager_SetPhysicsActorVisible_Params
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  CellIndex;                                                
	bool                                               Visible;                                                  
};


struct UCreativePhysicsManager_RemovePhysicsObject_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativePhysicsManager_PreAddPhysicsObjectCheck_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativePhysicsManager_OnPhysicsBatchActorLoadFinish_Params
{
};


struct UCreativePhysicsManager_IsPhysicsActorVisible_Params
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  CellIndex;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativePhysicsManager_GetPhysicsBatchActorByInstanceID_Params
{
	struct FString                                     InstanceID;                                               
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              
};


struct UCreativePhysicsManager_GetPhysicsBatchActor_Params
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  Index;                                                    
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              
};


struct UCreativePhysicsManager_GetGlobalPhysicsBatchActor_Params
{
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              
};


struct UCreativePhysicsManager_GetAllPhysicsActor_Params
{
	TArray<class ACreativePhysicsBatchActor*>          ReturnValue;                                              
};


struct UCreativePhysicsManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativePhysicsManager*                     ReturnValue;                                              
};


struct UCreativePhysicsManager_ClearAllPhysicsBatchActor_Params
{
};


struct UCreativePhysicsManager_ChangePhysicsObjectIsPrefab_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               bIsPrefab;                                                
};


struct UCreativePhysicsManager_AddPhysicsObject_Params
{
	struct FString                                     InstanceID;                                               
	struct FString                                     GridName;                                                 
	struct FIntVector                                  CellIndex;                                                
};


struct UCreativePlayerAPIObject_SetPlayerDirection_Params
{
	int64_t                                            PlayerUUID;                                               
	struct FVector                                     Direction;                                                
	bool                                               ReturnValue;                                              
};


struct UCreativePlayerAPIObject_GetPlayerTeamIndex_Params
{
	int64_t                                            PlayerUUID;                                               
	int                                                ReturnValue;                                              
};


struct UCreativePlayerAPIObject_GetPlayerTeamIDAndTeamIndexFromCPP_Params
{
	int64_t                                            PlayerUUID;                                               
	int                                                OutTeamID;                                                
	int                                                OutTeamIndex;                                             
};


struct UCreativePlayerAPIObject_GetPlayerTeamID_Params
{
	int64_t                                            PlayerUUID;                                               
	int                                                ReturnValue;                                              
};


struct UCreativePlayerAPIObject_GetPlayerMaxHealth_Params
{
	int64_t                                            PlayerUUID;                                               
	float                                              ReturnValue;                                              
};


struct UCreativePlayerAPIObject_GetPlayerLocation_Params
{
	int64_t                                            PlayerUUID;                                               
	struct FVector                                     ReturnValue;                                              
};


struct UCreativePlayerAPIObject_GetPlayerHealth_Params
{
	int64_t                                            PlayerUUID;                                               
	float                                              ReturnValue;                                              
};


struct UCreativePlayerAPIObject_GetPlayerDirection_Params
{
	int64_t                                            PlayerUUID;                                               
	struct FVector                                     ReturnValue;                                              
};


struct UCreativePlayerAPIObject_AddPlayerHealth_Params
{
	int64_t                                            PlayerUUID;                                               
	float                                              AddHealth;                                                
	float                                              ReturnValue;                                              
};


struct ACreativeModePlayerState_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               
};


struct ACreativeModePlayerState_ServerRemoveInstance_Params
{
	struct FString                                     InstanceID;                                               
};


struct ACreativeModePlayerState_ServerReceiveModifyContent_Params
{
	TArray<unsigned char>                              Content;                                                  
	int                                                idx;                                                      
	TArray<unsigned char>                              ReturnValue;                                              
};


struct ACreativeModePlayerState_ServerAddInstanceAdvance_Params
{
	struct FString                                     InstanceID;                                               
	TArray<unsigned char>                              Content;                                                  
	int                                                idx;                                                      
};


struct ACreativeModePlayerState_ServerAddInstance_Params
{
	struct FString                                     InstanceID;                                               
	TArray<unsigned char>                              Content;                                                  
};


struct ACreativeModePlayerState_OnRep_LargeDataContent_Params
{
};


struct ACreativeModePlayerState_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCreativePoolInterface_SetRecycleTime_Params
{
	float                                              RecycleTime;                                              
};


struct UCreativePoolInterface_SetIsRecycled_Params
{
	bool                                               IsRecycled;                                               
};


struct UCreativePoolInterface_ReceiveOnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 
	int                                                RecycledSeq;                                              
};


struct UCreativePoolInterface_ReceiveOnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
};


struct UCreativePoolInterface_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 
	uint32_t                                           RecycledSeq;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativePoolInterface_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
};


struct UCreativePoolInterface_GetUnusedComponentName_Params
{
	class UObject*                                     InOuter;                                                  
	struct FString                                     NamePrefix;                                               
	struct FString                                     ReturnValue;                                              
};


struct UCreativePoolInterface_GetRecycleTime_Params
{
	float                                              ReturnValue;                                              
};


struct UCreativePoolInterface_CheckIsRecycled_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativePoolManager_SetPoolManagerEnable_Params
{
	bool                                               bPoolManagerEnable;                                       
};


struct UCreativePoolManager_ReturnObject_Params
{
	int                                                PoolId;                                                   
	class UObject*                                     Obj;                                                      
};


struct UCreativePoolManager_OnReceivePickObjectHandle_Params
{
	int                                                ID;                                                       
	class UObject*                                     InObj;                                                    
};


struct UCreativePoolManager_OnReceiveObjectReturnHandle_Params
{
	int                                                ID;                                                       
	class UObject*                                     InObj;                                                    
};


struct UCreativePoolManager_OnReceiveDestroyHandle_Params
{
	int                                                ID;                                                       
	class UObject*                                     InObj;                                                    
	bool                                               ReturnValue;                                              
};


struct UCreativePoolManager_OnReceiveCreateHandle_Params
{
	int                                                ID;                                                       
	class UObject*                                     ReturnValue;                                              
};


struct UCreativePoolManager_InitPool_Params
{
	int                                                PoolId;                                                   
	struct FCreativeObjectPoolClassConfig              PoolConfig;                                               
	bool                                               bPoolEnable;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativePoolManager_GetUnusedComponentName_Params
{
	class UObject*                                     InOuter;                                                  
	struct FString                                     NamePrefix;                                               
	struct FString                                     ReturnValue;                                              
};


struct UCreativePoolManager_GetObject_Params
{
	int                                                PoolId;                                                   
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
	class UObject*                                     ReturnValue;                                              
};


struct UCreativePoolManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativePoolManager*                        ReturnValue;                                              
};


struct UCreativePoolManager_ClearPoolObject_Params
{
};


struct ACreativeRuntimePlayerBattleDataObject_SetTeamGameOutcomeCondition_Params
{
	int                                                TeamID;                                                   
	struct FRuntimeTeamGameOutcomeConditionInfo        TeamGameOutcomeCondition;                                 
	bool                                               bPropagateToChildren;                                     
	bool                                               ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_SetPlayerBattleData_Params
{
	uint64_t                                           UID;                                                      
	uint32_t                                           PlayerKey;                                                
	struct FRuntimePlayerBattleDataInfo                PlayerBattleData;                                         
	bool                                               bPropagateToChildren;                                     
	bool                                               ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_ResetCurRoundPlayerBattleDataList_Params
{
	bool                                               ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_OnRepTeamGameOutcomeConditionInfo_Params
{
	int                                                TeamID;                                                   
};


struct ACreativeRuntimePlayerBattleDataObject_OnRepCurRoundPlayerBattleDataInfo_Params
{
	uint64_t                                           PlayerUID;                                                
	uint64_t                                           PlayerKey;                                                
	int                                                ChangeTeamID;                                             
};


struct ACreativeRuntimePlayerBattleDataObject_GetTeamGameOutcomeCondition_Params
{
	int                                                TeamID;                                                   
	struct FRuntimeTeamGameOutcomeConditionInfo        ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_GetCurRoundPlayerBattleData_Params
{
	uint64_t                                           PlayerUID;                                                
	uint32_t                                           PlayerKey;                                                
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_GetCurRoundAllPlayerBattleData_Params
{
	TArray<struct FRuntimePlayerBattleDataInfo>        ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_GetCacheRoundPlayerBattleData_Params
{
	int                                                RoundIndex;                                               
	uint64_t                                           PlayerUID;                                                
	uint32_t                                           PlayerKey;                                                
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_GetCacheRoundBattleData_Params
{
	int                                                RoundIndex;                                               
	struct FRuntimeCacheRoundBattleDataInfo            ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_GetAllRoundPlayerBattleData_Params
{
	uint64_t                                           PlayerUID;                                                
	uint32_t                                           PlayerKey;                                                
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              
};


struct ACreativeRuntimePlayerBattleDataObject_CacheCurRoundBattleData_Params
{
	int                                                RoundIndex;                                               
};


struct UCreativeSceneDetectLib_CreativeGetStackDistanceFromMeshes_Params
{
	TArray<class UMeshComponent*>                      MeshComponents;                                           
	struct FVector                                     Direction;                                                
	float                                              ReturnValue;                                              
};


struct UCreativeSceneDetectLib_CreativeGetStackDistance_Params
{
	class UStaticMesh*                                 Mesh;                                                     
	struct FVector                                     Direction;                                                
	struct FVector                                     Scale;                                                    
	float                                              ReturnValue;                                              
};


struct UCreativeSceneDetectLib_CreativeGetFurthestPointFromMeshes_Params
{
	TArray<class UMeshComponent*>                      MeshComponents;                                           
	struct FVector                                     Direction;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeSceneDetectLib_CreativeGetFurthestPoint_Params
{
	class AActor*                                      TargetActor;                                              
	class USceneComponent*                             TargetComp;                                               
	struct FVector                                     Direction;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeSceneDetectLib_CreativeFindPlacementPoints_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     HalfExtent;                                               
	struct FVector                                     Direction;                                                
	int                                                Count;                                                    
	float                                              MaxDistance;                                              
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UCreativeSceneDetectLib_CreativeDetectSpaceAdvanced_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Source;                                                   
	struct FVector                                     Direction;                                                
	float                                              MaxDistance;                                              
	float                                              MaxBoxExtent;                                             
	struct FCreativeDetectSpaceOptions                 Options;                                                  
	struct FCreativeSpaceResult                        ReturnValue;                                              
};


struct UCreativeSceneDetectLib_CreativeDetectSpace_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Source;                                                   
	struct FVector                                     Direction;                                                
	float                                              MaxDistance;                                              
	float                                              MaxBoxExtent;                                             
	struct FCreativeSpaceResult                        ReturnValue;                                              
};


struct UCreativeSceneDetectLib_CreativeCalculateSnapLocationFromMeshes_Params
{
	struct FVector                                     Curr;                                                     
	TArray<class UMeshComponent*>                      MeshComponents;                                           
	struct FVector                                     Direction;                                                
	struct FVector                                     HookPoint;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeSceneDetectLib_CreativeCalculateSnapLocation_Params
{
	class AActor*                                      TargetActor;                                              
	class USceneComponent*                             TargetComp;                                               
	struct FVector                                     Direction;                                                
	struct FVector                                     HookPoint;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UCreativeSceneQueryManager_RemoveReplicateObject_Params
{
	struct FString                                     InstanceID;                                               
	class UObject*                                     Object;                                                   
};


struct UCreativeSceneQueryManager_RemoveReplicateData_Params
{
	struct FString                                     InstanceID;                                               
};


struct UCreativeSceneQueryManager_OnReceivePreReplicateDataRemove_Params
{
	struct FString                                     ID;                                                       
};


struct UCreativeSceneQueryManager_OnReceivePostReplicateDataChange_Params
{
	struct FString                                     ID;                                                       
	TArray<class UObject*>                             Objects;                                                  
};


struct UCreativeSceneQueryManager_OnReceivePostReplicateDataAdd_Params
{
	struct FString                                     ID;                                                       
	TArray<class UObject*>                             Objects;                                                  
};


struct UCreativeSceneQueryManager_GetReplicatedObjects_Params
{
	struct FString                                     InstanceID;                                               
	TArray<class UObject*>                             ReturnValue;                                              
};


struct UCreativeSceneQueryManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeSceneQueryManager*                  ReturnValue;                                              
};


struct UCreativeSceneQueryManager_AddReplicateObjectPostDeferred_Params
{
	struct FString                                     InstanceID;                                               
	struct FTransform                                  SpawnTransform;                                           
	class UObject*                                     ReplicatedObject;                                         
};


struct UCreativeSceneQueryManager_AddReplicateObjectDeferred_Params
{
	struct FString                                     InstanceID;                                               
	class UClass*                                      ObjectClass;                                              
	struct FString                                     Name;                                                     
	struct FTransform                                  SpawnTransform;                                           
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeSceneQueryManager_AddReplicateObject_Params
{
	struct FString                                     InstanceID;                                               
	class UClass*                                      ObjectClass;                                              
	struct FString                                     Name;                                                     
	struct FTransform                                  SpawnTransform;                                           
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeScreenCaptureWidget_OnPanelInitialized_Params
{
};


struct UCreativeModeSoftComponentManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeModeSoftComponentManager*           ReturnValue;                                              
};


struct UCreativeModeSoftComponentManager_ClearAllLoading_Params
{
};


struct USoftStaticMeshComponent_SetSoftStaticMeshAsync_Params
{
	struct FString                                     NewMeshPath;                                              
	bool                                               ReturnValue;                                              
};


struct USoftStaticMeshComponent_SetSoftStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  
	bool                                               bSetStaticMesh;                                           
	bool                                               ReturnValue;                                              
};


struct USoftStaticMeshComponent_SetComponentOnlyRender_Params
{
	bool                                               bOnlyRender;                                              
};


struct USoftStaticMeshComponent_OnClientAsyncLoaded_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           
};


struct USoftStaticMeshComponent_LoadSoftStaticMeshImmediately_Params
{
};


struct USoftStaticMeshComponent_ClearOverrideMaterials_Params
{
};


struct UCreativeSoftStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 
	uint32_t                                           RecycledSeq;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeSoftStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
};


struct UCreativeSpawnManager_SpawnTower_Params
{
	int                                                ConfigID;                                                 
	struct FTransform                                  Transform;                                                
	int                                                TeamID;                                                   
	int                                                Campid;                                                   
	int                                                ParamsID;                                                 
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeSpawnManager_SpawnHumanBot_Params
{
	int                                                ConfigID;                                                 
	struct FTransform                                  Transform;                                                
	int                                                TeamID;                                                   
	int                                                Campid;                                                   
	int                                                ParamsID;                                                 
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeSpawnManager_SpawnAIPlayer_Params
{
	int                                                ConfigID;                                                 
	struct FTransform                                  Transform;                                                
	int                                                TeamID;                                                   
	int                                                Campid;                                                   
	int                                                ParamsID;                                                 
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeSpawnManager_OnUnitSpawned_Params
{
	class AActor*                                      NewUnit;                                                  
	ESpecType                                          SpecType;                                                 
};


struct UCreativeSpawnManager_OnDeadWithCategory_Params
{
	ESpecType                                          Category;                                                 
	class AActor*                                      DeadCharacter;                                            
};


struct UCreativeSpawnManager_HandleTowerDestroyed_Params
{
	class AActor*                                      DestroyedCharacter;                                       
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct UCreativeSpawnManager_HandleMonsterDestroyed_Params
{
	class AActor*                                      DestroyedCharacter;                                       
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct UCreativeSpawnManager_HandleHumanBotDestroyed_Params
{
	class AActor*                                      DestroyedCharacter;                                       
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct UCreativeSpawnManager_HandleAIPlayerDestroyed_Params
{
	class AActor*                                      DestroyedCharacter;                                       
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct UCreativeSpawnManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeSpawnManager*                       ReturnValue;                                              
};


struct UCreativeStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 
	uint32_t                                           RecycledSeq;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
};


struct UCreativeStreamingManager_UnregisterStreamingSource_Params
{
	class AActor*                                      Source;                                                   
};


struct UCreativeStreamingManager_StreamingManagerEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeStreamingManager_RemoveStreamingObject_Params
{
	struct FString                                     InstanceID;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeStreamingManager_RegisterStreamingSource_Params
{
	class AActor*                                      Source;                                                   
};


struct UCreativeStreamingManager_GetOnGridCellIndex_Params
{
	struct FString                                     GridName;                                                 
	struct FVector                                     Location;                                                 
	struct FIntVector                                  ReturnValue;                                              
};


struct UCreativeStreamingManager_GetGridLoadingRange_Params
{
	struct FString                                     GridName;                                                 
	float                                              ReturnValue;                                              
};


struct UCreativeStreamingManager_GetGridList_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCreativeStreamingManager_GetGridCellWidthHeight_Params
{
	struct FString                                     GridName;                                                 
	struct FVector2D                                   ReturnValue;                                              
};


struct UCreativeStreamingManager_GetCreativeModeStreamingSourceList_Params
{
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UCreativeStreamingManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeStreamingManager*                   ReturnValue;                                              
};


struct UCreativeStreamingManager_ChangeStreamingObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               
	ECreativeModeActorStreamingType                    NewStremaingType;                                         
	ECreativeModeActorStreamingType                    ReturnValue;                                              
};


struct UCreativeStreamingManager_AddStreamingObject_Params
{
	struct FString                                     InstanceID;                                               
	struct FCreativeModeStreamingParameters            StreamingParameters;                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_UpdateTaskProgress_Params
{
	struct FString                                     TaskID;                                                   
	int                                                NewProgress;                                              
	int                                                idx;                                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_SetTaskVal_Params
{
	struct FString                                     TaskID;                                                   
	struct FCreativeTaskViewItem                       SetItemValue;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_SetTaskStatus_Params
{
	struct FString                                     TaskID;                                                   
	ETaskStatus                                        TaskStatusVal;                                            
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_SetTaskStageReservedField_Params
{
	struct FString                                     TaskID;                                                   
	struct FString                                     Val;                                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_SetTaskStageIdx_Params
{
	struct FString                                     TaskID;                                                   
	int                                                TaskStageIdx;                                             
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_SetTaskProgressStep_Params
{
	struct FString                                     TaskID;                                                   
	struct FCreativeTaskProgressItem                   NewStep;                                                  
	int                                                idx;                                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_SetTaskConditionMet_Params
{
	struct FString                                     TaskID;                                                   
	bool                                               bMet;                                                     
	int                                                idx;                                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_SetMaxTaskProgressStep_Params
{
	struct FString                                     TaskID;                                                   
	int                                                MaxStep;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_RemoveTask_Params
{
	struct FString                                     TaskID;                                                   
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_RemoveAllTask_Params
{
};


struct UCreativeTaskComponent_ReceiveOnTaskViewRemoved_Params
{
	struct FCreativeTaskViewItem                       TaskViewItem;                                             
};


struct UCreativeTaskComponent_ReceiveOnTaskViewChanged_Params
{
	struct FCreativeTaskViewItem                       TaskViewItem;                                             
};


struct UCreativeTaskComponent_ReceiveOnTaskViewAdded_Params
{
	struct FCreativeTaskViewItem                       TaskViewItem;                                             
};


struct UCreativeTaskComponent_ReceiveAddTask_Params
{
	struct FCreativeTaskViewItem                       NewTask;                                                  
};


struct UCreativeTaskComponent_MakeDummyProgressStep_Params
{
	struct FCreativeTaskProgressParams                 Params;                                                   
	struct FCreativeTaskProgressItem                   ReturnValue;                                              
};


struct UCreativeTaskComponent_IsTaskExists_Params
{
	struct FString                                     TaskID;                                                   
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_IsProgressConditionMet_Params
{
	struct FString                                     TaskID;                                                   
	int                                                idx;                                                      
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_GetTaskProgress_Params
{
	struct FString                                     TaskID;                                                   
	int                                                OutCurrent;                                               
	int                                                idx;                                                      
	int                                                OutMax;                                                   
	bool                                               ReturnValue;                                              
};


struct UCreativeTaskComponent_GetAllTasks_Params
{
	TArray<struct FCreativeTaskViewItem>               ReturnValue;                                              
};


struct UCreativeTaskComponent_FindTaskByID_Params
{
	struct FString                                     TaskID;                                                   
	struct FCreativeTaskViewItem                       ReturnValue;                                              
};


struct UCreativeTaskComponent_AddTask_Params
{
	struct FString                                     TaskID;                                                   
	bool                                               ReturnValue;                                              
};


struct UCreativeTimerApiObject_SetMaxQueue_Params
{
	int                                                Num;                                                      
};


struct UCreativeTimerApiObject_NotifyTimerDropped_Params
{
	struct FString                                     blockId;                                                  
};


struct UCreativeTimerApiObject_Clear_Params
{
};


struct ACreativeTriggerAreaActor_OnTakeDamage_Params
{
	class AActor*                                      DamageCauser;                                             
};


struct UCreativeUMGCanvasPanel_SwapChildrenByInstanceID_Params
{
	struct FString                                     InstanceIDA;                                              
	struct FString                                     InstanceIDB;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeUMGCanvasPanel_RequestRecalcZOrder_Params
{
};


struct UCreativeUMGCanvasPanel_OnNextFrameRecalcTick_Params
{
};


struct UCreativeUMGCanvasPanel_FlushRecalcZOrderNow_Params
{
};


struct UCreativeUMGCanvasWidget_SwapChildrenByInstanceID_Params
{
	struct FString                                     InstanceIDA;                                              
	struct FString                                     InstanceIDB;                                              
	bool                                               ReturnValue;                                              
};


struct UCreativeUMGCanvasWidget_RequestRecalcZOrder_Params
{
};


struct UCreativeUMGCanvasWidget_FlushRecalcZOrderNow_Params
{
};


struct UCreativeUMGInfoManager_UpdateModBinUMGInfoCount_Params
{
};


struct UCreativeUMGInfoManager_SetUMGInfoDataNodes_Params
{
	TArray<struct FCreativeUMGInfoDataNode>            UMGInfoDataNodes;                                         
};


struct UCreativeUMGInfoManager_RemoveUMGInfo_Params
{
	uint32_t                                           ID;                                                       
};


struct UCreativeUMGInfoManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeUMGInfoManager_OnRep_ModBinUMGInfoCount_Params
{
};


struct UCreativeUMGInfoManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeUMGInfoManager_IsUMGInfoSyncComplete_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeUMGInfoManager_GetUMGInfoDataNodes_Params
{
	TArray<uint32_t>                                   DataHashKeys;                                             
	TArray<struct FCreativeUMGInfoDataNode>            ReturnValue;                                              
};


struct UCreativeUMGInfoManager_GetUMGInfoContent_Params
{
	uint32_t                                           ID;                                                       
	TArray<unsigned char>                              OutContent;                                               
	bool                                               ReturnValue;                                              
};


struct UCreativeUMGInfoManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeUMGInfoManager*                     ReturnValue;                                              
};


struct UCreativeUMGInfoManager_ChangeUMGInfo_Params
{
	uint32_t                                           ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeUMGInfoManager_CallOnReceivePreUMGInfoRemove_Params
{
	uint32_t                                           ID;                                                       
};


struct UCreativeUMGInfoManager_CallOnReceivePostUMGInfoChange_Params
{
	uint32_t                                           ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeUMGInfoManager_CallOnReceivePostUMGInfoAdd_Params
{
	uint32_t                                           ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeUMGInfoManager_AddUMGInfo_Params
{
	uint32_t                                           ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct UCreativeWebSocketManager_SendMessage_Params
{
	struct FString                                     Message;                                                  
};


struct UCreativeWebSocketManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};


struct UCreativeWebSocketManager_OnTickTimer_Params
{
};


struct UCreativeWebSocketManager_OnReceiveConnected_Params
{
};


struct UCreativeWebSocketManager_OnPostSetLuaEventBridgeInstance_Params
{
};


struct UCreativeWebSocketManager_OnMessageSent_Params
{
	struct FString                                     Message;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeWebSocketManager_OnMessageReceived_Params
{
	struct FString                                     Message;                                                  
	bool                                               ReturnValue;                                              
};


struct UCreativeWebSocketManager_IsConnected_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeWebSocketManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeWebSocketManager*                   ReturnValue;                                              
};


struct UCreativeWebSocketManager_ConnectServer_Params
{
	struct FString                                     ServerURL;                                                
	struct FString                                     ServerProtocol;                                           
};


struct UCreativeWidgetObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
	bool                                               Destroy;                                                  
};


struct UCreativeWidgetObject_ReturnObjectToPool_Params
{
	class UObject*                                     Obj;                                                      
};


struct UCreativeWidgetObject_ReturnObjectsToPool_Params
{
	TArray<class UObject*>                             Objs;                                                     
};


struct UCreativeWidgetObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                
};


struct UCreativeWidgetObject_ReceivePostBeginPlay_Params
{
};


struct UCreativeWidgetObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeWidgetObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeWidgetObject_ReceiveEndPlay_Params
{
};


struct UCreativeWidgetObject_ReceiveBeginPlay_Params
{
};


struct UCreativeWidgetObject_GetObjectsFromPool_Params
{
	TArray<struct FCreativePoolGetObjectParamInfo>     ObjectParams;                                             
	TArray<class UObject*>                             ReturnValue;                                              
};


struct UCreativeWidgetObject_GetObjectFromPool_Params
{
	int                                                PoolId;                                                   
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
	class UObject*                                     ReturnValue;                                              
};


struct UCreativeWorldSubSystem_GetManagerCenter_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UCreativeWoWInactiveCheckComponent_ServerMarkPlayerActive_Params
{
};


struct UCreativeWoWInactiveCheckComponent_MarkPlayerActive_Params
{
};


struct UCreativeWoWInactiveCheckComponent_KickOutPlayer_Params
{
};


struct UCreativeWoWInactiveCheckComponent_ClientShowKickOutTip_Params
{
	float                                              RemainTime;                                               
};


struct UCreativeWoWInactiveCheckComponent_ClientCachedActiveState_Params
{
};


struct UCreativeWoWInactiveCheckComponent_CheckForMovement_Params
{
	bool                                               ReturnValue;                                              
};


struct UCreativeWoWInactiveCheckComponent_CheckForInactive_Params
{
};


struct UCreativeWoWManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeWoWManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UCreativeWoWManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UCreativeWoWManager*                         ReturnValue;                                              
};


struct UCustomAssetUtilityObject_SaveArrayToFile_Params
{
	TArray<unsigned char>                              Content;                                                  
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UCustomAssetUtilityObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              
};


struct UCustomAssetUtilityObject_ReceiveGetCustomAssetMgr_Params
{
	class UCustomAssetManager*                         ReturnValue;                                              
};


struct UCustomAssetUtilityObject_LuaConditionalBeginDestroy_Params
{
};


struct UCustomAssetUtilityObject_LoadFileToArray_Params
{
	struct FString                                     Filename;                                                 
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCustomAssetUtilityObject_IsFileExistsInSaved_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UCustomAssetUtilityObject_InitUtilityObject_Params
{
	class UCustomAssetManager*                         CustomAssetManager;                                       
};


struct UCustomAssetUtilityObject_GetLastError_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCustomAssetUtilityObject_GetAllFilesInDirectoryRelative_Params
{
	struct FString                                     TargetDirectory;                                          
	TArray<struct FString>                             ReturnValue;                                              
};


struct UCustomAssetUtilityObject_DeleteFileInSaved_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UCustomAssetUtilityObject_AreFilesExistInSaved_Params
{
	TArray<struct FString>                             FileNameList;                                             
	TArray<bool>                                       ReturnValue;                                              
};


struct UCustomAssetDeserializer_DeserializeCompletedDelegate__DelegateSignature_Params
{
	class UCustomAssetDeserializer*                    uDeserializer;                                            
	class UObject*                                     OutAssetBytes;                                            
	uint64_t                                           DeserializeSeq;                                           
};


struct UCustomAssetDeserializer_DeserializeCompleted_Params
{
	uint64_t                                           DeserializeSeq;                                           
	class UObject*                                     OutAsset;                                                 
};


struct UCustomAssetDeserializer_Deserialize_Params
{
	TArray<unsigned char>                              InBytes;                                                  
	struct FString                                     SuffixType;                                               
	uint64_t                                           DeserializeSeq;                                           
	class UObject*                                     Outer;                                                    
	bool                                               ReturnValue;                                              
};


struct UCustomAssetAnimDeserializer_IsValidData_Params
{
	TArray<unsigned char>                              InBytes;                                                  
	bool                                               ReturnValue;                                              
};


struct UCustomAssetAnimManager_GetRuntimeBodyAnimData_Params
{
	class UAnimSequence*                               InAnim;                                                   
	class USkeleton*                                   InSkeleton;                                               
	class UObject*                                     Outer;                                                    
	class UCustomAssetRuntimeBodyAnimData*             ReturnValue;                                              
};


struct UCustomAssetAnimManager_ConvertAnimSequenceToBodyAnimData_Params
{
	class UAnimSequence*                               AnimSequence;                                             
	int                                                OutFrameRate;                                             
	TArray<struct FAIGCRuntimeBodyAnimFrameData>       ReturnValue;                                              
};


struct UCustomAssetAudioManager_WemCutByAssetKey_Params
{
	uint64_t                                           AssetKey;                                                 
	int                                                StartTime;                                                
	int                                                EndTime;                                                  
	uint64_t                                           ReturnValue;                                              
};


struct UCustomAssetAudioManager_SeekOnEvent_Params
{
	class UAkAudioEvent*                               Event;                                                    
	class AActor*                                      Actor;                                                    
	int                                                in_iPosition;                                             
	bool                                               bStopWhenOwnerDestroyed;                                  
	uint64_t                                           AssetKey;                                                 
	uint32_t                                           PlayingID;                                                
	uint32_t                                           ReturnValue;                                              
};


struct UCustomAssetAudioManager_AllocateTempAssetKey_Params
{
	int                                                ReturnValue;                                              
};


struct UCustomAssetImageDeserializer_IsValidData_Params
{
	TArray<unsigned char>                              InBytes;                                                  
	bool                                               ReturnValue;                                              
};


struct UCustomImageDataWrapper_MakeUniqueName_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     ReturnValue;                                              
};


struct UCustomImageDataWrapper_GetImageWrapperOuter_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UCustomAssetImageManager_RemoveTextureRef_Params
{
	uint64_t                                           HashID;                                                   
};


struct UCustomAssetImageManager_ReadPixelFormat_Params
{
	class UTexture2D*                                  Target;                                                   
	TEnumAsByte<EPixelFormat>                          ReturnValue;                                              
};


struct UCustomAssetImageManager_ReadImageSummary_Params
{
	TArray<unsigned char>                              ImageData;                                                
	struct FImageSummary                               ReturnValue;                                              
};


struct UCustomAssetImageManager_ReadImageRGBA_Params
{
	TArray<unsigned char>                              ImageData;                                                
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UCustomAssetImageManager_LuaUpdateTextureResource2Png_Params
{
	class UTexture2D*                                  Target;                                                   
	int                                                TexGroup;                                                 
	int                                                Width;                                                    
	int                                                Height;                                                   
	int                                                MipIndex;                                                 
	TArray<unsigned char>                              TexData;                                                  
};


struct UCustomAssetImageManager_LuaUpdateTextureResource2_Params
{
	class UTexture2D*                                  Target;                                                   
	int                                                TexGroup;                                                 
	int                                                Width;                                                    
	int                                                Height;                                                   
	int                                                MipIndex;                                                 
	int                                                PixelFormat;                                              
	TArray<unsigned char>                              TexData;                                                  
};


struct UCustomAssetImageManager_LuaReserveTexture2_Params
{
	int                                                PixelFormat;                                              
	int                                                TexGroup;                                                 
	class UTexture2D*                                  OtherTex;                                                 
	class UTexture2D*                                  ReturnValue;                                              
};


struct UCustomAssetImageManager_LuaReserveTexture_Params
{
	int                                                PixelFormat;                                              
	int                                                TexGroup;                                                 
	int                                                Width;                                                    
	int                                                Height;                                                   
	class UTexture2D*                                  ReturnValue;                                              
};


struct UCustomAssetImageManager_IsValidImageSummary_Params
{
	struct FImageSummary                               Summary;                                                  
	bool                                               ReturnValue;                                              
};


struct UCustomAssetImageManager_IsPngImageData_Params
{
	TArray<unsigned char>                              ImageData;                                                
	bool                                               ReturnValue;                                              
};


struct UCustomAssetImageManager_GetPixelFormat_Params
{
	int                                                PixelFormat;                                              
	TEnumAsByte<EPixelFormat>                          ReturnValue;                                              
};


struct UCustomAssetImageManager_GetPixelBlockSize_Params
{
	int                                                PixelFormat;                                              
	int                                                SizeX;                                                    
	int                                                SizeY;                                                    
};


struct UCustomAssetImageManager_GetObjectPath_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UCustomAssetImageManager_GetHeaderSize_Params
{
	TEnumAsByte<EPixelFormat>                          Format;                                                   
	int                                                ReturnValue;                                              
};


struct UCustomAssetImageManager_AddTextureRef_Params
{
	uint64_t                                           HashID;                                                   
	class UTexture2D*                                  Tex;                                                      
};


struct UCustomAssetManager_TryBeginPlay_Params
{
};


struct UCustomAssetManager_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              
};


struct UCustomAssetManager_PrintAliveCustomAssets_Params
{
};


struct UCustomAssetManager_ParseCustomAssetKeyHashID_Params
{
	uint64_t                                           HashID;                                                   
	unsigned char                                      ExpectedHashIDTag;                                        
	unsigned char                                      OutCustomAssetType;                                       
	uint32_t                                           OutUniqueId;                                              
	bool                                               ReturnValue;                                              
};


struct UCustomAssetManager_GetHashByString_Params
{
	struct FString                                     CustomAssetKey;                                           
	uint32_t                                           ReturnValue;                                              
};


struct UCustomAssetManager_GetCustomAssetPathName_Params
{
	class UObject*                                     CustomAsset;                                              
	struct FString                                     ReturnValue;                                              
};


struct UCustomAssetManager_GetCustomAssetOuter_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UCustomAssetManager_GetCustomAssetObjectFromTrackedMap_Params
{
	struct FString                                     BytesMD5;                                                 
	class UObject*                                     ReturnValue;                                              
};


struct UCustomAssetManager_GetCurPlatformSuffixType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCustomAssetManager_GenerateHashIDByCustomAssetKey_Params
{
	struct FString                                     CustomAssetKey;                                           
	unsigned char                                      CustomAssetType;                                          
	unsigned char                                      HashIDTag;                                                
	uint64_t                                           ReturnValue;                                              
};


struct UCustomAssetManager_CustomAssetMgrConditionalBeginDestroy_Params
{
};


struct UCustomAssetManager_CleanupStaleCustomAssets_Params
{
};


struct UCustomAssetManager_CleanupAliveCustomAssetObjects_Params
{
};


struct UCustomAssetManager_AddCustomAssetObjectToTrackedMap_Params
{
	struct FString                                     BytesMD5;                                                 
	class UObject*                                     AssetObject;                                              
	struct FString                                     LoadStack;                                                
};


struct UCustomAssetMountStateComponent_SetMountStatusInfos_Params
{
	TArray<struct FCustomAssetMountStatusInfo>         Infos;                                                    
};


struct UCustomAssetMountStateComponent_RemoveMountStatusInfo_Params
{
	struct FString                                     AssetKey;                                                 
	bool                                               ReturnValue;                                              
};


struct UCustomAssetMountStateComponent_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              
};


struct UCustomAssetMountStateComponent_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              
};


struct UCustomAssetMountStateComponent_GetMountStatusInfos_Params
{
	TArray<uint32_t>                                   Ids;                                                      
	TArray<struct FCustomAssetMountStatusInfo>         ReturnValue;                                              
};


struct UCustomAssetMountStateComponent_ChangeMountStatusInfo_Params
{
	struct FString                                     AssetKey;                                                 
	EMountStatus                                       MountStatus;                                              
	TArray<uint32_t>                                   MountingPlayerKeys;                                       
	bool                                               ReturnValue;                                              
};


struct UCustomAssetMountStateComponent_AddMountStatusInfo_Params
{
	struct FString                                     AssetKey;                                                 
	EMountStatus                                       MountStatus;                                              
	TArray<uint32_t>                                   MountingPlayerKeys;                                       
	uint32_t                                           MountedByPlayerKey;                                       
	TArray<unsigned char>                              MappingInfoContent;                                       
	bool                                               ReturnValue;                                              
};


struct UCustomAssetPlatformBuilder_StartBuild_Params
{
	TArray<unsigned char>                              SourceBytes;                                              
	uint64_t                                           CurBuildSeq;                                              
	class UObject*                                     SourceObject;                                             
	bool                                               ReturnValue;                                              
};


struct UCustomAssetPlatformBuilder_PlatformBuilderCompletedDelegate__DelegateSignature_Params
{
	class UCustomAssetPlatformBuilder*                 uPlatformBuilder;                                         
	TArray<struct FPlatformCustomAssetInfo>            PlatformCustomAssetInfoList;                              
	uint64_t                                           BuilderSeq;                                               
};


struct UCustomAssetSkeletalAnimDeserializer_IsValidData_Params
{
	TArray<unsigned char>                              InBytes;                                                  
	bool                                               ReturnValue;                                              
};


struct UCustomAssetSkeletalMeshDeserializer_IsValidData_Params
{
	TArray<unsigned char>                              InBytes;                                                  
	bool                                               ReturnValue;                                              
};


struct UCustomAssetStaticMeshDeserializer_IsValidData_Params
{
	TArray<unsigned char>                              InBytes;                                                  
	bool                                               ReturnValue;                                              
};


struct ADancerDeviceActor_OnRep_SyncPlayerCharacter_Params
{
};


struct UDataTransferComponent_StartTransfer_Params
{
	struct FString                                     FilePath;                                                 
};


struct UDataTransferComponent_Server_RequestFile_Params
{
	struct FString                                     FilePath;                                                 
};


struct UDataTransferComponent_Server_ReceivePacketAck_Params
{
	int16_t                                            TaskID;                                                   
	int16_t                                            Seq;                                                      
};


struct UDataTransferComponent_Server_ReceivePacket_Params
{
	struct FDTPacket                                   Packet;                                                   
};


struct UDataTransferComponent_SendData_Params
{
	TArray<unsigned char>                              fileData;                                                 
	int                                                ReturnValue;                                              
};


struct UDataTransferComponent_ReceivePacketAck_Params
{
	int16_t                                            TaskID;                                                   
	int16_t                                            Seq;                                                      
};


struct UDataTransferComponent_ReceivePacket_Params
{
	struct FDTPacket                                   Packet;                                                   
};


struct UDataTransferComponent_Init_Params
{
	bool                                               ReturnValue;                                              
};


struct UDataTransferComponent_Client_RequestFile_Params
{
	struct FString                                     FilePath;                                                 
};


struct UDataTransferComponent_Client_ReceivePacketAck_Params
{
	int16_t                                            TaskID;                                                   
	int16_t                                            Seq;                                                      
};


struct UDataTransferComponent_Client_ReceivePacket_Params
{
	struct FDTPacket                                   Packet;                                                   
};


struct UDSLParser_ParseText_Params
{
	struct FString                                     Source;                                                   
	class UDSLParserASTTree*                           ReturnValue;                                              
};


struct UDSLParser_ParseFile_Params
{
	struct FString                                     FilePath;                                                 
	class UDSLParserASTTree*                           ReturnValue;                                              
};


struct UDSLParser_LoadGrammarFromString_Params
{
	struct FString                                     InGrammarText;                                            
	bool                                               ReturnValue;                                              
};


struct UDSLParser_LoadGrammarFromFile_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UDSLParser_GetLastError_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UDSLParser_GetGrammarText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UDSLParser_GetGrammarRuleNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UDSLParser_ClearGrammar_Params
{
};


struct UDSLParser_AddGrammarRule_Params
{
	struct FString                                     RuleName;                                                 
	struct FString                                     RuleBody;                                                 
};


struct UDSLParserASTTree_ToJson_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UDSLParserASTTree_IsValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UDSLParserASTTree_GetRootNodeId_Params
{
	int                                                ReturnValue;                                              
};


struct UDSLParserASTTree_GetPropertyNodeId_Params
{
	int                                                NodeId;                                                   
	struct FString                                     Key;                                                      
	int                                                ReturnValue;                                              
};


struct UDSLParserASTTree_GetPropertyKeys_Params
{
	int                                                NodeId;                                                   
	TArray<struct FString>                             ReturnValue;                                              
};


struct UDSLParserASTTree_GetNodeValue_Params
{
	int                                                NodeId;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UDSLParserASTTree_GetNodeName_Params
{
	int                                                NodeId;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UDSLParserASTTree_GetNodeKind_Params
{
	int                                                NodeId;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UDSLParserASTTree_GetNodeCount_Params
{
	int                                                ReturnValue;                                              
};


struct UDSLParserASTTree_GetError_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UDSLParserASTTree_GetChildren_Params
{
	int                                                NodeId;                                                   
	TArray<int>                                        ReturnValue;                                              
};


struct UGameModeStateFighting_CreativeMode_SetToInfinityTime_Params
{
};


struct UGameModeStateFighting_CreativeMode_PlayersInfoRecord_Params
{
};


struct UGameProcessEventObject_ReceivePostEvent_Params
{
	int                                                ProcessType;                                              
	int                                                Round;                                                    
};


struct UGameProcessEventObject_OnEnterPlayProcess_Params
{
};


struct APaintScoreManager_WorldToVoxelBP_Params
{
	struct FVector                                     WorldPos;                                                 
	struct FPaintVoxelCoord                            ReturnValue;                                              
};


struct APaintScoreManager_VoxelToWorldBP_Params
{
	struct FPaintVoxelCoord                            VoxelCoord;                                               
	struct FVector                                     ReturnValue;                                              
};


struct APaintScoreManager_UpdateUserAreaCache_Params
{
	int                                                UserId;                                                   
	float                                              AreaDelta;                                                
};


struct APaintScoreManager_TriangleIntersectsSphere_Params
{
	int                                                TriangleIndex;                                            
	struct FVector                                     SphereCenter;                                             
	float                                              SphereRadius;                                             
	bool                                               ReturnValue;                                              
};


struct APaintScoreManager_SubdivideOctreeNode_Params
{
	struct FPaintOctreeNode                            Node;                                                     
};


struct APaintScoreManager_SetVoxelCellOwner_Params
{
	struct FPaintVoxelCoord                            VoxelCoord;                                               
	int                                                UserId;                                                   
	bool                                               ReturnValue;                                              
};


struct APaintScoreManager_SetSmallTriangleOwner_Params
{
	int                                                Index;                                                    
	int                                                UserId;                                                   
	bool                                               ReturnValue;                                              
};


struct APaintScoreManager_SetOctreeRoot_Params
{
	struct FPaintOctreeNode                            NewRoot;                                                  
};


struct APaintScoreManager_Reset_Params
{
};


struct APaintScoreManager_RemoveUserPaint_Params
{
	struct FString                                     UserName;                                                 
};


struct APaintScoreManager_QueryOctree_Params
{
	struct FPaintOctreeNode                            Node;                                                     
	struct FVector                                     SphereCenter;                                             
	float                                              SphereRadius;                                             
	TArray<int>                                        OutTriangleIndices;                                       
};


struct APaintScoreManager_ProjectTriangleTo2D_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	struct FVector                                     C;                                                        
	struct FVector                                     SphereCenter;                                             
	float                                              SphereRadius;                                             
	struct FVector2D                                   OutA2D;                                                   
	struct FVector2D                                   OutB2D;                                                   
	struct FVector2D                                   OutC2D;                                                   
	struct FVector2D                                   OutCenter2D;                                              
	float                                              OutRadius2D;                                              
	struct FVector                                     OutE1;                                                    
	struct FVector                                     OutE2;                                                    
	struct FVector                                     OutPlaneOrigin;                                           
	bool                                               ReturnValue;                                              
};


struct APaintScoreManager_ProcessVoxelOwnershipTransfer_Params
{
	struct FPaintVoxelCoord                            VoxelCoord;                                               
	int                                                UserId;                                                   
	float                                              ReturnValue;                                              
};


struct APaintScoreManager_ProcessVoxelCellsForPaint_Params
{
	struct FVector                                     Center;                                                   
	int                                                UserId;                                                   
	float                                              ReturnValue;                                              
};


struct APaintScoreManager_ProcessTriangleWithCoverageMethod_Params
{
	int                                                TriangleIndex;                                            
	struct FVector                                     Center;                                                   
	unsigned char                                      InternalUserID;                                           
	class UWorld*                                      DebugWorld;                                               
};


struct APaintScoreManager_ProcessTrianglesWithLinearSearch_Params
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	unsigned char                                      InternalUserID;                                           
	class UWorld*                                      DebugWorld;                                               
};


struct APaintScoreManager_ProcessTriangleOwnershipTransfer_Params
{
	int                                                TriangleIndex;                                            
	int                                                UserId;                                                   
	float                                              ClippedArea;                                              
	float                                              ReturnValue;                                              
};


struct APaintScoreManager_ProcessSmallTrianglesForPaint_Params
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	int                                                UserId;                                                   
	float                                              ReturnValue;                                              
};


struct APaintScoreManager_ProcessSingleTriangleForPaint_Params
{
	int                                                TriangleIndex;                                            
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	unsigned char                                      InternalUserID;                                           
	class UWorld*                                      DebugWorld;                                               
};


struct APaintScoreManager_PerformTwoPointSplit_Params
{
	int                                                TriangleIndex;                                            
	struct FVector                                     SphereCenter;                                             
	float                                              SphereRadius;                                             
	unsigned char                                      NewOwnerID;                                               
	float                                              OutTransferredArea;                                       
	bool                                               ReturnValue;                                              
};


struct APaintScoreManager_IntersectSegmentCircle2D_Params
{
	struct FVector2D                                   P0;                                                       
	struct FVector2D                                   P1;                                                       
	struct FVector2D                                   CircleCenter;                                             
	float                                              Radius;                                                   
	TArray<float>                                      OutT;                                                     
	bool                                               ReturnValue;                                              
};


struct APaintScoreManager_InsertTriangleIntoOctree_Params
{
	struct FPaintOctreeNode                            Node;                                                     
	int                                                TriangleIndex;                                            
};


struct APaintScoreManager_Initialize_Params
{
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Indices;                                                  
};


struct APaintScoreManager_InitByNavManager_Params
{
	struct FBox                                        Area;                                                     
};


struct APaintScoreManager_GetVoxelCellInfo_Params
{
	struct FPaintVoxelCoord                            VoxelCoord;                                               
	struct FPaintVoxelCell                             OutCell;                                                  
	bool                                               ReturnValue;                                              
};


struct APaintScoreManager_GetUserScore_Params
{
	struct FString                                     UserName;                                                 
	float                                              ReturnValue;                                              
};


struct APaintScoreManager_GetTriangleCentroid_Params
{
	int                                                TriangleIndex;                                            
	struct FVector                                     ReturnValue;                                              
};


struct APaintScoreManager_GetSmallTrianglesCount_Params
{
	int                                                ReturnValue;                                              
};


struct APaintScoreManager_GetSmallTriangleInfo_Params
{
	int                                                Index;                                                    
	struct FPaintTriangleInfo                          OutTriangle;                                              
	bool                                               ReturnValue;                                              
};


struct APaintScoreManager_GetRegisteredUserCount_Params
{
	int                                                ReturnValue;                                              
};


struct APaintScoreManager_GetPrecomputedDiskOffsets_Params
{
	TArray<struct FPaintVoxelCoord>                    ReturnValue;                                              
};


struct APaintScoreManager_GetOctreeRoot_Params
{
	struct FPaintOctreeNode                            ReturnValue;                                              
};


struct APaintScoreManager_GetMemoryUsage_Params
{
	struct FString                                     ReturnValue;                                              
};


struct APaintScoreManager_GetAllUserScores_Params
{
	TArray<struct FString>                             OutUsers;                                                 
	TArray<float>                                      OutScores;                                                
};


struct APaintScoreManager_DrawVoxelCells_Params
{
	unsigned char                                      TargetUserID;                                             
};


struct APaintScoreManager_DrawSmallTriangles_Params
{
	unsigned char                                      TargetUserID;                                             
};


struct APaintScoreManager_DebugDrawOccupiedAreasForUserID_Params
{
	unsigned char                                      TargetUserID;                                             
};


struct APaintScoreManager_DebugDrawOccupiedAreas_Params
{
	struct FString                                     UserName;                                                 
};


struct APaintScoreManager_ClipTriangleWithSphere_Params
{
	int                                                TriangleIndex;                                            
	struct FVector                                     SphereCenter;                                             
	float                                              ReturnValue;                                              
};


struct APaintScoreManager_CalculateTriangleVoxelIntersection_Params
{
	struct FVector                                     V0;                                                       
	struct FVector                                     v1;                                                       
	struct FVector                                     v2;                                                       
	struct FPaintVoxelCoord                            VoxelCoord;                                               
	float                                              ReturnValue;                                              
};


struct APaintScoreManager_CalculateSmallTrianglesBounds_Params
{
	struct FVector                                     OutMin;                                                   
	struct FVector                                     OutMax;                                                   
};


struct APaintScoreManager_BuildOctree_Params
{
};


struct APaintScoreManager_AddTriangleToPipeline_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	struct FVector                                     C;                                                        
};


struct APaintScoreManager_AddPaint_Params
{
	struct FVector                                     Center;                                                   
	struct FString                                     UserName;                                                 
};


struct UPlayerListenerEventObject_OnCppRemovePlayerListener_Params
{
	class UObject*                                     Content;                                                  
	uint32_t                                           PlayerKey;                                                
};


struct UPlayerListenerEventObject_OnCppAddPlayerListener_Params
{
	class UObject*                                     Content;                                                  
	uint32_t                                           PlayerKey;                                                
};


struct UPlayerAttachedToVehicleEventObject_OnOwnerAttachedToVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                
	uint32_t                                           PlayerKey;                                                
};


struct UPlayerAttachedToVehicleEventObject_OnCppRemovePlayerListener_Params
{
	class UObject*                                     Content;                                                  
	uint32_t                                           PlayerKey;                                                
};


struct UPlayerAttachedToVehicleEventObject_OnCppAddPlayerListener_Params
{
	class UObject*                                     Content;                                                  
	uint32_t                                           PlayerKey;                                                
};


struct UPlayerAttachedProxy_OnProxyAttachedToVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                
};


struct AShowAllPlayerManagerActor_TriggerRefresh_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	bool                                               bEnable;                                                  
};


struct AShowAllPlayerManagerActor_RefreshTeamPoseData_Params
{
};


struct AShowAllPlayerManagerActor_RefreshMapMarkData_Params
{
};


struct AShowAllPlayerManagerActor_OnTeamPosDataChange_Params
{
};


struct AShowAllPlayerManagerActor_OnRep_TeamPosData_Params
{
};


struct AShowAllPlayerManagerActor_IsCharacterValidForShow_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	bool                                               ReturnValue;                                              
};


struct AShowAllPlayerManagerActor_FlushBatchData_Params
{
	int                                                BatchSize;                                                
	int                                                CurExtraSize;                                             
};


struct AShowAllPlayerManagerActor_EnableRefresh_Params
{
	bool                                               bEnable;                                                  
};


struct AShowAllPlayerManagerActor_ClearAllMark_Params
{
};


struct UUGCDynamicNetManager_UnregisterProperty_Params
{
	int                                                InReplicationID;                                          
};


struct UUGCDynamicNetManager_UnregisterAllProperties_Params
{
	TArray<int>                                        InRepIDs;                                                 
};


struct UUGCDynamicNetManager_SetPropValue_Params
{
	int                                                InReplicationID;                                          
	TArray<unsigned char>                              InNewBytes;                                               
};


struct UUGCDynamicNetManager_SetPropMeta_Params
{
	int                                                InReplicationID;                                          
	uint32_t                                           InOwnerNetGUID;                                           
	struct FString                                     InPropName;                                               
	unsigned char                                      InPropType;                                               
};


struct UUGCDynamicNetManager_RegisterProperty_Params
{
	uint32_t                                           OwnerNetGUID;                                             
	unsigned char                                      PropType;                                                 
	struct FString                                     PropName;                                                 
	TArray<unsigned char>                              InitialValue;                                             
	int                                                ReturnValue;                                              
};


struct UUGCDynamicNetManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};


struct UUGCDynamicNetManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UUGCDynamicNetManager_PushPropertyValue_Params
{
	int                                                InReplicationID;                                          
	TArray<unsigned char>                              NewValue;                                                 
	bool                                               bForcePush;                                               
};


struct UUGCDynamicNetManager_OnPostSetLuaEventBridgeInstance_Params
{
};


struct UUGCDynamicNetManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                
};


struct UUGCDynamicNetManager_GetSimplePropInfo_Params
{
	int                                                InReplicationID;                                          
	struct FUGCLuaNetPropertyHead                      OutPropertyInfo;                                          
	bool                                               ReturnValue;                                              
};


struct UUGCDynamicNetManager_GetReplicationID_Params
{
	uint32_t                                           NetGUID;                                                  
	struct FString                                     PropName;                                                 
	int                                                ReturnValue;                                              
};


struct UUGCDynamicNetManager_GetPropValue_Params
{
	int                                                InReplicationID;                                          
	TArray<unsigned char>                              OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UUGCDynamicNetManager_GetHeadSeq_Params
{
	int                                                InReplicationID;                                          
	unsigned char                                      ReturnValue;                                              
};


struct UUGCDynamicNetManager_GetFullPropInfo_Params
{
	int                                                InReplicationID;                                          
	struct FUGCLuaNetPropertyHead                      OutPropertyInfo;                                          
	bool                                               ReturnValue;                                              
};


struct UUGCDynamicNetManager_Get_Params
{
	class UObject*                                     WorldContext;                                             
	class UUGCDynamicNetManager*                       ReturnValue;                                              
};


struct UUGCDynamicNetManager_EnqueuePendingUnmapped_Params
{
	uint32_t                                           InOwnerNetGUID;                                           
	int                                                InReplicationID;                                          
	unsigned char                                      InSeq;                                                    
	TArray<unsigned char>                              InNewBytes;                                               
	TArray<int>                                        InPendingGUIDs;                                           
};


struct UUGCDynamicNetManager_EnableLuaTick_Params
{
};


struct UUGCDynamicNetManager_DisableLuaTick_Params
{
};


struct UUGCDynamicNetManager_ClearPullTracking_Params
{
	int                                                InReplicationID;                                          
};


struct UUGCDynamicNetManager_ClearPullRequesting_Params
{
	int                                                InReplicationID;                                          
};


struct UUGCDynamicNetManager_AddToPullQueue_Params
{
	int                                                InReplicationID;                                          
	bool                                               bNeedMeta;                                                
};

}

