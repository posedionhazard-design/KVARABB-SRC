#pragma once


 
namespace SDK
{






class AAkAcousticPortal : public AVolume
{
public:
	float                                              Gain;                                                     
	EAkAcousticPortalState                             InitialState;                                             
	unsigned char                                      UnknownData00[0xB];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return pStaticClass;
	}


	void OpenPortal();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};




class UAkAcousticTexture : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return pStaticClass;
	}

};




class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             
	class UAkComponent*                                AkComponent;                                              
	bool                                               StopWhenOwnerIsDestroyed;                                 
	bool                                               AutoPost;                                                 
	unsigned char                                      UnknownData00[0x46];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return pStaticClass;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};




class UAkAreaCheckComponent : public UActorComponent
{
public:
	TMap<ECustomAKAreaType, struct FAKAreaVolumeArray> RegistedAreaVolume;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAreaCheckComponent");
		return pStaticClass;
	}


	void UnRegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType);
	void RegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType);
	bool CheckVoiceAvailable(const struct FVector& VoicePostion);
};




class AAkAreaCheckVolumeBase : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAreaCheckVolumeBase");
		return pStaticClass;
	}


	void UnRegisterFromAreaCheck();
	void RegisterToAreaCheck();
	bool IsInsideVolume(const struct FVector& OrignPosition);
	ECustomAKAreaType GetAKAreaType();
};




class AAkAreaCheckSphereVolume : public AAkAreaCheckVolumeBase
{
public:
	class USphereComponent*                            SphereComponent;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAreaCheckSphereVolume");
		return pStaticClass;
	}

};




class AAkAreaCheckVolume : public AAkAreaCheckVolumeBase
{
public:
	class UBoxComponent*                               CollisionComponent;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAreaCheckVolume");
		return pStaticClass;
	}

};




class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                 
	unsigned char                                      UnknownData00[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioBank");
		return pStaticClass;
	}

};




class UAkAudioDeviceSettings : public UObject
{
public:
	int                                                SuperHighDefaultPoolSize;                                 
	int                                                SuperHighEngineDefaultPoolSize;                           
	int                                                HighDefaultPoolSize;                                      
	int                                                HighEngineDefaultPoolSize;                                
	int                                                LowDefaultPoolSize;                                       
	int                                                LowEngineDefaultPoolSize;                                 
	int                                                DefaultCommandQueueSize;                                  
	int                                                DefaultBluetoothDelay;                                    
	float                                              DefaultBluetoothErrThres;                                 
	float                                              DefaultBluetoothErrRatio;                                 
	float                                              DefaultBluetoothMaxTime;                                  
	bool                                               bEnableSilence;                                           
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioDeviceSettings");
		return pStaticClass;
	}


	void InitConfig();
};




class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             
	float                                              MaxAttenuationRadius;                                     
	bool                                               IsInfinite;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MinimumDuration;                                          
	float                                              MaximumDuration;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return pStaticClass;
	}

};




class UAkAudioMonitor : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioMonitor");
		return pStaticClass;
	}


	static void UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList);
	static void Update(float DeltaTime);
	static void SetUpdateInterval(float NewUpdateInterval);
	static void SetMonitorFlag(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags);
	static void OnReportError(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam);
	static void OnAkAudioEventTrigger(const struct FString& Name, int code);
	static void OnAkAudioBankTrigger(bool bUnload, const struct FString& BankName, int8_t RefCount);
	static bool IsMonitorInit();
	static bool IsAkOutOfAttenuation(class UAkComponent* AkComp, float Attenuation);
	static void InitMonitorDataPtr();
	static TArray<uint16_t> GetTotalPlayRecord();
	static struct FString GetSwitchValue(class UAkComponent* Component, const struct FString& SwitchName);
	static TArray<struct FString> GetSwitchNames(class UAkComponent* Component);
	static float GetRTPCValueByID(class UAkComponent* Component, uint32_t RTPCID);
	static float GetRTPCValue(class UAkComponent* Component, const struct FString& RTPCName);
	static TArray<struct FString> GetRTPCNames(class UAkComponent* Component);
	static TArray<uint32_t> GetRTPCIDs(class UAkComponent* Component);
	static TMap<unsigned char, struct FAKErrorInfo> GetReportErrorRecord();
	static struct FVector GetPostion(class UAkComponent* Component);
	static TArray<int> GetPlayingID(class UAkComponent* Component);
	static struct FString GetPlayEventName(class UAkComponent* Component, int PlayID);
	static TMap<struct FString, unsigned char> GetObjectPlayRecord();
	static struct FString GetObjectNameByObjectID(uint64_t ObjectID);
	static class UAkAudioMonitorData* GetMonitorDataPtr();
	static bool GetLEngineDefaultPoolMemoryUsed(int* OutReserved, int* OutUsed);
	static struct FString GetGlobalSwitchValue(const struct FString& SwitchName);
	static TArray<struct FString> GetGlobalSwitchNames();
	static float GetGlobalRTPCValue(const struct FString& RTPCName);
	static TArray<struct FString> GetGlobalRTPCNames();
	static void GetEventList(TArray<struct FString>* OutRes);
	static class UAkAudioEvent* GetEventInMemoryByName(TArray<class UAkAudioEvent*> AllAk, const struct FString& AkName);
	static TMap<uint32_t, struct FAKErrorInfo> GetDetailErrorCodeRecord();
	static bool GetDefaultPoolMemoryUsed(int* OutReserved, int* OutUsed);
	static void GetBankRefList(TMap<struct FString, int8_t>* OutRes);
	static TArray<struct FName> GetAllEventNameInMemory(class UObject* WorldContent);
	static void GetAllEventInMemory(class UObject* WorldContent, TArray<class UAkAudioEvent*>* AllAk);
	static void GetAllAkComponentFormDevice(TArray<class UAkComponent*>* AkList, TArray<class UAkComponent*>* recycledAkList);
	static int GetActiveObjCount();
	static int GetActiveEventCount();
	static int GetActiveBankCount();
};




class UAkAudioMonitorData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	unsigned char                                      UnknownData01[0x50];                                      
	TMap<uint32_t, struct FString>                     ErrorCodeMsgMap;                                          
	TMap<uint32_t, struct FString>                     NotifyCodeMsgMap;                                         
	unsigned char                                      UnknownData02[0x80];                                      
	TArray<uint16_t>                                   TotalPlayCountRecord;                                     
	TMap<struct FString, unsigned char>                ObjectPlayCountRecord;                                    
	TMap<unsigned char, struct FAKErrorInfo>           AkErrorRecord;                                            
	TMap<uint32_t, struct FAKErrorInfo>                AkDetailErrorCodeRecord;                                  
	struct FScriptMulticastDelegate                    AkAudioDetailErrorCodeDelegate;                           
	struct FScriptMulticastDelegate                    AkAudioEventTrigger;                                      
	float                                              nPassedTime;                                              
	float                                              nUpdateInterval;                                          
	TMap<struct FString, int8_t>                       BankRefList;                                              
	TArray<struct FString>                             EventList;                                                
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioMonitorData");
		return pStaticClass;
	}


	void UpdateEventList(bool bStop, const struct FString& InEventName);
	void UpdateBankRefList(bool bUnload, const struct FString& BankName, int8_t RefCount);
	void UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList);
	void SetMonitorFlagInternal(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags);
	void OnReportErrorInternal(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam);
	void Initialize();
};




class UAkAudioVisualComponent : public USceneComponent
{
public:
	struct FString                                     BankName;                                                 
	struct FString                                     EventName;                                                
	EFrequencyRange                                    RangeType;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BinNumber;                                                
	unsigned char                                      UnknownData01[0x1010];                                    
	bool                                               UseOfflineData;                                           
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FAudioOfflineVisualBeatData>         OfflineData;                                              
	unsigned char                                      UnknownData03[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAudioVisualComponent");
		return pStaticClass;
	}


	void StartOfflineTime();
	void ResetOfflineTime();
	void OnTickVisualInfo(TArray<float> VisualInfo);
	void OnTickOfflineVisualInfo(const struct FAudioOfflineVisualBeatData& VisualInfo);
	void InitOfflineDataWithBeatTime(TArray<float> Datas);
	void InitOfflineData(TArray<struct FAudioOfflineVisualBeatData> Datas);
	bool GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result);
};




class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkAuxBus");
		return pStaticClass;
	}

};




class UAkComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    
	struct FString                                     EarlyReflectionAuxBusName;                                
	int                                                EarlyReflectionOrder;                                     
	float                                              EarlyReflectionBusSendGain;                               
	float                                              EarlyReflectionMaxPathLength;                             
	unsigned char                                      UnknownData00[0x4];                                       
	unsigned char                                      EnableSpotReflectors : 1;                                 
	unsigned char                                      DrawFirstOrderReflections : 1;                            
	unsigned char                                      DrawSecondOrderReflections : 1;                           
	unsigned char                                      DrawHigherOrderReflections : 1;                           
	bool                                               StopWhenOwnerDestroyed;                                   
	unsigned char                                      bIsUpdateEmmiterTransform : 1;                            
	unsigned char                                      bAllIsInstanceSound : 1;                                  
	unsigned char                                      UnknownData01[0x1];                                       
	float                                              AttenuationScalingFactor;                                 
	float                                              OcclusionRefreshInterval;                                 
	unsigned char                                      UnknownData02[0x4];                                       
	class UAkAudioEvent*                               AkAudioEvent;                                             
	struct FString                                     EventName;                                                
	struct FAkRangedEmitterInfo                        RangedEmitterInfo;                                        
	unsigned char                                      UnknownData03[0x208];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkComponent");
		return pStaticClass;
	}


	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName);
	void UpdateGameObjectPosition();
	void TriggerEventWithRangedEmitter(bool bEnable);
	void StopPlayingID(int StopEventID);
	void StopEventInRange();
	void Stop();
	int SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValueGlobally(const struct FString& RTPC, float Value);
	void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetEarlyReflectionOrder(int NewEarlyReflectionOrder);
	void SetAutoDestroy(bool in_AutoDestroy);
	void SetAttenuationScalingFactor(float Value);
	int SeekOnEvent(const struct FString& in_EventName, int in_iPosition);
	void PostTrigger(const struct FString& Trigger);
	void PostEventInRange(class UAkAudioEvent* AkEvent, float RangeSquare);
	void PostAssociatedAkEventInRange();
	int PostAssociatedAkEvent();
	int PostAkEventByName(const struct FString& in_EventName);
	int PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName);
	float GetAttenuationRadius();
	void GetAkGameObjectName(struct FString* Name);
};




class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return pStaticClass;
	}


	static void WakeupFromSuspend();
	static void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	static void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName);
	static void UnloadBankByName(const struct FString& BankName);
	static void UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	static void Suspend();
	static void StopProfilerCapture();
	static void StopPlayingID(int PlayingID);
	static void StopOutputCapture();
	static void StopAllAmbientSounds(class UObject* WorldContextObject);
	static void StopAll();
	static void StopAkEventByID(int ID);
	static void StopActor(class AActor* Actor);
	static void StartProfilerCapture(const struct FString& Filename);
	static void StartOutputCapture(const struct FString& Filename);
	static void StartAllAmbientSounds(class UObject* WorldContextObject);
	static class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy);
	static void ShowAKComponentPosition(bool _IsShow);
	static bool ShouldPostEvent(class UObject* WorldContext, const struct FVector& VoicePosition);
	static void SetSwitchWithDummyActor(const struct FName& SwitchGroup, const struct FName& SwitchState);
	static void SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	static int SetState(const struct FName& StateGroup, const struct FName& State);
	static void SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	static void SetRegionIpMute(bool bMuted);
	static void SetPanningRule(EPanningRule PanRule);
	static void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	static void SetOcclusionScalingFactor(float ScalingFactor);
	static void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	static void SetMultiplePositions(TArray<struct FTransform> InTransforms, class UAkComponent* AkComponent);
	static void SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration);
	static int SeekOnEvent(class UAkAudioEvent* in_pAkEvent, class AActor* in_pActor, int in_iPosition, const struct FString& EventName, bool in_bSeekToNearestMarker);
	static void RefreshModDirectories();
	static void PostTrigger(const struct FName& Trigger, class AActor* Actor);
	static int PostEventWithVolume(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName, float Volume);
	static int PostEventWithDummyActor(class UAkAudioEvent* AkEvent, const struct FString& EventName, class UObject* WorldContextObject);
	static class UAkComponent* PostEventInRange(class UAkAudioEvent* AkEvent, class AActor* Actor, float RangeSquare);
	static void PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	static int PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	static int PostEventAtLocationWithVolume(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject, float Volume);
	static void PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	static int PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
	static int PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	static void MuteListener(class APlayerController* Controller, int WindowID);
	static void LoadInitBank();
	static void LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	static void LoadBankByName(const struct FString& BankName);
	static void LoadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	static bool IsGame(class UObject* WorldContextObject);
	static bool IsEditor();
	static int GetSourcePlayPosition(int AkEvent);
	static float GetOcclusionScalingFactor();
	static bool GetDefaultListenerLocation(class UObject* WorldContextObject, struct FVector* OutLocation);
	static class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType);
	static void ClearBanks();
	static void AKSetRTPCValue(const struct FString& RTPC, float Value, bool in_bBypassInternalValueInterpolation);
	static void AddOutputCaptureMarker(const struct FString& MarkerText);
	static void AddModDirectory(const struct FString& Path);
};




class UAkLateReverbComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   
	struct FString                                     AuxBusName;                                               
	float                                              SendLevel;                                                
	float                                              FadeRate;                                                 
	float                                              Priority;                                                 
	unsigned char                                      UnknownData00[0x1C];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return pStaticClass;
	}

};




class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	class UAkAuxBus*                                   AuxBus;                                                   
	struct FString                                     AuxBusName;                                               
	float                                              SendLevel;                                                
	float                                              FadeRate;                                                 
	float                                              Priority;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	class UAkLateReverbComponent*                      LateReverbComponent;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return pStaticClass;
	}

};




class UAkRoomComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	float                                              Priority;                                                 
	unsigned char                                      UnknownData01[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return pStaticClass;
	}


	void RemoveSpatialAudioRoom();
	void AddSpatialAudioRoom();
};




class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FFilePath                                   WwiseProjectPath;                                         
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             
	struct FFilePath                                   WwiseMacInstallationPath;                                 
	bool                                               SuppressWwiseProjectPathWarnings;                         
	bool                                               UseAlternateObstructionOcclusionFeature;                  
	unsigned char                                      UnknownData01[0x3E];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSettings");
		return pStaticClass;
	}

};




class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                      
	class UAkLateReverbComponent*                      LateReverb;                                               
	class UAkRoomComponent*                            Room;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return pStaticClass;
	}

};




class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   
	struct FString                                     AuxBusName;                                               
	class UAkAcousticTexture*                          AcousticTexture;                                          
	float                                              DistanceScalingFactor;                                    
	float                                              Level;                                                    
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSpotReflector");
		return pStaticClass;
	}

};




class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	TArray<struct FAkPoly>                             AcousticPolys;                                            
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return pStaticClass;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};




class UAudioOfflineDataRecorder : public USceneComponent
{
public:
	struct FString                                     BankName;                                                 
	struct FString                                     EventName;                                                
	EFrequencyRange                                    RangeType;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BinNumber;                                                
	TArray<float>                                      BeatTimeArray;                                            
	TArray<struct FAudioOfflineVisualBeatData>         Result;                                                   
	unsigned char                                      UnknownData01[0x1028];                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioOfflineDataRecorder");
		return pStaticClass;
	}

};




class UAudioOfflineVisual : public UObject
{
public:
	TArray<struct FAudioOfflineVisualBeatData>         OfflineData;                                              
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioOfflineVisual");
		return pStaticClass;
	}


	void StartBeatOffset(float Offset);
	void StartBeat();
	void ResetBeatTime();
	void InitWithBeatTime(TArray<float> Datas);
	void Init(TArray<struct FAudioOfflineVisualBeatData> Datas);
	bool GetCurrentBeatByCustomTime(float InBeatSecondTime, struct FAudioOfflineVisualBeatData* Result);
	bool GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result);
};




class UAudioVisual : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1000];                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioVisual");
		return pStaticClass;
	}


	bool TryInit();
	void Reset();
	bool IsInited();
	float GetRMS();
	float GetInstantEnergy();
	float GetFrequencyVol(EFrequencyRange freqRange);
	int GetFrequencyDataWithBin(EFrequencyRange freqRange, int nBin, bool bAbsolute, TArray<float>* pFreqData);
	int GetFrequencyData(EFrequencyRange freqRange, TArray<float>* pFreqData);
	int GetAudioSamplesWithBin(int nBin, bool bAbsolute, TArray<float>* pAudioData);
	int GetAudioSamples(TArray<float>* pAudioData);
};




class UAudioVisualBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.AudioVisualBlueprintLibrary");
		return pStaticClass;
	}


	static class UAudioVisual* GetAudioVisual(class UObject* Outer);
	static class UAudioOfflineVisual* GetAudioOfflineVisual(class UObject* Outer);
};




class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return pStaticClass;
	}

};




class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    
	unsigned char                                      bPlayOnReverse : 1;                                       
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return pStaticClass;
	}

};




class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return pStaticClass;
	}

};




class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return pStaticClass;
	}

};




class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	class UAkAudioEvent*                               Event;                                                    
	bool                                               StopAtSectionEnd;                                         
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     EventName;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return pStaticClass;
	}

};




class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 
	unsigned char                                      bIsAMasterTrack : 1;                                      
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return pStaticClass;
	}

};




class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return pStaticClass;
	}

};




class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     Name;                                                     
	struct FRichCurve                                  FloatCurve;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return pStaticClass;
	}

};




class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return pStaticClass;
	}

};


}

