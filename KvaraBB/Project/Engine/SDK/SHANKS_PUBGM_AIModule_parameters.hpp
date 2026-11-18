#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct AAIController_UseBlackboard_Params
{
	class UBlackboardData*                             BlackboardAsset;                                          
	class UBlackboardComponent*                        BlackboardComponent;                                      
	bool                                               ReturnValue;                                              
};


struct AAIController_UnclaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            
};


struct AAIController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                  
};


struct AAIController_RunBehaviorTree_Params
{
	class UBehaviorTree*                               BTAsset;                                                  
	bool                                               ReturnValue;                                              
};


struct AAIController_OnUsingBlackBoard_Params
{
	class UBlackboardComponent*                        BlackboardComp;                                           
	class UBlackboardData*                             BlackboardAsset;                                          
};


struct AAIController_OnUnpossess_Params
{
	class APawn*                                       UnpossessedPawn;                                          
};


struct AAIController_OnPossess_Params
{
	class APawn*                                       PossessedPawn;                                            
};


struct AAIController_OnGameplayTaskResourcesClaimed_Params
{
	struct FGameplayResourceSet                        NewlyClaimed;                                             
	struct FGameplayResourceSet                        FreshlyReleased;                                          
};


struct AAIController_MoveToLocation_Params
{
	struct FVector                                     Dest;                                                     
	float                                              AcceptanceRadius;                                         
	bool                                               bStopOnOverlap;                                           
	bool                                               bUsePathfinding;                                          
	bool                                               bProjectDestinationToNavigation;                          
	bool                                               bCanStrafe;                                               
	class UClass*                                      FilterClass;                                              
	bool                                               bAllowPartialPath;                                        
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              
};


struct AAIController_MoveToActor_Params
{
	class AActor*                                      Goal;                                                     
	float                                              AcceptanceRadius;                                         
	bool                                               bStopOnOverlap;                                           
	bool                                               bUsePathfinding;                                          
	bool                                               bCanStrafe;                                               
	class UClass*                                      FilterClass;                                              
	bool                                               bAllowPartialPath;                                        
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              
};


struct AAIController_K2_SetFocus_Params
{
	class AActor*                                      NewFocus;                                                 
};


struct AAIController_K2_SetFocalPoint_Params
{
	struct FVector                                     FP;                                                       
};


struct AAIController_K2_ClearFocus_Params
{
};


struct AAIController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                              
};


struct AAIController_GetPathFollowingComponent_Params
{
	class UPathFollowingComponent*                     ReturnValue;                                              
};


struct AAIController_GetMoveStatus_Params
{
	TEnumAsByte<EPathFollowingStatus>                  ReturnValue;                                              
};


struct AAIController_GetImmediateMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AAIController_GetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct AAIController_GetFocalPointOnActor_Params
{
	class AActor*                                      Actor;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct AAIController_GetFocalPoint_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AAIController_GetAIPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      ReturnValue;                                              
};


struct AAIController_ClaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            
};


struct UBlackboardComponent_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  
	struct FVector                                     VectorValue;                                              
};


struct UBlackboardComponent_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                  
	struct FString                                     StringValue;                                              
};


struct UBlackboardComponent_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  
	struct FRotator                                    RotatorValue;                                             
};


struct UBlackboardComponent_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  
	class UObject*                                     ObjectValue;                                              
};


struct UBlackboardComponent_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                  
	struct FName                                       NameValue;                                                
};


struct UBlackboardComponent_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  
	int                                                IntValue;                                                 
};


struct UBlackboardComponent_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  
	float                                              FloatValue;                                               
};


struct UBlackboardComponent_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  
	unsigned char                                      EnumValue;                                                
};


struct UBlackboardComponent_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  
	class UClass*                                      ClassValue;                                               
};


struct UBlackboardComponent_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               BoolValue;                                                
};


struct UBlackboardComponent_IsVectorValueSet_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  
	struct FRotator                                    ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  
	class UObject*                                     ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                  
	struct FName                                       ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  
	int                                                ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  
	float                                              ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  
	unsigned char                                      ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  
	class UClass*                                      ReturnValue;                                              
};


struct UBlackboardComponent_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UBlackboardComponent_GetRotationFromEntry_Params
{
	struct FName                                       KeyName;                                                  
	struct FRotator                                    ResultRotation;                                           
	bool                                               ReturnValue;                                              
};


struct UBlackboardComponent_GetLocationFromEntry_Params
{
	struct FName                                       KeyName;                                                  
	struct FVector                                     ResultLocation;                                           
	bool                                               ReturnValue;                                              
};


struct UBlackboardComponent_ClearValue_Params
{
	struct FName                                       KeyName;                                                  
};


struct UPathFollowingComponent_OnNavDataRegistered_Params
{
	class ANavigationData*                             NavData;                                                  
};


struct UPathFollowingComponent_OnActorBump_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UPathFollowingComponent_GetPathDestination_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPathFollowingComponent_GetPathActionType_Params
{
	TEnumAsByte<EPathFollowingAction>                  ReturnValue;                                              
};


struct UCrowdFollowingComponent_SuspendCrowdSteering_Params
{
	bool                                               bSuspend;                                                 
};


struct UBrainComponent_StopLogic_Params
{
	struct FString                                     Reason;                                                   
};


struct UBrainComponent_RestartLogic_Params
{
};


struct UBrainComponent_IsRunning_Params
{
	bool                                               ReturnValue;                                              
};


struct UBrainComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct UBehaviorTreeComponent_SetDynamicSubtree_Params
{
	struct FGameplayTag                                InjectTag;                                                
	class UBehaviorTree*                               BehaviorAsset;                                            
};


struct UBehaviorTreeComponent_GetTagCooldownEndTime_Params
{
	struct FGameplayTag                                CooldownTag;                                              
	float                                              ReturnValue;                                              
};


struct UBehaviorTreeComponent_AddCooldownTagDuration_Params
{
	struct FGameplayTag                                CooldownTag;                                              
	float                                              CooldownDuration;                                         
	bool                                               bAddToExistingDuration;                                   
};


struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
	struct FAIRequestID                                RequestID;                                                
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           
};


struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
	class UAnimInstance*                               AnimInstance;                                             
	bool                                               bUnlockMovement;                                          
	bool                                               UnlockAILogic;                                            
};


struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      PawnClass;                                                
	class UBehaviorTree*                               BehaviorTree;                                             
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	bool                                               bNoCollisionFail;                                         
	class APawn*                                       ReturnValue;                                              
};


struct UAIBlueprintHelperLibrary_SendAIMessage_Params
{
	class APawn*                                       Target;                                                   
	struct FName                                       Message;                                                  
	class UObject*                                     MessageSource;                                            
	bool                                               bSuccess;                                                 
};


struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
	class UAnimInstance*                               AnimInstance;                                             
	bool                                               bLockMovement;                                            
	bool                                               LockAILogic;                                              
};


struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
{
	struct FRotator                                    Rotation;                                                 
	bool                                               ReturnValue;                                              
};


struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
{
	struct FVector                                     Location;                                                 
	bool                                               ReturnValue;                                              
};


struct UAIBlueprintHelperLibrary_IsValidAIDirection_Params
{
	struct FVector                                     DirectionVector;                                          
	bool                                               ReturnValue;                                              
};


struct UAIBlueprintHelperLibrary_GetCurrentPath_Params
{
	class AController*                                 Controller;                                               
	class UNavigationPath*                             ReturnValue;                                              
};


struct UAIBlueprintHelperLibrary_GetBlackboard_Params
{
	class AActor*                                      Target;                                                   
	class UBlackboardComponent*                        ReturnValue;                                              
};


struct UAIBlueprintHelperLibrary_GetAIController_Params
{
	class AActor*                                      ControlledActor;                                          
	class AAIController*                               ReturnValue;                                              
};


struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APawn*                                       Pawn;                                                     
	struct FVector                                     Destination;                                              
	class AActor*                                      TargetActor;                                              
	float                                              AcceptanceRadius;                                         
	bool                                               bStopOnOverlap;                                           
	class UAIAsyncTaskBlueprintProxy*                  ReturnValue;                                              
};


struct UAIPerceptionComponent_SetSenseEnabled_Params
{
	class UClass*                                      SenseClass;                                               
	bool                                               bEnable;                                                  
};


struct UAIPerceptionComponent_RequestStimuliListenerUpdate_Params
{
};


struct UAIPerceptionComponent_OnOwnerEndPlay_Params
{
	class AActor*                                      Actor;                                                    
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct UAIPerceptionComponent_GetPerceivedHostileActors_Params
{
	TArray<class AActor*>                              OutActors;                                                
};


struct UAIPerceptionComponent_GetPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               
	TArray<class AActor*>                              OutActors;                                                
};


struct UAIPerceptionComponent_GetKnownPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               
	TArray<class AActor*>                              OutActors;                                                
};


struct UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               
	TArray<class AActor*>                              OutActors;                                                
};


struct UAIPerceptionComponent_GetActorsPerception_Params
{
	class AActor*                                      Actor;                                                    
	struct FActorPerceptionBlueprintInfo               Info;                                                     
	bool                                               ReturnValue;                                              
};


struct UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
	class UClass*                                      SenseClass;                                               
};


struct UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params
{
};


struct UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params
{
};


struct UAIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
	class UClass*                                      SenseClass;                                               
};


struct UAIPerceptionSystem_ReportPerceptionEvent_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UAISenseEvent*                               PerceptionEvent;                                          
};


struct UAIPerceptionSystem_ReportEvent_Params
{
	class UAISenseEvent*                               PerceptionEvent;                                          
};


struct UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      Sense;                                                    
	class AActor*                                      Target;                                                   
	bool                                               ReturnValue;                                              
};


struct UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
	class AActor*                                      Actor;                                                    
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct UAIPerceptionSystem_GetSenseClassForStimulus_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FAIStimulus                                 Stimulus;                                                 
	class UClass*                                      ReturnValue;                                              
};


struct UAISense_Blueprint_OnUpdate_Params
{
	TArray<class UAISenseEvent*>                       EventsToProcess;                                          
	float                                              ReturnValue;                                              
};


struct UAISense_Blueprint_OnListenerUpdated_Params
{
	class AActor*                                      ActorListener;                                            
	class UAIPerceptionComponent*                      PerceptionComponent;                                      
};


struct UAISense_Blueprint_OnListenerUnregistered_Params
{
	class AActor*                                      ActorListener;                                            
	class UAIPerceptionComponent*                      PerceptionComponent;                                      
};


struct UAISense_Blueprint_OnListenerRegistered_Params
{
	class AActor*                                      ActorListener;                                            
	class UAIPerceptionComponent*                      PerceptionComponent;                                      
};


struct UAISense_Blueprint_K2_OnNewPawn_Params
{
	class APawn*                                       NewPawn;                                                  
};


struct UAISense_Blueprint_GetAllListenerComponents_Params
{
	TArray<class UAIPerceptionComponent*>              ListenerComponents;                                       
};


struct UAISense_Blueprint_GetAllListenerActors_Params
{
	TArray<class AActor*>                              ListenerActors;                                           
};


struct UAISense_Damage_ReportDamageEvent_Params
{
	class UObject*                                     WorldContextObject;                                       
	class AActor*                                      DamagedActor;                                             
	class AActor*                                      Instigator;                                               
	float                                              DamageAmount;                                             
	struct FVector                                     EventLocation;                                            
	struct FVector                                     HitLocation;                                              
};


struct UAISense_Hearing_ReportNoiseEvent_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     NoiseLocation;                                            
	float                                              Loudness;                                                 
	class AActor*                                      Instigator;                                               
	float                                              MaxRange;                                                 
	struct FName                                       Tag;                                                      
};


struct UAISense_Prediction_RequestPawnPredictionEvent_Params
{
	class APawn*                                       Requestor;                                                
	class AActor*                                      PredictedActor;                                           
	float                                              PredictionTime;                                           
};


struct UAISense_Prediction_RequestControllerPredictionEvent_Params
{
	class AAIController*                               Requestor;                                                
	class AActor*                                      PredictedActor;                                           
	float                                              PredictionTime;                                           
};


struct UAISystem_AILoggingVerbose_Params
{
};


struct UAISystem_AIIgnorePlayers_Params
{
};


struct UAITask_MoveTo_AIMoveTo_Params
{
	class AAIController*                               Controller;                                               
	struct FVector                                     GoalLocation;                                             
	class AActor*                                      GoalActor;                                                
	float                                              AcceptanceRadius;                                         
	TEnumAsByte<EAIOptionFlag>                         StopOnOverlap;                                            
	TEnumAsByte<EAIOptionFlag>                         AcceptPartialPath;                                        
	bool                                               bUsePathfinding;                                          
	bool                                               bLockAILogic;                                             
	bool                                               bUseContinuosGoalTracking;                                
	class UAITask_MoveTo*                              ReturnValue;                                              
};


struct UAITask_RunEQS_RunEQS_Params
{
	class AAIController*                               Controller;                                               
	class UEnvQuery*                                   QueryTemplate;                                            
	class UAITask_RunEQS*                              ReturnValue;                                              
};


struct UBTDecorator_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	float                                              DeltaSeconds;                                             
};


struct UBTDecorator_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               
	float                                              DeltaSeconds;                                             
};


struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               
};


struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
	class AActor*                                      OwnerActor;                                               
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               
};


struct UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	bool                                               ReturnValue;                                              
};


struct UBTDecorator_BlueprintBase_PerformConditionCheck_Params
{
	class AActor*                                      OwnerActor;                                               
	bool                                               ReturnValue;                                              
};


struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
	bool                                               ReturnValue;                                              
};


struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
	bool                                               ReturnValue;                                              
};


struct UBTFunctionLibrary_StopUsingExternalEvent_Params
{
	class UBTNode*                                     NodeOwner;                                                
};


struct UBTFunctionLibrary_StartUsingExternalEvent_Params
{
	class UBTNode*                                     NodeOwner;                                                
	class AActor*                                      OwningActor;                                              
};


struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	struct FVector                                     Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	struct FString                                     Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	struct FRotator                                    Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	class UObject*                                     Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	struct FName                                       Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	int                                                Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	float                                              Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	unsigned char                                      Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	class UClass*                                      Value;                                                    
};


struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	bool                                               Value;                                                    
};


struct UBTFunctionLibrary_GetOwnersBlackboard_Params
{
	class UBTNode*                                     NodeOwner;                                                
	class UBlackboardComponent*                        ReturnValue;                                              
};


struct UBTFunctionLibrary_GetOwnerComponent_Params
{
	class UBTNode*                                     NodeOwner;                                                
	class UBehaviorTreeComponent*                      ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	struct FVector                                     ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	struct FRotator                                    ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	class UObject*                                     ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	struct FName                                       ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	int                                                ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	float                                              ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	unsigned char                                      ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	class UClass*                                      ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
	class AActor*                                      ReturnValue;                                              
};


struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
};


struct UBTFunctionLibrary_ClearBlackboardValue_Params
{
	class UBTNode*                                     NodeOwner;                                                
	struct FBlackboardKeySelector                      Key;                                                      
};


struct UBTService_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	float                                              DeltaSeconds;                                             
};


struct UBTService_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               
	float                                              DeltaSeconds;                                             
};


struct UBTService_BlueprintBase_ReceiveSearchStartAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct UBTService_BlueprintBase_ReceiveSearchStart_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct UBTService_BlueprintBase_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct UBTService_BlueprintBase_ReceiveDeactivation_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct UBTService_BlueprintBase_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct UBTService_BlueprintBase_ReceiveActivation_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct UBTService_BlueprintBase_IsServiceActive_Params
{
	bool                                               ReturnValue;                                              
};


struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
	struct FName                                       MessageName;                                              
	int                                                RequestID;                                                
};


struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
{
	struct FName                                       MessageName;                                              
};


struct UBTTask_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	float                                              DeltaSeconds;                                             
};


struct UBTTask_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               
	float                                              DeltaSeconds;                                             
};


struct UBTTask_BlueprintBase_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct UBTTask_BlueprintBase_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct UBTTask_BlueprintBase_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct UBTTask_BlueprintBase_ReceiveAbort_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct UBTTask_BlueprintBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                              
};


struct UBTTask_BlueprintBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                              
};


struct UBTTask_BlueprintBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                 
};


struct UBTTask_BlueprintBase_FinishAbort_Params
{
};


struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
	class UObject*                                     QuerierObject;                                            
	class AActor*                                      QuerierActor;                                             
	struct FVector                                     ResultingLocation;                                        
};


struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
	class UObject*                                     QuerierObject;                                            
	class AActor*                                      QuerierActor;                                             
	class AActor*                                      ResultingActor;                                           
};


struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
	class UObject*                                     QuerierObject;                                            
	class AActor*                                      QuerierActor;                                             
	TArray<struct FVector>                             ResultingLocationSet;                                     
};


struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
	class UObject*                                     QuerierObject;                                            
	class AActor*                                      QuerierActor;                                             
	TArray<class AActor*>                              ResultingActorsSet;                                       
};


struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
	TArray<struct FVector>                             ContextLocations;                                         
};


struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
	struct FVector                                     GeneratedVector;                                          
};


struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
	class AActor*                                      GeneratedActor;                                           
};


struct UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params
{
	struct FName                                       ParamName;                                                
	float                                              Value;                                                    
};


struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
	int                                                ItemIndex;                                                
	float                                              ReturnValue;                                              
};


struct UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              
};


struct UEnvQueryManager_RunEQSQuery_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UEnvQuery*                                   QueryTemplate;                                            
	class UObject*                                     Querier;                                                  
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  
	class UClass*                                      WrapperClass;                                             
	class UEnvQueryInstanceBlueprintWrapper*           ReturnValue;                                              
};


struct UNavLocalGridManager_SetLocalNavigationGridDensity_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              CellSize;                                                 
	bool                                               ReturnValue;                                              
};


struct UNavLocalGridManager_RemoveLocalNavigationGrid_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                GridId;                                                   
	bool                                               bRebuildGrids;                                            
};


struct UNavLocalGridManager_FindLocalNavigationGridPath_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	TArray<struct FVector>                             PathPoints;                                               
	bool                                               ReturnValue;                                              
};


struct UNavLocalGridManager_AddLocalNavigationGridForPoints_Params
{
	class UObject*                                     WorldContextObject;                                       
	TArray<struct FVector>                             Locations;                                                
	int                                                Radius2D;                                                 
	float                                              Height;                                                   
	bool                                               bRebuildGrids;                                            
	int                                                ReturnValue;                                              
};


struct UNavLocalGridManager_AddLocalNavigationGridForPoint_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Location;                                                 
	int                                                Radius2D;                                                 
	float                                              Height;                                                   
	bool                                               bRebuildGrids;                                            
	int                                                ReturnValue;                                              
};


struct UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Location;                                                 
	float                                              CapsuleRadius;                                            
	float                                              CapsuleHalfHeight;                                        
	int                                                Radius2D;                                                 
	float                                              Height;                                                   
	bool                                               bRebuildGrids;                                            
	int                                                ReturnValue;                                              
};


struct UNavLocalGridManager_AddLocalNavigationGridForBox_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Location;                                                 
	struct FVector                                     Extent;                                                   
	struct FRotator                                    Rotation;                                                 
	int                                                Radius2D;                                                 
	float                                              Height;                                                   
	bool                                               bRebuildGrids;                                            
	int                                                ReturnValue;                                              
};


struct UPawnAction_GetActionPriority_Params
{
	TEnumAsByte<EAIRequestPriority>                    ReturnValue;                                              
};


struct UPawnAction_Finish_Params
{
	TEnumAsByte<EPawnActionResult>                     WithResult;                                               
};


struct UPawnAction_CreateActionInstance_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      ActionClass;                                              
	class UPawnAction*                                 ReturnValue;                                              
};


struct UPawnAction_BlueprintBase_ActionTick_Params
{
	class APawn*                                       ControlledPawn;                                           
	float                                              DeltaSeconds;                                             
};


struct UPawnAction_BlueprintBase_ActionStart_Params
{
	class APawn*                                       ControlledPawn;                                           
};


struct UPawnAction_BlueprintBase_ActionResume_Params
{
	class APawn*                                       ControlledPawn;                                           
};


struct UPawnAction_BlueprintBase_ActionPause_Params
{
	class APawn*                                       ControlledPawn;                                           
};


struct UPawnAction_BlueprintBase_ActionFinished_Params
{
	class APawn*                                       ControlledPawn;                                           
	TEnumAsByte<EPawnActionResult>                     WithResult;                                               
};


struct UPawnActionsComponent_K2_PushAction_Params
{
	class UPawnAction*                                 NewAction;                                                
	TEnumAsByte<EAIRequestPriority>                    Priority;                                                 
	class UObject*                                     Instigator;                                               
	bool                                               ReturnValue;                                              
};


struct UPawnActionsComponent_K2_PerformAction_Params
{
	class APawn*                                       Pawn;                                                     
	class UPawnAction*                                 Action;                                                   
	TEnumAsByte<EAIRequestPriority>                    Priority;                                                 
	bool                                               ReturnValue;                                              
};


struct UPawnActionsComponent_K2_ForceAbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                            
	TEnumAsByte<EPawnActionAbortState>                 ReturnValue;                                              
};


struct UPawnActionsComponent_K2_AbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                            
	TEnumAsByte<EPawnActionAbortState>                 ReturnValue;                                              
};


struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UPawnSensingComponent_SetSensingInterval_Params
{
	float                                              NewSensingInterval;                                       
};


struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
{
	float                                              NewPeripheralVisionAngle;                                 
};


struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
	class APawn*                                       Pawn;                                                     
};


struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
	class APawn*                                       Instigator;                                               
	struct FVector                                     Location;                                                 
	float                                              Volume;                                                   
};


struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
{
	float                                              ReturnValue;                                              
};


struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
{
	float                                              ReturnValue;                                              
};

}

