#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct AAESpawner_SwitchTeamAI_Params
{
	bool                                               bEnable;                                                  
};


struct AAESpawner_OnUnitTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      Causer;                                                   
};


struct AAESpawner_OnUnitSpawned_Params
{
	class AActor*                                      NewUnit;                                                  
	struct FSTSpawnParam                               SpawnParam;                                               
	class ASTSpawnerBase*                              Spawner;                                                  
};


struct AAESpawner_OnSpawnTimingRipe_Params
{
	bool                                               IsRipe;                                                   
};


struct AAESpawner_OnOwnedMobDead_Params
{
	class ASTExtraSimpleCharacter*                     DeadCharacter;                                            
	class AController*                                 Killer;                                                   
	class AActor*                                      DamageCauser;                                             
	struct FHitResult                                  KillingHitInfo;                                           
	struct FVector                                     KillingHitImpulseDir;                                     
	class UClass*                                      KillingHitDamageType;                                     
};


struct AAESpawner_OnOwnedFakePlayerDead_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            
	class AController*                                 Killer;                                                   
	class AActor*                                      DamageCauser;                                             
	struct FHitResult                                  KillingHitInfo;                                           
	struct FVector                                     KillingHitImpulseDir;                                     
	class UClass*                                      KillingHitDamageType;                                     
};


struct AAESpawner_IsWakeDormantOnNightEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct AAESpawner_IsDormantEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct AAESpawner_GetSpeciesCategory_Params
{
	TEnumAsByte<EBotCategray>                          ReturnValue;                                              
};


struct AAESpawner_GetSpawnerTeamID_Params
{
	float                                              ReturnValue;                                              
};


struct AAESpawner_GetSpawnerGroupID_Params
{
	float                                              ReturnValue;                                              
};


struct AAESpawner_GenerateParamID_Params
{
	int                                                ConfigID;                                                 
	int                                                BaseParamID;                                              
	struct FSTSpawnParam                               SpawnParam;                                               
	int                                                ReturnValue;                                              
};


struct AAESpawner_DeactivateSpawner_Params
{
};


struct AAESpawner_BPOnUnitSpawned_Params
{
	class APawn*                                       AIPawn;                                                   
	int                                                ConfigID;                                                 
	struct FSTSpawnParam                               SpawnParam;                                               
};


struct AAESpawner_ActivateSpawner_Params
{
};


struct UAESpawnSubsystem_SpawnUnit_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               
	class AActor*                                      ReturnValue;                                              
};


struct UAESpawnSubsystem_RegisterSpawner_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  
};


struct UAESpawnSubsystem_PreCheck_Params
{
	bool                                               ReturnValue;                                              
};


struct UAESpawnSubsystem_ModifyThreshold_Params
{
	TEnumAsByte<EBotCategray>                          Category;                                                 
	int                                                Threshold;                                                
};


struct UAESpawnSubsystem_GetUnitsNumByCategory_Params
{
	TEnumAsByte<EBotCategray>                          Category;                                                 
	int                                                ReturnValue;                                              
};


struct UAESpawnSubsystem_GetUnitConfigID_Params
{
	class AActor*                                      Unit;                                                     
	int                                                ReturnValue;                                              
};


struct UAESpawnSubsystem_GetGroupedSpawners_Params
{
	int                                                InGroupID;                                                
	TArray<class ASTSpawnerBase*>                      ReturnValue;                                              
};


struct UAESpawnSubsystem_EnQueue_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               
	class ASTSpawnerBase*                              Spawner;                                                  
};


struct UAESpawnSubsystem_CleanQueue_Params
{
};


struct UAESpawnSubsystem_CheckCategoryLimit_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  
	int                                                AvailableBalance;                                         
	bool                                               ReturnValue;                                              
};


struct UAIActionExecutionComponent_UseItem_Params
{
	int                                                ItemId;                                                   
	int                                                WeaponSlot;                                               
};


struct UAIActionExecutionComponent_SwapAttachmentItem_Params
{
	int                                                ItemId;                                                   
	int                                                SourceWeaponSlot;                                         
	int                                                TargetWeaponSlot;                                         
};


struct UAIActionExecutionComponent_SetGrenadeLastSelectID_Params
{
	int                                                WeaponId;                                                 
};


struct UAIActionExecutionComponent_SetFocusRotation_Params
{
	float                                              InPitch;                                                  
	float                                              InYaw;                                                    
	float                                              InRoll;                                                   
};


struct UAIActionExecutionComponent_SetCurShootingPose_Params
{
};


struct UAIActionExecutionComponent_RescueTarget_Params
{
	class ASTExtraBaseCharacter*                       RescueCharacter;                                          
};


struct UAIActionExecutionComponent_OpenFixedRateOfDoors_Params
{
	float                                              fCheckRealPlayerDistance;                                 
	float                                              fOpenDoorDistance;                                        
	float                                              fOpenDoorRate;                                            
};


struct UAIActionExecutionComponent_OpenDoor_Params
{
};


struct UAIActionExecutionComponent_OnPlayerRespawn_Params
{
	class AUAEPlayerController*                        PC;                                                       
};


struct UAIActionExecutionComponent_OnFakePlayerRespawn_Params
{
};


struct UAIActionExecutionComponent_IsValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UAIActionExecutionComponent_IsFreeCamera_Params
{
	bool                                               ReturnValue;                                              
};


struct UAIActionExecutionComponent_GetPickActorWithID_Params
{
	int                                                UID;                                                      
	class APickUpWrapperActor*                         ReturnValue;                                              
};


struct UAIActionExecutionComponent_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct UAIActionExecutionComponent_GetBackpackComponent_Params
{
	class UBackpackComponent*                          ReturnValue;                                              
};


struct UAIActionExecutionComponent_DropItem_Params
{
	int                                                ItemId;                                                   
	int                                                Count;                                                    
};


struct UAIActionExecutionComponent_DoActionQuickMark_Params
{
	int                                                actorUID;                                                 
	int                                                ItemId;                                                   
	int                                                CheckRange;                                               
};


struct UAIActionExecutionComponent_DoActionMoveNew_Params
{
	bool                                               IsStop;                                                   
	bool                                               IsRun;                                                    
	float                                              DirectionX;                                               
	float                                              DirectionY;                                               
	float                                              DirectionZ;                                               
	int                                                SwimUpRate;                                               
};


struct UAIActionExecutionComponent_DoActionMove_Params
{
	bool                                               IsRun;                                                    
	float                                              DirectionX;                                               
	float                                              DirectionY;                                               
	float                                              DirectionZ;                                               
};


struct UAIActionExecutionComponent_DoActionFreeCamera_Params
{
	bool                                               IsEnter;                                                  
	float                                              InPitch;                                                  
	float                                              InYaw;                                                    
	float                                              InRoll;                                                   
};


struct UAIActionExecutionComponent_DisuseItem_Params
{
	int                                                ItemId;                                                   
	int                                                WeaponSlot;                                               
};


struct UAIActionExecutionComponent_CloseDoor_Params
{
};


struct UAIBasicStateInfoComponent_OnItemStateChanged_Params
{
	struct FVector                                     Location;                                                 
};


struct UAIBasicStateInfoComponent_GetPickActorWithID_Params
{
	int                                                UID;                                                      
	class APickUpWrapperActor*                         ReturnValue;                                              
};


struct UAIBehaviorAdapter_VehicleBase_Suicide_Params
{
};


struct UAIBehaviorAdapter_VehicleBase_RPC_Client_SetServiceDebugInfo_Params
{
	struct FString                                     Info;                                                     
};


struct UAIBehaviorAdapter_VehicleBase_OnInit_Params
{
};


struct UAIBehaviorAdapter_VehicleBase_OnDeath_Params
{
	class AController*                                 InstigatedBy;                                             
};


struct UAIBehaviorAdapter_VehicleBase_OnAICPossessed_Params
{
	class AController*                                 InController;                                             
};


struct UAIBehaviorAdapter_VehicleBase_LuaCalculateHitRate_Params
{
	float                                              Distance;                                                 
	float                                              BaseHitRate;                                              
	float                                              ReturnValue;                                              
};


struct UAIBehaviorAdapter_VehicleBase_IsAlive_Params
{
	bool                                               ReturnValue;                                              
};


struct UAIBehaviorAdapter_VehicleBase_HandleOnVehicleUnderAttack_Params
{
	class AController*                                 EventInstigator;                                          
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      DamageCauser;                                             
	float                                              Damage;                                                   
	float                                              OriginDamage;                                             
};


struct UAIBehaviorAdapter_VehicleBase_HandleOnVehicleHealthStateChanged_Params
{
	ESTExtraVehicleHealthState                         InVehicleHealthState;                                     
};


struct UAIBehaviorAdapter_VehicleBase_HandleOnMeshHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UAIBehaviorAdapter_VehicleBase_BroadcastServiceDebugInfo_Params
{
};


struct UAIBehaviorAdapter_VehicleBase_BPReceiveDamage_Params
{
	float                                              Damage;                                                   
	class UDamageType*                                 DamageType;                                               
	class AController*                                 InstigatedBy;                                             
	class AActor*                                      DamageCauser;                                             
	TEnumAsByte<EDamageType>                           DamageEventType;                                          
};


struct UAIBehaviorAdapter_Tank_UpdateTurretAimingTarget_Params
{
	struct FVector                                     TargetLocation;                                           
	float                                              DeltaSeconds;                                             
	bool                                               FailedWhenCollided;                                       
	bool                                               ReturnValue;                                              
};


struct UAIBehaviorAdapter_Tank_ShootTurret_Params
{
	bool                                               ReturnValue;                                              
};


struct UAIBehaviorAdapter_Tank_ShootMachineGun_Params
{
	bool                                               ReturnValue;                                              
};


struct UAIBehaviorAdapter_Tank_OnInit_Params
{
};


struct UAIBehaviorAdapter_Tank_OnDeath_Params
{
	class AController*                                 InstigatedBy;                                             
};


struct UAIBehaviorAdapter_Tank_IsTurretLockTarget_Params
{
	struct FVector                                     TargetLocation;                                           
	float                                              LockRadius;                                               
	bool                                               ReturnValue;                                              
};


struct UAIBehaviorAdapter_Tank_IsAlive_Params
{
	bool                                               ReturnValue;                                              
};


struct UAIBehaviorAdapter_Tank_HandleOnVehicleHealthStateChanged_Params
{
	ESTExtraVehicleHealthState                         InVehicleHealthState;                                     
};


struct UAIBehaviorAdapter_Tank_BroadcastTankShootWeapon_Params
{
	bool                                               IsTurret;                                                 
};


struct UAIPerceptionChildPickUpComponent_OnPickUpWrapperHideStateChange_Params
{
	class APickUpWrapperActor*                         PickUpActor;                                              
	bool                                               bHide;                                                    
};


struct UAIPerceptionDynamicItemComponent_UpdateIntCustomAttributeValue_Params
{
	uint32_t                                           InCustomAttributeID;                                      
	uint64_t                                           InValue;                                                  
	bool                                               bRemove;                                                  
};


struct UAIPerceptionDynamicItemComponent_UpdateInAICell_Params
{
	bool                                               bForceUpdate;                                             
};


struct UAIPerceptionDynamicItemComponent_UpdateCustomAttributeValue_Params
{
	uint32_t                                           InCustomAttributeID;                                      
	float                                              InValue;                                                  
	bool                                               bRemove;                                                  
};


struct UAIPerceptionDynamicItemComponent_SetEnableState_Params
{
	bool                                               bInEnable;                                                
};


struct UAIPerceptionDynamicItemComponent_RemoveInAICell_Params
{
};


struct UAIPerceptionDynamicItemComponent_RemoveFromCache_Params
{
};


struct UAIPerceptionDynamicItemComponent_OnMeshAssetSet_Params
{
};


struct UAIPerceptionDynamicItemComponent_GetUniqueID_Params
{
	class AActor*                                      DynamicItem;                                              
	uint32_t                                           ReturnValue;                                              
};


struct UAIPerceptionDynamicItemComponent_GetIntCustomAttributeList_Params
{
	TArray<struct FIntAIAttribute>                     OutIntCustomAttributeList;                                
};


struct UAIPerceptionDynamicItemComponent_GetCustomAttributeList_Params
{
	TArray<struct FAIAttribute>                        OutCustomAttributeList;                                   
};


struct UAISoundCollectionComponent_OnCollectionHearSound_Params
{
	ESoundType                                         SoundType;                                                
	struct FVector                                     InPos;                                                    
	class AActor*                                      InSourceActor;                                            
};


struct UAISoundCollectionComponent_OnAISoundManagerHear_Params
{
	class AActor*                                      InTargetActor;                                            
	ESoundType                                         SoundType;                                                
	struct FVector                                     InPos;                                                    
	class AActor*                                      InSourceActor;                                            
};


struct UAISoundCollectionComponent_GetCollectSoundInfo_Params
{
	TArray<struct FSoundState>                         ReturnValue;                                              
};


struct UAIStateInfoComponentBase_QueryItemStates_Params
{
	int                                                MaxBoxNum;                                                
	int                                                MaxItemNum;                                               
	float                                              AirDropBoxRangeInner;                                     
	float                                              AirDropBoxRangeOuter;                                     
	float                                              DeathBoxRange;                                            
	float                                              PickUpWrapperRange;                                       
	float                                              FindBuildingMaxRange;                                     
	float                                              FindBuildingMinRange;                                     
	bool                                               InIsUseItemSpotLoc;                                       
	int                                                MaxTreasureChestNum;                                      
	float                                              TreasureChestRange;                                       
	int                                                MaxWeedNum;                                               
	float                                              WeedRange;                                                
	TArray<struct FItemStateData>                      ItemStateDatas;                                           
};


struct UAIStateInfoComponentBase_PrintCacheAINearbyItem_Params
{
};


struct UAIStateInfoComponentBase_OnPlayerRespawn_Params
{
	class AUAEPlayerController*                        PC;                                                       
};


struct UAIStateInfoComponentBase_OnFakePlayerRespawn_Params
{
};


struct UAIStateInfoComponentBase_OnAIStateRequestEnd_Params
{
};


struct UAIStateInfoComponentBase_IsValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UAIStateInfoComponentBase_IsAvailableNearbyItemType_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UAIStateInfoComponentBase_IsAvailableBackpackItemType_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UAIStateInfoComponentBase_HasPlayerAround_Params
{
	bool                                               ReturnValue;                                              
};


struct UAIStateInfoComponentBase_GetViewForwardVector_Params
{
	class ACharacter*                                  InCharacter;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UAIStateInfoComponentBase_GetSoundInfo_Params
{
	TArray<struct FSoundState>                         ReturnValue;                                              
};


struct UAIStateInfoComponentBase_GetPlayerInteractInfo_Params
{
	struct FAIPlayerInteractInfo                       ReturnValue;                                              
};


struct UAIStateInfoComponentBase_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct UAIStateInfoComponentBase_GetNearbyItemState_Params
{
	class ASTExtraBaseCharacter*                       InPawn;                                                   
	bool                                               OutIsUseCacheItem;                                        
	TArray<struct FItemStateData>                      NearbyItems;                                              
};


struct UAIStateInfoComponentBase_GetFrameNo_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UAIStateInfoComponentBase_GetDamageSourcesNew_Params
{
	TArray<struct FDamageSource>                       ReturnValue;                                              
};


struct UAIStateInfoComponentBase_GetAIDestroyBulletProbInfo_Params
{
	TArray<struct FAIDestroyBulletProbInfo>            AIDestroyBulletProbInfoList;                              
};


struct UAIStateInfoComponentBase_ClearDamageSources_Params
{
};


struct UBaseStateInfoCollector_RemoveBackpackItemUpdatedMap_Params
{
	uint32_t                                           PlayerKey;                                                
	bool                                               AllRemove;                                                
};


struct UBaseStateInfoCollector_OnBackpackItemListUpdated_Params
{
	uint32_t                                           PlayerKey;                                                
};


struct UBaseStateInfoCollector_AddBackpackItemListUpdatedDelegate_Params
{
	class UBackpackComponent*                          InBackpackComp;                                           
	uint32_t                                           InPlayerKey;                                              
};


struct UBTService_DebugInfo_GetInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBTTask_SummonActor_GetSummonLocations_Params
{
	class AActor*                                      Invoker;                                                  
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UBTTaskNode_NewParachuteJumpBase_DelayClearParachute_Params
{
	class ASTExtraPlayerCharacter*                     ControlledPawn;                                           
};


struct UCustomDamageEventComponent_OnRep_ClientEvents_Params
{
};


struct UCharacterCustomDamageEventComponent_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      Causer;                                                   
};


struct UMLAIControllerComponent_UnBindDelegates_Params
{
	bool                                               IsEndPlay;                                                
};


struct UMLAIControllerComponent_SetShowDebugAILevelTime_Params
{
	float                                              InSetShowDebugAILevelTime;                                
};


struct UMLAIControllerComponent_SetMLAIStyle_Params
{
	uint32_t                                           NewAIStyle;                                               
};


struct UMLAIControllerComponent_SetLuaAIParamConfigString_Params
{
	struct FString                                     InAIParamConfigString;                                    
	int                                                InLuaAIParamType;                                         
};


struct UMLAIControllerComponent_SetIsMLAI_Params
{
	bool                                               InIsMLAI;                                                 
};


struct UMLAIControllerComponent_SetCurShootingPose_Params
{
	EAIShootingPose                                    InCurAIShootingPose;                                      
};


struct UMLAIControllerComponent_SetAllyMasterID_Params
{
	uint32_t                                           InAllyMasterID;                                           
};


struct UMLAIControllerComponent_SetAIProvider_Params
{
	uint32_t                                           AIProvider;                                               
};


struct UMLAIControllerComponent_SetAIParams_Params
{
	struct FGameModeAIPlayerParams                     InAIParams;                                               
};


struct UMLAIControllerComponent_SetAILevel_Params
{
	uint32_t                                           NewAILevel;                                               
};


struct UMLAIControllerComponent_IsValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UMLAIControllerComponent_IsTeammateMLAI_Params
{
	bool                                               ReturnValue;                                              
};


struct UMLAIControllerComponent_IsFreeCamera_Params
{
	bool                                               ReturnValue;                                              
};


struct UMLAIControllerComponent_InitAIStateInfoComponent_Params
{
	class UAIBasicStateInfoComponent*                  AIStateInfoComponent;                                     
};


struct UMLAIControllerComponent_InitAIActionExecutionComponent_Params
{
	class UAIActionExecutionComponent*                 InAIActionExecutionComponent;                             
};


struct UMLAIControllerComponent_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UMLAIControllerComponent_GetViewForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UMLAIControllerComponent_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct UMLAIControllerComponent_GetMLAIStyle_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UMLAIControllerComponent_GetMLAIParachuteJumpComp_Params
{
	class UMLAIParachuteJumpComponent*                 ReturnValue;                                              
};


struct UMLAIControllerComponent_GetIsMLAI_Params
{
	bool                                               ReturnValue;                                              
};


struct UMLAIControllerComponent_GetBackpackComponent_Params
{
	class UBackpackComponent*                          ReturnValue;                                              
};


struct UMLAIControllerComponent_GetAllyMasterID_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UMLAIControllerComponent_GetAIStateInfoComp_Params
{
	class UAIBasicStateInfoComponent*                  ReturnValue;                                              
};


struct UMLAIControllerComponent_GetAIProvider_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UMLAIControllerComponent_GetAIParams_Params
{
	struct FGameModeAIPlayerParams                     ReturnValue;                                              
};


struct UMLAIControllerComponent_GetAILevel_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UMLAIControllerComponent_GetAIActionExecutionComp_Params
{
	class UAIActionExecutionComponent*                 ReturnValue;                                              
};


struct UMLAIControllerComponent_FreshShootingPose_Params
{
};


struct UMLAIControllerComponent_DoActionFreeCamera_Params
{
	bool                                               IsEnter;                                                  
	float                                              InPitch;                                                  
	float                                              InYaw;                                                    
	float                                              InRoll;                                                   
};


struct UMLAIControllerComponent_CheckCameraViewPitchLimit_Params
{
	struct FRotator                                    InOutTargetRot;                                           
	bool                                               ReturnValue;                                              
};


struct UMLAIControllerComponent_BindDelegates_Params
{
};


struct UMLAIParachuteJumpComponent_ParachuteMove_Params
{
	float                                              ForwardRate;                                              
	float                                              RightRate;                                                
};


struct UMLAIParachuteJumpComponent_OpenParachute_Params
{
};


struct UMLAIParachuteJumpComponent_OnFollowOpenParachute_Params
{
};


struct UMLAIParachuteJumpComponent_OnFollowJumpFromPlane_Params
{
};


struct UMLAIParachuteJumpComponent_OnAIEnterFighting_Params
{
};


struct UMLAIParachuteJumpComponent_JumpFromPoint_Params
{
};


struct UMLAIParachuteJumpComponent_JumpFromPlane_Params
{
};


struct UMLAIParachuteJumpComponent_EnterParachuteJumpPhase_Params
{
	struct FVector                                     StartLoc;                                                 
	struct FRotator                                    StartRot;                                                 
};


struct UMLAIParachuteJumpComponent_EndJump_Params
{
	bool                                               bSuccess;                                                 
};


struct UMLAIParachuteJumpComponent_CloseParachute_Params
{
};


struct UMLAIStateInfoManager_StartRequestCache_Params
{
};


struct UMLAIStateInfoManager_SetUseNewDiffCmds_Params
{
	bool                                               InUseNewDiffCmds;                                         
};


struct UMLAIStateInfoManager_SetOpenHeadAndMuzzleInfo_Params
{
	bool                                               InOpenHeadAndMuzzleInfo;                                  
};


struct UMLAIStateInfoManager_ResetWhiteList_Params
{
};


struct UMLAIStateInfoManager_MakeRuntimeDataAssetCopy_Params
{
};


struct UMLAIStateInfoManager_InitCollectorList_Params
{
	TArray<struct FCollectorInitInfo>                  CollectorInitInfoList;                                    
};


struct UMLAIStateInfoManager_InitCollector_Params
{
};


struct UMLAIStateInfoManager_Init_Params
{
	class UWorld*                                      InWorld;                                                  
};


struct UMLAIStateInfoManager_GetSinglePlayerStateInfoToCache_Params
{
	class UWorld*                                      InWorld;                                                  
	class ASTExtraPlayerCharacter*                     Player;                                                   
};


struct UMLAIStateInfoManager_GetGlobalGameStateToCache_Params
{
	class UWorld*                                      InWorld;                                                  
};


struct UMLAIStateInfoManager_GetDiffGlobalGameStateToCacheGeneral_Params
{
	class UWorld*                                      InWorld;                                                  
};


struct UMLAIStateInfoManager_GetDiffAllPlayerAIStateInfoToCacheGeneral_Params
{
	class UWorld*                                      InWorld;                                                  
};


struct UMLAIStateInfoManager_GetAllPlayerStateInfoToCache_Params
{
	class UWorld*                                      InWorld;                                                  
};


struct UMLAIStateInfoManager_EndRequestCache_Params
{
};


struct UMLAIStateInfoManager_CollectCandidateAIStateInfoToCache_Params
{
	class UWorld*                                      InWorld;                                                  
	EStatePlayerType                                   CollectPlayerType;                                        
	struct FAIActingCandidateData                      CandidateData;                                            
};


struct UMLAIStateInfoManager_CollectAIStateInfoToCache_Params
{
	class UWorld*                                      InWorld;                                                  
	EStatePlayerType                                   CollectPlayerType;                                        
	class ASTExtraBaseCharacter*                       PlayerPawn;                                               
};


struct UMLAISubSystem_UpdateSpecialZoneStateChanged_Params
{
	class ASpecialZoneActor*                           InSpecialZone;                                            
};


struct UMLAISubSystem_UpdateSpecialZoneInfo_Params
{
	struct FSpecialZoneState                           NewZoneInfo;                                              
};


struct UMLAISubSystem_UpdateRedZoneState_Params
{
	class UWorld*                                      InWorld;                                                  
};


struct UMLAISubSystem_UpdateMercenaryPlayerWhite_Params
{
};


struct UMLAISubSystem_UpdateAirDropBoxStates_Params
{
};


struct UMLAISubSystem_UnregisterSpecialMapping_Params
{
	struct FString                                     Key;                                                      
};


struct UMLAISubSystem_UnregisterDynamicItemComponent_Params
{
	class UAIPerceptionDynamicItemComponent*           InDynamicItemComp;                                        
};


struct UMLAISubSystem_UnregisterDestructibleItemComponent_Params
{
	class UAIPerceptionDynamicItemComponent*           InComp;                                                   
};


struct UMLAISubSystem_StartRequestCache_Params
{
};


struct UMLAISubSystem_SetWhitelistPlayerStatesSwitch_Params
{
	bool                                               InSwitch;                                                 
	bool                                               InReset;                                                  
	bool                                               InCheckGlobalState;                                       
};


struct UMLAISubSystem_SetVehicleWeekPointConfig_Params
{
	TMap<uint32_t, struct FString>                     InVehicleWeekPointConfig;                                 
};


struct UMLAISubSystem_SetUseTablePool_Params
{
	int                                                InUseTablePool;                                           
};


struct UMLAISubSystem_SetStrAIAttribute_Params
{
	uint32_t                                           InPlayerKey;                                              
	uint32_t                                           InAttributeID;                                            
	struct FString                                     InAttributeValue;                                         
};


struct UMLAISubSystem_SetReportAllDynamicItems_Params
{
	bool                                               bInEnable;                                                
};


struct UMLAISubSystem_SetPlayerRevivalType_Params
{
	uint32_t                                           InPlayerKey;                                              
	int                                                InRevivalType;                                            
};


struct UMLAISubSystem_SetPlayerAttributeModifyCompConfig_Params
{
	TMap<uint32_t, struct FString>                     InAttributeModifyCompConfig;                              
};


struct UMLAISubSystem_SetPawnStateConfig_Params
{
	TMap<int, uint32_t>                                InPawnStateConfig;                                        
};


struct UMLAISubSystem_SetOverrideMapID_Params
{
	int                                                InOverrideMapID;                                          
};


struct UMLAISubSystem_SetOpenBTCameraInfo_Params
{
	bool                                               InOpenBTCameraInfo;                                       
};


struct UMLAISubSystem_SetNonMLAIBuffConfig_Params
{
	TMap<int, uint32_t>                                InBuffIDs;                                                
};


struct UMLAISubSystem_SetNewbieRealHiddenScore_Params
{
	int                                                InNewbieRealHiddenScore;                                  
};


struct UMLAISubSystem_SetNewbieMatchCount_Params
{
	int                                                InNewbieMatchCount;                                       
};


struct UMLAISubSystem_SetNeedAllInfo_Params
{
	bool                                               bInNeedAllInfo;                                           
};


struct UMLAISubSystem_SetModGameType_Params
{
	int                                                InModGameType;                                            
};


struct UMLAISubSystem_SetMLAIStateInfoManager_Params
{
	class UMLAIStateInfoManager*                       InMLAIStateInfoManager;                                   
};


struct UMLAISubSystem_SetMLAIBuffConfig_Params
{
	TMap<int, uint32_t>                                InBuffIDs;                                                
};


struct UMLAISubSystem_SetIntAIAttribute_Params
{
	uint32_t                                           InPlayerKey;                                              
	uint32_t                                           InAttributeID;                                            
	uint64_t                                           InAttributeValue;                                         
};


struct UMLAISubSystem_SetGameAttribute_Params
{
	uint32_t                                           InAttributeID;                                            
	float                                              InAttributeValue;                                         
};


struct UMLAISubSystem_SetCDSkillConfig_Params
{
	TMap<int, uint32_t>                                InAttributeCDSkillConfigs;                                
};


struct UMLAISubSystem_SetBackpackItemUpdatedMapSwitch_Params
{
	bool                                               bInSwitch;                                                
};


struct UMLAISubSystem_SetAirDropLocation_Params
{
	int                                                InAirDropTag;                                             
	struct FVector                                     AirDropLocation;                                          
};


struct UMLAISubSystem_SetAIAttributeModifyCompConfig_Params
{
	TMap<uint32_t, struct FString>                     InAttributeModifyCompConfig;                              
};


struct UMLAISubSystem_SetAIAttribute_CastEnergyWithCount_Params
{
	uint32_t                                           InPlayerKey;                                              
	uint32_t                                           InAttributeID;                                            
	int                                                InCurCount;                                               
	float                                              InCurEnergy;                                              
	float                                              InLastActiveTime;                                         
	int                                                InMaxCount;                                               
	float                                              InMaxEnergy;                                              
	float                                              InDeltaEnergy;                                            
};


struct UMLAISubSystem_SetAIAttribute_Params
{
	uint32_t                                           InPlayerKey;                                              
	uint32_t                                           InAttributeID;                                            
	float                                              InAttributeValue;                                         
};


struct UMLAISubSystem_ResetAttributeIDToPlayerKeysMap_Params
{
	uint32_t                                           InAttributeID;                                            
	TArray<uint32_t>                                   InPlayerKeys;                                             
};


struct UMLAISubSystem_RemoveSpecialZoneInfo_Params
{
	uint32_t                                           ZoneID;                                                   
	uint32_t                                           Type;                                                     
};


struct UMLAISubSystem_RemoveMercenary2MasterMap_Params
{
	class APawn*                                       MercenaryAI;                                              
	class APawn*                                       Master;                                                   
};


struct UMLAISubSystem_RemoveFromSilentMLAIList_Params
{
	uint32_t                                           InPlayerKey;                                              
};


struct UMLAISubSystem_RemoveFromPlayerWhitelist_Params
{
	uint32_t                                           InPlayerKey;                                              
};


struct UMLAISubSystem_RemoveAICheckVisibilityFilteredActor_Params
{
	uint32_t                                           ActorId;                                                  
};


struct UMLAISubSystem_RegisterSpecialMapping_Params
{
	struct FString                                     Key;                                                      
	int                                                Value;                                                    
};


struct UMLAISubSystem_RegisterDynamicItemComponent_Params
{
	class UAIPerceptionDynamicItemComponent*           InDynamicItemComp;                                        
};


struct UMLAISubSystem_RegisterDestructibleItemComponent_Params
{
	class UAIPerceptionDynamicItemComponent*           InComp;                                                   
};


struct UMLAISubSystem_OnVehicleDamageInfo_Params
{
	class AController*                                 InstigatorController;                                     
	class AController*                                 VictimController;                                         
	int                                                DamageTypeId;                                             
	float                                              Damage;                                                   
	bool                                               bIsFatalHealthCost;                                       
	class AActor*                                      DamageCauser;                                             
	class AActor*                                      VictimVehicle;                                            
};


struct UMLAISubSystem_OnPlayerStartFire_Params
{
	uint32_t                                           PlayerKey;                                                
	int                                                Count;                                                    
};


struct UMLAISubSystem_OnPlayerPickUpItem_Params
{
	uint32_t                                           InPlayerKey;                                              
};


struct UMLAISubSystem_OnPlayerDamageInfo_Params
{
	class ASTExtraPlayerState*                         InstigatorPlayerState;                                    
	class ASTExtraPlayerState*                         VictimPlayerState;                                        
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	float                                              DamageBeforeCalArmor;                                     
	bool                                               bIsFatalHealthCost;                                       
	class AActor*                                      DamageCauser;                                             
	bool                                               bIsNearDeathHealthCost;                                   
};


struct UMLAISubSystem_OnItemStateChanged_Params
{
	struct FVector                                     Location;                                                 
};


struct UMLAISubSystem_OnAirDropBoxSpawn_Params
{
	class AAirDropBoxActor*                            AirDropBoxActor;                                          
};


struct UMLAISubSystem_OnAirAttackInfo_Params
{
	EAirAttackInfo                                     airattacktype;                                            
	int                                                waveIndex;                                                
	struct FAirAttackOrder                             InAirAttackOrder;                                         
	struct FVector                                     InAirAttackArea;                                          
};


struct UMLAISubSystem_IsAvailableBackpackItemType_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UMLAISubSystem_IsAIBotGame_Params
{
	bool                                               ReturnValue;                                              
};


struct UMLAISubSystem_InsertPlayerWhitelist_Params
{
	uint32_t                                           InPlayerKey;                                              
};


struct UMLAISubSystem_InsertIntoSilentMLAIList_Params
{
	uint32_t                                           InPlayerKey;                                              
};


struct UMLAISubSystem_GetVoiceRoomInfo_Params
{
	TArray<struct FBattleVoiceRoomInfo>                BattleVoiceRoomInfos;                                     
};


struct UMLAISubSystem_GetServerIPAddress_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UMLAISubSystem_GetLossTime_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         
	float                                              ReturnValue;                                              
};


struct UMLAISubSystem_GetItemDurability_Params
{
	int                                                InTypeSpecificID;                                         
	int                                                ReturnValue;                                              
};


struct UMLAISubSystem_GetCacheStrAIAttributes_Params
{
	uint32_t                                           InPlayerKey;                                              
	TArray<struct FStrAIAttribute>                     StrAttributes;                                            
};


struct UMLAISubSystem_GetCacheIntAIAttributes_Params
{
	uint32_t                                           InPlayerKey;                                              
	TArray<struct FIntAIAttribute>                     IntAttributes;                                            
};


struct UMLAISubSystem_GetCacheAIAttributes_Params
{
	uint32_t                                           InPlayerKey;                                              
	TArray<struct FAIAttribute>                        Attributes;                                               
};


struct UMLAISubSystem_GetAndCheckAirDopTag_Params
{
	int                                                ReturnValue;                                              
};


struct UMLAISubSystem_FindPlayerWhiteRange_Params
{
	struct FVector                                     InLocation;                                               
	float                                              InRange;                                                  
};


struct UMLAISubSystem_FindMasterTeamMateList_Params
{
	class APawn*                                       Master;                                                   
};


struct UMLAISubSystem_EndRequestCache_Params
{
};


struct UMLAISubSystem_ClearSpecialMappings_Params
{
};


struct UMLAISubSystem_ClearAttributeIDToPlayerKeysMap_Params
{
	uint32_t                                           InAttributeID;                                            
};


struct UMLAISubSystem_ChangeMLAIInfo_Params
{
	class AFakePlayerAIController*                     AIController;                                             
	struct FString                                     Name;                                                     
	uint64_t                                           DisplayUID;                                               
	struct FPlayerOBInfo                               OBInfo;                                                   
};


struct UMLAISubSystem_CanGetState_Params
{
	uint32_t                                           InPlayerKey;                                              
	bool                                               ReturnValue;                                              
};


struct UMLAISubSystem_CanFindInSilentMLAIList_Params
{
	uint32_t                                           InPlayerKey;                                              
	bool                                               ReturnValue;                                              
};


struct UMLAISubSystem_AddVoiceServerURLInfo_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FString                                     BattleVoiceServerURL;                                     
};


struct UMLAISubSystem_AddVoiceRoomInfo_Params
{
	uint32_t                                           TeamID;                                                   
	struct FString                                     BattleVoiceRoomID;                                        
};


struct UMLAISubSystem_AddTeammateMLAITeamID_Params
{
	uint32_t                                           TeamID;                                                   
};


struct UMLAISubSystem_AddPendingUpdateSpecialZone_Params
{
	class ASpecialZoneActor*                           InSpecialZone;                                            
};


struct UMLAISubSystem_AddMercenary2MasterMap_Params
{
	class APawn*                                       MercenaryAI;                                              
	class APawn*                                       Master;                                                   
	bool                                               bIncludesTeammates;                                       
};


struct UMLAISubSystem_AddAICheckVisibilityFilteredActor_Params
{
	uint32_t                                           ActorId;                                                  
};


struct UMLAITrainingComponent_StopRunnable_Params
{
};


struct UMLAITrainingComponent_SetPauseGamePlayerState_Params
{
	class APlayerState*                                InPlayerState;                                            
};


struct UMLAITrainingComponent_SetPause_Params
{
	bool                                               bInPause;                                                 
	float                                              InPauseTime;                                              
	bool                                               ReturnValue;                                              
};


struct UMLAITrainingComponent_SendAIStateRequest_Params
{
	TArray<unsigned char>                              Packet;                                                   
};


struct UMLAITrainingComponent_IsRequestAIState_Params
{
	bool                                               ReturnValue;                                              
};


struct UMLAITrainingComponent_InitRunnable_Params
{
	float                                              InStartCollectingInterval;                                
	float                                              InSendInterval;                                           
	float                                              InTimeOutInterval;                                        
};


struct UMLAITrainingComponent_EndRequestAIState_Params
{
};


struct ASpecialZoneActor_UpdateType_Params
{
	int                                                InType;                                                   
};


struct ASpecialZoneActor_UpdateIntCustomAttributeValue_Params
{
	uint32_t                                           InCustomAttributeID;                                      
	uint64_t                                           InValue;                                                  
	bool                                               bRemove;                                                  
};


struct ASpecialZoneActor_UpdateHealth_Params
{
	float                                              InHealth;                                                 
};


struct ASpecialZoneActor_UpdateExtraState_Params
{
	uint32_t                                           InExtraState;                                             
};


struct ASpecialZoneActor_UpdateCustomState_Params
{
	int                                                InCustomState;                                            
};


struct ASpecialZoneActor_UpdateCustomAttributeValue_Params
{
	uint32_t                                           InCustomAttributeID;                                      
	float                                              InValue;                                                  
	bool                                               bRemove;                                                  
};


struct ASpecialZoneActor_SetIsReport_Params
{
	bool                                               bInReport;                                                
};


struct ASpecialZoneActor_HandleFragmentsStateChanged_Params
{
	int                                                FragmentItemIndex;                                        
	EPhotonFracturedMeshFragmentState                  State;                                                    
	TArray<EPhotonFracturedMeshFragmentState>          FragmentState;                                            
};


struct ASpecialZoneActor_GetSpecialZoneState_Params
{
	struct FSpecialZoneState                           ReturnValue;                                              
};


struct ASpecialZoneActor_GetIntCustomAttributeList_Params
{
	TArray<struct FIntAIAttribute>                     OutIntCustomAttributeList;                                
};


struct ASpecialZoneActor_GetCustomAttributeList_Params
{
	TArray<struct FAIAttribute>                        OutCustomAttributeList;                                   
};


struct ASpecialZoneActor_ClearCustomAttributeMap_Params
{
};


struct USTStrategyLocation_Range_ModifyBaseLocation_Params
{
	struct FVector                                     InLocation;                                               
};


struct USTStrategyLocation_Range_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                
	int                                                ReferenceCount;                                           
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   
	bool                                               ReturnValue;                                              
};


struct USTStrategyLocation_Range_AddSpawnArea_Params
{
	struct FSpawnArea                                  NewArea;                                                  
	bool                                               ForceAdd;                                                 
};


struct USTStrategyLocation_Range_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategySpecies_Candidate_Supply_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              
	TArray<struct FUnitConfig>                         ReturnValue;                                              
};


struct USTStrategySpecies_Candidate_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct USTStrategySpecies_Lua_Supply_Params
{
	int                                                ReferencedCount;                                          
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              
	TArray<struct FUnitConfig>                         ReturnValue;                                              
};


struct USTStrategySpecies_Lua_LuaSupply_Params
{
	int                                                ReferencedCount;                                          
};


struct USTStrategyTiming_Event_TickStrategy_Params
{
	float                                              DeltaTime;                                                
};


struct USTStrategyTiming_Event_OnSpawnEventBroadcast_Params
{
	uint32_t                                           SpawnerID;                                                
};


struct USTStrategyTiming_Event_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    
};


struct UTeammateMLAIControllerComponent_SetMLAIStyle_Params
{
	uint32_t                                           NewAIStyle;                                               
};


struct UTeammateMLAIControllerComponent_SetIsMLAI_Params
{
	bool                                               InIsMLAI;                                                 
};


struct UTeammateMLAIControllerComponent_SetAIParams_Params
{
	struct FGameModeAIPlayerParams                     InAIParams;                                               
};


struct UTeammateMLAIControllerComponent_SetAILevel_Params
{
	uint32_t                                           NewAILevel;                                               
};


struct UTeammateMLAIControllerComponent_OnTeammateMLAILost_Params
{
};


struct UTeammateMLAIControllerComponent_OnTeammateMLAIExit_Params
{
};


struct UTeammateMLAIControllerComponent_OnControllerStateChanged_Params
{
	EStateType                                         StateType;                                                
};


struct UTeammateMLAIControllerComponent_IsTakeOverTeammate_Params
{
	bool                                               ReturnValue;                                              
};


struct UTeammateMLAIControllerComponent_GetMLAIStyle_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UTeammateMLAIControllerComponent_GetAIParams_Params
{
	struct FGameModeAIPlayerParams                     ReturnValue;                                              
};


struct UTeammateMLAIControllerComponent_GetAILevel_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct AVehicleAIController_SetCurEnemy_Params
{
	class APawn*                                       NewEnemy;                                                 
};


struct AVehicleAIController_GetVehiclePathFollow_Params
{
	class UVehiclePathFollowingComponent*              ReturnValue;                                              
};


struct AVehicleAIController_GetCurEnemy_Params
{
	class APawn*                                       ReturnValue;                                              
};


struct AVehicleAIController_GetAIHitRate_Params
{
	float                                              Distance;                                                 
	float                                              ReturnValue;                                              
};


struct AVehicleAIController_ExplodeAndDeath_Params
{
};


struct AVehicleAIController_DelayInitVehicleWeapon_Params
{
};


struct UVehicleAIUserComponent_ServerVehicleLeanOut_Params
{
	bool                                               bLeanOut;                                                 
};


struct UVehicleAIUserComponent_ServerExitVehicleEx_Params
{
	bool                                               bMustExit;                                                
};


struct UVehicleAIUserComponent_ServerExitVehicle_Params
{
};


struct UVehicleAIUserComponent_ServerEnterVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                
	unsigned char                                      SeatType;                                                 
};


struct UVehicleAIUserComponent_ServerChangeVehicleSeat_Params
{
	int                                                InSeatIndex;                                              
};


struct UVehicleAIUserComponent_MulticastExitVehicle_Params
{
};


struct UVehicleAIUserComponent_MulticastEnterVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                
	class ASTExtraPlayerCharacter*                     Pawn;                                                     
	bool                                               bSuccess;                                                 
	unsigned char                                      SeatType;                                                 
	int                                                SeatIndex;                                                
};


struct UVehicleAIUserComponent_MulticastChangeVehicleSeat_Params
{
	int                                                InSeatIndex;                                              
};


struct UVehicleCustomDamageEventComponent_OnVehicleHPFuelChanged_Params
{
	float                                              Hp;                                                       
	float                                              Fuel;                                                     
};


struct UVehicleStateInfoCollector_HandleGameModeStateChanged_Params
{
	struct FGameModeStateChangedParams                 Params;                                                   
};

}

