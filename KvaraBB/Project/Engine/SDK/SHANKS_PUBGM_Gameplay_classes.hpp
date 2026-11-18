#pragma once


 
namespace SDK
{






class ABackpackRepActor : public APlayerReliableSequentialSyncActor
{
public:
	class UBackpackComponent*                          BackpackComp;                                             
	struct FIncNetArray                                ItemListNet;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.BackpackRepActor");
		return pStaticClass;
	}


	void OnRep_ItemListNet();
	void NotifyItemUpdated(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
	void NotifyItemEmpty(int Slack);
	void NotifyItemAdded(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
};




class AUAEGameMode : public ALuaGameMode
{
public:
	TWeakObjectPtr<class UObject>                      UtilsPtr;                                                 
	float                                              GridCheckSize;                                            
	float                                              DeepCheckSize;                                            
	float                                              HeightCheckSize;                                          
	int                                                MaxPlayerLimit;                                           
	unsigned char                                      UnknownData00[0xC];                                       
	bool                                               bEnableClimbing;                                          
	bool                                               IsUseFpsVault;                                            
	bool                                               bBornWithApple;                                           
	bool                                               bUseDefaultResultRules;                                   
	int                                                AntiDataCD;                                               
	bool                                               PlayerValidCheckResult;                                   
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                WeatherID;                                                
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     WeatherName;                                              
	int                                                RoomMode;                                                 
	int                                                SeasonIdx;                                                
	float                                              MeteorShowerRatio;                                        
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     ItemTableName;                                            
	unsigned char                                      UnknownData04[0x28];                                      
	struct FString                                     ReplayPushURL;                                            
	int                                                ReplayType;                                               
	unsigned char                                      UnknownData05[0x4];                                       
	struct FString                                     ReplayTitle;                                              
	EObserverEnemyTraceType                            EnableObserverEnemyTrace;                                 
	unsigned char                                      UnknownData06[0x7];                                       
	TArray<struct FString>                             ItemSpawnTableList;                                       
	TArray<struct FString>                             IgnoreItemClassPathList;                                  
	TArray<struct FDSSwitchInfo>                       DsSwitch;                                                 
	TArray<int>                                        TimeIDSwitch;                                             
	TMap<uint64_t, struct FCharacterMoveDragData>      CharacterMoveDragDataMap;                                 
	TMap<uint64_t, struct FParachuteDragData>          ParachuteDragDataMap;                                     
	TMap<uint64_t, struct FVehicleMoveDragDataFriendly> VehicleMoveDrag;                                          
	TArray<struct FVehicleCorrectionData>              VehicleCorrections;                                       
	TArray<struct FVehicleProtectionReportData>        VehicleProtections;                                       
	TMap<uint64_t, struct FCharacterShootVerifyData>   CharacterShootVerifyDataMap;                              
	TMap<uint64_t, struct FCharacterShootVerifyStat>   CharacterShootVerifyStatMap;                              
	uint32_t                                           ServerStartTime;                                          
	bool                                               bOpenChangeWearing;                                       
	bool                                               bEnableVehicleInReady;                                    
	unsigned char                                      UnknownData07[0x2];                                       
	unsigned char                                      UnknownData08[0x28];                                      
	bool                                               bUseAutoGroupParachuteTeam;                               
	unsigned char                                      UnknownData09[0x7];                                       
	struct FString                                     PickupBoxConfigDataTableName;                             
	struct FString                                     VehicleTableName;                                         
	unsigned char                                      UnknownData10[0x28];                                      
	bool                                               IsUsingSceneDropWeight;                                   
	bool                                               IsRegionItemGenerate;                                     
	unsigned char                                      UnknownData11[0x2];                                       
	struct FVector                                     RegionCenter;                                             
	float                                              RegionRadius;                                             
	unsigned char                                      UnknownData12[0x4];                                       
	TMap<struct FString, float>                        BattleCustomConfig;                                       
	int                                                MaxAllowReplicatedCharacterCount;                         
	int                                                AINoRepTimeInReady;                                       
	class UClass*                                      ObserverPlayerStateClass;                                 
	bool                                               bEnableDamage;                                            
	unsigned char                                      UnknownData13[0x3];                                       
	float                                              NearDeathRestoredOriginHealth;                            
	float                                              NearDeathSelfRescueRestoredOriginHealth;                  
	float                                              NearDeathDecreateBreathRate;                              
	float                                              RescueOtherRestoreDuration;                               
	float                                              RescueSelfRestoreDuration;                                
	float                                              DeadTombBoxLifeSpan;                                      
	int                                                DefaultPlayerBornPointID;                                 
	bool                                               bPlayerExitClearPlayerData;                               
	bool                                               bEnableDSTickLua;                                         
	bool                                               bClientIgnoreMLAI;                                        
	unsigned char                                      UnknownData14[0x5];                                       
	struct FString                                     ActorGridGeneratorClassPath;                              
	TArray<class UGroupSpotSceneComponent*>            ItemGroupComponents;                                      
	class AActor*                                      ChosenPlayerStartBuildingGroup;                           
	TArray<struct FDynamicTriggerConfig>               DynamicTriggerConfigs;                                    
	TArray<class AActor*>                              DynamicTriggers;                                          
	int                                                IsGameModeFpp;                                            
	bool                                               IsGameModeBandSpot;                                       
	unsigned char                                      UnknownData15[0x3];                                       
	TArray<struct FDynamicLoadItem>                    DynamicLoadItemArray;                                     
	TMap<struct FDynamicLoadItem, struct FDynamicLoadActors> DynamicLoadItemMap;                                       
	TArray<struct FVehicleAvatarReplaceCfg>            VehicleAvatarReplaceCfgList;                              
	bool                                               IsOpenItemGenerate;                                       
	bool                                               IsOpenVehicleGenerate;                                    
	unsigned char                                      UnknownData16[0x6];                                       
	TArray<int>                                        DynamicLevelArray;                                        
	struct FString                                     RoomType;                                                 
	bool                                               bCanLedgeGrab;                                            
	bool                                               bOpenForbitTeammatePickUp;                                
	bool                                               bOpenTeammateImprisonment;                                
	unsigned char                                      UnknownData17[0x1];                                       
	int                                                ZoneID;                                                   
	int                                                nClientType;                                              
	int                                                MainModeID;                                               
	int                                                RealPlayerNums;                                           
	bool                                               bABTestModify;                                            
	unsigned char                                      UnknownData18[0x4B];                                      
	struct FScriptMulticastDelegate                    OnGameModeStateChanged;                                   
	unsigned char                                      UnknownData19[0x110];                                     
	struct FScriptDelegate                             SendTeammateResultWhenChicken;                            
	struct FScriptDelegate                             HaveSentTeamBattleResult;                                 
	struct FScriptMulticastDelegate                    SendTeamBattleResult;                                     
	unsigned char                                      UnknownData20[0x110];                                     
	struct FScriptMulticastDelegate                    SendGameStopJoin;                                         
	unsigned char                                      UnknownData21[0x420];                                     
	bool                                               bIsPreCreatingPlayerController;                           
	unsigned char                                      UnknownData22[0x13F];                                     
	float                                              OBInfoTimeStep;                                           
	unsigned char                                      UnknownData23[0x2C];                                      
	TArray<struct FAirDropBoxInOb>                     AirDropBoxInfoList;                                       
	TArray<class AUAEPlayerController*>                KickFlagControllerList;                                   
	TArray<class AUAEPlayerController*>                ObserverControllerList;                                   
	unsigned char                                      UnknownData24[0xD8];                                      
	class UClass*                                      AdvertisementActorBP;                                     
	TArray<struct FAdvertisementActorConfig>           AdvConfigList;                                            
	TArray<class AUAEAdvertisementActor*>              AdvActorList;                                             
	TArray<struct FMissionBoardConfig>                 MissionBoardConfigList;                                   
	bool                                               bEnablePlaneBanner;                                       
	unsigned char                                      UnknownData25[0x7];                                       
	struct FString                                     HttpPlaneBannerLeftImgPath;                               
	struct FString                                     HttpPlaneBannerRightImgPath;                              
	struct FString                                     GrenadeEffectPath;                                        
	bool                                               bUseSpecialGrenadeEffect;                                 
	bool                                               bAnniversarySignalGunEffect;                              
	bool                                               bAvatarDownloadInBattle;                                  
	bool                                               bOpenAnniversaryActivity;                                 
	unsigned char                                      UnknownData26[0x4];                                       
	struct FString                                     FestivalAirDropBoxMesh;                                   
	bool                                               bUseFestivalAirDropBox;                                   
	unsigned char                                      UnknownData27[0x3];                                       
	float                                              FestivalAirDropProb;                                      
	float                                              MonsterDropPar;                                           
	float                                              SceneDropParam;                                           
	uint32_t                                           DSOpenSwtich;                                             
	unsigned char                                      UnknownData28[0x4];                                       
	class UItemGeneratorComponent*                     ItemGenerator;                                            
	class UVehicleAndTreasureBoxGeneratorComponent*    VehicleGenerator;                                         
	bool                                               bGameNeedReplay;                                          
	unsigned char                                      UnknownData29[0x7];                                       
	TArray<uint32_t>                                   NeedReplayPlayers;                                        
	TArray<struct FSeasonStatueData>                   SeasonStatueList;                                         
	struct FString                                     SeasonStatueClassPath;                                    
	struct FString                                     StatueBaseClassPath;                                      
	struct FStatueBaseData                             StatueBaseInfo;                                           
	int                                                BattleStopJoin;                                           
	int                                                nSignalGunEffectId;                                       
	TArray<struct FCharacterOverrideAttrData>          CharacterOverrideAttrs;                                   
	unsigned char                                      UnknownData30[0xA0];                                      
	bool                                               UseGMSpawnItemSpotDefaultTag;                             
	unsigned char                                      UnknownData31[0x7];                                       
	struct FString                                     GMSpawnItemSpotDefaultTag;                                
	unsigned char                                      UnknownData32[0x80];                                      
	bool                                               bStandAloneGameMode;                                      
	bool                                               bStandAloneLuaGenAIData;                                  
	unsigned char                                      UnknownData33[0x2];                                       
	int                                                StandAloneTestPlayerKey;                                  
	struct FName                                       StandAloneTestPlayerType;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEGameMode");
		return pStaticClass;
	}


	void WriteStatistics();
	void SyncPlayerNames();
	void SyncNewCorpsData(TArray<struct FDSCorpsInfo> OutCorpsData);
	class APawn* SpawnUAEPawnFor(class AController* NewPlayer, const struct FTransform& Trans);
	void SetVehicleReportEntry(uint32_t InUniqueID, const struct FVehicleReportEntry& InEntry);
	void SetPlayerOpenId(uint32_t InPlayerKey, const struct FString& InPlayerOpenID);
	void SetMaxWeaponReportNum(int Num);
	void SetKillerPlayerKey(class AController* VictimPlayer, uint32_t KillerPlayerKey);
	void SetGameEndReportData();
	struct FGameModeTeamBattleResultData RetrieveTeamBattleResultData(int TeamID);
	void RetrieveBattleData(struct FBattleData* OutBattleData);
	void RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);
	void ResetGameParamsFromGameMode();
	void Rescue(class APawn* RescueWho, class APawn* Hero);
	void RegisterItemGroupSpotsByTag(const struct FName& Tag, class UGroupSpotSceneComponent* GroupSpotComponent);
	void RegisterItemGroupSpots(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RefreshWorldActiveRange();
	void RefreshWatchTeammates(class AUAEPlayerController* InController, int InTeamID);
	void RefreshPlayerNames(uint32_t InPlayerKey, const struct FString& InPlayerName, int TeamID, bool IsLogin, uint64_t UID, int IdxInTeam);
	int RecoardAlivePlayerNum();
	class APlayerController* PreCreatePlayerController(uint32_t PlayerKey);
	void OnStandAloneGameEnd();
	void OnReportNetworkData();
	void OnPlayerFiring(uint32_t InPlayerKey);
	void OnPlayerControlDestroyEnd(uint32_t PlayerKey);
	void OnPlayerBreathChange(uint32_t InPlayerKey, float InBreath);
	void OnObserverLogout(class AUAEPlayerController* InController);
	void OnObserverLogin(class AUAEPlayerController* InController);
	void OnMsg(const struct FString& Msg);
	void OnAirDropBoxLanded(int boxId, const struct FVector& pos);
	void OnAirDropBoxEmpty(int boxId);
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason);
	void NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason);
	void NotifyPlayerAbleToExitSafely(uint32_t PlayerKey, const struct FName& PlayerType);
	void NotifyGameModeParamsChanged(const struct FGameModeParams& GameModeParams);
	void NotifyGameModeLuckmate(int64_t MyUID, int64_t LuckmateUID);
	void NotifyGameModeInit();
	void NotifyExistPlayerReEnter(uint32_t PlayerKey);
	void NotifyAIPlayerEnter(uint32_t PlayerKey, bool IsMLAI, bool bTeammateAI);
	void NotifyAIDropInfo(int NewAI, const struct FDSAIDropInfo& Info);
	float ModifyVehicleDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* VictimVehicle, class AActor* DamageCauser);
	float ModifyDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AController* VictimController, class AActor* DamageCauser);
	void Killed(class AController* Killer, class AController* VictimPlayer, class AActor* DamageCauser, class APawn* VictimPawn, const struct FDamageEvent& DamageEvent);
	bool IsStandAloneGameMode();
	bool IsSatisfyGeneratorArea(const struct FVector& Location);
	bool IsCollectingOBData();
	void InitWorldActiveRange();
	void InitSeasonStatue();
	void InitMissionBoard();
	void InitGenerator();
	void InitGameParamsFromGameMode();
	void InitDynamicTriggers();
	void InitDynamicBuildingGroups();
	void InitBornWithApple();
	void Heartbeat();
	bool HasVehicleReportEntry(uint32_t InUniqueID);
	bool HasDynamicBuildingGroup();
	void HandlePlayerPaintDecalResponse(uint32_t PlayerKey, const struct FName& PlayerType, int Result, int DecalId, int Count);
	void GotoNearDeath(class AController* DamageInstigator, class APawn* VictimPawn);
	struct FOnePlayerWeapon GetWeaponReportByWeaponRecord(const struct FString& PlayerKey);
	float GetWeaponDamageFromRecord(const struct FString& PlayerKey, int TargetWeaponType);
	struct FVehicleReportEntry GetVehicleReportEntry(uint32_t InUniqueID);
	int GetSurvivingTeamCount();
	int GetSurvivingCharacterCount();
	float GetRescueDuration(class AActor* WhoRescue, class AActor* RescueWho);
	int GetPlayerTotalShootNum(const struct FString& PlayerKey);
	TArray<class AUAEPlayerState*> GetPlayerStateListWithTeamID(int TeamID, const struct FName& PlayerType);
	void GetPlayerRealtimeVerifyInfo(uint32_t PlayerKey, struct FRealtimeVerifyInfo* RealtimeVerifyInfo);
	class AUAEPlayerController* GetPlayerControllerWithUID(uint64_t UID);
	TArray<class AUAEPlayerController*> GetPlayerControllerListWithTeamID(int TeamID, const struct FName& PlayerType);
	void GetPlayerAndRealAiNum(struct FHeartBeatData* Data);
	TArray<class AUAEPlayerController*> GetObserverControllerList();
	void GetMonsterNum(struct FHeartBeatData* Data);
	int GetMaxWeaponReportNum();
	struct FVector GetClassicPlaneDirection();
	class AUAEPlayerState* FindPlayerStateWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	class AUAEPlayerController* FindPlayerControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	class APlayerController* FindPlayerControllerByUId(uint64_t UID);
	class AController* FindControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	void DestroyNoActiveWorldActor(struct FVector* Location, float* Radius);
	void DestroyCharacterForPlayerController(class APlayerController* PC);
	void DestroyAllPickUpObjs();
	void DeleteSeasonStatue();
	void DeleteDynamicLoadItem();
	void DebugEnterFriendObserver(class AUAEPlayerController* InController);
	void CreateDynamicBuildingGroups(const struct FVector& Offset);
	void ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange);
	void AddAirDropBox(int boxId, const struct FVector& pos);
};




class AUAEGameState : public ALuaGameState
{
public:
	struct FName                                       RepPropertyCategory;                                      
	unsigned char                                      UnknownData00[0x5];                                       
	bool                                               bTeamIDChgDeactivePawn;                                   
	unsigned char                                      UnknownData01[0x52];                                      
	struct FString                                     WeaponAttrReloadTableName;                                
	struct FString                                     DamageSearchTableName;                                    
	bool                                               IsInitTable;                                              
	bool                                               bOverrideInstigatorEnable;                                
	unsigned char                                      UnknownData02[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEGameState");
		return pStaticClass;
	}


	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	bool HasTimeIDSwitch(int TimeID);
	bool CheckDSSwitchOpen(int SwitchId);
};




class UItemActorComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemActorComponent");
		return pStaticClass;
	}

};




class UBaseGeneratorComponent : public UItemActorComponent
{
public:
	struct FString                                     ItemTableName;                                            
	TArray<struct FString>                             ItemSpawnTableList;                                       
	class UUAEDataTable*                               ItemTable;                                                
	bool                                               IsWriteStatisticsToLog;                                   
	unsigned char                                      UnknownData00[0x7];                                       
	TMap<TEnumAsByte<ESpotGroupType>, struct FGroupSpotComponentArray> AllGroupSpots;                                            
	TArray<class USpotSceneComponent*>                 AllSpotsToTick;                                           
	TMap<int, struct FWorldTileSpotArray>              WorldTileSpots;                                           
	struct FString                                     CookedFilePath;                                           
	TArray<struct FString>                             CookedFileAddPathArray;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.BaseGeneratorComponent");
		return pStaticClass;
	}


	void RegisterWorldTileSpot(class USpotSceneComponent* Spot);
	void RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray);
	void GenerateSpots();
	void GenerateSpotOnTick(float DeltaTime);
	class AActor* GeneratePickupActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, const struct FItemGenerateSpawnClass& ItemData, struct FVector* ActorLocation, struct FRotator* ActorRotator);
	void CheckTileLevelsVisible();
};




class UItemGeneratorComponent : public UBaseGeneratorComponent
{
public:
	struct FVector                                     ItemGenerateOffset;                                       
	TEnumAsByte<ESpotGroupType>                        BornIslandGroupType;                                      
	bool                                               bStatisticsValid;                                         
	unsigned char                                      UnknownData00[0x2];                                       
	struct FItemGenerateStatisticsData                 ItemStatisticsData;                                       
	unsigned char                                      UnknownData01[0x50];                                      
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertys;                                       
	bool                                               UseSpotGroupPropertysEx;                                  
	bool                                               UseAreaID;                                                
	unsigned char                                      UnknownData02[0x6];                                       
	TArray<struct FString>                             AreaIDList;                                               
	TArray<struct FItemRegionCircle>                   ReplacedGeneratorRegionMap;                               
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertysEx;                                     
	TArray<struct FExtraItemSpawn>                     ExtraSpawnItemsList;                                      
	TMap<TEnumAsByte<ESpotGroupType>, struct FSpotGroupProperty> SpotGroupPropertysDic;                                    
	struct FSpotGroupProperty                          DefaultSpotGroupProperty;                                 
	class UCurveFloat*                                 SpotRateCurve;                                            
	class UCurveFloat*                                 ItemRateCurve;                                            
	TMap<struct FString, float>                        CategoryRates;                                            
	TMap<struct FString, struct FItemGenerateSpawnDataArray> ItemGenerateSpawnDatas;                                   
	TArray<class AActor*>                              BornIslandItems;                                          
	TArray<class UItemGroupSpotSceneComponent*>        AllValidGroups;                                           
	bool                                               bIsGenerateBornIslandItems;                               
	bool                                               bIsGenerateMainlandItems;                                 
	bool                                               bIsGenerateWorldTileItems;                                
	unsigned char                                      UnknownData03[0x5];                                       
	struct FDateTime                                   GenerateBornIslandTime;                                   
	struct FDateTime                                   GenerateMainlandTime;                                     
	bool                                               bUseLocalSpotFile;                                        
	unsigned char                                      UnknownData04[0x57];                                      
	TArray<struct FRepeatItemSpotData>                 AllRepeatItemSpotData;                                    
	unsigned char                                      UnknownData05[0x10];                                      
	TArray<struct FItemGenerateSpawnClass>             AllItemSpotDataToTick;                                    
	unsigned char                                      UnknownData06[0x50];                                      
	struct FString                                     CookedBandFilePath;                                       
	bool                                               bIsAreaItemLimit;                                         
	unsigned char                                      UnknownData07[0x7];                                       
	TArray<struct FAreaItemsLimitEdit>                 AreaItemsLimit;                                           
	TMap<struct FRegionID, struct FAreaItemsLimit>     AreaItemsLimitMaps;                                       
	bool                                               bUseDynamicSpotConfig;                                    
	unsigned char                                      UnknownData08[0x7];                                       
	TArray<struct FDynamicSpotConfig>                  DynamicSpotConfigs;                                       
	unsigned char                                      UnknownData09[0x50];                                      
	int                                                RandomSpotCountPerTick;                                   
	unsigned char                                      UnknownData10[0x54];                                      
	struct FScriptMulticastDelegate                    PreCalculateCompleted;                                    
	bool                                               bCheckPreCalculateComplete;                               
	bool                                               bEnablePrimeItemCircle;                                   
	unsigned char                                      UnknownData11[0x6];                                       
	TArray<struct FPrimeItemCircleConfig>              PrimeItemCircleConfigs;                                   
	unsigned char                                      UnknownData12[0x30];                                      
	TMap<struct FVector, class UUAESpotGroupObject*>   SpotGroupObjectsMapByLoc;                                 
	unsigned char                                      UnknownData13[0xA1];                                      
	bool                                               bRemovableMode;                                           
	unsigned char                                      UnknownData14[0x2];                                       
	int                                                RemoveGeneratedItemPerTick;                               
	int                                                RemoveDropGroundItemPerTick;                              
	bool                                               bAddHouseActorSerializeData;                              
	unsigned char                                      UnknownData15[0x43];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGeneratorComponent");
		return pStaticClass;
	}


	void WriteItemSpotStatisticsDatas();
	void WriteItemClassStatisticsDatas_V15();
	void WriteItemClassStatisticsDatas();
	void WriteGroupStatisticsDatas();
	void WriteBuildingStatisticsDatas();
	void WriteAreaItemStatisticsDatas();
	void WriteAllStatisticsDatasToLog();
	void WriteAllStatisticsDatas();
	bool TryLoadItemSpawnTableByTableMgr(const struct FString& tableName);
	void SetRandomSeed(int Seed);
	void SetCatetoryRate(TMap<struct FString, float> Rates);
	bool RemoveSpotInfo(bool bFirstEnterState);
	void RemoveItemOnTick();
	bool RemoveDropGround(bool bFirstEnterState);
	void RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data);
	void RegisterBornIslandItem(class AActor* Item);
	class UUAEDataTable* ReadItemGenerateTable(const struct FString& TablePath);
	void ReAddAllSpot();
	class UItemGroupSpotSceneComponent* RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups);
	void RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty);
	void RandomBornIslandGroups();
	void OnAsyncLoadItemClassFinish(const struct FItemGenerateSpawnClass& SpawnClass);
	void LuaCustomFunctionAfterGenerate(class AActor* ItemActor, struct FItemGenerateSpawnClass* SpawnClass);
	bool LuaAddRandomItemClassArray(const struct FItemGenerateSpawnClass& SpawnClass);
	void LoadItemGenerateTable();
	bool IsCatetoryEnabled();
	void InitCatetorys();
	void InitCategoryEx();
	TArray<struct FVector> GMTrackGroundCheck(class UClass* CheckClass, float FloatUp, float FloatDown, float SinkUp, float SinkTop, bool bCheckBounds);
	bool GMGenerateAllSpot(const struct FString& ItemPath);
	void GMEnableRefreshAllSpotWithSeed(int Seed);
	TArray<struct FString> GetSpotTags();
	TArray<struct FVector> GetSpotLocsByTag(const struct FString& ExTag);
	int GetSpotLocInPolygon(TArray<struct FVector> Anchors, int RandomNum, TArray<struct FVector>* OutLocs);
	int GetSpotLocInCircle(const struct FVector& Center, float Radius, int RandomNum, TArray<struct FVector>* OutLocs);
	struct FSpotGroupProperty GetSpotGroupPropertyByGroupType(TEnumAsByte<ESpotGroupType> SpotGroupType);
	bool GetRandomItemClassArray(bool RepeatGenerateItem, class UItemSpotSceneComponent* SpotComponent, struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	int GetItemDefineID(class UClass* PickUpClass);
	float GetCatetoryRate(const struct FString& Catetory);
	void GenerateSpotOnTick(float DeltaTime);
	void GenerateNewRandomSeed();
	struct FVector FindASpawnLoc(class UWorld* InWorld, const struct FVector& TraceStart);
	void EnableRemoveItem();
	void EnableRefreshAllSpot();
	void EnablePrimeItemPolygon(TArray<struct FVector> Anchors, int PrimeConfigIndex);
	void EnablePrimeItemCircle(const struct FVector& Center, float Radius, int PrimeConfigIndex);
	void EnableDynamicSpotConfigByIndex(int DynamicIndex);
	void DoPickUp(int ItemSpotDataIndex, const struct FString& Value, const struct FString& Category);
	void DeleteBornIslandItems();
	bool CheckShouldGenerateItem(int ItemId);
	void CheckRecoverItems();
	bool CheckInPolygon(const struct FVector& pos, TArray<struct FVector> Anchors);
	bool CheckInCircle(const struct FVector& pos, const struct FVector& Center, float* Radius);
	void AddIgnoreItemClassPath(TArray<struct FString> IgnoreItemClassList);
	void AddDropGround(class AActor* InActor);
};




class AUAEPlayerState : public ALuaPlayerState
{
public:
	bool                                               IsForcedNetRelevant;                                      
	bool                                               IsSoloCheckTeamID;                                        
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              surviveTime;                                              
	float                                              surviveTimeFromPlane;                                     
	unsigned char                                      UnknownData01[0x4];                                       
	float                                              Pronetime;                                                
	unsigned char                                      UnknownData02[0x8];                                       
	int                                                MovingCount;                                              
	float                                              marchDistance;                                            
	float                                              travelDistance;                                           
	float                                              DriveDistance;                                            
	float                                              MonsterCatchupDistance;                                   
	int                                                destroyVehicleNum;                                        
	int                                                rescueTimes;                                              
	TArray<uint64_t>                                   RescueTeammatesList;                                      
	int                                                NormalItemsNum;                                           
	int                                                SeniorItemsNum;                                           
	int                                                GVMemberID;                                               
	unsigned char                                      UnknownData03[0x4];                                       
	struct FName                                       PlayerType;                                               
	uint64_t                                           FinalTeamleaderUID;                                       
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     PlayerUID;                                                
	struct FString                                     MLAIStringUID;                                            
	bool                                               bPSEnsure;                                                
	unsigned char                                      UnknownData05[0x7];                                       
	struct FString                                     iconUrl;                                                  
	int                                                Gender;                                                   
	int                                                PlayerLevel;                                              
	int                                                SegmentLevel;                                             
	float                                              RealHiddenScore;                                          
	int                                                AceImprintShowId;                                         
	int                                                AceImprintBaseId;                                         
	int                                                AvatarBoxId;                                              
	int                                                planeAvatarId;                                            
	int                                                Campid;                                                   
	int                                                resID;                                                    
	uint64_t                                           UID;                                                      
	uint64_t                                           MLAIDisplayUID;                                           
	struct FString                                     OpenID;                                                   
	int                                                ZoneID;                                                   
	unsigned char                                      UnknownData06[0x4];                                       
	struct FString                                     Nation;                                                   
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData07[0x4];                                       
	int64_t                                            IdxInTeam;                                                
	uint64_t                                           PreTeamID;                                                
	int                                                PreTeamChatState;                                         
	int                                                PlayerBornPointID;                                        
	int                                                Kills;                                                    
	int                                                KillsBeforeDie;                                           
	int                                                Knockouts;                                                
	int                                                AIKills;                                                  
	int                                                RealPlayerKills;                                          
	int                                                BossKills;                                                
	int                                                DeathsCount;                                              
	unsigned char                                      UnknownData08[0x4];                                       
	int                                                MlAIDeliverNum;                                           
	int                                                OriginalMlAIDeliverNum;                                   
	int                                                Assists;                                                  
	unsigned char                                      UnknownData09[0x4];                                       
	TArray<uint64_t>                                   AssistTeammatesList;                                      
	TMap<int, bool>                                    AssistKillPlayers;                                        
	TArray<int>                                        OvertimeAssistsTime;                                      
	unsigned char                                      PlatformGender;                                           
	unsigned char                                      UnknownData10[0x3];                                       
	int                                                MatchStrategyLabel;                                       
	int                                                MatchLabel;                                               
	uint32_t                                           Killer;                                                   
	uint32_t                                           KillerIGPlayerKey;                                        
	unsigned char                                      UnknownData11[0x4];                                       
	struct FString                                     BeKilledOpenID;                                           
	struct FString                                     KillerName;                                               
	uint32_t                                           KillerType;                                               
	int                                                KillerWeaponID;                                           
	uint32_t                                           KillerDeliveryType;                                       
	uint32_t                                           DeadCircleIndex;                                          
	uint64_t                                           MisKillTeammatePlayerKey;                                 
	int                                                ShootWeaponShotNum;                                       
	int                                                ShootWeaponShotNumPicth;                                  
	int                                                ShootWeaponShotAndHitPlayerNum;                           
	int                                                ShootWeaponShotAndHitPlayerNumNoAI;                       
	int                                                ShootWeaponShotHeadNum;                                   
	int                                                ShootWeaponShotHeadNumNoAI;                               
	int                                                HeadShotNum;                                              
	int                                                HeadShotNumNoAI;                                          
	int                                                KillNumByGrende;                                          
	int                                                UseFragGrenadeNum;                                        
	int                                                UseSmokeGrenadeNum;                                       
	int                                                UseFlashGrenadeNum;                                       
	int                                                UseBurnGrenadeNum;                                        
	int                                                MaxKillDistance;                                          
	int                                                HealTimes;                                                
	float                                              DamageAmount;                                             
	float                                              DamageAmountFPP;                                          
	int                                                FPPSwitchTimes;                                           
	float                                              RealPlayerDamageAmount;                                   
	int                                                MeleeKillTimes;                                           
	float                                              MeleeDamageAmount;                                        
	float                                              RangedDamagedAmount;                                      
	float                                              VehicleDamageAmount;                                      
	int                                                FirstMoveBattles;                                         
	int                                                TotalBattles;                                             
	float                                              HealAmount;                                               
	TArray<struct FString>                             KillFlow;                                                 
	TArray<struct FString>                             KnockOutFlow;                                             
	TArray<struct FKnockOutData>                       KnockOutList;                                             
	float                                              InDamageAmount;                                           
	unsigned char                                      UnknownData12[0x14];                                      
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  
	int                                                PickUpItemTimes;                                          
	bool                                               bIsForbidItemFlowMerge;                                   
	unsigned char                                      UnknownData13[0x3];                                       
	TMap<int, int>                                     ConsumeItemUseCount;                                      
	TMap<int, struct FTLog_BornLandGrenadeData>        TLog_BornLandGrenadeData;                                 
	struct FAIDeliveryTlogData                         TLog_AIDeliveryTlogData;                                  
	bool                                               bHasSendAIDeliverData;                                    
	unsigned char                                      UnknownData14[0x7];                                       
	TMap<int, bool>                                    TLog_PickUpItemIdMap;                                     
	TArray<struct FGameModeLikeResultData>             Like;                                                     
	uint32_t                                           Switch;                                                   
	unsigned char                                      UnknownData15[0x4];                                       
	TArray<uint32_t>                                   Self;                                                     
	TArray<struct FGameModeTeammateLableCheckData>     LabelCheck;                                               
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              
	TArray<struct FUseBuffFlow>                        UseBuffFlow;                                              
	TArray<struct FBuildingEnterFlow>                  BuildingEnterFlow;                                        
	TArray<struct FTLog_PropEquipUnequipFlow>          TLog_PropEquipUnequipFlowData;                            
	TMap<int, int>                                     TLog_BulletCount;                                         
	struct FTLog_SpecialStats                          TLog_SpecialStats;                                        
	bool                                               bIsOutsideBlueCircle;                                     
	unsigned char                                      UnknownData16[0x3];                                       
	float                                              OutsideBlueCircleTime;                                    
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 
	int                                                FirstOpenedAirDropBoxNum;                                 
	int                                                FirstOpenedPlayerTombBoxNum;                              
	int                                                FirstOpenedTreasureBoxNum;                                
	float                                              HitEnemyHeadAmount;                                       
	TArray<int>                                        BuildFlow;                                                
	TArray<int>                                        DestroyShelterFlow;                                       
	float                                              ShelterTakeDamage;                                        
	float                                              HitShelterDamage;                                         
	struct FVector                                     LandLocation;                                             
	struct FVector                                     ParachuteLocation;                                        
	int                                                LandTime;                                                 
	struct FVector                                     DeadLocation;                                             
	struct FString                                     DeadDamangeType;                                          
	int                                                PveDeadAttacker;                                          
	int                                                PveStageId;                                               
	struct FString                                     DeadTimeStr;                                              
	int                                                NearDeathDamageType;                                      
	uint32_t                                           NearDeathCauserId;                                        
	bool                                               NearDeathIsHeadShot;                                      
	unsigned char                                      UnknownData17[0x3];                                       
	int                                                BeDownTimes;                                              
	int                                                BeSavedTimes;                                             
	unsigned char                                      UnknownData18[0x4];                                       
	struct FEquipmentData                              EquipmentData;                                            
	int                                                PersonalRank;                                             
	unsigned char                                      UnknownData19[0x8];                                       
	bool                                               bIsGameTerminator;                                        
	unsigned char                                      UnknownData20[0x3];                                       
	int                                                GamePlayingTime;                                          
	int                                                ObserverTime;                                             
	int                                                TouchDownAreaID;                                          
	int                                                TouchDownLocTypeID;                                       
	TArray<int>                                        TouchDownAreaList;                                        
	bool                                               bHasTouchDownAreaList;                                    
	unsigned char                                      UnknownData21[0x3];                                       
	float                                              ReportTouchDownHeight;                                    
	TArray<struct FGameModePlayerTaskData>             CompletedTaskList;                                        
	TArray<struct FReportCollection>                   SpecialCollectionList;                                    
	TArray<struct FWeaponDamageRecord>                 WeaponDamageRecordList;                                   
	TArray<int>                                        SecretAreaIDList;                                         
	TArray<struct FSpecialPickItemState>               CollectItemRecord;                                        
	float                                              DrivingHelicopterTime;                                    
	float                                              InHelicopterTime;                                         
	int                                                RevivalNum;                                               
	int                                                BeRevivedNum;                                             
	int                                                KillNumInVehicle;                                         
	float                                              MaxVehicleToLandHeight;                                   
	float                                              MaxVehicleInAirInterval;                                  
	int                                                KillPlayerNum;                                            
	int                                                KillAINum;                                                
	float                                              TotalSprintDistance;                                      
	float                                              TotalBeenDamageAmount;                                    
	float                                              DestroyVehicleWheelNum;                                   
	TArray<struct FDestroyVehicleWheelFlow>            DestroyVehicleWheelFlow;                                  
	int                                                ProneTimes;                                               
	int                                                CrouchTimes;                                              
	int                                                JumpTimes;                                                
	int                                                KillMonsterNum;                                           
	TMap<int, int>                                     MonsterID2KillNum;                                        
	float                                              TotalDamageAmountToMonsters;                              
	float                                              TotalDamageAmountFromMonsters;                            
	TMap<int, float>                                   DamageAmountToMonsters;                                   
	TMap<int, float>                                   DamageAmountFromMonsters;                                 
	int                                                MonsterHeadShotKilledTimes;                               
	int                                                BeMonsterDownTimes;                                       
	int                                                LightCandleNum;                                           
	unsigned char                                      UnknownData22[0x4];                                       
	TMap<int, int>                                     ActivityButtonCount;                                      
	TArray<struct FActivityEventReportData>            ActivityEventRecordList;                                  
	float                                              BattleStateTime;                                          
	bool                                               bIsKickedFromGame;                                        
	unsigned char                                      UnknownData23[0x3];                                       
	float                                              DriveWithTeammateDistance;                                
	int                                                FistKillingCount;                                         
	int                                                OpenedAirDropBoxNum;                                      
	unsigned char                                      UnknownData24[0x4];                                       
	TMap<uint32_t, uint32_t>                           VehicleUsedMap;                                           
	TArray<struct FString>                             DestroyVehicleFlow;                                       
	int                                                UseHelicoperNum;                                          
	unsigned char                                      UnknownData25[0x4];                                       
	TArray<struct FTLog_KillInfo>                      PlayerKillAIInfo;                                         
	TArray<struct FTLog_KillInfo>                      PlayerNearDeathDuoToAI;                                   
	struct FTLog_KillInfo                              AIKillPlayerInfo;                                         
	float                                              UseHelicoperDistance;                                     
	unsigned char                                      CharmRankIndex;                                           
	unsigned char                                      UnknownData26[0x3];                                       
	unsigned char                                      UnknownData27[0x50];                                      
	int                                                FollowState;                                              
	int                                                SnowBoardJumpActionCount;                                 
	int                                                EmoteOnTelpherCount;                                      
	int                                                KillMagicWalkAI;                                          
	int                                                SendMagicWalkAI;                                          
	unsigned char                                      UnknownData28[0x4];                                       
	TArray<int>                                        FindBlackMonsterIDs;                                      
	int                                                KillSnowManCount;                                         
	unsigned char                                      UnknownData29[0x4];                                       
	uint64_t                                           LuckmateUID;                                              
	TMap<EEventCounterDefine, int>                     EventCounterMap;                                          
	TMap<int, int>                                     GeneralCounterMap;                                        
	unsigned char                                      UnknownData30[0x8];                                       
	struct FScriptDelegate                             AllowToAddGeneralCount;                                   
	struct FScriptMulticastDelegate                    OnGenerelCountChanged;                                    
	int                                                VeteranRecruitIndex;                                      
	unsigned char                                      UnknownData31[0x4];                                       
	struct FScriptMulticastDelegate                    PlayerStateTeamChanged;                                   
	TArray<struct FPlayEmoteData>                      FPlayEmoteDataArray;                                      
	struct FGameModePlayerAliasInfo                    AliasInfo;                                                
	int                                                MemberIdInVoiceRoom;                                      
	bool                                               PlayerVoiceEnable;                                        
	unsigned char                                      UnknownData32[0x3];                                       
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                
	int                                                UpassShow;                                                
	int                                                upassKeepBuy;                                             
	int                                                upassCurValue;                                            
	int                                                pass_type;                                                
	bool                                               UpassIsBuy;                                               
	unsigned char                                      UnknownData33[0x3];                                       
	struct FTLog_Micphone                              MicphoneTlog;                                             
	float                                              TeammateMicrophoneTime;                                   
	float                                              TeammateSpeakerTime;                                      
	float                                              EnemyMicrophoneTime;                                      
	float                                              EnemySpeakerTime;                                         
	float                                              TeammateInterphoneTime;                                   
	float                                              EnemyInterphoneTime;                                      
	float                                              MicrophoneUseTimeStamp;                                   
	float                                              SpeakerUseTimeStamp;                                      
	unsigned char                                      UnknownData34[0x24];                                      
	struct FDamageInfo                                 LuaNearDeathDamageInfo;                                   
	struct FDamageInfo                                 LuaDeathDamageInfo;                                       
	struct FName                                       RepPropertyCategory;                                      
	unsigned char                                      UnknownData35[0x10];                                      
	bool                                               IsOnline;                                                 
	unsigned char                                      UnknownData36[0x1F];                                      
	struct FGameBaseInfo                               GameBaseInfo;                                             
	unsigned char                                      UnknownData37[0x8];                                       
	struct FString                                     RealPlayerName;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEPlayerState");
		return pStaticClass;
	}


	void SetRankAndPersonalRank(int TempRank, int TempPersonalRank);
	void SetGVMemberIDServerCall(int memberID);
	void SetGVMemberID(int memberID);
	void SetDeliveryResult(uint32_t InDeliverPlayerKey, bool bInSuccess, int EventTypeId);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_ServerAddGeneralCount(int ID, int InCount, bool bReset);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_ChangeOnlyTeamChat(int NewPreTeamChatState);
	void ReportTaskExtInfo(int TaskID, const struct FString& ExtInfo);
	void ReportTaskData(int TaskID, int process);
	void ReportSpecialCollection(int ItemId, int Count);
	void ReportSecretAreaID(int SecretAreaID);
	void ReportLikeTeammate(int64_t BeLikeUID, int LikeType);
	void ReportLikeSwitch(int SwitchSetting);
	void ReportLikeSelf(int LikeType);
	void ReportLandLocType(int TouchDownLocType);
	void ReportLandAreaList(TArray<int>* TouchDownAreaIDs);
	void ReportLandArea(int TouchDownArea);
	void ReportLabelCheck(int TeammateUID, int Result);
	void RecordUseHelicoper(uint32_t UseHelicoperId);
	void OnRepCampIDBP();
	void OnRep_VeteranRecruitIndex();
	void OnRep_UpdateKillMonsterNum();
	void OnRep_UID();
	void OnRep_TeamID();
	void OnRep_RescueTimesChange();
	void OnRep_PreTeamID();
	void OnRep_PlayerKillsChange();
	void OnRep_PlayerKey();
	void OnRep_MLAIDisplayUID();
	void OnRep_MatchLabel();
	void OnRep_CollectItemRecord();
	void OnRep_CampID();
	void OnRep_bOnlyPreTeamChat();
	void OnRep_AliasInfo();
	void OnClientVeteranRecruitIndexUpdated();
	bool IsSpecialPickItemCollectionCompleted(int ItemId);
	bool IsSpecialPickItem(int ItemId);
	bool IsNearDeathDamageInfoValid();
	bool IsItemForbidMerge(int ItemResId);
	bool IsDeathDamageInfoValid();
	struct FOnePlayerWeapon GetWeaponReportByWeaponRecord();
	void GetWeaponRecordData(struct FOnePlayerWeapon* OutWeaponInfo);
	int GetVeteranPlayerLevel();
	uint32_t GetUserIDByMemberID(int memberID);
	struct FString GetUIDString();
	struct FGameModeTeammateBattleResultData GetTeammateBattleResultData();
	int GetTeamID();
	int GetRank();
	int GetPlayerTotalShootNum();
	uint32_t GetPlayerKey();
	struct FGameModePlayerBattleResultData_SuperCold GetPlayerBattleResultData_SuperCold();
	struct FGameModePlayerBattleResultData GetPlayerBattleResultData();
	EMentorPlayerType GetMentorPlayerType();
	void ForceUpdateCampCharacterList();
	void CopyNearDeathDamageInfo();
	void CopyDeathDamageInfo();
	void ClearTlogData();
	void ClearKillNum();
	void ChangeCollectItemRecord(int InItemID, bool InNewState);
	void AddGeneralTLogJustForDelegate(int ID, int DeltaCnt, int CurrValue);
	void AddGeneralCount(int ID, int InCount, bool bReset);
	void AddEventCount(unsigned char EventID, int InCount, bool bReset);
};




class UBackpackComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FScriptMulticastDelegate                    ItemListUpdatedDelegate;                                  
	struct FScriptMulticastDelegate                    SingleItemUpdatedDelegate;                                
	struct FScriptMulticastDelegate                    SingleItemDeleteDelegate;                                 
	struct FScriptMulticastDelegate                    BatchItemUpdateDelegate;                                  
	struct FScriptMulticastDelegate                    BatchItemDeleteDelegate;                                  
	struct FScriptMulticastDelegate                    AvatarItemUpdatedDelegate;                                
	struct FScriptMulticastDelegate                    CapacityUpdatedDelegate;                                  
	struct FScriptMulticastDelegate                    ItemOperationDelegate;                                    
	struct FScriptMulticastDelegate                    ItemOperationInfoDelegate;                                
	struct FScriptMulticastDelegate                    AssociationOperationDelegate;                             
	struct FScriptMulticastDelegate                    ItemOperCountDelegate;                                    
	struct FScriptMulticastDelegate                    ItemOperationFailedDelegate;                              
	struct FScriptMulticastDelegate                    BackPackTipsToPlayerDelegate;                             
	struct FScriptMulticastDelegate                    ItemHandleAddDelegate;                                    
	struct FScriptMulticastDelegate                    AIStateItemListUpdatedDelegate;                           
	struct FScriptMulticastDelegate                    ItemUpdatedDelegate;                                      
	struct FScriptMulticastDelegate                    ItemRemovedDelegate;                                      
	bool                                               bEnableItemSourceTracking;                                
	unsigned char                                      UnknownData01[0xF];                                       
	TArray<struct FCustomAccessoriesData>              CustomAccessoriesData;                                    
	TArray<struct FBattleItemPickupAfterLand>          BattleItemPickupAfterLandList;                            
	TArray<struct FSpecialPickInfo>                    specialCountLimit;                                        
	TArray<int>                                        DisableItemsArray;                                        
	int                                                CoinsNum;                                                 
	bool                                               AllowPickToSafeBox;                                       
	bool                                               AllowPickForceToBackPack;                                 
	unsigned char                                      UnknownData02[0x2];                                       
	struct FScriptMulticastDelegate                    CoinsChangedDelegate;                                     
	unsigned char                                      UnknownData03[0x30];                                      
	struct FIncNetArray                                ItemListNet;                                              
	struct FIncNetArray                                ItemListNetCache;                                         
	TMap<int, struct FBattleItemData>                  CacheBattleItemMap;                                       
	TArray<struct FItemDefineID>                       BroadcastInsertItemList;                                  
	TArray<struct FItemDefineID>                       BroadcastUpdateItemList;                                  
	TArray<struct FItemDefineID>                       BroadcastDeleteItemList;                                  
	bool                                               AutoEquipAim;                                             
	bool                                               bForceAutoEquipAim;                                       
	unsigned char                                      UnknownData04[0x6];                                       
	TArray<class UItemHandleBase*>                     ItemHandleList;                                           
	TMap<struct FItemDefineID, class UItemHandleBase*> ItemHandleMap;                                            
	int                                                CapacityThreshold;                                        
	float                                              Capacity;                                                 
	float                                              OccupiedCapacity;                                         
	float                                              SafetyBoxCapacity;                                        
	float                                              SafetyBoxOccupiedCapacity;                                
	unsigned char                                      UnknownData05[0x18];                                      
	int                                                virtualitemid;                                            
	unsigned char                                      UnknownData06[0x8];                                       
	bool                                               IsForbidAutoEquipAttachments;                             
	unsigned char                                      UnknownData07[0x7];                                       
	TArray<int>                                        NeedToShowTypeList;                                       
	bool                                               bVerifyWeaponPackageData;                                 
	bool                                               bEnableBackpackRepActor;                                  
	unsigned char                                      UnknownData08[0x6];                                       
	TArray<int>                                        ForceInBackpackMeelWeaponList;                            
	bool                                               bShowBounty;                                              
	unsigned char                                      UnknownData09[0x7];                                       
	struct FScriptMulticastDelegate                    BackpackShowBountyDelegate;                               
	unsigned char                                      UnknownData10[0x8];                                       
	struct FScriptMulticastDelegate                    ItemChangeAreaDelegate;                                   
	struct FScriptMulticastDelegate                    JumpConsumeItemDelegate;                                  
	TMap<struct FString, class UObject*>               ProxyMap;                                                 
	bool                                               bEnableWeaponAttachmentBindToWeapon;                      
	unsigned char                                      UnknownData11[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.BackpackComponent");
		return pStaticClass;
	}


	bool UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	float UpdateStoreAreaOccupiedCapacity(EItemStoreArea InItemStoreArea, float* StoreAreaOccupiedCapacity);
	void UpdateOccupiedCapacity();
	float UpdateCapacity();
	void UnlockUpdateItemListReceive();
	void TryMergeItemHandles(const struct FItemDefineID& DefineID, EItemStoreArea InItemStoreArea);
	int TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop);
	bool SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2);
	void SetSpecialCountLimitFromLua(TArray<struct FSpecialPickInfo> InSpecialCountLimit);
	int SetItemSourceContext(int Source);
	void SetItemSource(const struct FItemDefineID& DefineID, int Source, bool bAmmoSource);
	void SetForceAutoEquipAim(bool bInAutoEquipAim);
	void SetDisableItemsArray(TArray<int> InDisableItems);
	void SetChangeWeaponSchemeState(bool bInIsChangeWeaponScheme);
	void ServerSetShowBounty(bool bInShowBounty);
	void ServerSetDropMeelWeapon(bool NewValue);
	void ServerSetCustomAccessories(int WeaponItemId, int Index, int ItemId, bool bIsSetOrRemove);
	void ServerEnableItem(const struct FItemDefineID& DefineID, bool bUse);
	void RPC_Multicast_AllItem(const struct FIncNetArray& Items);
	int ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup);
	bool RemoveItemHandle(const struct FItemDefineID& DefineID);
	void ReceiveItemList();
	void ReceiveCapacity();
	int PreCheckCanPickupBagAvatar(class UBattleItemHandleBase* NewHandle, class UBattleItemHandleBase* OldHandle, EBattleItemUseReason reson);
	void PostItemHandleEquippingState(const struct FItemDefineID& DefineID, bool bEquipping);
	bool PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	bool PickUpItem_Default(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	bool PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	void PickupBattleItemOnPlane();
	bool PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	bool PickItem_IntoBackpack(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void OnRep_specialCountLimit();
	void OnRep_ItemListNet();
	void OnRep_CoinsNum();
	void OnRep_Capacity();
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
	void NotifyCapacityUpdated();
	class UBattleItemHandleBase* NewItemHandle(const struct FItemDefineID& DefineID);
	struct FItemDefineID NewItemDefineID(const struct FItemDefineID& DefineID);
	void ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping);
	void ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count);
	void ModifyAutoPickClipType(int InAutoPickClipType);
	void ModifyAimNotAutoUse(bool bAdd);
	void LockUpdateItemListReceive();
	struct FBattleItemData ItemNet2Data(const struct FNetArrayUnit& NetItem);
	bool IsNeedToShowInBackpack(int TypeDefineID);
	bool IsItemSourceTrackingEnabled();
	bool IsItemListUpdatedHasSomeItemTypes(TArray<int> ItemTypes);
	bool IsItemListUpdatedHasSomeItemSubTypes(TArray<int> ItemSubTypes);
	bool IsItemListUpdatedHasSomeItems(TArray<int> ItemTypeSpecificIDs);
	bool IsItemListUpdatedHasOneItemType(int itemType);
	bool IsItemListUpdatedHasOneItemSubType(int ItemSubType);
	bool IsItemListUpdatedHasOneItem(int ItemTypeSpecificID);
	bool IsItemExist(const struct FItemDefineID& DefineID);
	bool IsItemDisabled(int ItemId);
	bool IsEnableWeaponAttachmentBindToWeapon();
	bool IsEnableBackpackRepActor();
	bool IsCustomIgnoreAccessories(int WeaponId, int Index);
	bool IsCustomAccessories(int WeaponId, int ItemId);
	bool IsChangeWeaponScheme();
	bool IsBackPackContainItemId(int ItemId);
	bool IsAutoUse(int ItemId);
	bool HasUnEquipItemByDefindIdRange(int LowValue, int HighValue);
	bool HasTagSub(int ItemId, const struct FName& TagName);
	bool HasItemBySubType(int SubType);
	bool HasItemBySpecificID(int SpecificID);
	bool HasItemByDefineID(const struct FItemDefineID& DefineID);
	bool HasItemByDefindIdRange(int LowValue, int HighValue);
	TArray<int> HasAllItem(TArray<struct FBattleItemData> ItemDataArray, bool bExcludeEquippingItem);
	void HandleDropInDisuse(const struct FItemDefineID& DefineID, class UBattleItemHandleBase* ItemHandle, EBattleItemDisuseReason Reason, float OccupiedCapacityBeforeDisuse);
	class UWorld* GetWorld_BP();
	int GetUnEquipItemNumByItemId(int ItemId);
	struct FSpecialPickInfo GetSpecialItemNow(const struct FItemDefineID& DefineID);
	struct FSpecialPickInfo GetSpecialItemBefore(int ItemResId);
	float GetSafetyBoxCapacity();
	struct FBattleItemData GetLeastElectrictyBattleItemData(const struct FItemDefineID& DefineID, EBattleItemAdditionalDataType AdditionalDataNameType);
	int GetLastTakenItemSource();
	int GetItemSubType(int ItemId);
	int GetItemSourceContext();
	int GetItemSource(const struct FItemDefineID& DefineID, bool bAmmoSource);
	TArray<struct FBattleItemData> GetItemListBySpecialID(TArray<int> SpecialIDArray, bool bIgnoreEquipping, EItemStoreArea InItemStoreArea);
	TArray<struct FBattleItemData> GetItemListByDefineID(const struct FItemDefineID& DefineID);
	TMap<struct FItemDefineID, class UItemHandleBase*> GetItemHandleMap();
	TArray<class UItemHandleBase*> GetItemHandleList();
	int GetItemCountByType(int InItemType);
	int GetItemCountByItemSpecialID(int InItemSpecialID);
	int GetItemCountByDefineIDUnEquip(const struct FItemDefineID& DefineID, bool bOnlyInstance);
	int GetItemCountByDefineID(const struct FItemDefineID& DefineID, bool bOnlyInstance);
	struct FBattleItemData GetItemByDefineID(const struct FItemDefineID& DefineID);
	int GetItemAttrsFlag(int ItemId);
	float GetItemAssociateWeights(const struct FBattleItemData& InItemData);
	struct FBattleItemData GetFirstItemBySubType(int SubType);
	struct FBattleItemData GetFirstItemByDefineIDIgnoreInstance(const struct FItemDefineID& DefineID);
	struct FItemDefineID GetCurrentPickupItemDefineID();
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FBattleItemData> GetAllItemList(EItemStoreArea InItemStoreArea);
	EBattleItemClientPickupType GetAIPickupType(int ItemId);
	void ForceNetUpdate();
	bool DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason);
	bool DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason);
	class UBattleItemHandleBase* CreateItemHandleInternal(const struct FItemDefineID& DefineID);
	class UItemHandleBase* CreateItemHandle(const struct FItemDefineID& DefineID);
	int ConsumeItem(const struct FItemDefineID& DefineID, int Count);
	void ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason);
	void ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	void ClientBroadcastItemChangeAreaDelegate(int TypeSpecificID, EBattleItemChangeAreaType OperationType, int Num, bool bToSafeBox);
	int CheckSpecialMaxCountForItem(const struct FItemDefineID& DefineID, int Count);
	bool CheckSkillPropItemCanBePickup(class UBackpackComponent* BackpackComp, const struct FItemDefineID& DefineID);
	bool CheckPickUpItemDefaultSuccess(const struct FItemDefineID& DefineID, bool bPickupSucc, bool bAutoEquip);
	int CheckLeftLimitCountForItem(int InItemID, int InCount);
	void CheckItemEmptyInBackpack(int InItemID);
	bool CheckItemAttrsFlag(int ItemId, EItemAttrs ItemAttrEnum);
	int CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreAreaNew(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool CantDrop();
	bool CanDisuseToBackpack(const struct FItemDefineID& DefineID);
	bool CacheItemAssociationBeforeDisuse(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason);
	void BroadcastItemOperCountDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, int Count);
	void BroadcastItemOperationInfoDelegate(const struct FItemOperationInfo& ItemOperationInfo);
	void BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason);
	void BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	void BroadcastItemChangeAreaDelegate(int TypeSpecificID, EBattleItemChangeAreaType OperationType, int Num, bool bToSafeBox);
	bool AlternativePickupItem(struct FItemDefineID* DefineID);
	bool AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle);
	void AddBattleItemPickupOnPlane(EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType, struct FItemDefineID* DefineID, struct FBattleItemPickupInfo* PickupInfo);
};




class AUAECharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	int                                                iRegionCharacter;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       RepPropertyCategory;                                      
	struct FName                                       PlayerType;                                               
	struct FString                                     PlayerName;                                               
	struct FString                                     Nation;                                                   
	struct FString                                     RpcParamTamperForReplay;                                  
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     PlayerUID;                                                
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData03[0x4];                                       
	struct FScriptMulticastDelegate                    OnTeamIDChange;                                           
	bool                                               bTeamLeader;                                              
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                Campid;                                                   
	int                                                resID;                                                    
	ECharacterGender                                   DefaultCharacterGender;                                   
	unsigned char                                      UnknownData05[0x3];                                       
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                
	struct FGameModePlayerPetInfo                      PetInfo;                                                  
	int                                                planeAvatarId;                                            
	int                                                DyeDebugFlag;                                             
	TArray<struct FGameModePlayerTaskData>             InitialTaskDataList;                                      
	bool                                               bIsAI;                                                    
	bool                                               bIsMLAI;                                                  
	bool                                               bIsAIWithPet;                                             
	bool                                               bAINeedCheckBullets;                                      
	float                                              DestinyValue;                                             
	unsigned char                                      UnknownData06[0xC];                                       
	float                                              RatingScore;                                              
	bool                                               UseWholeBodyModel;                                        
	bool                                               bEnsure;                                                  
	bool                                               bMEnsure;                                                 
	bool                                               bRepEnsure;                                               
	bool                                               bRepMEnsure;                                              
	bool                                               DefaultIsUseWholeBodyModel;                               
	unsigned char                                      UnknownData07[0x12];                                      
	struct FString                                     LuaFilePath;                                              
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	unsigned char                                      UnknownData08[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharacter");
		return pStaticClass;
	}


	void SetNetCullDistanceSquared(float fNetCullDistanceSquared);
	void SetMEnsure(bool bMValue);
	void SetEnsure(bool bValue);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void PostRep_PlayerUID();
	void OnRep_UseWholeModel();
	void OnRep_TeamID();
	void OnRep_ResId();
	void OnRep_PlayerUID();
	void OnRep_PlayerKey();
	void OnRep_CampID();
	bool IsDefaultCharType();
	int GetTeamID();
	bool GetRepMEnsure();
	bool GetRepEnsure();
	struct FString GetPlayerKey();
	int GetPhysicsType();
	TArray<class UActorComponent*> GetNonSimulatedComponents_OnFighting();
	TArray<class UActorComponent*> GetNonSimulatedComponents_NonTeammates();
	TArray<class UActorComponent*> GetNonSimulatedComponents();
	TArray<class UActorComponent*> GetNonDedicatedComponents();
	class UPrimitiveComponent* GetMovementBaseComponent();
	bool GetMEnsure();
	bool GetEnsure();
	int GetCampID();
	void ClientAcknowledgeReconnection_3(uint32_t Token);
};




class UItemSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemSceneComponent");
		return pStaticClass;
	}

};




class UGroupSpotSceneComponent : public UItemSceneComponent
{
public:
	float                                              LastGenerateItemTime;                                     
	float                                              GenerateItemTimeCD;                                       
	bool                                               bPickup;                                                  
	bool                                               bRepeatGenerateItem;                                      
	bool                                               bIsValidGroup;                                            
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GroupSpotSceneComponent");
		return pStaticClass;
	}


	void SetGroupValid(bool Valid);
	bool IsValidGroup();
	int FindWorldCompositionID();
	void DoPickUp();
};




class UItemGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	ERegionSizeIndex                                   RegionSize;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	class UItemGeneratorComponent*                     ItemGenerator;                                            
	TArray<class UItemSpotSceneComponent*>             SpotsCacheCur;                                            
	TArray<class UItemSpotSceneComponent*>             SpotsCacheAll;                                            
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGroupSpotSceneComponent");
		return pStaticClass;
	}


	void SetGroupProperty(class UItemGeneratorComponent* Generator, const struct FSpotGroupProperty& Property);
	void RepeatSpots();
	void RepeatSingleSpot(class UItemSpotSceneComponent* Spot);
	void RandomSpotByType(TEnumAsByte<ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots);
	void RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots);
	float RandomRepeatGenerateItemCD(const struct FSpotGroupProperty& GroupProperty);
};




class USpotSceneComponent : public UItemSceneComponent
{
public:
	int                                                WorldCompositionID;                                       
	float                                              HalfHeight;                                               
	int                                                SpotProbability;                                          
	float                                              LineOffsetZ;                                              
	bool                                               bRepeatGenerateItem;                                      
	bool                                               bIsSpotValid;                                             
	unsigned char                                      UnknownData00[0xE];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.SpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotValid(bool Valid);
	bool LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool IsSpotValid();
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	bool GenerateSpot();
	class AActor* GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator);
};




class UItemSpotSceneComponent : public USpotSceneComponent
{
public:
	class UItemGeneratorComponent*                     ItemGenerator;                                            
	TArray<struct FItemGenerateSpawnClass>             AllItems;                                                 
	class UGroupSpotSceneComponent*                    GroupSpotSceneComponent;                                  
	TMap<struct FString, int>                          CacheItemValeCategory;                                    
	TArray<TWeakObjectPtr<class AActor>>               CacheItems;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemSpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotProperty(int CompositionID, TEnumAsByte<ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property, class UGroupSpotSceneComponent* Component, bool RepeatGenerateItem);
	void RepeatSpotProperty(const struct FSpotTypeProperty& Property);
	bool GenerateSpot();
	void GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass);
	void DoPickUp(const struct FString& ItemValue, const struct FString& ItemCategory);
	int CountCacheItemValeCategory();
	void ClearCacheItems();
};




class AUAEHouseActor : public AUAENetActor
{
public:
	int                                                iRegionHouse;                                             
	float                                              WindowHideDistanceSquared;                                
	float                                              WindowLoadDistanceSquared;                                
	float                                              WindowLoadDistanceSquaredOnVeryLowDevice;                 
	float                                              WindowLoadDistanceSquaredOnServer;                        
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FUAEWindowRepData>                   WindowList;                                               
	TMap<int, class UUAEWindowComponent*>              WindowComponents;                                         
	bool                                               bEnableWindow;                                            
	bool                                               bShouldConsiderDistance;                                  
	unsigned char                                      UnknownData01[0x66];                                      
	bool                                               SerializeDataUse;                                         
	bool                                               IsStickToTheGround;                                       
	unsigned char                                      UnknownData02[0x6];                                       
	TArray<unsigned char>                              SerializeData;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEHouseActor");
		return pStaticClass;
	}


	void RecordBreakWindowTlog(class APlayerController* EventInstigator);
	static void ProcessWindowCreateList();
	void OnRep_WindowList();
	void ClearWindowList();
	void BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData);
};




class UUAEGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEGameplayStatics");
		return pStaticClass;
	}


	static class UGameplayDelegates* GetGameBridge(class UObject* WorldContextObject);
};




class AUAEProjectile : public ALuaActor
{
public:
	bool                                               IsServerAlreadyExplodedCpp;                               
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     ProjInitialRelativeOffset;                                
	struct FVector                                     ProjStandOffset;                                          
	struct FVector                                     ProjCrouchOffset;                                         
	struct FVector                                     ProjProneOffset;                                          
	TEnumAsByte<ECharacterPoseType>                    ProjPrevoisOwnerPose;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              SpawnSeconds;                                             
	bool                                               bShowGrenadeWarningFlag;                                  
	bool                                               bIsGroundedOnServerCpp;                                   
	unsigned char                                      UnknownData02[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEProjectile");
		return pStaticClass;
	}


	void WorkAsBuffApplierEvent(const struct FString& BuffName, class APawn* BuffTarget);
	void TimeoutExplodeMulticast_CPP();
	void TimeoutExplodeMulticast_BPEvent();
	void SetActorInitialRelativeOffset(const struct FVector& Offset, const struct FVector& StandOffset, const struct FVector& CrouchOffset, const struct FVector& ProneOffset, TEnumAsByte<ECharacterPoseType> PrevoisOwnerPose);
	void ServerNotifyGroundEventOnClient();
	void OnRep_IsServerAlreadyExplodedCpp();
	void OnRep_IsGroundedOnServerCpp();
	void OnProjectileStopOnServer();
	void OnProjectileStopOnClient();
	void IsServerAlreadyExplodedCppNotify();
	bool IsOwnerAutomous();
	void GlassDetect(const struct FVector& Start, const struct FVector& End);
	float GetRemainingEffectTime();
	void ChangeGrenadeMarkerState(bool bNewState);
	void CallExplode();
	void BroadcastClientExplode();
};




class AUAEOBState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEOBState");
		return pStaticClass;
	}

};




class AUAEPlayerController : public ALuaPlayerController
{
public:
	struct FScriptMulticastDelegate                    OnPlayerKeyRepDelegate;                                   
	struct FString                                     DSVersion;                                                
	struct FName                                       RepPropertyCategory;                                      
	struct FName                                       PlayerType;                                               
	struct FString                                     PlayerName;                                               
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           UID;                                                      
	struct FString                                     PlayerOpenID;                                             
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	int64_t                                            IdxInTeam;                                                
	int                                                Campid;                                                   
	struct FVector                                     CharacterLocation;                                        
	int                                                RoomMode;                                                 
	unsigned char                                      UnknownData02[0x4];                                       
	struct FWeatherInfo                                WeatherInfo;                                              
	int                                                planeAvatarId;                                            
	int                                                DyeDebugFlag;                                             
	int                                                PlayerStartID;                                            
	bool                                               bUsedSimulation;                                          
	unsigned char                                      UnknownData03[0x3];                                       
	struct FPlayerNetStats                             NetStats;                                                 
	bool                                               bEnablePlaneBanner;                                       
	unsigned char                                      UnknownData04[0x7];                                       
	struct FString                                     PlanetailResLink;                                         
	int                                                InPacketLossRate;                                         
	int                                                OutPacketLossRate;                                        
	int                                                ClientNetworkType;                                        
	unsigned char                                      UnknownData05[0x4];                                       
	TArray<TWeakObjectPtr<class AActor>>               LastReplicatedActors;                                     
	unsigned char                                      UnknownData06[0x10];                                      
	bool                                               bIsForReplay;                                             
	bool                                               bIsGlobalObserverForReplay;                               
	unsigned char                                      UnknownData07[0x2];                                       
	int                                                GameReplayType;                                           
	bool                                               bDisableProcessPlayerInput;                               
	bool                                               bNoAttenuationGlobalVoice;                                
	unsigned char                                      UnknownData08[0x6];                                       
	struct FGameModePlayerUpassInfo                    InitialUpassInfo;                                         
	TArray<struct FGameModePlayerUpassInfo>            InitialUpassInfoList;                                     
	TArray<struct FPlayerOBInfo>                       PlayerOBInfoList;                                         
	int                                                LobbyShowWeaponID;                                        
	bool                                               bIsGM;                                                    
	unsigned char                                      UnknownData09[0x3];                                       
	struct FString                                     Nation;                                                   
	bool                                               bIsTeammateEscaped;                                       
	unsigned char                                      UnknownData10[0x7];                                       
	ECharacterGender                                   DefaultCharacterGender;                                   
	unsigned char                                      UnknownData11[0x3];                                       
	int                                                DefaultCharacterHeadID;                                   
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          
	TArray<struct FGameModePlayerRolewearInfo>         InitialAllWear;                                           
	int                                                RolewearIndex;                                            
	unsigned char                                      UnknownData12[0x4];                                       
	TArray<int>                                        equip_plating_list;                                       
	TArray<struct FGameModePlayerItem>                 InitialSharedSkin;                                        
	struct FGameModePlayerKnapsackSingleInfo           InitialSharedKnapsack;                                    
	bool                                               bSharedSkinOpened;                                        
	bool                                               bUsingSharedSkin;                                         
	bool                                               bSubscribeBagOpened;                                      
	unsigned char                                      UnknownData13[0x1];                                       
	int                                                FashionBagStartIndex;                                     
	int                                                VehicleSkinInReady;                                       
	bool                                               bSpwanInVehiclePlayerStart;                               
	unsigned char                                      UnknownData14[0x3];                                       
	TArray<struct FGameModePlayerItem>                 InitialWeaponAvatarList;                                  
	struct FGameModePlayerPetInfo                      InitialPetInfo;                                           
	TArray<struct FGameModePlayerPetInfo>              AdditionalPetInfo;                                        
	int                                                UsingAdditionalPetIndex;                                  
	unsigned char                                      UnknownData15[0x4];                                       
	TArray<struct FGameModePlayerKnapsackExtInfo>      InitialKnapsackExtInfo;                                   
	TArray<struct FGameModePlayeWeaponSchemeInfo>      InitialWeaponSchemeInfo;                                  
	TArray<struct FPlayerEffectItemInfo>               InitialEffectItemInfo;                                    
	struct FScriptMulticastDelegate                    OnInitialWeaponScheme;                                    
	struct FScriptMulticastDelegate                    OnInitialEffectItem;                                      
	struct FScriptMulticastDelegate                    OnLongTimeNoReceived;                                     
	int                                                CurWeaponSchemeIndex;                                     
	int                                                PveLevel;                                                 
	TArray<int>                                        InitialCharSkillList;                                     
	TArray<struct FGameModePlayerItem>                 InitialVehicleAvatarList;                                 
	TArray<struct FGameModePlayerItems>                InitialVehicleAvatarSkinList;                             
	int                                                nVehicleSwitchEffectId;                                   
	int                                                ShowVehicleSkin;                                          
	TArray<struct FGameModePlayerItem>                 InitialBackPackPendantList;                               
	TArray<struct FVehicleAvatarData>                  InitialVehicleAdvanceAvatarList;                          
	TArray<struct FGameModePlayerItem>                 InitialVehicleMusicList;                                  
	struct FGameModePlayerConsumableAvatar             InitialConsumableAvatar;                                  
	struct FGameModePlayerEquipmentAvatar              InitialEquipmentAvatar;                                   
	TMap<int, int>                                     WeaponAvatarItemList;                                     
	unsigned char                                      UnknownData16[0xA0];                                      
	TMap<int, int>                                     GrenadeAvatarItemList;                                    
	TArray<struct FGameModeWeaponAvatarData>           WeaponAvatarDataList;                                     
	TMap<int, int>                                     VehicleAvatarList;                                        
	TMap<int, struct FVehicleAvatarData>               VehicleAdvanceAvatarList;                                 
	TMap<int, struct FVehicleAvatarSkinList>           VehicleAvatarSkinList;                                    
	TArray<int>                                        VehicleMusicList;                                         
	TArray<int>                                        DefaultVehicleMusic;                                      
	TArray<struct FGameModePlayerExpressionItem>       InitialExpressionItemList;                                
	TArray<struct FGameModeWeaponDIYPlanData>          InitialWeaponDIYPlanData;                                 
	TMap<int, int>                                     WeaponDIYPlanDataMap;                                     
	TMap<int, int>                                     InitialWeaponPendantList;                                 
	TArray<struct FGameModePlayerTaskData>             InitialTaskDataList;                                      
	TArray<struct FSpecialPickItem>                    InitialSpecialPickItemList;                               
	TArray<struct FDailyTaskStoreInfo>                 DailyTaskStoreList;                                       
	uint32_t                                           TaskSyncToDsTs;                                           
	unsigned char                                      UnknownData17[0x4];                                       
	struct FScriptMulticastDelegate                    OnPlayerGotoSpectatingDelegate;                           
	unsigned char                                      UnknownData18[0x10];                                      
	struct FScriptMulticastDelegate                    OnReceiveUIMessage;                                       
	int64_t                                            LastGameResultTime;                                       
	bool                                               bRoomCanKickPlayer;                                       
	bool                                               bCanDownloadInBattle;                                     
	unsigned char                                      UnknownData19[0x6];                                       
	struct FString                                     IpCountryStr;                                             
	bool                                               bRoomOwner;                                               
	bool                                               bOpenChangeWearing;                                       
	unsigned char                                      UnknownData20[0x2];                                       
	uint32_t                                           ObserverFlags;                                            
	bool                                               bIsSpectating;                                            
	unsigned char                                      UnknownData21[0x3];                                       
	struct FLobbyWatchInfo                             LobbyWatchInfo;                                           
	int                                                HawkEyeSpectateMaxMatchCount;                             
	int                                                HawkEyeSpectateUsedMatchCount;                            
	bool                                               bIsWatchEnd;                                              
	unsigned char                                      UnknownData22[0x3];                                       
	float                                              UpdateOBCircleCounter;                                    
	float                                              UpdateOBCircleInterval;                                   
	bool                                               bAllowAutoSelectTeamMate;                                 
	bool                                               bWaitRetryGotoSpectating;                                 
	unsigned char                                      UnknownData23[0x6];                                       
	TArray<struct FString>                             FriendObservers;                                          
	unsigned char                                      UnknownData24[0x1];                                       
	bool                                               bCanLedgeGrab;                                            
	unsigned char                                      UnknownData25[0x6];                                       
	bool                                               bIsSpectatingEnemy;                                       
	unsigned char                                      UnknownData26[0x5F];                                      
	TWeakObjectPtr<class UUAEUserWidget>               InGameUIRoot;                                             
	TArray<struct FSoftClassPath>                      LevelUpdateNetActorClassPaths;                            
	TArray<class UClass*>                              LevelUpdateNetActorClassList;                             
	unsigned char                                      UnknownData27[0x53];                                      
	bool                                               bExited;                                                  
	bool                                               bReconnected;                                             
	bool                                               bReconnecting;                                            
	unsigned char                                      UnknownData28[0x2];                                       
	float                                              ReconnectTimestamp;                                       
	unsigned char                                      UnknownData29[0xC];                                       
	struct FScriptMulticastDelegate                    PlayerControllerLostDelegate;                             
	struct FScriptMulticastDelegate                    SyncDailyTaskInfoDelegate;                                
	struct FScriptMulticastDelegate                    PlayerControllerRecoveredDelegate;                        
	struct FScriptMulticastDelegate                    OnPlayerControllerReconnectStarted;                       
	struct FScriptMulticastDelegate                    PlayerControllerReconnectedDelegate;                      
	struct FScriptMulticastDelegate                    PlayerControllerAboutToRespawnDelegate;                   
	struct FScriptMulticastDelegate                    PlayerControllerRespawnedDelegate;                        
	struct FScriptMulticastDelegate                    PlayerControllerAboutToExitDelegate;                      
	struct FScriptMulticastDelegate                    OnPlayerQuitSpectatingForClient;                          
	struct FScriptMulticastDelegate                    OnPlayerControllerBattleBeginPlay;                        
	struct FScriptMulticastDelegate                    OnInitGameUI;                                             
	unsigned char                                      UnknownData30[0x10];                                      
	bool                                               bCanWatchEnemyInRoomMode;                                 
	unsigned char                                      UnknownData31[0x107];                                     
	TArray<class UObject*>                             SecurityObjs;                                             
	bool                                               IsDelayNotifyEnterBattleUntilLevelLoad;                   
	unsigned char                                      UnknownData32[0x3];                                       
	float                                              NotifyTimeOut;                                            
	float                                              DelayCloseLoadingTime;                                    
	unsigned char                                      UnknownData33[0x4];                                       
	struct FString                                     NeedLoadLevelName;                                        
	struct FString                                     NeedLoadedLevelFullName;                                  
	bool                                               IsTickHouse;                                              
	unsigned char                                      UnknownData34[0xF];                                       
	int                                                AntiDataCD;                                               
	int                                                ModeID;                                                   
	bool                                               bOpenReconnectUseCharViewPoint;                           
	unsigned char                                      UnknownData35[0xCF];                                      
	float                                              ClientToDSFlowLimitTime;                                  
	float                                              ClientToDSFlowLimit;                                      
	unsigned char                                      UnknownData36[0x20];                                      
	struct FString                                     UsingNetObjectPathNameMappingCSV;                         
	struct FString                                     UsingOodleNetworkDicPath;                                 
	unsigned char                                      UnknownData37[0x20];                                      
	class ANetworkReportActor*                         NetworkReportActor;                                       
	unsigned char                                      UnknownData38[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEPlayerController");
		return pStaticClass;
	}


	bool UseingWeaponScheme();
	void TestShowLongTimeNoOperation();
	void TestCastUIMsgWithPara(const struct FString& strMsg, const struct FString& module, int TestID);
	void SyncDailyTaskStoreInfo(TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList);
	void SetUsedSimulationCVar(bool Value);
	static void SetTargetMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate);
	void SetPanels(TArray<class UUAEUserWidget*> panels);
	void SetIsInPetSpectator(bool inIsInPetSpectator);
	static void SetDSMsgReceiveDelegate(const struct FScriptDelegate& InDelegate);
	static void SetClientMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate);
	void ServerUpdateLevelVisibility(const struct FName& PackageName, bool bIsVisible);
	void ServerSetVoiceId(int VoiceID);
	void ServerRepListDispatch(class UObject* InObject);
	void ServerRepComponentsDispatch(class UObject* InObject);
	void ServerKickSelf();
	void ServerExitGame();
	void ServerAcknowledgeReconnection_2(uint32_t Token);
	void SendNetRPCIndexMappingHashToServer(uint32_t VersionHash);
	void SendNetObjectPathNameMappingHashToServer(uint32_t VersionHash);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content, bool IsUnreliable);
	void SendLuaClientToDS(int ID, TArray<unsigned char> Content, bool IsUnreliable);
	void RPC_Server_SyncClientNetInfo(int InLoss, int OutLoss, int InNetworkType);
	void RPC_Server_ReportClientNetInfo(int AvgPing, int MaxPing, int MinPing, int LostPackRate, int AvgNoOutlier, int StdNoOutlier, int NumNoOutlier, int InLoss, int OutLoss);
	void RPC_LuaDSToClient_NR(int ID, TArray<unsigned char> Content);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaClientToDS_NR(int ID, TArray<unsigned char> Content);
	void RPC_LuaClientToDS(int ID, TArray<unsigned char> Content);
	void Respawn();
	void ResetUsedSimulationCVar();
	void ReleaseInGameUI();
	void ReceivePostLoginInit();
	void PrintStatistics();
	void PlayerStartIDReceived();
	void OnRep_WeaponAvatarDataList();
	void OnRep_UsingOodleNetworkDicPath();
	void OnRep_UsingNetObjectPathNameMappingCSV();
	void OnRep_UsedSimulation();
	void OnRep_PveLevel();
	void OnRep_PlayerOBInfoList();
	void OnRep_PlayerKey();
	void OnRep_LobbyWatchInfo();
	void OnRep_LastGameResultTime();
	void OnRep_IsSpectatingEnemy();
	void OnRep_IsSpectating();
	void OnRep_IsObserver();
	void OnRep_InitialWeaponSchemeInfo();
	void OnRep_InitialEquipmentAvatar();
	void OnRep_InitialEffectItemInfo();
	void OnRep_InitialConsumableAvatar();
	void OnRep_FriendObservers();
	void OnRep_CurWeaponSchemeIndex();
	void OnRep_bRoomOwner();
	void OnPlayerKeyRepDelegate__DelegateSignature();
	void OnNetRPCIndexMappingTableAsyncLoad();
	void OnNetObjectPathNameMappingTableAsyncLoad();
	void OnMemberVoice(int Member, int status, const struct FString& UserInfo);
	void NotifyEnterBattle();
	void LuaDSToClient_Implementation(int ID, TArray<unsigned char> Content);
	void LuaClientToDS_Implementation(int ID, TArray<unsigned char> Content);
	void KickSelf();
	bool IsTeammateSpectator();
	bool IsSpectatorOrDemoPlayer();
	bool IsSpectator();
	bool IsRoomMode();
	bool IsPureSpectator();
	bool IsObserver();
	bool IsInSpectatingEnemy();
	bool IsInSpectating();
	bool IsInPetSpectator();
	bool IsHawkEyeSpectator();
	bool IsFriendOrEnemySpectator();
	bool IsFriendObserver();
	bool IsFriendNotHawkEyeObserver();
	bool IsExited();
	bool IsDemoRecSpectator();
	bool IsDemoPlaySpectator();
	bool IsDemoPlayGlobalObserver();
	bool IsDeathSpectator();
	void InitWithPlayerParams(const struct FGameModePlayerParams& Params);
	void InitWeaponAvatarItems();
	void InitVehicleMusicList();
	void InitVehicleAvatarSkinList();
	void InitVehicleAvatarList();
	void InitVehicleAdvanceAvatarList();
	void InitIngameUI();
	void InitGrenadeAvatarList(bool ReInitial);
	bool HasAnySpectatorReplayFlag(uint32_t InFlag);
	int GotoSpectating(int PlayerID);
	bool GetWeaponPandentReflect(int wraponID, int* pendantID);
	int GetWeaponAvatarItemId(int ID);
	void GetVisibleLevelsLoadedName(TArray<struct FString>* VisibleLevels);
	struct FString GetLobbyWatchedPlayerKeyAsString();
	struct FPlayerEffectItemInfo GetEffectItemBySlot(unsigned char SlotIndex);
	struct FDailyTaskStoreInfo GetDailyTaskStoreInfoByTaskId(int TaskID);
	int GetCurrentWeaponSchemeMainSlotItemId();
	struct FGameModePlayerPetInfo GetCurrentPetInfo();
	uint32_t GetCurrentOBPlayerKey();
	int GetCurrentOBPlayerInfoIndex();
	int GenerateKillBroadcastItemID(int ClothAvatarID, int PlayerUID);
	void ForceNetReady();
	void ExitGame();
	void ExhaustCPU();
	void ExecDSCommand(const struct FString& DSCommand);
	void ExcuteIntRecord(const struct FString& Key, int Count);
	void ExcuteIntCounterRecord(const struct FString& Key, int Count);
	void EnableInGameUI();
	void DumpUAENetActors();
	void DumpRegions();
	void DumpNetActors();
	void DumpCharacters();
	void DumpAllUI();
	void DumpAllObjects();
	void DumpAllActors();
	void DoCrash();
	void DisableInGameUI();
	void DelayEnterBattleCheck();
	void DealWithPickUpFailed(const struct FItemDefineID& DefineID);
	void ClientShowTeammateEscapeNotice();
	void ClientSendOodleNetworkAckToServer();
	void ClientRPC_CastUIMsgWithStrings(const struct FString& strMsg, const struct FString& module, int TipsID, const struct FString& Param1, const struct FString& Param2);
	void ClientRPC_CastUIMsgParams(const struct FString& strMsg, const struct FString& module, int Type);
	void ClientRPC_CastUIMsg(const struct FString& strMsg, const struct FString& module);
	void ClientRepListReq(class UObject* InObject);
	void ClientRepComponentsReq(class UObject* InObject);
	void ClientInitPlayerOBInfoButton();
	void ClientBroadcastRespawnComplete();
	void ClientBroadcastReconnectionSuccessful();
	void ClientAcknowledgeReconnection_4(uint32_t Token);
	void CheckPlayerOBInfoButtonInit();
	bool CheckAcknowledgedPawn(class APawn* InPawn);
	void CastUIMsg(const struct FString& strMsg, const struct FString& module);
	EPickUpCheckResult CanPickUpItem(const struct FItemDefineID& DefineID);
	void BroadcastUIMessage(const struct FString& MessageName, int TipsIDOrType, const struct FString& Param1, const struct FString& Param2);
	void BroadcastRespawnComplete();
};




class UActorGridGeneratorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ActorGridGeneratorInterface");
		return pStaticClass;
	}

};




class UAutoRotationComponent : public USceneComponent
{
public:
	float                                              PendulumAngle;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	class UCurveVector*                                CurveData;                                                
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AutoRotationComponent");
		return pStaticClass;
	}

};




class UCameraRecordSequenceHelper : public UObject
{
public:
	class ULevelSequence*                              Sequence;                                                 
	class UMovieScene3DTransformSection*               TransformSection;                                         
	class UMovieSceneFloatSection*                     FocalLengthSection;                                       
	class UMovieSceneFloatSection*                     FOVSection;                                               
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.CameraRecordSequenceHelper");
		return pStaticClass;
	}


	void WriteRotation(float Time, const struct FRotator& Rotation);
	void WriteLocation(float Time, const struct FVector& Location);
	void WriteFOV(float Time, float FOV);
	void WriteFocalLength(float Time, float FocalLength);
	void SetDuration(float Duration);
	void MarkSequenceChanged();
	void ForceTemplateRefresh();
	void FixSpawnTrack();
	void ExtendCameraCutToPlaybackRange();
	static void DumpSequenceStructure(const struct FString& SequencePath);
	static void DumpBlueprintSCS(const struct FString& BlueprintPath);
	static class UCameraRecordSequenceHelper* CreateCameraRecordSessionFromSequence(class ULevelSequence* Sequence);
	static class UCameraRecordSequenceHelper* CreateCameraRecordSession(const struct FString& SequencePath);
	void ClearFrames();
};




class UConfigInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ConfigInterface");
		return pStaticClass;
	}

};




class UDynamicSpotContainerComponent : public ULuaActorComponent
{
public:
	TArray<unsigned char>                              SerializeData;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.DynamicSpotContainerComponent");
		return pStaticClass;
	}


	void UseSerializeData();
};




class AFoliageFakeCollision : public AActor
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.FoliageFakeCollision");
		return pStaticClass;
	}

};




class UGameModeConfigComponent : public UActorComponent
{
public:
	int                                                appleGrenadeID;                                           
	int                                                appleGrenadeCount;                                        
	TArray<int>                                        forbitPickItemTypeList;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GameModeConfigComponent");
		return pStaticClass;
	}

};




class UPatchTableUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.PatchTableUtils");
		return pStaticClass;
	}

};




class UGameModeStatisticsComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GameModeStatisticsComponent");
		return pStaticClass;
	}

};




class UGameplayDelegates : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    GameModeStateChangeEvent;                                 
	struct FScriptMulticastDelegate                    ActorOverlapEvent;                                        
	struct FScriptMulticastDelegate                    ActorDieEvent;                                            
	struct FScriptMulticastDelegate                    PawnDieEvent;                                             
	struct FScriptMulticastDelegate                    CharacterDieEvent;                                        
	struct FScriptMulticastDelegate                    EnterAreaTriggerEvent;                                    
	struct FScriptMulticastDelegate                    ExitAreaTriggerEvent;                                     
	struct FScriptMulticastDelegate                    PawnPickupItemEvent;                                      
	struct FScriptMulticastDelegate                    VehicleOverlapEvent;                                      
	struct FScriptMulticastDelegate                    InteractiveActorBeginEvent;                               
	struct FScriptMulticastDelegate                    InteractiveActorDoneEvent;                                
	struct FScriptMulticastDelegate                    CharacterStartSkill;                                      
	struct FScriptMulticastDelegate                    CharacterStopSkill;                                       
	struct FScriptMulticastDelegate                    CharacterStartSkillPhase;                                 
	struct FScriptMulticastDelegate                    CharacterStopSkillPhase;                                  
	struct FScriptMulticastDelegate                    CharacterStartSkillCooldown;                              
	struct FScriptMulticastDelegate                    CharacterStopSkillCooldown;                               
	struct FScriptMulticastDelegate                    CharacterAddSkill;                                        
	struct FScriptMulticastDelegate                    CharacterRemoveSkill;                                     
	struct FScriptMulticastDelegate                    PlayerJoinEvent;                                          
	struct FScriptMulticastDelegate                    PlayerExitEvent;                                          
	struct FScriptMulticastDelegate                    PlayerRealExitEvent;                                      
	struct FScriptMulticastDelegate                    ProjectileStopEvent;                                      
	struct FScriptMulticastDelegate                    ProjectileBounceEvent;                                    
	struct FScriptMulticastDelegate                    DecoraterActorSpawnEvent;                                 
	struct FScriptMulticastDelegate                    RemoteEvent;                                              
	struct FScriptMulticastDelegate                    PlayerDamageQueryEvent;                                   
	struct FScriptMulticastDelegate                    PawnNearDeathEvent;                                       
	struct FScriptMulticastDelegate                    PawnNearDeathOrRescuedEvent;                              
	struct FScriptMulticastDelegate                    OnAIPawnSpawnEvent;                                       
	struct FScriptMulticastDelegate                    OnCharacterRespawnEvent;                                  
	struct FScriptMulticastDelegate                    ChooseEnemyLoseTargetEvent;                               
	struct FScriptMulticastDelegate                    FindEnemyWarningEvent;                                    
	struct FScriptMulticastDelegate                    ModFindEnemyWarningEvent;                                 
	struct FScriptMulticastDelegate                    TaskInterActiveActorBeginEvent;                           
	struct FScriptMulticastDelegate                    TaskInterActiveActorDoneEvent;                            
	struct FScriptMulticastDelegate                    LevelAddedEvent;                                          
	struct FScriptMulticastDelegate                    DSLuaGMEvent;                                             
	struct FScriptMulticastDelegate                    OnWeaponFireEvent;                                        
	struct FScriptMulticastDelegate                    PlayerPickUpItemEvent;                                    
	struct FScriptMulticastDelegate                    PlayerDropItemEvent;                                      
	struct FScriptMulticastDelegate                    PlayerUseItemEvent;                                       
	struct FScriptMulticastDelegate                    PlayerDisUseItemEvent;                                    
	struct FScriptMulticastDelegate                    PlayerSwapItemEvent;                                      
	struct FScriptMulticastDelegate                    PlayerEquipItemEvent;                                     
	struct FScriptMulticastDelegate                    PlayerUnEquipItemEvent;                                   
	struct FScriptMulticastDelegate                    PlayerConsumeEvent;                                       
	struct FScriptMulticastDelegate                    PawnChangeTeamEvent;                                      
	struct FScriptMulticastDelegate                    OnPlayReplayBegin;                                        
	struct FScriptMulticastDelegate                    OnPlayReplayEnd;                                          
	struct FScriptMulticastDelegate                    PlayerEventForReplay;                                     
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GameplayDelegates");
		return pStaticClass;
	}

};




class UGeneratorActorAIInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorActorAIInterface");
		return pStaticClass;
	}


	void RegisterAIPickupPoint(const struct FVector& BuildingLoc, const struct FVector& SpotLoc, class AActor* PickUpActor);
};




class UGeneratorActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorActorInterface");
		return pStaticClass;
	}


	void SetExtendData(const struct FString& Key, int Value);
	void SetAttachedActor(class AActor* AttachedActor);
	void InitDataNew(int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem, int SpotDataIndex);
	void InitData(class UItemSpotSceneComponent* ItemSpotSceneComponent, int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem);
	int GetItemId();
};




class UGeneratorVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorVehicleInterface");
		return pStaticClass;
	}


	void SetSafeSpawn(bool ab_IsSafeSpawn);
	void ServerDetachAllPlayerFromSeatByGenerator(bool bMustExit, bool bApplyVehicleVelocity);
	void InitVehicle(int FuelPercent, bool bEngineOn, bool bInHouse);
	void CheckSpawnLocation(const struct FVector& SpawnLocation, float MaxSpawnDistance);
};




class AGlobalConfigActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bInitComponents;                                          
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GlobalConfigActor");
		return pStaticClass;
	}


	void Init();
};




class UImplItemRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ImplItemRegionInterface");
		return pStaticClass;
	}


	struct FItemRegionCircle GetRegion(const struct FString& Tag);
};




class UItemBandSpotSceneComponent : public USpotSceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     SpotItemCategory;                                         
	struct FString                                     ConditionItemValue;                                       
	struct FString                                     ConditionItemCategory;                                    
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemBandSpotSceneComponent");
		return pStaticClass;
	}

};




class UItemConfigActorComponent : public UActorComponent
{
public:
	TArray<struct FItemSpawnData>                      ItemSpawnDatas;                                           
	TMap<int, struct FGroupTypeSceneComponents>        AllSpotGroups;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemConfigActorComponent");
		return pStaticClass;
	}


	void RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent);
	TArray<struct FItemSpawnClass> RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory);
	TArray<class USceneComponent*> RandomGroupSceneComponents(int GroupType, int Persent);
	class USceneComponent* RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups);
	class UClass* LoadActorClass(const struct FString& Path);
	TArray<struct FItemSpawnClass> GetItemSpawnClass(const struct FItemSpawnData& Data);
};




class AItemCountArea : public AActor
{
public:
	class UBoxComponent*                               Area;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemCountArea");
		return pStaticClass;
	}


	bool IsInArea(struct FVector* Position);
};




class UItemGenerateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGenerateInterface");
		return pStaticClass;
	}

};




class UItemGroupRepeatSpotComponent : public UGroupSpotSceneComponent
{
public:
	float                                              RepeatGenerateItemTimer;                                  
	int                                                GroupID;                                                  
	struct FString                                     GroupTag;                                                 
	TArray<class UItemSpotSceneComponent*>             Spots;                                                    
	TArray<class UItemSpotSceneComponent*>             PendingGenerateSpots;                                     
	class UItemGeneratorComponent*                     ItemGenerator;                                            
	struct FSpotGroupProperty                          SpotGroupProperty;                                        
	TMap<TEnumAsByte<ESpotType>, struct FSpotTypeProperty> SpotTypePropertys;                                        
	bool                                               bInitialize;                                              
	bool                                               bEnable;                                                  
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGroupRepeatSpotComponent");
		return pStaticClass;
	}


	void Stop();
	void SetPropertySpotAll();
	class AUAEGameMode* GetGameMode();
	void GenerateSpotAll();
	void ClearAllSpotItems();
};




class ULuaBTDecoratorBase : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x60];                                      
	class AAIController*                               ActorOwner;                                               
	TArray<struct FName>                               ObservedKeyNames;                                         
	unsigned char                                      UnknownData01[0x10];                                      
	unsigned char                                      bShowPropertyDetails : 1;                                 
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 
	unsigned char                                      bIsObservingBB : 1;                                       
	unsigned char                                      UnknownData02[0x7];                                       
	TMap<struct FString, struct FString>               LuaNodeParams;                                            
	TMap<struct FName, struct FBlackboardKeySelector>  LuaBlackboardParams;                                      
	float                                              TickInterval;                                             
	float                                              TickIntervalRandomDeviation;                              
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.LuaBTDecoratorBase");
		return pStaticClass;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};




class ULuaBTNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.LuaBTNodeInterface");
		return pStaticClass;
	}


	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& RotatorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	void ClearValue(const struct FName& KeyName);
};




class ULuaBTServiceBase : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x60];                                      
	class AAIController*                               ActorOwner;                                               
	unsigned char                                      UnknownData01[0x10];                                      
	unsigned char                                      bShowPropertyDetails : 1;                                 
	unsigned char                                      bShowEventDetails : 1;                                    
	unsigned char                                      UnknownData02[0x7];                                       
	TMap<struct FString, struct FString>               LuaNodeParams;                                            
	TMap<struct FName, struct FBlackboardKeySelector>  LuaBlackboardParams;                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.LuaBTServiceBase");
		return pStaticClass;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};




class ULuaBTTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x60];                                      
	class AAIController*                               ActorOwner;                                               
	unsigned char                                      UnknownData01[0x18];                                      
	unsigned char                                      bShowPropertyDetails : 1;                                 
	unsigned char                                      UnknownData02[0x7];                                       
	TMap<struct FString, struct FString>               LuaNodeParams;                                            
	TMap<struct FName, struct FBlackboardKeySelector>  LuaBlackboardParams;                                      
	float                                              TickInterval;                                             
	float                                              TickIntervalRandomDeviation;                              
	unsigned char                                      UnknownData03[0x8];                                       
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.LuaBTTaskBase");
		return pStaticClass;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};




class UMissionBoardComponent : public UActorComponent
{
public:
	struct FMissionBoardConfig                         Config;                                                   
	struct FScriptMulticastDelegate                    OnRepConfigDelegate;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.MissionBoardComponent");
		return pStaticClass;
	}


	void OnRep_Config();
	int GetUtcLeftSecondsByConfig();
};




class UNetworkExceptionHandleSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.NetworkExceptionHandleSubsystem");
		return pStaticClass;
	}

};




class ANetworkReportActor : public AActor
{
public:
	int                                                MaxCacheLossRateArrayNum;                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     InPacketLossRateArrayStr;                                 
	struct FString                                     OutPacketLossRateArrayStr;                                
	unsigned char                                      UnknownData01[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.NetworkReportActor");
		return pStaticClass;
	}


	void RPC_Server_SyncClientPkgLossArrayInfo(TArray<unsigned char> InLoss, TArray<unsigned char> OutLoss);
	void ResetAllNetworkData();
};




class UNewWeatherComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.NewWeatherComponent");
		return pStaticClass;
	}


	void LuaInit();
};




class AUAEAdvertisementActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	bool                                               bMultiAdvertisement;                                      
	unsigned char                                      UnknownData01[0x7];                                       
	TMap<unsigned char, class UTexture2D*>             IdTextureMap;                                             
	class UStaticMesh*                                 StaticMesh;                                               
	struct FString                                     StaticMeshPath;                                           
	class UFrontendHUD*                                FrontendHUD;                                              
	int                                                ID;                                                       
	float                                              NetCullDistance;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEAdvertisementActor");
		return pStaticClass;
	}


	void SetStaticMeshPath(const struct FString& InMeshPath);
	void SetStaticMesh(class UStaticMesh* InStaticMesh);
	void SetScale(const struct FVector& InScale);
	void SetId(int InputID);
	void SetCulDistance(float CulDistance);
	void RequestHttpImageByUrl(const struct FString& PicUrl);
	void ReplaceTexture(class UTexture2D* Texture);
	void OnRequestImgSuccess(class UTexture2D* Texture, const struct FString& RequestedURL);
	void OnRep_MeshPath();
	void OnRep_Id();
	void OnClientLoadMesh();
	void InitImageDownloadUtil();
};




class ARegionableAdvertisementActor : public AUAEAdvertisementActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	ERegionSizeIndex                                   RegionSize;                                               
	bool                                               bRegionStatic;                                            
	unsigned char                                      UnknownData01[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.RegionableAdvertisementActor");
		return pStaticClass;
	}


	void ReceivedPlayerActiveRegionsChanged(bool bEnter);
};




class USpotGeneratorStruct : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.SpotGeneratorStruct");
		return pStaticClass;
	}

};




class UTriggerActionSpawnItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.TriggerActionSpawnItemInterface");
		return pStaticClass;
	}

};




class AUAEActorMap : public AInfo
{
public:
	TMap<struct FVector, class AActor*>                ActorsMap;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEActorMap");
		return pStaticClass;
	}

};




class AUAEBuffApplierActor : public AActor
{
public:
	class AController*                                 InstigatorController;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEBuffApplierActor");
		return pStaticClass;
	}


	class AController* GetTheInstigatorController();
};




class UAnimInstanceCacheCustomAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AnimInstanceCacheCustomAnimInterface");
		return pStaticClass;
	}

};




class UUAECharAnimListCompBase : public UUAEAnimListComponentBase
{
public:
	TArray<struct FCharacterAsynLoadedTypeAnim>        CharacterAsynLoadedAnims;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharAnimListCompBase");
		return pStaticClass;
	}

};




class UUAEChaCustomAnimListComponent : public UUAECharAnimListCompBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bLoadAnimOnBeginPlay;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                CharacterAnimOverrideType;                                
	TMap<struct FString, struct FName>                 CharAnimEnumName;                                         
	TArray<struct FCharCustomAnimData>                 CharCustomAnimDataList;                                   
	TMap<struct FString, struct FName>                 CharFeatureAnimInstanceEnumName;                          
	TArray<struct FCharCustomAnimInstacneData>         CharCustomAnimInstanceDataList;                           
	unsigned char                                      UnknownData02[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEChaCustomAnimListComponent");
		return pStaticClass;
	}


	void SetCharacterAnimOverrideType(int AnimOverrideType);
	void ReleaseCustomAnimAssets();
	bool HasAnimAsyncLoadingFinished();
	struct FString GetOwnerName();
	class UClass* GetCharacterCustomAnimInstance(const struct FString& AnimName);
	class UAnimationAsset* GetCharacterCustomAnim(const struct FString& AnimName);
	class UBlendSpace1D* GetBlendSpace1D(const struct FString& AnimAssetName);
	class UBlendSpace* GetBlendSpace(const struct FString& AnimAssetName);
	class UAnimSequence* GetAnimSequence(const struct FString& AnimAssetName);
	class UAnimMontage* GetAnimMontage(const struct FString& AnimAssetName);
	class UAimOffsetBlendSpace* GetAimOffsetBlendSpace(const struct FString& AnimAssetName);
	void CallRequestLoadAnimAssets();
};




class UAnimInstanceCacheParachuteAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AnimInstanceCacheParachuteAnimInterface");
		return pStaticClass;
	}

};




class UUAEChaParachuteAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharParachuteAnimData>              CharParachuteAnimDataList;                                
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEChaParachuteAnimListComponent");
		return pStaticClass;
	}


	void ReleaseParachuteAnimAssets();
	void OnParachuteAnimAsyncLoadingFinished(const struct FString& AnimLoaded);
	void OnAnimListAsyncLoadingFinished();
	bool HasAnimAsyncLoadingFinished();
	void HandleAsyncLoadingFinishedEvent();
	struct FString GetOwnerName();
	class UAnimationAsset* GetCharacterParachuteAnim(TEnumAsByte<ECharacterParachuteAnimType> AnimType, int AnimOverrideType);
};




class UUAECharacterAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharacterMovementAnimData>          CharacterMovementAnimEditList;                            
	TArray<struct FCharacterMovementAnimData>          CharacterFPPAnimEditList;                                 
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditList;                                    
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditListFPP;                                 
	class UCurveFloat*                                 FallingIKCurve;                                           
	TArray<struct FCharacterShovelAnimData>            CharacterShovelEditList;                                  
	TArray<struct FCharacterShovelAnimData>            CharacterShovelEditListFPP;                               
	TArray<struct FCharAnimModifyData>                 CharAnimModifyList;                                       
	TArray<struct FCharacterVehAnimModifyData>         CharVehAnimModifyList;                                    
	bool                                               IsInitByBeginPlay;                                        
	bool                                               EnablePreLoadingFinish;                                   
	bool                                               CurrentIsTPP;                                             
	bool                                               CurrentHoldShield;                                        
	bool                                               bRandomIdleAnimSections;                                  
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<struct FName>                               RandomAnimMontageSections;                                
	unsigned char                                      UnknownData01[0x8];                                       
	struct FGetAnimUtil                                GetAnimUtil;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharacterAnimListComponent");
		return pStaticClass;
	}


	void SetAnimListMapValueData(struct FAnimListMapValueData* AnimListValue);
	bool OnPreLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam);
	void OnAsyncLoadingFinishedNew2(const struct FAsyncLoadCharAnimParams& LoadingParam);
	void OnAsyncLoadingFinishedNew(const struct FAsyncLoadCharAnimParams& LoadingParam);
	void InitAnimListMap(bool IsFPP);
	TArray<struct FPlayerAnimData> GetCharacterShovelAnim();
	TArray<struct FPlayerAnimData> GetCharacterJumpAnim(TEnumAsByte<ECharacterJumpType> JumpType);
	class UAnimationAsset* GetAnimationAsset();
};




class UUAECharacterAnimListSubSystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharacterAnimListSubSystem");
		return pStaticClass;
	}

};




class UUAEChaVehAnimListComponent : public UUAECharAnimListCompBase
{
public:
	bool                                               DefaultLoadAllAnim;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FVehCharAnimData>                    VehCharAnimDataList;                                      
	unsigned char                                      UnknownData01[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEChaVehAnimListComponent");
		return pStaticClass;
	}


	void SetVehCharAnimDataList(TArray<struct FVehCharAnimData> InVehCharAnimDataList);
	void OnIdleAnimListAsyncLoadingFinished();
	void OnAnimListAsyncLoadingFinished(const struct FAsyncLoadCharVehAnimParams& LoadingParam);
	void ChangeAnimData(TArray<struct FVehCharAnimData> InAnimData);
};




class AUAEIndependentSpot : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEIndependentSpot");
		return pStaticClass;
	}

};




class AUAELevelSequenceActor : public ALevelSequenceActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	bool                                               bPlayOnServer;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                MinClientTCDeviceLevel;                                   
	float                                              ClientSyncTime;                                           
	bool                                               bUseSelfTransformOrigin;                                  
	bool                                               bAutoDestroy;                                             
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              DestroySelfDelayTime;                                     
	bool                                               bInitPlayerBeforeBeginPlay;                               
	ESequenceRelevantType                              RelevantType;                                             
	bool                                               bCameraOnlyOwnerUse;                                      
	TEnumAsByte<ELevelSequenceStartPlayType>           LevelSequenceStartPlayType;                               
	TArray<struct FMovieSceneBindingOverrideData>      NetSyncBindingData;                                       
	float                                              AuthorityStartPlayTime;                                   
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     LevelSequenceAssetPath;                                   
	TMap<struct FString, struct FString>               GreenSequenceMap;                                         
	unsigned char                                      UnknownData04[0x8];                                       
	TArray<struct FSeqActorBindingData>                TrackBindingData;                                         
	TArray<struct FString>                             DisabledTrackNames;                                       
	unsigned char                                      UnknownData05[0x50];                                      
	struct FString                                     LuaFilePath;                                              
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	unsigned char                                      UnknownData06[0x30];                                      
	bool                                               bIsCheckOwnerPassWall;                                    
	unsigned char                                      UnknownData07[0x7];                                       
	TArray<class AActor*>                              OwnerPassWallIgnoreActors;                                
	TArray<TEnumAsByte<ECollisionChannel>>             PasswallIgnoreChannels;                                   
	struct FVector                                     OwnerStartLoc;                                            
	struct FVector                                     LastValidLoc;                                             
	unsigned char                                      UnknownData08[0x1];                                       
	bool                                               bIsCheckOwnerSnapToFloor;                                 
	unsigned char                                      UnknownData09[0x2];                                       
	float                                              OwnerSnapToFloorMaxDist;                                  
	unsigned char                                      UnknownData10[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAELevelSequenceActor");
		return pStaticClass;
	}


	void UpdateTrackBindingData();
	void UpdateSequence(const struct FString& LevelSequencePath);
	void UpdatePlayback(bool bRestoreState, bool bDisableMovementInput, bool bDisableLookAtInput, bool bHidePlayer);
	void UpdateInstanceData(const struct FVector& OffsetVector, const struct FRotator& OffsetRotation);
	void StopMontageParticle(const struct FName& SlotName);
	void Stop();
	void SetUseSelfTransformOrigin(bool bInUse);
	void SetTrackBindingInfo(TMap<struct FString, struct FString> TrackBindingInfo);
	void SetTrackBindingData(TArray<struct FSeqActorBindingData> InTrackBindingData);
	void SetNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void SetLevelSequenceAssetPath(const struct FString& InLevelSequenceAssetPath);
	void SetDisabledTrackNames(TArray<struct FString> InDisabledTrackNames);
	void ResetNetSyncBindings();
	void ResetNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void ReleaseCameraCutTrack();
	void ReceiveOnStop();
	void ReceiveOnPreStop();
	void ReceiveOnPlayReverse();
	void ReceiveOnPlay();
	void ReceiveOnPause();
	void ReceiveOnObjectSpawned(class UObject* InObject, const struct FGuid& InBindingID);
	void ReceiveOnFinished();
	void Play(float InPlaytime);
	void OnSequencePreStop();
	void OnSequenceFinished();
	void OnRep_NetSyncBindingData();
	void OnRep_LevelSequenceAssetPath();
	void OnRep_DisabledTrackNames();
	void OnRep_bUseSelfTransformOrigin();
	void OnRep_AuthorityStartPlayTime();
	void OnObjectSpawnedEvent(class UObject* InObject, const struct FGuid& InBindingID, const struct FMovieSceneSequenceID& InSequenceID);
	static bool HasActiveSequenceActor();
	void HandleOwnerReady();
	void GoToEndAndStop();
	struct FMovieSceneObjectBindingID GetPossessableOrSpawnableByName(const struct FString& NameKeyString);
	struct FMovieSceneObjectBindingID GetFirstPossessableTrack();
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class AUAELevelSequenceActor** OutActor);
	bool CheckStartPlayValid();
	void AddNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};




class UUAELevelSequencePlayer : public ULevelSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAELevelSequencePlayer");
		return pStaticClass;
	}


	void EnablePrimitiveComponentTracking();
	void DisablePrimitiveComponentTracking();
};




class UAELobbyCharAnimListComp : public UUAECharAnimListCompBase
{
public:
	TArray<struct FLobbyCharacterWeaponAnimData>       CharacterWeaponAnimEditList;                              
	TArray<struct FLobbyCharacterWeaponAnimData>       AvatarSceneCharacterWeaponAnimEditList;                   
	TArray<struct FLobbyCharacterWeaponAnimData>       LobbyWithCarCharacterWeaponAnimEditList;                  
	TArray<struct FLobbyCharacterWeaponAnimData>       LobbySystemCharacterWeaponAnimEditList;                   
	class UAnimationAsset*                             SwitchPoseAnimAdd;                                        
	int                                                resultAvatarPoseIndex;                                    
	unsigned char                                      UnknownData00[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AELobbyCharAnimListComp");
		return pStaticClass;
	}


	void OnAsyncLoadingFinished(const struct FLobbyAsyncLoadCharAnimParams& LoadingParam);
	void InitPendingList(TArray<struct FLobbyCharacterWeaponAnimData>* animEditList, TArray<struct FSoftObjectPath>* PendingList);
	class UAnimationAsset* GetCharacterAnim(TEnumAsByte<ELobbyCharacterPosIndex> PosIdx, TEnumAsByte<ELobbyCharacterAnimType> GenderType, int WeaponAnimType, TEnumAsByte<ECharacterShowSceneType> sceneType);
	void BuildAnimMap(TEnumAsByte<ECharacterShowSceneType> sceneType, TArray<struct FLobbyCharacterWeaponAnimData>* AnimList);
};




class UUAEMovieSceneSequenceControlSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEMovieSceneSequenceControlSection");
		return pStaticClass;
	}

};




class UUAEMovieSceneSequenceControlTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEMovieSceneSequenceControlTrack");
		return pStaticClass;
	}

};




class AUAESimpleSceneActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAESimpleSceneActor");
		return pStaticClass;
	}

};




class UUAESpawnActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAESpawnActorComponent");
		return pStaticClass;
	}


	class AActor* UAESpawnActor(const struct FUAESpawnActorParam& Param);
	class UClass* PrepareSpawnData(int TemplateID);
	void InitializeActor(class AActor* InActor, int TemplateID);
};




class UUAESpotGroupObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	class UObject*                                     Host;                                                     
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAESpotGroupObject");
		return pStaticClass;
	}

};




class UUAEWindowComponent : public UStaticMeshComponent
{
public:
	class APawn*                                       LastInstigatorPawn;                                       
	class UStaticMesh*                                 BrokenMesh;                                               
	class UParticleSystem*                             BrokenEffect;                                             
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEWindowComponent");
		return pStaticClass;
	}


	void NotifyServerBroken(class APlayerController* Instigator);
	void NotifyRepDataUpdated(bool bInitial, bool bLocal);
	void LocalHandleWindowBrokenBP(bool bInitial, bool bLocal);
	void LocalHandleWindowBroken(bool bInitial, bool bLocal);
	void HandleBroken(class APlayerController* Instigator, bool bLocal);
	struct FUAEWindowRepData GetRepData();
};




class UVehicleConfigActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleConfigActorComponent");
		return pStaticClass;
	}


	class UClass* LoadActorClass(const struct FString& Path);
};




class UVehicleAndTreasureBoxGeneratorComponent : public UBaseGeneratorComponent
{
public:
	bool                                               bUseLocalSpotFile;                                        
	bool                                               bCanBackupVehicleSpotDatas;                               
	unsigned char                                      UnknownData00[0x6];                                       
	TArray<class UVehicleSpotSceneComponent*>          VehicleSpotSceneComponentList;                            
	TEnumAsByte<ERegionType>                           RegionType;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<struct FBackupVehicleSpotData>              BackupVehicleSpotDatas;                                   
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     
	TArray<struct FTreasureBoxSpotProperty>            TreasureBoxSpotPropertys;                                 
	bool                                               bStatisticsValid;                                         
	bool                                               bIsRandom;                                                
	unsigned char                                      UnknownData02[0x6];                                       
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllTreasureBoxSpots;                                      
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    
	class UUAEDataTable*                               VehicleDataTable;                                         
	TArray<struct FBackupVehicleSpotData>              AllDynamicVehicleSpot;                                    
	bool                                               bRemovableMode;                                           
	unsigned char                                      UnknownData03[0x7];                                       
	unsigned char                                      UnknownData04[0x50];                                      
	TArray<TWeakObjectPtr<class AActor>>               GeneratedActorArray;                                      
	unsigned char                                      UnknownData05[0x18];                                      
	struct FScriptMulticastDelegate                    OnVehicleGeneratedDelegate;                               
	struct FScriptMulticastDelegate                    OnVehicleGenerateEndDelegate;                             
	struct FScriptDelegate                             CanGenerateVehicleDelegate;                               
	unsigned char                                      UnknownData06[0x50];                                      
	bool                                               bEnableLevelIndex;                                        
	unsigned char                                      UnknownData07[0x57];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleAndTreasureBoxGeneratorComponent");
		return pStaticClass;
	}


	void WriteVehicleSpotStatisticsFromSpotFile();
	void WriteVehicleSpotStatisticsDatas_V15();
	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas_V15();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatasToLog();
	void WriteAllVehicleStatisticsDatas_V15();
	void WriteAllVehicleStatisticsDatas();
	void SetAllVehicleNumRate(TMap<struct FString, float> Rates);
	void ResumeGenerate();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterSpotFromSingleFile(const struct FString& SpotFilePath);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomTreasureBoxSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FTreasureBoxSpotProperty* Property);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void PauseGenerate();
	void LoadVehicleGenerateTable();
	bool GMGenerateAllVehicleSpot(const struct FString& VehiclePath);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoWithCategory(const struct FString& Category, struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType, const struct FString& InCategory);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(const struct FVehicleSpotProperty& SpotProperty, const struct FString& InCategory);
	struct FVehicleGenerateRandomInfo GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty* SpotProperty);
	struct FString GetTraceLevelName(const struct FString& SpotFileName, int16_t LevelIndex);
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	int GetAlreadyGeneratedVehicleNum();
	void GenerateSpotOnTick(float DeltaTime);
	void EndGenerate();
	void EnableRemovableMode();
	bool DynamicSpawnVehicleBySpotId(int ID, const struct FString& Category);
	void DeleteGroups();
	bool CanDynamicSpawnVehicle(const struct FVector& SpawnLocation, const struct FVector& TestLocationOffset, const struct FVector& TestBoxSize);
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
	void AddIgnoreClassPath(TArray<struct FString> IgnoreItemClassList);
};




class UVehicleGeneratorComponent : public UBaseGeneratorComponent
{
public:
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     
	bool                                               bStatisticsValid;                                         
	bool                                               bIsRandom;                                                
	unsigned char                                      UnknownData00[0x6];                                       
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleGeneratorComponent");
		return pStaticClass;
	}


	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatas();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void LoadVehicleGenerateTable();
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GenerateSpotOnTick(float DeltaTime);
	void DeleteGroups();
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
};




class UVehicleGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleGroupSpotSceneComponent");
		return pStaticClass;
	}

};




class UVehicleSpotObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      
	struct FVehicleGenerateRandomInfo                  SpotRandomInfo;                                           
	class UVehicleAndTreasureBoxGeneratorComponent*    VehicleGenerator;                                         
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleSpotObject");
		return pStaticClass;
	}


	void OnVehicleGenerateEnd();
	void OnTraceLevelShown();
};




class UVehicleSpotSceneComponent : public USpotSceneComponent
{
public:
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            
	TEnumAsByte<ERegionType>                           RegionType;                                               
	bool                                               bHasGenerateSpot;                                         
	bool                                               bRandomRotation;                                          
	float                                              RandomRotationMin;                                        
	float                                              RandomRotationMax;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVehicleGenerateRandomInfo                  SpotRandomInfo;                                           
	bool                                               IsEnableVehicleSpawnRestore;                              
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              VehicleSpawnRestoreOffset;                                
	unsigned char                                      UnknownData02[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleSpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotRandomInfo(struct FVehicleGenerateRandomInfo* RandomInfo);
	bool GenerateSpot();
};




class UWeatherConfigComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.WeatherConfigComponent");
		return pStaticClass;
	}

};


}

