#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct USpawnSystemSettings_Get_Params
{
	class USpawnSystemSettings*                        ReturnValue;                                              
};


struct ASTSpawnerBase_Thinking_Params
{
	float                                              DeltaTime;                                                
};


struct ASTSpawnerBase_Switch_Params
{
	bool                                               IsSwitchOn;                                               
};


struct ASTSpawnerBase_StopSpawn_Params
{
};


struct ASTSpawnerBase_SetSpawnerID_Params
{
	uint32_t                                           ID;                                                       
};


struct ASTSpawnerBase_ReplaceSpawnedUnit_Params
{
	class AActor*                                      OldUnit;                                                  
	class AActor*                                      NewUnit;                                                  
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_RefundSpawnedUnit_Params
{
	class AActor*                                      Unit;                                                     
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_ReclaimWaitSpawn_Params
{
	int                                                Count;                                                    
};


struct ASTSpawnerBase_OnUnitSpawned_Params
{
	class AActor*                                      NewUnit;                                                  
	struct FSTSpawnParam                               SpawnParam;                                               
	class ASTSpawnerBase*                              Spawner;                                                  
};


struct ASTSpawnerBase_OnUnitDead_Params
{
	class AActor*                                      Actor;                                                    
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct ASTSpawnerBase_OnSpawnTimingRipe_Params
{
	bool                                               IsRipe;                                                   
};


struct ASTSpawnerBase_OnSpawnerDeactivate_Params
{
};


struct ASTSpawnerBase_OnSpawnerActivate_Params
{
};


struct ASTSpawnerBase_OnRep_SpawnerID_Params
{
};


struct ASTSpawnerBase_Multicast_SpawnerSnapshot_Params
{
	struct FString                                     Timing;                                                   
	struct FString                                     Species;                                                  
	struct FString                                     Location;                                                 
	struct FString                                     Conditions;                                               
	struct FString                                     Extra;                                                    
	bool                                               IsActive;                                                 
	bool                                               IsUsable;                                                 
};


struct ASTSpawnerBase_Multicast_AlivePawnsChange_Params
{
	class APawn*                                       Unit;                                                     
	bool                                               IsBorn;                                                   
	bool                                               IsAllDead;                                                
};


struct ASTSpawnerBase_ModifyMaxAlive_Params
{
	int                                                NewAlive;                                                 
};


struct ASTSpawnerBase_IsUsable_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_IsUnitRefunded_Params
{
	class AActor*                                      Unit;                                                     
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_IsPlayerEnterRegion_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_IsInitialized_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_IsActive_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_InitSpawner_Params
{
};


struct ASTSpawnerBase_GetTotalSpawnedNum_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnerBase_GetSpawnSystem_Params
{
	class USTSpawnSubsystem*                           ReturnValue;                                              
};


struct ASTSpawnerBase_GetSpawnSpots_Params
{
	TArray<class ASTSpawnSpot*>                        ReturnValue;                                              
};


struct ASTSpawnerBase_GetSpawnRadius_Params
{
	float                                              ReturnValue;                                              
};


struct ASTSpawnerBase_GetSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ASTSpawnerBase_GetSpawnExtent_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ASTSpawnerBase_GetSpawnerSnapshot_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ASTSpawnerBase_GetSpawnerID_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct ASTSpawnerBase_GetSpawnerDesc_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ASTSpawnerBase_GetReferencedCount_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnerBase_GetMaxUnits_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnerBase_GetMaxAlive_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnerBase_GetIsForceSpawn_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_GetAliveUnits_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct ASTSpawnerBase_FindSpot_Params
{
	struct FString                                     SpotID;                                                   
	class ASTSpawnSpot*                                ReturnValue;                                              
};


struct ASTSpawnerBase_DeactivateSpawner_Params
{
};


struct ASTSpawnerBase_CheckTriggerGuest_Params
{
	class AActor*                                      Guest;                                                    
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_CheckOwnedUnit_Params
{
	class AActor*                                      InUnit;                                                   
	bool                                               ReturnValue;                                              
};


struct ASTSpawnerBase_AnalyseConfigData_Params
{
};


struct ASTSpawnerBase_ActivateSpawner_Params
{
};


struct ASTSpawnSpot_OnUnitSpawnedSuc_Params
{
	uint32_t                                           InSpawnerID;                                              
	class APawn*                                       AIPawn;                                                   
	struct FSTSpawnParam                               SpawnParam;                                               
};


struct ASTSpawnSpot_OnUnitDead_Params
{
	uint32_t                                           InSpawnerID;                                              
	class APawn*                                       AIPawn;                                                   
};


struct ASTSpawnSpot_IsSpotValid_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTSpawnSpot_HasModifySpecies_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTSpawnSpot_GetSpotWeigh_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnSpot_GetSpotUnitIndex_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnSpot_GetSpotType_Params
{
	ESpawnSpotType                                     ReturnValue;                                              
};


struct ASTSpawnSpot_GetSpotSquadIndex_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnSpot_GetSpotID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ASTSpawnSpot_GetNumberThresholdCfg_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnSpot_GetMultiPositions_Params
{
	int                                                ReqCount;                                                 
	int                                                MaxCount;                                                 
	int                                                TryTimes;                                                 
	TArray<struct FVector>                             ReturnValue;                                              
};


struct ASTSpawnSpot_GetCacheSpawnedCount_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnSpot_GetCacheAliveCount_Params
{
	int                                                ReturnValue;                                              
};


struct ASTSpawnSpot_GetAliveThresholdCfg_Params
{
	int                                                ReturnValue;                                              
};


struct USTSpawnSubsystem_UnregisterSpawner_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  
};


struct USTSpawnSubsystem_UnitFindSpawner_Params
{
	int                                                UnitUID;                                                  
	class ASTSpawnerBase*                              ReturnValue;                                              
};


struct USTSpawnSubsystem_StopSpawner_Params
{
	uint32_t                                           SpawnerID;                                                
};


struct USTSpawnSubsystem_SpawnUnit_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               
	class AActor*                                      ReturnValue;                                              
};


struct USTSpawnSubsystem_RegisterSpawner_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  
};


struct USTSpawnSubsystem_RecordProgress_Params
{
};


struct USTSpawnSubsystem_ReadySpawn_Params
{
	float                                              DeltaTime;                                                
};


struct USTSpawnSubsystem_PreCheck_Params
{
	bool                                               ReturnValue;                                              
};


struct USTSpawnSubsystem_OrderSpawnerThinking_Params
{
	float                                              DeltaTime;                                                
};


struct USTSpawnSubsystem_ModifyConfiguration_Params
{
	float                                              TickFreq;                                                 
	int                                                ThinkTimes;                                               
};


struct USTSpawnSubsystem_InitUnit_Params
{
	class APawn*                                       AIPawn;                                                   
	TArray<struct FUnitInitConfig>                     Configs;                                                  
};


struct USTSpawnSubsystem_GetUnitConfigID_Params
{
	class AActor*                                      Unit;                                                     
	int                                                ReturnValue;                                              
};


struct USTSpawnSubsystem_GetAllUnits_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct USTSpawnSubsystem_FindSpawner_Params
{
	uint32_t                                           SpawnerID;                                                
	class ASTSpawnerBase*                              ReturnValue;                                              
};


struct USTSpawnSubsystem_EnQueue_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               
	class ASTSpawnerBase*                              Spawner;                                                  
};


struct USTSpawnSubsystem_CleanQueue_Params
{
};


struct USTSpawnSubsystem_CheckCategoryLimit_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  
	int                                                AvailableBalance;                                         
	bool                                               ReturnValue;                                              
};


struct USTSpawnSystemGameplayStatics_UnitFindSpawnerByUObject_Params
{
	class UObject*                                     Object;                                                   
	class ASTSpawnerBase*                              ReturnValue;                                              
};


struct USTSpawnSystemGameplayStatics_UnitFindSpawner_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                UnitUID;                                                  
	class ASTSpawnerBase*                              ReturnValue;                                              
};


struct USTSpawnSystemGameplayStatics_ProjectPointToFloorWithComplexCollisionCheck_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Origin;                                                   
	bool                                               bOutHit;                                                  
	bool                                               bCheckComplex;                                            
	struct FHitResult                                  HitResult;                                                
	float                                              OffsetHeight;                                             
	struct FVector                                     ReturnValue;                                              
};


struct USTSpawnSystemGameplayStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                              
};


struct USTSpawnSystemGameplayStatics_FindNearbyGroundLoc_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                OutCount;                                                 
	struct FVector                                     InCenterLoc;                                              
	float                                              RangeMin;                                                 
	float                                              RangeMax;                                                 
	float                                              TraceHeight;                                              
	int                                                TryTimes;                                                 
	TArray<struct FVector>                             ReturnValue;                                              
};


struct USTSpawnVisualDebug_Get_Params
{
	class USTSpawnVisualDebug*                         ReturnValue;                                              
};


struct USTStrategyBase_UpdateSnapshot_Params
{
	struct FString                                     New;                                                      
};


struct USTStrategyBase_TickStrategy_Params
{
	float                                              DeltaTime;                                                
};


struct USTStrategyBase_ResumeStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategyBase_ResetCD_Params
{
};


struct USTStrategyBase_OnStrategyDeactivate_Params
{
};


struct USTStrategyBase_OnStrategyActivate_Params
{
};


struct USTStrategyBase_IsSTActive_Params
{
	bool                                               ReturnValue;                                              
};


struct USTStrategyBase_IsOnCD_Params
{
	bool                                               ReturnValue;                                              
};


struct USTStrategyBase_GetTickEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct USTStrategyBase_GetStrategyDesc_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTStrategyBase_GetSnapshot_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTStrategyBase_GetOwnerSpawner_Params
{
	class ASTSpawnerBase*                              ReturnValue;                                              
};


struct USTStrategyBase_DeactivateStrategy_Params
{
};


struct USTStrategyBase_CDRemaining_Params
{
	float                                              ReturnValue;                                              
};


struct USTStrategyBase_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategyCond_LuaCheckCondition_Params
{
	bool                                               ReturnValue;                                              
};


struct USTStrategyCond_CheckCondition_Params
{
	bool                                               ReturnValue;                                              
};


struct USTStrategyCond_Hide_CheckCondition_Params
{
	bool                                               ReturnValue;                                              
};


struct USTStrategyCond_Quantity_CheckCondition_Params
{
	bool                                               ReturnValue;                                              
};


struct USTStrategyCond_Quantity_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategyLocation_ResumeStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategyLocation_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                
	int                                                ReferenceCount;                                           
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   
	bool                                               ReturnValue;                                              
};


struct USTStrategyLocation_Root_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                
	int                                                ReferenceCount;                                           
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   
	bool                                               ReturnValue;                                              
};


struct USTStrategyLocation_Spots_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                
	int                                                ReferenceCount;                                           
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   
	bool                                               ReturnValue;                                              
};


struct USTStrategySpecies_Supply_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              
	TArray<struct FUnitConfig>                         ReturnValue;                                              
};


struct USTStrategySpecies_ResumeStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategySpecies_GeAllCacheConfigIDs_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct USTStrategySpecies_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategySpecies_SquadRatio_Supply_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              
	TArray<struct FUnitConfig>                         ReturnValue;                                              
};


struct USTStrategySpecies_SquadRatio_ReadSquadRatios_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FUnitRatio>                          RatioConfig;                                              
};


struct USTStrategySpecies_SquadRatio_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategySpecies_Static_WeightedReadUnit_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FUnitConfig>                         Units;                                                    
};


struct USTStrategySpecies_Static_WeightedReadSquad_Params
{
	int                                                ReferencedCount;                                          
	struct FSquadConfig                                SquadConfig;                                              
	TArray<struct FUnitConfig>                         Units;                                                    
};


struct USTStrategySpecies_Static_WeightedReadGroup_Params
{
	int                                                ReferencedCount;                                          
	struct FGroupConfig                                GroupConfig;                                              
	TArray<struct FSquadConfig>                        Squads;                                                   
	TArray<struct FUnitConfig>                         Units;                                                    
};


struct USTStrategySpecies_Static_Supply_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              
	TArray<struct FUnitConfig>                         ReturnValue;                                              
};


struct USTStrategySpecies_Static_ReadSpotSpecies_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              
	TArray<struct FSquadConfig>                        Squads;                                                   
	TArray<struct FUnitConfig>                         Units;                                                    
};


struct USTStrategySpecies_Static_OrderedReadUnit_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FUnitConfig>                         Units;                                                    
};


struct USTStrategySpecies_Static_OrderedReadSquad_Params
{
	int                                                ReferencedCount;                                          
	struct FSquadConfig                                SquadConfig;                                              
	TArray<struct FUnitConfig>                         Units;                                                    
};


struct USTStrategySpecies_Static_OrderedReadGroup_Params
{
	int                                                ReferencedCount;                                          
	struct FGroupConfig                                GroupConfig;                                              
	TArray<struct FSquadConfig>                        Squads;                                                   
	TArray<struct FUnitConfig>                         Units;                                                    
};


struct USTStrategySpecies_Static_ManuallyReadUnit_Params
{
	int                                                ReferencedCount;                                          
	int                                                Index;                                                    
	TArray<struct FUnitConfig>                         Units;                                                    
};


struct USTStrategySpecies_Static_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategyTiming_TimeIsRipe_Params
{
};


struct USTStrategyTiming_Period_TickStrategy_Params
{
	float                                              DeltaTime;                                                
};


struct USTStrategyTiming_Period_OnReachTimer_Params
{
};


struct USTStrategyTiming_Period_OnFirstDelay_Params
{
};


struct USTStrategyTiming_Period_DeactivateStrategy_Params
{
};


struct USTStrategyTiming_Period_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategyTiming_Trigger_TickStrategy_Params
{
	float                                              DeltaTime;                                                
};


struct USTStrategyTiming_Trigger_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategyTiming_Wave_TickStrategy_Params
{
	float                                              DeltaTime;                                                
};


struct USTStrategyTiming_Wave_ResetCD_Params
{
};


struct USTStrategyTiming_Wave_OnTriggerToStartWave_Params
{
	bool                                               IsRipe;                                                   
};


struct USTStrategyTiming_Wave_OnDelayToStartWave_Params
{
};


struct USTStrategyTiming_Wave_GetCurrentWave_Params
{
	int                                                ReturnValue;                                              
};


struct USTStrategyTiming_Wave_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};

}

