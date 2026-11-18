#pragma once


 
namespace SDK
{






class USpawnSystemSettings : public UDeveloperSettings
{
public:
	float                                              TickFrequency;                                            
	float                                              SpawnUnitInterval;                                        
	int                                                TickingSpawnerThreshold;                                  
	bool                                               bShouldSpawnSystemLogout;                                 
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                MaxWaitSpawnQueSize;                                      
	float                                              VisualDebugRange;                                         
	struct FVector2D                                   VisualDebugSpotCapsule;                                   
	float                                              SpotDrawThickness;                                        
	float                                              SpotDrawFlag;                                             
	int                                                SpawnerVisualDebugLevel;                                  
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.SpawnSystemSettings");
		return pStaticClass;
	}


	static class USpawnSystemSettings* Get();
};




class ASTSpawnerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      
	struct FString                                     LuaFilePath;                                              
	class USTStrategyTiming*                           SpawnTiming;                                              
	class USTStrategyLocation*                         SpawnLocation;                                            
	class USTStrategySpecies*                          SpawnSpecies;                                             
	TArray<class USTStrategyCond*>                     SpawnConditions;                                          
	unsigned char                                      bUseRegion : 1;                                           
	unsigned char                                      bDebugDraw : 1;                                           
	unsigned char                                      bUsable : 1;                                              
	unsigned char                                      bIsMLAI : 1;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                AILevel;                                                  
	int                                                SpawnerCampID;                                            
	ESTSpawnerVolume                                   VolumeType;                                               
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              SphereRadius;                                             
	struct FVector                                     BoxHalfExtent;                                            
	class UClass*                                      SpawnSpotClass;                                           
	struct FScriptMulticastDelegate                    OnSpawnUnitSuccessDelegate;                               
	struct FScriptMulticastDelegate                    OnSpawnedUnitDeadDelegate;                                
	struct FScriptMulticastDelegate                    OnSpawnedUnitReplacedDelegate;                            
	uint32_t                                           SpawnerID;                                                
	int                                                MaxUnitsCount;                                            
	int                                                MaxAliveCount;                                            
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     SpawnerDescString;                                        
	unsigned char                                      bUseAsTrigger : 1;                                        
	unsigned char                                      bForceSpawn : 1;                                          
	unsigned char                                      bRecycle;                                                 
	unsigned char                                      UnknownData04[0x6];                                       
	struct FString                                     SpawnerSnapshot;                                          
	TArray<class ASTSpawnSpot*>                        SpawnSpots;                                               
	TArray<class AActor*>                              AlivePawns;                                               
	TArray<class AActor*>                              RefundedPendingPawns;                                     
	unsigned char                                      bActive : 1;                                              
	unsigned char                                      bInitialized : 1;                                         
	unsigned char                                      bTimeIsRipe : 1;                                          
	unsigned char                                      UnknownData05[0x3];                                       
	int                                                TotalSpawnedUnits;                                        
	class USTSpawnSubsystem*                           SpawnSubsystem;                                           
	unsigned char                                      UnknownData06[0x10];                                      
	int                                                WaitSpawn;                                                
	unsigned char                                      bPlayerEnterRegion : 1;                                   
	unsigned char                                      UnknownData07[0x63];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnerBase");
		return pStaticClass;
	}


	void Thinking(float DeltaTime);
	void Switch(bool IsSwitchOn);
	void StopSpawn();
	void SetSpawnerID(uint32_t ID);
	bool ReplaceSpawnedUnit(class AActor* OldUnit, class AActor* NewUnit);
	bool RefundSpawnedUnit(class AActor* Unit);
	void ReclaimWaitSpawn(int Count);
	void OnUnitSpawned(class AActor* NewUnit, const struct FSTSpawnParam& SpawnParam, class ASTSpawnerBase* Spawner);
	void OnUnitDead(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnSpawnTimingRipe(bool IsRipe);
	void OnSpawnerDeactivate();
	void OnSpawnerActivate();
	void OnRep_SpawnerID();
	void Multicast_SpawnerSnapshot(const struct FString& Timing, const struct FString& Species, const struct FString& Location, const struct FString& Conditions, const struct FString& Extra, bool IsActive, bool IsUsable);
	void Multicast_AlivePawnsChange(class APawn* Unit, bool IsBorn, bool IsAllDead);
	void ModifyMaxAlive(int NewAlive);
	bool IsUsable();
	bool IsUnitRefunded(class AActor* Unit);
	bool IsPlayerEnterRegion();
	bool IsInitialized();
	bool IsActive();
	void InitSpawner();
	int GetTotalSpawnedNum();
	class USTSpawnSubsystem* GetSpawnSystem();
	TArray<class ASTSpawnSpot*> GetSpawnSpots();
	float GetSpawnRadius();
	struct FVector GetSpawnLocation();
	struct FVector GetSpawnExtent();
	struct FString GetSpawnerSnapshot();
	uint32_t GetSpawnerID();
	struct FString GetSpawnerDesc();
	int GetReferencedCount();
	int GetMaxUnits();
	int GetMaxAlive();
	bool GetIsForceSpawn();
	TArray<class AActor*> GetAliveUnits();
	class ASTSpawnSpot* FindSpot(const struct FString& SpotID);
	void DeactivateSpawner();
	bool CheckTriggerGuest(class AActor* Guest);
	bool CheckOwnedUnit(class AActor* InUnit);
	void AnalyseConfigData();
	void ActivateSpawner();
};




class ASTSpawnSpot : public AActor
{
public:
	TArray<struct FUnitInitConfig>                     SpotInitConfig;                                           
	int                                                AliveThresholdCfg;                                        
	int                                                NumberThresholdCfg;                                       
	struct FString                                     SpotID;                                                   
	int                                                SpotWeigh;                                                
	ESpawnSpotType                                     SpotType;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                SquadIndex;                                               
	int                                                UnitIndex;                                                
	struct FVector2D                                   CapsuleSize;                                              
	float                                              MultiPosRangeMin;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	class ASTSpawnerBase*                              OwnerSpawner;                                             
	unsigned char                                      UnknownData02[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSpot");
		return pStaticClass;
	}


	void OnUnitSpawnedSuc(uint32_t InSpawnerID, class APawn* AIPawn, const struct FSTSpawnParam& SpawnParam);
	void OnUnitDead(uint32_t InSpawnerID, class APawn* AIPawn);
	bool IsSpotValid();
	bool HasModifySpecies();
	int GetSpotWeigh();
	int GetSpotUnitIndex();
	ESpawnSpotType GetSpotType();
	int GetSpotSquadIndex();
	struct FString GetSpotID();
	int GetNumberThresholdCfg();
	TArray<struct FVector> GetMultiPositions(int ReqCount, int MaxCount, int TryTimes);
	int GetCacheSpawnedCount();
	int GetCacheAliveCount();
	int GetAliveThresholdCfg();
};




class USTSpawnSubsystem : public UBattleSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FScriptMulticastDelegate                    OnSpawnSysUnitSpawnedSuc;                                 
	struct FScriptMulticastDelegate                    OnSpawnSysAfterUnitInit;                                  
	TMap<uint32_t, class ASTSpawnerBase*>              SpawnersMap;                                              
	unsigned char                                      UnknownData01[0x88];                                      
	float                                              TickFrequency;                                            
	int                                                ThinkTimesPerFrame;                                       
	float                                              ReadySpawnFrequency;                                      
	int                                                MaxWaitSpawnQueSize;                                      
	bool                                               bWaitSpawnInOrder;                                        
	unsigned char                                      UnknownData02[0x57];                                      
	int                                                RecAliveUnits;                                            
	unsigned char                                      UnknownData03[0x4];                                       
	int                                                WaitSpawnInOrderIndex;                                    
	unsigned char                                      UnknownData04[0x2C];                                      
	TArray<class AActor*>                              CachedTriggerIgnoreActors;                                
	unsigned char                                      UnknownData05[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSubsystem");
		return pStaticClass;
	}


	void UnregisterSpawner(class ASTSpawnerBase* Spawner);
	class ASTSpawnerBase* UnitFindSpawner(int UnitUID);
	void StopSpawner(uint32_t SpawnerID);
	class AActor* SpawnUnit(const struct FSTSpawnParam& SpawnParam);
	void RegisterSpawner(class ASTSpawnerBase* Spawner);
	void RecordProgress();
	void ReadySpawn(float DeltaTime);
	bool PreCheck();
	void OrderSpawnerThinking(float DeltaTime);
	void ModifyConfiguration(float TickFreq, int ThinkTimes);
	void InitUnit(class APawn* AIPawn, TArray<struct FUnitInitConfig> Configs);
	int GetUnitConfigID(class AActor* Unit);
	TArray<class AActor*> GetAllUnits();
	class ASTSpawnerBase* FindSpawner(uint32_t SpawnerID);
	void EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam);
	void CleanQueue();
	bool CheckCategoryLimit(class ASTSpawnerBase* Spawner, int* AvailableBalance);
};




class USTSpawnSystemGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnSystemGameplayStatics");
		return pStaticClass;
	}


	static class ASTSpawnerBase* UnitFindSpawnerByUObject(class UObject* Object);
	static class ASTSpawnerBase* UnitFindSpawner(class UObject* WorldContextObject, int UnitUID);
	static struct FVector ProjectPointToFloorWithComplexCollisionCheck(class UObject* WorldContextObject, const struct FVector& Origin, bool bCheckComplex, float OffsetHeight, bool* bOutHit, struct FHitResult* HitResult);
	static bool IsEditor();
	static TArray<struct FVector> FindNearbyGroundLoc(class UObject* WorldContextObject, int OutCount, const struct FVector& InCenterLoc, float RangeMin, float RangeMax, float TraceHeight, int TryTimes);
};




class USTSpawnVisualDebug : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpawnVisualDebug");
		return pStaticClass;
	}


	static class USTSpawnVisualDebug* Get();
};




class USTSpeciesDataAsset : public UDataAsset
{
public:
	TArray<struct FUnitConfig>                         UnitConfig;                                               
	TArray<struct FSquadConfig>                        SquadConfig;                                              
	TArray<struct FGroupConfig>                        GroupConfig;                                              
	TArray<struct FSpeciesRatioStruct>                 RatioConfig;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STSpeciesDataAsset");
		return pStaticClass;
	}

};




class USTStrategyBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      bShouldCD : 1;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ConfigCDDuration;                                         
	class ASTSpawnerBase*                              OwnerSpawner;                                             
	unsigned char                                      bSTActive : 1;                                            
	unsigned char                                      bTickEnable : 1;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              CDCounter;                                                
	struct FString                                     OwnerName;                                                
	struct FString                                     StrategyName;                                             
	struct FString                                     StrategySnapshot;                                         
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyBase");
		return pStaticClass;
	}


	void UpdateSnapshot(const struct FString& New);
	void TickStrategy(float DeltaTime);
	void ResumeStrategy(class ASTSpawnerBase* Owner);
	void ResetCD();
	void OnStrategyDeactivate();
	void OnStrategyActivate();
	bool IsSTActive();
	bool IsOnCD();
	bool GetTickEnable();
	struct FString GetStrategyDesc();
	struct FString GetSnapshot();
	class ASTSpawnerBase* GetOwnerSpawner();
	void DeactivateStrategy();
	float CDRemaining();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategyCond : public USTStrategyBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond");
		return pStaticClass;
	}


	bool LuaCheckCondition();
	bool CheckCondition();
};




class USTStrategyCond_Hide : public USTStrategyCond
{
public:
	float                                              Radius;                                                   
	float                                              Height;                                                   
	struct FVector                                     CharacterFOV;                                             
	unsigned char                                      bUseLineTrace : 1;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	class UClass*                                      ClassFilter;                                              
	unsigned char                                      bUseSpawnerLoc : 1;                                       
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond_Hide");
		return pStaticClass;
	}


	bool CheckCondition();
};




class USTStrategyCond_Quantity : public USTStrategyCond
{
public:
	int                                                ThresholdQuantity;                                        
	int                                                AliveNumberLimit;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyCond_Quantity");
		return pStaticClass;
	}


	bool CheckCondition();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategyLocation : public USTStrategyBase
{
public:
	struct FScriptDelegate                             OnGenerateSpawnLocationDelegate;                          
	TArray<struct FSpawnSpotInfo>                      CacheSpotInfosArray;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation");
		return pStaticClass;
	}


	void ResumeStrategy(class ASTSpawnerBase* Owner);
	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};




class USTStrategyLocation_Root : public USTStrategyLocation
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation_Root");
		return pStaticClass;
	}


	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};




class USTStrategyLocation_Spots : public USTStrategyLocation
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyLocation_Spots");
		return pStaticClass;
	}


	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
};




class USTStrategySpecies : public USTStrategyBase
{
public:
	class USTSpeciesDataAsset*                         SpeciesData;                                              
	struct FScriptDelegate                             SupplySpawnSpeciesDelegate;                               
	TArray<struct FUnitConfig>                         CacheSpeciesArray;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ResumeStrategy(class ASTSpawnerBase* Owner);
	TArray<int> GeAllCacheConfigIDs();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategySpecies_SquadRatio : public USTStrategySpecies
{
public:
	int                                                RatioIndex;                                               
	unsigned char                                      UnknownData00[0x54];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies_SquadRatio");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ReadSquadRatios(int ReferencedCount, TArray<struct FUnitRatio> RatioConfig);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategySpecies_Static : public USTStrategySpecies
{
public:
	EReadSpeciesData                                   HowDataRead;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                GroupIndex;                                               
	int                                                SquadIndex;                                               
	int                                                UnitIndex;                                                
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategySpecies_Static");
		return pStaticClass;
	}


	void WeightedReadUnit(int ReferencedCount, TArray<struct FUnitConfig> Units);
	void WeightedReadSquad(int ReferencedCount, const struct FSquadConfig& SquadConfig, TArray<struct FUnitConfig> Units);
	void WeightedReadGroup(int ReferencedCount, const struct FGroupConfig& GroupConfig, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units);
	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ReadSpotSpecies(TArray<struct FSpawnSpotInfo> SpotSpecies, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units, int* ReferencedCount);
	void OrderedReadUnit(int ReferencedCount, TArray<struct FUnitConfig> Units);
	void OrderedReadSquad(int ReferencedCount, const struct FSquadConfig& SquadConfig, TArray<struct FUnitConfig> Units);
	void OrderedReadGroup(int ReferencedCount, const struct FGroupConfig& GroupConfig, TArray<struct FSquadConfig> Squads, TArray<struct FUnitConfig> Units);
	void ManuallyReadUnit(int ReferencedCount, int Index, TArray<struct FUnitConfig> Units);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategyTiming : public USTStrategyBase
{
public:
	struct FScriptMulticastDelegate                    OnSpawnTimingUp;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming");
		return pStaticClass;
	}


	void TimeIsRipe();
};




class USTStrategyTiming_Period : public USTStrategyTiming
{
public:
	unsigned char                                      bFirstDelay : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FirstDelayDuration;                                       
	unsigned char                                      bLoop : 1;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              PeriodDuration;                                           
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Period");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void OnReachTimer();
	void OnFirstDelay();
	void DeactivateStrategy();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategyTiming_Trigger : public USTStrategyTiming
{
public:
	ESTSpawnerVolume                                   VolumeType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     CenterLocation;                                           
	float                                              SphereRadius;                                             
	struct FVector                                     BoxExtent;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Trigger");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategyTiming_Wave : public USTStrategyTiming
{
public:
	TArray<int>                                        ConfigWaveAlive;                                          
	int                                                WaveInterval;                                             
	unsigned char                                      bTriggerToStart : 1;                                      
	unsigned char                                      bDelayToStart : 1;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                DelayDurationToStart;                                     
	bool                                               bRecycle;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	class USTStrategyTiming_Trigger*                   TriggerHelper;                                            
	int                                                CurrentWave;                                              
	unsigned char                                      UnknownData02[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpawnSystem.STStrategyTiming_Wave");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void ResetCD();
	void OnTriggerToStartWave(bool IsRipe);
	void OnDelayToStartWave();
	int GetCurrentWave();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


}

