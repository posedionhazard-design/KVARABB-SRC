#pragma once


 
namespace SDK
{






class UCameraDeviceSpringArmComponent : public UCustomSpringArmComponent
{
public:
	bool                                               bCameraDeviceMode;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	TWeakObjectPtr<class AActor>                       TargetPawn;                                               
	unsigned char                                      UnknownData01[0xC];                                       
	float                                              DebugAngle;                                               
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CameraDeviceSpringArmComponent");
		return pStaticClass;
	}

};




class ACreateBackpackRepActor : public ABackpackRepActor
{
public:
	int                                                CustomItemDataInitFlag;                                   
	int                                                CustomItemIDMin;                                          
	int                                                CustomItemIDMax;                                          
	bool                                               NeedUpdateCustomItemList;                                 
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreateBackpackRepActor");
		return pStaticClass;
	}


	void InitCustomItemDataInfo();
	void CustomItemDataInitComplete();
};




class UCreativeAbilitySystemComponent : public USAbilitySystemComponent
{
public:
	class ASTExtraPlayerController*                    PlayerController;                                         
	class ASTExtraPlayerCharacter*                     PlayerCharacter;                                          
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  GhostBuildingTransform;                                   
	TArray<class AActor*>                              GetLocationActorsToIgnore;                                
	float                                              LandOnOffsetZ;                                            
	float                                              LandHitPointZ;                                            
	float                                              LandHitDeltaZ;                                            
	float                                              WaterHeight;                                              
	bool                                               bForceLandOnGround;                                       
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                LandGroundType;                                           
	bool                                               bUseLandOnOffsetZ;                                        
	bool                                               bSnapTransValid;                                          
	bool                                               bSnapGridEnable;                                          
	unsigned char                                      UnknownData02[0x5];                                       
	class AActor*                                      SnapGrid;                                                 
	bool                                               bIgnoreLandOn;                                            
	bool                                               bIgnoreWaterHeightCheck;                                  
	bool                                               bIgnoreCameraRotate;                                      
	unsigned char                                      UnknownData03[0x1];                                       
	struct FRotator                                    ModifiedRotation;                                         
	struct FVector                                     ModifiedScale;                                            
	struct FRotator                                    RelativeRotation;                                         
	struct FVector                                     RelativeLocation;                                         
	struct FVector                                     RelativeScale;                                            
	unsigned char                                      UnknownData04[0x8];                                       
	struct FTransform                                  SnapBaseTransform;                                        
	struct FVector                                     DeviceLocationOffset;                                     
	struct FVector                                     InstanceBoxCenter;                                        
	struct FVector                                     InstanceBoxExtent;                                        
	bool                                               bSpecificPlaceStartEnd;                                   
	unsigned char                                      UnknownData05[0x3];                                       
	struct FVector                                     PlaceRayStart;                                            
	struct FVector                                     PlaceRayEnd;                                              
	bool                                               bNeedGetBuildDistance;                                    
	bool                                               bOpenLandPosCheckDebug;                                   
	unsigned char                                      UnknownData06[0x2];                                       
	struct FVector                                     OverridePos;                                              
	struct FRotator                                    OverrideRot;                                              
	bool                                               bOverrideBuild;                                           
	unsigned char                                      UnknownData07[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAbilitySystemComponent");
		return pStaticClass;
	}


	void UpdateGridGhostBuildingLocation(float X, float Y, float Z);
	void UpdateGhostBuildingTransform();
	void SetSnapTargetTransform(const struct FTransform& SnapTargetTransform);
	void SetOverrideBuild(const struct FVector& Position, const struct FRotator& Rotation);
	void SetLuaGhostBuildingTransformScale(float X, float Y, float Z);
	void SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch);
	void SetLuaGhostBuildingTransformLocation(float X, float Y, float Z);
	void LuaGhostBuildingInstaUpdate();
	float GetSnappedLocAxisZ(float Loc, float Base);
	float GetSnappedLocAxis(float Value, int AxisType);
	int GetSetupBuildingID();
	class ASTExtraPlayerController* GetPlayerController();
	bool GetLuaSnapTargetTransform();
	float GetLuaInstanceBoundingBox();
	struct FTransform GetGhostBuildingTransform();
	struct FString GetBuildingInstanceID();
	float GetBuildDistance();
	void ClearOverrideBuild();
};




class UCreativeActorDataManager : public USTExtraManagerBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	int                                                SingleSerializeNum;                                       
	struct FCreativeActorNodeContainer                 ActorDataContainer;                                       
	struct FCreativeNeedInitAbstractClassIDInfo        NeedInitAbstractClassIDInfo;                              
	unsigned char                                      UnknownData01[0x64];                                      
	float                                              DataNodePullInterval;                                     
	int                                                SinglePullDataNodeNum;                                    
	int                                                TotalPullDataNodeNum;                                     
	float                                              DataNodePullTimeroutInterval;                             
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeActorDataManager");
		return pStaticClass;
	}


	void SetNeedInitAbstractClassIDList(TArray<int> InNeedInitAbstractClassIDList, const struct FString& InAuthorID);
	void SetActorDataNodes(TArray<struct FCreativeActorDataNode> ActorDataNodes);
	void RemoveActorData(uint32_t ID, unsigned char Type);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnRep_NeedInitAbstractClassIDList();
	void OnPostSetLuaEventBridgeInstance();
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	TArray<struct FCreativeActorDataNode> GetActorDataNodes(TArray<uint32_t> DataHashKeys);
	bool GetActorDataContent(uint32_t ID, unsigned char Type, TArray<unsigned char>* OutContent);
	static class UCreativeActorDataManager* Get(class UObject* WorldContext);
	void ChangeActorData(uint32_t ID, unsigned char Type, TArray<unsigned char> Content);
	void CallOnReceivePreActorDataRemove(uint32_t ID, unsigned char Type);
	void CallOnReceivePostActorDataChange(uint32_t ID, unsigned char Type, TArray<unsigned char> Content);
	void CallOnReceivePostActorDataAdd(uint32_t ID, unsigned char Type, TArray<unsigned char> Content);
	void AddActorData(uint32_t ID, unsigned char Type, TArray<unsigned char> Content);
};




class UCreativeModeActorInteractionComponent : public ULuaActorComponent
{
public:
	struct FString                                     HitComponentName;                                         
	bool                                               bSectorCheckEnabled;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SectorCheckCD;                                            
	bool                                               bTransformCrossHairCheckEnabled;                          
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              TransformCrossHairCheckCD;                                
	bool                                               bPickCrossHairCheckEnabled;                               
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              PickCrossHairCheckCD;                                     
	unsigned char                                      UnknownData03[0x10];                                      
	class APawn*                                       PlayerCharacter;                                          
	class ASTExtraPlayerController*                    PlayerController;                                         
	TArray<class AActor*>                              CrossHairCheckIgnoreActorArray;                           
	TArray<class AActor*>                              uTransformCrossHairCheckIgnoreActorArray;                 
	TArray<class AActor*>                              PickCrossHairCheckIgnoreActorArray;                       
	TArray<class UClass*>                              PickActorClassArray;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeActorInteractionComponent");
		return pStaticClass;
	}


	void SortCanEditParamsObjs();
	void SetCrossHairTransformObjInstanceID(const struct FString& InstanceID);
	void SetCrossHairSelectedObjInstanceID(const struct FString& InstanceID);
	void SetCrossHairPickActor(class AActor* PickActor);
	void SectorCheckImplement(float CheckDistance, float CheckAngle);
	float GetSectorCheckIntervalCfg();
	float GetSectorCheckDistance();
	float GetSectorCheckAngle();
	float GetPlayerHalfHeight();
	class ASTExtraPlayerController* GetPlayerController();
	float GetCrossHairTransformDistanceCfg();
	float GetCrossHairPickDistanceCfg();
	float GetCrossHairCheckIntervalCfg();
	float GetCrossHairCheckDistanceCfg();
	void CrossHairCheckImplement(float Distance);
	void ClearCanEditParamsObjs();
	void AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance);
};




class UCreativeModeManagerBase : public USTExtraManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeManagerBase");
		return pStaticClass;
	}

};




class UCreativeAdaptiveSchedulManager : public UCreativeModeManagerBase
{
public:
	bool                                               bOpenLuaProfile;                                          
	bool                                               bOpenProfile;                                             
	bool                                               bOpenFuncCPUProfile;                                      
	unsigned char                                      UnknownData00[0x5D];                                      
	TMap<struct FString, int>                          ProjectTagMap;                                            
	TMap<struct FString, int>                          LuaPathTagMap;                                            
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAdaptiveSchedulManager");
		return pStaticClass;
	}


	void SetObjectProfile(bool bOpen);
	void SetLuaProfile(bool bOpen);
	int RecordFunctionStart(const struct FString& ClassName, const struct FString& FunctionName);
	void RecordFunctionEnd(const struct FString& ClassName, const struct FString& FunctionName, int Cycles);
	int LuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName);
	void LogOutputObjectMemoryInfo(bool bClear);
	void LogOutputLuaFunctionCallInfo(bool bClear);
	TMap<int, int64_t> LogoutLuaRecord();
	static bool LLMEnabled();
	int InitTagIfNotExist(const struct FString& TagName);
	int InitNewLuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName);
	static uint64_t GetPureLuaUsedBytes();
	static uint64_t GetLuaUsedBytes();
	static class UCreativeAdaptiveSchedulManager* Get(class UObject* WorldContext);
	void AfterDead(int SpecType);
};




class UCreativeAnimInstance : public USTExtraAnimInstanceBase
{
public:
	float                                              MoveVelocityInterpSpeed;                                  
	bool                                               bFlyBuilding;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     C_ActualMoveVelocity;                                     
	float                                              C_FlyMaxSpeed;                                            
	bool                                               C_SkillFlying;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              RootAimYaw;                                               
	float                                              C_AimOffsetAdditiveAlpha;                                 
	bool                                               bIsProne;                                                 
	unsigned char                                      UnknownData02[0xB];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAnimInstance");
		return pStaticClass;
	}

};




class UCreativeLuaSignalObjectBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData01[0x8];                                       
	class UGameLuaAPI*                                 GameLuaAPI;                                               
	TMap<int, struct FCreativeSignalEventInfo>         SignalEventInfoMap;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaSignalObjectBase");
		return pStaticClass;
	}


	void TryBeginPlay();
	void SetLuaFilePath(const struct FString& FilePath);
	void RemoveCommonEvent(int EventHandle);
	void ReceivePostBeginPlay();
	void ReceiveBeginPlay();
	void HookObject();
	void ClearAllCommonEvent();
	void AddCommonEvent(const struct FString& EventType, const struct FString& EventID, const struct FString& FunctionName);
};




class UCreativeApiObject : public UCreativeLuaSignalObjectBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	struct FString                                     ModuleName;                                               
	TArray<struct FString>                             CrossVMAPIs;                                              
	TArray<struct FString>                             UGCVMAPIs;                                                
	struct FString                                     UGCVMAPILuaFilePath;                                      
	bool                                               bEnableRegisterCClosureApi;                               
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeApiObject");
		return pStaticClass;
	}


	void SetModuleName(const struct FString& NewName);
	struct FString GetModuleName();
};




class UCreativeAssetManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x1];                                       
	bool                                               bColorISMEnable;                                          
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                CustomEditMaterialId;                                     
	unsigned char                                      UnknownData02[0x110];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAssetManager");
		return pStaticClass;
	}


	bool RemoveAssetInfo(int AssetId);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveInitAssetInfo(int AssetId);
	void ReceiveGetCustomAssetAsyncWithStringForManage(const struct FString& CustomAssetKey);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnCustomAssetLoadComplete(const struct FString& CustomAssetKey, class UObject* LoadObject);
	struct FString GetObbyMeshPath(int AssetId);
	struct FString GetMaterialPath(int MaterialID);
	void GetCustomAssetAsyncWithStringForManage(const struct FString& CustomAssetKey, const struct FString& InputString, const struct FScriptDelegate& AssetLoadSuccessDelegate);
	static class UCreativeAssetManager* Get(class UObject* WorldContext);
	void AddAssetInfo(int AssetId, const struct FCreativeAssetInfo& AssetInfo);
};




class UCreativeAudioApiObject : public UCreativeApiObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAudioApiObject");
		return pStaticClass;
	}

};




class UCreativeAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAudioBlueprintFunctionLibrary");
		return pStaticClass;
	}


	static bool SaveWemToConvert(TArray<unsigned char> WemData, const struct FString& SavePath);
	static void RegisterWwiseBaseDir(const struct FString& BaseDir);
	static float GetWavLength(TArray<unsigned char> WavData);
	static float GetMp3Length(TArray<unsigned char> Mp3Data);
	static void GetAudioWaveform(uint32_t WemMediaID, float SampleInterval, const struct FScriptDelegate& Callback);
};




class UCreativeAutoGenComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAutoGenComponent");
		return pStaticClass;
	}


	TArray<unsigned char> GetNodeSegmentContent(struct FCreativeAutoGenItemDataSegment* Segment);
	bool AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeAutoGenDataSegment* Segment);
};




class UCreativeModeBackpackUtils : public UBackpackUtilsClassical
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBackpackUtils");
		return pStaticClass;
	}


	static int ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum);
	static int GetItemMaxCount(class UBackpackComponent* BackpackComponent, int resID);
	static void AddAIAvatarItem(class UBackpackComponent* BackpackComponent, int ID, int Color, int Pattern, int Num);
};




class UCreativeBaseWidget : public ULuaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bOpenZOrderBatch;                                         
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     ZOrderInstanceID;                                         
	int                                                ZOrderOriginalLayer;                                      
	bool                                               bAnimationIsPlaying;                                      
	unsigned char                                      UnknownData02[0xAB];                                      
	TArray<class UCreativeBaseWidget*>                 FollowerWidgets;                                          
	float                                              TickLimit;                                                
	unsigned char                                      UnknownData03[0x4];                                       
	bool                                               bAnimationForceVolatileEnable;                            
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              EndForceVolatileDelayTime;                                
	unsigned char                                      UnknownData05[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBaseWidget");
		return pStaticClass;
	}


	void StopCustomAnimation(bool bReset);
	void SetZOrderBatchData(const struct FString& InInstanceID, int InOriginalLayer);
	void SetEndForceVolatileDelayTime(float InDelayTime);
	void SetAnimationForceVolatileEnable(bool bEnable);
	void ResumeCustomAnimation();
	void PlayCustomAnimation(const struct FCreativeUITweenInfo& InTweenInfo, const struct FCreativeUIAnimationGoal& InGoal);
	void PauseCustomAnimation();
	bool IsCustomAnimationPlaying();
	bool IsCustomAnimationPaused();
	struct FVector2D GetZOrderBatchSize();
};




class UCreativeBinaryDataManager : public USTExtraManagerBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	uint32_t                                           InitBinaryDataSize;                                       
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBinaryDataManager");
		return pStaticClass;
	}


	void SetInitBinaryDataSize(uint32_t DataSize);
	void ReceiveOnPreLoadMap(const struct FString& MapName);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void ReceiveOnPostLoadMapWithWorld(class UWorld* World);
	void OnRep_InitBinaryDataSize();
	void OnPreLoadMap(const struct FString& MapName);
	void OnPostSetLuaEventBridgeInstance();
	void OnPostLoadMapWithWorld(class UWorld* World);
	uint32_t GetInitBinaryDataSize();
	static class UCreativeBinaryDataManager* Get(class UObject* WorldContext);
};




class UCreativeBlockyLuaManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, struct FString>               BindStubFuncMap;                                          
	unsigned char                                      UnknownData00[0x1];                                       
	bool                                               bConfigInited;                                            
	bool                                               bDynamicConfigInited;                                     
	unsigned char                                      UnknownData01[0x5];                                       
	TArray<class UPresetDesc*>                         DynamicAddPresetDescList;                                 
	TArray<class UPresetDesc*>                         CachePresetDescList;                                      
	unsigned char                                      UnknownData02[0x50];                                      
	TArray<class UPresetDesc*>                         BatchRemovePresetDescList;                                
	unsigned char                                      UnknownData03[0x50];                                      
	TMap<struct FString, int>                          NoneStrToLocalTextWithIDMap;                              
	struct FString                                     AllTypesJsonPath;                                         
	struct FString                                     FunctionJsonPath;                                         
	struct FString                                     FunctionFolderPath;                                       
	struct FString                                     VariableJsonPath;                                         
	struct FString                                     PresetsJsonPath;                                          
	struct FString                                     PresetsFolderPath;                                        
	struct FString                                     TextrueRectParamJsonPath;                                 
	struct FString                                     ProjectTextrueRectParamJsonPath;                          
	struct FString                                     ProjectAtlasRectParamJsonPath;                            
	struct FString                                     ProjectSyncAtlasRectParamJsonPath;                        
	struct FString                                     ProjectBlockyNewJsonPath;                                 
	struct FString                                     TipsJsonPath;                                             
	struct FString                                     SequenceJsonPath;                                         
	struct FString                                     UAssetConfigDataPath;                                     
	struct FString                                     BlockyLuaTLogJsonPath;                                    
	bool                                               ClearCacheCallBeginDestroy;                               
	unsigned char                                      UnknownData04[0x7];                                       
	class UBlockyGraphData*                            GraphDataObject;                                          
	TArray<class UBlockyGraphData*>                    GraphDataObjectList;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBlockyLuaManager");
		return pStaticClass;
	}


	void SetRTLOffsetY(float Offset);
	void SetLTROffsetY(float Offset);
	void SetFontSize(int FontSize);
	void SetBlockIdFromSlotString(const struct FString& blockId, struct FBlockySlotString* SlotString);
	void ReturnPresetDescsToCache(TArray<class UPresetDesc*> ReturnDescs);
	bool ReturnGraphDataObject(class UBlockyGraphData* GraphDataObj);
	void RemoveDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs);
	void RegisterNameCache(class UBlockyGraphData* GraphData);
	void RefreshBlockyFont(struct FSlateFontInfo* DefaultFont);
	void ReceivePresetFromCustomSelection(class UObjectDesc* Desc);
	void ReceiveOutBlockyluaDownloadImage(class UTexture2D* Texture, const struct FString& IconPath);
	void ReceiveOpenGuide();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	struct FString ReceivedGetLocalizeResStrHandleFailed(const struct FString& IdOrStr);
	void ReceiveCheckStringValidFunction(const struct FString& CheckString, const struct FCheckStringHandleData& Data);
	void ReceiveCheckStringResult(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnReceiveMessageData(TArray<struct FMessageDataWrapper> MessageDatas);
	void OnReceiveInitDisableFunc();
	void OnInitBlockyLuaConfig();
	void OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsLTRLanguage();
	bool IsLTR();
	void InitDisableFunction(TArray<struct FString> funcs);
	TArray<class UPresetDesc*> GetPresetDescs(int GetCount, struct FString* TypeName);
	class UPresetDesc* GetPresetDesc(struct FString* TypeName);
	class UBlockyGraphData* GetGraphDataObjectFormTemplateContent(TArray<unsigned char> GrapbAstContent, bool CallLoadFinish, bool IsLoadPresetsInGraph);
	class UBlockyGraphData* GetGraphDataObjectFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool CallLoadFinish, bool IsSingleton);
	class UPresetDesc* GetDynamicPresetDescsByKey(const struct FString& KeyName);
	class UBlockyLuaConfig* GetBlockyLuaConfig();
	struct FString GetBlockNameByStr(const struct FString& BlockyId);
	struct FString GetBlockIdFromSlotString(struct FBlockySlotString* SlotString);
	struct FString GetAllDynamicPresetJson();
	static class UCreativeBlockyLuaManager* Get(class UObject* WorldContext);
	TArray<struct FString> GenerateLuaCodeFormJson(const struct FString& JsonText, const struct FString& GlobalVarJsonText, bool GenGlobalVarLua);
	TArray<struct FString> GenerateLuaCodeFormGraphDataObject(class UBlockyGraphData* GraphDataObj, bool GenGlobalVarLua);
	TArray<struct FString> GenerateLuaCodeFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool GenGlobalVarLua, bool CallLoadFinish);
	void ClearNameIndexCache();
	TArray<class UPresetDesc*> ClearDynamicPresetDescs();
	void ClearCacheObjects(bool CallBeginDestroy);
	void ClearBlockyLuaHotfixUtility();
	void BlockyluaShowPresetPanelHandle(bool IsShow);
	void BlockyluaPresetSoundFunctionHandle(const struct FString& SoundPath);
	struct FString BlockyluaPresetSelectCheckHandle(class UObjectDesc* Desc);
	struct FText BlockyluaModifyTipHandle(const struct FText& OriginalTip);
	void BlockyluaMessageDataHandle(TArray<struct FMessageDataStruct> MessageDatas);
	struct FString BlockyluaGetLocalizeResStrHandle(const struct FString& IdOrStr);
	void BlockyluaDownloadImage(const struct FString& IconPath);
	void BlockyluaCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers);
	bool BlockyluaCheckShowPresetFitlerBtnHandle(const struct FString& TypeName);
	bool BlockyluaCheckShowCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers);
	void BindUndoCustomCommandHandle(bool IsUndo);
	void BindSetBlockNewStatusHandle(const struct FString& blockId, bool showstate);
	int BindGetPresetValidityDurationHandle(class UPresetDesc* PresetDesc);
	bool BindGetBlockNewStatusHandle(const struct FString& blockId);
	void BindCallShortCutKeyHandleHandle(int ShortCutKey);
	void BindBlockyLuaStubFunc(const struct FString& BindFuncName, const struct FString& OverrdeFuncName);
	void AddEmptyCustomCommand(class UBlockyGraphData* GraphData);
	void AddDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs);
	void AddCustomCommand(class UBlockyCustomCommand* Command, class UBlockyGraphData* GraphData);
};




class UCreativeModeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBlueprintLibrary");
		return pStaticClass;
	}


	static bool ZSTDDecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData);
	static bool ZSTDCompressData(TArray<unsigned char> UncompressedData, int CompressionLevel, TArray<unsigned char>* CompressedData);
	static struct FString WindowsReadFileSummary(const struct FString& FilePath, TArray<struct FString> Properties);
	static struct FString WindowsPickFile(const struct FString& filter);
	static struct FVector2D WidgetAbsoluteSizeToLocalSize(class UWidget* Widget, const struct FVector2D& AbsoluteSize);
	static void UObjSnapshot(class UWorld* MyWorld);
	static struct FTransform TransformRevert(const struct FTransform& TransformB, struct FTransform* TransformRelative);
	static void TransformMultiplyBy(const struct FTransform& M, struct FTransform* Source);
	static void TransformBounds(const struct FTransform& M, struct FBoxSphereBounds* Bounds);
	static double ToMilliseconds64(uint64_t Cycles);
	static TArray<unsigned char> TextureToPNG(class UTexture2D* Texture);
	static TArray<unsigned char> TextureToJPEG(class UTexture2D* Texture);
	struct FString TakeSnapshot(class UWidget* WindowWidget, int X1, int Y1, int X2, int Y2, const struct FString& Filename, bool bUseCrop, bool bFillRect);
	static bool SynchronizePropertiesWidget(class UWidget* TargetWidget);
	static bool SphereOverlapComponentsByChannel(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	static bool SphereOverlapActorsByChannel(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool ShouldCreatePhysicsState(class UPrimitiveComponent* Component);
	static float SetWorldGravityZ(float GravityZ, class UObject* WorldContext);
	static void SetWidgetVisiblePass(class UWidget* Widget, bool bVisiblePass);
	static void SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility);
	static void SetSpeedOverLimit(class AActor* Actor);
	static void SetRelativeCamRotation(class APlayerController* PlayerController, class USceneComponent* Component);
	static void SetParticleCullingDistance(class UParticleSystemComponent* ParticleSystemComponent, float Distance);
	static void SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	static void SetCreativeLuaReplicatedBytes2048(TArray<unsigned char> InData, struct FCreativeLuaReplicatedBytes2048* ReplicatedBytes);
	static void SetCreativeLuaReplicatedBytes1024(TArray<unsigned char> InData, struct FCreativeLuaReplicatedBytes1024* ReplicatedBytes);
	static void SetCreativeInstanceDataContentSegment(TArray<unsigned char> DataContent, struct FCreativeInstanceDataContentSegment* InstanceDataContentSegment);
	static void SetCreativeInstanceDataContent(TArray<unsigned char> DataContent, struct FCreativeInstanceDataContent* InstanceDataContent);
	static void SetCommandLineValue(const struct FString& Key, const struct FString& NewValue);
	static void SetCollisionMobility(class UShapeComponent* Component, TEnumAsByte<EComponentMobility> NewMobility);
	static void SetAICrowdSimulationState(class AAIController* AICtrl, unsigned char NewState);
	static void SetAICrowdObstacleAvoidance(class AAIController* AICtrl, bool bEnable, bool bUpdateAgent);
	static void SetActorRegionBasedNetConsideration(class AActor* Actor, bool bNewValue);
	static bool SaveStringToFileByFullPath(const struct FString& String, const struct FString& Filename);
	static void SaveStringToFile(const struct FString& String, const struct FString& Filename);
	static void SaveRawStringToFile(TArray<unsigned char> Content, const struct FString& FilePath);
	static void SaveAssetStringToFile(const struct FString& String, const struct FString& Filename);
	struct FRotator RotatorCrossInverse(const struct FRotator& Rot1, const struct FRotator& Rot2);
	struct FRotator RotatorCross(const struct FRotator& Rot1, const struct FRotator& Rot2);
	static struct FVector Rotation2Vector(const struct FRotator& Rotator, int Axis);
	static TArray<unsigned char> RenderTargetToRGB(class UTextureRenderTarget2D* RenderTarget);
	static TArray<unsigned char> RenderTargetToPNG(class UTextureRenderTarget2D* RenderTarget, bool bLinearToGamma);
	void RenameObject(class UObject* Object, const struct FString& NewName);
	static void RecreatePhysicsState(class UPrimitiveComponent* Component);
	struct FQuat QuatCrossInverse(const struct FQuat& Quat1, const struct FQuat& Quat2);
	static struct FQuat QuatCross(const struct FQuat& Quat1, const struct FQuat& Quat2);
	static struct FString ProjectSavedDir();
	static TArray<unsigned char> PrependInt32ToBytes(int Number, TArray<unsigned char> InBytes);
	static void PopulateParticleProperties(class UParticleSystemComponent* ParticleSystemComponent);
	static bool ParseInt32FromBytes(TArray<unsigned char> InBytes, int* OutNumber, TArray<unsigned char>* OutBytes);
	static void MoveComponentToNoLatent(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction);
	static void MoveComponentTo(class USceneComponent* Component, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction);
	static void MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices);
	static struct FString MD5HashByteArray(TArray<unsigned char> inArray);
	static struct FString MD5HashAnsiString(const struct FString& str);
	static bool Lz4DecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData);
	static bool Lz4CompressData(TArray<unsigned char> UncompressedData, TArray<unsigned char>* CompressedData);
	static TArray<unsigned char> LoadRawFileToString(const struct FString& FilePath);
	static TArray<unsigned char> LoadFileToArrayByFullPath(const struct FString& FullPathName);
	static struct FString LoadAssetFileToString(const struct FString& Filename);
	static class USceneComponent* LineTraceTouchComponent(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc);
	static int LineTraceTouchAxis(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc);
	static struct FString LineTraceInstance(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors);
	static bool IsWindows();
	static bool IsPointWithinRotatedBounds(const struct FVector& BoxCenter, const struct FVector& BoxExtent, float YawDegrees, const struct FVector& Point);
	static bool IsPointInVolume(class AVolume* Volume, const struct FVector& Position);
	static bool IsPhysicsStateCreated(class UPrimitiveComponent* Component);
	static bool IsPersistentModeEnabled();
	static bool IsPerformanceSensitive();
	static bool IsOfflineBuild();
	static bool IsMCPModeEnabled();
	static bool IsLLMEnabled();
	static bool IsCreativeMode(class UWorld* World);
	static bool IsBoxOverlapWithRotatedBox(const struct FVector& StaticBoxCenter, const struct FVector& StaticBoxExtent, const struct FVector& RotatedBoxCenter, const struct FVector& RotatedBoxExtent, float RotatedBoxYaw);
	static TArray<struct FString> IsAABBVisible(TArray<struct FBox> TargetBoxs, TArray<struct FString> InstanceIDs, const struct FVector& FarPlanePoint, const struct FVector& CameraForward, TArray<float>* PlanesParams);
	static void IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore);
	static int HideEnvironmentalActorsInSceneCapture(class USceneCaptureComponent2D* SceneCapture, class ADirectionalLight* LightToKeep, bool bHideSkyBox, bool bHideEnvironmentLights, bool bHideAtmosphere);
	void GetWidgetRect(class UWidget* Widget, int* X1, int* Y1, int* X2, int* Y2);
	static struct FString GetUrlValue(class UObject* WorldContext, const struct FString& Key);
	static struct FString GetUObjAssetPath(class UObject* Level);
	static struct FString GetUClassName(class UClass* UClass);
	static class UTexture2D* GetTexture2DFromDiskFile(const struct FString& FilePath);
	static bool GetSyncDataIsEqual(struct FNetAvatarSyncData* SyncDataFirst, struct FNetAvatarSyncData* SyncDataSecond);
	static void GetStaticMeshTriangleAndDrawCallCount(class UStaticMesh* StaticMesh, int* TriangleCount, int* DrawCallCount);
	static void GetSkeletalMeshTriangleAndDrawCallCount(class USkeletalMesh* SkeletalMesh, int* TriangleCount, int* DrawCallCount);
	int GetRTValidMaxArea(class UTextureRenderTarget2D* TextureTarget);
	static int GetReplicateAddDataArrayVaildNum(class UObject* WorldContextObject, const struct FReplicateAddDataArray& ReplicateAddDataArray, int StartIndex);
	static struct FTransform GetRelativeTransform(const struct FTransform& Base, const struct FTransform& Other);
	static float GetPlatformSeconds();
	static bool GetObjectScreenPos(class UObject* WorldContextObject, const struct FString& InstanceID, struct FVector2D* pos);
	static TMap<struct FString, class UObject*> GetObjectMap(class UObject* WorldContextObject);
	static TArray<class UClass*> GetObjectInheritanceChain(class UObject* Object);
	static float GetMinFovForAABB(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, TArray<struct FVector> AABBVertices, float AspectRatio);
	static float GetLastInteractionElapsedTime();
	static void GetInstanceSpaceBoundingBox(const struct FString& InstanceID, float Yaw, class UCreativeAbilitySystemComponent* Component);
	static struct FVector2D GetImageSize(TArray<unsigned char> ImageBuffer, int Format);
	static uint32_t GetHashByString(const struct FString& str);
	static void GetGroupInstanceSpaceBoundingBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, float Yaw, class UCreativeAbilitySystemComponent* Component);
	static class UWorld* GetGameWorld(class UObject* WorldContextObject);
	static struct FString GetGameTypeAsString(ECreativeModeGameType GameType);
	static TArray<unsigned char> GetDataConttentByInstanceDataContent(struct FCreativeInstanceDataContent* InstanceDataContent);
	static TArray<unsigned char> GetDataContentByInstanceDataContentSegment(struct FCreativeInstanceDataContentSegment* InstanceDataContentSegment);
	static struct FString GetCustomEventHashString(const struct FString& CustomEventName, bool isSampleHash);
	static uint32_t GetCurFrameNumber();
	static uint32_t GetCurFrameCounter();
	static int GetCubeTouchAxisFace(class UWidget* Widget, float Width, float Distance, struct FVector2D* ScreenPosition, struct FVector* OffsetLocation);
	static TArray<unsigned char> GetCreativeLuaReplicatedBytes2048(struct FCreativeLuaReplicatedBytes2048* ReplicatedBytes);
	static TArray<unsigned char> GetCreativeLuaReplicatedBytes1024(struct FCreativeLuaReplicatedBytes1024* ReplicatedBytes);
	static struct FNetAvatarSyncData GetCopiedAvatarSyncData(const struct FNetAvatarSyncData& SyncData);
	static bool GetContentPatchData(TArray<unsigned char> OldData, TArray<unsigned char> DiffData, TArray<unsigned char>* outNewData);
	static bool GetContentDiffData(TArray<unsigned char> OldData, TArray<unsigned char> NewData, TArray<unsigned char>* outDiffData);
	static struct FString GetCommandLineValue(const struct FString& Key);
	static TArray<class UClass*> GetClassInheritanceChain(class UClass* UClass);
	static struct FVector GetCharacterSocketPos(class ACharacter* Character, const struct FName& SocketName);
	static TArray<struct FVector4> GetCameraFrustumPlane(class UObject* WorldContext);
	static void GetBoundingBoxOfInstances(class UObject* WorldContext, TArray<struct FString> Ids, float Yaw, struct FVector* Center, struct FVector* BoxExtent);
	static void GetBoundingBoxOfActors(TArray<class AActor*> Actors, float Yaw, struct FVector* Center, struct FVector* BoxExtent);
	static struct FString GetBlockyListInDisplayName(class UBlockBase* BlockBase);
	static struct FString GetBigUObject(int MaxN);
	struct FString GetBigLuaValue(class UObject* WorldContext);
	static TArray<struct FString> GetAllInstanceInScreenBox(class UObject* WorldContext, const struct FVector2D& Start, const struct FVector2D& End, int CheckDistance, int CountLimit);
	static TArray<struct FString> GetAllInstanceInBox(class UObject* WorldContext, const struct FVector& Center, const struct FVector& Extent, const struct FRotator& Rotator);
	static TArray<struct FString> GetAllFilesInDir(const struct FString& Dir, const struct FString& Pattern, bool bRelative);
	static TArray<struct FOverlapResult> GetActorsInCameraFrustumByLayer(class UWorld* World, const struct FVector& Origin, const struct FRotator& CameraRot, float MaxDistance, float AngleWidth, float AngleHeight, int NumLayers, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDrawDebug, const struct FColor& DebugColor, float DebugLifeTime);
	static void GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent);
	static uint32_t GenerateUIntGuid();
	static TArray<int> GenerateMemoryArray(int SizeInMB);
	static struct FString GenerateGuid();
	static class AActor* FindAttachedActorByName(class AActor* ParentActor, const struct FString& PartialName);
	static class AActor* FindActorByName(class UWorld* World, const struct FString& PartialName);
	struct FString EncryptToBase64(TArray<unsigned char> inArray);
	void EditorMessage(const struct FString& Message, float Time);
	static void DumpCurrentWorldObjects(class UObject* WorldContextObject, const struct FString& Suffix);
	static void DumpActorNetReplicate(class UObject* WorldContext, const struct FString& Name);
	static void DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias);
	static void DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset);
	static void DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset);
	static void DestroyUObject(class UObject* Object);
	static struct FString DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID);
	TArray<unsigned char> DecryptFromBase64(const struct FString& inString);
	static void DarwCameraFrustumDebugLine(class UObject* WorldContext, const struct FVector& FarPlanePoint, const struct FVector& CameraForward, float Duration, TArray<float>* PlanesParams);
	static struct FCreativeInstanceDataContentSegment CreativeInstanceDataContentSegment(TArray<unsigned char> DataContent);
	static struct FCreativeInstanceDataContent CreativeInstanceDataContent(TArray<unsigned char> DataContent);
	static class UTexture2D* CreateRGBATexture(int Width, int Height, bool bSRGB);
	static struct FCreativeMovingAudio CreateCreativeMovingAudio(class AActor* Actor, int Sequence, uint64_t ConfigID, bool bShowMark, int Duration, float Volume);
	static struct FRotator ConvertForwardToRotator(const struct FVector& Forward);
	static void CombineRGBATexture(class UTexture2D* DstTexture, class UTexture2D* RGSourceTexture, class UTexture2D* BSourceTexture, class UTexture2D* ASourceTexture, bool bRGSrgb, bool bBSrgb, bool bASrgb, unsigned char DefaultR, unsigned char DefaultG, unsigned char DefaultB, unsigned char DefaultA);
	static void CombineChannelsToRGBATexture(class UTexture2D* DstTexture, class UTexture2D* RGSourceTexture, class UTexture2D* BSourceTexture, class UTexture2D* ASourceTexture, bool bRGSrgb, bool bBSrgb, bool bASrgb);
	void ClearGrassByMaskTexture(class UObject* WorldContextObject, class UTexture2D* MaskTexture, const struct FVector2D& WorldStart, const struct FVector2D& WorldEnd);
	static bool CheckWidgetsOverlap(class UWidget* Widget1, class UWidget* Widget2);
	static void CharacterPlayCreativeDynamicMontage(class ACharacter* CharacterOwner, class UAnimSequenceBase* Asset, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, bool bIsLoop, float InTimeToStartMontageAt, const struct FName& SlotNodeName);
	static bool CaptureWidget(class UObject* WorldContext, class UClass* WidgetClass, struct FString* Path, int* X, int* Y, bool* FlipY);
	static bool BoxOverlapComponentsByChannel(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	static bool BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* CompClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComps);
	static bool BoxOverlapActorsByChannel(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, TArray<class AActor*> ActorsToIgnore, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, float Tolerance, struct FVector* TossVelocity);
	static class AActor* BeginDeferredActorSpawnWithName(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FName& Name, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
	static void AttachOutlineBox(class AActor* AttachedActor, float Yaw, class AActor* OutlineBox);
	static void AttachInstanceOutlineBox(const struct FString& AttachedId, bool bGridEnable, float Yaw, class AActor* OutlineBox);
	static void AttachGroupOutlineBox(class AActor* GroupObject, TArray<class AActor*> AttachedActors, float Yaw, class AActor* OutlineBox);
	static void AttachGroupInstanceOutlineBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, bool bGridEnable, float Yaw, class AActor* OutlineBox);
	static bool AimSceneCaptureAtPawnSocket(class USceneComponent* SceneCapture, class APawn* TargetPawn, const struct FName& SocketName, float Distance, float FOV, const struct FVector& Offset, float PawnHeight);
	static void AddVectorCurvePoint(float InVal, const struct FVector& OutVal, const struct FVector& ArriveTangent, const struct FVector& LeaveTangent, int InterpCurveMode, struct FInterpCurveVector* Curve);
	static void AddOnScreenDebugMessage(const struct FString& Msg);
	static void AddLinearColorCurvePoint(float InVal, const struct FLinearColor& OutVal, const struct FLinearColor& ArriveTangent, const struct FLinearColor& LeaveTangent, int InterpCurveMode, struct FInterpCurveLinearColor* Curve);
	static void AddFloatCurvePoint(float InVal, float OutVal, float ArriveTangent, float LeaveTangent, int InterpCurveMode, struct FInterpCurveFloat* Curve);
};




class UCreativeBounceMovementComponent : public UProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              
	float                                              Mass;                                                     
	float                                              MinSpeedThreshold;                                        
	bool                                               bEnableGroundBounce;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              BounceVelocityThreshold;                                  
	float                                              SlideableFloorAngle;                                      
	unsigned char                                      UnknownData02[0x4];                                       
	float                                              FloorStickPenetration;                                    
	unsigned char                                      UnknownData03[0x4];                                       
	class UPrimitiveComponent*                         BaseFloor;                                                
	struct FVector                                     FloorNormal;                                              
	bool                                               StickToFloor;                                             
	unsigned char                                      UnknownData04[0x3];                                       
	struct FScriptMulticastDelegate                    OnBaseFloorChanged;                                       
	float                                              NetSyncInterval;                                          
	float                                              HardSnapThreshold;                                        
	float                                              HardSnapVelocityThreshold;                                
	float                                              SmoothCorrectionHalfLife;                                 
	bool                                               bEnableLatencyExtrapolation;                              
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              MaxExtrapolationTime;                                     
	float                                              MaxPacketAge;                                             
	bool                                               bUseHardCorrectionOnStop;                                 
	unsigned char                                      UnknownData06[0x3];                                       
	class USceneComponent*                             UpdatedComponentDS;                                       
	float                                              SlideableFloorAngleDS;                                    
	float                                              MassDS;                                                   
	float                                              ProjectileGravityScaleDS;                                 
	float                                              FrictionDS;                                               
	float                                              BouncinessDS;                                             
	unsigned char                                      UnknownData07[0x74];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBounceMovementComponent");
		return pStaticClass;
	}


	void SyncUpdatedComponentDS();
	void SetVelocityInLocalSpaceDS(const struct FVector& InVelocity);
	void SetUpdatedComponentDSCPP(class USceneComponent* NewUpdatedComponent);
	void SetSlideableFloorAngleDS(float InSlideableFloorAngle);
	void SetSlideableFloorAngle(float InSlideableFloorAngle);
	void SetProjectileGravityScaleDS(float InGravityScale);
	void SetMassDS(float InMass);
	void SetFrictionDS(float InFriction);
	void SetBouncinessDS(float InBounciness);
	void OnRep_UpdatedComponentDS(class USceneComponent* OldUpdatedComponent);
	void OnRep_SlideableFloorAngleDS(float OldValue);
	void OnRep_ProjectileGravityScaleDS(float OldValue);
	void OnRep_MassDS(float OldValue);
	void OnRep_FrictionDS(float OldValue);
	void OnRep_BouncinessDS(float OldValue);
	void MulticastSyncVelocity(const struct FBounceMovementSnapshot& Snapshot);
	void MulticastSyncStop(const struct FBounceMovementSnapshot& Snapshot);
	void MulticastSyncMove(const struct FBounceMovementSnapshot& Snapshot);
	void MulticastSyncLocation(const struct FBounceMovementSnapshot& Snapshot);
	void MulticastSyncBounce(const struct FBounceMovementSnapshot& Snapshot);
	bool IsInAir();
	class AActor* GetBaseFloorActor();
	class UPrimitiveComponent* GetBaseFloor();
};




class ACreativeModeLuaSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	bool                                               IsTopView;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                TopViewRotateAngle;                                       
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLuaSpectatorPawn");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void SetController(class APlayerController* InController);
	void SetAbilitySystemComponentAvatar();
	void RegistLuaTick(float TickInterval);
	void MoveRight(float Val);
	void MoveForward(float Val);
	class USpringArmComponent* GetActiveSpringArm();
};




class ACreativeCameraDeviceActor : public ACreativeModeLuaSpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bIsFollowing;                                             
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                FollowType;                                               
	bool                                               bIsLerping;                                               
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              LerpTime;                                                 
	float                                              BlendExp;                                                 
	float                                              BlendTimeToGo;                                            
	float                                              BlendTime;                                                
	struct FVector                                     SocketOffset;                                             
	struct FRotator                                    RotatorOffset;                                            
	TWeakObjectPtr<class AActor>                       FollowTarget;                                             
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            
	unsigned char                                      UnknownData03[0x3];                                       
	struct FRotator                                    ActorStartRot;                                            
	struct FRotator                                    ActorTargetRot;                                           
	struct FVector                                     targetPos;                                                
	struct FRotator                                    TargetRot;                                                
	struct FVector                                     StartPos;                                                 
	struct FRotator                                    StartRot;                                                 
	float                                              StartFOV;                                                 
	float                                              StartArmLength;                                           
	struct FRotator                                    EndRot;                                                   
	float                                              EndFOV;                                                   
	float                                              EndArmLength;                                             
	unsigned char                                      UnknownData04[0x4];                                       
	struct FName                                       SocketName;                                               
	float                                              MaxPilotDist;                                             
	bool                                               bPilotPosition;                                           
	unsigned char                                      UnknownData05[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCameraDeviceActor");
		return pStaticClass;
	}


	void UpdateFollowStatus();
	void UpdateFollowPos();
	void RotCamera(float Yaw, float Pitch);
	void OnEndViewTarget(class APlayerController* PC);
	void OnBecomeViewTarget(class APlayerController* PC);
	void MoveUp(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	void LerpToTarget(float DeltaSeconds);
	void LerpActor(float BlendPct);
	bool IsVecInvalid(const struct FVector& Vect);
	bool IsRotInvalid(const struct FRotator& Rot);
	void InterpolateToSpringRotation(float LerpValue);
	bool InitStartPoint();
	class USpringArmComponent* GetSpringArmForCamera(class UCameraComponent* Camera);
	float GetLerpTime(float BlendTimeToGo);
	struct FVector GetCameraPointPosition();
	class UCameraComponent* GetActiveCamera();
};




class UCreativeCameraGetter : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCameraGetter");
		return pStaticClass;
	}


	struct FVector GetCameraLocation();
};




class UCreativeCustomActorManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomActorManager");
		return pStaticClass;
	}


	bool UnhookUserConstructionScript(class AActor* Actor);
	class AActor* SpawnCustomActor(class UClass* ActorClass, const struct FTransform& Transform);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveClearAllCustomActor();
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsUserConstructionScriptHooked(class AActor* Actor);
	bool HookUserConstructionScript(class AActor* Actor);
	static class UCreativeCustomActorManager* Get(class UObject* WorldContext);
	void ClearAllCustomActor();
};




class UCreativeCustomCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	float                                              ConfigFOV;                                                
	struct FRotator                                    ConfigRotation;                                           
	unsigned char                                      UnknownData01[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomCameraComponent");
		return pStaticClass;
	}


	void InterpolateToTargetRotation(float LerpValue);
	void InterpolateToTargetFOV(float LerpValue);
};




class UCreativeCustomParameterManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeCustomParameterDataContainer       ReplicatedCustomParameterDataContainer;                   
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomParameterManager");
		return pStaticClass;
	}


	void RemoveCustomParameter(uint32_t ParameterID, uint32_t PlayerKey);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void GetCustomParameterDataNodes(uint32_t ParameterID, TArray<struct FCreativeCustomParameterDataNode>* OutCustomParameterDataNodes);
	static class UCreativeCustomParameterManager* Get(class UObject* WorldContext);
	void ChangeCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent);
	void AddCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent, bool bPropagateToChildren);
};




class UCreativeCustomPrefabComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomPrefabComponent");
		return pStaticClass;
	}


	TArray<unsigned char> GetNodeSegmentContent(struct FCreativePrefabDataSegment* Segment);
	bool AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeCustomPrefabDataSegment* Segment);
};




class UCreativeCustomUIDataComponent : public ULuaActorComponent
{
public:
	struct FCreativeCustomUIContainer                  CustomUIContainer;                                        
	int                                                SingleSerializeNum;                                       
	unsigned char                                      UnknownData00[0xB8];                                      
	float                                              DataNodePullInterval;                                     
	int                                                SinglePullDataNodeNum;                                    
	int                                                TotalPullDataNodeNum;                                     
	float                                              DataNodePullTimeroutInterval;                             
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomUIDataComponent");
		return pStaticClass;
	}


	void SetCustomUIDataFromTransferNodes(TArray<struct FCreativeCustomUIDataTransferNode>* TransferNodes);
	void SetCustomUIDataById(uint32_t ID, TArray<unsigned char> Content);
	void RemovePullRequestById(uint32_t ID);
	void RemoveCustomUI(const struct FString& ID);
	TArray<struct FCreativeCustomUIDataTransferNode> GetCustomUIDataTransferNodes(TArray<uint32_t>* IDList);
	bool GetCustomUIContent(const struct FString& ID, TArray<unsigned char>* OutContent);
	void ChangeCustomUI(const struct FString& ID, TArray<unsigned char> Content);
	void CallOnReceivePreCustomUIDataRemove(uint32_t ID);
	void CallOnReceivePostCustomUIDataChange(uint32_t ID, TArray<unsigned char> Content);
	void CallOnReceivePostCustomUIDataAdd(uint32_t ID, TArray<unsigned char> Content);
	void AddCustomUI(const struct FString& ID, TArray<unsigned char> Content);
};




class UCreativeCustomUIVFXWidget : public UCreativeBaseWidget
{
public:
	TArray<struct FCreativeVFXImageBlendConfig>        BlendConfigs;                                             
	unsigned char                                      UnknownData00[0x10];                                      
	struct FLinearColor                                PreviewColor;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomUIVFXWidget");
		return pStaticClass;
	}


	void SetImageBrushMaterialBlend(float V);
};




class ACreativeDestructibleMeshActor : public APhotonDestructibleMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDestructibleMeshActor");
		return pStaticClass;
	}


	void SetDamageEnable(bool bEnable);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void InitHP(float fHP);
	class UPhotonDestructibleMeshComponent* GetFracturedComponent();
	void AddCanDamageWeapon(const struct FString& Weapon);
};




class ACreativeDestructibleMeshBatchActor : public ALuaActor
{
public:
	int                                                AtLeastLengthHISMRequired;                                
	float                                              TickUpdateBatchInterval;                                  
	int                                                CellWidth;                                                
	unsigned char                                      UnknownData00[0xE4];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDestructibleMeshBatchActor");
		return pStaticClass;
	}


	void RemoveAllCacheReplicationData();
};




class UCreativeDropItemCurveAnimComponent : public UDropItemCurveAnimComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	TMap<int, struct FCreativeDropAnimConfig>          DropAnimConfigs;                                          
	TMap<int, struct FCreativeDropAnimConfig>          OverrideConfigs;                                          
	TMap<int, struct FCreativeDropGroupContainer>      CreativeItemGroupList;                                    
	int                                                MaxCurveAnimItemNum;                                      
	int                                                ContainerRemoveTime;                                      
	int                                                PSCPoolLimit;                                             
	int                                                MaxDropAnimConfigCount;                                   
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDropItemCurveAnimComponent");
		return pStaticClass;
	}


	void StopItemClient(int Group, class AActor* Target);
	void OnParticleSystemComponentFinished(class UParticleSystemComponent* PSC);
	bool IsInViewport(class APlayerController* PC, int ViewportX, int ViewportY, const struct FVector& CenterPos);
	void InitConfig(int BaseConfigID, struct FCreativeDropAnimConfig* Config);
	void DynamicReduceItemGroup(int CurrentGroup, int Num);
	void DecodeDropItemGroupID(int GroupID, int* ConfigID, int* Num);
	void AddItemClient(int Group, const struct FVector& InStartPos, const struct FVector& InEndPos, class AActor* Target);
};




class UCreativeDSLParserLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDSLParserLibrary");
		return pStaticClass;
	}


	static class UDSLParserASTTree* ParseDSLText(class UDSLParser* Parser, const struct FString& Source);
	static class UDSLParserASTTree* ParseDSLFile(class UDSLParser* Parser, const struct FString& FilePath);
	static bool LoadDSLGrammarFromString(class UDSLParser* Parser, const struct FString& GrammarText);
	static bool LoadDSLGrammarFromFile(class UDSLParser* Parser, const struct FString& FilePath);
	static class UDSLParser* CreateDSLParser(class UObject* WorldContextObject);
	static void AddDSLGrammarRule(class UDSLParser* Parser, const struct FString& RuleName, const struct FString& RuleBody);
};




class UCreativeModeLiteComponent : public ULiteComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLiteComponent");
		return pStaticClass;
	}


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
};




class UCreativeModeGameModeBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	class UCreativeModeGameStateBaseComponent*         GameStateComponent;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeBaseComponent");
		return pStaticClass;
	}


	void SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent);
	void ReceivePostInitializeComponents();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameMode* GetGameMode();
	class AActor* FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName, bool bIsRevive);
};




class UCreativeModeEditorModeComponent : public UCreativeModeGameModeBaseComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorModeComponent");
		return pStaticClass;
	}

};




class ACreativeModeEditorObject : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      
	TArray<class AActor*>                              ToIgnoreActors;                                           
	ECreativeModeActorState                            ActorState;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      
	int8_t                                             CanEditFlag;                                              
	bool                                               bIgnoreCollisionCheck;                                    
	unsigned char                                      UnknownData02[0x6];                                       
	TArray<class AActor*>                              IgnoreActors;                                             
	struct FEditorObjectLiteComponentTickFunction      LiteComponentActorTick;                                   
	TArray<class ULiteComponent*>                      LiteComponents;                                           
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness);
	void ShowOutlineEffect(bool ShowEff, class UMaterialInstance* Material, const struct FString& IgnoreTag);
	void SetPhotographyMode(bool bIsCapturing);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetActorState(ECreativeModeActorState NewState);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	void ReceiveInitializeLiteComponent();
	void ReceiveInitCanEditFlag();
	bool ReceiveHasAuthority();
	void OnRepActorStateOverride(ECreativeModeActorState NewState);
	void OnRep_ActorState(ECreativeModeActorState LastState);
	bool InCollisionState();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
	TArray<class AActor*> GetLocationToIgnoreActors();
	ECreativeModeActorState GetActorState();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
};




class UCreativeModeGameStateBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateBaseComponent");
		return pStaticClass;
	}


	void ReceivePostInitializeComponents();
	ECreativeModePlayState GetPlayState();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameState* GetGameState();
};




class UCreativeModeEditorStateComponent : public UCreativeModeGameStateBaseComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorStateComponent");
		return pStaticClass;
	}

};




class UCreativeEventObject : public UCreativeLuaSignalObjectBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeEventObject");
		return pStaticClass;
	}


	void ReHookObject();
	void EventObjectConditionalBeginDestroy();
};




class UCreativeExportSandboxApiLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeExportSandboxApiLibrary");
		return pStaticClass;
	}


	static bool IsObjectValid(class UObject* Object);
	static bool IsObjectA(class UObject* Object, const struct FString& ClassName);
	static class UWorld* GetObjectWorld(class UObject* Object);
	static struct FString GetObjectPathName(class UObject* Object);
	static class UObject* GetObjectOuter(class UObject* Object);
	static struct FString GetObjectName(class UObject* Object);
	static struct FString GetObjectFullName(class UObject* Object);
	static class UClass* GetObjectClass(class UObject* Object);
	static class UFunction* FindObjectFunction(class UObject* Object, const struct FString& FunctionName);
};




class UCreativeGameAPIObject : public UCreativeApiObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGameAPIObject");
		return pStaticClass;
	}


	TArray<int64_t> GetPlayersInSphere(const struct FVector& SphereCenter, float SphereRadius, int TeamID, bool FilterNonPlayable);
	TArray<int64_t> GetPlayersInRectangle(const struct FVector& RectangleCenter, float RectangleX, float RectangleY, float RectangleZ, int TeamID, bool FilterNonPlayable);
};




class ACreativeModeGameMode : public ABattleRoyaleGameModeTeam
{
public:
	class UCreativeModeGameModeBaseComponent*          CurrentModeComponent;                                     
	TArray<class UClass*>                              GameModeComponentClassArray;                              
	class UClass*                                      GameModeComponentClass;                                   
	TMap<struct FString, struct FGameModeParam>        MapPlaneRouteConfigs;                                     
	TMap<struct FString, struct FString>               MapVehicleClassPathConfigs;                               
	ECreativeModeGameType                              EditorStartupGameType;                                    
	unsigned char                                      UnknownData00[0x1];                                       
	bool                                               bIsCreativeWoW;                                           
	int8_t                                             FindPlayerStartOverrideFlag;                              
	unsigned char                                      UnknownData01[0x4];                                       
	struct FGameModeLiteComponentTickFunction          LiteComponentActorTick;                                   
	TArray<class ULiteComponent*>                      LiteComponents;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameMode");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetShowDropEffectEnable(bool Enable);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetItemGenerate(bool bIsOpen);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void ReInitItemGenerate(struct FString* NewItemClassPath);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	bool IsStandAloneGameMode();
	bool IsRestartPlayerUsePawnRotation();
	class UCreativeModeGameModeBaseComponent* GetCurrentModeComponent();
	int GetCreativeModeRealTeamNum();
	TArray<int> GetCreativeModeRealTeamIDs();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
	class AActor* CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName, bool bIsRevive);
};




class UCreativeModeGameModeComponent : public UCreativeModeGameModeBaseComponent
{
public:
	class UClass*                                      RaceCheckPointComponentClass;                             
	class UCreativeModeRaceCheckPointLiteComponent*    RaceCheckPointComponent;                                  
	class UClass*                                      OccupationAreaComponentClass;                             
	class UCreativeOccupationAreaLiteComponent*        OccupationAreaComponent;                                  
	class UClass*                                      TeleporterComponentClass;                                 
	class UCreativeModeLiteComponent*                  TeleporterComponent;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeComponent");
		return pStaticClass;
	}


	void ReceiveCallPlayStateFunction();
};




class UCreativeModeGameObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData01[0x8];                                       
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      
	TArray<class ULiteComponent*>                      LiteComponents;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
	TArray<struct FString> GetDynamicSpawnObjUUIDs();
};




class UCreativeGameParameterManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeGameParameterContainer             GameParameterContainer;                                   
	unsigned char                                      UnknownData00[0x4];                                       
	int                                                SingleSerializeNum;                                       
	int                                                SingleSerializeBytes;                                     
	bool                                               bGameParameterResumeEnable;                               
	unsigned char                                      UnknownData01[0x3];                                       
	struct FCreativeGameParameterResumeContainer       GameParameterResumeContainer;                             
	unsigned char                                      UnknownData02[0xB4];                                      
	float                                              ResumeNodePullInterval;                                   
	int                                                SinglePullResumeNodeNum;                                  
	int                                                TotalPullResumeNodeNum;                                   
	float                                              ResumeNodePullTimeroutInterval;                           
	int                                                HistoryDataMaxCount;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGameParameterManager");
		return pStaticClass;
	}


	void SetGameParameterResumeNodes(TArray<struct FCreativeGameParameter> GameParameterNodes);
	void RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID);
	void OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool GetHistoryData(uint32_t HeadHash, unsigned char Seq, TArray<unsigned char>* OutContent);
	TArray<struct FCreativeGameParameter> GetGameParameterResumeNodes(TArray<uint32_t> ParameterHeadHashs);
	bool GetGameParameterContent(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char>* OutContent);
	static class UCreativeGameParameterManager* Get(class UObject* WorldContext);
	void ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
};




class ACreativeModeGameState : public ASTExtraGameStateBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	int                                                EditorBindTemplateID;                                     
	unsigned char                                      UnknownData01[0x2];                                       
	unsigned char                                      bIsCreativeMode : 1;                                      
	ECreativeModeGameType                              CurrentGameType;                                          
	ECreativeModeGameType                              CurrentGameTypeReplicated;                                
	ECreativeModeGameType                              InitializeGameType;                                       
	unsigned char                                      UnknownData02[0x2];                                       
	int                                                CreativeModID;                                            
	int                                                CreativeModTemplateId;                                    
	bool                                               bEnvLuaRunning;                                           
	unsigned char                                      UnknownData03[0x3];                                       
	class UCreativeModeGameStateBaseComponent*         CurrentStateComponent;                                    
	class UCreativeModeGameStateBaseComponent*         WaitCurrentStateComponent;                                
	bool                                               CurrentStateComponentTest;                                
	unsigned char                                      UnknownData04[0x7];                                       
	class UCreativeModeGameStateBaseComponent*         LastStateComponent;                                       
	TArray<class UClass*>                              GameStateComponentClassArray;                             
	class UClass*                                      GameStateComponentClass;                                  
	bool                                               bIsCreativeWoW;                                           
	bool                                               bIsAIUseDynamicBehaviorTaskNode;                          
	unsigned char                                      UnknownData05[0x16];                                      
	TArray<struct FExtendedBlockySlotString>           BlockySlotStrings;                                        
	struct FActorEditorLargeDataContent                LargeDataContent;                                         
	struct FGameStateLiteComponentTickFunction         LiteComponentActorTick;                                   
	TArray<class ULiteComponent*>                      LiteComponents;                                           
	unsigned char                                      UnknownData06[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameState");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetLargeDataContent(TArray<unsigned char> NewContent);
	void SetEnvLuaRunning(bool bRunning);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void RPC_Replay_SetInstanceDataContent(uint32_t InstanceID, const struct FCreativeInstanceDataContent& InstanceDataContent);
	void RPC_Replay_GeneraicUGC_LuaImpl(TArray<unsigned char> Content);
	void RPC_Replay_GeneraicUGC(TArray<unsigned char> Content);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	void ReceiveCreativeCollectGarbage();
	void ReceiveAddEnvLuaRunningToCrashKit();
	void ReceiveAddContextDataToCrashKit();
	void OnViewportSizeChanged(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize);
	void OnRep_LargeDataContent();
	void OnRep_InitializeGameType(ECreativeModeGameType LastInitializeGameType);
	void OnRep_EnvLuaRunning(bool OldLuaRunning);
	void OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent);
	void OnRep_CurrentGameTypeReplicated(ECreativeModeGameType LastCurrentGameTypeReplicated);
	void OnRep_CreativeModTemplateId(int LastCreativeModTemplateId);
	void OnRep_CreativeModID(int LastCreativeModID);
	void OnRep_BlockySlotStrings(TArray<struct FExtendedBlockySlotString>* BlockySlotStrings);
	void OnCurrentStateComponentChanged(class UCreativeModeGameStateBaseComponent* LastComponent);
	void OnClientRecordingStateChange(EClientRecordingType Type);
	bool IsOfficialGame();
	bool IsEditorMode();
	bool IsDemoGame();
	bool IsCreativeMode();
	bool IsCreativeEditor();
	bool IsAIUseDynamicBehaviorTaskNode();
	void InitCreativeModID(int ModID, int TemplateID);
	ECreativeModePlayState GetPlayState();
	TArray<unsigned char> GetLargeDataContent();
	ECreativeModeGameType GetInitializeGameType();
	bool GetEnvLuaRunning();
	TArray<struct FString> GetDisableDistanceLevelsOutsideBox(float X, float Y, int W, int L, float RotationAngle, bool bUseFilter);
	class UCreativeModeGameStateBaseComponent* GetCurrentStateComponent();
	ECreativeModeGameType GetCurrentGameTypeReplicated();
	ECreativeModeGameType GetCurrentGameType();
	int GetCurCreativeType();
	struct FString GetCurCreativeModResList();
	struct FString GetCurCreativeModMapID();
	int GetCurCreativeModID();
	int GetCreativeModTemplateId();
	int GetCreativeModID();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	bool FilterLevelByName(const struct FName& LevelName);
	void ClientSetCurrentStateComponent(class UCreativeModeGameStateBaseComponent* CurStateComponent);
	void ClearInstance();
	void ClearAndReImportInstance();
	bool CanShowDropEffectByItemID(int ItemId);
};




class UCreativeModeGameStateComponent : public UCreativeModeGameStateBaseComponent
{
public:
	class UClass*                                      IntegralMechanismComponentClass;                          
	class UCreativeModeIntegralMechanismLiteComponent* IntegralMechanismComponent;                               
	class UClass*                                      RuntimePlayerBattleDataObjectClass;                       
	class ACreativeRuntimePlayerBattleDataObject*      RuntimePlayerBattleDataObject;                            
	ECreativeModePlayState                             CurPlayState;                                             
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateComponent");
		return pStaticClass;
	}


	void SetPlayState(ECreativeModePlayState newPlayState);
	void OnRep_RuntimePlayerBattleDataObject();
	void OnRep_IntegralMechanismComponent();
	void OnRep_CurPlayState();
	ECreativeModePlayState GetPlayState();
};




class UCreativeGlobalApiObject : public UCreativeApiObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGlobalApiObject");
		return pStaticClass;
	}


	void Print(const struct FString& LogText);
	float CPPExecutionConsumptionTest(int A, float B, double C);
};




class UCreativeGridLevelsManager : public UCreativeModeManagerBase
{
public:
	bool                                               bDestructibleMeshForceHISM;                               
	bool                                               bDestructibleMeshEnableBrokenEffect;                      
	unsigned char                                      UnknownData00[0x46];                                      
	TArray<struct FString>                             GridLevelList;                                            
	TMap<struct FString, struct FCreativeModeGridLevelConfig> GridLevelConfigs;                                         
	TMap<struct FString, struct FCreativeModeGridLevelInfo> GridLevelsMap;                                            
	TMap<struct FString, struct FIntVector>            ObjectCellIndexMap;                                       
	TArray<struct FString>                             AlwaysLoadLevel;                                          
	unsigned char                                      UnknownData01[0x10];                                      
	TArray<struct FString>                             RefreshBatchDataInstances;                                
	bool                                               bStaticMeshObjectBatchSwitch;                             
	bool                                               bAroundRelieveBatchSwitch;                                
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              EditorModeUpdateTime;                                     
	float                                              DelayUpdateBatchTime;                                     
	float                                              TickUpdateBatchInterval;                                  
	float                                              ReBatchDistance;                                          
	float                                              RelieveBatchDistance;                                     
	bool                                               bRelieveBatchDelayUpdateSwitch;                           
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              RelieveBatchDelayTime;                                    
	bool                                               bIncrementalRefreshEnable;                                
	bool                                               bHISMBatchForceSwitch;                                    
	bool                                               bFineBatchSwitch;                                         
	bool                                               bDynamicChangeHISMSwitch;                                 
	bool                                               bPostUpdateISMBufferCompleteEventFlag;                    
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                UpdateIsmNumPerFrame;                                     
	unsigned char                                      UnknownData05[0x194];                                     
	TMap<struct FString, class ACreativeModeStaticMeshBatchActor*> SingleBatchActorMap;                                      
	unsigned char                                      UnknownData06[0xF0];                                      
	TArray<struct FString>                             ChangeMaterialIdInstanceIDs;                              
	unsigned char                                      UnknownData07[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGridLevelsManager");
		return pStaticClass;
	}


	void UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll);
	void UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	void StaticMeshObjectRelieveBatch(struct FString* InstanceID);
	void StaticMeshObjectReBatch(struct FString* InstanceID);
	bool RemoveObject(const struct FString& InstanceID);
	void ReceiveRegistInstanceValueListener();
	void ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll, float MoveForwardTimeStamp);
	void ReceiveClearAllData();
	bool ReceiveCheckObjectCanBatch(const struct FString& InstanceID);
	void ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	void LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	bool IsCreativeEidtMode();
	void GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	struct FString GetStaticMeshBatchActorPath();
	class ACreativeDestructibleMeshBatchActor* GetSingleDestructibleMeshBatchActor();
	class ACreativeModeStaticMeshBatchActor* GetSingleBatchActor(const struct FString& GridName);
	float GetRelieveBatchDistance();
	float GetReBatchDistance();
	struct FIntVector GetOnCellIndex(const struct FString& GridName, const struct FVector& Location);
	struct FTransform GetObjectTransform(const struct FString& ID);
	ECreativeModeActorStreamingType GetObjectStreamingType(const struct FString& ID);
	struct FString GetObjectRuntimeGrid(const struct FString& ID);
	struct FIntVector GetObjectOnCellIndexByLocation(const struct FString& InstanceID, const struct FString& GridName, const struct FVector& Location);
	struct FIntVector GetObjectOnCellIndex(const struct FString& InstanceID);
	bool GetObjectIsPrefab(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FString GetDestructibleMeshBatchActorPath();
	struct FString GetDefaultGridName();
	struct FVector2D GetCellWidthHeight(const struct FString& GridName);
	struct FVector GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex);
	int GetAxisIndex(float pos, float BlockLenght);
	static class UCreativeGridLevelsManager* Get(class UObject* WorldContext);
	bool CheckObjectBeRelieveBatch(const struct FString& ID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool CheckAndRemoveObjectForBatchData(const struct FString& ID);
	bool CheckAndAddObjectToBatchData(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID);
	bool ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool ChangeObjectMaterialIds();
	bool ChangeObjectMaterialId(const struct FString& InstanceID);
	bool ChangeObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab);
	bool AddObjectToGridLevels(struct FString* InstanceID);
	void ActivateAllAlwaysLoadCellIndex();
};




class UCreativeGroupManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGroupManager");
		return pStaticClass;
	}


	static class UCreativeGroupManager* Get(class UObject* WorldContext);
};




class UCreativeGuideComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGuideComponent");
		return pStaticClass;
	}


	bool SweepSingleByChannel(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors, struct FHitResult* OutHit);
	void GenereateSplineMeshes(TArray<struct FVector> Points);
};




class UCreativeGuideMeshComponent : public USplineMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGuideMeshComponent");
		return pStaticClass;
	}


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};




class ACreativeModeInGameManagerCenter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<class USTExtraManagerBase*>                 ManagerArray;                                             
	TArray<class UClass*>                              ManagerClassArray;                                        
	unsigned char                                      UnknownData01[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeInGameManagerCenter");
		return pStaticClass;
	}


	bool GetIsBeginPlayEnded();
};




class UCreativeInstanceManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      
	TMap<struct FString, struct FCreativeInstanceDataNode> InstanceTreeData;                                         
	TMap<uint16_t, struct FCreativeBatchPullDataNode>  DataRequestMap;                                           
	TArray<struct FCreativePullDataNode>               DataWaitingRquestQueue;                                   
	unsigned char                                      UnknownData01[0x10];                                      
	struct FCreativeNodeContainer                      InstanceContainer;                                        
	struct FCreativeNodeContainer                      RPCReplicatedInstanceContainer;                           
	bool                                               bRPCReplicatInstanceContainerEnable;                      
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                CacheCacheHistoryContainerMaxCount;                       
	unsigned char                                      UnknownData03[0x50];                                      
	int                                                ModBinInstanceCount;                                      
	unsigned char                                      UnknownData04[0x4];                                       
	int                                                SingleSerializeNum;                                       
	int                                                SinglePullDataNodeNum;                                    
	int                                                TotalPullDataNodeNum;                                     
	float                                              DataNodePullInterval;                                     
	float                                              DataPullTimeroutInterval;                                 
	int                                                FetchesPerFrame;                                          
	float                                              WaitInstanceReplicatTreeTimeout;                          
	float                                              BuildingResTime;                                          
	float                                              ClientPreAddBuildingResTime;                              
	float                                              BuildingTimeoutCheckInterval;                             
	struct FString                                     DefaultDestructibleMeshObjectPath;                        
	struct FString                                     ExpiredAssetEditorPath;                                   
	struct FString                                     DebugObjectPath;                                          
	float                                              StartDownloadMapTimeStamp;                                
	float                                              CompleteDownloadReplicatTreeTimeStamp;                    
	float                                              CompleteDownloadDataNodeTreeTimeStamp;                    
	unsigned char                                      UnknownData05[0x4];                                       
	TMap<struct FString, struct FCreativeInstanceNode> CppInstanceTree;                                          
	unsigned char                                      UnknownData06[0x38];                                      
	unsigned char                                      UnknownData07[0x50];                                      
	unsigned char                                      UnknownData08[0x50];                                      
	uint32_t                                           RPCReplicatedInstanceContainerSeq;                        
	float                                              ReqInstanceContainerContentTimeoutTimeStamp;              
	float                                              ReqInstanceContainerContentTimeroutInterval;              
	bool                                               bRPCReplicatInstanceContainerTickCheckEnable;             
	unsigned char                                      UnknownData09[0x3];                                       
	float                                              RPCReplicatInstanceContainerTickCheckCD;                  
	unsigned char                                      bRPCReplicatInstanceContainerReqing : 1;                  
	unsigned char                                      UnknownData10[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeInstanceManager");
		return pStaticClass;
	}


	void UpdateModBinInstanceCount();
	void SetModBinInstanceCount(int Count);
	bool SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	void SetInstanceDataContents(uint16_t Seq, TArray<struct FCreativeInstanceDataContent> InstanceDataContents);
	void SetInstanceContainerContent(TArray<unsigned char> ContainerContent, uint32_t NewSeq);
	void SendModBinaryDataToReplay(TArray<unsigned char>* InBinaryData);
	void ReqInstanceContainerContentTimeoutCheck();
	void ReqInstanceContainerContentEnd(bool IsTimeout);
	void RemoveInstance(const struct FString& ID, bool bSkipCheck);
	bool RemoveCppInstanceNode(const struct FString& ID);
	void RecordInstanceDataListToReplayRPC(TArray<struct FString> InstanceIDs);
	void RecordAllInstanceDataByRPC();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnRep_RPCReplicatedInstanceContainerSeq();
	void OnRep_ModBinInstanceCount();
	void OnReceivePreInstanceRemove(const struct FString& ID, bool IsRollback);
	void OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback);
	void OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback);
	void OnReceiveClearNotReplicatedData();
	void OnReadyToAddInstance();
	void OnPlayerControllerBeginPlay(class APlayerController* PlayerController);
	void OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsInstanceReplicatTreeReplicateComplete();
	bool IsInstanceDataTreeReplicateComplete();
	bool IsAssetRuntimeObjectBox(const struct FString& ID);
	void InitExpiredAndDebugAssetID(TArray<int>* ExpiredAssets, TArray<int>* DebugAssets);
	bool HasReadyToAddInstance();
	bool HasAuthorityOrReplay();
	struct FString GetObjectAssetPath(const struct FString& ID);
	int GetModBinInstanceCount();
	bool GetModBinaryDataFromReplay(TArray<unsigned char> InBinaryData);
	bool GetInstanceIsDestructible(const struct FString& ID);
	bool GetInstanceIsCustomUI(const struct FString& ID);
	int GetInstanceDataTreeCount();
	TArray<struct FCreativeInstanceRespondPullDataSegment> GetInstanceDataContents(TArray<uint32_t> InstanceIDs);
	TArray<unsigned char> GetInstanceDataContent(const struct FString& InstanceID);
	int GetInstanceContainerCount();
	TArray<unsigned char> GetInstanceContainerContent(uint32_t BaseSeq, uint32_t* OutSeq);
	TArray<struct FBoxSphereBounds> GetInstanceBoxSphereBoundsList(TArray<struct FString> InstanceIDs);
	struct FBox GetInstanceBox(const struct FString& ID);
	struct FCreativeInstanceNode GetCppInstanceNode(const struct FString& ID);
	struct FBox GetAssetBox(const struct FString& ID);
	static class UCreativeInstanceManager* Get(class UObject* WorldContext);
	uint32_t GenerateDestructionUniqueID(uint32_t ID);
	struct FString DestroyInstance(const struct FString& InstanceID);
	void ClientPreAddInstance(const struct FString& ID, TArray<unsigned char> Content);
	void ClearInstanceTree();
	void CheckAndReqRPCReplicatedInstanceContainerContent();
	void ChangeInstance(const struct FString& ID, TArray<unsigned char> Content, bool bCallReceiveChange);
	void ChangeCppInstanceNode(const struct FString& ID, const struct FString& Key, struct FCreativeInstanceNode* Node);
	void AddInstance(const struct FString& ID, TArray<unsigned char> Content);
	void AddCppInstanceNode(const struct FString& ID, struct FCreativeInstanceNode* Node);
	void AddBuildingFlag(const struct FString& ID);
};




class UCreativeInstanceStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	struct FSoftObjectPath                             SoftStaticMeshPath;                                       
	class UMaterialInterface*                          WaitSetMaterial;                                          
	TArray<struct FTransform>                          WaitSetAddInstanceTransforms;                             
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeInstanceStaticMeshComponent");
		return pStaticClass;
	}


	void UpdateAllInstanceByRelativeLocation(TArray<struct FVector> RelativeLocations, const struct FVector& Scale);
	void UnInitInstancedStaticMeshComponntByGroupBuild();
	void SetISMMaterial(class UMaterialInterface* NewMaterial);
	void OnStaticMeshAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath);
	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	void InitInstancedStaticMeshComponntByGroupBuildStaticMesh(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, class UObject* StaticMeshObj, class UMaterialInterface* Material);
	void InitInstancedStaticMeshComponntByGroupBuild(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, const struct FString& MeshPath, class UMaterialInterface* Material);
};




class UCreativeModeIntegralMechanismComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismComponent");
		return pStaticClass;
	}


	bool SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq);
	void OnRepPlayerIntegralsOverride();
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};




class UCreativeModeIntegralMechanismLiteComponent : public UCreativeModeLiteComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          
	int                                                TestIndex;                                                
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismLiteComponent");
		return pStaticClass;
	}


	bool SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq, int curFunctionalIntegral);
	bool PlayerIntegralContains(const struct FString& UID);
	void OnRepPlayerIntegralsOverride();
	void OnRep_TestIndex(int LastIndex);
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};




class UCreativeInterpCurveWidget : public UWidget
{
public:
	float                                              LineThickness;                                            
	float                                              SampleStep;                                               
	float                                              DragThreshold;                                            
	float                                              DefaultKeySize;                                           
	float                                              SelectedKeySize;                                          
	float                                              LongPressTime;                                            
	float                                              LongPressCurveHitDistance;                                
	float                                              LongPressPositionThreshold;                               
	int                                                MaxUndoHistory;                                           
	float                                              MinViewRangeInput;                                        
	float                                              MaxViewRangeInput;                                        
	float                                              MinViewRangeOutput;                                       
	float                                              MaxViewRangeOutput;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FScriptMulticastDelegate                    OnUndoRedoStateChanged;                                   
	struct FScriptMulticastDelegate                    OnKeySelectionChanged;                                    
	struct FScriptMulticastDelegate                    OnKeyMoved;                                               
	struct FScriptMulticastDelegate                    OnKeyMoveCompleted;                                       
	struct FScriptMulticastDelegate                    OnKeyAdded;                                               
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeInterpCurveWidget");
		return pStaticClass;
	}


	void Undo();
	void SetZoomLimits(float InMinViewRangeInput, float InMaxViewRangeInput, float InMinViewRangeOutput, float InMaxViewRangeOutput);
	void SetViewRange(float MinInput, float MaxInput, float MinOutput, float MaxOutput);
	void SetSampleStep(float InSampleStep);
	void SetKeyData(int CurveIndex, int KeyIndex, float InVal, float OutVal, float ArriveTangent, float LeaveTangent, unsigned char InterpMode);
	void SetDragThreshold(float InDragThreshold);
	void SetCurves(TArray<struct FInterpCurveFloat> InCurves, TArray<struct FLinearColor> InColors);
	void Redo();
	void MarkDirty();
	TArray<struct FInterpCurveFloat> GetCurves();
	void FitVertical();
	void FitToView();
	void FitHorizontal();
	void DeleteSelectedKey();
	bool CanUndo();
	bool CanRedo();
	void AddPoint(int CurveIndex, float InVal, float OutVal, float ArriveTangent, float LeaveTangent, unsigned char InterpMode);
};




class UCreativeItemGeneratorComponent : public UItemGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeItemGeneratorComponent");
		return pStaticClass;
	}


	void SetWeightMul(TMap<struct FString, int> Weight);
	void SetAddSpotPercentMul(float percent);
	void ClearWeightMul();
};




class UCreativeLoadManager : public UCreativeModeManagerBase
{
public:
	uint32_t                                           MaxLoadCountPerFrame;                                     
	bool                                               bNewCustomUI;                                             
	unsigned char                                      UnknownData00[0x63];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLoadManager");
		return pStaticClass;
	}


	void UnloadSomeObjects(TArray<struct FString> InstanceIDs, bool bRemovePhysicsObject);
	void UnloadObject(const struct FString& InstanceID, bool bRemovePhysicsObject);
	void LoadSomeObjects(TArray<struct FString> InstanceIDs, bool bLoadImmediately);
	void LoadObject(const struct FString& InstanceID);
	class UObject* LoadCustomUIObject(const struct FString& InstanceID);
	static class UCreativeLoadManager* Get(class UObject* WorldContext);
	void AddObject(const struct FString& InstanceID, const struct FCreativeInstanceNode& InstanceNode);
};




class UCreativeLuaAnimGraphInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x180];                                     
	TMap<struct FString, class UAnimSequenceBase*>     AssetCache;                                               
	TMap<struct FString, class UCreativeRuntimeAnimData*> SequenceWrapperCache;                                     
	unsigned char                                      UnknownData01[0x168];                                     
	struct FScriptMulticastDelegate                    OnPlayEvent;                                              
	struct FScriptMulticastDelegate                    OnLocomotionDrive;                                        
	unsigned char                                      UnknownData02[0xB8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaAnimGraphInstance");
		return pStaticClass;
	}


	void SetRuntimeTime(int NodeId, float Time);
	void SetRuntimeSelection(int NodeId, const struct FString& Selection);
	void SetRuntimePlayRate(int NodeId, float Rate);
	void SetRuntimeLoop(int NodeId, bool bLoop);
	void SetRuntimeAssetPath(int NodeId, const struct FString& AssetPath);
	void SetRuntimeAlpha(int NodeId, float Alpha);
	void SetPropertyString(const struct FName& Name, const struct FString& Value);
	void SetPropertyInt(const struct FName& Name, int Value);
	void SetPropertyFloat(const struct FName& Name, float Value);
	void SetPropertyBool(const struct FName& Name, bool Value);
	void SetPostProcessUpperBoneFilter(const struct FName& BoneName, int BlendDepth);
	void SetOverrideOutputNodeId(int InOverrideOutputNodeId);
	void SetOverrideHookEnabled(ECreativeLuaAnimOverrideHook Hook, bool bEnabled);
	void SetNodeSelection(int NodeId, const struct FString& Selection);
	void SetNodePlayRate(int NodeId, float Rate);
	void SetNodeOverrideMode(int NodeId, int Mode);
	void SetNodeLoop(int NodeId, bool bLoop);
	void SetNodeExternalTime(int NodeId, float Time);
	void SetNodeBlendAlpha(int NodeId, float Alpha);
	void SetNodeAssetPath(int NodeId, const struct FString& AssetPath);
	void SetNodeAsset(int NodeId, const struct FString& AssetPath, float BlendTime);
	void SetBypassEvaluate(bool bInBypassEvaluate);
	void SetActiveHookMask(int InMask);
	void RefreshActiveHookMask();
	void PrewarmGraphAnimAssets();
	void PreloadAnimAssetAsync(const struct FString& AssetPath);
	void PostUpdateAnimation(float DeltaSeconds);
	bool OnUpdateAnimation(float DeltaSeconds);
	bool OnPreEvaluateSelect(int NodeId, float DeltaSeconds);
	bool OnPreEvaluateNode(int NodeId, ECreativeLuaAnimNodeType NodeType, const struct FString& NodeName, float DeltaSeconds);
	bool OnPreEvaluateMask(int NodeId, float DeltaSeconds);
	bool OnPreEvaluateLayeredBoneBlend(int NodeId, float DeltaSeconds);
	bool OnPreEvaluateGraph(float DeltaSeconds);
	bool OnPreEvaluateBoneRotate(int NodeId, float DeltaSeconds);
	bool OnPreEvaluateBlendSpace2D(int NodeId, float DeltaSeconds);
	bool OnPreEvaluateBlendSpace(int NodeId, float DeltaSeconds);
	bool OnPreEvaluateBlendAlpha(int NodeId, float* OutAlpha);
	bool OnPreEvaluateAnimationPlayer(int NodeId, float DeltaSeconds);
	void OnLuaAnimGraphPlayEvent__DelegateSignature(int NodeId, int EventType);
	void OnLocomotionDrive__DelegateSignature(float DeltaSeconds);
	void OnEvaluateFailed(int FailedNodeId);
	bool IsOverrideHookEnabled(ECreativeLuaAnimOverrideHook Hook);
	bool IsGraphValid();
	float GetRuntimeTime(int NodeId);
	struct FString GetRuntimeSelection(int NodeId);
	float GetRuntimePlayRate(int NodeId);
	bool GetRuntimeNodeInfo(int NodeId, ECreativeLuaAnimNodeType* OutNodeType, struct FString* OutNodeName);
	bool GetRuntimeLoop(int NodeId);
	struct FString GetRuntimeAssetPath(int NodeId);
	float GetRuntimeAlpha(int NodeId);
	struct FString GetPropertyString(const struct FName& Name);
	int GetPropertyInt(const struct FName& Name);
	float GetPropertyFloat(const struct FName& Name);
	bool GetPropertyBool(const struct FName& Name);
	struct FSluaBPVar GetPropertiesTable();
	class AActor* GetOwnerActor();
	float GetAnimationPlayerTime(int NodeId);
	float GetAnimationPlayerDuration(int NodeId);
	int GetActiveHookMask();
	void ClearGraph();
	void ClearAllEvaluateOverrides();
	void ApplyEvaluateOverrides();
};




class UCreativeLuaAnimGraphManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	TMap<struct FString, class UCreativeRuntimeAnimData*> RuntimeAnimDataMap;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaAnimGraphManager");
		return pStaticClass;
	}


	void SetRuntimeAnimData(const struct FString& Key, class UCreativeRuntimeAnimData* Data);
	void SetAnimPropertyString(class USkeletalMeshComponent* MeshComp, const struct FName& Name, const struct FString& Value);
	void SetAnimPropertyInt(class USkeletalMeshComponent* MeshComp, const struct FName& Name, int Value);
	void SetAnimPropertyFloat(class USkeletalMeshComponent* MeshComp, const struct FName& Name, float Value);
	void SetAnimPropertyBool(class USkeletalMeshComponent* MeshComp, const struct FName& Name, bool Value);
	void RemoveGraphFromMesh(class USkeletalMeshComponent* MeshComp);
	void RemoveGraphFromActor(class AActor* TargetActor);
	class UCreativeRuntimeAnimData* RegisterAnimSequenceByKey(const struct FString& Key, const struct FString& AssetPath);
	class UCreativeRuntimeAnimData* RegisterAnimSequence(const struct FString& Key, class UAnimSequenceBase* Anim);
	class UCreativeRuntimeAnimData* RegisterAIGCAnim(const struct FString& Key, class UAIGCAnimObject* AIGCData, int FrameRate);
	class UCreativeRuntimeAnimData* GetRuntimeAnimData(const struct FString& Key);
	class USkeletalMeshComponent* GetPreviewMeshComponent(class AActor* TargetActor);
	class UCreativeLuaAnimGraphInstance* GetAnimInstance(class AActor* TargetActor);
	static class UCreativeLuaAnimGraphManager* Get(class UObject* WorldContext);
	void DestroyPreviewMeshComponent(class AActor* TargetActor);
	class USkeletalMeshComponent* CreatePreviewMeshComponent(class AActor* TargetActor, class USkeletalMesh* InSkeletalMesh, const struct FVector& RelativeOffset);
	void ClearRuntimeAnimData(const struct FString& Key);
	void ClearAllRuntimeAnimData();
	class UCreativeLuaAnimGraphInstance* ApplyGraphToMesh(class USkeletalMeshComponent* MeshComp, const struct FSluaBPVar& GraphTable, bool bUseCustomAssetKey);
	class UCreativeLuaAnimGraphInstance* ApplyGraphToActor(class AActor* TargetActor, const struct FSluaBPVar& GraphTable, bool bUseCustomAssetKey);
};




class UCreativeLuaAPIObjectManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaAPIObjectManager");
		return pStaticClass;
	}


	static class UCreativeLuaAPIObjectManager* Get(class UObject* WorldContext);
};




class UCreativeTriggerCheckData : public UObject
{
public:
	class UPrimitiveComponent*                         OverlapComponent;                                         
	struct FCreativeTriggerSource                      TriggerSource;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<TWeakObjectPtr<class AActor>>               CacheInAreaActors;                                        
	TMap<TWeakObjectPtr<class AActor>, ECreativeTriggerSourceType> LastOverlapActorType;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTriggerCheckData");
		return pStaticClass;
	}

};




class UCreativeLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaBlueprintLibrary");
		return pStaticClass;
	}


	static void CheckTriggerAreaOverlaps(TArray<class UCreativeTriggerCheckData*>* TriggerDataList, TArray<struct FCreativeTriggerActorType>* OutTriggerEnter, TArray<struct FCreativeTriggerActorType>* OutTriggerLeave);
};




class UCreativeLuaCodeManager : public UCreativeModeManagerBase
{
public:
	TMap<unsigned char, struct FString>                CodeMap;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	uint32_t                                           ReplicatedLuaCodeInfoMapSeq;                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaCodeManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnRep_ReplicatedLuaCodeInfoMapSeq();
	void OnPreCreativeLuaVMUnLoad();
	void OnPlayerControllerBeginPlay(class APlayerController* PlayerController);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnCreativeLuaInitialized();
	void MarkReplicatedLuaCodeInfoMapDirty();
	static class UCreativeLuaCodeManager* Get(class UObject* WorldContext);
};




class UCreativeLuaEntityManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TMap<int64_t, TWeakObjectPtr<class UObject>>       CacheMap;                                                 
	unsigned char                                      UnknownData01[0x50];                                      
	unsigned char                                      UnknownData02[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaEntityManager");
		return pStaticClass;
	}


	class UObject* UUID2UObject(int64_t* UUID);
	bool UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType);
	uint32_t UUID2Key(int64_t* UUID);
	int64_t ResolveUObjectUUID(class UObject* Object);
	void ResetAll();
	void RemoveUUID(int64_t* UUID);
	class UObject* LuaUUID2UObject(struct FString* UUID);
	bool LuaUUID2Type(struct FString* UUID, EEntityType* Type, unsigned char* SubType);
	struct FString LuaUUID2Key(struct FString* UUID, EEntityType* Type, unsigned char* SubType);
	void LuaRemoveUUID(struct FString* UUID);
	struct FString LuaCreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType);
	int64_t GetInstanceObjectUUID(int64_t* UUID);
	static class UCreativeLuaEntityManager* Get(class UObject* WorldContext);
	int64_t GenUUID(struct FString* Key, EEntityType* Type, unsigned char* SubType);
	int64_t CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType);
	int64_t CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType);
	bool ContainsUUID(int64_t UUID);
};




class UCreativeLuaSignalManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, class UCreativeApiObject*>    ObjectMap;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaSignalManager");
		return pStaticClass;
	}


	void SpawnApiObjectsByConfig();
	void RegisterObject(class UCreativeApiObject* NewObject);
	void OnPreCreativeLuaVMUnLoad();
	void OnCreativeLuaVMLoaded();
	class UCreativeApiObject* GetObject(const struct FString& ModuleName);
	class UCreativeBridgeLuaVM* GetCreativeLuaVM();
	static class UCreativeLuaSignalManager* Get(class UObject* WorldContext);
	int ExecuteAPI(class UCreativeBridgeLuaVM* VM, struct FString* ModuleName, struct FString* FuncName);
	class UCreativeApiObject* CGetAPIObject(const struct FString& ModuleName);
	void CClearAPIObject();
	void CAddAPIObject(const struct FString& ModuleName, class UCreativeApiObject* Object);
};




class UCreativeLuaTraitManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaTraitManager");
		return pStaticClass;
	}


	TArray<struct FString> GetSupportEntitiesByTraits(TArray<struct FString> TraitNames);
	TArray<struct FString> GetSupportEntitiesByTrait(const struct FString& TraitName);
	static class UCreativeLuaTraitManager* Get(class UObject* WorldContext);
};




class UCreativeLuaVMManager : public UCreativeModeManagerBase
{
public:
	class UCreativeBridgeLuaVM*                        LuaVM;                                                    
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<struct FString>                             EnvLuaCheckPaths;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaVMManager");
		return pStaticClass;
	}


	void UnRegisterGameTypePreChangedDelegate();
	void RegisterGameTypePreChangedDelegate();
	void ReceiveSluaCustomMemoryOutCallback();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveCheckAndLoadLuaVM();
	void OpenEnvLuaProfile();
	void OpenCustomMemoryLimit(int64_t memoryLimit);
	void OnLuaVMAtPanic(const struct FString& errMsg);
	void OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void LoadLuaVM();
	class UCreativeBridgeLuaVM* GetCreativeLuaVM();
	static class UCreativeLuaVMManager* Get(class UObject* WorldContext);
	bool CreativeLuaVMLoaded();
	bool CreativeLuaInitialized();
	void ClosenEnvLuaProfile();
	void CloseCustomMemoryLimit();
};




class UCreativeManagerCenterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeManagerCenterInterface");
		return pStaticClass;
	}

};




class UCreativeModeModDataCheckManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeModDataCheckManager");
		return pStaticClass;
	}


	void ReceiveOnPreAddInstance();
	void ReceiveOnPostAddInstance();
	void OnPreAddInstance();
	void OnPostAddInstance();
	static class UCreativeModeModDataCheckManager* Get(class UObject* WorldContext);
};




class UCreativeModeChatBubbleUI : public UUserWidget
{
public:
	struct FName                                       SocketName;                                               
	bool                                               bMoveWithPawn;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     TargetOffset;                                             
	TWeakObjectPtr<class AActor>                       CurTargetActor;                                           
	class UCanvasPanelSlot*                            ChildSlot;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	struct FVector                                     CurrentTargetPosition;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeChatBubbleUI");
		return pStaticClass;
	}


	void TickLua();
	void ForceUpdatePosition();
};




class UCreativeModeGlobalManagerCenter : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<class USTExtraManagerBase*>                 ManagerArray;                                             
	TArray<class UClass*>                              ManagerClassArray;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGlobalManagerCenter");
		return pStaticClass;
	}


	void OnCreativeDelegateCreated();
};




class UCreativeModeNetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeNetBlueprintLibrary");
		return pStaticClass;
	}


	static bool NetSerializeObject(class UObject* Obj, uint32_t* OutNetGUID, struct FString* OutPath, bool* OutIsDynamic);
	static bool IsObjectReplicatable(class UObject* Object);
	static bool HasActorChannelForPC(class UObject* Object, class APlayerController* PC);
	static uint32_t GetOrAssignNetGUID(class UObject* Obj);
	static class UObject* GetObjectFromNetGUID(class UObject* WorldContextObject, uint32_t NetGUID);
	static uint32_t GetNetGUID(class UObject* Obj);
	static class UObject* DeserializeObject(uint32_t NetGUID, const struct FString& Path, bool bIsDynamic);
};




class ACreativeModeStaticMeshBatchActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      
	struct FCreativeBatchInstancedStaticMesh           InstancedStaticMeshInfo;                                  
	struct FCreativeFineBatchInstancedStaticMesh       BatchInstancedStaticMeshInfo;                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeStaticMeshBatchActor");
		return pStaticClass;
	}


	void SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID);
};




class UCreativeModeTouchWidget : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeTouchWidget");
		return pStaticClass;
	}


	struct FEventReply OnHandleTouchStart(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnHandleTouchMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnHandleTouchEnd(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool OnHandleTouch(int Type, int FingerIndex, const struct FVector2D& pos);
};




class UTaskProgressItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	int                                                ConfigIndex;                                              
	int                                                ProgressType;                                             
	int                                                CurrentProgress;                                          
	int                                                MaxProgress;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.TaskProgressItem");
		return pStaticClass;
	}


	void Update(float DeltaTime);
	void SetCurrentProgress(int Value);
	class UTaskInstance* GetTaskInstance();
	class UStageRuntimeState* GetStageRuntimeState();
	int GetProgressType();
	int GetMaxProgress();
	int GetCurrentProgress();
	void Deactivate();
	void AddProgress(int Delta);
	void Activate();
};




class UStageRuntimeState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	int                                                StageIdx;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<class UTaskProgressItem*>                   ProgressItems;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.StageRuntimeState");
		return pStaticClass;
	}


	bool Update(float DeltaTime);
	int GetStageIdx();
	TArray<class UTaskProgressItem*> GetProgressItems();
	class UTaskInstance* GetOwnTaskInstance();
	class UTaskProgressItem* FindProgressItemByConfigIndex(int Index);
	void Deactivate();
	class UTaskProgressItem* AddProgressItem(int ProgressType);
	void Activate();
};




class UTaskInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     TaskTypeID;                                               
	TArray<uint32_t>                                   PlayerKeys;                                               
	class UStageRuntimeState*                          CurrentStage;                                             
	ETaskStatus                                        TaskStatus;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<class UStageRuntimeState*>                  StageStates;                                              
	struct FString                                     ReservedStr;                                              
	bool                                               bShouldReplicated;                                        
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.TaskInstance");
		return pStaticClass;
	}


	bool Update(float DeltaTime);
	void SetTaskStatus(ETaskStatus StatusVal);
	void SetShouldReplicated(bool Val);
	void SetReservedString(const struct FString& Val);
	void RemovePlayer(uint32_t PlayerKey);
	void ReceiveSetTaskStatus(ETaskStatus PreviousStatusVal, ETaskStatus NextStatusVal);
	void ReceiveOnDeactivate();
	void MarkTaskDirty();
	bool IsRefbyPlayer(uint32_t PlayerKey);
	void InitializeStageInfo();
	struct FString GetTaskTypeID();
	TArray<uint32_t> GetPlayerKeys();
	class UStageRuntimeState* GetCurrentStage();
	void AdvanceToNextStage(class UStageRuntimeState* NewStageInfo);
	void AddPlayer(uint32_t PlayerKey);
	class UStageRuntimeState* AddNewStage();
};




class UCreativeModeGameTaskManager : public UCreativeModeManagerBase
{
public:
	TArray<class UTaskInstance*>                       TaskInstArray;                                            
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameTaskManager");
		return pStaticClass;
	}


	void Reset();
	void RemoveTaskInstance(class UTaskInstance* TaskInstance);
	struct FString ReceiveGetProgressItemLuaPathByType(int ProgressType);
	struct FString GetProgressItemLuaPathByType();
	TArray<class UTaskInstance*> GetAllTaskInstances();
	static class UCreativeModeGameTaskManager* Get(class UObject* WorldContext);
	class UTaskInstance* FindTaskInstanceByType(const struct FString& TaskTypeID);
	class UTaskInstance* CreateTaskInstance(const struct FString& TaskTypeID);
};




class UCreativeMonsterAnimInstance : public UActorEditorAnimInstanceBase
{
public:
	class UAnimSequence*                               C_Birth_02_CustomOverride;                                
	class UAnimMontage*                                C_Birth_01_Montage_CustomOverride;                        
	class UAnimMontage*                                C_Birth_02_Montage_CustomOverride;                        
	class UAnimSequence*                               C_Idle_CustomOverride;                                    
	class UBlendSpace1D*                               C_Random_Idle_CustomOverride;                             
	class UAnimSequence*                               C_Combat_Idle_CustomOverride;                             
	class UBlendSpace1D*                               C_Random_Combat_Idle_CustomOverride;                      
	class UBlendSpace1D*                               C_Run_CustomOverride;                                     
	class UAnimSequence*                               C_Run_Sequence_CustomOverride;                            
	class UBlendSpace*                                 C_Around_Run_CustomOverride;                              
	class UBlendSpace1D*                               C_Combat_Run_CustomOverride;                              
	class UAnimSequence*                               C_Attack_01_CustomOverride;                               
	class UAnimSequence*                               C_Attack_02_CustomOverride;                               
	class UAnimSequence*                               C_Attack_03_CustomOverride;                               
	class UAnimSequence*                               C_Hit_Hard_CustomOverride;                                
	class UBlendSpace*                                 C_Hit_BlendSpace_CustomOverride;                          
	class UAnimSequence*                               C_Jump_Start_CustomOverride;                              
	class UBlendSpace1D*                               C_Fall_CustomOverride;                                    
	class UAnimSequence*                               C_Fall_Stand_CustomOverride;                              
	class UBlendSpace1D*                               C_Fall_Stand_BS_CustomOverride;                           
	class UAnimSequence*                               C_Fall_Hard_Stand_CustomOverride;                         
	class UBlendSpace1D*                               C_Fall_Hard_Stand_BS_CustomOverride;                      
	class UAnimMontage*                                C_Death_Front_CustomOverride;                             
	class UAnimMontage*                                C_Death_HeadShot_CustomOverride;                          
	class UAnimMontage*                                C_Death_VehicleHit_CustomOverride;                        
	class UAnimMontage*                                C_Death_Explosion_CustomOverride;                         
	class UAnimMontage*                                C_Death_Stand_CustomOverride;                             
	class UAnimSequence*                               C_Climb_CustomOverride;                                   
	class UAnimSequence*                               C_Climb_Window_CustomOverride;                            
	class UAnimSequence*                               C_Climbing_CustomOverride;                                
	class UAnimSequence*                               C_Stun_CustomOverride;                                    
	class UAnimSequence*                               C_Striding_CustomOverride;                                
	class UAnimMontage*                                C_ActiveMontage_CustomOverride;                           
	class UAnimMontage*                                C_TurnMontage_CustomOverride;                             
	class UBlendSpace1D*                               C_Turn_BS_CustomOverride;                                 
	class UAnimSequence*                               C_StopLeftLeg_CustomOverride;                             
	class UAnimSequence*                               C_RunStopLeftLeg_CustomOverride;                          
	class UAnimSequence*                               C_StopRightLeg_CustomOverride;                            
	class UAnimSequence*                               C_RunStopRightLeg_CustomOverride;                         
	class UAnimSequence*                               C_StopLeftLeg_Front_CustomOverride;                       
	class UAnimSequence*                               C_RunStopLeftLeg_Front_CustomOverride;                    
	class UAnimSequence*                               C_StopRightLeg_Front_CustomOverride;                      
	class UAnimSequence*                               C_RunStopRightLeg_Front_CustomOverride;                   
	bool                                               C_Birth_01_IsValid_CustomOverride;                        
	bool                                               C_Birth_02_IsValid_CustomOverride;                        
	bool                                               C_Idle_IsValid_CustomOverride;                            
	bool                                               C_Combat_Idle_IsValid_CustomOverride;                     
	bool                                               C_Run_IsValid_CustomOverride;                             
	bool                                               C_Combat_Run_IsValid_CustomOverride;                      
	bool                                               C_Attack_01_IsValid_CustomOverride;                       
	bool                                               C_Attack_02_IsValid_CustomOverride;                       
	bool                                               C_Stiff_IsValid_CustomOverride;                           
	bool                                               C_Fall_IsValid_CustomOverride;                            
	bool                                               C_Jump_IsValid_CustomOverride;                            
	bool                                               C_Light_Fall_Stand_IsValid_CustomOverride;                
	bool                                               C_Hard_Fall_Stand_IsValid_CustomOverride;                 
	bool                                               C_Death_Front_IsValid_CustomOverride;                     
	bool                                               C_Death_HeadShot_IsValid_CustomOverride;                  
	bool                                               C_Death_VehicleHit_IsValid_CustomOverride;                
	bool                                               C_Death_Explosion_IsValid_CustomOverride;                 
	bool                                               C_Death_Stand_IsValid_CustomOverride;                     
	bool                                               C_Hit_BlendSpace_IsValid_CustomOverride;                  
	bool                                               C_Climb_IsValid_CustomOverride;                           
	bool                                               C_Climb_Window_IsValid_CustomOverride;                    
	bool                                               C_ClimbOnCeiling_IsValid_CustomOverride;                  
	bool                                               C_Stun_IsValid_CustomOverride;                            
	bool                                               bIsLaunchAirFly_CustomOverride;                           
	bool                                               bIsLaunchAirGround_CustomOverride;                        
	bool                                               bIsLaunchAirRiseUp_CustomOverride;                        
	bool                                               C_Hurting_CustomOverride;                                 
	unsigned char                                      UnknownData00[0x1];                                       
	struct FVector                                     C_HurtDir_CustomOverride;                                 
	int                                                C_RandomAnimID_CustomOverride;                            
	int                                                C_IdleBlendSpaceValue_CustomOverride;                     
	bool                                               C_IsLeftRightMove_CustomOverride;                         
	bool                                               C_IsTurning_CustomOverride;                               
	bool                                               C_IsTurningLeft_CustomOverride;                           
	unsigned char                                      UnknownData01[0x1];                                       
	float                                              C_AdditiveYaw_CustomOverride;                             
	bool                                               C_LeftLegDown_CustomOverride;                             
	bool                                               C_FirstStopDone_CustomOverride;                           
	bool                                               C_SecondStopDone_CustomOverride;                          
	unsigned char                                      UnknownData02[0x1];                                       
	int                                                C_StopLegAnimType_CustomOverride;                         
	bool                                               C_LegStopping_CustomOverride;                             
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              C_StopCurveOutput_CustomOverride;                         
	float                                              C_RunStopCurveOutput_CustomOverride;                      
	bool                                               C_Born_State_CustomOverride;                              
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                C_ClimbState_CustomOverride;                              
	int                                                C_StrideState_CustomOverride;                             
	struct FVector                                     C_Velocity_CustomOverride;                                
	float                                              C_MoveSpeed_CustomOverride;                               
	float                                              C_MaxSpeed_CustomOverride;                                
	float                                              C_StopSpeed_CustomOverride;                               
	float                                              C_FallingSpeed_CustomOverride;                            
	float                                              C_SpeedScale_CustomOverride;                              
	float                                              C_RunStopSpeedScale_CustomOverride;                       
	bool                                               C_StopInRun_CustomOverride;                               
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              C_LerpIdleBlendSpaceValue_CustomOverride;                 
	unsigned char                                      UnknownData06[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeMonsterAnimInstance");
		return pStaticClass;
	}


	void PlayCreativeDynamicMontage(class UAnimSequenceBase* Asset, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, bool bIsLoop, float InTimeToStartMontageAt, const struct FName& SlotNodeName);
	void ClearAnimReferences();
	void CacheAnimVarOverride();
	void BP_CacheAnimVarOverride();
};




class UCreativeModeNavigationManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeNavigationManager");
		return pStaticClass;
	}


	void SetTimeSliceConfig(int MaxTaskPerSlice, int SliceTimeLen);
	void SetNavmeshBuildPolicy(int PolicyVal);
	void SetDynamicModeEnable(bool bEnable);
	void SetDebugOutputEnable(bool bEnable);
	void SetConcurrentTaskNum(int Num);
	TArray<unsigned char> SerializeDynamicTileToByteArr(int MaxFileSize, int MaxTileToAdd);
	void RevokePendingBuildingTasks();
	void ReceiveOnUnInit();
	void ReceiveOnInit();
	void RebuildDynamicTilesByCoord(TArray<struct FIntPoint>* DynamicTiles);
	void RebuildDynamicTiles(TArray<class AActor*>* Actors);
	bool IsBuildingInProgress();
	void ImportDynamicTile(struct FString* Path);
	void GetWalkableTrianglesInBox(const struct FBox& bBox, TArray<struct FVector>* OutVertices, TArray<int>* OutIndices);
	int GetDynamicTilesCount();
	bool GetDynamicTileMemCost(int* Total, int* OctTree, int* TileCache, int* DynamicTile, int* DynamicTileCount);
	struct FIntPoint GetDynamicTileCoordByPos(const struct FVector& pos);
	TArray<class AActor*> GetAllAssociateActors();
	static class UCreativeModeNavigationManager* Get(class UObject* WorldContext);
	void ExportDynamicTileStandard(struct FString* Path);
	void ExportDynamicTile(struct FString* Path);
	void EnsureDynamicBuildCompletion();
	void DeserializeDynamicTileFromByteArr(TArray<unsigned char>* ByteArr);
	float ComputeTotalWalkableSurfaceAreaInBox(const struct FBox& bBox);
	void ClearNavCollision();
	void ClearDynamicOctreeData();
	void ClearDynamicNavMesh();
	void ClearAssociateActors();
	TArray<struct FVector> CalSamplePointsInBoxLegacy(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints);
	TArray<struct FVector> CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints);
	TArray<struct FVector> CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints);
	void AddNavAffectedObjects(TArray<class AActor*> Actors);
	void AddNavAffectedObject(class AActor* Actor);
};




class UCreativeNetPacketInspectorBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeNetPacketInspectorBridge");
		return pStaticClass;
	}


	void ToggleCapture();
	void SetFilter(const struct FString& filter);
	void SelectRecord(int RecordIndex);
	void CopyText(const struct FString& Text);
	void Copy(const struct FString& CopyTarget);
	void Clear();
};




class ACreativeObjectEditAxisActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	struct FVector                                     AxisState;                                                
	struct FVector                                     ForceHideAxis;                                            
	struct FTransform                                  WorldBaseTransform;                                       
	unsigned char                                      UnknownData01[0x48];                                      
	class APlayerCameraManager*                        PlayerCameraManager;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectEditAxisActor");
		return pStaticClass;
	}


	void StartEdit(int Axis, const struct FVector2D& pos, const struct FVector& HitPos);
	void SetForceHideAxis(const struct FVector& State);
	void SetFixedAxisSize(float FixedSize);
	void SetEditType(int InEditType, int InEditSubType);
	void SetComponentVisible(class USceneComponent* Comp, bool bVisible);
	void SetAxisState(const struct FVector& State);
	void MarkEditing(bool bDoing);
	bool GetObjectScreenPos(struct FVector2D* OutPos);
	bool GetEditAxisWorldDir(struct FVector* OutDir);
	void CalScale(const struct FVector2D& pos, struct FVector* OutScale);
	float CalRotation(const struct FVector2D& pos, struct FRotator* OutRot);
	void CalLocation(const struct FVector2D& pos, struct FVector* OutLoc);
};




class UCreativeModeObjectFuncComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectFuncComponent");
		return pStaticClass;
	}

};




class UCreativeModeObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectInterface");
		return pStaticClass;
	}


	void ReceiveOnPostSetInstanceId(const struct FString& InstanceID);
};




class ACreativeObjectLocalAxisActor : public ALuaActor
{
public:
	class AActor*                                      AttachActor;                                              
	float                                              AttachOffsetZ;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	class USceneComponent*                             AxisComponent;                                            
	class USceneComponent*                             GridComponent;                                            
	struct FTransform                                  BaseTransform;                                            
	struct FVector                                     Offset;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FTransform                                  AttachTransform;                                          
	bool                                               bAttach;                                                  
	bool                                               bNoRotate;                                                
	bool                                               bNoZClamp;                                                
	unsigned char                                      UnknownData02[0x1];                                       
	float                                              SnapUnit;                                                 
	struct FVector                                     SnapAxisConfig;                                           
	float                                              HideDelayInterval;                                        
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectLocalAxisActor");
		return pStaticClass;
	}


	void SetAxisComponents(class USceneComponent* Axis, class USceneComponent* Grid);
	void NeedUpdate();
};




class UCreativeObjectManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, class UObject*>               ObjectMap;                                                
	TMap<struct FString, bool>                         ObjectActiveMap;                                          
	bool                                               bContainsSpawnCompleteCallback;                           
	bool                                               bReordering;                                              
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                Client_FrameSpawnNum;                                     
	int                                                Ds_FrameSpawnNum;                                         
	bool                                               bFrameDestroyObjectEnable;                                
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                Client_FrameDestroyNum;                                   
	int                                                Ds_FrameDestroyNum;                                       
	bool                                               bPostSpawnCompleteEventFlag;                              
	unsigned char                                      UnknownData02[0x6F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectManager");
		return pStaticClass;
	}


	void SpawnObjectForStreaming(const struct FString& InstanceID);
	class UObject* SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	bool SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType);
	bool ResetObjectStreamingType(const struct FString& InstanceID);
	bool RemoveSpawnObjectInfoFormQueue(struct FString* InstanceID);
	void RemovePhysicsObject(const struct FString& InstanceID);
	bool RemoveObject(const struct FString& InstanceID, bool bRemovePhysicsObject);
	bool RemoveDestroyObjectInfoFormQueue(struct FString* InstanceID);
	void ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveOnPostLoadMapWithWorld(class UWorld* World);
	void ReceiveClearAllObjects();
	void OnPostLoadMapWithWorld(class UWorld* World);
	void OnObjectSpawnComplete(const struct FString& ID);
	bool IsLogicObject(const struct FString& ID);
	bool IsGroupObject(const struct FString& ID);
	bool IsCanBatchObject(const struct FString& ID);
	struct FTransform GetObjectTransform(const struct FString& ID);
	uint32_t GetObjectNum();
	struct FString GetObjectAssetPath(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	class UObject* GetObject(const struct FString& InstanceID);
	uint32_t GetActiveObjectNum();
	static class UCreativeObjectManager* Get(class UObject* WorldContext);
	void DestroyObjectForStreaming(const struct FString& InstanceID);
	bool DestroyObject(const struct FString& InstanceID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform);
	void AddSpawnObjectToQueue(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	bool AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
	void AddDestroyObjectToQueue(const struct FString& InstanceID);
};




class UCreativeObjectStateManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectStateManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	static class UCreativeObjectStateManager* Get(class UObject* WorldContext);
};




class UCreativeOccupationAreaLiteComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOccupationAreaLiteComponent");
		return pStaticClass;
	}

};




class UCreativeOctreeSyncManager : public UCreativeModeManagerBase
{
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BackwardOffset;                                           
	bool                                               bRootPositionInitialized;                                 
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              MaxSearchRadius;                                          
	float                                              ExpandSearchRadius;                                       
	unsigned char                                      UnknownData02[0x4];                                       
	struct FOctreeNode                                 RootNode;                                                 
	float                                              CellSize;                                                 
	float                                              MergeDistance;                                            
	int                                                MaxDepth;                                                 
	float                                              MinCellSize;                                              
	int                                                SplitThreshold;                                           
	bool                                               bCheckObstacles;                                          
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                DataCount;                                                
	unsigned char                                      UnknownData04[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOctreeSyncManager");
		return pStaticClass;
	}


	bool ShouldMergeData(const struct FOctreeData& ExistingData, const struct FOctreeData& NewData, float Distance);
	void ResetTree();
	int RemoveDataInBoundsByActorRecursive(const struct FBox& BoundingBox, class AActor* Actor, struct FOctreeNode* Node);
	void RemoveDataInBoundsByActor(class AActor* Actor, struct FBox* BoundingBox);
	void RemoveDataByUIDs();
	void RemoveDataByUID(int UID);
	void RemoveDataByPlayerKey(const struct FString& PlayerKey);
	void InsertData(const struct FOctreeData& InData);
	void Initialize(float InCellSize, float InMergeDistance, int InMaxDepth, float InMinCellSize);
	void HookDecalManager(class ACreativeDecalManager* DecalManager, bool bRegister);
	bool HasObstacleBetween(const struct FVector& Start, const struct FVector& End);
	struct FVector GetOffsetLocationForObstacleCheck(const struct FVector& Location, const struct FVector& Forward);
	static TArray<struct FOctreeData> GetNodeData(const struct FOctreeNode& Node);
	static TArray<struct FOctreeNode> GetNodeChildren(const struct FOctreeNode& Node);
	void GetNearbyDataRecursive(const struct FOctreeNode& Node, const struct FVector& Location, float SearchRadius, int MaxCount, bool bExpandSearch, TArray<struct FOctreeData>* OutData);
	TArray<struct FOctreeData> GetNearbyData(const struct FVector& Location, int MaxCount, bool bSortByDistance, bool bExpandSearch);
	TArray<struct FOctreeData> GetAllData();
	static class UCreativeOctreeSyncManager* Get(class UObject* WorldContext);
	void ExpandRootNode(const struct FVector& Point);
	void EnsureRootContainsPoint(const struct FVector& Point);
};




class UCreativeOfflineBuildManager : public USTExtraManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOfflineBuildManager");
		return pStaticClass;
	}


	void ReceiveOnPostSetLuaEventBridgeInstance();
	void OnPostSetLuaEventBridgeInstance();
	static class UCreativeOfflineBuildManager* Get(class UObject* WorldContext);
};




class UCreativeOpenUIRoundTripToolBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOpenUIRoundTripToolBridge");
		return pStaticClass;
	}


	void RunTest(const struct FString& SCOPE, int Iterations, float Tolerance, const struct FString& ExportFlavor);
	void OpenReportFolder();
	void CopyOutput();
};




class UCreativeOverlapCheckComponent : public ULuaActorComponent
{
public:
	struct FScriptDelegate                             OnBeginOverlapDelegate;                                   
	struct FScriptDelegate                             OnEndOverlapDelegate;                                     
	TArray<class UClass*>                              OverlapClassFilters;                                      
	class UPrimitiveComponent*                         OverlapCheckComponent;                                    
	TArray<class AActor*>                              InAreaActors;                                             
	int                                                OverlapCheckFrame;                                        
	int                                                OverlapLowCheckFrame;                                     
	float                                              OverlapCheckCD;                                           
	int                                                EmptyCheckNumber;                                         
	bool                                               HighPrecisionCheck;                                       
	bool                                               bFilterInVehicle;                                         
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              CheckTickFrame;                                           
	class UGameLuaAPI*                                 GameLuaAPI;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOverlapCheckComponent");
		return pStaticClass;
	}


	void StartOverlapCheck();
	bool IsOverlapClass(class AActor* OverlapActor);
	void InitOverlapComponent(class UPrimitiveComponent* Component);
	void EndOverlapCheck();
	void EnableFilterInVehicle(bool bEnable);
	void CheckOverlapActors();
	void AddOverlapClass(class UClass* OverlapClass);
};




class UCreativeParentChildManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeParentChildManager");
		return pStaticClass;
	}


	static class UCreativeParentChildManager* Get(class UObject* WorldContext);
};




class UCreativePerfManager : public UCreativeModeManagerBase
{
public:
	TMap<class AActor*, struct FCreaitvePerfDataMap>   ActorPerfData;                                            
	struct FCreativeNetData                            BeginSampleNetData;                                       
	float                                              FPSStatInterval;                                          
	unsigned char                                      UnknownData00[0x1C];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePerfManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	TMap<struct FName, float> GetUObjectMemoryUsage();
	TArray<struct FCreaitvePerfDataMap> GetResult();
	struct FCreativeNetData GetNetData();
	struct FCreativeMemoryData GetMemoryData();
	void GetCPUUsage(int Type, float* OutCPUTimePct, float* OutCPUTimePctRelative);
	static class UCreativePerfManager* Get(class UObject* WorldContext);
	void EndSample();
	void BeginSample();
	void AddActorToRecord(class AActor* Actor, int AssetId, const struct FName& ScopeName);
};




class UCreativePhotonDestructibleMeshComponent : public UPhotonDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	struct FPhotonDestructionParam                     DestructionParam;                                         
	int                                                MaxFXFragmentNumber;                                      
	unsigned char                                      UnknownData01[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetInstanceActive(bool bActive);
	void SetDestructionParam(const struct FPhotonDestructionParam& Param);
	void SetCreativeServerDamagedDelegate(const struct FScriptDelegate& del);
	void SetCreativeClientFragmentStateChangedDelegate(const struct FScriptDelegate& del);
	bool RebornOneFragment(int FragmentIndex);
	bool RebornInstance();
	bool RandomRecoverOneFragment();
	void RandomDestroyOneFragment();
	void DestroyInstance();
	bool CheckFragmentOverlap(int FragmentIndex);
};




class UCreativePhotonHierarchicalInstancedDestructibleMeshComponent : public UPhotonHierarchicalInstancedDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     MinClusterInstanceID;                                     
	TArray<uint32_t>                                   InstanceReplicationIndex;                                 
	TMap<int, struct FPhotonDestructionParam>          InstanceToDestructionParams;                              
	TMap<struct FString, int>                          UGCInstanceIDToInstanceIndex;                             
	int                                                MaxFXFragmentNumber;                                      
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate);
	void SetInstanceMaxHp(int InstanceIndex, float MaxHP);
	void SetInstanceActive(const struct FString& InstanceID, bool bActive);
	void SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams);
	bool RebornOneFragment(const struct FString& InstanceID, int FragmentIndex);
	bool RebornInstance(const struct FString& InstanceID);
	bool RandomRecoverOneFragment(const struct FString& InstanceID);
	void RandomDestroyOneFragment(const struct FString& InstanceID);
	void OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex);
	void OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType);
	struct FString GetUGCInstanceID(int InstanceIndex);
	void DestroyInstance(const struct FString& InstanceID);
	bool CheckFragmentOverlap(int InstanceIndex, int FragmentIndex);
};




class UCreativePhotonInstancedDestructibleMeshComponent : public UPhotonInstancedDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FString                                     MinClusterInstanceID;                                     
	TArray<uint32_t>                                   InstanceReplicationIndex;                                 
	TMap<int, struct FPhotonDestructionParam>          InstanceToDestructionParams;                              
	TMap<struct FString, int>                          UGCInstanceIDToInstanceIndex;                             
	int                                                MaxFXFragmentNumber;                                      
	unsigned char                                      UnknownData01[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonInstancedDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate);
	void SetInstanceMaxHp(int InstanceIndex, float MaxHP);
	void SetInstanceActive(const struct FString& InstanceID, bool bActive);
	void SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams);
	bool RebornOneFragment(const struct FString& InstanceID, int FragmentIndex);
	bool RebornInstance(const struct FString& InstanceID);
	bool RandomRecoverOneFragment(const struct FString& InstanceID);
	void RandomDestroyOneFragment(const struct FString& InstanceID);
	void OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex);
	void OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType);
	struct FString GetUGCInstanceID(int InstanceIndex);
	void DestroyInstance(const struct FString& InstanceID);
	bool CheckFragmentOverlap(int InstanceIndex, int FragmentIndex);
};




class ACreativePhysicsBatchActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	TMap<struct FString, class UCreativePhysicsComponent*> InstancePhysicsComponentMap;                              
	unsigned char                                      UnknownData01[0x6C];                                      
	int                                                TickRegisterMaxNum;                                       
	struct FScriptDelegate                             MeshLoadSuccessDelegate;                                  
	struct FScriptDelegate                             MeshLoadSuccessByPathDelegate;                            
	struct FScriptDelegate                             CustomMeshLoadSuccessDelegate;                            
	struct FScriptDelegate                             CustomMeshLoadSuccessByPathDelegate;                      
	TMap<struct FString, struct FPhysicsComponentData> ComponentTempData;                                        
	int                                                ReplicateLimit;                                           
	unsigned char                                      UnknownData02[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsBatchActor");
		return pStaticClass;
	}


	void UpdatePhysicsComponentMaterial(struct FString* ComponentID, struct FString* MaterialPath);
	void UpdatePhysicsComponent(const struct FTransform& Transform, TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID);
	bool UnRegisterPhysicsComponent(struct FString* ComponentID);
	void SetPhysicsComponentEnabled(TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID);
	void RegisterPhysicsComponentByMesh(const struct FString& InstanceID, const struct FString& ComponentID, const struct FTransform& Transform, const struct FString& MeshPath, const struct FName& CollisionProfileName);
	void OnLoadMeshSuccessByPath(class UObject* Obj, const struct FString& ComponentID);
	void OnLoadMeshSuccess(class UObject* Obj, const struct FString& ComponentID);
	bool IsLoadFinish();
	int GetRegisterNum();
	class UCreativePhysicsComponent* GetPhysicsComponent(struct FString* ComponentID);
	void ClearAllPhysicsComponent();
};




class UCreativePhysicsComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	class UBodySetup*                                  BodySetup;                                                
	class UStaticMesh*                                 InStaticMesh;                                             
	struct FString                                     InstanceID;                                               
	struct FName                                       CollisionProfileName;                                     
	unsigned char                                      UnknownData01[0x30];                                      
	struct FScriptDelegate                             MatLoadSuccessDelegate;                                   
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsComponent");
		return pStaticClass;
	}


	void SetIsReplicatedOnly(bool ShouldReplicate);
	void OnLoadMaterialSuccess(class UObject* Obj, const struct FString& Path);
};




class UCreativePhysicsManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	TMap<struct FString, class UBodySetup*>            BodySetupMap;                                             
	TMap<struct FString, class UMaterialInterface*>    MaterialInterfaceMap;                                     
	TMap<struct FString, struct FCreativeInstanceGridCellInfo> InstanceCellMap;                                          
	TMap<int, class ACreativePhysicsBatchActor*>       PhysicsBatchActorMap;                                     
	bool                                               StreamingEnable;                                          
	unsigned char                                      UnknownData01[0x7];                                       
	TMap<struct FIntVector, bool>                      VisiblePhysicsBatchActors;                                
	unsigned char                                      UnknownData02[0x38];                                      
	TArray<class ACreativePhysicsBatchActor*>          OutAllBatchActorArray;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsManager");
		return pStaticClass;
	}


	void UpdatePhysicsObjectCellInfo(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex);
	void SetStreamingEnable(bool Enable);
	void SetPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex, bool Visible);
	void RemovePhysicsObject(const struct FString& InstanceID);
	bool PreAddPhysicsObjectCheck(const struct FString& InstanceID);
	void OnPhysicsBatchActorLoadFinish();
	bool IsPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex);
	class ACreativePhysicsBatchActor* GetPhysicsBatchActorByInstanceID(const struct FString& InstanceID);
	class ACreativePhysicsBatchActor* GetPhysicsBatchActor(const struct FString& GridName, const struct FIntVector& Index);
	class ACreativePhysicsBatchActor* GetGlobalPhysicsBatchActor();
	TArray<class ACreativePhysicsBatchActor*> GetAllPhysicsActor();
	static class UCreativePhysicsManager* Get(class UObject* WorldContext);
	void ClearAllPhysicsBatchActor();
	void ChangePhysicsObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab);
	void AddPhysicsObject(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex);
};




class UCreativePlayerAPIObject : public UCreativeApiObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePlayerAPIObject");
		return pStaticClass;
	}


	bool SetPlayerDirection(int64_t PlayerUUID, const struct FVector& Direction);
	int GetPlayerTeamIndex(int64_t PlayerUUID);
	void GetPlayerTeamIDAndTeamIndexFromCPP(int64_t PlayerUUID, int* OutTeamID, int* OutTeamIndex);
	int GetPlayerTeamID(int64_t PlayerUUID);
	float GetPlayerMaxHealth(int64_t PlayerUUID);
	struct FVector GetPlayerLocation(int64_t PlayerUUID);
	float GetPlayerHealth(int64_t PlayerUUID);
	struct FVector GetPlayerDirection(int64_t PlayerUUID);
	float AddPlayerHealth(int64_t PlayerUUID, float AddHealth);
};




class ACreativeModePlayerState : public ASTExtraPlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bEnableAutoPickUp;                                        
	unsigned char                                      UnknownData01[0x7];                                       
	class UCreativeTaskComponent*                      CreativeTaskComponent;                                    
	struct FActorEditorLargeDataContent                LargeDataContent;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModePlayerState");
		return pStaticClass;
	}


	void SetLargeDataContent(TArray<unsigned char> NewContent);
	void ServerRemoveInstance(const struct FString& InstanceID);
	TArray<unsigned char> ServerReceiveModifyContent(TArray<unsigned char> Content, int idx);
	void ServerAddInstanceAdvance(const struct FString& InstanceID, TArray<unsigned char> Content, int idx);
	void ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content);
	void OnRep_LargeDataContent();
	TArray<unsigned char> GetLargeDataContent();
};




class UCreativePoolInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePoolInterface");
		return pStaticClass;
	}


	void SetRecycleTime(float RecycleTime);
	void SetIsRecycled(bool IsRecycled);
	void ReceiveOnReturnToPool(class UObject* NewOuter, int RecycledSeq);
	void ReceiveOnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	struct FString GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix);
	float GetRecycleTime();
	bool CheckIsRecycled();
};




class UCreativePoolManager : public UCreativeModeManagerBase
{
public:
	bool                                               bPoolManagerEnable;                                       
	unsigned char                                      UnknownData00[0xF];                                       
	TMap<int, struct FCreativeObjectPool>              CreativePools;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePoolManager");
		return pStaticClass;
	}


	void SetPoolManagerEnable(bool bPoolManagerEnable);
	void ReturnObject(int PoolId, class UObject* Obj);
	void OnReceivePickObjectHandle(int ID, class UObject* InObj);
	void OnReceiveObjectReturnHandle(int ID, class UObject* InObj);
	bool OnReceiveDestroyHandle(int ID, class UObject* InObj);
	class UObject* OnReceiveCreateHandle(int ID);
	bool InitPool(int PoolId, bool bPoolEnable, struct FCreativeObjectPoolClassConfig* PoolConfig);
	struct FString GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix);
	class UObject* GetObject(int PoolId, class UObject* NewOuter, const struct FString& InName);
	static class UCreativePoolManager* Get(class UObject* WorldContext);
	void ClearPoolObject();
};




class UCreativeModeRaceCheckPointComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointComponent");
		return pStaticClass;
	}

};




class UCreativeModeRaceCheckPointLiteComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointLiteComponent");
		return pStaticClass;
	}

};




class UCreativeRuntimeAnimData : public UObject
{
public:
	float                                              LastUsedTime;                                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeRuntimeAnimData");
		return pStaticClass;
	}

};




class UCreativeRuntimeAnimData_Sequence : public UCreativeRuntimeAnimData
{
public:
	class UAnimSequenceBase*                           Sequence;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeRuntimeAnimData_Sequence");
		return pStaticClass;
	}

};




class UCreativeRuntimeAnimData_AIGC : public UCreativeRuntimeAnimData
{
public:
	class UAIGCAnimObject*                             AIGCData;                                                 
	int                                                FrameRate;                                                
	unsigned char                                      UnknownData00[0x1F4];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeRuntimeAnimData_AIGC");
		return pStaticClass;
	}

};




class ACreativeRuntimePlayerBattleDataObject : public ALuaActor
{
public:
	struct FRuntimePlayerBattleDataInfo                DefaultPlayerBattleDataInfo;                              
	struct FRuntimeTeamGameOutcomeConditionInfo        DefaultTeamGameOutcomeCondition;                          
	unsigned char                                      UnknownData00[0x4];                                       
	struct FRuntimeCacheRoundBattleDataInfoContainer   RuntimeOldCacheRoundBattleDataContainer;                  
	struct FRuntimeBattleDataInfoContainer             RuntimeCurRoundBattleDataInfoContainer;                   
	struct FRuntimeTeamGameOutcomeConditionContainer   RuntimeTeamGameOutcomeConditionContainer;                 
	struct FRuntimeCacheRoundBattleDataInfo            DefaultCacheRoundBattleDataInfo;                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeRuntimePlayerBattleDataObject");
		return pStaticClass;
	}


	bool SetTeamGameOutcomeCondition(int TeamID, bool bPropagateToChildren, struct FRuntimeTeamGameOutcomeConditionInfo* TeamGameOutcomeCondition);
	bool SetPlayerBattleData(uint64_t UID, uint32_t PlayerKey, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* PlayerBattleData);
	bool ResetCurRoundPlayerBattleDataList();
	void OnRepTeamGameOutcomeConditionInfo(int TeamID);
	void OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, uint64_t PlayerKey, int ChangeTeamID);
	struct FRuntimeTeamGameOutcomeConditionInfo GetTeamGameOutcomeCondition(int TeamID);
	struct FRuntimePlayerBattleDataInfo GetCurRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey);
	TArray<struct FRuntimePlayerBattleDataInfo> GetCurRoundAllPlayerBattleData();
	struct FRuntimePlayerBattleDataInfo GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID, uint32_t PlayerKey);
	struct FRuntimeCacheRoundBattleDataInfo GetCacheRoundBattleData(int RoundIndex);
	struct FRuntimePlayerBattleDataInfo GetAllRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey);
	void CacheCurRoundBattleData(int RoundIndex);
};




class UCreativeSceneDetectLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSceneDetectLib");
		return pStaticClass;
	}


	static float CreativeGetStackDistanceFromMeshes(TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction);
	static float CreativeGetStackDistance(class UStaticMesh* Mesh, const struct FVector& Direction, const struct FVector& Scale);
	static struct FVector CreativeGetFurthestPointFromMeshes(TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction);
	static struct FVector CreativeGetFurthestPoint(class AActor* TargetActor, class USceneComponent* TargetComp, const struct FVector& Direction);
	static TArray<struct FVector> CreativeFindPlacementPoints(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& HalfExtent, const struct FVector& Direction, int Count, float MaxDistance);
	static struct FCreativeSpaceResult CreativeDetectSpaceAdvanced(class UObject* WorldContextObject, const struct FVector& Source, const struct FVector& Direction, float MaxDistance, float MaxBoxExtent, const struct FCreativeDetectSpaceOptions& Options);
	static struct FCreativeSpaceResult CreativeDetectSpace(class UObject* WorldContextObject, const struct FVector& Source, const struct FVector& Direction, float MaxDistance, float MaxBoxExtent);
	static struct FVector CreativeCalculateSnapLocationFromMeshes(const struct FVector& Curr, TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction, const struct FVector& HookPoint);
	static struct FVector CreativeCalculateSnapLocation(class AActor* TargetActor, class USceneComponent* TargetComp, const struct FVector& Direction, const struct FVector& HookPoint);
};




class UCreativeSceneQueryManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeReplicatedDataContainer            ReplicatedDataContainer;                                  
	TMap<struct FString, struct FCreativeReplicatedObjectsInfo> MapReplicatedObjects;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSceneQueryManager");
		return pStaticClass;
	}


	void RemoveReplicateObject(const struct FString& InstanceID, class UObject* Object);
	void RemoveReplicateData(const struct FString& InstanceID);
	void OnReceivePreReplicateDataRemove(const struct FString& ID);
	void OnReceivePostReplicateDataChange(const struct FString& ID, TArray<class UObject*> Objects);
	void OnReceivePostReplicateDataAdd(const struct FString& ID, TArray<class UObject*> Objects);
	TArray<class UObject*> GetReplicatedObjects(const struct FString& InstanceID);
	static class UCreativeSceneQueryManager* Get(class UObject* WorldContext);
	void AddReplicateObjectPostDeferred(const struct FString& InstanceID, const struct FTransform& SpawnTransform, class UObject* ReplicatedObject);
	class UObject* AddReplicateObjectDeferred(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
	class UObject* AddReplicateObject(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
};




class UCreativeScreenCaptureWidget : public ULuaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeScreenCaptureWidget");
		return pStaticClass;
	}


	void OnPanelInitialized();
};




class UCreativeModeSoftComponentManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeSoftComponentManager");
		return pStaticClass;
	}


	static class UCreativeModeSoftComponentManager* Get(class UObject* WorldContext);
	void ClearAllLoading();
};




class USoftStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	unsigned char                                      bOnlyRender : 1;                                          
	unsigned char                                      UnknownData01[0x7];                                       
	unsigned char                                      UnknownData02[0x28];                                      
	struct FSoftObjectPath                             SoftStaticMeshPath;                                       
	unsigned char                                      bAsyncLoad : 1;                                           
	unsigned char                                      UnknownData03[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.SoftStaticMeshComponent");
		return pStaticClass;
	}


	bool SetSoftStaticMeshAsync(struct FString* NewMeshPath);
	bool SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh);
	void SetComponentOnlyRender(bool bOnlyRender);
	void OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath);
	void LoadSoftStaticMeshImmediately();
	void ClearOverrideMaterials();
};




class UCreativeSoftStaticMeshComponent : public USoftStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSoftStaticMeshComponent");
		return pStaticClass;
	}


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};




class UCreativeSpawnManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSpawnManager");
		return pStaticClass;
	}


	class AActor* SpawnTower(int ConfigID, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	class AActor* SpawnHumanBot(int ConfigID, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	class AActor* SpawnAIPlayer(int ConfigID, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	void OnUnitSpawned(class AActor* NewUnit, ESpecType SpecType);
	void OnDeadWithCategory(ESpecType Category, class AActor* DeadCharacter);
	void HandleTowerDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleMonsterDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleHumanBotDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleAIPlayerDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason);
	static class UCreativeSpawnManager* Get(class UObject* WorldContext);
};




class UCreativeStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeStaticMeshComponent");
		return pStaticClass;
	}


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};




class UCreativeStreamingManager : public UCreativeModeManagerBase
{
public:
	bool                                               bStreamingManagerEnable;                                  
	bool                                               bStreamingStateCheckStartup;                              
	bool                                               bUseChildThreads;                                         
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              StreamingTickFrequency;                                   
	float                                              DestroyExtendDistance;                                    
	float                                              DelayDestroyTime;                                         
	float                                              NeedTickStreamingDistanceScale;                           
	bool                                               ChildThreadsReduceTickFrequency;                          
	unsigned char                                      UnknownData01[0x43];                                      
	TMap<struct FString, struct FCreativeModeStreamingParameters> ObjectStreamingStateMap;                                  
	TArray<struct FString>                             ObjectStreamingStateKeyList;                              
	TMap<struct FString, bool>                         ObjectSpawnStateChangeMaps;                               
	unsigned char                                      UnknownData02[0x50];                                      
	TArray<TWeakObjectPtr<class AActor>>               OuterStreamingSources;                                    
	unsigned char                                      UnknownData03[0xC8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeStreamingManager");
		return pStaticClass;
	}


	void UnregisterStreamingSource(class AActor* Source);
	bool StreamingManagerEnable();
	bool RemoveStreamingObject(const struct FString& InstanceID);
	void RegisterStreamingSource(class AActor* Source);
	struct FIntVector GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FVector2D GetGridCellWidthHeight(const struct FString& GridName);
	TArray<struct FVector> GetCreativeModeStreamingSourceList();
	static class UCreativeStreamingManager* Get(class UObject* WorldContext);
	ECreativeModeActorStreamingType ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
};




class UCreativeTaskComponent : public ULuaActorComponent
{
public:
	struct FCreativeTaskArray                          TaskArray;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTaskComponent");
		return pStaticClass;
	}


	bool UpdateTaskProgress(const struct FString& TaskID, int NewProgress, int idx);
	bool SetTaskVal(const struct FString& TaskID, struct FCreativeTaskViewItem* SetItemValue);
	bool SetTaskStatus(const struct FString& TaskID, ETaskStatus TaskStatusVal);
	bool SetTaskStageReservedField(const struct FString& TaskID, const struct FString& Val);
	bool SetTaskStageIdx(const struct FString& TaskID, int TaskStageIdx);
	bool SetTaskProgressStep(const struct FString& TaskID, const struct FCreativeTaskProgressItem& NewStep, int idx);
	bool SetTaskConditionMet(const struct FString& TaskID, bool bMet, int idx);
	bool SetMaxTaskProgressStep(const struct FString& TaskID, int MaxStep);
	bool RemoveTask(const struct FString& TaskID);
	void RemoveAllTask();
	void ReceiveOnTaskViewRemoved(const struct FCreativeTaskViewItem& TaskViewItem);
	void ReceiveOnTaskViewChanged(const struct FCreativeTaskViewItem& TaskViewItem);
	void ReceiveOnTaskViewAdded(const struct FCreativeTaskViewItem& TaskViewItem);
	void ReceiveAddTask(struct FCreativeTaskViewItem* NewTask);
	struct FCreativeTaskProgressItem MakeDummyProgressStep(const struct FCreativeTaskProgressParams& Params);
	bool IsTaskExists(const struct FString& TaskID);
	bool IsProgressConditionMet(const struct FString& TaskID, int idx);
	bool GetTaskProgress(const struct FString& TaskID, int idx, int* OutCurrent, int* OutMax);
	TArray<struct FCreativeTaskViewItem> GetAllTasks();
	struct FCreativeTaskViewItem FindTaskByID(const struct FString& TaskID);
	bool AddTask(const struct FString& TaskID);
};




class UCreativeTimerApiObject : public UCreativeApiObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTimerApiObject");
		return pStaticClass;
	}


	void SetMaxQueue(int Num);
	void NotifyTimerDropped(const struct FString& blockId);
	void Clear();
};




class ACreativeTriggerAreaActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTriggerAreaActor");
		return pStaticClass;
	}


	void OnTakeDamage(class AActor* DamageCauser);
};




class UCreativeUMGCanvasPanel : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeUMGCanvasPanel");
		return pStaticClass;
	}


	bool SwapChildrenByInstanceID(const struct FString& InstanceIDA, const struct FString& InstanceIDB);
	void RequestRecalcZOrder();
	void OnNextFrameRecalcTick();
	void FlushRecalcZOrderNow();
};




class UCreativeUMGCanvasWidget : public ULuaUserWidget
{
public:
	class UCreativeUMGCanvasPanel*                     CanvasPanel_Root;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeUMGCanvasWidget");
		return pStaticClass;
	}


	bool SwapChildrenByInstanceID(const struct FString& InstanceIDA, const struct FString& InstanceIDB);
	void RequestRecalcZOrder();
	void FlushRecalcZOrderNow();
};




class UCreativeUMGInfoManager : public USTExtraManagerBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	int                                                SingleSerializeNum;                                       
	struct FCreativeUMGInfoNodeContainer               UMGInfoContainer;                                         
	int                                                ModBinUMGInfoCount;                                       
	unsigned char                                      UnknownData01[0x68];                                      
	float                                              DataNodePullInterval;                                     
	int                                                SinglePullDataNodeNum;                                    
	int                                                TotalPullDataNodeNum;                                     
	float                                              DataNodePullTimeroutInterval;                             
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeUMGInfoManager");
		return pStaticClass;
	}


	void UpdateModBinUMGInfoCount();
	void SetUMGInfoDataNodes(TArray<struct FCreativeUMGInfoDataNode> UMGInfoDataNodes);
	void RemoveUMGInfo(uint32_t ID);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnRep_ModBinUMGInfoCount();
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsUMGInfoSyncComplete();
	TArray<struct FCreativeUMGInfoDataNode> GetUMGInfoDataNodes(TArray<uint32_t> DataHashKeys);
	bool GetUMGInfoContent(uint32_t ID, TArray<unsigned char>* OutContent);
	static class UCreativeUMGInfoManager* Get(class UObject* WorldContext);
	void ChangeUMGInfo(uint32_t ID, TArray<unsigned char> Content);
	void CallOnReceivePreUMGInfoRemove(uint32_t ID);
	void CallOnReceivePostUMGInfoChange(uint32_t ID, TArray<unsigned char> Content);
	void CallOnReceivePostUMGInfoAdd(uint32_t ID, TArray<unsigned char> Content);
	void AddUMGInfo(uint32_t ID, TArray<unsigned char> Content);
};




class UCreativeWebSocketManager : public USTExtraManagerBase
{
public:
	TArray<struct FString>                             SendList;                                                 
	TArray<struct FString>                             ReceivedList;                                             
	float                                              LastTickSeconds;                                          
	float                                              MessageTickFrequency;                                     
	struct FTimerHandle                                TickTimerHandle;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWebSocketManager");
		return pStaticClass;
	}


	void SendMessage(const struct FString& Message);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void OnTickTimer();
	void OnReceiveConnected();
	void OnPostSetLuaEventBridgeInstance();
	bool OnMessageSent(const struct FString& Message);
	bool OnMessageReceived(const struct FString& Message);
	bool IsConnected();
	static class UCreativeWebSocketManager* Get(class UObject* WorldContext);
	void ConnectServer(const struct FString& ServerURL, const struct FString& ServerProtocol);
};




class UCreativeWidgetComponent : public UWidgetComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWidgetComponent");
		return pStaticClass;
	}

};




class UCreativeWidgetObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData01[0x8];                                       
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      
	TArray<class ULiteComponent*>                      LiteComponents;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWidgetObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
};




class UCreativeWorldSubSystem : public UWorldSubsystem
{
public:
	class AActor*                                      ManagerCenter;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWorldSubSystem");
		return pStaticClass;
	}


	class AActor* GetManagerCenter();
};




class UCreativeWoWInactiveCheckComponent : public ULuaActorComponent
{
public:
	float                                              InactivePlayerKickoutTime;                                
	float                                              InactiveCheckGap;                                         
	float                                              InactiveTimeForTipPreTime;                                
	float                                              PreActiveTime;                                            
	float                                              ClientSendActiveRPCGap;                                   
	bool                                               bIsClientActive;                                          
	ESCWOWActiveType                                   CWOWActiveType;                                           
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     PrePawnLoc;                                               
	struct FRotator                                    PreControllerRotation;                                    
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWoWInactiveCheckComponent");
		return pStaticClass;
	}


	void ServerMarkPlayerActive();
	void MarkPlayerActive();
	void KickOutPlayer();
	void ClientShowKickOutTip(float RemainTime);
	void ClientCachedActiveState();
	bool CheckForMovement();
	void CheckForInactive();
};




class UCreativeWoWManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWoWManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	static class UCreativeWoWManager* Get(class UObject* WorldContext);
};




class UCustomAssetUtilityObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      
	struct FString                                     LuaFilePath;                                              
	class UCustomAssetManager*                         CustomAssetMgr;                                           
	struct FString                                     LastError;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetUtilityObject");
		return pStaticClass;
	}


	bool SaveArrayToFile(TArray<unsigned char> Content, const struct FString& Filename);
	bool ReceiveIsDedicatedServer();
	class UCustomAssetManager* ReceiveGetCustomAssetMgr();
	void LuaConditionalBeginDestroy();
	TArray<unsigned char> LoadFileToArray(const struct FString& Filename);
	bool IsFileExistsInSaved(const struct FString& Filename);
	void InitUtilityObject(class UCustomAssetManager* CustomAssetManager);
	struct FString GetLastError();
	TArray<struct FString> GetAllFilesInDirectoryRelative(const struct FString& TargetDirectory);
	bool DeleteFileInSaved(const struct FString& Filename);
	TArray<bool> AreFilesExistInSaved(TArray<struct FString> FileNameList);
};




class UCustomAssetDeserializer : public UCustomAssetUtilityObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FScriptMulticastDelegate                    DeserializeCompletedDelegate;                             
	unsigned char                                      UnknownData01[0x50];                                      
	float                                              DeserializeTimeout;                                       
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetDeserializer");
		return pStaticClass;
	}


	void DeserializeCompletedDelegate__DelegateSignature(class UCustomAssetDeserializer* uDeserializer, class UObject* OutAssetBytes, uint64_t DeserializeSeq);
	void DeserializeCompleted(uint64_t DeserializeSeq, class UObject* OutAsset);
	bool Deserialize(TArray<unsigned char> InBytes, const struct FString& SuffixType, uint64_t DeserializeSeq, class UObject* Outer);
};




class UCustomAssetAnimDeserializer : public UCustomAssetDeserializer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetAnimDeserializer");
		return pStaticClass;
	}


	bool IsValidData(TArray<unsigned char> InBytes);
};




class UCustomAssetRuntimeBodyAnimData : public UObject
{
public:
	class USkeleton*                                   OwnedSkeleton;                                            
	TMap<struct FName, int>                            BoneIndexMap;                                             
	TMap<struct FName, struct FCustomAssetRuntimeAnimBoneTranslations> BoneTranslations;                                         
	TMap<struct FName, struct FCustomAssetRuntimeAnimBoneRotations> BoneRotations;                                            
	float                                              AnimSequenceLength;                                       
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetRuntimeBodyAnimData");
		return pStaticClass;
	}

};




class UCustomAssetAnimManager : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetAnimManager");
		return pStaticClass;
	}


	static class UCustomAssetRuntimeBodyAnimData* GetRuntimeBodyAnimData(class UAnimSequence* InAnim, class USkeleton* InSkeleton, class UObject* Outer);
	static TArray<struct FAIGCRuntimeBodyAnimFrameData> ConvertAnimSequenceToBodyAnimData(class UAnimSequence* AnimSequence, int* OutFrameRate);
};




class UCustomAssetAudioManager : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetAudioManager");
		return pStaticClass;
	}


	uint64_t WemCutByAssetKey(uint64_t AssetKey, int StartTime, int EndTime);
	uint32_t SeekOnEvent(class UAkAudioEvent* Event, class AActor* Actor, int in_iPosition, bool bStopWhenOwnerDestroyed, uint64_t AssetKey, uint32_t* PlayingID);
	int AllocateTempAssetKey();
};




class UCustomAssetCacheManager : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetCacheManager");
		return pStaticClass;
	}

};




class UCustomAssetDownloader : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetDownloader");
		return pStaticClass;
	}

};




class UCustomAssetImageDeserializer : public UCustomAssetDeserializer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetImageDeserializer");
		return pStaticClass;
	}


	bool IsValidData(TArray<unsigned char> InBytes);
};




class UCustomImageDataWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomImageDataWrapper");
		return pStaticClass;
	}


	static struct FString MakeUniqueName(class UObject* WorldContextObject);
	static class UObject* GetImageWrapperOuter();
};




class UCustomAssetImageManager : public UCustomAssetUtilityObject
{
public:
	TMap<uint64_t, class UTexture2D*>                  TextureRef;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetImageManager");
		return pStaticClass;
	}


	void RemoveTextureRef(uint64_t HashID);
	static TEnumAsByte<EPixelFormat> ReadPixelFormat(class UTexture2D* Target);
	static struct FImageSummary ReadImageSummary(TArray<unsigned char> ImageData);
	static TArray<unsigned char> ReadImageRGBA(TArray<unsigned char> ImageData);
	static void LuaUpdateTextureResource2Png(class UTexture2D* Target, int TexGroup, int Width, int Height, int MipIndex, TArray<unsigned char> TexData);
	static void LuaUpdateTextureResource2(class UTexture2D* Target, int TexGroup, int Width, int Height, int MipIndex, int PixelFormat, TArray<unsigned char> TexData);
	static class UTexture2D* LuaReserveTexture2(int PixelFormat, int TexGroup, class UTexture2D* OtherTex);
	static class UTexture2D* LuaReserveTexture(int PixelFormat, int TexGroup, int Width, int Height);
	static bool IsValidImageSummary(const struct FImageSummary& Summary);
	static bool IsPngImageData(TArray<unsigned char> ImageData);
	static TEnumAsByte<EPixelFormat> GetPixelFormat(int PixelFormat);
	static void GetPixelBlockSize(int PixelFormat, int* SizeX, int* SizeY);
	static struct FString GetObjectPath(class UObject* Object);
	static int GetHeaderSize(TEnumAsByte<EPixelFormat> Format);
	void AddTextureRef(uint64_t HashID, class UTexture2D* Tex);
};




class UCustomAssetManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	TMap<struct FString, struct FTrackedCustomAsset>   TrackedCustomAssetMap;                                    
	unsigned char                                      UnknownData01[0x8];                                       
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetManager");
		return pStaticClass;
	}


	void TryBeginPlay();
	bool ReceiveIsDedicatedServer();
	void PrintAliveCustomAssets();
	bool ParseCustomAssetKeyHashID(uint64_t HashID, unsigned char ExpectedHashIDTag, unsigned char* OutCustomAssetType, uint32_t* OutUniqueId);
	uint32_t GetHashByString(const struct FString& CustomAssetKey);
	struct FString GetCustomAssetPathName(class UObject* CustomAsset);
	class UObject* GetCustomAssetOuter();
	class UObject* GetCustomAssetObjectFromTrackedMap(const struct FString& BytesMD5);
	struct FString GetCurPlatformSuffixType();
	uint64_t GenerateHashIDByCustomAssetKey(const struct FString& CustomAssetKey, unsigned char CustomAssetType, unsigned char HashIDTag);
	void CustomAssetMgrConditionalBeginDestroy();
	void CleanupStaleCustomAssets();
	void CleanupAliveCustomAssetObjects();
	void AddCustomAssetObjectToTrackedMap(const struct FString& BytesMD5, class UObject* AssetObject, const struct FString& LoadStack);
};




class UCustomAssetMountStateComponent : public ULuaActorComponent
{
public:
	struct FCustomAssetMountStatusInfoContainer        ReplicatedCustomAssetMountStatusInfoContainer;            
	int                                                SingleSerializeNum;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FCustomAssetMountStatusInfo                 EntryMountStatusInfo;                                     
	float                                              DataNodePullInterval;                                     
	int                                                SinglePullDataNodeNum;                                    
	int                                                TotalPullDataNodeNum;                                     
	float                                              DataNodePullTimeoutInterval;                              
	unsigned char                                      UnknownData01[0xC0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetMountStateComponent");
		return pStaticClass;
	}


	void SetMountStatusInfos(TArray<struct FCustomAssetMountStatusInfo> Infos);
	bool RemoveMountStatusInfo(struct FString* AssetKey);
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	TArray<struct FCustomAssetMountStatusInfo> GetMountStatusInfos(TArray<uint32_t> Ids);
	bool ChangeMountStatusInfo(EMountStatus MountStatus, TArray<uint32_t> MountingPlayerKeys, struct FString* AssetKey);
	bool AddMountStatusInfo(EMountStatus MountStatus, TArray<uint32_t> MountingPlayerKeys, uint32_t MountedByPlayerKey, TArray<unsigned char> MappingInfoContent, struct FString* AssetKey);
};




class UCustomAssetPlatformBuilder : public UCustomAssetUtilityObject
{
public:
	struct FScriptMulticastDelegate                    PlatformBuilderCompletedDelegate;                         
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetPlatformBuilder");
		return pStaticClass;
	}


	bool StartBuild(TArray<unsigned char> SourceBytes, uint64_t CurBuildSeq, class UObject* SourceObject);
	void PlatformBuilderCompletedDelegate__DelegateSignature(class UCustomAssetPlatformBuilder* uPlatformBuilder, TArray<struct FPlatformCustomAssetInfo> PlatformCustomAssetInfoList, uint64_t BuilderSeq);
};




class UCustomAssetSkeletalAnimDeserializer : public UCustomAssetDeserializer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetSkeletalAnimDeserializer");
		return pStaticClass;
	}


	bool IsValidData(TArray<unsigned char> InBytes);
};




class UCustomAssetSkeletalMeshDeserializer : public UCustomAssetDeserializer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetSkeletalMeshDeserializer");
		return pStaticClass;
	}


	bool IsValidData(TArray<unsigned char> InBytes);
};




class UCustomAssetStaticMeshDeserializer : public UCustomAssetDeserializer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetStaticMeshDeserializer");
		return pStaticClass;
	}


	bool IsValidData(TArray<unsigned char> InBytes);
};




class UCustomAssetUploader : public UCustomAssetUtilityObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CustomAssetUploader");
		return pStaticClass;
	}

};




class ADancerDeviceActor : public ALuaActor
{
public:
	class APawn*                                       SyncPlayerCharacter;                                      
	TArray<int>                                        TempAvatarItemIDList;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DancerDeviceActor");
		return pStaticClass;
	}


	void OnRep_SyncPlayerCharacter();
};




class UDTPacketPool : public UObject
{
public:
	int16_t                                            BlockSize;                                                
	unsigned char                                      UnknownData00[0x76];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DTPacketPool");
		return pStaticClass;
	}

};




class UDataTransferComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnTransferCompleted;                                      
	struct FScriptMulticastDelegate                    OnTransferFailed;                                         
	struct FScriptMulticastDelegate                    OnTransferReceived;                                       
	bool                                               bUsePacketPool;                                           
	unsigned char                                      UnknownData00[0x1];                                       
	int16_t                                            PacketSize;                                               
	int                                                SendBytesPerSecond;                                       
	int                                                AverageSendBytesPerSecond;                                
	int                                                MaxBurstBytes;                                            
	int                                                InitialSendBudgetBytes;                                   
	int16_t                                            MaxPacketsPerRound;                                       
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              RetransmitTimeout;                                        
	float                                              SendInterval;                                             
	float                                              CheckTaskInterval;                                        
	float                                              Timeout;                                                  
	float                                              ReReceiveTimeOut;                                         
	float                                              ReuseInterval;                                            
	int                                                MaxPoolSize;                                              
	bool                                               bAutoCleanupCompletedTasks;                               
	unsigned char                                      UnknownData02[0x6B];                                      
	class UDTPacketPool*                               SendPacketPool;                                           
	unsigned char                                      UnknownData03[0x78];                                      
	class UDTPacketPool*                               ReceivePacketPool;                                        
	unsigned char                                      UnknownData04[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DataTransferComponent");
		return pStaticClass;
	}


	void StartTransfer(const struct FString& FilePath);
	void Server_RequestFile(const struct FString& FilePath);
	void Server_ReceivePacketAck(int16_t TaskID, int16_t Seq);
	void Server_ReceivePacket(const struct FDTPacket& Packet);
	int SendData(TArray<unsigned char> fileData);
	void ReceivePacketAck(int16_t TaskID, int16_t Seq);
	void ReceivePacket(const struct FDTPacket& Packet);
	bool Init();
	void Client_RequestFile(const struct FString& FilePath);
	void Client_ReceivePacketAck(int16_t TaskID, int16_t Seq);
	void Client_ReceivePacket(const struct FDTPacket& Packet);
};




class UDSLParser : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DSLParser");
		return pStaticClass;
	}


	class UDSLParserASTTree* ParseText(const struct FString& Source);
	class UDSLParserASTTree* ParseFile(const struct FString& FilePath);
	bool LoadGrammarFromString(const struct FString& InGrammarText);
	bool LoadGrammarFromFile(const struct FString& FilePath);
	struct FString GetLastError();
	struct FString GetGrammarText();
	TArray<struct FString> GetGrammarRuleNames();
	void ClearGrammar();
	void AddGrammarRule(const struct FString& RuleName, const struct FString& RuleBody);
};




class UDSLParserASTTree : public UObject
{
public:
	bool                                               bValid;                                                   
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     Error;                                                    
	struct FString                                     Json;                                                     
	int                                                RootNodeId;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FDSLParserNode>                      Nodes;                                                    
	TMap<struct FString, int>                          Statements;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DSLParserASTTree");
		return pStaticClass;
	}


	struct FString ToJson();
	bool IsValid();
	int GetRootNodeId();
	int GetPropertyNodeId(int NodeId, const struct FString& Key);
	TArray<struct FString> GetPropertyKeys(int NodeId);
	struct FString GetNodeValue(int NodeId);
	struct FString GetNodeName(int NodeId);
	struct FString GetNodeKind(int NodeId);
	int GetNodeCount();
	struct FString GetError();
	TArray<int> GetChildren(int NodeId);
};




class UGameModeStateActive_CreativeMode : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateActive_CreativeMode");
		return pStaticClass;
	}

};




class UGameModeStateFighting_CreativeMode : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFighting_CreativeMode");
		return pStaticClass;
	}


	void SetToInfinityTime();
	void PlayersInfoRecord();
};




class UGameModeStateFinished_CreativeMode : public UGameModeStateFinishedTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFinished_CreativeMode");
		return pStaticClass;
	}

};




class UGameModeStateReady_CreativeMode : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateReady_CreativeMode");
		return pStaticClass;
	}

};




class UGameProcessEventObject : public UCreativeEventObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameProcessEventObject");
		return pStaticClass;
	}


	void ReceivePostEvent(int ProcessType, int Round);
	void OnEnterPlayProcess();
};




class APaintScoreManager : public ALuaActor
{
public:
	float                                              VoxelSize;                                                
	float                                              AreaThreshold;                                            
	bool                                               bEnableDebugLogging;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              OwnershipCoverageThreshold;                               
	unsigned char                                      UnoccupiedOwnerID;                                        
	unsigned char                                      ReservedOwnerIDStart;                                     
	unsigned char                                      ReservedOwnerIDEnd;                                       
	unsigned char                                      MaxUserCount;                                             
	unsigned char                                      StartingUserID;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              DebugColorScale;                                          
	float                                              DebugDrawDuration;                                        
	float                                              DebugLineThickness;                                       
	float                                              DebugVoxelBoxSize;                                        
	bool                                               bUseOctreeForSmallTriangles;                              
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                OctreeMaxDepth;                                           
	int                                                OctreeMaxTrianglesPerLeaf;                                
	float                                              OctreeMinNodeSize;                                        
	bool                                               bEnablePartialSplit;                                      
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              PartialSplitMinArea;                                      
	int                                                PartialSplitMaxDepth;                                     
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<struct FPaintTriangleInfo>                  SmallTriangles;                                           
	unsigned char                                      UnknownData05[0x40];                                      
	TMap<struct FPaintVoxelCoord, struct FPaintVoxelCell> SparseVoxelHash;                                          
	TArray<struct FPaintVoxelCoord>                    PrecomputedDiskOffsets;                                   
	TMap<unsigned char, float>                         PerUserAreaCache;                                         
	TArray<struct FDeferredPaintOp>                    DeferredOps;                                              
	TMap<struct FString, unsigned char>                UserNameToID;                                             
	TMap<unsigned char, struct FString>                IDToUserName;                                             
	unsigned char                                      NextUserID;                                               
	unsigned char                                      UnknownData06[0x3];                                       
	float                                              TotalScore;                                               
	bool                                               bInitialized;                                             
	unsigned char                                      UnknownData07[0x47];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PaintScoreManager");
		return pStaticClass;
	}


	struct FPaintVoxelCoord WorldToVoxelBP(const struct FVector& WorldPos);
	struct FVector VoxelToWorldBP(const struct FPaintVoxelCoord& VoxelCoord);
	void UpdateUserAreaCache(int UserId, float AreaDelta);
	bool TriangleIntersectsSphere(int TriangleIndex, const struct FVector& SphereCenter, float SphereRadius);
	void SubdivideOctreeNode(struct FPaintOctreeNode* Node);
	bool SetVoxelCellOwner(const struct FPaintVoxelCoord& VoxelCoord, int UserId);
	bool SetSmallTriangleOwner(int Index, int UserId);
	void SetOctreeRoot(const struct FPaintOctreeNode& NewRoot);
	void Reset();
	void RemoveUserPaint(const struct FString& UserName);
	void QueryOctree(const struct FPaintOctreeNode& Node, const struct FVector& SphereCenter, float SphereRadius, TArray<int>* OutTriangleIndices);
	bool ProjectTriangleTo2D(const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FVector& SphereCenter, float SphereRadius, struct FVector2D* OutA2D, struct FVector2D* OutB2D, struct FVector2D* OutC2D, struct FVector2D* OutCenter2D, float* OutRadius2D, struct FVector* OutE1, struct FVector* OutE2, struct FVector* OutPlaneOrigin);
	float ProcessVoxelOwnershipTransfer(const struct FPaintVoxelCoord& VoxelCoord, int UserId);
	float ProcessVoxelCellsForPaint(const struct FVector& Center, int UserId);
	void ProcessTriangleWithCoverageMethod(int TriangleIndex, const struct FVector& Center, unsigned char InternalUserID, class UWorld* DebugWorld);
	void ProcessTrianglesWithLinearSearch(const struct FVector& Center, float Radius, unsigned char InternalUserID, class UWorld* DebugWorld);
	float ProcessTriangleOwnershipTransfer(int TriangleIndex, int UserId, float ClippedArea);
	float ProcessSmallTrianglesForPaint(const struct FVector& Center, float Radius, int UserId);
	void ProcessSingleTriangleForPaint(int TriangleIndex, const struct FVector& Center, float Radius, unsigned char InternalUserID, class UWorld* DebugWorld);
	bool PerformTwoPointSplit(int TriangleIndex, const struct FVector& SphereCenter, float SphereRadius, unsigned char NewOwnerID, float* OutTransferredArea);
	bool IntersectSegmentCircle2D(const struct FVector2D& P0, const struct FVector2D& P1, const struct FVector2D& CircleCenter, float Radius, TArray<float>* OutT);
	void InsertTriangleIntoOctree(int TriangleIndex, struct FPaintOctreeNode* Node);
	void Initialize(TArray<struct FVector> Vertices, TArray<int> Indices);
	void InitByNavManager(const struct FBox& Area);
	bool GetVoxelCellInfo(const struct FPaintVoxelCoord& VoxelCoord, struct FPaintVoxelCell* OutCell);
	float GetUserScore(const struct FString& UserName);
	struct FVector GetTriangleCentroid(int TriangleIndex);
	int GetSmallTrianglesCount();
	bool GetSmallTriangleInfo(int Index, struct FPaintTriangleInfo* OutTriangle);
	int GetRegisteredUserCount();
	TArray<struct FPaintVoxelCoord> GetPrecomputedDiskOffsets();
	struct FPaintOctreeNode GetOctreeRoot();
	struct FString GetMemoryUsage();
	void GetAllUserScores(TArray<struct FString>* OutUsers, TArray<float>* OutScores);
	void DrawVoxelCells(unsigned char TargetUserID);
	void DrawSmallTriangles(unsigned char TargetUserID);
	void DebugDrawOccupiedAreasForUserID(unsigned char TargetUserID);
	void DebugDrawOccupiedAreas(const struct FString& UserName);
	float ClipTriangleWithSphere(int TriangleIndex, const struct FVector& SphereCenter);
	float CalculateTriangleVoxelIntersection(const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, const struct FPaintVoxelCoord& VoxelCoord);
	void CalculateSmallTrianglesBounds(struct FVector* OutMin, struct FVector* OutMax);
	void BuildOctree();
	void AddTriangleToPipeline(const struct FVector& A, const struct FVector& B, const struct FVector& C);
	void AddPaint(const struct FVector& Center, const struct FString& UserName);
};




class UPlayerListenerEventObject : public UCreativeEventObject
{
public:
	bool                                               bCppListenerEnable;                                       
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerListenerEventObject");
		return pStaticClass;
	}


	void OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey);
	void OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey);
};




class UPlayerAttachedToVehicleEventObject : public UPlayerListenerEventObject
{
public:
	TMap<uint32_t, class UPlayerAttachedProxy*>        LambdaDelegateMap;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerAttachedToVehicleEventObject");
		return pStaticClass;
	}


	void OnOwnerAttachedToVehicle(class ASTExtraVehicleBase* InVehicle, uint32_t PlayerKey);
	void OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey);
	void OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey);
};




class UPlayerAttachedProxy : public UObject
{
public:
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	class UPlayerAttachedToVehicleEventObject*         Owner;                                                    
	class ASTExtraBaseCharacter*                       PlayerCharacter;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerAttachedProxy");
		return pStaticClass;
	}


	void OnProxyAttachedToVehicle(class ASTExtraVehicleBase* InVehicle);
};




class AShowAllPlayerManagerActor : public ALuaActor
{
public:
	int                                                MapMarkID;                                                
	bool                                               bEnableRefresh;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BatchNum;                                                 
	int                                                CurBatchID;                                               
	int                                                CurBatchNum;                                              
	unsigned char                                      UnknownData01[0x24];                                      
	TArray<struct FVector_NetQuantize>                 TeamPosData;                                              
	unsigned char                                      UnknownData02[0x50];                                      
	TArray<int>                                        MapMarkInstanceIDList;                                    
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.ShowAllPlayerManagerActor");
		return pStaticClass;
	}


	void TriggerRefresh(class ASTExtraBaseCharacter* Character, bool bEnable);
	void RefreshTeamPoseData();
	void RefreshMapMarkData();
	void OnTeamPosDataChange();
	void OnRep_TeamPosData();
	bool IsCharacterValidForShow(class ASTExtraBaseCharacter* Character);
	void FlushBatchData(int BatchSize, int CurExtraSize);
	void EnableRefresh(bool bEnable);
	void ClearAllMark();
};




class UUGCDynamicNetManager : public UCreativeModeManagerBase
{
public:
	struct FUGCLuaNetPropertyHeadContainer             PropertyHeadContainer;                                    
	unsigned char                                      UnknownData00[0x8];                                       
	int                                                OwnerScanPerFrame;                                        
	unsigned char                                      UnknownData01[0x68];                                      
	int                                                SingleSerializeNum;                                       
	float                                              PullInterval;                                             
	int                                                SinglePullBatchSize;                                      
	int                                                MaxConcurrentPulls;                                       
	float                                              PullTimeoutSeconds;                                       
	bool                                               bEnableTickLog;                                           
	unsigned char                                      UnknownData02[0x5F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.UGCDynamicNetManager");
		return pStaticClass;
	}


	void UnregisterProperty(int InReplicationID);
	void UnregisterAllProperties(TArray<int> InRepIDs);
	void SetPropValue(int InReplicationID, TArray<unsigned char> InNewBytes);
	void SetPropMeta(int InReplicationID, uint32_t InOwnerNetGUID, const struct FString& InPropName, unsigned char InPropType);
	int RegisterProperty(uint32_t OwnerNetGUID, unsigned char PropType, const struct FString& PropName, TArray<unsigned char> InitialValue);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void PushPropertyValue(int InReplicationID, TArray<unsigned char> NewValue, bool bForcePush);
	void OnPostSetLuaEventBridgeInstance();
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool GetSimplePropInfo(int InReplicationID, struct FUGCLuaNetPropertyHead* OutPropertyInfo);
	int GetReplicationID(uint32_t NetGUID, const struct FString& PropName);
	bool GetPropValue(int InReplicationID, TArray<unsigned char>* OutValue);
	unsigned char GetHeadSeq(int InReplicationID);
	bool GetFullPropInfo(int InReplicationID, struct FUGCLuaNetPropertyHead* OutPropertyInfo);
	static class UUGCDynamicNetManager* Get(class UObject* WorldContext);
	void EnqueuePendingUnmapped(uint32_t InOwnerNetGUID, int InReplicationID, unsigned char InSeq, TArray<unsigned char> InNewBytes, TArray<int> InPendingGUIDs);
	void EnableLuaTick();
	void DisableLuaTick();
	void ClearPullTracking(int InReplicationID);
	void ClearPullRequesting(int InReplicationID);
	void AddToPullQueue(int InReplicationID, bool bNeedMeta);
};


}

