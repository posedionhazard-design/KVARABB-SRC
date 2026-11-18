#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct AAkAcousticPortal_OpenPortal_Params
{
};


struct AAkAcousticPortal_GetCurrentState_Params
{
	EAkAcousticPortalState                             ReturnValue;                                              
};


struct AAkAcousticPortal_ClosePortal_Params
{
};


struct AAkAmbientSound_StopAmbientSound_Params
{
};


struct AAkAmbientSound_StartAmbientSound_Params
{
};


struct UAkAreaCheckComponent_UnRegistAKAreaVolume_Params
{
	class AActor*                                      AreaVolume;                                               
	ECustomAKAreaType                                  AreaType;                                                 
};


struct UAkAreaCheckComponent_RegistAKAreaVolume_Params
{
	class AActor*                                      AreaVolume;                                               
	ECustomAKAreaType                                  AreaType;                                                 
};


struct UAkAreaCheckComponent_CheckVoiceAvailable_Params
{
	struct FVector                                     VoicePostion;                                             
	bool                                               ReturnValue;                                              
};


struct AAkAreaCheckVolumeBase_UnRegisterFromAreaCheck_Params
{
};


struct AAkAreaCheckVolumeBase_RegisterToAreaCheck_Params
{
};


struct AAkAreaCheckVolumeBase_IsInsideVolume_Params
{
	struct FVector                                     OrignPosition;                                            
	bool                                               ReturnValue;                                              
};


struct AAkAreaCheckVolumeBase_GetAKAreaType_Params
{
	ECustomAKAreaType                                  ReturnValue;                                              
};


struct UAkAudioDeviceSettings_InitConfig_Params
{
};


struct UAkAudioMonitor_UpdateAkComponentInfo_Params
{
	TMap<struct FString, struct FAkCombinedInfo>       OutList;                                                  
};


struct UAkAudioMonitor_Update_Params
{
	float                                              DeltaTime;                                                
};


struct UAkAudioMonitor_SetUpdateInterval_Params
{
	float                                              NewUpdateInterval;                                        
};


struct UAkAudioMonitor_SetMonitorFlag_Params
{
	TArray<unsigned char>                              InFlags;                                                  
	unsigned char                                      TotalPlayCount;                                           
	unsigned char                                      ObjectPlayCount;                                          
};


struct UAkAudioMonitor_OnReportError_Params
{
	struct FString                                     FunctionName;                                             
	unsigned char                                      ErrorAkCode;                                              
	uint64_t                                           NumericParam;                                             
	struct FString                                     StrParam;                                                 
};


struct UAkAudioMonitor_OnAkAudioEventTrigger_Params
{
	struct FString                                     Name;                                                     
	int                                                code;                                                     
};


struct UAkAudioMonitor_OnAkAudioBankTrigger_Params
{
	bool                                               bUnload;                                                  
	struct FString                                     BankName;                                                 
	int8_t                                             RefCount;                                                 
};


struct UAkAudioMonitor_IsMonitorInit_Params
{
	bool                                               ReturnValue;                                              
};


struct UAkAudioMonitor_IsAkOutOfAttenuation_Params
{
	class UAkComponent*                                AkComp;                                                   
	float                                              Attenuation;                                              
	bool                                               ReturnValue;                                              
};


struct UAkAudioMonitor_InitMonitorDataPtr_Params
{
};


struct UAkAudioMonitor_GetTotalPlayRecord_Params
{
	TArray<uint16_t>                                   ReturnValue;                                              
};


struct UAkAudioMonitor_GetSwitchValue_Params
{
	class UAkComponent*                                Component;                                                
	struct FString                                     SwitchName;                                               
	struct FString                                     ReturnValue;                                              
};


struct UAkAudioMonitor_GetSwitchNames_Params
{
	class UAkComponent*                                Component;                                                
	TArray<struct FString>                             ReturnValue;                                              
};


struct UAkAudioMonitor_GetRTPCValueByID_Params
{
	class UAkComponent*                                Component;                                                
	uint32_t                                           RTPCID;                                                   
	float                                              ReturnValue;                                              
};


struct UAkAudioMonitor_GetRTPCValue_Params
{
	class UAkComponent*                                Component;                                                
	struct FString                                     RTPCName;                                                 
	float                                              ReturnValue;                                              
};


struct UAkAudioMonitor_GetRTPCNames_Params
{
	class UAkComponent*                                Component;                                                
	TArray<struct FString>                             ReturnValue;                                              
};


struct UAkAudioMonitor_GetRTPCIDs_Params
{
	class UAkComponent*                                Component;                                                
	TArray<uint32_t>                                   ReturnValue;                                              
};


struct UAkAudioMonitor_GetReportErrorRecord_Params
{
	TMap<unsigned char, struct FAKErrorInfo>           ReturnValue;                                              
};


struct UAkAudioMonitor_GetPostion_Params
{
	class UAkComponent*                                Component;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UAkAudioMonitor_GetPlayingID_Params
{
	class UAkComponent*                                Component;                                                
	TArray<int>                                        ReturnValue;                                              
};


struct UAkAudioMonitor_GetPlayEventName_Params
{
	class UAkComponent*                                Component;                                                
	int                                                PlayID;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UAkAudioMonitor_GetObjectPlayRecord_Params
{
	TMap<struct FString, unsigned char>                ReturnValue;                                              
};


struct UAkAudioMonitor_GetObjectNameByObjectID_Params
{
	uint64_t                                           ObjectID;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UAkAudioMonitor_GetMonitorDataPtr_Params
{
	class UAkAudioMonitorData*                         ReturnValue;                                              
};


struct UAkAudioMonitor_GetLEngineDefaultPoolMemoryUsed_Params
{
	int                                                OutReserved;                                              
	int                                                OutUsed;                                                  
	bool                                               ReturnValue;                                              
};


struct UAkAudioMonitor_GetGlobalSwitchValue_Params
{
	struct FString                                     SwitchName;                                               
	struct FString                                     ReturnValue;                                              
};


struct UAkAudioMonitor_GetGlobalSwitchNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UAkAudioMonitor_GetGlobalRTPCValue_Params
{
	struct FString                                     RTPCName;                                                 
	float                                              ReturnValue;                                              
};


struct UAkAudioMonitor_GetGlobalRTPCNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UAkAudioMonitor_GetEventList_Params
{
	TArray<struct FString>                             OutRes;                                                   
};


struct UAkAudioMonitor_GetEventInMemoryByName_Params
{
	TArray<class UAkAudioEvent*>                       AllAk;                                                    
	struct FString                                     AkName;                                                   
	class UAkAudioEvent*                               ReturnValue;                                              
};


struct UAkAudioMonitor_GetDetailErrorCodeRecord_Params
{
	TMap<uint32_t, struct FAKErrorInfo>                ReturnValue;                                              
};


struct UAkAudioMonitor_GetDefaultPoolMemoryUsed_Params
{
	int                                                OutReserved;                                              
	int                                                OutUsed;                                                  
	bool                                               ReturnValue;                                              
};


struct UAkAudioMonitor_GetBankRefList_Params
{
	TMap<struct FString, int8_t>                       OutRes;                                                   
};


struct UAkAudioMonitor_GetAllEventNameInMemory_Params
{
	class UObject*                                     WorldContent;                                             
	TArray<struct FName>                               ReturnValue;                                              
};


struct UAkAudioMonitor_GetAllEventInMemory_Params
{
	class UObject*                                     WorldContent;                                             
	TArray<class UAkAudioEvent*>                       AllAk;                                                    
};


struct UAkAudioMonitor_GetAllAkComponentFormDevice_Params
{
	TArray<class UAkComponent*>                        AkList;                                                   
	TArray<class UAkComponent*>                        recycledAkList;                                           
};


struct UAkAudioMonitor_GetActiveObjCount_Params
{
	int                                                ReturnValue;                                              
};


struct UAkAudioMonitor_GetActiveEventCount_Params
{
	int                                                ReturnValue;                                              
};


struct UAkAudioMonitor_GetActiveBankCount_Params
{
	int                                                ReturnValue;                                              
};


struct UAkAudioMonitorData_UpdateEventList_Params
{
	bool                                               bStop;                                                    
	struct FString                                     InEventName;                                              
};


struct UAkAudioMonitorData_UpdateBankRefList_Params
{
	bool                                               bUnload;                                                  
	struct FString                                     BankName;                                                 
	int8_t                                             RefCount;                                                 
};


struct UAkAudioMonitorData_UpdateAkComponentInfo_Params
{
	TMap<struct FString, struct FAkCombinedInfo>       OutList;                                                  
};


struct UAkAudioMonitorData_SetMonitorFlagInternal_Params
{
	TArray<unsigned char>                              InFlags;                                                  
	unsigned char                                      TotalPlayCount;                                           
	unsigned char                                      ObjectPlayCount;                                          
};


struct UAkAudioMonitorData_OnReportErrorInternal_Params
{
	struct FString                                     FunctionName;                                             
	unsigned char                                      ErrorAkCode;                                              
	uint64_t                                           NumericParam;                                             
	struct FString                                     StrParam;                                                 
};


struct UAkAudioMonitorData_Initialize_Params
{
};


struct UAkAudioVisualComponent_StartOfflineTime_Params
{
};


struct UAkAudioVisualComponent_ResetOfflineTime_Params
{
};


struct UAkAudioVisualComponent_OnTickVisualInfo_Params
{
	TArray<float>                                      VisualInfo;                                               
};


struct UAkAudioVisualComponent_OnTickOfflineVisualInfo_Params
{
	struct FAudioOfflineVisualBeatData                 VisualInfo;                                               
};


struct UAkAudioVisualComponent_InitOfflineDataWithBeatTime_Params
{
	TArray<float>                                      Datas;                                                    
};


struct UAkAudioVisualComponent_InitOfflineData_Params
{
	TArray<struct FAudioOfflineVisualBeatData>         Datas;                                                    
};


struct UAkAudioVisualComponent_GetCurrentBeat_Params
{
	struct FAudioOfflineVisualBeatData                 Result;                                                   
	bool                                               ReturnValue;                                              
};


struct UAkComponent_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                       
};


struct UAkComponent_UseEarlyReflections_Params
{
	class UAkAuxBus*                                   AuxBus;                                                   
	bool                                               Left;                                                     
	bool                                               Right;                                                    
	bool                                               floor;                                                    
	bool                                               Ceiling;                                                  
	bool                                               Back;                                                     
	bool                                               Front;                                                    
	bool                                               SpotReflectors;                                           
	struct FString                                     AuxBusName;                                               
};


struct UAkComponent_UpdateGameObjectPosition_Params
{
};


struct UAkComponent_TriggerEventWithRangedEmitter_Params
{
	bool                                               bEnable;                                                  
};


struct UAkComponent_StopPlayingID_Params
{
	int                                                StopEventID;                                              
};


struct UAkComponent_StopEventInRange_Params
{
};


struct UAkComponent_Stop_Params
{
};


struct UAkComponent_SetSwitch_Params
{
	struct FString                                     SwitchGroup;                                              
	struct FString                                     SwitchState;                                              
	int                                                ReturnValue;                                              
};


struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
	bool                                               bStopWhenOwnerDestroyed;                                  
};


struct UAkComponent_SetRTPCValueGlobally_Params
{
	struct FString                                     RTPC;                                                     
	float                                              Value;                                                    
};


struct UAkComponent_SetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     
	float                                              Value;                                                    
	int                                                InterpolationTimeMs;                                      
};


struct UAkComponent_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                
};


struct UAkComponent_SetListeners_Params
{
	TArray<class UAkComponent*>                        Listeners;                                                
};


struct UAkComponent_SetEarlyReflectionOrder_Params
{
	int                                                NewEarlyReflectionOrder;                                  
};


struct UAkComponent_SetAutoDestroy_Params
{
	bool                                               in_AutoDestroy;                                           
};


struct UAkComponent_SetAttenuationScalingFactor_Params
{
	float                                              Value;                                                    
};


struct UAkComponent_SeekOnEvent_Params
{
	struct FString                                     in_EventName;                                             
	int                                                in_iPosition;                                             
	int                                                ReturnValue;                                              
};


struct UAkComponent_PostTrigger_Params
{
	struct FString                                     Trigger;                                                  
};


struct UAkComponent_PostEventInRange_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	float                                              RangeSquare;                                              
};


struct UAkComponent_PostAssociatedAkEventInRange_Params
{
};


struct UAkComponent_PostAssociatedAkEvent_Params
{
	int                                                ReturnValue;                                              
};


struct UAkComponent_PostAkEventByName_Params
{
	struct FString                                     in_EventName;                                             
	int                                                ReturnValue;                                              
};


struct UAkComponent_PostAkEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	struct FString                                     in_EventName;                                             
	int                                                ReturnValue;                                              
};


struct UAkComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                              
};


struct UAkComponent_GetAkGameObjectName_Params
{
	struct FString                                     Name;                                                     
};


struct UAkGameplayStatics_WakeupFromSuspend_Params
{
};


struct UAkGameplayStatics_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                       
	class AActor*                                      Actor;                                                    
};


struct UAkGameplayStatics_UseEarlyReflections_Params
{
	class AActor*                                      Actor;                                                    
	class UAkAuxBus*                                   AuxBus;                                                   
	bool                                               Left;                                                     
	bool                                               Right;                                                    
	bool                                               floor;                                                    
	bool                                               Ceiling;                                                  
	bool                                               Back;                                                     
	bool                                               Front;                                                    
	bool                                               SpotReflectors;                                           
	struct FString                                     AuxBusName;                                               
};


struct UAkGameplayStatics_UnloadBankByName_Params
{
	struct FString                                     BankName;                                                 
};


struct UAkGameplayStatics_UnloadBank_Params
{
	class UAkAudioBank*                                Bank;                                                     
	struct FString                                     BankName;                                                 
};


struct UAkGameplayStatics_Suspend_Params
{
};


struct UAkGameplayStatics_StopProfilerCapture_Params
{
};


struct UAkGameplayStatics_StopPlayingID_Params
{
	int                                                PlayingID;                                                
};


struct UAkGameplayStatics_StopOutputCapture_Params
{
};


struct UAkGameplayStatics_StopAllAmbientSounds_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UAkGameplayStatics_StopAll_Params
{
};


struct UAkGameplayStatics_StopAkEventByID_Params
{
	int                                                ID;                                                       
};


struct UAkGameplayStatics_StopActor_Params
{
	class AActor*                                      Actor;                                                    
};


struct UAkGameplayStatics_StartProfilerCapture_Params
{
	struct FString                                     Filename;                                                 
};


struct UAkGameplayStatics_StartOutputCapture_Params
{
	struct FString                                     Filename;                                                 
};


struct UAkGameplayStatics_StartAllAmbientSounds_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UAkGameplayStatics_SpawnAkComponentAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UAkAudioEvent*                               AkEvent;                                                  
	class UAkAuxBus*                                   EarlyReflectionsBus;                                      
	struct FVector                                     Location;                                                 
	struct FRotator                                    Orientation;                                              
	bool                                               AutoPost;                                                 
	struct FString                                     EventName;                                                
	struct FString                                     EarlyReflectionsBusName;                                  
	bool                                               AutoDestroy;                                              
	class UAkComponent*                                ReturnValue;                                              
};


struct UAkGameplayStatics_ShowAKComponentPosition_Params
{
	bool                                               _IsShow;                                                  
};


struct UAkGameplayStatics_ShouldPostEvent_Params
{
	class UObject*                                     WorldContext;                                             
	struct FVector                                     VoicePosition;                                            
	bool                                               ReturnValue;                                              
};


struct UAkGameplayStatics_SetSwitchWithDummyActor_Params
{
	struct FName                                       SwitchGroup;                                              
	struct FName                                       SwitchState;                                              
};


struct UAkGameplayStatics_SetSwitch_Params
{
	struct FName                                       SwitchGroup;                                              
	struct FName                                       SwitchState;                                              
	class AActor*                                      Actor;                                                    
};


struct UAkGameplayStatics_SetState_Params
{
	struct FName                                       StateGroup;                                               
	struct FName                                       State;                                                    
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_SetRTPCValue_Params
{
	struct FName                                       RTPC;                                                     
	float                                              Value;                                                    
	int                                                InterpolationTimeMs;                                      
	class AActor*                                      Actor;                                                    
};


struct UAkGameplayStatics_SetRegionIpMute_Params
{
	bool                                               bMuted;                                                   
};


struct UAkGameplayStatics_SetPanningRule_Params
{
	EPanningRule                                       PanRule;                                                  
};


struct UAkGameplayStatics_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                
	class AActor*                                      Actor;                                                    
};


struct UAkGameplayStatics_SetOcclusionScalingFactor_Params
{
	float                                              ScalingFactor;                                            
};


struct UAkGameplayStatics_SetOcclusionRefreshInterval_Params
{
	float                                              RefreshInterval;                                          
	class AActor*                                      Actor;                                                    
};


struct UAkGameplayStatics_SetMultiplePositions_Params
{
	TArray<struct FTransform>                          InTransforms;                                             
	class UAkComponent*                                AkComponent;                                              
};


struct UAkGameplayStatics_SetBusConfig_Params
{
	struct FString                                     BusName;                                                  
	EAkChannelConfiguration                            ChannelConfiguration;                                     
};


struct UAkGameplayStatics_SeekOnEvent_Params
{
	class UAkAudioEvent*                               in_pAkEvent;                                              
	class AActor*                                      in_pActor;                                                
	int                                                in_iPosition;                                             
	struct FString                                     EventName;                                                
	bool                                               in_bSeekToNearestMarker;                                  
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_RefreshModDirectories_Params
{
};


struct UAkGameplayStatics_PostTrigger_Params
{
	struct FName                                       Trigger;                                                  
	class AActor*                                      Actor;                                                    
};


struct UAkGameplayStatics_PostEventWithVolume_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	class AActor*                                      Actor;                                                    
	bool                                               bStopWhenAttachedToDestroyed;                             
	struct FString                                     EventName;                                                
	float                                              Volume;                                                   
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_PostEventWithDummyActor_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	struct FString                                     EventName;                                                
	class UObject*                                     WorldContextObject;                                       
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_PostEventInRange_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	class AActor*                                      Actor;                                                    
	float                                              RangeSquare;                                              
	class UAkComponent*                                ReturnValue;                                              
};


struct UAkGameplayStatics_PostEventByName_Params
{
	struct FString                                     EventName;                                                
	class AActor*                                      Actor;                                                    
	bool                                               bStopWhenAttachedToDestroyed;                             
};


struct UAkGameplayStatics_PostEventAttached_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	class AActor*                                      Actor;                                                    
	struct FName                                       AttachPointName;                                          
	bool                                               bStopWhenAttachedToDestroyed;                             
	struct FString                                     EventName;                                                
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_PostEventAtLocationWithVolume_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	struct FVector                                     Location;                                                 
	struct FRotator                                    Orientation;                                              
	struct FString                                     EventName;                                                
	class UObject*                                     WorldContextObject;                                       
	float                                              Volume;                                                   
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_PostEventAtLocationByName_Params
{
	struct FString                                     EventName;                                                
	struct FVector                                     Location;                                                 
	struct FRotator                                    Orientation;                                              
	class UObject*                                     WorldContextObject;                                       
};


struct UAkGameplayStatics_PostEventAtLocation_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	struct FVector                                     Location;                                                 
	struct FRotator                                    Orientation;                                              
	struct FString                                     EventName;                                                
	class UObject*                                     WorldContextObject;                                       
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_PostEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  
	class AActor*                                      Actor;                                                    
	bool                                               bStopWhenAttachedToDestroyed;                             
	struct FString                                     EventName;                                                
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_MuteListener_Params
{
	class APlayerController*                           Controller;                                               
	int                                                WindowID;                                                 
};


struct UAkGameplayStatics_LoadInitBank_Params
{
};


struct UAkGameplayStatics_LoadBanks_Params
{
	TArray<class UAkAudioBank*>                        SoundBanks;                                               
	bool                                               SynchronizeSoundBanks;                                    
};


struct UAkGameplayStatics_LoadBankByName_Params
{
	struct FString                                     BankName;                                                 
};


struct UAkGameplayStatics_LoadBank_Params
{
	class UAkAudioBank*                                Bank;                                                     
	struct FString                                     BankName;                                                 
};


struct UAkGameplayStatics_IsGame_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UAkGameplayStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                              
};


struct UAkGameplayStatics_GetSourcePlayPosition_Params
{
	int                                                AkEvent;                                                  
	int                                                ReturnValue;                                              
};


struct UAkGameplayStatics_GetOcclusionScalingFactor_Params
{
	float                                              ReturnValue;                                              
};


struct UAkGameplayStatics_GetDefaultListenerLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     OutLocation;                                              
	bool                                               ReturnValue;                                              
};


struct UAkGameplayStatics_GetAkComponent_Params
{
	class USceneComponent*                             AttachToComponent;                                        
	struct FName                                       AttachPointName;                                          
	struct FVector                                     Location;                                                 
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
	class UAkComponent*                                ReturnValue;                                              
};


struct UAkGameplayStatics_ClearBanks_Params
{
};


struct UAkGameplayStatics_AKSetRTPCValue_Params
{
	struct FString                                     RTPC;                                                     
	float                                              Value;                                                    
	bool                                               in_bBypassInternalValueInterpolation;                     
};


struct UAkGameplayStatics_AddOutputCaptureMarker_Params
{
	struct FString                                     MarkerText;                                               
};


struct UAkGameplayStatics_AddModDirectory_Params
{
	struct FString                                     Path;                                                     
};


struct UAkRoomComponent_RemoveSpatialAudioRoom_Params
{
};


struct UAkRoomComponent_AddSpatialAudioRoom_Params
{
};


struct UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params
{
};


struct UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params
{
};


struct UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params
{
};


struct UAudioOfflineVisual_StartBeatOffset_Params
{
	float                                              Offset;                                                   
};


struct UAudioOfflineVisual_StartBeat_Params
{
};


struct UAudioOfflineVisual_ResetBeatTime_Params
{
};


struct UAudioOfflineVisual_InitWithBeatTime_Params
{
	TArray<float>                                      Datas;                                                    
};


struct UAudioOfflineVisual_Init_Params
{
	TArray<struct FAudioOfflineVisualBeatData>         Datas;                                                    
};


struct UAudioOfflineVisual_GetCurrentBeatByCustomTime_Params
{
	float                                              InBeatSecondTime;                                         
	struct FAudioOfflineVisualBeatData                 Result;                                                   
	bool                                               ReturnValue;                                              
};


struct UAudioOfflineVisual_GetCurrentBeat_Params
{
	struct FAudioOfflineVisualBeatData                 Result;                                                   
	bool                                               ReturnValue;                                              
};


struct UAudioVisual_TryInit_Params
{
	bool                                               ReturnValue;                                              
};


struct UAudioVisual_Reset_Params
{
};


struct UAudioVisual_IsInited_Params
{
	bool                                               ReturnValue;                                              
};


struct UAudioVisual_GetRMS_Params
{
	float                                              ReturnValue;                                              
};


struct UAudioVisual_GetInstantEnergy_Params
{
	float                                              ReturnValue;                                              
};


struct UAudioVisual_GetFrequencyVol_Params
{
	EFrequencyRange                                    freqRange;                                                
	float                                              ReturnValue;                                              
};


struct UAudioVisual_GetFrequencyDataWithBin_Params
{
	TArray<float>                                      pFreqData;                                                
	EFrequencyRange                                    freqRange;                                                
	int                                                nBin;                                                     
	bool                                               bAbsolute;                                                
	int                                                ReturnValue;                                              
};


struct UAudioVisual_GetFrequencyData_Params
{
	TArray<float>                                      pFreqData;                                                
	EFrequencyRange                                    freqRange;                                                
	int                                                ReturnValue;                                              
};


struct UAudioVisual_GetAudioSamplesWithBin_Params
{
	TArray<float>                                      pAudioData;                                               
	int                                                nBin;                                                     
	bool                                               bAbsolute;                                                
	int                                                ReturnValue;                                              
};


struct UAudioVisual_GetAudioSamples_Params
{
	TArray<float>                                      pAudioData;                                               
	int                                                ReturnValue;                                              
};


struct UAudioVisualBlueprintLibrary_GetAudioVisual_Params
{
	class UObject*                                     Outer;                                                    
	class UAudioVisual*                                ReturnValue;                                              
};


struct UAudioVisualBlueprintLibrary_GetAudioOfflineVisual_Params
{
	class UObject*                                     Outer;                                                    
	class UAudioOfflineVisual*                         ReturnValue;                                              
};

}

