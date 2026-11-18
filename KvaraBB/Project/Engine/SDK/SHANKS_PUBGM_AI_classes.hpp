#pragma once


 
namespace SDK
{






class AAESpawner : public ASTSpawnerBase
{
public:
	struct FScriptMulticastDelegate                    OnUnitTakeDamage;                                         
	unsigned char                                      bEnableTeamAI : 1;                                        
	unsigned char                                      bEnableDormant : 1;                                       
	unsigned char                                      bWakeDormantOnNight : 1;                                  
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UClass*>                              TeamAIClasses;                                            
	int                                                SpawnerTeamID;                                            
	TEnumAsByte<EBotCategray>                          SpeciesCategory;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                SpawnerCampItemID;                                        
	int                                                GroupID;                                                  
	TArray<class UActorComponent*>                     TeamAIComponents;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AESpawner");
		return pStaticClass;
	}


	void SwitchTeamAI(bool bEnable);
	void OnUnitTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer);
	void OnUnitSpawned(class AActor* NewUnit, const struct FSTSpawnParam& SpawnParam, class ASTSpawnerBase* Spawner);
	void OnSpawnTimingRipe(bool IsRipe);
	void OnOwnedMobDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	bool IsWakeDormantOnNightEnabled();
	bool IsDormantEnabled();
	TEnumAsByte<EBotCategray> GetSpeciesCategory();
	float GetSpawnerTeamID();
	float GetSpawnerGroupID();
	int GenerateParamID(int ConfigID, int BaseParamID, const struct FSTSpawnParam& SpawnParam);
	void DeactivateSpawner();
	void BPOnUnitSpawned(class APawn* AIPawn, int ConfigID, const struct FSTSpawnParam& SpawnParam);
	void ActivateSpawner();
};




class UAESpawnSubsystem : public USTSpawnSubsystem
{
public:
	struct FScriptDelegate                             OnCustomSpawnPreCheck;                                    
	unsigned char                                      bPopQueAfterCustomPreCheckFailed : 1;                     
	unsigned char                                      UnknownData00[0x7];                                       
	struct FMonsterParams                              CacheMobParams;                                           
	struct FFakePlayerParams                           CacheFPParams;                                            
	struct FAIPlayerParams                             CacheAIPParams;                                           
	struct FVehicleParams                              CacheVehicleParams;                                       
	unsigned char                                      UnknownData01[0x4];                                       
	struct FDecoratorParams                            CacheDecoratorParams;                                     
	TMap<TEnumAsByte<EBotCategray>, int>               UnitsNumberThreshold;                                     
	unsigned char                                      UnknownData02[0xF8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AESpawnSubsystem");
		return pStaticClass;
	}


	class AActor* SpawnUnit(const struct FSTSpawnParam& SpawnParam);
	void RegisterSpawner(class ASTSpawnerBase* Spawner);
	bool PreCheck();
	void ModifyThreshold(TEnumAsByte<EBotCategray> Category, int Threshold);
	int GetUnitsNumByCategory(TEnumAsByte<EBotCategray> Category);
	int GetUnitConfigID(class AActor* Unit);
	TArray<class ASTSpawnerBase*> GetGroupedSpawners(int InGroupID);
	void EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam);
	void CleanQueue();
	bool CheckCategoryLimit(class ASTSpawnerBase* Spawner, int* AvailableBalance);
};




class UAIActionExecutionComponent : public ULuaActorComponent
{
public:
	class AController*                                 OwnerController;                                          
	class ANewFakePlayerAIController*                  MyAIController;                                           
	class ASTExtraPlayerController*                    MyPlayerController;                                       
	class ASTExtraBaseCharacter*                       MyPlayerPawn;                                             
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIActionExecutionComponent");
		return pStaticClass;
	}


	void UseItem(int ItemId, int WeaponSlot);
	void SwapAttachmentItem(int ItemId, int SourceWeaponSlot, int TargetWeaponSlot);
	void SetGrenadeLastSelectID(int WeaponId);
	void SetFocusRotation(float InPitch, float InYaw, float InRoll);
	void SetCurShootingPose();
	void RescueTarget(class ASTExtraBaseCharacter* RescueCharacter);
	void OpenFixedRateOfDoors(float fCheckRealPlayerDistance, float fOpenDoorDistance, float fOpenDoorRate);
	void OpenDoor();
	void OnPlayerRespawn(class AUAEPlayerController* PC);
	void OnFakePlayerRespawn();
	bool IsValid();
	bool IsFreeCamera();
	class APickUpWrapperActor* GetPickActorWithID(int UID);
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	class UBackpackComponent* GetBackpackComponent();
	void DropItem(int ItemId, int Count);
	void DoActionQuickMark(int actorUID, int ItemId, int CheckRange);
	void DoActionMoveNew(bool IsStop, bool IsRun, float DirectionX, float DirectionY, float DirectionZ, int SwimUpRate);
	void DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ);
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll);
	void DisuseItem(int ItemId, int WeaponSlot);
	void CloseDoor();
};




class UAIBasicStateInfoComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIBasicStateInfoComponent");
		return pStaticClass;
	}


	void OnItemStateChanged(const struct FVector& Location);
	class APickUpWrapperActor* GetPickActorWithID(int UID);
};




class UAIBehaviorAdapter_VehicleBase : public UVehicleComponent
{
public:
	float                                              LoseSightRadius;                                          
	float                                              QueryEnemyRange;                                          
	float                                              QueryEnemyAngle;                                          
	float                                              MinTimeLockTarget;                                        
	float                                              MaxRememberEnemySeconds;                                  
	float                                              PreciseHatredDecreaseSpeed;                               
	unsigned char                                      bCorrectAfterTurnOver : 1;                                
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CorrectAfterTurnOverCD;                                   
	float                                              FollowSegmentTolerance;                                   
	unsigned char                                      UnknownData01[0x4];                                       
	class UCurveFloat*                                 CurveThrottleInput;                                       
	float                                              MinAngleWhenPivotSteering;                                
	unsigned char                                      UnknownData02[0x4];                                       
	class UCurveFloat*                                 CurveThrottleRateWhenTurning;                             
	class UCurveFloat*                                 CurveSteeringInput;                                       
	bool                                               bUseBrakeWhenTurning;                                     
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              MinRequiredSteeringChange;                                
	float                                              MinLengthRateAlmostReach;                                 
	unsigned char                                      UnknownData04[0x4];                                       
	class UCurveFloat*                                 CurveBrakeAlmostReach;                                    
	float                                              SteeringThresholdUseBrake;                                
	float                                              SpeedThresholdUseBrake;                                   
	unsigned char                                      bBlockTest : 1;                                           
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              BlockTestingTime;                                         
	float                                              BlockSpeedThresholdKMH;                                   
	unsigned char                                      UnknownData06[0x4];                                       
	class UClass*                                      DeadInventoryBoxTemplate;                                 
	int                                                DropID;                                                   
	unsigned char                                      UnknownData07[0x4];                                       
	struct FName                                       WrapperBoxName;                                           
	class APlayerTombBox*                              DeadTombBox;                                              
	bool                                               bDebug;                                                   
	unsigned char                                      UnknownData08[0x3];                                       
	int                                                DebugLevel;                                               
	float                                              DebugInterval;                                            
	unsigned char                                      UnknownData09[0x4];                                       
	struct FString                                     BehaviorServiceDebugInfo;                                 
	unsigned char                                      UnknownData10[0x50];                                      
	class ASTExtraVehicleBase*                         OwnerVehicle;                                             
	unsigned char                                      bCacheMeshOnHit : 1;                                      
	unsigned char                                      UnknownData11[0x27];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIBehaviorAdapter_VehicleBase");
		return pStaticClass;
	}


	void Suicide();
	void RPC_Client_SetServiceDebugInfo(const struct FString& Info);
	void OnInit();
	void OnDeath(class AController* InstigatedBy);
	void OnAICPossessed(class AController* InController);
	float LuaCalculateHitRate(float Distance, float BaseHitRate);
	bool IsAlive();
	void HandleOnVehicleUnderAttack(class AController* EventInstigator, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser, float Damage, float OriginDamage);
	void HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState);
	void HandleOnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BroadcastServiceDebugInfo();
	void BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType);
};




class UAIBehaviorAdapter_Tank : public UAIBehaviorAdapter_VehicleBase
{
public:
	class UCurveFloat*                                 AimDurationCurve;                                         
	struct FVector2D                                   AimDurationDeviation;                                     
	float                                              ShootTurretCD;                                            
	float                                              BulletExplosionRange;                                     
	float                                              AimingLockRange;                                          
	float                                              AimingLockRangeWhenFiring;                                
	struct FVector2D                                   TurretAimRange;                                           
	unsigned char                                      bPredictEnemyMove : 1;                                    
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   TurretShootRange;                                         
	unsigned char                                      bAimingConstantLerp : 1;                                  
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              TurretAimingInterpConstantSpeed;                          
	float                                              TurretAimingInterpSpeed;                                  
	float                                              SimTurretAimingInterpConstantSpeed;                       
	float                                              TurretAimingErrorTolerance;                               
	unsigned char                                      bAlsoCheckArcLength : 1;                                  
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              ShootTargetLocationOffset;                                
	unsigned char                                      bTraceBlockShootTargetLocation : 1;                       
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                MaxTraceBlockTryTimes;                                    
	unsigned char                                      bResetTurretAfterDestroy : 1;                             
	unsigned char                                      bFailedAimingWhenTurretCollided : 1;                      
	unsigned char                                      UnknownData04[0x7];                                       
	TMap<float, float>                                 BaseHitRate;                                              
	float                                              ShootMGCD;                                                
	struct FVector2D                                   ShootMGDuration;                                          
	float                                              ShootMGInterval;                                          
	struct FVector2D                                   ShootUpDownRange;                                         
	struct FVector2D                                   ShootLeftRightRange;                                      
	struct FVector2D                                   ShootLeftRightRangeDistance;                              
	struct FVector2D                                   ShootTargetSpeedRange;                                    
	struct FVector2D                                   ShootTargetDistanceRangeDueToSpeed;                       
	struct FVector2D                                   MGShootRange;                                             
	unsigned char                                      bShouldMissOnPurpose : 1;                                 
	unsigned char                                      bCacheUsingMG : 1;                                        
	unsigned char                                      bCacheUsingTurret : 1;                                    
	unsigned char                                      UnknownData05[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIBehaviorAdapter_Tank");
		return pStaticClass;
	}


	bool UpdateTurretAimingTarget(const struct FVector& TargetLocation, float DeltaSeconds, bool FailedWhenCollided);
	bool ShootTurret();
	bool ShootMachineGun();
	void OnInit();
	void OnDeath(class AController* InstigatedBy);
	bool IsTurretLockTarget(const struct FVector& TargetLocation, float LockRadius);
	bool IsAlive();
	void HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState);
	void BroadcastTankShootWeapon(bool IsTurret);
};




class UAIPerceptionChildPickUpComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIPerceptionChildPickUpComponent");
		return pStaticClass;
	}


	void OnPickUpWrapperHideStateChange(class APickUpWrapperActor* PickUpActor, bool bHide);
};




class UAIPerceptionDynamicItemComponent : public ULuaActorComponent
{
public:
	TArray<struct FChildDynamicItem>                   ChildArray;                                               
	struct FScriptDelegate                             GetDynamicItemDurabilityDelegate;                         
	bool                                               CheckVisible;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UStaticMeshComponent*>                CheckVisibleMeshComponents;                               
	uint32_t                                           CustomUInt32State;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	TMap<uint32_t, float>                              CustomAttributeMap;                                       
	TMap<uint32_t, uint64_t>                           IntCustomAttributeMap;                                    
	unsigned char                                      UnknownData02[0x10];                                      
	bool                                               IsMovable;                                                
	bool                                               IsCheckVisAngle;                                          
	bool                                               IsFireSpreadingCalCenter;                                 
	bool                                               bEnableState;                                             
	bool                                               bIsDestructibleItem;                                      
	bool                                               bUseMeshMapping;                                          
	unsigned char                                      UnknownData03[0x7A];                                      
	class UPhotonDestructibleMeshComponent*            CachedDestructComp;                                       
	class UDamageableComponentBase*                    CachedDamageableComp;                                     
	class ASTExtraBaseCharacter*                       CachedCharacterOwner;                                     
	unsigned char                                      UnknownData04[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIPerceptionDynamicItemComponent");
		return pStaticClass;
	}


	void UpdateIntCustomAttributeValue(uint32_t InCustomAttributeID, uint64_t InValue, bool bRemove);
	void UpdateInAICell(bool bForceUpdate);
	void UpdateCustomAttributeValue(uint32_t InCustomAttributeID, float InValue, bool bRemove);
	void SetEnableState(bool bInEnable);
	void RemoveInAICell();
	void RemoveFromCache();
	void OnMeshAssetSet();
	uint32_t GetUniqueID(class AActor* DynamicItem);
	void GetIntCustomAttributeList(TArray<struct FIntAIAttribute>* OutIntCustomAttributeList);
	void GetCustomAttributeList(TArray<struct FAIAttribute>* OutCustomAttributeList);
};




class UAISoundCollectionComponent : public ULuaActorComponent
{
public:
	TMap<uint32_t, struct FCacheSoundState>            CacheStepSounds;                                          
	TMap<uint32_t, struct FCacheSoundState>            CacheWeaponSounds;                                        
	TMap<uint32_t, struct FCacheSoundState>            CacheVehicleSounds;                                       
	TMap<uint32_t, struct FCacheSoundState>            CacheGrenadeSounds;                                       
	unsigned char                                      UnknownData00[0x18];                                      
	float                                              ClearStepSoundTime;                                       
	float                                              ClearWeaponSoundTime;                                     
	float                                              ClearVehicleSoundTime;                                    
	float                                              ClearGrenadeSoundTime;                                    
	int                                                StepSoundMaxNum;                                          
	int                                                WeaponSoundMaxNum;                                        
	int                                                VehicleSoundMaxNum;                                       
	int                                                GrenadeSoundMaxNum;                                       
	class AController*                                 OwnerController;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AISoundCollectionComponent");
		return pStaticClass;
	}


	void OnCollectionHearSound(ESoundType SoundType, const struct FVector& InPos, class AActor* InSourceActor);
	void OnAISoundManagerHear(class AActor* InTargetActor, ESoundType SoundType, const struct FVector& InPos, class AActor* InSourceActor);
	TArray<struct FSoundState> GetCollectSoundInfo();
};




class UAIStateInfoComponentBase : public UAIBasicStateInfoComponent
{
public:
	class ASTExtraPlayerController*                    MyPlayerController;                                       
	int                                                SkipFrameConfig;                                          
	int                                                SkipFrameConfigSecond;                                    
	class AController*                                 OwnerController;                                          
	class ANewFakePlayerAIController*                  MyAIController;                                           
	class UAIActingComponent*                          AIActingComp;                                             
	class APawn*                                       MyOwnerPawn;                                              
	class ABattleRoyaleGameModeBase*                   MyGameMode;                                               
	TArray<struct FDamageSource>                       DamageSourcesInfoNew;                                     
	TMap<int, class APickUpWrapperActor*>              CacheAINearbyItem;                                        
	TArray<class ASTExtraBaseCharacter*>               CacheNearbyEnemies;                                       
	struct FCacheNearbyItemState                       CacheNearbyItemState;                                     
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     
	uint32_t                                           CacheModeMapId;                                           
	unsigned char                                      UnknownData00[0xC];                                       
	class UMLAISubSystem*                              MLAISubSystem;                                            
	class UAIStateInfoDataAsset*                       AIStateInfoDataAsset;                                     
	class UMLAIStateInfoManager*                       MLAIStateInfoManager;                                     
	class AAIWorldVolume*                              AIWorldVolume;                                            
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoComponentBase");
		return pStaticClass;
	}


	void QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingMaxRange, float FindBuildingMinRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange, int MaxWeedNum, float WeedRange, TArray<struct FItemStateData>* ItemStateDatas);
	void PrintCacheAINearbyItem();
	void OnPlayerRespawn(class AUAEPlayerController* PC);
	void OnFakePlayerRespawn();
	void OnAIStateRequestEnd();
	bool IsValid();
	bool IsAvailableNearbyItemType(const struct FItemDefineID& DefineID);
	bool IsAvailableBackpackItemType(const struct FItemDefineID& DefineID);
	bool HasPlayerAround();
	struct FVector GetViewForwardVector(class ACharacter* InCharacter);
	TArray<struct FSoundState> GetSoundInfo();
	struct FAIPlayerInteractInfo GetPlayerInteractInfo();
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	void GetNearbyItemState(class ASTExtraBaseCharacter* InPawn, bool* OutIsUseCacheItem, TArray<struct FItemStateData>* NearbyItems);
	uint32_t GetFrameNo();
	TArray<struct FDamageSource> GetDamageSourcesNew();
	void GetAIDestroyBulletProbInfo(TArray<struct FAIDestroyBulletProbInfo>* AIDestroyBulletProbInfoList);
	void ClearDamageSources();
};




class UAIStateInfoDataAsset : public UDataAsset
{
public:
	TMap<int, int>                                     ProgressSkillConfig;                                      
	TArray<int>                                        AvailableBackpackItemTypes;                               
	TMap<int, bool>                                    AvailableNearbyItemTypes;                                 
	TMap<int, int>                                     GrenadeTypeConfig;                                        
	TMap<int, int>                                     EquipmentItemIDMappingConfig;                             
	float                                              VisibleAngle;                                             
	struct FVector                                     HeadOffset;                                               
	float                                              NearbyEnemyRange;                                         
	float                                              FogWeatherRangeScale;                                     
	int                                                NearbyEnemyMaxNum;                                        
	bool                                               IsSearchNearItem;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                NearbyItemMaxNum;                                         
	int                                                NearbyMaxBoxNum;                                          
	float                                              NearbyAirDropBoxRangeInner;                               
	float                                              NearbyAirDropBoxRangeOuter;                               
	float                                              NearbyDeathBoxRange;                                      
	float                                              NearbyPickUpWrapperRange;                                 
	float                                              CacheNearbyItemRangeCoefficient;                          
	int                                                NearbyMaxTreasureChestNum;                                
	float                                              NearbyTreasureChestRange;                                 
	int                                                NearbyMaxWeedNum;                                         
	float                                              NearbyWeedRange;                                          
	float                                              NearbyFindBuildingMaxRange;                               
	float                                              NearbyFindBuildingMinRange;                               
	float                                              ItemStateChangedRange;                                    
	bool                                               IsItemVisiable;                                           
	bool                                               IsUseItemSpotLoc;                                         
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              NearbyObstacleRange;                                      
	float                                              NearbyThrownRange;                                        
	float                                              NearbySmokeRange;                                         
	int                                                NearbyThrownMaxNum;                                       
	unsigned char                                      UnknownData02[0x4];                                       
	int                                                NearbyDoorMaxNum;                                         
	float                                              NearbyVehicleRange;                                       
	int                                                NearbyVehicleMaxNum;                                      
	float                                              NearbyBulletHoleRange;                                    
	int                                                NearbyBulletHoleMaxNum;                                   
	float                                              NearbyDynamicItemsRange;                                  
	float                                              NearbyDynamicItemsVisibleAngle;                           
	int                                                NearbyDynamicItemsMaxNum;                                 
	float                                              NearbyMonsterRange;                                       
	int                                                NearbyMonsterMaxNum;                                      
	float                                              NearbyDigLandScapeActorRange;                             
	int                                                NearbyDigLandScapeActorMaxNum;                            
	bool                                               bIgnoreTreeAIWhenNoPlayerAround;                          
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              IgnoreTreeAIRadius;                                       
	bool                                               UseBodyTPPCamera;                                         
	unsigned char                                      UnknownData04[0x7];                                       
	TArray<int>                                        IgnoredMonsterIDs;                                        
	TArray<EAvatarSlotType>                            AvailableAvatarSlotTypes;                                 
	bool                                               bCollectMercenaryAvatarInfo;                              
	bool                                               bCollectMercenaryVehicleState;                            
	bool                                               bCollectMercenaryPlayerHitInfo;                           
	bool                                               bCollectMercenaryDestroyBulletProbInfo;                   
	bool                                               bCollectMercenaryEquipment;                               
	unsigned char                                      UnknownData05[0x3];                                       
	uint32_t                                           nCanMLAIBuildAttributeID;                                 
	unsigned char                                      UnknownData06[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoDataAsset");
		return pStaticClass;
	}

};




class UStateInfoCollectorBase : public UObject
{
public:
	uint32_t                                           CollectType;                                              
	bool                                               HaveGloabalData;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	class UAIStateInfoDataAsset*                       AIStateInfoDataAsset;                                     
	class UMLAIStateInfoManager*                       MLAIStateInfoManager;                                     
	class UMLAISubSystem*                              MLAISubSystem;                                            
	class ABattleRoyaleGameMode*                       CurGameMode;                                              
	class AAIWorldVolume*                              AIWorldVolume;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.StateInfoCollectorBase");
		return pStaticClass;
	}

};




class UBaseMLAIStateInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FMLBaseAIStateInfo>          LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FMLBaseAIStateInfo>          CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FMLBaseAIStateInfo>          CacheAllPlayersInfo;                                      
	struct FDiffMLBaseAllPlayersInfo                   CacheDiffAllPlayersInfoGeneral;                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BaseMLAIStateInfoCollector");
		return pStaticClass;
	}

};




class UBaseStateInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FBaseModAIStateInfo>         LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FBaseModAIStateInfo>         CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FBaseModAIStateInfo>         CacheAllPlayersInfo;                                      
	struct FDiffBaseModAllPlayersInfo                  CacheDiffAllPlayersInfoGeneral;                           
	struct FBaseModGlobalGameState                     CacheGlobalGameState;                                     
	struct FBaseModGlobalGameState                     LastGlobalGameState;                                      
	struct FDiffBaseModGlobalGameState                 DiffGlobalGameStateGeneral;                               
	TMap<uint32_t, uint32_t>                           DiffStateInfoKeyMap;                                      
	unsigned char                                      UnknownData00[0x50];                                      
	unsigned char                                      UnknownData01[0x50];                                      
	unsigned char                                      UnknownData02[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BaseStateInfoCollector");
		return pStaticClass;
	}


	void RemoveBackpackItemUpdatedMap(uint32_t PlayerKey, bool AllRemove);
	void OnBackpackItemListUpdated(uint32_t PlayerKey);
	void AddBackpackItemListUpdatedDelegate(class UBackpackComponent* InBackpackComp, uint32_t InPlayerKey);
};




class UBRBaseStateInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FBRBaseAIStateInfo>          LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FBRBaseAIStateInfo>          CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FBRBaseAIStateInfo>          CacheAllPlayersInfo;                                      
	struct FDiffBRBaseAllPlayersInfo                   CacheDiffAllPlayersInfoGeneral;                           
	struct FBRBaseGlobalGameState                      CacheGlobalGameState;                                     
	struct FBRBaseGlobalGameState                      LastGlobalGameState;                                      
	struct FDiffBRBaseGlobalGameState                  DiffGlobalGameStateGeneral;                               
	unsigned char                                      UnknownData00[0x30];                                      
	class UCircleMgrComponent*                         CircleMgr;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BRBaseStateInfoCollector");
		return pStaticClass;
	}

};




class UBTD_CheckObstacleInCustomRange : public UBTDecorator_BlackboardBase
{
public:
	EObstacleDetectionSpace                            ObstacleDetectionType;                                    
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBlackboardKeySelector                      BBK_OriginLoc;                                            
	unsigned char                                      bDrawDebug : 1;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                DrawSegments;                                             
	struct FVector                                     SpaceSize;                                                
	float                                              GravityScale;                                             
	float                                              CustomMaxHeight;                                          
	unsigned char                                      UnknownData02[0x4];                                       
	struct FBlackboardKeySelector                      BBK_CapsuleSweepFinalLoc;                                 
	float                                              CapsuleScaleFactor;                                       
	unsigned char                                      UnknownData03[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTD_CheckObstacleInCustomRange");
		return pStaticClass;
	}

};




class UBTDecorator_AttrObserver : public UBTDecorator_BlackboardBase
{
public:
	TArray<struct FAIAttrObserver>                     AttrObserverList;                                         
	unsigned char                                      bEnableObserver : 1;                                      
	bool                                               bUseBlackboardKey;                                        
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_AttrObserver");
		return pStaticClass;
	}

};




class UBTDecorator_BBObjectPersistDuration : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ObservedBlackboardKey;                                    
	float                                              RequiredDuration;                                         
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_BBObjectPersistDuration");
		return pStaticClass;
	}

};




class UBTDecorator_BlackboardValueCheck : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      StrategyKey;                                              
	unsigned char                                      EnumValue;                                                
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_BlackboardValueCheck");
		return pStaticClass;
	}

};




class UBTDecorator_CheckAreaID : public UBTDecorator_BlackboardBase
{
public:
	TArray<int>                                        AreaIDs;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckAreaID");
		return pStaticClass;
	}

};




class UBTDecorator_CheckDSSwitchOpen : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckDSSwitchOpen");
		return pStaticClass;
	}

};




class UBTDecorator_CheckEnvironment : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BBKTarget;                                                
	bool                                               bCheckInWater;                                            
	bool                                               bCheckInHouse;                                            
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckEnvironment");
		return pStaticClass;
	}

};




class UBTDecorator_CheckFlyingStatus : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckFlyingStatus");
		return pStaticClass;
	}

};




class UBTDecorator_CheckInOcclusionPose : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckInOcclusionPose");
		return pStaticClass;
	}

};




class UBTDecorator_CheckRescueTimes : public UBTDecorator_BlackboardBase
{
public:
	EAIAttrCompareType                                 CompareOperation;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                RescueTimesThreshold;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckRescueTimes");
		return pStaticClass;
	}

};




class UBTDecorator_CheckShootingPose : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_CheckShootingPose");
		return pStaticClass;
	}

};




class UBTDecorator_DistanceCheck : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      CenterActorBlackBoardKey;                                 
	struct FBlackboardKeySelector                      TargetActorBlackBoardKey;                                 
	TEnumAsByte<ECompareLengthType>                    CompareOperation;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Distance;                                                 
	struct FBlackboardKeySelector                      CustomCheckDistanceBlackBoardKey;                         
	TEnumAsByte<EDistanceCheckType>                    DistanceCheckType;                                        
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_DistanceCheck");
		return pStaticClass;
	}

};




class UBTDecorator_DoesDistanceSatisfy : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	bool                                               bCustomSrcLoc;                                            
	bool                                               bCompareInXY;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_DoesDistanceSatisfy");
		return pStaticClass;
	}

};




class UBTDecorator_GameModeCheck : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_GameModeCheck");
		return pStaticClass;
	}

};




class UBTDecorator_GeneralLineTrace : public UBTDecorator
{
public:
	TArray<TEnumAsByte<ECollisionChannel>>             traceObjectTypes;                                         
	EAIDecoratorGeneralLineTraceType                   lineTraceType;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ForwardTestForwardOffset;                                 
	float                                              ForwardTestHeightOffset;                                  
	bool                                               bIgnoreOwner;                                             
	bool                                               bFromSelfToTarget;                                        
	unsigned char                                      UnknownData01[0x2];                                       
	struct FBlackboardKeySelector                      BBKTargetActor;                                           
	bool                                               bOnlyTickInverse;                                         
	bool                                               bUseSingleTrace;                                          
	unsigned char                                      UnknownData02[0x6];                                       
	TArray<class UClass*>                              IgnoreActorsClass;                                        
	bool                                               bDebug;                                                   
	unsigned char                                      UnknownData03[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_GeneralLineTrace");
		return pStaticClass;
	}

};




class UBTDecorator_HasOccludeBuildActor : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_HasOccludeBuildActor");
		return pStaticClass;
	}

};




class UBTDecorator_HasPawnState : public UBTDecorator_BlackboardBase
{
public:
	TArray<EPawnState>                                 AIStates;                                                 
	bool                                               IsMatchAll;                                               
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_HasPawnState");
		return pStaticClass;
	}

};




class UBTDecorator_HasPlayerAIState : public UBTDecorator
{
public:
	TArray<EPawnState>                                 AIStates;                                                 
	bool                                               IsMatchAll;                                               
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_HasPlayerAIState");
		return pStaticClass;
	}

};




class UBTDecorator_HasStaticOccludePos : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_HasStaticOccludePos");
		return pStaticClass;
	}

};




class UBTDecorator_HasTag : public UBTDecorator_BlackboardBase
{
public:
	TArray<struct FName>                               Tags;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_HasTag");
		return pStaticClass;
	}

};




class UBTDecorator_IsCastingSkillID : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsCastingSkillID");
		return pStaticClass;
	}

};




class UBTDecorator_IsEnemyInBuilding : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsEnemyInBuilding");
		return pStaticClass;
	}

};




class UBTDecorator_IsInSafetyCircle : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      CheckTargetBlackboardKey;                                 
	EInSafetyCircleType                                IsCheackByCircleType;                                     
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsInSafetyCircle");
		return pStaticClass;
	}

};




class UBTDecorator_IsMovementMode : public UBTDecorator_BlackboardBase
{
public:
	TEnumAsByte<EMovementMode>                         MovementMode;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<TEnumAsByte<EMovementMode>>                 MovementModeArray;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsMovementMode");
		return pStaticClass;
	}

};




class UBTDecorator_IsOcclusionExist : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsOcclusionExist");
		return pStaticClass;
	}

};




class UBTDecorator_IsOcclusionSafe : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BBKeyTargetEnemy;                                         
	float                                              CheckRadiusXY;                                            
	float                                              CheckRadiusZ;                                             
	float                                              OcclusionPadAngle;                                        
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsOcclusionSafe");
		return pStaticClass;
	}

};




class UBTDecorator_IsSkillReady : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsSkillReady");
		return pStaticClass;
	}

};




class UBTDecorator_IsWayPointNeedRotate : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_IsWayPointNeedRotate");
		return pStaticClass;
	}

};




class UBTDecorator_ItemNumberCheck : public UBTDecorator
{
public:
	int                                                ItemNum;                                                  
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_ItemNumberCheck");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_CheckJump : public UBTDecorator_BlackboardBase
{
public:
	int                                                RandomReachablePointRadius;                               
	struct FVector2D                                   JumpHighRange;                                            
	struct FVector2D                                   JumpLowRange;                                             
	int                                                JumpStartOffsetZ;                                         
	int                                                JumpHighThreshold;                                        
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_CheckJump");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_CheckJumpToLowDirect : public UBTDecorator_BlackboardBase
{
public:
	float                                              JumpToLowThreshold;                                       
	float                                              CheckDistance;                                            
	float                                              JumpToLowSpeed;                                           
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_CheckJumpToLowDirect");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_CheckObstacle : public UBTDecorator_BlackboardBase
{
public:
	int                                                CheckDistance;                                            
	int                                                BackDistance;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_CheckObstacle");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_CloseEnough : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableDistance;                                       
	bool                                               bCheckDistanceIn2D;                                       
	bool                                               bReachTestIncludesAgentRadius;                            
	bool                                               bReachTestIncludesGoalRadius;                             
	bool                                               bCheckInTick;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_CloseEnough");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_HasAIState : public UBTDecorator
{
public:
	TArray<EBPAIState>                                 AdditionalStates;                                         
	EMobHasAIStateLogic                                LogicOp;                                                  
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_HasAIState");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_IsTargetAbove : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableDistance;                                       
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_IsTargetAbove");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_LineTrace : public UBTDecorator_BlackboardBase
{
public:
	TArray<TEnumAsByte<ECollisionChannel>>             traceObjectTypes;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_LineTrace");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_LinkCheckJumpWall : public UBTDecorator_BlackboardBase
{
public:
	int                                                KeepDistance;                                             
	float                                              LineTraceHeightOffset;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_LinkCheckJumpWall");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_Once : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_Once");
		return pStaticClass;
	}

};




class UBTDecorator_Mob_SearchArrived : public UBTDecorator_BlackboardBase
{
public:
	float                                              DefaultAcceptableDistance;                                
	bool                                               bUseSearchArriveDistanceBlackboard;                       
	bool                                               bCheckDistanceIn2D;                                       
	unsigned char                                      UnknownData00[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Mob_SearchArrived");
		return pStaticClass;
	}

};




class UBTDecorator_NearTargetLoc : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_NearTargetLoc");
		return pStaticClass;
	}

};




class UBTDecorator_NewCoolDown : public UBTDecorator_Cooldown
{
public:
	bool                                               DoNotCoolDownWhenSubNodeFailed;                           
	bool                                               bEnableInitializeCoolDown;                                
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_NewCoolDown");
		return pStaticClass;
	}

};




class UBTDecorator_NewSatisfyAttkDist : public UBTDecorator
{
public:
	bool                                               bIsInversed;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ExtraDistance;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_NewSatisfyAttkDist");
		return pStaticClass;
	}

};




class UBTDecorator_PreCheckLaunchMove : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      KeyLaunchToTarget;                                        
	float                                              CustomDestDirAngle;                                       
	float                                              CustomDestDistance;                                       
	bool                                               UsePawnHalfHeightAsOffsetOfTargetLocation;                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     OffsetOfTargetLocation;                                   
	struct FVector2D                                   JumpSpeedRange;                                           
	float                                              JumpSpeedInterval;                                        
	TEnumAsByte<ESuggestProjVelocityTraceOption>       JumpProjTraceType;                                        
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              OverrideGravityZ;                                         
	float                                              CollisionRadius;                                          
	bool                                               bFavorHighArc;                                            
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData02[0x6];                                       
	struct FBlackboardKeySelector                      OutJumpVelocityBlackboardKey;                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_PreCheckLaunchMove");
		return pStaticClass;
	}

};




class UBTDecorator_Probability : public UBTDecorator
{
public:
	bool                                               bUseDifficultyLevel;                                      
	unsigned char                                      UnknownData00[0x7];                                       
	TMap<int, float>                                   DifficultyProbabilityCfg;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_Probability");
		return pStaticClass;
	}

};




class UAIQueryShapeDesc_Base : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIQueryShapeDesc_Base");
		return pStaticClass;
	}

};




class UAIQueryShapeDesc_Cylinder : public UAIQueryShapeDesc_Base
{
public:
	struct FVector                                     CenterOffset;                                             
	float                                              RadiusOutside;                                            
	float                                              RadiusInside;                                             
	float                                              Height;                                                   
	float                                              Angle;                                                    
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIQueryShapeDesc_Cylinder");
		return pStaticClass;
	}

};




class UBTDecorator_QueryTarget : public UBTDecorator
{
public:
	class UAIQueryShapeDesc_Base*                      QueryShape;                                               
	unsigned char                                      bUsePawnLocationAsCenter : 1;                             
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                AcceptPlayerCount;                                        
	unsigned char                                      bSavePawnCount : 1;                                       
	unsigned char                                      UnknownData01[0x7];                                       
	struct FBlackboardKeySelector                      nSavePawnCount;                                           
	struct FBlackboardKeySelector                      CenterLocationFromBBD;                                    
	struct FVector                                     TargetAnchorOffset;                                       
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_QueryTarget");
		return pStaticClass;
	}

};




class UBTDecorator_RandomStrategy : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      StrategyKey;                                              
	TMap<EBornLandAIStrategyType, float>               StrategyWeight;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_RandomStrategy");
		return pStaticClass;
	}

};




class UBTDecorator_SatisfyAttkDist : public UBTDecorator
{
public:
	bool                                               bIsInversed;                                              
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_SatisfyAttkDist");
		return pStaticClass;
	}

};




class UBTDecorator_SatisfyAttkDistWithWeapon : public UBTDecorator
{
public:
	bool                                               bIsInversed;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ExtraDistance;                                            
	TMap<TEnumAsByte<EWeaponTypeNew>, float>           WeaponTypeRange;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_SatisfyAttkDistWithWeapon");
		return pStaticClass;
	}

};




class UBTDecorator_TargetEnemyLandedTimeCheck : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_TargetEnemyLandedTimeCheck");
		return pStaticClass;
	}

};




class UBTDecorator_TargetHasBuff : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BBKTarget;                                                
	TArray<int>                                        BuffIDs;                                                  
	bool                                               bRequireAll;                                              
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_TargetHasBuff");
		return pStaticClass;
	}

};




class UBTDecorator_WeaponTypeCheck : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTDecorator_WeaponTypeCheck");
		return pStaticClass;
	}

};




class UBTService_AdvancedShooting : public UBTService
{
public:
	float                                              ShootGunDeviationAngle;                                   
	struct FVector2D                                   RandomShootFreqRange;                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBlackboardKeySelector                      ReloadBlackBoardKey;                                      
	bool                                               bSetCanSeeTargetFlag;                                     
	bool                                               bUseTargetEnemyCfg;                                       
	bool                                               bNeedCheckBullets;                                        
	unsigned char                                      UnknownData01[0x1];                                       
	struct FVector2D                                   ShootUpDownRange;                                         
	float                                              TargetWidth;                                              
	struct FVector2D                                   ShootLeftRightRange;                                      
	struct FVector2D                                   ShootLeftRightRangeDistance;                              
	struct FVector2D                                   ShootTargetSpeedRange;                                    
	struct FVector2D                                   ShootTargetDistanceRangeDueToSpeed;                       
	bool                                               bForceUseAIControllerRotation;                            
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              HitRateLerpSpeed;                                         
	bool                                               bUseLerpHitRate;                                          
	bool                                               bMissOnPurpose;                                           
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              ScaleForHitPart;                                          
	bool                                               bStopShootingWhenCannotSee;                               
	bool                                               bEnableShootProbabilityCompensate;                        
	unsigned char                                      UnknownData04[0x6];                                       
	class UCurveFloat*                                 LowSpeedScaleShootProbabilityCurve;                       
	bool                                               bEnableNoEnemyFastPath;                                   
	bool                                               bShowDebugLine;                                           
	unsigned char                                      UnknownData05[0x2];                                       
	float                                              LineLifeTime;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_AdvancedShooting");
		return pStaticClass;
	}

};




class UBTService_CheckAttackTarget : public UBTService
{
public:
	float                                              EquipWeaponSensedRadius;                                  
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_CheckAttackTarget");
		return pStaticClass;
	}

};




class UBTService_CheckInAIBehaviorRegion : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyIsOutOfMaxDistance;                                  
	struct FBlackboardKeySelector                      BBKeySpawnPoint;                                          
	bool                                               bClearEnemyTargetWhenOutOfMaxDist;                        
	bool                                               bUseAIMaxMoveDistanceVolume;                              
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              HeightTestOffset;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_CheckInAIBehaviorRegion");
		return pStaticClass;
	}

};




class UBTService_CheckMaxDistanceFromSpawnPoint : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyIsOutOfMaxDistance;                                  
	struct FBlackboardKeySelector                      BBKeySpawnPoint;                                          
	bool                                               bClearEnemyTargetWhenOutOfMaxDist;                        
	bool                                               bUseAIMaxMoveDistanceVolume;                              
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              HeightTestOffset;                                         
	float                                              HeightTestZOffset;                                        
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_CheckMaxDistanceFromSpawnPoint");
		return pStaticClass;
	}

};




class UBTService_CheckMaxDistanceFromTargetPoint : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyIsOutOfMaxDistance;                                  
	struct FBlackboardKeySelector                      BBKeyTargetPoint;                                         
	bool                                               bClearEnemyTargetWhenOutOfMaxDist;                        
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_CheckMaxDistanceFromTargetPoint");
		return pStaticClass;
	}

};




class UBTService_ChooseEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeySearchEnemyMethodIndex;                              
	float                                              MaxRememberEnemyTimeInSeconds;                            
	float                                              MaxRememberLastAttackedMeTimeInSeconds;                   
	float                                              MaxTraceLastAttackedMeDistance;                           
	float                                              MinTimeWhenCannotSeeTarget;                               
	float                                              MinTimeLockTarget;                                        
	float                                              SensedRadius;                                             
	float                                              EquipWeaponSensedRadius;                                  
	float                                              EquipWeaponNightSensedRadius;                             
	float                                              EmergencyRadius;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FWeaponType2Range>                   WeaponType2Ranges;                                        
	TArray<struct FWeaponTypeToRange>                  DefaultWeaponTypeToRanges;                                
	TMap<EWeatherStatusType, struct FWeatherToRange>   WeatherToRange;                                           
	TMap<EWeatherStatusType, EWeatherStatusType>       WeatherTypeToWeatherRange;                                
	float                                              PVESensedRadius;                                          
	float                                              FinalCircleSensedRate;                                    
	float                                              UnderGroundSensedRate;                                    
	float                                              DarkAreaSensedRate;                                       
	float                                              FinalCircleAIPriorityDistSqRate;                          
	bool                                               bEnableWarning;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              WarningCD;                                                
	bool                                               bEnableSmokingVisibilityCheck;                            
	TEnumAsByte<ECollisionChannel>                     SmokingVisibilityCheckChannel;                            
	unsigned char                                      UnknownData02[0x2];                                       
	struct FName                                       SmokingVisibilityCheckTag;                                
	bool                                               bEnablePeekShootingCheck;                                 
	bool                                               bEnablePeekShootingCheckAtOcclusion;                      
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              PeekShootingCheckAtOcclusionOfOcclusionRadius;            
	TArray<EAIShootingPose>                            PeekShootingCheckArray_Stand;                             
	TArray<EAIShootingPose>                            PeekShootingCheckArray_Crouch;                            
	bool                                               DoNotAttackNearDeathEnemyFirst;                           
	bool                                               bExcludeBeCarriedBackEnemy;                               
	bool                                               bIgnoreAIWhenNoPlayerAround;                              
	unsigned char                                      UnknownData04[0x1];                                       
	float                                              IgnoreAIRadius;                                           
	bool                                               bClearEnemyWhenSameTeam;                                  
	bool                                               bSenseZombie;                                             
	bool                                               bCheckZombieTeam;                                         
	bool                                               bSelectEnemyInSafety;                                     
	bool                                               bShowDebugInfo;                                           
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              DebugInfoLife;                                            
	float                                              DebugRadius;                                              
	bool                                               bIsBornLandFindEnemy;                                     
	unsigned char                                      UnknownData06[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseEnemy");
		return pStaticClass;
	}

};




class UBTService_ChooseEnemyByShape : public UBTService_ChooseEnemy
{
public:
	TArray<struct FWeaponTypeToRangeWithPawnState>     WeaponTypeToRangeWithPawnStates;                          
	bool                                               bUseVisibilityTrace;                                      
	bool                                               bNotValidWeaponRangeForeTrue;                             
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseEnemyByShape");
		return pStaticClass;
	}

};




class UBTService_ChooseEnemySingleTraining : public UBTService_ChooseEnemy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseEnemySingleTraining");
		return pStaticClass;
	}

};




class UBTService_ChooseFightbackEnemy : public UBTService
{
public:
	float                                              EquipWeaponSensedRadius;                                  
	float                                              EmergencyRadius;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseFightbackEnemy");
		return pStaticClass;
	}

};




class UBTService_ChooseMonsterEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyMonsterTarget;                                       
	TArray<int>                                        SupportedMonsterIDs;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseMonsterEnemy");
		return pStaticClass;
	}

};




class UBTService_ChooseTeammate : public UBTService
{
public:
	struct FBlackboardKeySelector                      OutTeammateBlackboardKey;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ChooseTeammate");
		return pStaticClass;
	}

};




class UBTService_CJChooseEnemy : public UBTService
{
public:
	TArray<struct FUpdateItemInterval>                 UpdateItemIntervalList;                                   
	struct FBlackboardKeySelector                      OutTargetEnemyActor;                                      
	struct FBlackboardKeySelector                      OutIsCanNotSeeTarget;                                     
	float                                              MaxRememberLastAttackedMeTimeInSeconds;                   
	int                                                MaxTraceLastAttackedMeDistance;                           
	TArray<struct FEnemyInfo>                          EnemyInfoList;                                            
	float                                              MinTimeLockTarget;                                        
	bool                                               bEnableEarlyLockReturnFastPath;                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MinTimeWhenCannotSeeTarget;                               
	int                                                SensedRadius;                                             
	int                                                EquipWeaponSensedRadius;                                  
	bool                                               bUseFanChoose;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	TArray<struct FSightFanInfo>                       FanInfoList;                                              
	bool                                               bFindNearestEnemyPawn;                                    
	unsigned char                                      UnknownData02[0x7];                                       
	struct FBlackboardKeySelector                      OutNearestEnemyPawnVisible;                               
	struct FBlackboardKeySelector                      OutNearestEnemyPawnInVisible;                             
	float                                              NearestEnemyVisibleMemoryTime;                            
	int                                                SensedNearestEnemyVisibleRadius;                          
	int                                                SensedNearestEnemyInVisibleRadius;                        
	unsigned char                                      UnknownData03[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_CJChooseEnemy");
		return pStaticClass;
	}

};




class UBTService_ClearTrouble : public UBTService
{
public:
	uint32_t                                           UnreachablePointsToBeInTrouble;                           
	unsigned char                                      UnknownData00[0x4];                                       
	class UClass*                                      TestPathFilterClass;                                      
	struct FInTroubleTeleportConfig                    TeleportCfg;                                              
	bool                                               bShowDebugPoint;                                          
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ClearTrouble");
		return pStaticClass;
	}

};




class UBTService_Cruising : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Cruising");
		return pStaticClass;
	}

};




class UBTService_DebugInfo : public UBTService
{
public:
	struct FString                                     Info;                                                     
	bool                                               bShowControllerName;                                      
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DebugInfo");
		return pStaticClass;
	}


	struct FString GetInfo();
};




class UBTService_DeliverControl : public UBTService
{
public:
	TArray<struct FDeliverControlRatingConfig>         RatingConfig;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DeliverControl");
		return pStaticClass;
	}

};




class UBTService_DetectVehicle : public UBTService
{
public:
	float                                              DetectionRange;                                           
	float                                              DetectionAngle;                                           
	struct FBlackboardKeySelector                      BBKeySensedVehicle;                                       
	struct FBlackboardKeySelector                      BBKeyResult;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DetectVehicle");
		return pStaticClass;
	}

};




class UBTService_DetectVehicleRisk : public UBTService
{
public:
	float                                              DetectionRange;                                           
	float                                              SpeedThreshold;                                           
	struct FBlackboardKeySelector                      SensedRiskyVehicle;                                       
	struct FBlackboardKeySelector                      RunawayPosition;                                          
	struct FBlackboardKeySelector                      HasNearbyRiskyVehicle;                                    
	struct FBlackboardKeySelector                      IsRunningAway;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DetectVehicleRisk");
		return pStaticClass;
	}

};




class UBTService_DistantJudge : public UBTService
{
public:
	struct FBlackboardKeySelector                      WatchTargetBlackBoardKey;                                 
	TArray<struct FAIDistantJudgeNoftify>              DistantJudges;                                            
	bool                                               ResetModifyBBData;                                        
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_DistantJudge");
		return pStaticClass;
	}

};




class UBTService_FightDecisionSystem : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_FightDecisionSystem");
		return pStaticClass;
	}

};




class UBTService_FlyingChooseEnemy : public UBTService
{
public:
	float                                              SensedRadius;                                             
	float                                              SensedAngle;                                              
	EFlyingChooseEnemySensedAngleMode                  SensedAngleMode;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FRotator                                    SensedAngleRotationOffset;                                
	float                                              MinTimeLockTarget;                                        
	float                                              MinTimeWhenCannotSeeTarget;                               
	float                                              MaxRememberEnemyTimeInSeconds;                            
	bool                                               bUseNewSetCurEnemy;                                       
	bool                                               bExcludeNearDeathEnemy;                                   
	bool                                               bUseHatred;                                               
	unsigned char                                      UnknownData01[0x1];                                       
	float                                              PreciseHatredDecreaseSpeed;                               
	bool                                               bClearPreciseHatredCacheWhenForgetEnemy;                  
	unsigned char                                      UnknownData02[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_FlyingChooseEnemy");
		return pStaticClass;
	}

};




class UBTService_FlyingTowerDefenseChooseEnemy : public UBTService_FlyingChooseEnemy
{
public:
	float                                              SwitchToPlayerThreshold;                                  
	float                                              SwitchBackThreshold;                                      
	float                                              HatredDecreaseSpeed;                                      
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBlackboardKeySelector                      DefendTargetKey;                                          
	struct FBlackboardKeySelector                      AttackingPlayerFlagKey;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_FlyingTowerDefenseChooseEnemy");
		return pStaticClass;
	}

};




class UBTService_Focus : public UBTService_DefaultFocus
{
public:
	float                                              FocusPointOffset_TargetCrouch;                            
	float                                              FocusPointOffset_TargetProne;                             
	float                                              FocusPointOffset_TargetStand;                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Focus");
		return pStaticClass;
	}

};




class UBTService_HealthCheck : public UBTService
{
public:
	struct FBlackboardKeySelector                      HealthChangeBlackBoardKey;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_HealthCheck");
		return pStaticClass;
	}

};




class UBTService_LookAround : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVector2D                                   RotationAngle;                                            
	struct FVector2D                                   WaitTimeWhenStop;                                         
	float                                              AcceptToleranceInDegree;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_LookAround");
		return pStaticClass;
	}

};




class UBTService_Mob_AddHp : public UBTService
{
public:
	EMobAddHPServiceType                               addHPType;                                                
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_AddHp");
		return pStaticClass;
	}

};




class UBTService_Mob_AdvancedMovementDetector : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_AdvancedMovementDetector");
		return pStaticClass;
	}

};




class UBTService_Mob_AutoDestroy : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_AutoDestroy");
		return pStaticClass;
	}

};




class UBTService_Mob_CheckLocation : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_CheckLocation");
		return pStaticClass;
	}

};




class UBTService_Mob_CheckLoseTarget : public UBTService
{
public:
	unsigned char                                      bCheckNoPlayerNearby : 1;                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CheckNoPlayerRange;                                       
	unsigned char                                      bCheckNearbyPlayerBeforeSearch : 1;                       
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              CheckNearbyPlayerBeforeSearchRange;                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_CheckLoseTarget");
		return pStaticClass;
	}

};




class UBTService_Mob_CheckPathExist : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_CheckPathExist");
		return pStaticClass;
	}

};




class UBTService_Mob_ChooseEnemy : public UBTService
{
public:
	float                                              MinTimeLockTarget;                                        
	float                                              MinTimeWhenCannotSeeTarget;                               
	float                                              SensedRadius;                                             
	EAISearchEnemyType                                 searchType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SensedAngle;                                              
	bool                                               SenseEnemyWithLineTrace;                                  
	bool                                               bUseHeadLineTrace;                                        
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              PreciseHatredDecreaseSpeed;                               
	bool                                               SensedRadiusAdvanceInNight;                               
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              LoseSightRadius;                                          
	bool                                               DontAttackWhenTargetInWater;                              
	bool                                               bEnableWarning;                                           
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              WarningCD;                                                
	float                                              AttackVehicleInRadius;                                    
	bool                                               AttackVehicleInRadiusEnabled;                             
	EAISearchEnemyType                                 searchVehicleType;                                        
	unsigned char                                      UnknownData04[0x6];                                       
	TArray<ESTExtraVehicleShapeType>                   IgnoreVehicleTypes;                                       
	struct FName                                       IgnoreTargetIfHasTag;                                     
	bool                                               bSelectEnemyInSafety;                                     
	unsigned char                                      bDoNotAttackNearDeathEnemyFirst : 1;                      
	unsigned char                                      bIgnoreNearDeathEnemy : 1;                                
	unsigned char                                      UnknownData05[0xE];                                       
	class ASTExtraSimpleCharacter*                     ControlledMobPawn;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_ChooseEnemy");
		return pStaticClass;
	}

};




class UBTService_Mob_ChooseEnemyByRule : public UBTService_Mob_ChooseEnemy
{
public:
	bool                                               bSenseMonster;                                            
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_ChooseEnemyByRule");
		return pStaticClass;
	}

};




class UBTService_Mob_ChooseEnemyBySingleRule : public UBTService_Mob_ChooseEnemy
{
public:
	EAISearchEnemySingleRule                           SearchEnemySingleRule;                                    
	EAISearchEnemyEntityType                           SearchEnemyEntityType;                                    
	unsigned char                                      UnknownData00[0x6];                                       
	struct FBlackboardKeySelector                      BBKeySearchEnemyMethodIndex;                              
	unsigned char                                      bRunBaseChooseEnemy : 1;                                  
	unsigned char                                      bForceUpdateTarget : 1;                                   
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_ChooseEnemyBySingleRule");
		return pStaticClass;
	}

};




class UBTService_Mob_DetectionEnemy : public UBTService_Mob_ChooseEnemy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_DetectionEnemy");
		return pStaticClass;
	}

};




class UBTService_Mob_Hearing : public UBTService
{
public:
	float                                              MaxTimeLockWhenNoNextSound;                               
	ENoiseSearchType                                   searchType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              AcceptableDistance;                                       
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_Hearing");
		return pStaticClass;
	}

};




class UBTService_Mob_MoveBlockTimer : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_MoveBlockTimer");
		return pStaticClass;
	}

};




class UBTService_Mob_OpenDoor : public UBTService
{
public:
	float                                              AutoOpenDoorInterval;                                     
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_OpenDoor");
		return pStaticClass;
	}

};




class UBTService_Mob_SearchState : public UBTService
{
public:
	float                                              DefaultSearchDuration;                                    
	float                                              DefaultSearchArriveDistance;                              
	bool                                               bClearSearchStateOnCease;                                 
	bool                                               bRefreshLastKnownLocationBySound;                         
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     SearchLocationProjectExtent;                              
	float                                              SearchLocationReachableFallbackRadius;                    
	int                                                SearchLocationReachableFallbackSteps;                     
	bool                                               bDrawDebugSearchLocationInEditor;                         
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              DebugSearchLocationRadius;                                
	float                                              DebugSearchLocationLifeTime;                              
	float                                              DebugSearchLocationThickness;                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_SearchState");
		return pStaticClass;
	}

};




class UBTService_Mob_TowerDefenseChooseEnemy : public UBTService_Mob_ChooseEnemy
{
public:
	bool                                               bEnableTowerDefenseTargeting;                             
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SwitchToPlayerThreshold;                                  
	float                                              SwitchBackThreshold;                                      
	unsigned char                                      UnknownData01[0x4];                                       
	struct FBlackboardKeySelector                      DefendTargetKey;                                          
	struct FBlackboardKeySelector                      AttackingPlayerFlagKey;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Mob_TowerDefenseChooseEnemy");
		return pStaticClass;
	}

};




class UBTService_ModifyBlackboardValue : public UBTService
{
public:
	struct FBlackboardKeySelector                      EnterModifyBlackboardKey;                                 
	struct FString                                     EnterSetValue;                                            
	bool                                               bExitModifyBlackboardKey;                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBlackboardKeySelector                      ExitModifyBlackboardKey;                                  
	struct FString                                     ExitSetValue;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_ModifyBlackboardValue");
		return pStaticClass;
	}

};




class UBTService_OccupyHandler : public UBTService
{
public:
	struct FBlackboardKeySelector                      OutCurOccupyPointActor;                                   
	struct FBlackboardKeySelector                      OutIsOccupying;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_OccupyHandler");
		return pStaticClass;
	}

};




class UBTService_OpenDoor : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_OpenDoor");
		return pStaticClass;
	}

};




class UBTService_QueryNearestTarget : public UBTService
{
public:
	struct FBlackboardKeySelector                      OutNearByPlayer;                                          
	struct FBlackboardKeySelector                      OutHasNearByPlayer;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_QueryNearestTarget");
		return pStaticClass;
	}

};




class UBTService_QueryPlayerHoldingWeapon : public UBTService
{
public:
	struct FBlackboardKeySelector                      OutHasPlayerHoldingWeapon;                                
	struct FBlackboardKeySelector                      OutPlayerWhichHoldingWeapon;                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_QueryPlayerHoldingWeapon");
		return pStaticClass;
	}

};




class UBTService_RescueHandler : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_RescueHandler");
		return pStaticClass;
	}

};




class UBTService_SensedEnemy : public UBTService
{
public:
	float                                              SensedRadius;                                             
	float                                              EquipWeaponSensedRadius;                                  
	float                                              EquipWeaponNightSensedRadius;                             
	float                                              EmergencyRadius;                                          
	TMap<int, float>                                   AISensedEnemyPoseRatio;                                   
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SensedEnemy");
		return pStaticClass;
	}

};




class UBTService_SenseGrenade : public UBTService
{
public:
	TMap<EAISenseGrenadeType, bool>                    GrenadeSenseEnable;                                       
	TArray<struct FBPAISenseGrenadeDistanceConfig>     SenseDistanceConfig;                                      
	TMap<EAISenseGrenadeType, struct FAISenseGrenadeClassConfig> GrenadeClasses;                                           
	TArray<struct FAISenseGrenadeBBKeyInfo>            GrenadeBBKeyConfig;                                       
	TArray<TEnumAsByte<ECollisionChannel>>             GrenadeCollisionChannels;                                 
	struct FBlackboardKeySelector                      BBKeyHasBeenFlashed;                                      
	int                                                FlashBombBuffID;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBlackboardKeySelector                      BBKeyHasSensedGrenade;                                    
	float                                              StopVelocityThreshold;                                    
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SenseGrenade");
		return pStaticClass;
	}

};




class UBTService_Shooting : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Shooting");
		return pStaticClass;
	}

};




class UBTService_SightHearingChooseEnemy : public UBTService
{
public:
	float                                              SightAngle;                                               
	float                                              HearingRadius;                                            
	float                                              GunfireRadius;                                            
	float                                              FootstepRadius;                                           
	float                                              WalkRadius;                                               
	float                                              CrouchProneRadius;                                        
	bool                                               bListenWalk;                                              
	bool                                               bListenRun;                                               
	bool                                               bListenJump;                                              
	bool                                               bListenFire;                                              
	float                                              GunfireDetectWindow;                                      
	bool                                               bListenCrouchAndProne;                                    
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MinTargetLockTime;                                        
	float                                              MaxTargetRetainTime;                                      
	bool                                               bOnlyReportHearing;                                       
	bool                                               bUseNewSetCurEnemy;                                       
	bool                                               bOnlyDetectRealPlayers;                                   
	bool                                               bSearchEnable;                                            
	bool                                               bEnableWarning;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              WarningCD;                                                
	bool                                               bDrawDebugSearchLocationInEditor;                         
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              DebugSearchLocationRadius;                                
	float                                              DebugSearchLocationLifeTime;                              
	float                                              DebugSearchLocationThickness;                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SightHearingChooseEnemy");
		return pStaticClass;
	}

};




class UBTService_SimpleCheckBehindEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      IsFoundBehindEnemyKey;                                    
	float                                              SensedRadius;                                             
	float                                              SensedBehindAngle;                                        
	float                                              SensedHeightDiff;                                         
	bool                                               DontAttackWhenTargetInWater;                              
	bool                                               SenseEnemyWithLineTrace;                                  
	bool                                               bUseHeadLineTrace;                                        
	unsigned char                                      UnknownData00[0x1];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SimpleCheckBehindEnemy");
		return pStaticClass;
	}

};




class UBTService_SimpleShooting : public UBTService
{
public:
	struct FVector2D                                   ShootUpDownRange;                                         
	struct FVector2D                                   RandomShootFreqRange;                                     
	bool                                               bShowDebugLine;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              LineLifeTime;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_SimpleShooting");
		return pStaticClass;
	}

};




class UBTService_Tank_RotateTurret : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyAimingTarget;                                        
	struct FBlackboardKeySelector                      BBKeyAimingFinished;                                      
	float                                              AimingLockRange;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	class UAIBehaviorAdapter_Tank*                     OwnerAdapter;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Tank_RotateTurret");
		return pStaticClass;
	}

};




class UBTService_Tank_Shooting : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyShootingCD;                                          
	struct FBlackboardKeySelector                      BBKeyAimingFailed;                                        
	class UAIBehaviorAdapter_Tank*                     OwnerAdapter;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_Tank_Shooting");
		return pStaticClass;
	}

};




class UBTService_TargetAngleCheck : public UBTService
{
public:
	float                                              FocusDegree;                                              
	float                                              DistanceSqr;                                              
	struct FBlackboardKeySelector                      FocusState;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_TargetAngleCheck");
		return pStaticClass;
	}

};




class UBTService_TargetEnemyHP : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_TargetEnemyHP");
		return pStaticClass;
	}

};




class UBTService_TurnAround : public UBTService
{
public:
	struct FBlackboardKeySelector                      OutTatget;                                                
	float                                              TurnAroundVelocity;                                       
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_TurnAround");
		return pStaticClass;
	}

};




class UBTService_UseSkill : public UBTService
{
public:
	float                                              Cooldown;                                                 
	float                                              CastSkillDistance;                                        
	struct FBlackboardKeySelector                      SkillTargetBlackBoardKey;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_UseSkill");
		return pStaticClass;
	}

};




class UBTService_VH_ChooseEnemy : public UBTService
{
public:
	TArray<class UClass*>                              IgnoreActorsClass;                                        
	class UAIBehaviorAdapter_VehicleBase*              OwnerAdapter;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_VH_ChooseEnemy");
		return pStaticClass;
	}

};




class UBTService_WarningPerception : public UBTService
{
public:
	float                                              GunfireHearRadius;                                        
	float                                              GunfireWarningRise;                                       
	float                                              GunfireDetectWindow;                                      
	float                                              WalkHearRadius;                                           
	float                                              WalkWarningRise;                                          
	float                                              RunHearRadius;                                            
	float                                              RunWarningRise;                                           
	float                                              CrouchHearRadius;                                         
	float                                              CrouchWarningRise;                                        
	float                                              VisionAngle;                                              
	float                                              VisionRadius;                                             
	float                                              VisionWarningRise;                                        
	bool                                               bIgnoreVisibility;                                        
	bool                                               bUseHeadLocationForLoS;                                   
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              WarningDecayProtectTime;                                  
	float                                              WarningDecaySpeed;                                        
	float                                              WarningMaxValue;                                          
	bool                                               bIgnoreAI;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              WarningInitialHatredValue;                                
	bool                                               bSetTargetEnemyDirectlyOnWarningTriggered;                
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_WarningPerception");
		return pStaticClass;
	}

};




class UBTService_WeaponHandler : public UBTService
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_WeaponHandler");
		return pStaticClass;
	}

};




class UBTService_WeatherTimeCount : public UBTService
{
public:
	struct FBlackboardKeySelector                      StartCurrentWeatherCountDownBlackboardKey;                
	struct FBlackboardKeySelector                      IsCurrentWeatherBlackboardKey;                            
	EWeatherStatusType                                 NewWeatherStatusType;                                     
	unsigned char                                      UnknownData00[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTService_WeatherTimeCount");
		return pStaticClass;
	}

};




class UBTTask_AddItem : public UBTTaskNode
{
public:
	TArray<struct FTaskAddItem>                        ItemDatas;                                                
	unsigned char                                      bItemIDUseBBK : 1;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBlackboardKeySelector                      BlackboardKey;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AddItem");
		return pStaticClass;
	}

};




class UBTTask_AdvancedWait : public UBTTask_Wait
{
public:
	TMap<int, struct FDifficultyTimeConfig>            DifficultyTimeCfg;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AdvancedWait");
		return pStaticClass;
	}

};




class UBTTask_AdvFindOcclusionPoint : public UBTTask_BlackboardBase
{
public:
	float                                              SearchRadius;                                             
	float                                              UseLastPointRadius;                                       
	struct FBlackboardKeySelector                      BBKeyOcclusionLocation;                                   
	bool                                               bDebug;                                                   
	bool                                               bChoosePointByEnemy;                                      
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              CirclePainThreshold;                                      
	bool                                               DoNotUseCurrentOcclusionFirst;                            
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              CurrentOcclusionRadius;                                   
	TArray<EAIAdvFindOcclusionPointPoseType>           AcceptableOcclusionTypeArray;                             
	bool                                               bUsePointNearSelfCompareToEnemy;                          
	bool                                               bUseNavMeshDistance;                                      
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              MaxNavMeshSearchDistance;                                 
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod  searchBestOcclusionMethod;                                
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              OcclusionPointChooseZFactor;                              
	float                                              OcclusionPointChooseBushFactor;                           
	bool                                               ChooseAttackableOcclusionFirst;                           
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              ChooseAttackableOcclusionFactor;                          
	float                                              OcclusionPadAngle_Normal;                                 
	float                                              OcclusionPadAngle_Aggressive;                             
	bool                                               ChooseAttackableOcclusionWithLineTrace;                   
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              SelfStandHalfHeight;                                      
	bool                                               ChooseTagOcclusionEnable;                                 
	unsigned char                                      UnknownData06[0x3];                                       
	struct FString                                     OcclusionTagForChosen;                                    
	bool                                               bIgnorePossibleAttackableOcclusion;                       
	unsigned char                                      UnknownData07[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AdvFindOcclusionPoint");
		return pStaticClass;
	}

};




class UBTTask_AnimalFindDirectedPoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVector2D                                   AngleRange;                                               
	float                                              TraceHeightOffset;                                        
	uint32_t                                           TryFindLocNum;                                            
	bool                                               bDoWaterTest;                                             
	bool                                               bDoNavmeshProjectTest;                                    
	unsigned char                                      UnknownData01[0x2];                                       
	class UClass*                                      ProjectFilterClass;                                       
	bool                                               bDoLimitFindPointArea;                                    
	unsigned char                                      UnknownData02[0x7];                                       
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      
	struct FBlackboardKeySelector                      OutputBlackboardKey;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AnimalFindDirectedPoint");
		return pStaticClass;
	}

};




class UBTTask_AnimalFindRandomPoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	float                                              TraceHeightOffset;                                        
	uint32_t                                           TryFindLocNum;                                            
	bool                                               bDoNavmeshProjectTest;                                    
	unsigned char                                      UnknownData01[0x3];                                       
	class UClass*                                      ProjectFilterClass;                                       
	bool                                               bDoOnlyStaticTrace;                                       
	bool                                               bDoWaterTest;                                             
	bool                                               bDoLimitFindPointArea;                                    
	unsigned char                                      UnknownData02[0x1];                                       
	float                                              CollisionExcludeAngle;                                    
	bool                                               bLimitResultInForwardAngle;                               
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              LimitInForwardAngle;                                      
	struct FBlackboardKeySelector                      CenterBlackboardKey;                                      
	struct FBlackboardKeySelector                      OutputBlackboardKey;                                      
	bool                                               bDebugDraw;                                               
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              DebugDrawPointTime;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AnimalFindRandomPoint");
		return pStaticClass;
	}

};




class UBTTask_AnimalMove : public UBTTask_MoveTo
{
public:
	bool                                               bOpenCollisionDetect;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CollisionDetectAdvancedTime;                              
	float                                              CollisionDetectFreq;                                      
	bool                                               bUseSweep;                                                
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	bool                                               bRandomAcceptableRadius;                                  
	unsigned char                                      UnknownData01[0x1];                                       
	struct FVector2D                                   RandomAcceptableRadiusRange;                              
	bool                                               MoveWithOutPathFinding;                                   
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              MoveFailReviseLocationInterval;                           
	float                                              MoveFailLocationSearchRadius;                             
	bool                                               bAsyncExecuteTask;                                        
	bool                                               bShowTargetLoc;                                           
	bool                                               bShowDetectLine;                                          
	unsigned char                                      UnknownData03[0x1];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AnimalMove");
		return pStaticClass;
	}

};




class UBTTask_AnimalTeleport : public UBTTask_BlackboardBase
{
public:
	float                                              RangeMin;                                                 
	float                                              RangeMax;                                                 
	bool                                               bDoOnlyStaticTrace;                                       
	bool                                               OnlyTeleportToLand;                                       
	bool                                               NotTeleportToHouse;                                       
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              OriginCheckRadius;                                        
	float                                              DestCheckRadius;                                          
	float                                              TraceHeightOffset;                                        
	float                                              TargetLocZOffset;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FString>                             ValidTraceActorIncludeName;                               
	int                                                TryFindLocNum;                                            
	bool                                               bForceSuccess;                                            
	unsigned char                                      UnknownData02[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_AnimalTeleport");
		return pStaticClass;
	}

};




class UBTTask_BioVH_MoveTo : public UBTTask_MoveTo
{
public:
	float                                              ModifyMoveSpeed;                                          
	unsigned char                                      bCheckBlock : 1;                                          
	EBioVHMoveType                                     MoveType;                                                 
	unsigned char                                      bFaceToTarget : 1;                                        
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              FaceToTargetToleranceAngle;                               
	float                                              MaxDurationStayStuck;                                     
	float                                              StuckSpeed;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	struct FBlackboardKeySelector                      BBKey_OutBlocked;                                         
	struct FBlackboardKeySelector                      BBKey_OutCannotReach;                                     
	float                                              MaxExecutionDuration;                                     
	bool                                               IsCheckStuckUseMovePenetration;                           
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                MoveStuckFrameCount;                                      
	unsigned char                                      UnknownData03[0x4];                                       
	class ABioVehicleBase*                             BioVH;                                                    
	class ABioVehicleAIController*                     BioVHAIC;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_BioVH_MoveTo");
		return pStaticClass;
	}

};




class UBTTask_ChangeWalkSpeed : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      KeyDefaultMaxAcceleration;                                
	bool                                               IsEnableAcceleration;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxAcceleration;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ChangeWalkSpeed");
		return pStaticClass;
	}

};




class UBTTask_ClearBlackboardData : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ClearBlackboardData");
		return pStaticClass;
	}

};




class UBTTask_ClearDelivery : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ClearDelivery");
		return pStaticClass;
	}

};




class UBTTask_ConvertActorToRotaion : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      ActorBlackboardKey;                                       
	struct FBlackboardKeySelector                      ToRotationKey;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ConvertActorToRotaion");
		return pStaticClass;
	}

};




class UBTTask_CopyBlackboardData : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_CopyBlackboardData");
		return pStaticClass;
	}

};




class UBTTask_CrowdMove : public UBTTask_BlackboardBase
{
public:
	float                                              StopMoveRadius;                                           
	float                                              UpdateDestIntervel;                                       
	bool                                               bOpenPredictMovement;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              PredictMovementTime;                                      
	float                                              ForceFacingTargetDist;                                    
	float                                              TimeLimit;                                                
	bool                                               bIsHalfFrame;                                             
	bool                                               bSmoothLocation;                                          
	bool                                               bSmoothRotation;                                          
	unsigned char                                      UnknownData01[0x1];                                       
	float                                              SmoothLocationTime;                                       
	float                                              SmoothRotationTime;                                       
	bool                                               bOpenExceptCheck;                                         
	bool                                               bOpenDebug;                                               
	bool                                               bSetRotation;                                             
	bool                                               bOpenSeparetionAdjust;                                    
	float                                              TempMoveLocationRadius;                                   
	float                                              UpdateTempLocIntervel;                                    
	EAIMovePose                                        MoveType;                                                 
	unsigned char                                      UnknownData02[0x7];                                       
	class UClass*                                      FilterClass;                                              
	bool                                               bEnableCustomSpeed;                                       
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              CustomSpeedValue;                                         
	float                                              HeightOffsetForPathFinding;                               
	unsigned char                                      UnknownData04[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_CrowdMove");
		return pStaticClass;
	}

};




class UBTTask_CrowdMoveToOcclusion : public UBTTask_CrowdMove
{
public:
	float                                              UseLastPointRadius;                                       
	float                                              NearDistanceValue;                                        
	float                                              PointInNearDistanceValue;                                 
	bool                                               bChoosePointByEnemy;                                      
	bool                                               bForceStand;                                              
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              CirclePainThreshold;                                      
	unsigned char                                      UnknownData01[0x4];                                       
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_CrowdMoveToOcclusion");
		return pStaticClass;
	}

};




class UBTTask_DealNextBuildingPathNode : public UBTTask_BlackboardBase
{
public:
	float                                              findSpotXYOffset;                                         
	float                                              findSpotZOffset;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_DealNextBuildingPathNode");
		return pStaticClass;
	}

};




class UBTTask_ShortDistanceMove : public UBTTask_BlackboardBase
{
public:
	EAIMovePose                                        MoveType;                                                 
	EAIMoveType                                        MovePathType;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                SampleNumber;                                             
	struct FVector2D                                   ControllPoint1;                                           
	struct FVector2D                                   ControllPoint2;                                           
	struct FVector2D                                   DirectionAngleRange;                                      
	struct FVector2D                                   MoveTargetDistRange;                                      
	struct FVector2D                                   ExecutionDuration;                                        
	float                                              RePlanTime;                                               
	bool                                               AlwaysSuccess;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              AcceptRadius;                                             
	bool                                               StopOnOverlap;                                            
	bool                                               UsePathfinding;                                           
	bool                                               AllowPartialPath;                                         
	bool                                               ProjectDestinationToNavigation;                           
	float                                              ExceptionRandomRadius;                                    
	bool                                               DebugDrawPath;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	class UNavCostModifier*                            NavCostModifier;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ShortDistanceMove");
		return pStaticClass;
	}

};




class UBTTask_Escape : public UBTTask_ShortDistanceMove
{
public:
	float                                              TryLineTestZOffset;                                       
	float                                              TryLineTestDistance;                                      
	int                                                MaxTrySampleTimes;                                        
	float                                              MinTrySampleDistance;                                     
	float                                              MinTryEscapeDistance;                                     
	float                                              EscapeStopDistance;                                       
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Escape");
		return pStaticClass;
	}

};




class UBTTask_MagicMove : public UBTTask_MoveTo
{
public:
	float                                              TimeLimit;                                                
	bool                                               ForceSuccess;                                             
	bool                                               MoveWithOutPathFinding;                                   
	bool                                               GotoExceptionWhenFailed;                                  
	unsigned char                                      UnknownData00[0x1];                                       
	class UNavCostModifier*                            NavCostModifier;                                          
	unsigned char                                      bForceStandWhenAborted : 1;                               
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MagicMove");
		return pStaticClass;
	}

};




class UBTTask_FindAndPickItem : public UBTTask_MagicMove
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindAndPickItem");
		return pStaticClass;
	}

};




class UBTTask_FindAndPickupEquip : public UBTTask_MoveTo
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindAndPickupEquip");
		return pStaticClass;
	}

};




class UBTTask_FindCustomActorWithTag : public UBTTask_BlackboardBase
{
public:
	float                                              SphereRadius;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<TEnumAsByte<EObjectTypeQuery>>              QueryObjectType;                                          
	struct FName                                       ActorTag;                                                 
	class UClass*                                      ActorClassFilter;                                         
	float                                              IgnoreDistance;                                           
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindCustomActorWithTag");
		return pStaticClass;
	}

};




class UBTTask_FindFlyingHoverPoint : public UBTTaskNode
{
public:
	TArray<EST3DNavigationLocProjectStrategy>          LocProjectStrategyArray;                                  
	struct FBlackboardKeySelector                      BBKeyHoverLoc1;                                           
	struct FBlackboardKeySelector                      BBKeyHoverLoc2;                                           
	struct FBlackboardKeySelector                      BBKeyHoverLoc3;                                           
	struct FBlackboardKeySelector                      BBKeyHoverLoc4;                                           
	EFindFlyingHoverPointOneSideShapeOType             OneSideShapeOType;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   OneSideShapeOForwardLength;                               
	struct FVector2D                                   OneSideShapeOSideDirectionLength;                         
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindFlyingHoverPoint");
		return pStaticClass;
	}

};




class UBTTask_FindNearestTombBoxTask : public UBTTask_BlackboardBase
{
public:
	float                                              PlayerBackpackSearchRadius;                               
	float                                              AirDropSearchRadius;                                      
	float                                              AirDropBoxRadius;                                         
	float                                              MaxPainFindInBlueCircle;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindNearestTombBoxTask");
		return pStaticClass;
	}

};




class UBTTask_FindOcclusionPoint : public UBTTask_BlackboardBase
{
public:
	float                                              SearchRadius;                                             
	bool                                               bOcclusionSaveToBlackBoard;                               
	unsigned char                                      UnknownData00[0x3];                                       
	struct FBlackboardKeySelector                      BBKeyOcclusionLocation;                                   
	bool                                               bDebug;                                                   
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindOcclusionPoint");
		return pStaticClass;
	}

};




class UBTTask_FindRandPosInOccupyPt : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      OutOccupyPointActor;                                      
	struct FBlackboardKeySelector                      OutOccupyPos;                                             
	int                                                MaxTryFindTime;                                           
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindRandPosInOccupyPt");
		return pStaticClass;
	}

};




class UBTTask_FindTargetPTInHardPT : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      InHardPTKey;                                              
	struct FBlackboardKeySelector                      OutTargetPTKey;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindTargetPTInHardPT");
		return pStaticClass;
	}

};




class UBTTask_FindWayPoint : public UBTTask_BlackboardBase
{
public:
	float                                              InPointRadius;                                            
	unsigned char                                      MaxRandIterTimes;                                         
	bool                                               bRandUseNav;                                              
	bool                                               bDebugDraw;                                               
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              DebugDrawPointTime;                                       
	float                                              FindPointRange;                                           
	float                                              RandomTargetLocRadius;                                    
	unsigned char                                      UnknownData01[0x4];                                       
	struct FBlackboardKeySelector                      BBK_CurrentWayPoint;                                      
	bool                                               bFindNextInRange;                                         
	unsigned char                                      bUseNotTeamedWayPoints : 1;                               
	unsigned char                                      UnknownData02[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindWayPoint");
		return pStaticClass;
	}

};




class UBTTask_FindWayPointByIDList : public UBTTask_BlackboardBase
{
public:
	bool                                               bDebugDraw;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              DebugDrawPointTime;                                       
	float                                              FindPointRange;                                           
	unsigned char                                      UnknownData01[0x4];                                       
	struct FBlackboardKeySelector                      BBK_CurrentWayPoint;                                      
	TArray<int>                                        SpecificIDList;                                           
	EFindWayPointType                                  FindWayPointType;                                         
	unsigned char                                      bUseNotTeamedWayPoints : 1;                               
	unsigned char                                      UnknownData02[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FindWayPointByIDList");
		return pStaticClass;
	}

};




class UBTTask_FinishOrder : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FinishOrder");
		return pStaticClass;
	}

};




class UBTTask_FlyAlongSpline : public UBTTaskNode
{
public:
	class UClass*                                      SplineActorClass;                                         
	struct FVector                                     SplineActorLocation;                                      
	struct FRotator                                    SplineActorRotation;                                      
	struct FBlackboardKeySelector                      BBKeySplineLocation;                                      
	struct FBlackboardKeySelector                      BBKeySplineActor;                                         
	float                                              ReachAcceptableDistance;                                  
	float                                              FullPathDuration;                                         
	float                                              MaxFlyDuration;                                           
	float                                              MaxProtectStationaryDuration;                             
	bool                                               bVelocityUpdateUseLerp;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              VelocityUpdateLerpSpeed;                                  
	bool                                               bAutoFitSplineWithHorizonalCircle;                        
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              CircleRadius;                                             
	int                                                AutoFitFactor;                                            
	float                                              SplineCurveTangentLength;                                 
	float                                              SplineCurveFirstTwoTangentLength;                         
	bool                                               bStopWhenReadyToAttack;                                   
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              ExecuteDurationAtLeast;                                   
	struct FVector2D                                   AttackDistRangeToTarget;                                  
	bool                                               bCompareInXY;                                             
	unsigned char                                      UnknownData03[0x3];                                       
	struct FBlackboardKeySelector                      BBKeyTargetActor;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FlyAlongSpline");
		return pStaticClass;
	}

};




class UBTTask_FlyTo : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyFlyToTarget;                                         
	float                                              FlySpeedRatio;                                            
	bool                                               bUse3DNavigation;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              OverrideAgentRadius;                                      
	bool                                               bEnableFlyCurveSimulate;                                  
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              FlyCurvatureFactor;                                       
	float                                              FlyCurveSimulationMinAngle;                               
	int                                                FlyCurveSimulationLineSegemnts;                           
	EFlyToPathfindingThread                            PathfindingThread;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	TArray<EST3DNavigationPathfindingPartialStrategy>  PartialStrategyArray;                                     
	bool                                               bBrakingBeforeDestination;                                
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              DistanceOfBrakingBeforeDestination;                       
	float                                              FlySpeedRatioOfBrakingBeforeDestination;                  
	bool                                               bDrawDebugPath;                                           
	unsigned char                                      UnknownData04[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_FlyTo");
		return pStaticClass;
	}

};




class UBTTask_ForceIdle : public UBTTaskNode
{
public:
	float                                              RandomDeviation;                                          
	bool                                               bRandIdle;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                IdleBlendSpaceValue;                                      
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        ValidIdleBSValues;                                        
	struct FBlackboardKeySelector                      KeyIdleTime;                                              
	struct FBlackboardKeySelector                      KeyIdleBlendSpaceValue;                                   
	bool                                               bFinishResetIdle;                                         
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ForceIdle");
		return pStaticClass;
	}

};




class UBTTask_GeneralActivateNextWayPoint : public UBTTaskNode
{
public:
	float                                              HasReachedRadius;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBlackboardKeySelector                      CurrentWayPointActor;                                     
	struct FBlackboardKeySelector                      LastWayPointActor;                                        
	bool                                               ReachedEndNoNextWayPointRetFalse;                         
	bool                                               bFindNextInRange;                                         
	bool                                               bSendEvent;                                               
	unsigned char                                      UnknownData01[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralActivateNextWayPoint");
		return pStaticClass;
	}

};




class UBTTask_GeneralAIWayPointPathSelector : public UBTTaskNode
{
public:
	struct FName                                       NameOfWayPointSelector;                                   
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralAIWayPointPathSelector");
		return pStaticClass;
	}

};




class UBTTask_GeneralExecuteEventsOfWayPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                
	bool                                               bEnableWait;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	class UCurveFloat*                                 WaitTimeCurveFloat;                                       
	float                                              FixedWaitTime;                                            
	bool                                               bDirectRotateAIOrRotateToControllerRotation;              
	unsigned char                                      UnknownData01[0x3];                                       
	TArray<struct FWayPointEvent>                      CacheWayPointEvents;                                      
	class AAIEventWayPointActor*                       CurrentEventWayPointActorPtr;                             
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralExecuteEventsOfWayPoint");
		return pStaticClass;
	}

};




class UBTTask_GeneralExecuteEventsOfWayPointNew : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralExecuteEventsOfWayPointNew");
		return pStaticClass;
	}

};




class UBTTask_GeneralFindAttackablePosition : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyTargetEnemy;                                         
	struct FBlackboardKeySelector                      BBKeyFoundAttackablePosition;                             
	unsigned char                                      bReachableTest : 1;                                       
	unsigned char                                      bFilterOutBehaviorRegion : 1;                             
	unsigned char                                      bUseNavSystem : 1;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxAttackableRadius;                                      
	float                                              ScanMinOuterCircleRadius;                                 
	float                                              ScanRingWidth;                                            
	int                                                MaxIterations;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FGeneralRandLocationRetryRule>       retryRules;                                               
	float                                              HeightTestOffset;                                         
	bool                                               bUseCapsuleTrace;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              TraceCapsuleScale;                                        
	bool                                               bOnlyLandscape;                                           
	unsigned char                                      UnknownData03[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralFindAttackablePosition");
		return pStaticClass;
	}

};




class UBTTask_GeneralFindEscapePosition : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyEscapeTarget;                                        
	struct FBlackboardKeySelector                      BBKeyFoundEscapePosition;                                 
	TArray<struct FGeneralRandLocationRetryRule>       retryRules;                                               
	struct FVector2D                                   EscapeDistanceRange;                                      
	bool                                               bEnableEscapePointReachableTest;                          
	bool                                               bEnableMaxNavMeshDistanceCheck;                           
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              fMaxNavMeshDistance;                                      
	bool                                               bNoPartialPath;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              HeightTestOffset;                                         
	bool                                               bDebug;                                                   
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralFindEscapePosition");
		return pStaticClass;
	}

};




class UBTTask_GeneralFindRandomPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKey_OutPoint;                                           
	int                                                MaxTryTimes;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBlackboardKeySelector                      BBKey_BasePoint;                                          
	struct FBlackboardKeySelector                      BBKey_BaseRadiusRange;                                    
	struct FBlackboardKeySelector                      BBKey_BaseAngleRange;                                     
	struct FVector2D                                   RandomRange;                                              
	struct FVector2D                                   RandomAngle;                                              
	TArray<struct FVector2D>                           RandomAngleExtra;                                         
	unsigned char                                      bFilterBuilding : 1;                                      
	unsigned char                                      bFilterWater : 1;                                         
	unsigned char                                      bReachableTest : 1;                                       
	unsigned char                                      bFilterOutBehaviorRegion : 1;                             
	unsigned char                                      bFindSpecialSurface : 1;                                  
	unsigned char                                      bUseBlackboardRange : 1;                                  
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              
	unsigned char                                      bUseNavmesh : 1;                                          
	unsigned char                                      UnknownData01[0x5];                                       
	struct FName                                       SpecificNaVName;                                          
	unsigned char                                      bTraceBlock : 1;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              SweepCapsuleScale;                                        
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              MaxLocationTraceHeightZ;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralFindRandomPoint");
		return pStaticClass;
	}

};




class UBTTask_GeneralSendEventOfEventWayPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      CurrentEventWayPointActor;                                
	struct FBlackboardKeySelector                      EventName;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralSendEventOfEventWayPoint");
		return pStaticClass;
	}

};




class UBTTask_GeneralStrategyMove : public UBTTask_BlackboardBase
{
public:
	struct FVector2D                                   DirectionAngleRange;                                      
	struct FVector2D                                   MoveTargetDistRange;                                      
	struct FVector2D                                   ExecutionDuration;                                        
	float                                              RePlanTime;                                               
	bool                                               AlwaysSuccess;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              AcceptRadius;                                             
	bool                                               StopOnOverlap;                                            
	bool                                               UsePathfinding;                                           
	bool                                               AllowPartialPath;                                         
	bool                                               ProjectDestinationToNavigation;                           
	float                                              ExceptionRandomRadius;                                    
	bool                                               bCanMoveWhenNoTarget;                                     
	bool                                               bCheckWallPass;                                           
	bool                                               DebugDrawPath;                                            
	unsigned char                                      UnknownData01[0x1];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralStrategyMove");
		return pStaticClass;
	}

};




class UBTTask_GeneralTriggerSkillEvent : public UBTTaskNode
{
public:
	int                                                SkillID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     EventName;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GeneralTriggerSkillEvent");
		return pStaticClass;
	}

};




class UBTTask_GetClosestPointFromVehicle : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      OutClosestPoint;                                          
	struct FBlackboardKeySelector                      OutHasClosestPoint;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GetClosestPointFromVehicle");
		return pStaticClass;
	}

};




class UBTTask_GetRandomAttackablePosition : public UBTTask_BlackboardBase
{
public:
	float                                              AttackableRadius;                                         
	float                                              KeepDistanceFromTarget;                                   
	float                                              RandomMoveRadius;                                         
	int                                                RetryTimes;                                               
	bool                                               bFilterWater;                                             
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_GetRandomAttackablePosition");
		return pStaticClass;
	}

};




class UBTTask_LaunchMove : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      JumpVelocityBlackboardKey;                                
	bool                                               bUseCustomDestLocation;                                   
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBlackboardKeySelector                      KeyLaunchToTarget;                                        
	float                                              CustomDestDirAngle;                                       
	float                                              CustomDestDistance;                                       
	bool                                               UsePawnHalfHeightAsOffsetOfTargetLocation;                
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector                                     OffsetOfTargetLocation;                                   
	bool                                               bDrawDebugLine;                                           
	unsigned char                                      UnknownData02[0x3];                                       
	struct FVector2D                                   JumpSpeedRange;                                           
	float                                              JumpSpeedInterval;                                        
	TEnumAsByte<ESuggestProjVelocityTraceOption>       JumpProjTraceType;                                        
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              OverrideGravityZ;                                         
	float                                              CollisionRadius;                                          
	bool                                               bFavorHighArc;                                            
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData04[0x2];                                       
	float                                              CacheLastTossSpeed;                                       
	int                                                CacheLastIterations;                                      
	struct FVector                                     CacheLastTossVelocity;                                    
	float                                              CacheLastTossVelocityHorizontal;                          
	float                                              CacheLastTossVelocityHertical;                            
	unsigned char                                      UnknownData05[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_LaunchMove");
		return pStaticClass;
	}

};




class UBTTask_MagicMoveAndJump : public UBTTask_MagicMove
{
public:
	float                                              MaxJumpInterval;                                          
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MagicMoveAndJump");
		return pStaticClass;
	}

};




class UBTTask_Mob_CastSkill : public UBTTaskNode
{
public:
	int                                                skillindex;                                               
	bool                                               bFailWhenCastFailed;                                      
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_CastSkill");
		return pStaticClass;
	}

};




class UBTTask_Mob_EnterState : public UBTTask_BlackboardBase
{
public:
	EBPAIState                                         IState;                                                   
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_EnterState");
		return pStaticClass;
	}

};




class UBTTask_Mob_Explode : public UBTTask_BlackboardBase
{
public:
	int                                                ExplodeSkillIndex;                                        
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     ExplodeSkillType;                                         
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_Explode");
		return pStaticClass;
	}

};




class UBTTask_Mob_FaceEnemy : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableAngle;                                          
	float                                              turnSpeed;                                                
	bool                                               bUsePhysRotate;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxExecuteTime;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FaceEnemy");
		return pStaticClass;
	}

};




class UBTTask_Mob_FindNextPathPosition : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FindNextPathPosition");
		return pStaticClass;
	}

};




class UBTTask_Mob_FindNextPatrolPosition : public UBTTaskNode
{
public:
	bool                                               bEnableRaycastTest;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MinSquaredDistanceFromSpawnPoint;                         
	bool                                               bIsCenterApplyBlackBoardValue;                            
	unsigned char                                      UnknownData01[0x7];                                       
	struct FBlackboardKeySelector                      CustomCenterTarget;                                       
	bool                                               bIsRadiusApplyBlackBoardValue;                            
	unsigned char                                      UnknownData02[0x7];                                       
	struct FBlackboardKeySelector                      CustomRadius;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FindNextPatrolPosition");
		return pStaticClass;
	}

};




class UBTTask_Mob_FindPosByTarget : public UBTTask_BlackboardBase
{
public:
	float                                              SearchRadius;                                             
	bool                                               bUseNav;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<struct FMobRandLocationRetryRule>           retryRules;                                               
	bool                                               StopWhenFindPos;                                          
	bool                                               KeepCloseToEnemy;                                         
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              MinMoveDistance;                                          
	float                                              HeightTestOffset;                                         
	bool                                               SimulateMoveWithLineCheck;                                
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              SimulateMoveDistance;                                     
	float                                              SimulateCapsuleRadius;                                    
	float                                              SimulateCapsuleHalfHeight;                                
	bool                                               IsDirForwardToTarget;                                     
	unsigned char                                      UnknownData03[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FindPosByTarget");
		return pStaticClass;
	}

};




class UBTTask_Mob_FindRandomAttackablePosition : public UBTTask_BlackboardBase
{
public:
	float                                              AttackableRadius;                                         
	float                                              KeepDistanceFromTarget;                                   
	float                                              MinMoveDistance;                                          
	bool                                               WithLineTrace;                                            
	EMobFindAttackablePositionLineTraceType            lineTraceType;                                            
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              CustomLineTraceHeightOffset;                              
	bool                                               WithLineTraceTop;                                         
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              HeightTestOffset;                                         
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FMobRandLocationRetryRule>           retryRules;                                               
	bool                                               ReachableTest;                                            
	bool                                               bFilterWater;                                             
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              ReachableTestRadius;                                      
	bool                                               EnableTriggerCastSkillBlockAfterFailed;                   
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData04[0x2];                                       
	int                                                TriggerCastSkillBlockAfterFailedTimes;                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_FindRandomAttackablePosition");
		return pStaticClass;
	}

};




class UBTTask_Mob_GetNearDeathCharNearby : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      TargetChar;                                               
	float                                              SearchRadius;                                             
	float                                              CheckInterval;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetNearDeathCharNearby");
		return pStaticClass;
	}

};




class UBTTask_Mob_GetRandomAttackTargetInRadius : public UBTTask_BlackboardBase
{
public:
	int                                                TriggerMinTimes;                                          
	int                                                TriggerMaxTimes;                                          
	int                                                ChooseCurEnemyProbability;                                
	ESearchType                                        searchType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SearchRadius;                                             
	struct FVector                                     SpecificLocation;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetRandomAttackTargetInRadius");
		return pStaticClass;
	}

};




class UBTTask_Mob_GetRandomSkill : public UBTTask_BlackboardBase
{
public:
	bool                                               DontChangeSkillWhenTargetNearBossContainer;               
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetRandomSkill");
		return pStaticClass;
	}

};




class UBTTask_Mob_GetTargetVehicle : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      TargetVehicle;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetTargetVehicle");
		return pStaticClass;
	}

};




class UBTTask_Mob_GetVehicleNearby : public UBTTask_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      TargetVehicle;                                            
	float                                              SearchRadius;                                             
	float                                              CheckInterval;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_GetVehicleNearby");
		return pStaticClass;
	}

};




class UBTTask_Mob_LeaveState : public UBTTask_BlackboardBase
{
public:
	EBPAIState                                         IState;                                                   
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_LeaveState");
		return pStaticClass;
	}

};




class UBTTask_Mob_LinkGetJumpVelocity : public UBTTask_BlackboardBase
{
public:
	float                                              JumpForwardOffset;                                        
	struct FVector2D                                   JumpSpeedRange;                                           
	TEnumAsByte<ESuggestProjVelocityTraceOption>       Stride_JumpProjTraceType;                                 
	bool                                               SetJumpFaceAngle;                                         
	unsigned char                                      UnknownData00[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_LinkGetJumpVelocity");
		return pStaticClass;
	}

};




class UBTTask_Mob_MoveTo : public UBTTask_MoveTo
{
public:
	float                                              BlockTimeLimit;                                           
	float                                              BlockVelocitySizeThreshold;                               
	bool                                               BlockDistCheck;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BlockThresholdValidMoveDist;                              
	float                                              BlockThresholdValidMoveTime;                              
	float                                              BlockThresholdValidVelocitySize;                          
	bool                                               ForceSuccess;                                             
	bool                                               GotoExceptionWhenFailed;                                  
	bool                                               SupportWalkType;                                          
	EMobWalkType                                       iWalkType;                                                
	unsigned char                                      bMobUsePathFinding : 1;                                   
	bool                                               bEnableDebugLog;                                          
	bool                                               bUseNodeMemoryForBlockState;                              
	unsigned char                                      UnknownData01[0x1];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_MoveTo");
		return pStaticClass;
	}

};




class UBTTask_Mob_NewFindPatrolPosition : public UBTTaskNode
{
public:
	float                                              MinMoveDistance;                                          
	float                                              fHalfAngle;                                               
	int                                                MaxExecuteTimes;                                          
	float                                              ExceptionRandomRadius;                                    
	bool                                               bEnableRaycastTest;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBlackboardKeySelector                      KeyTargetLocation;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_NewFindPatrolPosition");
		return pStaticClass;
	}

};




class UBTTask_Mob_SnakeMove : public UBTTask_BlackboardBase
{
public:
	float                                              NormalDis;                                                
	struct FVector2D                                   DisOffset;                                                
	struct FVector2D                                   AngleOffset;                                              
	float                                              TaskMaxTime;                                              
	float                                              AcceptRadius;                                             
	bool                                               StopOnOverlap;                                            
	bool                                               UsePathfinding;                                           
	bool                                               AllowPartialPath;                                         
	bool                                               ProjectDestinationToNavigation;                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_SnakeMove");
		return pStaticClass;
	}

};




class UBTTask_Mob_Suicide : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_Suicide");
		return pStaticClass;
	}

};




class UBTTask_Mob_SwimDirect : public UBTTask_BlackboardBase
{
public:
	float                                              SwimVelocitySize;                                         
	float                                              AcceptableRadius;                                         
	bool                                               bReachTestIncludesAgentRadius;                            
	bool                                               bReachTestIncludesGoalRadius;                             
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_Mob_SwimDirect");
		return pStaticClass;
	}

};




class UBTTask_MobCMD_CastSkill : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SkillIndexBlackBoardKey;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MobCMD_CastSkill");
		return pStaticClass;
	}

};




class UBTTask_ModifyBlackboardData : public UBTTask_BlackboardBase
{
public:
	EModifyBlackboardDataValueType                     ValueType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     SetValue;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_ModifyBlackboardData");
		return pStaticClass;
	}

};




class UBTTask_MoveAround : public UBTTask_BlackboardBase
{
public:
	float                                              MoveRadius;                                               
	float                                              RotationSpeed;                                            
	EAIMovePose                                        MoveType;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   WaitTimeRange;                                            
	struct FVector2D                                   ExecutionDuration;                                        
	float                                              AcceptRadius;                                             
	bool                                               bIncludeNeighborVerts;                                    
	bool                                               bSetFocus;                                                
	bool                                               bCanMoveWhenNoTarget;                                     
	unsigned char                                      UnknownData01[0x1];                                       
	struct FVector2D                                   DirectionAngleRange;                                      
	struct FVector2D                                   MoveTargetDistRange;                                      
	unsigned char                                      UnknownData02[0x4];                                       
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MoveAround");
		return pStaticClass;
	}

};




class UBTTask_MoveToOcclusion : public UBTTask_MagicMove
{
public:
	float                                              UseLastPointRadius;                                       
	bool                                               bChoosePointByEnemy;                                      
	bool                                               bForceStand;                                              
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              CirclePainThreshold;                                      
	bool                                               DoNotUseCurrentOcclusionFirst;                            
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              CurrentOcclusionRadius;                                   
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<EAIMoveToOcclusionPoseType>                 AcceptableOcclusionTypeArray;                             
	bool                                               bUsePointNearSelfCompareToEnemy;                          
	bool                                               bUseNavMeshDistance;                                      
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              MaxNavMeshSearchDistance;                                 
	EAIMoveToOcclusionSearchBestOcclusionMethod        searchBestOcclusionMethod;                                
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              OcclusionPointChooseZFactor;                              
	float                                              OcclusionPointChooseBushFactor;                           
	bool                                               ChooseAttackableOcclusionFirst;                           
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              ChooseAttackableOcclusionFactor;                          
	float                                              OcclusionPadAngle_Normal;                                 
	float                                              OcclusionPadAngle_Aggressive;                             
	bool                                               ChooseAttackableOcclusionWithLineTrace;                   
	unsigned char                                      UnknownData06[0x3];                                       
	float                                              SelfStandHalfHeight;                                      
	bool                                               ChooseTagOcclusionEnable;                                 
	unsigned char                                      UnknownData07[0x3];                                       
	struct FString                                     OcclusionTagForChosen;                                    
	bool                                               bIgnorePossibleAttackableOcclusion;                       
	unsigned char                                      bChooseGeneratedOcclusionPoints : 1;                      
	bool                                               bDebug;                                                   
	unsigned char                                      UnknownData08[0x5];                                       
	struct FBlackboardKeySelector                      EnemyBlackboardKey;                                       
	EAIMoveToOcclusionMovingPoseType                   MovingPoseType;                                           
	unsigned char                                      UnknownData09[0x3];                                       
	float                                              MoveToOcclusionKeepCurPoseDistance;                       
	EAIMoveToOcclusionFinishMovePoseType               finishMovePoseType;                                       
	unsigned char                                      UnknownData10[0x3];                                       
	float                                              OccupiedRadius;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MoveToOcclusion");
		return pStaticClass;
	}

};




class UBTTask_MoveToSafeArea : public UBTTask_MagicMove
{
public:
	float                                              BlueCircleOffsetRadius;                                   
	struct FVector2D                                   RandomLength;                                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_MoveToSafeArea");
		return pStaticClass;
	}

};




class UBTTask_PickUpItemAtTombBox : public UBTTaskNode
{
public:
	int                                                MaxPickCount;                                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_PickUpItemAtTombBox");
		return pStaticClass;
	}

};




class UBTTask_RotateToTarget : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      InRotationTarget;                                         
	class UCurveFloat*                                 TimeCurve;                                                
	float                                              DefaultWaitTime;                                          
	float                                              FinishWaitTime;                                           
	bool                                               bShowLog;                                                 
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_RotateToTarget");
		return pStaticClass;
	}

};




class UBTTask_RunBBSubTree : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SubBehaviorTreeBlackBoardKey;                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_RunBBSubTree");
		return pStaticClass;
	}

};




class UBTTask_RunMultiDynamicSubTree : public UBTTaskNode
{
public:
	class UBehaviorTree*                               MainBehaviorAsset;                                        
	TArray<struct FBlackBoardSubTreeConfig>            SubBehaviorAssetArray;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_RunMultiDynamicSubTree");
		return pStaticClass;
	}

};




class UBTTask_SeekFlyPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyTargetEnemy;                                         
	struct FBlackboardKeySelector                      BBKeyFoundFlyPoint;                                       
	ESeekFlyPointCenterLocType                         ChooseFlyPointCenterLocType;                              
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   ChooseFlyPointHorizontalRadiusRange;                      
	struct FVector2D                                   ChooseFlyPointHeightRange;                                
	ESeekFlyPointHorizontalAngleType                   HorizontalAngleType;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector2D                                   ChooseFlyPointAngleRange;                                 
	float                                              AcceptableMinMoveDistance;                                
	float                                              AcceptableMinVerticalAngle;                               
	float                                              AcceptableMaxHorizontalAngleFromLastMove;                 
	int                                                MaxSearchTimes;                                           
	int                                                PerConditionExtraSearchTimes;                             
	float                                              OverrideAgentRadius;                                      
	bool                                               bFirstInChooseAsBornLocation;                             
	bool                                               FlyToLastPointWhenFailed;                                 
	bool                                               bFilterWater;                                             
	unsigned char                                      UnknownData02[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SeekFlyPoint");
		return pStaticClass;
	}

};




class UBTTask_SetDownwardPos : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      ActorBlackboardKey;                                       
	struct FBlackboardKeySelector                      PosBlackboardKey;                                         
	float                                              DownwardTraceDistance;                                    
	float                                              OffsetZ;                                                  
	TArray<class UClass*>                              TracableObjectTemplate;                                   
	bool                                               bForceSuccess;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SearchRadius;                                             
	bool                                               bIgnoreStartPenetratingLoc;                               
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SetDownwardPos");
		return pStaticClass;
	}

};




class UBTTask_SpawnItem : public UBTTask_BlackboardBase
{
public:
	float                                              CheckNoPlayerRadiusSquare;                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FAIEquipSpawnGroupDataBase>          SpawnEquipDataBase;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SpawnItem");
		return pStaticClass;
	}

};




class UBTTask_StopSkill : public UBTTaskNode
{
public:
	TArray<int>                                        SkillIDs;                                                 
	EUTSkillStopReason                                 StopReason;                                               
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_StopSkill");
		return pStaticClass;
	}

};




class UBTTask_StrategyMove : public UBTTask_BlackboardBase
{
public:
	bool                                               bIsSimpleCharacter;                                       
	EAIMovePose                                        MoveType;                                                 
	EAIMoveType                                        MovePathType;                                             
	unsigned char                                      UnknownData00[0x1];                                       
	int                                                SampleNumber;                                             
	struct FVector2D                                   ControllPoint1;                                           
	struct FVector2D                                   ControllPoint2;                                           
	struct FVector2D                                   DirectionAngleRange;                                      
	struct FVector2D                                   MoveTargetDistRange;                                      
	struct FVector2D                                   ExecutionDuration;                                        
	bool                                               bStopMoveWhenExecutionDurationRanOut;                     
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              RePlanTime;                                               
	bool                                               AlwaysSuccess;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              AcceptRadius;                                             
	bool                                               StopOnOverlap;                                            
	bool                                               UsePathfinding;                                           
	bool                                               AllowPartialPath;                                         
	bool                                               ProjectDestinationToNavigation;                           
	float                                              ExceptionRandomRadius;                                    
	bool                                               bCanMoveWhenNoTarget;                                     
	bool                                               bCheckWallPass;                                           
	bool                                               DebugDrawPath;                                            
	unsigned char                                      UnknownData03[0x5];                                       
	class UNavCostModifier*                            NavCostModifier;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_StrategyMove");
		return pStaticClass;
	}

};




class UBTTask_SummonActor : public UBTTaskNode
{
public:
	class UClass*                                      SummonActorClass;                                         
	int                                                SummonNum;                                                
	int                                                MaxSummonNum;                                             
	int                                                MonsterResID;                                             
	bool                                               bUseSummonPoint;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<TEnumAsByte<EObjectTypeQuery>>              QueryObjectType;                                          
	float                                              SphereRadius;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	class UClass*                                      SummonLocationClass;                                      
	struct FVector                                     OffsetMax;                                                
	struct FVector                                     OffsetMin;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SummonActor");
		return pStaticClass;
	}


	TArray<struct FVector> GetSummonLocations(class AActor* Invoker);
};




class UBTTask_SwimInput : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_SwimInput");
		return pStaticClass;
	}

};




class UBTTask_TeleportToSpecLoc : public UBTTask_BlackboardBase
{
public:
	float                                              RangeMin;                                                 
	float                                              RangeMax;                                                 
	bool                                               OnlyTeleportToLand;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              OriginCheckSquare;                                        
	float                                              DestCheckSquare;                                          
	float                                              TraceHeight;                                              
	int                                                HouseCheckTimes;                                          
	bool                                               bCheckSight;                                              
	bool                                               bForceSuccess;                                            
	unsigned char                                      UnknownData01[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_TeleportToSpecLoc");
		return pStaticClass;
	}

};




class UBTTask_TryFightback : public UBTTask_MagicMove
{
public:
	float                                              MaxTraceTime;                                             
	float                                              CheckTargetVisableTimeIntervel;                           
	bool                                               bIsCheckHasWeapon;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MinEnemyInSightTime;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_TryFightback");
		return pStaticClass;
	}

};




class UBTTask_VH_Locate : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKey_OutPoint;                                           
	int                                                MaxTryTimes;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBlackboardKeySelector                      BBKey_BasePoint;                                          
	struct FVector2D                                   RandomRange;                                              
	float                                              RandomAngle;                                              
	struct FVector2D                                   AttackRange;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FLocationRetryRule>                  retryRules;                                               
	float                                              HeightTestOffset;                                         
	unsigned char                                      bFilterBuilding : 1;                                      
	unsigned char                                      bFilterWater : 1;                                         
	unsigned char                                      bFilterOutBehaviorRegion : 1;                             
	unsigned char                                      bReachableTest : 1;                                       
	unsigned char                                      bUseNavmesh : 1;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	struct FName                                       SpecificNaVName;                                          
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              MaxLocationTraceHeightZ;                                  
	unsigned char                                      bDebug : 1;                                               
	unsigned char                                      UnknownData04[0x7];                                       
	class UAIBehaviorAdapter_Tank*                     OwnerAdapter;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_VH_Locate");
		return pStaticClass;
	}

};




class UBTTask_VH_NavigateTo : public UBTTask_MoveTo
{
public:
	struct FVector2D                                   ExecutionDuration;                                        
	unsigned char                                      bModifyUsePathFinding : 1;                                
	unsigned char                                      bStopEngineWhenTaskFinished : 1;                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              AcceptableAngle;                                          
	struct FVector2D                                   DirectionAngleRange;                                      
	struct FVector2D                                   MoveTargetDistRange;                                      
	float                                              ThrottleInputScale;                                       
	unsigned char                                      bNoSteering : 1;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector2D                                   Deviation;                                                
	float                                              DistanceExtendRate;                                       
	float                                              Throttle;                                                 
	float                                              TowardAngle;                                              
	unsigned char                                      bTrackingTargetWhenRotateToward : 1;                      
	unsigned char                                      UnknownData02[0x3];                                       
	class UAIBehaviorAdapter_Tank*                     OwnerAdapter;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_VH_NavigateTo");
		return pStaticClass;
	}

};




class UBTTask_WayPointDirectMove : public UBTTask_BlackboardBase
{
public:
	bool                                               bAllowPartialPath;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              AcceptableRadius;                                         
	bool                                               bAllowStrafe;                                             
	bool                                               bReachTestIncludesAgentRadius;                            
	bool                                               bReachTestIncludesGoalRadius;                             
	bool                                               bProjectGoalLocation;                                     
	bool                                               bUsePathfinding;                                          
	bool                                               bMoveToActor;                                             
	unsigned char                                      UnknownData01[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_WayPointDirectMove");
		return pStaticClass;
	}

};




class UBTTask_WayPointListMove : public UBTTask_BlackboardBase
{
public:
	bool                                               bAllowPartialPath;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              AcceptableRadius;                                         
	bool                                               bAllowStrafe;                                             
	bool                                               bReachTestIncludesAgentRadius;                            
	bool                                               bReachTestIncludesGoalRadius;                             
	bool                                               bProjectGoalLocation;                                     
	bool                                               bUsePathfinding;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	TArray<struct FVector>                             OverrideWayPointList;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTask_WayPointListMove");
		return pStaticClass;
	}

};




class UBTTaskNode_CastSkill : public UBTTaskNode
{
public:
	int                                                SkillID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CastSkill");
		return pStaticClass;
	}

};




class UBTTaskNode_CharacterCastNoneTargetSkill : public UBTTask_BlackboardBase
{
public:
	int                                                SkillID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBlackboardKeySelector                      SkillIDBlackBoardKey;                                     
	int                                                RescueRange;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	class ASTExtraBaseCharacter*                       RescueCharacter;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CharacterCastNoneTargetSkill");
		return pStaticClass;
	}

};




class UBTTaskNode_CharacterCastOnTargetSkill : public UBTTask_BlackboardBase
{
public:
	int                                                SkillID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBlackboardKeySelector                      SkillIDBlackBoardKey;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CharacterCastOnTargetSkill");
		return pStaticClass;
	}

};




class UBTTaskNode_CharacterCastSkill : public UBTTask_BlackboardBase
{
public:
	EAITaskNodeThrowGrenadeMethod                      throwMethod;                                              
	bool                                               bUseHighThrowFirst;                                       
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector2D                                   AcceptableHighThrowPitchRangle;                           
	struct FVector2D                                   AcceptableLowThrowPitchRangle;                            
	struct FVector                                     HighThrowStartOffset_Stand;                               
	struct FVector                                     HighThrowStartOffset_Crouch;                              
	struct FVector                                     HighThrowStartOffset_Prone;                               
	struct FVector                                     LowThrowStartOffset_Stand;                                
	struct FVector                                     LowThrowStartOffset_Crouch;                               
	struct FVector                                     LowThrowStartOffset_Prone;                                
	float                                              HighThrowSpeed;                                           
	float                                              LowThrowSpeed;                                            
	struct FRotator                                    HighThrowViewOffsetRotation;                              
	struct FRotator                                    LowThrowViewOffsetRotation;                               
	float                                              ProjectileCollisionRadius;                                
	TEnumAsByte<ESuggestProjVelocityTraceOption>       ProjVelocityTraceType;                                    
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              fReplanThrowAngleDistance;                                
	TArray<struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig> TargetLocRandomableConfig;                                
	bool                                               bDebug;                                                   
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                SkillID;                                                  
	struct FBlackboardKeySelector                      SkillIDBlackBoardKey;                                     
	bool                                               bNeedCheckItem;                                           
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                CheckExitItemID;                                          
	int                                                CheckExitItemType;                                        
	float                                              SkillMinReleaseInterval;                                  
	float                                              SkillMaxReleaseInterval;                                  
	float                                              FaceToTargetSpeed;                                        
	float                                              HighThrowDistance;                                        
	unsigned char                                      UnknownData04[0x4];                                       
	class UCurveFloat*                                 HighThrowDistanceToPitchCurve;                            
	class UCurveFloat*                                 LowThrowDistanceToPitchCurve;                             
	bool                                               UseNewTargetLocWhenNormalModeAiming;                      
	unsigned char                                      UnknownData05[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CharacterCastSkill");
		return pStaticClass;
	}

};




class UBTTaskNode_CheckOcclusionSafe : public UBTTask_BlackboardBase
{
public:
	float                                              CheckRadius;                                              
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_CheckOcclusionSafe");
		return pStaticClass;
	}

};




class UBTTaskNode_ClearCurrentEnemy : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ClearCurrentEnemy");
		return pStaticClass;
	}

};




class UBTTaskNode_ClearFocus : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ClearFocus");
		return pStaticClass;
	}

};




class UBTTaskNode_EmptyShot : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_EmptyShot");
		return pStaticClass;
	}

};




class UBTTaskNode_EquipItemDirectly : public UBTTaskNode
{
public:
	TArray<struct FAIEquipSpawnGroup>                  RandomSpawnEquipGroupSet;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_EquipItemDirectly");
		return pStaticClass;
	}

};




class UBTTaskNode_EquipOrUnWeapon : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_EquipOrUnWeapon");
		return pStaticClass;
	}

};




class UBTTaskNode_FindBuilding : public UBTTask_BlackboardBase
{
public:
	TArray<struct FFindBuildingRatingConfig>           RatingConfig;                                             
	bool                                               OnlySafeBuildings;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxMoveSpeed;                                             
	float                                              findSpotXYOffset;                                         
	float                                              findSpotZOffset;                                          
	float                                              GoBackThreshold;                                          
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_FindBuilding");
		return pStaticClass;
	}

};




class UBTTaskNode_FindItemSpot : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_FindItemSpot");
		return pStaticClass;
	}

};




class UBTTaskNode_FindPosByTarget : public UBTTask_BlackboardBase
{
public:
	float                                              SearchRadius;                                             
	bool                                               bUseNav;                                                  
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_FindPosByTarget");
		return pStaticClass;
	}

};




class UBTTaskNode_ForceSuccess : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ForceSuccess");
		return pStaticClass;
	}

};




class UBTTaskNode_HumanAction : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_HumanAction");
		return pStaticClass;
	}

};




class UBTTaskNode_MeleeAttack : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_MeleeAttack");
		return pStaticClass;
	}

};




class UBTTaskNode_MonsterCastSkill : public UBTTask_BlackboardBase
{
public:
	int                                                skillindex;                                               
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     SkillType;                                                
	bool                                               bCanCastWithoutTarget;                                    
	bool                                               bIgnoreSkillCastDistanceCheck;                            
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_MonsterCastSkill");
		return pStaticClass;
	}

};




class UBTTaskNode_MonsterJumpToPos : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_MonsterJumpToPos");
		return pStaticClass;
	}

};




class UBTTaskNode_NewParachuteJumpBase : public UBTTaskNode
{
public:
	float                                              RandomEndJumpTime;                                        
	float                                              JumpRadius;                                               
	float                                              JumpHeight;                                               
	float                                              MoveForwardRate;                                          
	float                                              OpenParachuteHeight;                                      
	float                                              CheckOpenParachuteFreq;                                   
	float                                              ForceForwardHeight;                                       
	float                                              CloseParachuteHeight;                                     
	float                                              CheckCloseParachuteFreq;                                  
	float                                              LockFocusTime;                                            
	float                                              DelayClearParachuteTime;                                  
	float                                              MaxFallingTime;                                           
	bool                                               bNotiyParachuteComp;                                      
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       IgnoreOpen;                                               
	bool                                               UseFakePlayerAIControllerDoLandingSuccess;                
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_NewParachuteJumpBase");
		return pStaticClass;
	}


	void DelayClearParachute(class ASTExtraPlayerCharacter* ControlledPawn);
};




class UBTTaskNode_NewParachuteJump : public UBTTaskNode_NewParachuteJumpBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_NewParachuteJump");
		return pStaticClass;
	}

};




class UBTTaskNode_NewParachuteJumpBigEvent : public UBTTaskNode_NewParachuteJump
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_NewParachuteJumpBigEvent");
		return pStaticClass;
	}

};




class UBTTaskNode_NewParachuteJumpDoubleCircle : public UBTTaskNode_NewParachuteJumpBase
{
public:
	float                                              InnerRadiusDeltaValue;                                    
	float                                              JumpRangeDistance;                                        
	float                                              MaxTargetPositonDistance;                                 
	int                                                MaxAttempt;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_NewParachuteJumpDoubleCircle");
		return pStaticClass;
	}

};




class UBTTaskNode_ParachuteJump : public UBTTaskNode
{
public:
	float                                              RandomRadius;                                             
	float                                              JumpStartTime;                                            
	float                                              JumpEndTime;                                              
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ParachuteJump");
		return pStaticClass;
	}

};




class UBTTaskNode_ParachuteJumpV3 : public UBTTaskNode
{
public:
	float                                              RandomEndJumpTime;                                        
	float                                              JumpRadius;                                               
	float                                              JumpHeight;                                               
	float                                              RandomAccelerateStart;                                    
	float                                              RandomAccelerateEnd;                                      
	float                                              OpenParachuteHeight;                                      
	float                                              CheckOpenParachuteFreq;                                   
	float                                              CloseParachuteHeight;                                     
	float                                              CheckCloseParachuteFreq;                                  
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_ParachuteJumpV3");
		return pStaticClass;
	}

};




class UBTTaskNode_PickItemsAtSpot : public UBTTaskNode
{
public:
	int                                                MaxPickCount;                                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_PickItemsAtSpot");
		return pStaticClass;
	}

};




class UBTTaskNode_PlayEmote : public UBTTaskNode
{
public:
	TMap<int, float>                                   RandomEmoteIDWithWeightMap;                               
	TMap<int, float>                                   EmotePlayTimeMap;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_PlayEmote");
		return pStaticClass;
	}

};




class UBTTaskNode_PlaySound : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_PlaySound");
		return pStaticClass;
	}

};




class UBTTaskNode_PostLuaEvent : public UBTTaskNode
{
public:
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	struct FString                                     CallLuaFuncName;                                          
	struct FString                                     Params;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_PostLuaEvent");
		return pStaticClass;
	}

};




class UBTTaskNode_RefreshWeaponBBD : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_RefreshWeaponBBD");
		return pStaticClass;
	}

};




class UBTTaskNode_Rescue : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_Rescue");
		return pStaticClass;
	}

};




class UBTTaskNode_StopMeleeAttack : public UBTTask_BlackboardBase
{
public:
	float                                              StopTimeout;                                              
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_StopMeleeAttack");
		return pStaticClass;
	}

};




class UBTTaskNode_StopShooting : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_StopShooting");
		return pStaticClass;
	}

};




class UBTTaskNode_TakeMedicine : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.BTTaskNode_TakeMedicine");
		return pStaticClass;
	}

};




class UCustomDamageEventComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSpawnActor;                                             
	unsigned char                                      UnknownData00[0x28];                                      
	float                                              ActorSpawnGlobalCooldown;                                 
	unsigned char                                      UnknownData01[0x4];                                       
	struct FScriptMulticastDelegate                    OnThrowBox;                                               
	unsigned char                                      UnknownData02[0x4];                                       
	float                                              OwnerHealthPercentage;                                    
	unsigned char                                      UnknownData03[0x10];                                      
	TArray<struct FTriggeredCustomDamageEvent>         ClientEvents;                                             
	unsigned char                                      UnknownData04[0x70];                                      
	TMap<struct FName, class UObject*>                 CacheUObjectMap;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.CustomDamageEventComponent");
		return pStaticClass;
	}


	void OnRep_ClientEvents();
};




class UCharacterCustomDamageEventComponent : public UCustomDamageEventComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.CharacterCustomDamageEventComponent");
		return pStaticClass;
	}


	void OnTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer);
};




class AMercenaryAICharacterBase : public ASTExtraPlayerCharacter
{
public:
	float                                              AttachedPlayerHeightOffset;                               
	struct FVector                                     GrenadeThrowOffset;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MercenaryAICharacterBase");
		return pStaticClass;
	}

};




class UMercenaryJumpObstacleInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> CacheAllPlayersInfo;                                      
	struct FDiffMercenaryJumpObstacleAllPlayerInfo     CacheDiffAllPlayersInfoGeneral;                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MercenaryJumpObstacleInfoCollector");
		return pStaticClass;
	}

};




class UMercenaryPassengerCameraModifierBase : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	struct FPassengerCameraViewLimit                   TppViewLimit;                                             
	struct FPassengerCameraViewLimit                   FppViewLimit;                                             
	struct FPassengerCameraViewLimit                   BowViewLimit;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MercenaryPassengerCameraModifierBase");
		return pStaticClass;
	}

};




class UMLAIControllerComponent : public ULuaActorComponent
{
public:
	class UClass*                                      AISoundCollectCompClass;                                  
	class UClass*                                      MLAIParachuteJumpCompClass;                               
	class UAIActionExecutionComponent*                 AIActionExecutionComp;                                    
	class UAIBasicStateInfoComponent*                  AIStateInfoComp;                                          
	class UAISoundCollectionComponent*                 AISoundCollectComp;                                       
	class UMLAIParachuteJumpComponent*                 MLAIParachuteJumpComp;                                    
	class UTeammateMLAIControllerComponent*            TeammateMLAIControllerComp;                               
	float                                              HearRadius;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<TEnumAsByte<ESTEPoseState>, struct FCameraViewPitchLimitData> CameraViewPitchLimitDataMap;                              
	struct FCameraViewPitchLimitData                   FreeFallCameraViewPitchLimitData;                         
	struct FVector                                     PrePos;                                                   
	float                                              PreTickTime;                                              
	unsigned char                                      UnknownData01[0x8];                                       
	class AController*                                 OwnerController;                                          
	class ANewFakePlayerAIController*                  MyAIController;                                           
	class ASTExtraPlayerController*                    MyPlayerController;                                       
	unsigned char                                      UnknownData02[0x14];                                      
	float                                              FindNavLocationRadius;                                    
	int                                                MaxNavLocationFindTimes;                                  
	bool                                               bUseLerpRotation;                                         
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              LerpRotationThreshold;                                    
	bool                                               IsForceTargetRotation;                                    
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              FirstLerpRotationDeltaTime;                               
	float                                              FreeCameraTurnVelocity;                                   
	float                                              TurnVelocity;                                             
	unsigned char                                      UnknownData05[0x4];                                       
	struct FAIShootingPoseOffsetInfo                   shootingPoseOffsetInfo;                                   
	float                                              AutoOpenDoorRange;                                        
	unsigned char                                      UnknownData06[0x8];                                       
	bool                                               IsModifyDamageLuaOverride;                                
	unsigned char                                      UnknownData07[0x3];                                       
	float                                              RatingDamageScaleLuaOverride;                             
	bool                                               bShouldSendVehicleInfo;                                   
	unsigned char                                      UnknownData08[0x1B];                                      
	bool                                               IsChangeStatePC;                                          
	unsigned char                                      UnknownData09[0x3];                                       
	uint32_t                                           AllyMasterID;                                             
	uint32_t                                           AIProvider;                                               
	unsigned char                                      UnknownData10[0x464];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIControllerComponent");
		return pStaticClass;
	}


	void UnBindDelegates(bool IsEndPlay);
	static void SetShowDebugAILevelTime(float InSetShowDebugAILevelTime);
	void SetMLAIStyle(uint32_t NewAIStyle);
	void SetLuaAIParamConfigString(const struct FString& InAIParamConfigString, int InLuaAIParamType);
	void SetIsMLAI(bool InIsMLAI);
	void SetCurShootingPose(EAIShootingPose InCurAIShootingPose);
	void SetAllyMasterID(uint32_t InAllyMasterID);
	void SetAIProvider(uint32_t AIProvider);
	void SetAIParams(struct FGameModeAIPlayerParams* InAIParams);
	void SetAILevel(uint32_t NewAILevel);
	bool IsValid();
	bool IsTeammateMLAI();
	bool IsFreeCamera();
	void InitAIStateInfoComponent(class UAIBasicStateInfoComponent* AIStateInfoComponent);
	void InitAIActionExecutionComponent(class UAIActionExecutionComponent* InAIActionExecutionComponent);
	struct FRotator GetViewRotation();
	struct FVector GetViewForwardVector();
	class ASTExtraBaseCharacter* GetOwnerBaseCharacter();
	uint32_t GetMLAIStyle();
	class UMLAIParachuteJumpComponent* GetMLAIParachuteJumpComp();
	bool GetIsMLAI();
	class UBackpackComponent* GetBackpackComponent();
	uint32_t GetAllyMasterID();
	class UAIBasicStateInfoComponent* GetAIStateInfoComp();
	uint32_t GetAIProvider();
	struct FGameModeAIPlayerParams GetAIParams();
	uint32_t GetAILevel();
	class UAIActionExecutionComponent* GetAIActionExecutionComp();
	void FreshShootingPose();
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll);
	bool CheckCameraViewPitchLimit(struct FRotator* InOutTargetRot);
	void BindDelegates();
};




class UMLAIDestructibleInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> CacheAllPlayersInfo;                                      
	struct FDiffDestructibleItemAllPlayersInfo         CacheDiffAllPlayersInfoGeneral;                           
	struct FDestructibleItemGlobalGameState            CacheGlobalGameState;                                     
	struct FDestructibleItemGlobalGameState            LastGlobalGameState;                                      
	struct FDiffDestructibleItemGlobalGameState        DiffGlobalGameStateGeneral;                               
	TMap<uint64_t, struct FDestructibleItem>           CacheDestructibleItems;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIDestructibleInfoCollector");
		return pStaticClass;
	}

};




class UMLAIDynamicItemInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     CacheAllPlayersInfo;                                      
	struct FDiffDynamicItemAllPlayersInfo              CacheDiffAllPlayersInfoGeneral;                           
	struct FDynamicItemGlobalGameState                 CacheGlobalGameState;                                     
	struct FDynamicItemGlobalGameState                 LastGlobalGameState;                                      
	struct FDiffDynamicItemGlobalGameState             DiffGlobalGameStateGeneral;                               
	TMap<uint64_t, struct FDynamicItem>                CacheDynamicItems;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIDynamicItemInfoCollector");
		return pStaticClass;
	}

};




class UMLAILandScapeInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FLandScapeAIStateInfo>       LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FLandScapeAIStateInfo>       CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FLandScapeAIStateInfo>       CacheAllPlayersInfo;                                      
	struct FDiffLandScapeAllPlayerInfo                 CacheDiffAllPlayersInfoGeneral;                           
	struct FLandScapeGlobalGameInfo                    CacheGlobalGameState;                                     
	struct FLandScapeGlobalGameInfo                    LastGlobalGameState;                                      
	struct FDiffLandScapeGlobalGameInfo                DiffGlobalGameStateGeneral;                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAILandScapeInfoCollector");
		return pStaticClass;
	}

};




class UMLAINearbyDoorInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      CacheAllPlayersInfo;                                      
	struct FDiffNearbyDoorAllPlayersInfo               CacheDiffAllPlayersInfoGeneral;                           
	struct FNearbyDoorGlobalGameState                  CacheGlobalGameState;                                     
	struct FNearbyDoorGlobalGameState                  LastGlobalGameState;                                      
	struct FDiffNearbyDoorGlobalGameState              DiffGlobalGameStateGeneral;                               
	TMap<uint64_t, struct FDoorState>                  CacheDoorStates;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAINearbyDoorInfoCollector");
		return pStaticClass;
	}

};




class UMLAINearbyMonsterInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   CacheAllPlayersInfo;                                      
	struct FDiffNearbyMonsterAllPlayersInfo            CacheDiffAllPlayersInfoGeneral;                           
	struct FNearbyMonsterGlobalGameState               CacheGlobalGameState;                                     
	struct FNearbyMonsterGlobalGameState               LastGlobalGameState;                                      
	TMap<uint64_t, struct FMonsterState>               CacheMonsterStats;                                        
	struct FDiffNearbyMonsterGlobalGameState           DiffGlobalGameStateGeneral;                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAINearbyMonsterInfoCollector");
		return pStaticClass;
	}

};




class UMLAINearbyPlayerInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FNearbyPlayerAIStateInfo>    LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FNearbyPlayerAIStateInfo>    CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FNearbyPlayerAIStateInfo>    CacheAllPlayersInfo;                                      
	struct FDiffNearbyPlayerAllPlayersInfo             CacheDiffAllPlayersInfoGeneral;                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAINearbyPlayerInfoCollector");
		return pStaticClass;
	}

};




class UMLAINearbyStateInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      CacheAllPlayersInfo;                                      
	struct FDiffBaseNearbyAllPlayersInfo               CacheDiffAllPlayersInfoGeneral;                           
	struct FNearbyBaseGlobalGameState                  CacheGlobalGameState;                                     
	struct FNearbyBaseGlobalGameState                  LastGlobalGameState;                                      
	struct FDiffBaseNearbyGlobalGameState              DiffGlobalGameStateGeneral;                               
	TMap<uint64_t, struct FItemStateData>              CacheItemData;                                            
	TMap<uint64_t, struct FAINearbyThrown>             CacheAINearbyThrown;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAINearbyStateInfoCollector");
		return pStaticClass;
	}

};




class UMLAIParachuteJumpComponent : public ULuaActorComponent
{
public:
	float                                              JumpHeight;                                               
	float                                              OpenParachuteHeight;                                      
	float                                              CheckOpenParachuteFreq;                                   
	float                                              CloseParachuteHeight;                                     
	float                                              CheckCloseParachuteFreq;                                  
	float                                              DelayClearParachuteTime;                                  
	float                                              MaxFallingTime;                                           
	EMLAIJumpingPhase                                  JumpingPhase;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	class ANewFakePlayerAIController*                  OwnerController;                                          
	class ASTExtraPlayerController*                    OwnerPlayerController;                                    
	float                                              FallingTime;                                              
	float                                              CheckCountTime;                                           
	bool                                               bLandingInLowHeight;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector                                     LastLocation;                                             
	bool                                               bDellJumpToLandExcute;                                    
	bool                                               bNotiyParachuteComp;                                      
	unsigned char                                      UnknownData02[0x6];                                       
	struct FName                                       IgnoreOpen;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIParachuteJumpComponent");
		return pStaticClass;
	}


	void ParachuteMove(float ForwardRate, float RightRate);
	void OpenParachute();
	void OnFollowOpenParachute();
	void OnFollowJumpFromPlane();
	void OnAIEnterFighting();
	void JumpFromPoint();
	void JumpFromPlane();
	void EnterParachuteJumpPhase(const struct FVector& StartLoc, const struct FRotator& StartRot);
	void EndJump(bool bSuccess);
	void CloseParachute();
};




class UMLAIStateInfoManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	bool                                               bDiffSwitch;                                              
	unsigned char                                      UnknownData01[0x7];                                       
	class UAIStateInfoDataAsset*                       AIStateInfoDataAsset;                                     
	TArray<class UStateInfoCollectorBase*>             StateInfoCollectorList;                                   
	TMap<EStatePlayerType, struct FCollectorArray>     PlayerTypeStateInfoCollectorMap;                          
	class UMLAISubSystem*                              MLAISubSystem;                                            
	TMap<struct FString, class UClass*>                CollectorNameToClassMap;                                  
	TMap<class ASTExtraPlayerCharacter*, bool>         CacheMLAIs;                                               
	TMap<class ASTExtraPlayerCharacter*, bool>         CachePlayerAndBTAIs;                                      
	TMap<uint32_t, bool>                               CacheCandidateAIs;                                        
	TMap<uint32_t, bool>                               AlreadySendDeadStateMap;                                  
	TMap<EDiffListIDTag, struct FDiffListIDMap>        DiffPlayerIDToListIDMap;                                  
	TMap<uint64_t, struct FPropertyNameListIDMap>      DiffAIPlayerInfoListIDMaps;                               
	unsigned char                                      UnknownData02[0x20];                                      
	class ABattleRoyaleGameMode*                       GameMode;                                                 
	unsigned char                                      UnknownData03[0xA0];                                      
	bool                                               CheckGlobalGameStateShouldCollectInfo;                    
	EStatePlayerType                                   CheckGlobalCollectPlayerType;                             
	bool                                               bUseCombineAIStateInfo;                                   
	unsigned char                                      UnknownData04[0xAD];                                      
	TMap<uint32_t, class UAIStateInfoComponentBase*>   AIStateInfoCompMap;                                       
	TMap<uint32_t, class UMLAIControllerComponent*>    MLAIControllerCompMap;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIStateInfoManager");
		return pStaticClass;
	}


	void StartRequestCache();
	void SetUseNewDiffCmds(bool InUseNewDiffCmds);
	void SetOpenHeadAndMuzzleInfo(bool InOpenHeadAndMuzzleInfo);
	void ResetWhiteList();
	void MakeRuntimeDataAssetCopy();
	void InitCollectorList(TArray<struct FCollectorInitInfo> CollectorInitInfoList);
	void InitCollector();
	void Init(class UWorld* InWorld);
	void GetSinglePlayerStateInfoToCache(class UWorld* InWorld, class ASTExtraPlayerCharacter* Player);
	void GetGlobalGameStateToCache(class UWorld* InWorld);
	void GetDiffGlobalGameStateToCacheGeneral(class UWorld* InWorld);
	void GetDiffAllPlayerAIStateInfoToCacheGeneral(class UWorld* InWorld);
	void GetAllPlayerStateInfoToCache(class UWorld* InWorld);
	void EndRequestCache();
	void CollectCandidateAIStateInfoToCache(class UWorld* InWorld, EStatePlayerType CollectPlayerType, struct FAIActingCandidateData* CandidateData);
	void CollectAIStateInfoToCache(class UWorld* InWorld, EStatePlayerType CollectPlayerType, class ASTExtraBaseCharacter* PlayerPawn);
};




class UMLAISubSystem : public UWorldSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnAIStateRequestEnd;                                      
	TMap<uint32_t, struct FAIPlayerInteractInfo>       CachePlayerDamageInfo;                                    
	TMap<uint32_t, struct FVehicleDamageInfoContainer> CacheVehicleDamageInfo;                                   
	int                                                MaxCacheDamageInfoNum;                                    
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<class UAIBasicStateInfoComponent*>          AIStateInfoComps;                                         
	TArray<struct FBulletHoleRecordInfo>               CacheBulletHoles;                                         
	TArray<int>                                        PlayerAvailableBackpackItemTypes;                         
	TArray<struct FString>                             TeammateStateWhiteList;                                   
	TArray<TWeakObjectPtr<class AAirDropBoxActor>>     AirDropBoxActors;                                         
	unsigned char                                      UnknownData01[0x410];                                     
	TMap<uint32_t, bool>                               AlreadySendDeadStateMap;                                  
	unsigned char                                      UnknownData02[0x8];                                       
	struct FRedZoneState                               CacheRedZoneInfo;                                         
	float                                              AirAttackTotalTime;                                       
	unsigned char                                      UnknownData03[0x4];                                       
	class UAirAttackComponent*                         AirAttackComp;                                            
	struct FBRBaseGlobalGameState                      GlobalGameState;                                          
	TArray<struct FSpecialZoneState>                   SpecialZones;                                             
	unsigned char                                      UnknownData04[0x70];                                      
	TMap<uint32_t, int>                                CachePlayerRevivalTypes;                                  
	class UMLAIStateInfoManager*                       MLAIStateInfoManager;                                     
	TMap<uint32_t, struct FString>                     VoiceRoomInfoMap;                                         
	TMap<uint32_t, struct FString>                     VoiceServerURLMap;                                        
	TMap<int, int>                                     ItemDurabilityMap;                                        
	int                                                AirDropTag;                                               
	unsigned char                                      UnknownData05[0x4];                                       
	float                                              ProduceSoundInterval;                                     
	int                                                nCanJumpToSky;                                            
	int                                                nNewbieRealHiddenScore;                                   
	int                                                nNewbieMatchCount;                                        
	int                                                nModGameType;                                             
	int                                                OverrideMapID;                                            
	unsigned char                                      UnknownData06[0x50];                                      
	TArray<uint32_t>                                   SilentMLAIList;                                           
	bool                                               WhitelistPlayerStatesSwitch;                              
	unsigned char                                      UnknownData07[0x7];                                       
	TArray<uint32_t>                                   PlayerWhitelist;                                          
	TMap<class APawn*, class APawn*>                   PlayerWhiteMercenary2MasterMap;                           
	bool                                               IncludesMasterTeammatesSwitch;                            
	unsigned char                                      UnknownData08[0x3];                                       
	float                                              MercenaryPerceptionDist;                                  
	float                                              MasterPerceptionDist;                                     
	float                                              UpdateMercenaryPlayerWhiteInterval;                       
	unsigned char                                      UnknownData09[0x50];                                      
	TArray<TWeakObjectPtr<class UAIPerceptionDynamicItemComponent>> CachedDynamicItemComponents;                              
	TArray<TWeakObjectPtr<class UAIPerceptionDynamicItemComponent>> CachedDestructibleItemComponents;                         
	unsigned char                                      UnknownData10[0x58];                                      
	TArray<class ASpecialZoneActor*>                   CacheDynamicSpecialZone;                                  
	TArray<class ASpecialZoneActor*>                   PendingUpdateSpecialZones;                                
	unsigned char                                      UnknownData11[0x18];                                      
	class ABattleRoyaleGameMode*                       CurGameMode;                                              
	unsigned char                                      UnknownData12[0x8];                                       
	class UDataTableProxy*                             ItemTable;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAISubSystem");
		return pStaticClass;
	}


	void UpdateSpecialZoneStateChanged(class ASpecialZoneActor* InSpecialZone);
	void UpdateSpecialZoneInfo(struct FSpecialZoneState* NewZoneInfo);
	void UpdateRedZoneState(class UWorld* InWorld);
	void UpdateMercenaryPlayerWhite();
	void UpdateAirDropBoxStates();
	void UnregisterSpecialMapping(const struct FString& Key);
	void UnregisterDynamicItemComponent(class UAIPerceptionDynamicItemComponent* InDynamicItemComp);
	void UnregisterDestructibleItemComponent(class UAIPerceptionDynamicItemComponent* InComp);
	void StartRequestCache();
	void SetWhitelistPlayerStatesSwitch(bool InSwitch, bool InReset, bool InCheckGlobalState);
	void SetVehicleWeekPointConfig(TMap<uint32_t, struct FString> InVehicleWeekPointConfig);
	void SetUseTablePool(int InUseTablePool);
	void SetStrAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, const struct FString& InAttributeValue);
	void SetReportAllDynamicItems(bool bInEnable);
	void SetPlayerRevivalType(uint32_t InPlayerKey, int InRevivalType);
	void SetPlayerAttributeModifyCompConfig(TMap<uint32_t, struct FString> InAttributeModifyCompConfig);
	void SetPawnStateConfig(TMap<int, uint32_t> InPawnStateConfig);
	void SetOverrideMapID(int InOverrideMapID);
	void SetOpenBTCameraInfo(bool InOpenBTCameraInfo);
	void SetNonMLAIBuffConfig(TMap<int, uint32_t> InBuffIDs);
	void SetNewbieRealHiddenScore(int InNewbieRealHiddenScore);
	void SetNewbieMatchCount(int InNewbieMatchCount);
	static void SetNeedAllInfo(bool bInNeedAllInfo);
	void SetModGameType(int InModGameType);
	void SetMLAIStateInfoManager(class UMLAIStateInfoManager* InMLAIStateInfoManager);
	void SetMLAIBuffConfig(TMap<int, uint32_t> InBuffIDs);
	void SetIntAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, uint64_t InAttributeValue);
	void SetGameAttribute(uint32_t InAttributeID, float InAttributeValue);
	void SetCDSkillConfig(TMap<int, uint32_t> InAttributeCDSkillConfigs);
	static void SetBackpackItemUpdatedMapSwitch(bool bInSwitch);
	void SetAirDropLocation(int InAirDropTag, const struct FVector& AirDropLocation);
	void SetAIAttributeModifyCompConfig(TMap<uint32_t, struct FString> InAttributeModifyCompConfig);
	void SetAIAttribute_CastEnergyWithCount(uint32_t InPlayerKey, uint32_t InAttributeID, int InCurCount, float InCurEnergy, float InLastActiveTime, int InMaxCount, float InMaxEnergy, float InDeltaEnergy);
	void SetAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, float InAttributeValue);
	void ResetAttributeIDToPlayerKeysMap(uint32_t InAttributeID, TArray<uint32_t> InPlayerKeys);
	void RemoveSpecialZoneInfo(uint32_t ZoneID, uint32_t Type);
	void RemoveMercenary2MasterMap(class APawn* MercenaryAI, class APawn* Master);
	void RemoveFromSilentMLAIList(uint32_t InPlayerKey);
	void RemoveFromPlayerWhitelist(uint32_t InPlayerKey);
	void RemoveAICheckVisibilityFilteredActor(uint32_t ActorId);
	void RegisterSpecialMapping(const struct FString& Key, int Value);
	void RegisterDynamicItemComponent(class UAIPerceptionDynamicItemComponent* InDynamicItemComp);
	void RegisterDestructibleItemComponent(class UAIPerceptionDynamicItemComponent* InComp);
	void OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle);
	void OnPlayerStartFire(uint32_t PlayerKey, int Count);
	void OnPlayerPickUpItem(uint32_t InPlayerKey);
	void OnPlayerDamageInfo(class ASTExtraPlayerState* InstigatorPlayerState, class ASTExtraPlayerState* VictimPlayerState, float Damage, const struct FDamageEvent& DamageEvent, float DamageBeforeCalArmor, bool bIsFatalHealthCost, class AActor* DamageCauser, bool bIsNearDeathHealthCost);
	void OnItemStateChanged(const struct FVector& Location);
	void OnAirDropBoxSpawn(class AAirDropBoxActor* AirDropBoxActor);
	void OnAirAttackInfo(EAirAttackInfo airattacktype, int waveIndex, const struct FAirAttackOrder& InAirAttackOrder, const struct FVector& InAirAttackArea);
	bool IsAvailableBackpackItemType(const struct FItemDefineID& DefineID);
	bool IsAIBotGame();
	void InsertPlayerWhitelist(uint32_t InPlayerKey);
	void InsertIntoSilentMLAIList(uint32_t InPlayerKey);
	void GetVoiceRoomInfo(TArray<struct FBattleVoiceRoomInfo>* BattleVoiceRoomInfos);
	struct FString GetServerIPAddress();
	float GetLossTime(class ASTExtraPlayerController* PlayerController);
	int GetItemDurability(int InTypeSpecificID);
	void GetCacheStrAIAttributes(uint32_t InPlayerKey, TArray<struct FStrAIAttribute>* StrAttributes);
	void GetCacheIntAIAttributes(uint32_t InPlayerKey, TArray<struct FIntAIAttribute>* IntAttributes);
	void GetCacheAIAttributes(uint32_t InPlayerKey, TArray<struct FAIAttribute>* Attributes);
	int GetAndCheckAirDopTag();
	void FindPlayerWhiteRange(const struct FVector& InLocation, float InRange);
	void FindMasterTeamMateList(class APawn* Master);
	void EndRequestCache();
	void ClearSpecialMappings();
	void ClearAttributeIDToPlayerKeysMap(uint32_t InAttributeID);
	void ChangeMLAIInfo(class AFakePlayerAIController* AIController, const struct FString& Name, uint64_t DisplayUID, struct FPlayerOBInfo* OBInfo);
	bool CanGetState(uint32_t InPlayerKey);
	bool CanFindInSilentMLAIList(uint32_t InPlayerKey);
	void AddVoiceServerURLInfo(uint32_t PlayerKey, const struct FString& BattleVoiceServerURL);
	void AddVoiceRoomInfo(uint32_t TeamID, const struct FString& BattleVoiceRoomID);
	void AddTeammateMLAITeamID(uint32_t TeamID);
	void AddPendingUpdateSpecialZone(class ASpecialZoneActor* InSpecialZone);
	void AddMercenary2MasterMap(class APawn* MercenaryAI, class APawn* Master, bool bIncludesTeammates);
	void AddAICheckVisibilityFilteredActor(uint32_t ActorId);
};




class UMLAITrainingComponent : public UActorComponent
{
public:
	bool                                               IsBeginRequestAIState;                                    
	bool                                               IsEndRequestAIState;                                      
	bool                                               bPauseGameAfterSendPacket;                                
	unsigned char                                      UnknownData00[0x5];                                       
	class APlayerState*                                PauseGamePlayerState;                                     
	bool                                               bIsPausing;                                               
	unsigned char                                      UnknownData01[0x27];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAITrainingComponent");
		return pStaticClass;
	}


	void StopRunnable();
	void SetPauseGamePlayerState(class APlayerState* InPlayerState);
	bool SetPause(bool bInPause, float InPauseTime);
	void SendAIStateRequest(TArray<unsigned char> Packet);
	bool IsRequestAIState();
	void InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval);
	void EndRequestAIState();
};




class UMPStateInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FMPBaseAIStateInfo>          LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FMPBaseAIStateInfo>          CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FMPBaseAIStateInfo>          CacheAllPlayersInfo;                                      
	struct FDiffMPBaseAllPlayersInfo                   CacheDiffAllPlayersInfoGeneral;                           
	struct FMPBaseGlobalGameState                      CacheGlobalGameState;                                     
	struct FMPBaseGlobalGameState                      LastGlobalGameState;                                      
	struct FMPBaseGlobalGameState                      DiffGlobalGameState;                                      
	struct FDiffMPBaseGlobalGameState                  DiffGlobalGameStateGeneral;                               
	unsigned char                                      UnknownData00[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MPStateInfoCollector");
		return pStaticClass;
	}

};




class USpecialZoneShapeComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.SpecialZoneShapeComponent");
		return pStaticClass;
	}

};




class ASpecialZoneActor : public ALuaActor
{
public:
	float                                              Radius;                                                   
	int                                                Type;                                                     
	bool                                               IsDynamic;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                CustomState;                                              
	TMap<uint32_t, float>                              CustomAttributeMap;                                       
	TMap<uint32_t, uint64_t>                           IntCustomAttributeMap;                                    
	bool                                               IsDestructibleMesh;                                       
	bool                                               IsInstanced;                                              
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                InstancedMaxNum;                                          
	TMap<struct FString, int>                          StaticMeshNameToType;                                     
	bool                                               CheckNearHaveAI;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              CheckAIDist;                                              
	class USpecialZoneShapeComponent*                  SpecialZoneShapeComponent;                                
	class AActor*                                      CacheParentActor;                                         
	unsigned char                                      UnknownData03[0x4];                                       
	uint32_t                                           ExtraState;                                               
	float                                              Health;                                                   
	bool                                               IsSpawnBTAINeedCheck;                                     
	ESpecialZoneType                                   SpecialZoneType;                                          
	unsigned char                                      UnknownData04[0xA];                                       
	class AAIWorldVolume*                              AIWorldVolume;                                            
	TArray<class UInstancedStaticMeshComponent*>       CacheInstancedMeshComps;                                  
	class USTDestructionComponent*                     CacheDestructibleMeshComp;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.SpecialZoneActor");
		return pStaticClass;
	}


	void UpdateType(int InType);
	void UpdateIntCustomAttributeValue(uint32_t InCustomAttributeID, uint64_t InValue, bool bRemove);
	void UpdateHealth(float InHealth);
	void UpdateExtraState(uint32_t InExtraState);
	void UpdateCustomState(int InCustomState);
	void UpdateCustomAttributeValue(uint32_t InCustomAttributeID, float InValue, bool bRemove);
	void SetIsReport(bool bInReport);
	void HandleFragmentsStateChanged(int FragmentItemIndex, EPhotonFracturedMeshFragmentState State, TArray<EPhotonFracturedMeshFragmentState> FragmentState);
	struct FSpecialZoneState GetSpecialZoneState();
	void GetIntCustomAttributeList(TArray<struct FIntAIAttribute>* OutIntCustomAttributeList);
	void GetCustomAttributeList(TArray<struct FAIAttribute>* OutCustomAttributeList);
	void ClearCustomAttributeMap();
};




class USTStrategyLocation_Range : public USTStrategyLocation
{
public:
	unsigned char                                      bUseNavmesh : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Range;                                                    
	int                                                MaxTryTimes;                                              
	unsigned char                                      bCheckPlayerSight : 1;                                    
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              VerticalOffset;                                           
	float                                              PlayerViewDistance;                                       
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              MaxLocationTraceHeightZ;                                  
	TArray<struct FSpawnArea>                          CustomAreas;                                              
	bool                                               bOnlyOnLandscape;                                         
	unsigned char                                      UnknownData03[0x7];                                       
	struct FName                                       LandscapeTag;                                             
	unsigned char                                      UnknownData04[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategyLocation_Range");
		return pStaticClass;
	}


	void ModifyBaseLocation(const struct FVector& InLocation);
	bool GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr);
	void AddSpawnArea(const struct FSpawnArea& NewArea, bool ForceAdd);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategySpecies_Candidate : public USTStrategySpecies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategySpecies_Candidate");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class USTStrategySpecies_Lua : public USTStrategySpecies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategySpecies_Lua");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void LuaSupply(int ReferencedCount);
};




class USTStrategyTiming_Event : public USTStrategyTiming
{
public:
	struct FString                                     EventID;                                                  
	struct FString                                     EventName;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategyTiming_Event");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void OnSpawnEventBroadcast(uint32_t SpawnerID);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};




class UTeammateMLAIControllerComponent : public ULuaActorComponent
{
public:
	struct FString                                     DefaultLuaFilePath;                                       
	struct FGameModeAIPlayerParams                     AIParams;                                                 
	uint32_t                                           AILevel;                                                  
	uint32_t                                           MLAIStyle;                                                
	uint32_t                                           TargetPlayerKey;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	class ASTExtraPlayerController*                    OwnerPlayerController;                                    
	float                                              DefaultExitTime;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	struct FTimerHandle                                TeammateMLAIExitTimer;                                    
	bool                                               bIsTakeOverTeammate;                                      
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.TeammateMLAIControllerComponent");
		return pStaticClass;
	}


	void SetMLAIStyle(uint32_t NewAIStyle);
	void SetIsMLAI(bool InIsMLAI);
	void SetAIParams(struct FGameModeAIPlayerParams* InAIParams);
	void SetAILevel(uint32_t NewAILevel);
	void OnTeammateMLAILost();
	void OnTeammateMLAIExit();
	void OnControllerStateChanged(EStateType StateType);
	bool IsTakeOverTeammate();
	uint32_t GetMLAIStyle();
	struct FGameModeAIPlayerParams GetAIParams();
	uint32_t GetAILevel();
};




class AVehicleAIController : public ABasicAIController
{
public:
	class ASTExtraVehicleBase*                         ControlledVehicle;                                        
	struct FAIVehicleStateData                         AIVehicleStateData;                                       
	class UAIBehaviorAdapter_VehicleBase*              AIBehaviorAdapter;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleAIController");
		return pStaticClass;
	}


	void SetCurEnemy(class APawn* NewEnemy);
	class UVehiclePathFollowingComponent* GetVehiclePathFollow();
	class APawn* GetCurEnemy();
	float GetAIHitRate(float Distance);
	void ExplodeAndDeath();
	void DelayInitVehicleWeapon();
};




class UVehicleAIUserComponent : public UVehicleUserComponentBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleAIUserComponent");
		return pStaticClass;
	}


	void ServerVehicleLeanOut(bool bLeanOut);
	void ServerExitVehicleEx(bool bMustExit);
	void ServerExitVehicle();
	void ServerEnterVehicle(class ASTExtraVehicleBase* InVehicle, unsigned char SeatType);
	void ServerChangeVehicleSeat(int InSeatIndex);
	void MulticastExitVehicle();
	void MulticastEnterVehicle(class ASTExtraVehicleBase* InVehicle, class ASTExtraPlayerCharacter* Pawn, bool bSuccess, unsigned char SeatType, int SeatIndex);
	void MulticastChangeVehicleSeat(int InSeatIndex);
};




class UVehicleCustomDamageEventComponent : public UCustomDamageEventComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleCustomDamageEventComponent");
		return pStaticClass;
	}


	void OnVehicleHPFuelChanged(float Hp, float Fuel);
};




class UVehiclePathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      bWritable_SteeringOnly : 1;                               
	unsigned char                                      bWritable_ThrottleOnly : 1;                               
	unsigned char                                      UnknownData00[0x7];                                       
	class UAIBehaviorAdapter_VehicleBase*              VehicleAdapter;                                           
	bool                                               bPathDebug;                                               
	unsigned char                                      UnknownData01[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehiclePathFollowingComponent");
		return pStaticClass;
	}

};




class UVehicleStateInfoCollector : public UStateInfoCollectorBase
{
public:
	TMap<uint32_t, struct FVehicleAIStateInfo>         LastAllPlayerStateInfoMap;                                
	TMap<uint32_t, struct FVehicleAIStateInfo>         CurrentAllPlayerStateInfoMap;                             
	TMap<uint32_t, struct FVehicleAIStateInfo>         CacheAllPlayersInfo;                                      
	struct FDiffVehicleAllPlayersInfo                  CacheDiffAllPlayersInfoGeneral;                           
	struct FVehicleGlobalGameState                     CacheGlobalGameState;                                     
	struct FVehicleGlobalGameState                     LastGlobalGameState;                                      
	struct FDiffVehicleGlobalGameState                 DiffGlobalGameStateGeneral;                               
	TMap<uint64_t, struct FVehicleState>               CacheVehicleStates;                                       
	unsigned char                                      UnknownData00[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleStateInfoCollector");
		return pStaticClass;
	}


	void HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params);
};


}

