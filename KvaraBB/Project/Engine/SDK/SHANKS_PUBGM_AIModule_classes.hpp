#pragma once


 
namespace SDK
{






class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     NodeName;                                                 
	class UBehaviorTree*                               TreeAsset;                                                
	class UBTCompositeNode*                            ParentNode;                                               
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTNode");
		return pStaticClass;
	}

};




class UBTAuxiliaryNode : public UBTNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return pStaticClass;
	}

};




class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00 : 7;                                        
	unsigned char                                      bInverseCondition : 1;                                    
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            
	unsigned char                                      UnknownData01[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator");
		return pStaticClass;
	}

};




class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                 
	float                                              RandomDeviation;                                          
	unsigned char                                      bCallTickOnSearchStart : 1;                               
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService");
		return pStaticClass;
	}

};




class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                 
	unsigned char                                      bIgnoreRestartSelf : 1;                                   
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTaskNode");
		return pStaticClass;
	}

};




class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      
	unsigned char                                      bStopAILogicOnUnposses : 1;                               
	unsigned char                                      bLOSflag : 1;                                             
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  
	unsigned char                                      bAllowStrafe : 1;                                         
	unsigned char                                      bWantsPlayerState : 1;                                    
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;               
	unsigned char                                      UnknownData01[0x7];                                       
	class UPathFollowingComponent*                     PathFollowingComponent;                                   
	class UBrainComponent*                             BrainComponent;                                           
	class UAIPerceptionComponent*                      PerceptionComponent;                                      
	class UPawnActionsComponent*                       ActionsComp;                                              
	class UBlackboardComponent*                        Blackboard;                                               
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                             
	class UClass*                                      DefaultNavigationFilterClass;                             
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                     
	unsigned char                                      UnknownData02[0x1];                                       
	bool                                               UseGameplayTasksComponent;                                
	bool                                               bShareNavigationSystem;                                   
	unsigned char                                      UnknownData03[0x1];                                       
	struct FVector                                     ShareNavSysOffset;                                        
	bool                                               bEnableActiveRegion;                                      
	unsigned char                                      UnknownData04[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIController");
		return pStaticClass;
	}


	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnUnpossess(class APawn* UnpossessedPawn);
	void OnPossess(class APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};




class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return pStaticClass;
	}

};




class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return pStaticClass;
	}

};




class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	class UClass*                                      FilterClass;                                              
	float                                              ObservedBlackboardValueTolerance;                         
	unsigned char                                      bObserveBlackboardValue : 1;                              
	unsigned char                                      bAllowStrafe : 1;                                         
	unsigned char                                      bAllowPartialPath : 1;                                    
	unsigned char                                      bTrackMovingGoal : 1;                                     
	unsigned char                                      bProjectGoalLocation : 1;                                 
	unsigned char                                      bReachTestIncludesAgentRadius : 1;                        
	unsigned char                                      bReachTestIncludesGoalRadius : 1;                         
	unsigned char                                      bStopOnOverlap : 1;                                       
	unsigned char                                      bStopOnOverlapNeedsUpdate : 1;                            
	unsigned char                                      UnknownData01[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return pStaticClass;
	}

};




class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return pStaticClass;
	}

};




class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                
	class UBlackboardData*                             BlackboardAsset;                                          
	unsigned char                                      UnknownData00[0x20];                                      
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             
	unsigned char                                      UnknownData01[0xB8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardComponent");
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
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};




class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      
	class UNavMovementComponent*                       MovementComp;                                             
	unsigned char                                      UnknownData01[0x8];                                       
	class ANavigationData*                             MyNavData;                                                
	unsigned char                                      UnknownData02[0x170];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return pStaticClass;
	}


	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};




class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                     
	EAISenseNotifyType                                 NotifyType;                                               
	unsigned char                                      bWantsNewPawnNotification : 1;                            
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       
	unsigned char                                      UnknownData00[0x2];                                       
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                 
	unsigned char                                      UnknownData01[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense");
		return pStaticClass;
	}

};




class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                               
	float                                              MaxAge;                                                   
	unsigned char                                      bStartsEnabled : 1;                                       
	unsigned char                                      UnknownData00[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig");
		return pStaticClass;
	}

};




class UAISenseEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent");
		return pStaticClass;
	}

};




class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FVector                                     CrowdAgentMoveDirection;                                  
	unsigned char                                      UnknownData01[0x4];                                       
	class UCharacterMovementComponent*                 CharacterMovement;                                        
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           
	unsigned char                                      UnknownData02[0x24];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return pStaticClass;
	}


	void SuspendCrowdSteering(bool bSuspend);
};




class UCrowdManager : public UCrowdManagerBase
{
public:
	unsigned char                                      EnabledCrowd : 1;                                         
	unsigned char                                      UnknownData00[0x7];                                       
	class ANavigationData*                             MyNavData;                                                
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         
	int                                                MaxAgents;                                                
	float                                              MaxAgentRadius;                                           
	int                                                MaxAvoidedAgents;                                         
	int                                                MaxAvoidedWalls;                                          
	float                                              NavmeshCheckInterval;                                     
	float                                              PathOptimizationInterval;                                 
	float                                              SeparationDirClamp;                                       
	float                                              PathOffsetRadiusMultiplier;                               
	unsigned char                                      UnknownData01 : 4;                                        
	unsigned char                                      bResolveCollisions : 1;                                   
	unsigned char                                      UnknownData02[0x7F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.CrowdManager");
		return pStaticClass;
	}

};




class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UBlackboardComponent*                        BlackboardComp;                                           
	class AAIController*                               AIOwner;                                                  
	unsigned char                                      UnknownData01[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BrainComponent");
		return pStaticClass;
	}


	void StopLogic(const struct FString& Reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};




class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	TArray<class UBTNode*>                             NodeInstances;                                            
	unsigned char                                      UnknownData01[0x108];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return pStaticClass;
	}


	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};




class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return pStaticClass;
	}

};




class UBTDecorator_Cooldown : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return pStaticClass;
	}

};




class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return pStaticClass;
	}

};




class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              RandomDeviation;                                          
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_Wait");
		return pStaticClass;
	}

};




class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                
	struct FScriptMulticastDelegate                    OnFail;                                                   
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return pStaticClass;
	}


	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);
};




class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return pStaticClass;
	}


	static void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	static class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	static void SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	static void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	static bool IsValidAIRotation(const struct FRotator& Rotation);
	static bool IsValidAILocation(const struct FVector& Location);
	static bool IsValidAIDirection(const struct FVector& DirectionVector);
	static class UNavigationPath* GetCurrentPath(class AController* Controller);
	static class UBlackboardComponent* GetBlackboard(class AActor* Target);
	static class AAIController* GetAIController(class AActor* ControlledActor);
	static class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};




class UAIDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider");
		return pStaticClass;
	}

};




class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                
	float                                              FloatValue;                                               
	int                                                IntValue;                                                 
	bool                                               BoolValue;                                                
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return pStaticClass;
	}

};




class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Max;                                                      
	unsigned char                                      bInteger : 1;                                             
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return pStaticClass;
	}

};




class UAIHotSpotManager : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return pStaticClass;
	}

};




class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                             
	class UClass*                                      DominantSense;                                            
	unsigned char                                      UnknownData00[0x10];                                      
	class AAIController*                               AIOwner;                                                  
	unsigned char                                      UnknownData01[0x80];                                      
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                      
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return pStaticClass;
	}


	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};




class UAIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return pStaticClass;
	}

};




class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return pStaticClass;
	}


	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};




class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	TArray<class UAISense*>                            Senses;                                                   
	float                                              PerceptionAgingRate;                                      
	unsigned char                                      UnknownData01[0x9C];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return pStaticClass;
	}


	static void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	static bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	static class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
};




class UAIResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIResourceInterface");
		return pStaticClass;
	}

};




class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIResource_Movement");
		return pStaticClass;
	}

};




class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AIResource_Logic");
		return pStaticClass;
	}

};




class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                         
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return pStaticClass;
	}


	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};




class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Damage");
		return pStaticClass;
	}


	static void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};




class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                              
	float                                              SpeedOfSoundSq;                                           
	unsigned char                                      UnknownData00[0x54];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Hearing");
		return pStaticClass;
	}


	static void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};




class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Prediction");
		return pStaticClass;
	}


	static void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	static void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};




class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      
	int                                                MaxTracesPerTick;                                         
	int                                                MinQueriesPerTimeSliceCheck;                              
	double                                             MaxTimeSlicePerTick;                                      
	float                                              HighImportanceQueryDistanceThreshold;                     
	unsigned char                                      UnknownData01[0x4];                                       
	float                                              MaxQueryImportance;                                       
	float                                              SightLimitQueryImportance;                                
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Sight");
		return pStaticClass;
	}

};




class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Team");
		return pStaticClass;
	}

};




class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISense_Touch");
		return pStaticClass;
	}

};




class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return pStaticClass;
	}

};




class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return pStaticClass;
	}

};




class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return pStaticClass;
	}

};




class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           
	float                                              HearingRange;                                             
	float                                              LoSHearingRange;                                          
	unsigned char                                      bUseLoSHearing : 1;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return pStaticClass;
	}

};




class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return pStaticClass;
	}

};




class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           
	float                                              SightRadius;                                              
	float                                              LoseSightRadius;                                          
	float                                              PeripheralVisionAngleDegrees;                             
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   
	float                                              AutoSuccessRangeFromLastSeenLocation;                     
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return pStaticClass;
	}

};




class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return pStaticClass;
	}

};




class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return pStaticClass;
	}

};




class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return pStaticClass;
	}

};




class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return pStaticClass;
	}

};




class UAISightTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return pStaticClass;
	}

};




class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                
	struct FSoftClassPath                              HotSpotManagerClassName;                                  
	float                                              AcceptanceRadius;                                         
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            
	float                                              PathfollowingNavLinkAcceptanceRadius;                     
	bool                                               bFinishMoveOnGoalOverlap;                                 
	bool                                               bAcceptPartialPaths;                                      
	bool                                               bAllowStrafing;                                           
	bool                                               bEnableBTAITasks;                                         
	bool                                               bAllowControllersAsEQSQuerier;                            
	bool                                               bEnableDebuggerPlugin;                                    
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                             
	unsigned char                                      UnknownData00[0x5];                                       
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  
	class UAIPerceptionSystem*                         PerceptionSystem;                                         
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          
	class UAIHotSpotManager*                           HotSpotManager;                                           
	class UNavLocalGridManager*                        NavLocalGrids;                                            
	unsigned char                                      UnknownData01[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AISystem");
		return pStaticClass;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};




class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AITask");
		return pStaticClass;
	}

};




class UAITask_LockLogic : public UAITask
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return pStaticClass;
	}

};




class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                          
	struct FScriptMulticastDelegate                    OnMoveFinished;                                           
	struct FAIMoveRequest                              MoveRequest;                                              
	unsigned char                                      UnknownData00[0x40];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return pStaticClass;
	}


	static class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
};




class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x78];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return pStaticClass;
	}


	static class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};




class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                 
	class UBlackboardData*                             BlackboardAsset;                                          
	TArray<class UBTDecorator*>                        RootDecorators;                                           
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                         
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BehaviorTree");
		return pStaticClass;
	}

};




class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return pStaticClass;
	}

};




class UBehaviorTreeTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return pStaticClass;
	}

};




class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                   
	TArray<struct FBlackboardEntry>                    Keys;                                                     
	unsigned char                                      bHasSynchronizedKeys : 1;                                 
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardData");
		return pStaticClass;
	}

};




class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 
	struct FString                                     EnumName;                                                 
	unsigned char                                      bIsEnumNameValid : 1;                                     
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return pStaticClass;
	}

};




class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                 
	class UEnum*                                       EnumType;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return pStaticClass;
	}

};




class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return pStaticClass;
	}

};




class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return pStaticClass;
	}

};




class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                 
	TArray<class UBTService*>                          Services;                                                 
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTCompositeNode");
		return pStaticClass;
	}

};




class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return pStaticClass;
	}

};




class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return pStaticClass;
	}

};




class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return pStaticClass;
	}

};




class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 
	float                                              FloatValue;                                               
	struct FString                                     StringValue;                                              
	struct FString                                     CachedDescription;                                        
	unsigned char                                      OperationType;                                            
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return pStaticClass;
	}

};




class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                  
	class AActor*                                      ActorOwner;                                               
	TArray<struct FName>                               ObservedKeyNames;                                         
	unsigned char                                      UnknownData00[0x10];                                      
	unsigned char                                      bShowPropertyDetails : 1;                                 
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 
	unsigned char                                      bIsObservingBB : 1;                                       
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
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




class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             
	EGameplayContainerMatchType                        TagsToMatch;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	struct FGameplayTagContainer                       GameplayTags;                                             
	struct FString                                     CachedDescription;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return pStaticClass;
	}

};




class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return pStaticClass;
	}

};




class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return pStaticClass;
	}

};




class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ConeOrigin;                                               
	struct FBlackboardKeySelector                      ConeDirection;                                            
	struct FBlackboardKeySelector                      Observed;                                                 
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return pStaticClass;
	}

};




class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           
	unsigned char                                      bUseSelf : 1;                                             
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            
	unsigned char                                      UnknownData00[0x6];                                       
	class UClass*                                      FilterClass;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return pStaticClass;
	}

};




class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return pStaticClass;
	}

};




class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                             
	EFAIDistanceType                                   GeometricDistanceType;                                    
	unsigned char                                      bUseParametrizedRadius : 1;                               
	unsigned char                                      bUseNavAgentGoalLocation : 1;                             
	unsigned char                                      bPathFindingBasedTest : 1;                                
	unsigned char                                      UnknownData01[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return pStaticClass;
	}

};




class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return pStaticClass;
	}

};




class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ConeOrigin;                                               
	struct FBlackboardKeySelector                      Observed;                                                 
	unsigned char                                      bUseSelfAsOrigin : 1;                                     
	unsigned char                                      bUseSelfAsObserved : 1;                                   
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return pStaticClass;
	}

};




class UBTDecorator_Loop : public UBTDecorator
{
public:
	bool                                               bInfiniteLoop;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              InfiniteLoopTimeoutTime;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return pStaticClass;
	}

};




class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return pStaticClass;
	}

};




class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              
	float                                              CooldownDuration;                                         
	bool                                               bAddToExistingDuration;                                   
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return pStaticClass;
	}

};




class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              
	float                                              CooldownDuration;                                         
	bool                                               bAddToExistingDuration;                                   
	bool                                               bActivatesCooldown;                                       
	unsigned char                                      UnknownData00[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return pStaticClass;
	}

};




class UBTDecorator_TimeLimit : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return pStaticClass;
	}

};




class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return pStaticClass;
	}


	static void StopUsingExternalEvent(class UBTNode* NodeOwner);
	static void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	static void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	static void SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	static void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	static void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	static void SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	static void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	static void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	static void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	static void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	static void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	static class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
	static class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
	static struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static int GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static unsigned char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static void ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};




class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                  
	class AActor*                                      ActorOwner;                                               
	unsigned char                                      UnknownData00[0x10];                                      
	unsigned char                                      bShowPropertyDetails : 1;                                 
	unsigned char                                      bShowEventDetails : 1;                                    
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
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




class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return pStaticClass;
	}

};




class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                  
	class AActor*                                      ActorOwner;                                               
	unsigned char                                      UnknownData00[0x18];                                      
	unsigned char                                      bShowPropertyDetails : 1;                                 
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
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




class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return pStaticClass;
	}

};




class UBTTask_MakeNoise : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return pStaticClass;
	}

};




class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return pStaticClass;
	}

};




class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                          
	unsigned char                                      bLooping : 1;                                             
	unsigned char                                      bNonBlocking : 1;                                         
	unsigned char                                      UnknownData00[0x7];                                       
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return pStaticClass;
	}

};




class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return pStaticClass;
	}

};




class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return pStaticClass;
	}

};




class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return pStaticClass;
	}

};




class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return pStaticClass;
	}

};




class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                             
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     
	class UBehaviorTree*                               BehaviorAsset;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return pStaticClass;
	}

};




class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            
	TArray<struct FEnvNamedValue>                      QueryParams;                                              
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    
	bool                                               bUseBBKey;                                                
	unsigned char                                      UnknownData01[0x7];                                       
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return pStaticClass;
	}

};




class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                              
	bool                                               bAddToExistingDuration;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CooldownDuration;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return pStaticClass;
	}

};




class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return pStaticClass;
	}

};




class UCrowdAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return pStaticClass;
	}

};




class ADetourCrowdAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return pStaticClass;
	}

};




class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                
	TArray<class UEnvQueryOption*>                     Options;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQuery");
		return pStaticClass;
	}

};




class UEnvQueryContext : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext");
		return pStaticClass;
	}

};




class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return pStaticClass;
	}


	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};




class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return pStaticClass;
	}

};




class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return pStaticClass;
	}

};




class UEnvQueryDebugHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return pStaticClass;
	}

};




class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryNode");
		return pStaticClass;
	}

};




class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                               
	class UClass*                                      itemType;                                                 
	unsigned char                                      bAutoSortTests : 1;                                       
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                       
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               
	struct FAIDataProviderFloatValue                   SearchRadius;                                             
	class UClass*                                      SearchCenter;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                              
	class UClass*                                      Context;                                                  
	class UClass*                                      GeneratedItemType;                                        
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return pStaticClass;
	}


	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};




class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                               
	unsigned char                                      bAllowDifferentItemTypes : 1;                             
	unsigned char                                      bHasMatchingItemType : 1;                                 
	unsigned char                                      UnknownData00[0x7];                                       
	class UClass*                                      ForcedItemType;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                    
	struct FAIDataProviderFloatValue                   ConeDegrees;                                              
	struct FAIDataProviderFloatValue                   AngleStep;                                                
	struct FAIDataProviderFloatValue                   Range;                                                    
	class UClass*                                      CenterActor;                                              
	unsigned char                                      bIncludeContextLocation : 1;                              
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              
	struct FAIDataProviderFloatValue                   OuterRadius;                                              
	struct FAIDataProviderIntValue                     NumberOfRings;                                            
	struct FAIDataProviderIntValue                     PointsPerRing;                                            
	struct FEnvDirection                               ArcDirection;                                             
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 
	bool                                               bUseSpiralPattern;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	class UClass*                                      Center;                                                   
	unsigned char                                      bDefineArc : 1;                                           
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                             
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             
	struct FAIDataProviderIntValue                     NumberOfPoints;                                           
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FEnvDirection                               ArcDirection;                                             
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 
	float                                              AngleRadians;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	class UClass*                                      CircleCenter;                                             
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              
	unsigned char                                      UnknownData02[0x7];                                       
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                      
	struct FEnvTraceData                               TraceData;                                                
	unsigned char                                      bDefineArc : 1;                                           
	unsigned char                                      UnknownData03[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                 
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             
	class UClass*                                      GenerateAround;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return pStaticClass;
	}

};




class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                               
	class UClass*                                      NavigationFilter;                                         
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return pStaticClass;
	}

};




class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	int                                                QueryID;                                                  
	unsigned char                                      UnknownData01[0x24];                                      
	class UClass*                                      itemType;                                                 
	int                                                OptionIndex;                                              
	unsigned char                                      UnknownData02[0x4];                                       
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return pStaticClass;
	}


	void SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
};




class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return pStaticClass;
	}

};




class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return pStaticClass;
	}

};




class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return pStaticClass;
	}

};




class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return pStaticClass;
	}

};




class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return pStaticClass;
	}

};




class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return pStaticClass;
	}

};




class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            
	TArray<class UEnvQueryContext*>                    LocalContexts;                                            
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                       
	unsigned char                                      UnknownData01[0x54];                                      
	float                                              MaxAllowedTestingTime;                                    
	bool                                               bTestQueriesUsingBreadth;                                 
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                QueryCountWarningThreshold;                               
	double                                             QueryCountWarningInterval;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryManager");
		return pStaticClass;
	}


	static class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};




class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                
	TArray<class UEnvQueryTest*>                       Tests;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryOption");
		return pStaticClass;
	}

};




class UEnvQueryTest : public UEnvQueryNode
{
public:
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     TestComment;                                              
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               
	unsigned char                                      UnknownData01[0x5];                                       
	struct FAIDataProviderBoolValue                    BoolValue;                                                
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            
	unsigned char                                      UnknownData02[0x1];                                       
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             
	EEQSNormalizationType                              NormalizationType;                                        
	unsigned char                                      UnknownData03[0x3];                                       
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            
	struct FAIDataProviderFloatValue                   ReferenceValue;                                           
	bool                                               bDefineReferenceValue;                                    
	unsigned char                                      UnknownData04[0xF];                                       
	unsigned char                                      bWorkOnFloatValues : 1;                                   
	unsigned char                                      UnknownData05[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest");
		return pStaticClass;
	}

};




class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	class UClass*                                      DistanceTo;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return pStaticClass;
	}

};




class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    
	struct FEnvDirection                               LineB;                                                    
	EEnvTestDot                                        TestMode;                                                 
	bool                                               bAbsoluteValue;                                           
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return pStaticClass;
	}

};




class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                          
	bool                                               bUpdatedToUseQuery;                                       
	EGameplayContainerMatchType                        TagsToMatch;                                              
	unsigned char                                      UnknownData00[0x6];                                       
	struct FGameplayTagContainer                       GameplayTags;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return pStaticClass;
	}

};




class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return pStaticClass;
	}

};




class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                  
	struct FAIDataProviderBoolValue                    PathFromContext;                                          
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          
	class UClass*                                      FilterClass;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return pStaticClass;
	}

};




class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return pStaticClass;
	}

};




class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return pStaticClass;
	}

};




class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return pStaticClass;
	}

};




class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      
	class UClass*                                      Context;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return pStaticClass;
	}

};




class UEnvQueryTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return pStaticClass;
	}

};




class UEQSQueryResultSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return pStaticClass;
	}

};




class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return pStaticClass;
	}

};




class AEQSTestingPawn : public ACharacter
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            
	TArray<struct FEnvNamedValue>                      QueryParams;                                              
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              
	float                                              TimeLimitPerStep;                                         
	int                                                StepToDebugDraw;                                          
	EEnvQueryHightlightMode                            HighlightMode;                                            
	unsigned char                                      bDrawLabels : 1;                                          
	unsigned char                                      bDrawFailedItems : 1;                                     
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        
	unsigned char                                      bShouldBeVisibleInGame : 1;                               
	unsigned char                                      bTickDuringGame : 1;                                      
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                             
	unsigned char                                      UnknownData00[0x2D];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return pStaticClass;
	}

};




class UGenericTeamAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return pStaticClass;
	}

};




class AGridPathAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.GridPathAIController");
		return pStaticClass;
	}

};




class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                        GridManager;                                              
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return pStaticClass;
	}

};




class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return pStaticClass;
	}

};




class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return pStaticClass;
	}


	static bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	static void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	static bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	static int AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};




class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                              
	class UPawnAction*                                 ParentAction;                                             
	class UPawnActionsComponent*                       OwnerComponent;                                           
	class UObject*                                     Instigator;                                               
	class UBrainComponent*                             BrainComp;                                                
	unsigned char                                      UnknownData00[0x30];                                      
	unsigned char                                      bAllowNewSameClassInstance : 1;                           
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      
	unsigned char                                      bShouldPauseMovement : 1;                                 
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                              
	unsigned char                                      UnknownData01[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction");
		return pStaticClass;
	}


	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	static class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};




class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return pStaticClass;
	}


	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
};




class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                
	struct FVector                                     GoalLocation;                                             
	float                                              AcceptableRadius;                                         
	class UClass*                                      FilterClass;                                              
	unsigned char                                      bAllowStrafe : 1;                                         
	unsigned char                                      bFinishOnOverlap : 1;                                     
	unsigned char                                      bUsePathfinding : 1;                                      
	unsigned char                                      bAllowPartialPath : 1;                                    
	unsigned char                                      bProjectGoalToNavigation : 1;                             
	unsigned char                                      bUpdatePathToGoal : 1;                                    
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        
	unsigned char                                      UnknownData00[0x2F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Move");
		return pStaticClass;
	}

};




class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                           
	class UPawnAction*                                 RecentActionCopy;                                         
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 
	unsigned char                                      UnknownData00[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return pStaticClass;
	}

};




class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                           
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 
	unsigned char                                      UnknownData00[0x7];                                       
	class UPawnAction*                                 RecentActionCopy;                                         
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return pStaticClass;
	}

};




class UPawnAction_Wait : public UPawnAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return pStaticClass;
	}

};




class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                           
	TArray<struct FPawnActionStack>                    ActionStacks;                                             
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             
	class UPawnAction*                                 CurrentAction;                                            
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return pStaticClass;
	}


	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);
	static bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};




class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         
	float                                              LOSHearingThreshold;                                      
	float                                              SightRadius;                                              
	float                                              SensingInterval;                                          
	float                                              HearingMaxSoundAge;                                       
	unsigned char                                      bEnableSensingUpdates : 1;                                
	unsigned char                                      bOnlySensePlayers : 1;                                    
	unsigned char                                      bSeePawns : 1;                                            
	unsigned char                                      bHearNoises : 1;                                          
	unsigned char                                      UnknownData00[0xB];                                       
	struct FScriptMulticastDelegate                    OnSeePawn;                                                
	struct FScriptMulticastDelegate                    OnHearNoise;                                              
	float                                              PeripheralVisionAngle;                                    
	float                                              PeripheralVisionCosine;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return pStaticClass;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};




class UVisualLoggerExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return pStaticClass;
	}

};


}

