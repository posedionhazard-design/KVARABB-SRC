#pragma once


 
namespace SDK
{






class UBehaviorControlComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	class APawn*                                       OwnerPawn;                                                
	class AAIController*                               AIController;                                             
	class UBehaviorTreeComponent*                      BehaviorTreeComp;                                         
	class UBlackboardComponent*                        BlackboardComp;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BehaviorControlComponent");
		return pStaticClass;
	}


	void UnPossessed();
	void StopBehaviorTree();
	void StopBehavior(const struct FString& Reason);
	bool RunBehaviorTreeByIndex(int PathIndex);
	void ResumeBehavior(const struct FString& Reason);
	void RestartBehavior();
	void PossessedBy(class AController* NewController);
	void PauseBehavior(const struct FString& Reason);
	void OnPlayerActiveRegionsChanged(bool bEnter);
};




class UBTDecorator_Generic_HasAIState : public UBTDecorator
{
public:
	TArray<struct FGameplayTag>                        States;                                                   
	EHasAITagStateLogic                                LogicOp;                                                  
	bool                                               bExact;                                                   
	unsigned char                                      UnknownData00[0x6];                                       
	struct FBlackboardKeySelector                      BBKeyTarget;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTDecorator_Generic_HasAIState");
		return pStaticClass;
	}

};




class UBTService_Generic_ChooseEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyEnemy;                                               
	struct FBlackboardKeySelector                      BBKeyCanNotSeeTarget;                                     
	struct FBlackboardKeySelector                      BBKeyDynamicSearchRuleIndex;                              
	bool                                               bShowDebugInfo;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              DebugInfoLife;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTService_Generic_ChooseEnemy");
		return pStaticClass;
	}

};




class UBTTask_Generic_ClearEnemy : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyEnemy;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTTask_Generic_ClearEnemy");
		return pStaticClass;
	}

};




class AGenericAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericAIController");
		return pStaticClass;
	}

};




class UGenericAnimInstanceBase : public UDataDriverAnimInstance
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericAnimInstanceBase");
		return pStaticClass;
	}

};




class UGenericAnimShareParamsCompBase : public UDataDriverAnimShareParamsComp
{
public:
	struct FSoftObjectPath                             AnimDataAsset;                                            
	bool                                               bSkipAssetLoadingOnDedicatedServer;                       
	unsigned char                                      UnknownData00[0x7];                                       
	struct FGameplayTag                                AnimContextType;                                          
	unsigned char                                      UnknownData01[0x50];                                      
	unsigned char                                      UnknownData02[0x30];                                      
	struct FScriptMulticastDelegate                    OnAnimContainerPreActive;                                 
	struct FScriptMulticastDelegate                    OnAnimContainerActive;                                    
	unsigned char                                      UnknownData03[0x10];                                      
	struct FName                                       AnimSourceKey;                                            
	bool                                               bAnimAssetsLoaded;                                        
	unsigned char                                      UnknownData04[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericAnimShareParamsCompBase");
		return pStaticClass;
	}


	bool IsAnimAssetsLoaded();
	class UAnimationAsset* GetLoadedAnimAsset(const struct FGameplayTag& Tag);
	void DeactiveAnimContainerWithInstance(const struct FName& InTag, class UClass* AnimClass, bool bForceRemove);
	void DeactiveAnimContainer(const struct FName& InTag, bool bForceRemove);
	void ActiveAnimContainerWithInstance(const struct FName& InTag, class UClass* AnimClass, bool bEndNotify);
	void ActiveAnimContainer(const struct FName& InTag, bool bEndNotify);
};




class UGenericCameraSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      
	float                                              ArmLengthInterpSpeed;                                     
	float                                              OffsetInterpSpeed;                                        
	float                                              FieldOfViewInterpSpeed;                                   
	bool                                               bApplyInitialPitch;                                       
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              InitialPitch;                                             
	bool                                               bIndependentOrbit;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              MinOrbitPitch;                                            
	float                                              MaxOrbitPitch;                                            
	bool                                               bEnableZoom;                                              
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              MinZoomArmLength;                                         
	float                                              MaxZoomArmLength;                                         
	TWeakObjectPtr<class APlayerController>            ViewingController;                                        
	TWeakObjectPtr<class UCameraComponent>             CameraComponent;                                          
	unsigned char                                      UnknownData04[0xCC];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCameraSpringArmComponent");
		return pStaticClass;
	}


	void NotifyEndViewTarget(class APlayerController* Controller);
	void NotifyBecomeViewTarget(class APlayerController* Controller);
	bool IsCameraStateActive(const struct FName& StateName);
	void HandleViewTargetChanged(class AActor* NewTarget, class AActor* PreviousTarget);
	void HandleControllerRotationChanged();
	bool DeactivateCameraState(const struct FName& StateName);
	void AddZoomInput(float Delta);
	void AddLookInput(float Yaw, float Pitch);
	bool ActivateCameraState(const struct FName& StateName, float DurationSeconds);
};




class AGenericCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	struct FScriptMulticastDelegate                    OnGenericInputEvent;                                      
	ESpecialMovementType                               CurrentSpecialMoveType;                                   
	unsigned char                                      UnknownData02[0x7];                                       
	class UStateReflectComp*                           StateReflectComp;                                         
	ERegionSizeIndex                                   RegionSize;                                               
	bool                                               bRegionStatic;                                            
	unsigned char                                      UnknownData03[0x6];                                       
	class UAttrModifyComponent*                        AttrModifyComp;                                           
	struct FString                                     LuaFilePath;                                              
	TArray<struct FGenericInputOverrideEntry>          InputOverrideHandlers;                                    
	unsigned char                                      UnknownData04[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCharacter");
		return pStaticClass;
	}


	void UnregisterInputOverrideHandler(const struct FName& Key);
	void SetCurrentSpecialMoveType(ESpecialMovementType InSpecialMoveType);
	void RegisterRegionObjectIfEnabled();
	void RegisterInputOverrideHandler(const struct FName& Key, int Priority, const struct FScriptDelegate& Handler);
	void OnStateLeft(const struct FGameplayTag& State);
	void OnStateEntered(const struct FGameplayTag& State);
	void OnRep_PlayerKey();
	void OnRep_CurrentSpecialMoveType(ESpecialMovementType OldType);
	bool IsInObjectPool();
	bool IsAlive();
	void HandleStateLeft(const struct FGameplayTag& State);
	void HandleStateEntered(const struct FGameplayTag& State);
	class UStateReflectComp* GetStateReflectComp();
	void DispatchGenericInputEvent(const struct FName& EventName, EGenericInputEventType EventType, float Value);
};




class UGenericCharacterAnimShareParamsComp : public UGenericAnimShareParamsCompBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCharacterAnimShareParamsComp");
		return pStaticClass;
	}

};




class UGenericCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	TMap<TEnumAsByte<ECustomMovmentMode>, ESpecialMovementType> CustomMoveModeToSpecialMoveType;                          
	TMap<ESpecialMovementType, class USpecialMoveBaseObj*> SpecialObjes;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCharacterMovementComponent");
		return pStaticClass;
	}


	ESpecialMovementType GetSpecialMoveTypebyCustomMovemode(unsigned char CustomMovmentMode);
	class USpecialMoveBaseObj* GetSpecialMoveObjBySpecialMoveType(ESpecialMovementType SpecialMoveType);
	class USpecialMoveBaseObj* GetSpecialMoveObjByCustomMovementMode(unsigned char CustomMovmentMode);
	class USpecialMoveBaseObj* GetCurrentSpecialMoveByType();
};




class UGenericChooseEnemyComponent : public UActorComponent
{
public:
	struct FGenericMonsterSensingConfig                SensingConfig;                                            
	struct FGenericSensingRuntimeState                 RuntimeState;                                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericChooseEnemyComponent");
		return pStaticClass;
	}


	class ACharacter* SelectFromCandidates(TArray<class ACharacter*> Filtered, EGenericSearchEnemyRule Rule);
	bool IsValidEnemy(class ACharacter* Target, bool bUseMonsterFilter, bool* bOutIsNearDeath);
	static bool IsTargetAlive(class ACharacter* Target);
	bool IsEnemyByActor(class ACharacter* InTarget);
	static float GetTargetHealth(class ACharacter* Target);
	struct FGenericMonsterSensingConfig GetSensingConfig();
	class AGenericMonsterBase* GetOwnerMonster();
	void CollectPlayerCandidates(TArray<class ACharacter*>* OutPlayers);
	void CollectMonsterCandidates(TArray<class ACharacter*>* OutMonsters);
};




class UGenericHitReactionAnimAbility : public UAnimAbility
{
public:
	struct FAnimAssetBlendSpace                        HitBlendSpace;                                            
	struct FVector                                     HitDirection;                                             
	float                                              HitNormalizedTime;                                        
	float                                              HitWeight;                                                
	unsigned char                                      UnknownData00[0x1C];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericHitReactionAnimAbility");
		return pStaticClass;
	}

};




class UGenericHitReactionComponent : public UActorComponent
{
public:
	EGenericHitAnimationMode                           AnimationMode;                                            
	unsigned char                                      UnknownData00[0x7];                                       
	struct FGenericHitReactionEntry                    DefaultReaction;                                          
	TArray<struct FGenericHitReactionEntry>            Reactions;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericHitReactionComponent");
		return pStaticClass;
	}


	bool PlayHitReaction(EAvatarDamagePosition BodyPart, const struct FVector& LocalSourceDirection, const struct FVector& ImpactPoint);
	void MulticastPlayHitReaction(EAvatarDamagePosition BodyPart, EGenericHitDirection Direction, const struct FVector& ImpactPoint);
};




class UGenericLocomotionAnimAbility : public UAnimAbility
{
public:
	float                                              DirectionInterpSpeed;                                     
	float                                              InAirVelocityThreshold;                                   
	float                                              Speed;                                                    
	float                                              Direction;                                                
	bool                                               bIsFalling;                                               
	TEnumAsByte<EMovementMode>                         MovementMode;                                             
	bool                                               bIsJumping;                                               
	unsigned char                                      UnknownData00[0x1];                                       
	TWeakObjectPtr<class ACharacter>                   OwnerCharacter;                                           
	TWeakObjectPtr<class UCharacterMovementComponent>  OwnerCMC;                                                 
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericLocomotionAnimAbility");
		return pStaticClass;
	}

};




class AGenericMonsterBase : public AGenericCharacter
{
public:
	unsigned char                                      UnknownData00[0x68];                                      
	struct FScriptMulticastDelegate                    OnMonsterSetPlayedIdleIndex;                              
	struct FMonsterIdleIndex                           MonsterIdleIndex;                                         
	struct FScriptMulticastDelegate                    OnMonsterHurting;                                         
	struct FScriptMulticastDelegate                    OnEnemyChanged;                                           
	unsigned char                                      UnknownData01[0x4];                                       
	float                                              WalkSpeed;                                                
	float                                              RunSpeed;                                                 
	float                                              SpeedScale;                                               
	int                                                TeamID;                                                   
	int                                                Campid;                                                   
	int                                                MonsterLevel;                                             
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     CharacterName;                                            
	class UUTSkillManagerComponent*                    SkillManager;                                             
	class USTBuffSystemComponent*                      BuffSystem;                                               
	class USimulateSyncSmoothComponent*                SimulateSyncSmooth;                                       
	class UGenericChooseEnemyComponent*                ChooseEnemyComponent;                                     
	class UBehaviorControlComponent*                   BehaviorControlComp;                                      
	bool                                               bEnableSimulateSyncSmooth;                                
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              MovementTickInterval;                                     
	bool                                               bEnableMobMoveBatch;                                      
	bool                                               bRegisteredInMoveBatchMgr;                                
	unsigned char                                      CurrentMonsterLOD;                                        
	unsigned char                                      AutoDormancyType;                                         
	float                                              SpawnAnimTime;                                            
	unsigned char                                      UnknownData04[0x18];                                      
	float                                              LandDuration;                                             
	float                                              InAirVelocityThreshold;                                   
	float                                              MoveSpeedTolerance;                                       
	unsigned char                                      UnknownData05[0x4];                                       
	bool                                               bAllowVehicleKnockback;                                   
	unsigned char                                      UnknownData06[0x3];                                       
	float                                              VehicleHitLaunchPitchDeg;                                 
	float                                              VehicleHitRefMinImpulse;                                  
	float                                              VehicleHitRefMaxImpulse;                                  
	float                                              VehicleHitMinLaunchVelocity;                              
	float                                              VehicleHitMaxLaunchVelocity;                              
	bool                                               bAllowLaunchAirState;                                     
	unsigned char                                      UnknownData07[0x3];                                       
	float                                              DelayCheckLaunchAirState;                                 
	float                                              MinLaunchAirGroundTime;                                   
	float                                              MaxLaunchAirGroundTime;                                   
	float                                              LaunchAirRiseUpDuration;                                  
	unsigned char                                      UnknownData08[0x1C];                                      
	float                                              StunBeginAnimTime;                                        
	float                                              StunAnimTime;                                             
	float                                              StunRecoveryAnimTime;                                     
	unsigned char                                      UnknownData09[0x1C];                                      
	bool                                               CloseCollisionForMeshOnDS;                                
	bool                                               bForceAnimationUpdatedOnClient;                           
	bool                                               bHideMeshUntilAnimAssetsLoaded;                           
	unsigned char                                      UnknownData10[0x1];                                       
	float                                              ShowMeshDelayAfterAnimAssetsLoaded;                       
	struct FScriptMulticastDelegate                    OnEditorKeyPressedDelegate;                               
	unsigned char                                      UnknownData11[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterBase");
		return pStaticClass;
	}


	void SetTeamID(int NewTeamId);
	void SetSpeedScale(float NewSpeedScale);
	void SetMonsterIdleIndex(int NewIndex);
	void SetCharacterName(const struct FString& NewCharacterName);
	void SetCampID(int NewCampID);
	class ACharacter* SelectEnemyByLua(TArray<class ACharacter*> Candidates);
	float ReviseSenseDistanceByActor(float InDistance, class AActor* InTarget);
	void ReceivedPlayerActiveRegionsChanged(bool bEnter);
	void OnSmoothComponentSnapshotPreReplicate();
	void OnRep_MonsterIdleIndex();
	void OnRep_CampID();
	void OnEnemyChangedInternal(class APawn* NewEnemy);
	void LeaveLaunchAirRiseUp();
	void LeaveLaunchAirGround();
	void LaunchCharacterWithParam(const struct FVector& LaunchVelocity, bool bChangeState);
	bool IsValidEnemyTarget(class AActor* InTarget);
	bool IsRegionActive();
	bool IsInCombat();
	bool IsEnemyByActor(class ACharacter* InTarget);
	int GetTeamID();
	float GetSpeedScale();
	struct FGenericMonsterSensingConfig GetSensingConfig();
	int GetMonsterIdleIndex();
	float GetCurrentSpeed();
	class UGenericChooseEnemyComponent* GetChooseEnemyComponent();
	struct FString GetCharacterName();
	int GetCampID();
	class USTBuffSystemComponent* GetBuffComponent();
	void FinishStunRecovery();
	void ExitSpawnState();
	void EnterStunRecovery();
	void EnterStun();
	void DoHurting(const struct FVector& HurtDir);
	void ClearStunState();
	void ClearLaunchAirState();
	void CheckLaunchAirState();
	void ChangeWalkSpeed(EMobWalkType InWalkType);
};




class AGenericMonster : public AGenericMonsterBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      
	float                                              HealthMax;                                                
	float                                              Health;                                                   
	TArray<EDamageableGameObjectType>                  DamageableGameObjectTypes;                                
	float                                              TakeDamageScale;                                          
	float                                              DamageScale;                                              
	class UCurveFloat*                                 VehicleSpeedDamageCurve;                                  
	float                                              VehicleHitDamageScale;                                    
	float                                              VehicleHitMinDamageSpeedKmh;                              
	float                                              VehicleHitRefDamageSpeedKmh;                              
	float                                              VehicleHitMinDamageImpulse;                               
	float                                              VehicleHitRefDamageImpulse;                               
	float                                              VehicleHitMinDamage;                                      
	float                                              VehicleHitMaxDamage;                                      
	float                                              DeadAnimTime;                                             
	float                                              HurtAnimTime;                                             
	unsigned char                                      IsInvincible : 1;                                         
	unsigned char                                      UnknownData01[0x1];                                       
	bool                                               bForceOpenPawnCollision;                                  
	bool                                               bShowGenericHPBar;                                        
	int                                                GenericHPBarPlanID;                                       
	int                                                CustomHPBarType;                                          
	int                                                CustomHPBarScreenMarkID;                                  
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     CustomHPBarUIConfig;                                      
	unsigned char                                      UnknownData03[0x10];                                      
	class UPartHitComponentBase*                       PartHitComp;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonster");
		return pStaticClass;
	}


	void SetTakeDamageScale(float NewTakeDamageScale);
	void SetIsInvincible(bool bInvincible, unsigned char InMaskBit);
	void SetHealthMax(float NewHealthMax);
	void SetHealth(float NewHealth);
	void SetDamageScale(float NewDamageScale);
	float OnTargetTakeDamage(class AActor* DamageTarget, float Damage, class AController* EventInstigator);
	void OnDie(class APawn* Causer);
	float HandleTargetTakeDamage(class AActor* DamageTarget, float Damage, class AController* EventInstigator);
	float GetTakeDamageScale();
	class UPartHitComponentBase* GetPartHitComponentBase();
	bool GetIsInvincible();
	float GetHealthMax();
	float GetHealth();
	float GetDamageScale();
	float CalcVehicleHitDamage(class ASTExtraVehicleBase* OtherVehicle, const struct FVector& HitImpulseDirection, float HitSpeed);
	void BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType);
	float BPPreTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};




class UGenericMonsterAnimInstance : public UGenericAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	float                                              Speed;                                                    
	float                                              RandomIdleIndex;                                          
	int                                                RandomIdleIndexInt;                                       
	unsigned char                                      UnknownData01[0x4];                                       
	struct FGameplayTag                                RandomIdleBS1DTag;                                        
	struct FVector                                     HurtDirection;                                            
	float                                              HurtingAccumulate;                                        
	bool                                               bIsHurting;                                               
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              HurtingAnimPlayRate;                                      
	struct FGameplayTag                                HurtBSTag;                                                
	TMap<struct FGameplayTag, struct FGameplayTag>     StateToMontageParamMap;                                   
	bool                                               bMonsterIdleIndexDelegateBound;                           
	unsigned char                                      UnknownData03[0x7];                                       
	class AGenericMonsterBase*                         CachedOwnerMonster;                                       
	bool                                               bMonsterHurtingDelegateBound;                             
	unsigned char                                      UnknownData04[0x7];                                       
	class UStateReflectComp*                           CachedStateReflectComp;                                   
	TArray<struct FGameplayTag>                        PendingMontageTags;                                       
	bool                                               bAnimAssetsLoadedDelegateBound;                           
	unsigned char                                      UnknownData05[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterAnimInstance");
		return pStaticClass;
	}


	float PlayMontageWithAnimEventByName(const struct FName& InTag);
	float PlayMontageWithAnimEvent(const struct FGameplayTag& EventTag);
	void OnMonsterRandomIdleIndexSet(int NewIndex);
	void OnMonsterHurting(class AGenericMonsterBase* Monster, const struct FVector& HurtDir);
	void HandleStateEntered(const struct FGameplayTag& State);
	class UGenericMonsterAnimShareParamsComp* GetMonsterShareParams();
};




class UGenericMonsterAnimShareParamsComp : public UGenericAnimShareParamsCompBase
{
public:
	TMap<struct FGameplayTag, struct FGameplayTag>     StateToAnimParamMap;                                      
	class UStateReflectComp*                           CachedStateRef;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterAnimShareParamsComp");
		return pStaticClass;
	}


	void HandleStateLeft(const struct FGameplayTag& State);
	void HandleStateEntered(const struct FGameplayTag& State);
};




class AGenericMonsterEditor : public AGenericMonster
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FActorEditorLargeDataContent                LargeDataContent;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterEditor");
		return pStaticClass;
	}


	void SetLargeDataContent(TArray<unsigned char> NewContent);
	void OnRep_LargeDataContent();
	TArray<unsigned char> GetLargeDataContent();
};




class UGenericMonsterLODComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	unsigned char                                      CurrentLOD;                                               
	bool                                               bExemptFromLOD;                                           
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<struct FMonsterLODLevelConfig>              LevelConfigs;                                             
	float                                              MovementTickInterval;                                     
	unsigned char                                      UnknownData02[0x4];                                       
	struct FScriptMulticastDelegate                    OnLODChangedDelegate;                                     
	class AGenericMonsterBase*                         CachedOwnerMonster;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterLODComponent");
		return pStaticClass;
	}

};




class AGenericNPC : public AGenericMonsterBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericNPC");
		return pStaticClass;
	}

};




class UGenericPartHitComponent : public UPartHitComponentBase
{
public:
	class ACharacter*                                  OwnerCharacter;                                           
	float                                              UpdateHitBoxDeltaTime;                                    
	bool                                               bActivePartHit;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	uint64_t                                           LastPartHitRefreshBoxCollisionFrameNum;                   
	TMap<struct FGameplayTag, TEnumAsByte<ESTEPoseState>> TagToPoseMap;                                             
	TMap<TEnumAsByte<ESTEPoseState>, struct FHitBoxTagInfo> HitBoxTagMapData;                                         
	struct FHitBoxTagInfo                              UselessHitBoxData;                                        
	TArray<class UPrimitiveComponent*>                 HitBoxList;                                               
	unsigned char                                      UnknownData01[0x20];                                      
	TMap<struct FString, EAvatarDamagePosition>        NewHitBodyPosMap;                                         
	float                                              PawnCollisionCountdown;                                   
	bool                                               bIsRefreshPawnCollision;                                  
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              BoxCollisionCountdown;                                    
	bool                                               bIsRefreshBoxCollision;                                   
	TEnumAsByte<EHitPartJugementType>                  ClientHitPartJudgment;                                    
	unsigned char                                      UnknownData03[0x1];                                       
	bool                                               bDebugDrawHitPos;                                         
	bool                                               bCloseCharacterMeshCollision;                             
	unsigned char                                      UnknownData04[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericPartHitComponent");
		return pStaticClass;
	}


	void UpdatePoseCollisionShapes(TEnumAsByte<ESTEPoseState> PoseState);
	void UpdateAllInstanceBodyTransform(int Type);
	void RefreshWorldBoxCollision(float countdown);
	void RefreshByStateChange(const struct FGameplayTag& State);
	void InitBodyHitBox();
	class UPrimitiveComponent* GetHitBoxByState(TEnumAsByte<ESTEPoseState> InPoseState);
	EAvatarDamagePosition GetHitBodyTypeByHitPos(const struct FVector& InHitPos);
	EAvatarDamagePosition GetHitBodyTypeByBoneName(const struct FString& InBoneName);
	EAvatarDamagePosition GetHitBodyType(const struct FVector& InHitPos, const struct FVector& InImpactVec, const struct FString& InBoneName);
	TEnumAsByte<EHitPartJugementType> GetCurHitPartJudgementType();
	void CloseBodyBulletCollision();
	EAvatarDamagePosition CalcHitBodyType(const struct FVector& InHitPos, const struct FVector& InProjvec, const struct FVector& InCenterPos, const struct FBodyTypeDef& InBodyDef);
};




class AGenericPlayerCharacter : public AGenericCharacter
{
public:
	unsigned char                                      UnknownData00[0x60];                                      
	float                                              Health;                                                   
	float                                              HealthMax;                                                
	float                                              DamageScale;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	class UPartHitComponentBase*                       PartHitComp;                                              
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericPlayerCharacter");
		return pStaticClass;
	}


	float GetHealth();
};




class UGenericStateAnimAbility : public UAnimAbility
{
public:
	TArray<struct FGameplayTag>                        WatchedStates;                                            
	TWeakObjectPtr<class UStateReflectComp>            CachedStateRef;                                           
	TArray<class UBoolProperty*>                       WatchedProps;                                             
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericStateAnimAbility");
		return pStaticClass;
	}


	void HandleStateLeft(const struct FGameplayTag& State);
	void HandleStateEntered(const struct FGameplayTag& State);
};




class UPlanarDragComponent : public UActorComponent
{
public:
	float                                              MinLength;                                                
	float                                              MaxLength;                                                
	float                                              HeightOffset;                                             
	unsigned char                                      UnknownData00[0x44];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.PlanarDragComponent");
		return pStaticClass;
	}


	void SetDragEnabled(class ASTExtraPlayerController* Controller, bool bEnabled);
	void SetAimLength(float Length);
	bool IsDragging();
	void HandleTouchRelease(TEnumAsByte<ETouchIndex> FingerIndex);
	void HandleTouchMove(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void HandleTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	bool ConsumeAimInput(struct FVector* Direction, float* Length);
	void CancelDrag();
};




class UStateReflectComp : public UActorComponent
{
public:
	class UStateRelationDataAsset*                     RelationData;                                             
	struct FScriptMulticastDelegate                    OnStateEntered;                                           
	struct FScriptMulticastDelegate                    OnStateLeft;                                              
	struct FGameplayTagContainer                       CurrentStates;                                            
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.StateReflectComp");
		return pStaticClass;
	}


	void OnRep_CurrentStates(const struct FGameplayTagContainer& OldStates);
	void LeaveState(const struct FGameplayTag& State);
	bool HasState(const struct FGameplayTag& State, bool bExact);
	struct FGameplayTagContainer GetCurrentStates();
	bool EnterState(const struct FGameplayTag& State);
	void ClearAllStates();
	bool CanEnterState(const struct FGameplayTag& State);
};




class UStateRelationDataAsset : public UDataAsset
{
public:
	TArray<struct FStateRelationEntry>                 Entries;                                                  
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.StateRelationDataAsset");
		return pStaticClass;
	}

};


}

