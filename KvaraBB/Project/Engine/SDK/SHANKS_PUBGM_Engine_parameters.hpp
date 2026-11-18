#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct AActor_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                
	bool                                               ReturnValue;                                              
};


struct AActor_UserConstructionScript_Params
{
};


struct AActor_TearOff_Params
{
};


struct AActor_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            
	struct FName                                       InSocketName;                                             
};


struct AActor_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             
};


struct AActor_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      
};


struct AActor_SetReplicates_Params
{
	bool                                               bInReplicates;                                            
};


struct AActor_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     
};


struct AActor_SetParallelWorldId_Params
{
	int                                                InWorldId;                                                
	int                                                Masks;                                                    
};


struct AActor_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 
};


struct AActor_SetNetUpdateGroupID_Params
{
	unsigned char                                      InGroupID;                                                
};


struct AActor_SetNetUpdateGroup_Params
{
	class AActor*                                      InConnectionActor;                                        
};


struct AActor_SetNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>                          NewDormancy;                                              
};


struct AActor_SetLifeSpan_Params
{
	float                                              InLifespan;                                               
};


struct AActor_SetActorTickInterval_Params
{
	float                                              TickInterval;                                             
};


struct AActor_SetActorTickEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct AActor_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               
};


struct AActor_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         
};


struct AActor_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               
};


struct AActor_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 
};


struct AActor_ResetParallelWorldId_Params
{
	int                                                Masks;                                                    
};


struct AActor_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    
};


struct AActor_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        
};


struct AActor_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             
};


struct AActor_ReceiveReInitForReplay_Params
{
};


struct AActor_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           
	class UDamageType*                                 DamageType;                                               
	struct FVector                                     Origin;                                                   
	struct FHitResult                                  HitInfo;                                                  
	class AController*                                 InstigatedBy;                                             
	class AActor*                                      DamageCauser;                                             
};


struct AActor_ReceivePostReplayRecover_Params
{
};


struct AActor_ReceivePointDamage_Params
{
	float                                              Damage;                                                   
	class UDamageType*                                 DamageType;                                               
	struct FVector                                     HitLocation;                                              
	struct FVector                                     HitNormal;                                                
	class UPrimitiveComponent*                         HitComponent;                                             
	struct FName                                       BoneName;                                                 
	struct FVector                                     ShotFromDirection;                                        
	class AController*                                 InstigatedBy;                                             
	class AActor*                                      DamageCauser;                                             
	struct FHitResult                                  HitInfo;                                                  
};


struct AActor_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	bool                                               bSelfMoved;                                               
	struct FVector                                     HitLocation;                                              
	struct FVector                                     HitNormal;                                                
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct AActor_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct AActor_ReceiveDestroyed_Params
{
};


struct AActor_ReceiveBeginPlay_Params
{
};


struct AActor_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   
	class UDamageType*                                 DamageType;                                               
	class AController*                                 InstigatedBy;                                             
	class AActor*                                      DamageCauser;                                             
};


struct AActor_ReceiveActorOnReleased_Params
{
	struct FKey                                        ButtonReleased;                                           
};


struct AActor_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
};


struct AActor_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
};


struct AActor_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
};


struct AActor_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
};


struct AActor_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            
};


struct AActor_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               
};


struct AActor_ReceiveActorEndCursorOver_Params
{
};


struct AActor_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               
};


struct AActor_ReceiveActorBeginCursorOver_Params
{
};


struct AActor_PrestreamTextures_Params
{
	float                                              Seconds;                                                  
	bool                                               bEnableStreaming;                                         
	int                                                CinematicTextureGroups;                                   
};


struct AActor_OnRep_ReplicateMovement_Params
{
};


struct AActor_OnRep_ReplicatedMovement_Params
{
};


struct AActor_OnRep_Owner_Params
{
};


struct AActor_OnRep_Instigator_Params
{
};


struct AActor_OnRep_AttachmentReplication_Params
{
};


struct AActor_MarkNetDormancyForReplay_Params
{
	bool                                               bInDormancyForReplay;                                     
	bool                                               bForceNetUpdate;                                          
};


struct AActor_MakeNoise_Params
{
	float                                              Loudness;                                                 
	class APawn*                                       NoiseInstigator;                                          
	struct FVector                                     NoiseLocation;                                            
	float                                              MaxRange;                                                 
	struct FName                                       Tag;                                                      
};


struct AActor_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct AActor_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             
	struct FRotator                                    DestRotation;                                             
	bool                                               ReturnValue;                                              
};


struct AActor_K2_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
	bool                                               ReturnValue;                                              
};


struct AActor_K2_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              
	bool                                               bTeleportPhysics;                                         
	bool                                               ReturnValue;                                              
};


struct AActor_K2_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_K2_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_K2_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_K2_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              
	struct FRotator                                    NewRotation;                                              
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
	bool                                               ReturnValue;                                              
};


struct AActor_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
	bool                                               ReturnValue;                                              
};


struct AActor_K2_OnReset_Params
{
};


struct AActor_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       
};


struct AActor_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       
};


struct AActor_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              
};


struct AActor_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct AActor_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AActor_K2_DetachFromActor_Params
{
	EDetachmentRule                                    LocationRule;                                             
	EDetachmentRule                                    RotationRule;                                             
	EDetachmentRule                                    ScaleRule;                                                
};


struct AActor_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                
};


struct AActor_K2_DestroyActor_Params
{
};


struct AActor_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   
	struct FName                                       SocketName;                                               
	EAttachmentRule                                    LocationRule;                                             
	EAttachmentRule                                    RotationRule;                                             
	EAttachmentRule                                    ScaleRule;                                                
	bool                                               bWeldSimulatedBodies;                                     
};


struct AActor_K2_AttachToActor_Params
{
	class AActor*                                      ParentActor;                                              
	struct FName                                       SocketName;                                               
	EAttachmentRule                                    LocationRule;                                             
	EAttachmentRule                                    RotationRule;                                             
	EAttachmentRule                                    ScaleRule;                                                
	bool                                               bWeldSimulatedBodies;                                     
};


struct AActor_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            
	struct FName                                       InSocketName;                                             
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       
	bool                                               bWeldSimulatedBodies;                                     
};


struct AActor_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 
	struct FName                                       InSocketName;                                             
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       
	bool                                               bWeldSimulatedBodies;                                     
};


struct AActor_K2_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_K2_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_K2_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_K2_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_K2_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_K2_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct AActor_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    
	bool                                               ReturnValue;                                              
};


struct AActor_IsChildActor_Params
{
	bool                                               ReturnValue;                                              
};


struct AActor_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct AActor_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              
};


struct AActor_HasAuthority_Params
{
	bool                                               ReturnValue;                                              
};


struct AActor_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               
	float                                              ReturnValue;                                              
};


struct AActor_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AActor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              
};


struct AActor_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct AActor_GetSquaredDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               
	float                                              ReturnValue;                                              
};


struct AActor_GetRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct AActor_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct AActor_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              
};


struct AActor_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct AActor_GetParallelWorldId_Params
{
	int                                                ReturnValue;                                              
};


struct AActor_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct AActor_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    
};


struct AActor_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        
	class UClass*                                      ClassFilter;                                              
};


struct AActor_GetNetUpdateGroupID_Params
{
	unsigned char                                      ReturnValue;                                              
};


struct AActor_GetLocalRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct AActor_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              
};


struct AActor_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              
};


struct AActor_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              
};


struct AActor_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             
	struct FVector                                     ReturnValue;                                              
};


struct AActor_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            
	float                                              ReturnValue;                                              
};


struct AActor_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             
	float                                              ReturnValue;                                              
};


struct AActor_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               
	float                                              ReturnValue;                                              
};


struct AActor_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               
	float                                              ReturnValue;                                              
};


struct AActor_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              
};


struct AActor_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               
	float                                              ReturnValue;                                              
};


struct AActor_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               
	float                                              ReturnValue;                                              
};


struct AActor_GetComponentsByTag_Params
{
	class UClass*                                      ComponentClass;                                           
	struct FName                                       Tag;                                                      
	TArray<class UActorComponent*>                     ReturnValue;                                              
};


struct AActor_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           
	TArray<class UActorComponent*>                     ReturnValue;                                              
};


struct AActor_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           
	class UActorComponent*                             ReturnValue;                                              
};


struct AActor_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct AActor_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct AActor_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                
};


struct AActor_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              
	bool                                               bIncludeDescendants;                                      
};


struct AActor_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AActor_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              
};


struct AActor_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              
};


struct AActor_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AActor_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AActor_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AActor_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AActor_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              
	struct FRotator                                    OutRotation;                                              
};


struct AActor_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              
};


struct AActor_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 
	struct FVector                                     Origin;                                                   
	struct FVector                                     BoxExtent;                                                
};


struct AActor_ForceNetUpdate_Params
{
};


struct AActor_ForceNetConsider_Params
{
};


struct AActor_FlushNetDormancyOnceForReplay_Params
{
};


struct AActor_FlushNetDormancy_Params
{
};


struct AActor_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         
};


struct AActor_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         
};


struct AActor_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   
};


struct AActor_ClearComponentOverlaps_Params
{
};


struct AActor_BeenInParallelWorld_Params
{
	bool                                               ReturnValue;                                              
};


struct AActor_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    
};


struct AActor_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        
};


struct AActor_AddComponent_Params
{
	struct FName                                       TemplateName;                                             
	bool                                               bManualAttachment;                                        
	struct FTransform                                  RelativeTransform;                                        
	class UObject*                                     ComponentTemplateContext;                                 
	class UActorComponent*                             ReturnValue;                                              
};


struct AActor_ActorTriggeredBySignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct AActor_ActorPhysicsContactSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               
	EPhysicsContactState                               ContactState;                                             
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct AActor_ActorInteractWithTriggerSignature__DelegateSignature_Params
{
	class AActor*                                      TriggerActor;                                             
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct AActor_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      
	bool                                               ReturnValue;                                              
};


struct UActorComponent_ToggleActive_Params
{
};


struct UActorComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             
};


struct UActorComponent_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      
};


struct UActorComponent_SetIsReplicated_Params
{
	bool                                               ShouldReplicate;                                          
};


struct UActorComponent_SetComponentTickInterval_Params
{
	float                                              TickInterval;                                             
};


struct UActorComponent_SetComponentTickEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UActorComponent_SetAutoActivate_Params
{
	bool                                               bNewAutoActivate;                                         
};


struct UActorComponent_SetActive_Params
{
	bool                                               bNewActive;                                               
	bool                                               bReset;                                                   
};


struct UActorComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    
};


struct UActorComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        
};


struct UActorComponent_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             
};


struct UActorComponent_ReceivePostReplayRecover_Params
{
};


struct UActorComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct UActorComponent_ReceiveBeginPlay_Params
{
};


struct UActorComponent_OnRep_Replicates_Params
{
};


struct UActorComponent_OnRep_IsActive_Params
{
};


struct UActorComponent_MarkNetDormancyForReplay_Params
{
	bool                                               bInDormancyForReplay;                                     
	bool                                               bForceNetUpdate;                                          
};


struct UActorComponent_K2_DestroyComponent_Params
{
	class UObject*                                     Object;                                                   
};


struct UActorComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UActorComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              
};


struct UActorComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              
};


struct UActorComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UActorComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              
};


struct UActorComponent_ForceNetUpdate_Params
{
};


struct UActorComponent_FlushNetDormancyOnceForReplay_Params
{
};


struct UActorComponent_Deactivate_Params
{
};


struct UActorComponent_ComponentHasTag_Params
{
	struct FName                                       Tag;                                                      
	bool                                               ReturnValue;                                              
};


struct UActorComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    
};


struct UActorComponent_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        
};


struct UActorComponent_Activate_Params
{
	bool                                               bReset;                                                   
};


struct USceneComponent_ToggleVisibility_Params
{
	bool                                               bPropagateToChildren;                                     
};


struct USceneComponent_SnapTo_Params
{
	class USceneComponent*                             InParent;                                                 
	struct FName                                       InSocketName;                                             
	bool                                               ReturnValue;                                              
};


struct USceneComponent_SetWorldScale3D_Params
{
	struct FVector                                     NewScale;                                                 
};


struct USceneComponent_SetVisibility_Params
{
	bool                                               bNewVisibility;                                           
	bool                                               bPropagateToChildren;                                     
};


struct USceneComponent_SetSkipUpdateChildTransforms_Params
{
	bool                                               EnableSkipUpdateChildTransforms;                          
};


struct USceneComponent_SetSkipTransformUpdateWhenHidden_Params
{
	bool                                               bEnable;                                                  
};


struct USceneComponent_SetRelativeScale3D_Params
{
	struct FVector                                     NewScale3D;                                               
};


struct USceneComponent_SetHiddenInGame_Params
{
	bool                                               NewHidden;                                                
	bool                                               bPropagateToChildren;                                     
};


struct USceneComponent_SetAbsolute_Params
{
	bool                                               bNewAbsoluteLocation;                                     
	bool                                               bNewAbsoluteRotation;                                     
	bool                                               bNewAbsoluteScale;                                        
};


struct USceneComponent_ResetRelativeTransform_Params
{
};


struct USceneComponent_OnRep_Visibility_Params
{
	bool                                               OldValue;                                                 
};


struct USceneComponent_OnRep_Transform_Params
{
};


struct USceneComponent_OnRep_AttachSocketName_Params
{
};


struct USceneComponent_OnRep_AttachParent_Params
{
};


struct USceneComponent_OnRep_AttachChildren_Params
{
};


struct USceneComponent_K2_SetWorldTransform_Params
{
	struct FTransform                                  NewTransform;                                             
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_SetWorldRotation_Params
{
	struct FRotator                                    NewRotation;                                              
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_SetWorldLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              
	struct FRotator                                    NewRotation;                                              
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_SetWorldLocation_Params
{
	struct FVector                                     NewLocation;                                              
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_SetRelativeTransform_Params
{
	struct FTransform                                  NewTransform;                                             
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_SetRelativeRotation_Params
{
	struct FRotator                                    NewRotation;                                              
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_SetRelativeLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              
	struct FRotator                                    NewRotation;                                              
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_SetRelativeLocation_Params
{
	struct FVector                                     NewLocation;                                              
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_GetComponentToWorld_Params
{
	struct FTransform                                  ReturnValue;                                              
};


struct USceneComponent_K2_GetComponentScale_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USceneComponent_K2_GetComponentRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct USceneComponent_K2_GetComponentLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USceneComponent_K2_DetachFromComponent_Params
{
	EDetachmentRule                                    LocationRule;                                             
	EDetachmentRule                                    RotationRule;                                             
	EDetachmentRule                                    ScaleRule;                                                
	bool                                               bCallModify;                                              
};


struct USceneComponent_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   
	struct FName                                       SocketName;                                               
	EAttachmentRule                                    LocationRule;                                             
	EAttachmentRule                                    RotationRule;                                             
	EAttachmentRule                                    ScaleRule;                                                
	bool                                               bWeldSimulatedBodies;                                     
	bool                                               ReturnValue;                                              
};


struct USceneComponent_K2_AttachTo_Params
{
	class USceneComponent*                             InParent;                                                 
	struct FName                                       InSocketName;                                             
	TEnumAsByte<EAttachLocation>                       AttachType;                                               
	bool                                               bWeldSimulatedBodies;                                     
	bool                                               ReturnValue;                                              
};


struct USceneComponent_K2_AddWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_AddWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_AddWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_AddRelativeRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_AddRelativeLocation_Params
{
	struct FVector                                     DeltaLocation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_AddLocalTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_AddLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_K2_AddLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            
	bool                                               bSweep;                                                   
	struct FHitResult                                  SweepHitResult;                                           
	bool                                               bTeleport;                                                
};


struct USceneComponent_IsVisible_Params
{
	bool                                               ReturnValue;                                              
};


struct USceneComponent_IsSimulatingPhysics_Params
{
	struct FName                                       BoneName;                                                 
	bool                                               ReturnValue;                                              
};


struct USceneComponent_IsAnySimulatingPhysics_Params
{
	bool                                               ReturnValue;                                              
};


struct USceneComponent_GetUpVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USceneComponent_GetSocketTransform_Params
{
	struct FName                                       InSocketName;                                             
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           
	struct FTransform                                  ReturnValue;                                              
};


struct USceneComponent_GetSocketRotation_Params
{
	struct FName                                       InSocketName;                                             
	struct FRotator                                    ReturnValue;                                              
};


struct USceneComponent_GetSocketQuaternion_Params
{
	struct FName                                       InSocketName;                                             
	struct FQuat                                       ReturnValue;                                              
};


struct USceneComponent_GetSocketLocation_Params
{
	struct FName                                       InSocketName;                                             
	struct FVector                                     ReturnValue;                                              
};


struct USceneComponent_GetSkipTransformUpdateWhenHidden_Params
{
	bool                                               ReturnValue;                                              
};


struct USceneComponent_GetRightVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USceneComponent_GetRelativeTransform_Params
{
	struct FTransform                                  ReturnValue;                                              
};


struct USceneComponent_GetPhysicsVolume_Params
{
	class APhysicsVolume*                              ReturnValue;                                              
};


struct USceneComponent_GetParentComponents_Params
{
	TArray<class USceneComponent*>                     Parents;                                                  
};


struct USceneComponent_GetNumChildrenComponents_Params
{
	int                                                ReturnValue;                                              
};


struct USceneComponent_GetForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USceneComponent_GetComponentVelocity_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USceneComponent_GetComponentTransformViewTranslatedBP_Params
{
	struct FTransform                                  ReturnValue;                                              
};


struct USceneComponent_GetComponentLocal_Params
{
	struct FTransform                                  LocalTransform;                                           
	struct FTransform                                  ReturnValue;                                              
};


struct USceneComponent_GetChildrenComponents_Params
{
	bool                                               bIncludeAllDescendants;                                   
	TArray<class USceneComponent*>                     Children;                                                 
};


struct USceneComponent_GetChildComponent_Params
{
	int                                                ChildIndex;                                               
	class USceneComponent*                             ReturnValue;                                              
};


struct USceneComponent_GetAttachSocketName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct USceneComponent_GetAttachParent_Params
{
	class USceneComponent*                             ReturnValue;                                              
};


struct USceneComponent_GetAllSocketNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              
};


struct USceneComponent_DoesSocketExist_Params
{
	struct FName                                       InSocketName;                                             
	bool                                               ReturnValue;                                              
};


struct USceneComponent_DetachFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   
	bool                                               bCallModify;                                              
};


struct UMovementComponent_StopMovementImmediately_Params
{
};


struct UMovementComponent_SnapUpdatedComponentToPlane_Params
{
};


struct UMovementComponent_SetUpdatedComponent_Params
{
	class USceneComponent*                             NewUpdatedComponent;                                      
};


struct UMovementComponent_SetPlaneConstraintOrigin_Params
{
	struct FVector                                     PlaneOrigin;                                              
};


struct UMovementComponent_SetPlaneConstraintNormal_Params
{
	struct FVector                                     PlaneNormal;                                              
};


struct UMovementComponent_SetPlaneConstraintFromVectors_Params
{
	struct FVector                                     Forward;                                                  
	struct FVector                                     Up;                                                       
};


struct UMovementComponent_SetPlaneConstraintEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UMovementComponent_SetPlaneConstraintAxisSetting_Params
{
	EPlaneConstraintAxisSetting                        NewAxisSetting;                                           
};


struct UMovementComponent_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                
};


struct UMovementComponent_K2_MoveUpdatedComponent_Params
{
	struct FVector                                     Delta;                                                    
	struct FRotator                                    NewRotation;                                              
	struct FHitResult                                  OutHit;                                                   
	bool                                               bSweep;                                                   
	bool                                               bTeleport;                                                
	bool                                               ReturnValue;                                              
};


struct UMovementComponent_K2_GetModifiedMaxSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UMovementComponent_K2_GetMaxSpeedModifier_Params
{
	float                                              ReturnValue;                                              
};


struct UMovementComponent_IsExceedingMaxSpeed_Params
{
	float                                              MaxSpeed;                                                 
	bool                                               ReturnValue;                                              
};


struct UMovementComponent_GetPlaneConstraintOrigin_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UMovementComponent_GetPlaneConstraintNormal_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UMovementComponent_GetPlaneConstraintAxisSetting_Params
{
	EPlaneConstraintAxisSetting                        ReturnValue;                                              
};


struct UMovementComponent_GetPhysicsVolume_Params
{
	class APhysicsVolume*                              ReturnValue;                                              
};


struct UMovementComponent_GetMaxSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UMovementComponent_GetGravityZ_Params
{
	float                                              ReturnValue;                                              
};


struct UMovementComponent_ConstrainNormalToPlane_Params
{
	struct FVector                                     Normal;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UMovementComponent_ConstrainLocationToPlane_Params
{
	struct FVector                                     Location;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UMovementComponent_ConstrainDirectionToPlane_Params
{
	struct FVector                                     Direction;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_WakeRigidBody_Params
{
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_WakeAllRigidBodies_Params
{
};


struct UPrimitiveComponent_SetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      NewOverride;                                              
};


struct UPrimitiveComponent_SetVisibleDyeingColor_Params
{
	struct FLinearColor                                InColor;                                                  
};


struct UPrimitiveComponent_SetUnderWater_Params
{
	bool                                               bNewUnderWater;                                           
};


struct UPrimitiveComponent_SetTwoPassTranslucent_Params
{
	bool                                               bNewTwoPassTranslucent;                                   
};


struct UPrimitiveComponent_SetTranslucentSortPriority_Params
{
	int                                                NewTranslucentSortPriority;                               
};


struct UPrimitiveComponent_SetTranslucentSortGroupPriority_Params
{
	int                                                NewTranslucentSortGroupPriority;                          
};


struct UPrimitiveComponent_SetTranslucentDepthWriteInTwoPass_Params
{
	bool                                               bNewTranslucentDepthWriteInTwoPass;                       
};


struct UPrimitiveComponent_SetTranslucentDepthWrite_Params
{
	bool                                               bNewTranslucentDepthWrite;                                
};


struct UPrimitiveComponent_SetSingleSampleShadowFromStationaryLights_Params
{
	bool                                               bNewSingleSampleShadowFromStationaryLights;               
};


struct UPrimitiveComponent_SetSimulatePhysics_Params
{
	bool                                               bSimulate;                                                
};


struct UPrimitiveComponent_SetRenderInMono_Params
{
	bool                                               bValue;                                                   
};


struct UPrimitiveComponent_SetRenderInMainPass_Params
{
	bool                                               bValue;                                                   
};


struct UPrimitiveComponent_SetRenderCustomDepth_Params
{
	bool                                               bValue;                                                   
};


struct UPrimitiveComponent_SetReceivesDecals_Params
{
	bool                                               bNewReceivesDecals;                                       
};


struct UPrimitiveComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial*                           NewPhysMaterial;                                          
};


struct UPrimitiveComponent_SetPhysicsMaxAngularVelocityInRadians_Params
{
	float                                              NewMaxAngVel;                                             
	bool                                               bAddToCurrent;                                            
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_SetPhysicsMaxAngularVelocityInDegrees_Params
{
	float                                              NewMaxAngVel;                                             
	bool                                               bAddToCurrent;                                            
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_SetPhysicsMaxAngularVelocity_Params
{
	float                                              NewMaxAngVel;                                             
	bool                                               bAddToCurrent;                                            
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_SetPhysicsLinearVelocity_Params
{
	struct FVector                                     NewVel;                                                   
	bool                                               bAddToCurrent;                                            
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_SetPhysicsAngularVelocityInRadians_Params
{
	struct FVector                                     NewAngVel;                                                
	bool                                               bAddToCurrent;                                            
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_SetPhysicsAngularVelocityInDegrees_Params
{
	struct FVector                                     NewAngVel;                                                
	bool                                               bAddToCurrent;                                            
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_SetPhysicsAngularVelocity_Params
{
	struct FVector                                     NewAngVel;                                                
	bool                                               bAddToCurrent;                                            
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_SetOwnerNoSee_Params
{
	bool                                               bNewOwnerNoSee;                                           
};


struct UPrimitiveComponent_SetOverrideOccludedDyeingColorMaterial_Params
{
	class UMaterialInterface*                          InMaterial;                                               
};


struct UPrimitiveComponent_SetOnlyOwnerSee_Params
{
	bool                                               bNewOnlyOwnerSee;                                         
};


struct UPrimitiveComponent_SetOccludedDyeingColor_Params
{
	struct FLinearColor                                InColor;                                                  
};


struct UPrimitiveComponent_SetNotifyRigidBodyCollision_Params
{
	bool                                               bNewNotifyRigidBodyCollision;                             
};


struct UPrimitiveComponent_SetMaterialByNameAsyncCallBack_Params
{
	struct FName                                       MaterialSlotName;                                         
};


struct UPrimitiveComponent_SetMaterialByNameAsync_Params
{
	struct FName                                       MaterialSlotName;                                         
	struct FString                                     MaterialPath;                                             
};


struct UPrimitiveComponent_SetMaterialByName_Params
{
	struct FName                                       MaterialSlotName;                                         
	class UMaterialInterface*                          Material;                                                 
};


struct UPrimitiveComponent_SetMaterial_Params
{
	int                                                ElementIndex;                                             
	class UMaterialInterface*                          Material;                                                 
};


struct UPrimitiveComponent_SetMassScale_Params
{
	struct FName                                       BoneName;                                                 
	float                                              InMassScale;                                              
};


struct UPrimitiveComponent_SetMassOverrideInKg_Params
{
	struct FName                                       BoneName;                                                 
	float                                              MassInKg;                                                 
	bool                                               bOverrideMass;                                            
};


struct UPrimitiveComponent_SetMaskFilter_Params
{
	int                                                InMaskFilter;                                             
};


struct UPrimitiveComponent_SetLODDefault_Params
{
	int                                                LODIndex;                                                 
	class UMaterialInterface*                          LODMat;                                                   
};


struct UPrimitiveComponent_SetLockedAxis_Params
{
	TEnumAsByte<EDOFMode>                              LockedAxis;                                               
};


struct UPrimitiveComponent_SetLinearDamping_Params
{
	float                                              InDamping;                                                
};


struct UPrimitiveComponent_SetLastRenderInOpaque_Params
{
	bool                                               bNewLastRenderInOpaque;                                   
};


struct UPrimitiveComponent_SetIdeaOverrideOutlineAndOcclusion_Params
{
	bool                                               bOutlineAndOcclusion;                                     
};


struct UPrimitiveComponent_SetIdeaOutlineUseNormalInVertexColor_Params
{
	bool                                               bNewUseNormalInVertexColor;                               
};


struct UPrimitiveComponent_SetIdeaOutlineOcclusionHighlight_Params
{
	bool                                               bOcclusionHighlight;                                      
};


struct UPrimitiveComponent_SetIdeaOutlineOcclusionColor_Params
{
	struct FLinearColor                                InOcclusionColor;                                         
};


struct UPrimitiveComponent_SetIdeaOutlineNew_Params
{
	bool                                               bNew;                                                     
};


struct UPrimitiveComponent_SetHighlightCanBeOccluded_Params
{
	bool                                               bInCanBeOccluded;                                         
};


struct UPrimitiveComponent_SetEnableGravity_Params
{
	bool                                               bGravityEnabled;                                          
};


struct UPrimitiveComponent_SetDyeingColorMinMaxDistance_Params
{
	float                                              InMinDistance;                                            
	float                                              InMaxDistance;                                            
};


struct UPrimitiveComponent_SetDyeingColorFadeDistance_Params
{
	float                                              InFadeDistance;                                           
};


struct UPrimitiveComponent_SetDrawIdeaOutline_Params
{
	bool                                               bNewDrawOutline;                                          
};


struct UPrimitiveComponent_SetDrawHighlight_Params
{
	bool                                               bNewDrawHighlight;                                        
};


struct UPrimitiveComponent_SetDrawDyeingMode_Params
{
	EDrawDyeingMode                                    InDrawDyeingMode;                                         
};


struct UPrimitiveComponent_SetDrawDyeing_Params
{
	bool                                               bNewDrawOutline;                                          
};


struct UPrimitiveComponent_SetCustomDepthStencilWriteMask_Params
{
	ERendererStencilMask                               WriteMaskBit;                                             
};


struct UPrimitiveComponent_SetCustomDepthStencilValue_Params
{
	int                                                Value;                                                    
};


struct UPrimitiveComponent_SetCullDistance_Params
{
	float                                              NewCullDistance;                                          
};


struct UPrimitiveComponent_SetConstraintMode_Params
{
	TEnumAsByte<EDOFMode>                              ConstraintMode;                                           
};


struct UPrimitiveComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              
};


struct UPrimitiveComponent_SetCollisionResponseToAllChannels_Params
{
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              
};


struct UPrimitiveComponent_SetCollisionProfileName_Params
{
	struct FName                                       InCollisionProfileName;                                   
};


struct UPrimitiveComponent_SetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  
};


struct UPrimitiveComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     NewType;                                                  
};


struct UPrimitiveComponent_SetCenterOfMass_Params
{
	struct FVector                                     CenterOfMassOffset;                                       
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_SetCastShadow_Params
{
	bool                                               NewCastShadow;                                            
};


struct UPrimitiveComponent_SetCastPhotonShadow_Params
{
	bool                                               bNewCastPhotonShadow;                                     
};


struct UPrimitiveComponent_SetBoundsScale_Params
{
	float                                              NewBoundsScale;                                           
};


struct UPrimitiveComponent_SetAngularDamping_Params
{
	float                                              InDamping;                                                
};


struct UPrimitiveComponent_SetAllPhysicsLinearVelocity_Params
{
	struct FVector                                     NewVel;                                                   
	bool                                               bAddToCurrent;                                            
};


struct UPrimitiveComponent_SetAllPhysicsAngularVelocityInRadians_Params
{
	struct FVector                                     NewAngVel;                                                
	bool                                               bAddToCurrent;                                            
};


struct UPrimitiveComponent_SetAllPhysicsAngularVelocityInDegrees_Params
{
	struct FVector                                     NewAngVel;                                                
	bool                                               bAddToCurrent;                                            
};


struct UPrimitiveComponent_SetAllPhysicsAngularVelocity_Params
{
	struct FVector                                     NewAngVel;                                                
	bool                                               bAddToCurrent;                                            
};


struct UPrimitiveComponent_SetAllowCullDistanceVolume_Params
{
	bool                                               bNewAllowCullDistanceVolume;                              
};


struct UPrimitiveComponent_SetAllMassScale_Params
{
	float                                              InMassScale;                                              
};


struct UPrimitiveComponent_SetAfterSeparateTransparencyFlag_Params
{
	bool                                               flag;                                                     
};


struct UPrimitiveComponent_SetAffectAO_Params
{
	bool                                               bNewAffectAO;                                             
};


struct UPrimitiveComponent_ScaleByMomentOfInertia_Params
{
	struct FVector                                     InputVector;                                              
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_PutRigidBodyToSleep_Params
{
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_OverrideIdeaOutlineThickness_Params
{
	bool                                               bOverride;                                                
	float                                              InThickness;                                              
};


struct UPrimitiveComponent_OverrideIdeaOutlineColor_Params
{
	bool                                               bOverride;                                                
	struct FLinearColor                                InOutlineColor;                                           
};


struct UPrimitiveComponent_OverrideHighlightColor_Params
{
	bool                                               bOverride;                                                
	struct FLinearColor                                InHighlightColor;                                         
};


struct UPrimitiveComponent_ModifyCollision_Params
{
	TEnumAsByte<ECollisionEnabled>                     NewType;                                                  
};


struct UPrimitiveComponent_K2_SetMoveIgnoreMask_Params
{
	int                                                InIgnoreMask;                                             
};


struct UPrimitiveComponent_K2_LineTraceComponent_Params
{
	struct FVector                                     TraceStart;                                               
	struct FVector                                     TraceEnd;                                                 
	bool                                               bTraceComplex;                                            
	bool                                               bShowTrace;                                               
	struct FVector                                     HitLocation;                                              
	struct FVector                                     HitNormal;                                                
	struct FName                                       BoneName;                                                 
	struct FHitResult                                  OutHit;                                                   
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_K2_IsTriggerCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_K2_IsQueryCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_K2_IsPhysicsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_K2_IsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_K2_GetMoveIgnoreMask_Params
{
	int                                                ReturnValue;                                              
};


struct UPrimitiveComponent_IsOverlappingComponent_Params
{
	class UPrimitiveComponent*                         OtherComp;                                                
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_IsGravityEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_IsAnyRigidBodyAwake_Params
{
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_IgnoreComponentWhenMoving_Params
{
	class UPrimitiveComponent*                         Component;                                                
	bool                                               bShouldIgnore;                                            
};


struct UPrimitiveComponent_IgnoreActorWhenMoving_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               bShouldIgnore;                                            
};


struct UPrimitiveComponent_GetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      ReturnValue;                                              
};


struct UPrimitiveComponent_GetPhysicsLinearVelocityAtPoint_Params
{
	struct FVector                                     Point;                                                    
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetPhysicsLinearVelocity_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetPhysicsAngularVelocityInRadians_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetPhysicsAngularVelocityInDegrees_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetPhysicsAngularVelocity_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 InOverlappingComponents;                                  
};


struct UPrimitiveComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        
	class UClass*                                      ClassFilter;                                              
};


struct UPrimitiveComponent_GetNumMaterials_Params
{
	int                                                ReturnValue;                                              
};


struct UPrimitiveComponent_GetMaterialFromCollisionFaceIndex_Params
{
	int                                                FaceIndex;                                                
	int                                                SectionIndex;                                             
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UPrimitiveComponent_GetMaterialAsync_Params
{
	int                                                ElementIndex;                                             
	struct FScriptDelegate                             MaterialCallback;                                         
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UPrimitiveComponent_GetMaterial_Params
{
	int                                                ElementIndex;                                             
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UPrimitiveComponent_GetMassScale_Params
{
	struct FName                                       BoneName;                                                 
	float                                              ReturnValue;                                              
};


struct UPrimitiveComponent_GetMass_Params
{
	float                                              ReturnValue;                                              
};


struct UPrimitiveComponent_GetMaskFilter_Params
{
	int                                                ReturnValue;                                              
};


struct UPrimitiveComponent_GetLocalCenterOfMass_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetLinearDamping_Params
{
	float                                              ReturnValue;                                              
};


struct UPrimitiveComponent_GetInterpolatedPhysicsDisplayTransform_Params
{
	struct FTransform                                  ReturnValue;                                              
};


struct UPrimitiveComponent_GetInertiaTensor_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  
	TEnumAsByte<ECollisionResponse>                    ReturnValue;                                              
};


struct UPrimitiveComponent_GetCollisionProfileName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct UPrimitiveComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetClosestPointOnCollision_Params
{
	struct FVector                                     Point;                                                    
	struct FVector                                     OutPointOnBody;                                           
	struct FName                                       BoneName;                                                 
	float                                              ReturnValue;                                              
};


struct UPrimitiveComponent_GetCenterOfMass_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UPrimitiveComponent_GetAngularDamping_Params
{
	float                                              ReturnValue;                                              
};


struct UPrimitiveComponent_ForceRecoverMaterial_Params
{
	int                                                ElementIndex;                                             
};


struct UPrimitiveComponent_ForceClearMaterial_Params
{
	int                                                ElementIndex;                                             
};


struct UPrimitiveComponent_CreateDynamicMaterialInstanceAsync_Params
{
	int                                                ElementIndex;                                             
	struct FScriptDelegate                             MaterialInstCallback;                                     
	class UMaterialInterface*                          SourceMaterial;                                           
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UPrimitiveComponent_CreateDynamicMaterialInstance_Params
{
	int                                                ElementIndex;                                             
	class UMaterialInterface*                          SourceMaterial;                                           
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UPrimitiveComponent_CreateAndSetMaterialInstanceDynamicFromMaterialAsync_Params
{
	int                                                ElementIndex;                                             
	class UMaterialInterface*                          Parent;                                                   
	struct FScriptDelegate                             MaterialInstCallback;                                     
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UPrimitiveComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params
{
	int                                                ElementIndex;                                             
	class UMaterialInterface*                          Parent;                                                   
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UPrimitiveComponent_CreateAndSetMaterialInstanceDynamicAsync_Params
{
	int                                                ElementIndex;                                             
	struct FScriptDelegate                             MaterialInstCallback;                                     
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UPrimitiveComponent_CreateAndSetMaterialInstanceDynamic_Params
{
	int                                                ElementIndex;                                             
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UPrimitiveComponent_CopyArrayOfMoveIgnoreComponents_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              
};


struct UPrimitiveComponent_CopyArrayOfMoveIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct UPrimitiveComponent_ComponentTriggeredBySignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct UPrimitiveComponent_ComponentPhysicsContactSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	EPhysicsContactState                               ContactState;                                             
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UPrimitiveComponent_ComponentInteractWithTriggerSignature__DelegateSignature_Params
{
	class AActor*                                      TriggerActor;                                             
	class UPrimitiveComponent*                         TriggerComp;                                              
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct UPrimitiveComponent_ClearMoveIgnoreComponents_Params
{
};


struct UPrimitiveComponent_ClearMoveIgnoreActors_Params
{
};


struct UPrimitiveComponent_CanCharacterStepUp_Params
{
	class APawn*                                       Pawn;                                                     
	bool                                               ReturnValue;                                              
};


struct UPrimitiveComponent_AddTorqueInRadians_Params
{
	struct FVector                                     Torque;                                                   
	struct FName                                       BoneName;                                                 
	bool                                               bAccelChange;                                             
};


struct UPrimitiveComponent_AddTorqueInDegrees_Params
{
	struct FVector                                     Torque;                                                   
	struct FName                                       BoneName;                                                 
	bool                                               bAccelChange;                                             
};


struct UPrimitiveComponent_AddTorque_Params
{
	struct FVector                                     Torque;                                                   
	struct FName                                       BoneName;                                                 
	bool                                               bAccelChange;                                             
};


struct UPrimitiveComponent_AddRadialImpulse_Params
{
	struct FVector                                     Origin;                                                   
	float                                              Radius;                                                   
	float                                              Strength;                                                 
	TEnumAsByte<ERadialImpulseFalloff>                 Falloff;                                                  
	bool                                               bVelChange;                                               
};


struct UPrimitiveComponent_AddRadialForce_Params
{
	struct FVector                                     Origin;                                                   
	float                                              Radius;                                                   
	float                                              Strength;                                                 
	TEnumAsByte<ERadialImpulseFalloff>                 Falloff;                                                  
	bool                                               bAccelChange;                                             
};


struct UPrimitiveComponent_AddImpulseAtLocation_Params
{
	struct FVector                                     Impulse;                                                  
	struct FVector                                     Location;                                                 
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  
	struct FName                                       BoneName;                                                 
	bool                                               bVelChange;                                               
};


struct UPrimitiveComponent_AddForceAtLocationLocal_Params
{
	struct FVector                                     Force;                                                    
	struct FVector                                     Location;                                                 
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_AddForceAtLocation_Params
{
	struct FVector                                     Force;                                                    
	struct FVector                                     Location;                                                 
	struct FName                                       BoneName;                                                 
};


struct UPrimitiveComponent_AddForce_Params
{
	struct FVector                                     Force;                                                    
	struct FName                                       BoneName;                                                 
	bool                                               bAccelChange;                                             
};


struct UPrimitiveComponent_AddAngularImpulseInRadians_Params
{
	struct FVector                                     Impulse;                                                  
	struct FName                                       BoneName;                                                 
	bool                                               bVelChange;                                               
};


struct UPrimitiveComponent_AddAngularImpulseInDegrees_Params
{
	struct FVector                                     Impulse;                                                  
	struct FName                                       BoneName;                                                 
	bool                                               bVelChange;                                               
};


struct UPrimitiveComponent_AddAngularImpulse_Params
{
	struct FVector                                     Impulse;                                                  
	struct FName                                       BoneName;                                                 
	bool                                               bVelChange;                                               
};


struct UMeshComponent_SetVectorParameterValueOnMaterials_Params
{
	struct FName                                       ParameterName;                                            
	struct FVector                                     ParameterValue;                                           
};


struct UMeshComponent_SetUseOverlayMaterials_Params
{
	bool                                               bNewUseOverlayMaterials;                                  
};


struct UMeshComponent_SetUseIndexedOverlayMaterials_Params
{
	bool                                               bNewUseIndexedOverlayMaterials;                           
};


struct UMeshComponent_SetScalarParameterValueOnMaterials_Params
{
	struct FName                                       ParameterName;                                            
	float                                              ParameterValue;                                           
};


struct UMeshComponent_SetRenderInCustomPass_Params
{
	bool                                               InRenderInCustomPass;                                     
};


struct UMeshComponent_SetOverlayMaterialMaxDrawDistance_Params
{
	float                                              InMaxDrawDistance;                                        
};


struct UMeshComponent_SetOverlayMaterial_Params
{
	class UMaterialInterface*                          NewOverlayMaterial;                                       
};


struct UMeshComponent_SetLayerVisibilityValue_Params
{
	TEnumAsByte<EMeshVisibleLayer>                     Layer;                                                    
	bool                                               Visible;                                                  
	bool                                               bPropagateToChildren;                                     
};


struct UMeshComponent_SetLayerVisibilityEnable_Params
{
	bool                                               Enable;                                                   
	bool                                               bPropagateToChildren;                                     
};


struct UMeshComponent_SetLayerCastShadowValue_Params
{
	TEnumAsByte<EMeshCastShadowLayer>                  Layer;                                                    
	bool                                               NewCastShadow;                                            
};


struct UMeshComponent_SetLayerCastShadowEnable_Params
{
	bool                                               Enable;                                                   
};


struct UMeshComponent_SetIsHeadMesh_Params
{
	bool                                               InIsHeadMesh;                                             
};


struct UMeshComponent_SetIndexedOverlayMaterial_Params
{
	int                                                ElementIndex;                                             
	class UMaterialInterface*                          Material;                                                 
};


struct UMeshComponent_SetForceSyncCreatePSO_Params
{
	bool                                               InForceSyncCreatePSO;                                     
};


struct UMeshComponent_SetFeatureMaterial_Params
{
	int                                                ElementIndex;                                             
	class UMaterialInterface*                          Material;                                                 
};


struct UMeshComponent_SetDrawStyle_Params
{
	TEnumAsByte<EDrawStyleMode>                        InDrawStyle;                                              
};


struct UMeshComponent_SetCastShadow_Params
{
	bool                                               NewCastShadow;                                            
};


struct UMeshComponent_PrestreamTextures_Params
{
	float                                              Seconds;                                                  
	bool                                               bPrioritizeCharacterTextures;                             
	int                                                CinematicTextureGroups;                                   
};


struct UMeshComponent_IsMaterialSlotNameValid_Params
{
	struct FName                                       MaterialSlotName;                                         
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetUseOverlayMaterials_Params
{
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetUseIndexedOverlayMaterials_Params
{
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetRenderInCustomPass_Params
{
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetOverlayMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UMeshComponent_GetMaterialSlotNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              
};


struct UMeshComponent_GetMaterials_Params
{
	TArray<class UMaterialInterface*>                  ReturnValue;                                              
};


struct UMeshComponent_GetMaterialIndex_Params
{
	struct FName                                       MaterialSlotName;                                         
	int                                                ReturnValue;                                              
};


struct UMeshComponent_GetLayerVisibilityValue_Params
{
	TEnumAsByte<EMeshVisibleLayer>                     Layer;                                                    
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetLayerCastShadowValue_Params
{
	TEnumAsByte<EMeshCastShadowLayer>                  Layer;                                                    
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetIsHideBySmartBear_Params
{
	TEnumAsByte<EMeshVisibleLayer>                     Layer;                                                    
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetIsHeadMesh_Params
{
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetIndexedOverlayMaterials_Params
{
	TArray<class UMaterialInterface*>                  ReturnValue;                                              
};


struct UMeshComponent_GetForceSyncCreatePSO_Params
{
	bool                                               ReturnValue;                                              
};


struct UMeshComponent_GetDrawStyle_Params
{
	TEnumAsByte<EDrawStyleMode>                        ReturnValue;                                              
};


struct UMeshComponent_EnableMeshClipPlane_Params
{
	struct FPlane                                      ClipPlane;                                                
	int                                                PlaneIndex;                                               
};


struct UMeshComponent_EnableMeshClipArc_Params
{
	struct FPlane                                      ClipPlane;                                                
	struct FVector4                                    ClipSphere;                                               
};


struct UMeshComponent_EnableMeshClip4Planes_Params
{
	TArray<struct FPlane>                              ClipPlanes;                                               
	bool                                               bBox;                                                     
};


struct UMeshComponent_DisableMeshClipPlane_Params
{
	int                                                PlaneIndex;                                               
};


struct UMeshComponent_DisableMeshClipArc_Params
{
};


struct UMeshComponent_DisableMeshClip4Planes_Params
{
};


struct UMeshComponent_ClearFeatureMaterial_Params
{
	int                                                ElementIndex;                                             
};


struct UMeshComponent_ClearAllFeatureMaterial_Params
{
};


struct UStaticMeshComponent_SetStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  
	bool                                               ReturnValue;                                              
};


struct UStaticMeshComponent_SetSectionVisible_Params
{
	int                                                SectionIndex;                                             
	bool                                               bShow;                                                    
	int                                                LODIndex;                                                 
};


struct UStaticMeshComponent_SetSectionsVisible_Params
{
	TArray<int>                                        SectionIndices;                                           
	bool                                               bShow;                                                    
	int                                                LODIndex;                                                 
};


struct UStaticMeshComponent_SetRenderInCustomPass_Params
{
	bool                                               InRenderInCustomPass;                                     
};


struct UStaticMeshComponent_SetOverrideCullingScreenSizeEnable_Params
{
	bool                                               bEnable;                                                  
};


struct UStaticMeshComponent_SetOverrideCullingScreenSize_Params
{
	float                                              ScreenSize;                                               
};


struct UStaticMeshComponent_SetLowDeviceForcedLodModel_Params
{
	int                                                NewLowDeviceForcedLodModel;                               
};


struct UStaticMeshComponent_SetForceSyncCreatePSO_Params
{
	bool                                               InForceSyncCreatePSO;                                     
};


struct UStaticMeshComponent_SetForcedLodModel_Params
{
	int                                                NewForcedLodModel;                                        
};


struct UStaticMeshComponent_SetDrawStyle_Params
{
	TEnumAsByte<EDrawStyleMode>                        InDrawStyle;                                              
};


struct UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Params
{
	float                                              NewValue;                                                 
};


struct UStaticMeshComponent_SetDirty_Params
{
};


struct UStaticMeshComponent_OnRep_StaticMesh_Params
{
	class UStaticMesh*                                 OldStaticMesh;                                            
};


struct UStaticMeshComponent_GetRenderInCustomPass_Params
{
	bool                                               ReturnValue;                                              
};


struct UStaticMeshComponent_GetNumMeshSections_Params
{
	int                                                ReturnValue;                                              
};


struct UStaticMeshComponent_GetLocalBounds_Params
{
	struct FVector                                     Min;                                                      
	struct FVector                                     Max;                                                      
};


struct UStaticMeshComponent_GetForceSyncCreatePSO_Params
{
	bool                                               ReturnValue;                                              
};


struct UStaticMeshComponent_GetDrawStyle_Params
{
	TEnumAsByte<EDrawStyleMode>                        ReturnValue;                                              
};


struct UStaticMeshComponent_EnableMeshClipPlane_Params
{
	struct FPlane                                      ClipPlane;                                                
	int                                                PlaneIndex;                                               
};


struct UStaticMeshComponent_EnableMeshClipArc_Params
{
	struct FPlane                                      ClipPlane;                                                
	struct FVector4                                    ClipSphere;                                               
};


struct UStaticMeshComponent_EnableMeshClip4Planes_Params
{
	TArray<struct FPlane>                              ClipPlanes;                                               
	bool                                               bBox;                                                     
};


struct UStaticMeshComponent_DisableMeshClipPlane_Params
{
	int                                                PlaneIndex;                                               
};


struct UStaticMeshComponent_DisableMeshClipArc_Params
{
};


struct UStaticMeshComponent_DisableMeshClip4Planes_Params
{
};


struct APawn_SpawnDefaultController_Params
{
};


struct APawn_SetUseViewTranslatedTransform_Params
{
	bool                                               bNewUseViewTranslatedTransform;                           
};


struct APawn_SetCanAffectNavigationGeneration_Params
{
	bool                                               bNewValue;                                                
	bool                                               bForceUpdate;                                             
};


struct APawn_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                            
};


struct APawn_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            
};


struct APawn_PawnMakeNoise_Params
{
	float                                              Loudness;                                                 
	struct FVector                                     NoiseLocation;                                            
	bool                                               bUseNoiseMakerLocation;                                   
	class AActor*                                      NoiseMaker;                                               
};


struct APawn_OnRep_PlayerState_Params
{
};


struct APawn_OnRep_Controller_Params
{
};


struct APawn_LaunchPawn_Params
{
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bXYOverride;                                              
	bool                                               bZOverride;                                               
};


struct APawn_K2_GetMovementInputVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct APawn_IsPlayerControlled_Params
{
	bool                                               ReturnValue;                                              
};


struct APawn_IsMoveInputIgnored_Params
{
	bool                                               ReturnValue;                                              
};


struct APawn_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              
};


struct APawn_IsControlled_Params
{
	bool                                               ReturnValue;                                              
};


struct APawn_GetPendingMovementInputVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct APawn_GetNavAgentLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct APawn_GetMovementComponent_Params
{
	class UPawnMovementComponent*                      ReturnValue;                                              
};


struct APawn_GetMovementBaseActor_Params
{
	class APawn*                                       Pawn;                                                     
	class AActor*                                      ReturnValue;                                              
};


struct APawn_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              
};


struct APawn_GetLastMovementInputVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct APawn_GetControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct APawn_GetController_Params
{
	class AController*                                 ReturnValue;                                              
};


struct APawn_GetBaseAimRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct APawn_DetachFromControllerPendingDestroy_Params
{
};


struct APawn_ConsumeMovementInputVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct APawn_AddMovementInput_Params
{
	struct FVector                                     WorldDirection;                                           
	float                                              ScaleValue;                                               
	bool                                               bForce;                                                   
};


struct APawn_AddControllerYawInput_Params
{
	float                                              Val;                                                      
};


struct APawn_AddControllerRollInput_Params
{
	float                                              Val;                                                      
};


struct APawn_AddControllerPitchInput_Params
{
	float                                              Val;                                                      
};


struct UBoxComponent_SetBoxExtent_Params
{
	struct FVector                                     InBoxExtent;                                              
	bool                                               bUpdateOverlaps;                                          
};


struct UBoxComponent_GetUnscaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBoxComponent_GetScaledBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USceneCaptureComponent_ShowOnlyComponent_Params
{
	class UPrimitiveComponent*                         InComponent;                                              
};


struct USceneCaptureComponent_ShowOnlyActorComponents_Params
{
	class AActor*                                      InActor;                                                  
};


struct USceneCaptureComponent_SetCaptureSortPriority_Params
{
	int                                                NewCaptureSortPriority;                                   
};


struct USceneCaptureComponent_RemoveShowOnlyComponent_Params
{
	class UPrimitiveComponent*                         InComponent;                                              
};


struct USceneCaptureComponent_RemoveShowOnlyActorComponents_Params
{
	class AActor*                                      InActor;                                                  
};


struct USceneCaptureComponent_HideComponent_Params
{
	class UPrimitiveComponent*                         InComponent;                                              
};


struct USceneCaptureComponent_HideActorComponents_Params
{
	class AActor*                                      InActor;                                                  
};


struct USceneCaptureComponent_ClearShowOnlyComponents_Params
{
	class UPrimitiveComponent*                         InComponent;                                              
};


struct USceneCaptureComponent_ClearHiddenComponents_Params
{
};


struct USceneCaptureComponent2D_CaptureScene_Params
{
};


struct USceneCaptureComponent2D_AddOrUpdateBlendable_Params
{
	TScriptInterface<class UBlendableInterface>        InBlendableObject;                                        
	float                                              InWeight;                                                 
};


struct ACameraActor_GetAutoActivatePlayerIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UBlueprintAsyncActionBase_Activate_Params
{
};


struct UInstancedStaticMeshComponent_UpdateInstanceTransform_Params
{
	int                                                InstanceIndex;                                            
	struct FTransform                                  NewInstanceTransform;                                     
	bool                                               bWorldSpace;                                              
	bool                                               bMarkRenderStateDirty;                                    
	bool                                               bTeleport;                                                
	bool                                               ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_ShowInstances_Params
{
	TArray<int>                                        InstanceIndices;                                          
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_SetCullDistances_Params
{
	int                                                StartCullDistance;                                        
	int                                                EndCullDistance;                                          
};


struct UInstancedStaticMeshComponent_ResetAllInstances_Params
{
	bool                                               ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_ReplaceAllInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               bShouldReturnIndices;                                     
	TArray<int>                                        ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_RemoveInstances_Params
{
	TArray<int>                                        InstanceIndices;                                          
	bool                                               ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_RemoveInstance_Params
{
	int                                                InstanceIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_HideInstance_Params
{
	TArray<int>                                        InstanceIndices;                                          
	bool                                               ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_GetInstanceTransform_Params
{
	int                                                InstanceIndex;                                            
	struct FTransform                                  OutInstanceTransform;                                     
	bool                                               bWorldSpace;                                              
	bool                                               ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Params
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	bool                                               bSphereInWorldSpace;                                      
	TArray<int>                                        ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Params
{
	struct FBox                                        Box;                                                      
	bool                                               bBoxInWorldSpace;                                         
	TArray<int>                                        ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_GetInstanceCount_Params
{
	int                                                ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_ClearInstances_Params
{
};


struct UInstancedStaticMeshComponent_AddInstanceWorldSpace_Params
{
	struct FTransform                                  WorldTransform;                                           
	int                                                ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_AddInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               bShouldReturnIndices;                                     
	bool                                               bMarkRenderStateDirty;                                    
	TArray<int>                                        ReturnValue;                                              
};


struct UInstancedStaticMeshComponent_AddInstance_Params
{
	struct FTransform                                  InstanceTransform;                                        
	int                                                ReturnValue;                                              
};


struct UHierarchicalInstancedStaticMeshComponent_ShowInstances_Params
{
	TArray<int>                                        InstanceIndices;                                          
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               ReturnValue;                                              
};


struct UHierarchicalInstancedStaticMeshComponent_ResetAllInstances_Params
{
	bool                                               ReturnValue;                                              
};


struct UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Params
{
	TArray<int>                                        InstancesToRemove;                                        
	bool                                               ReturnValue;                                              
};


struct USkinnedMeshComponent_UnloadSkinWeightProfile_Params
{
	struct FName                                       InProfileName;                                            
};


struct USkinnedMeshComponent_UnHideBoneByName_Params
{
	struct FName                                       BoneName;                                                 
};


struct USkinnedMeshComponent_TransformToBoneSpace_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     InPosition;                                               
	struct FRotator                                    InRotation;                                               
	struct FVector                                     OutPosition;                                              
	struct FRotator                                    OutRotation;                                              
};


struct USkinnedMeshComponent_TransformFromBoneSpace_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     InPosition;                                               
	struct FRotator                                    InRotation;                                               
	struct FVector                                     OutPosition;                                              
	struct FRotator                                    OutRotation;                                              
};


struct USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Params
{
	int                                                LODIndex;                                                 
	TArray<struct FLinearColor>                        VertexColors;                                             
};


struct USkinnedMeshComponent_SetSkinWeightProfile_Params
{
	struct FName                                       InProfileName;                                            
	bool                                               ReturnValue;                                              
};


struct USkinnedMeshComponent_SetSkinWeightOverride_Params
{
	int                                                LODIndex;                                                 
	TArray<struct FSkelMeshSkinWeightInfo>             SkinWeights;                                              
};


struct USkinnedMeshComponent_SetSkeletalMesh_Params
{
	class USkeletalMesh*                               NewMesh;                                                  
	bool                                               bReinitPose;                                              
};


struct USkinnedMeshComponent_SetRenderInCustomPass_Params
{
	bool                                               InRenderInCustomPass;                                     
};


struct USkinnedMeshComponent_SetPhysicsAsset_Params
{
	class UPhysicsAsset*                               NewPhysicsAsset;                                          
	bool                                               bForceReInit;                                             
};


struct USkinnedMeshComponent_SetMinLOD_Params
{
	int                                                InNewMinLOD;                                              
};


struct USkinnedMeshComponent_SetMasterPoseComponent_Params
{
	class USkinnedMeshComponent*                       NewMasterBoneComponent;                                   
};


struct USkinnedMeshComponent_SetIsHeadMesh_Params
{
	bool                                               InIsHeadMesh;                                             
};


struct USkinnedMeshComponent_SetGlobalUROExcludeFlags_Params
{
	EGlobalUROExcludeFlags                             Flags;                                                    
};


struct USkinnedMeshComponent_SetForceSyncCreatePSO_Params
{
	bool                                               InForceSyncCreatePSO;                                     
};


struct USkinnedMeshComponent_SetForcedLOD_Params
{
	int                                                InNewForcedLOD;                                           
};


struct USkinnedMeshComponent_SetDrawStyle_Params
{
	TEnumAsByte<EDrawStyleMode>                        InDrawStyle;                                              
};


struct USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Params
{
	bool                                               bNewValue;                                                
};


struct USkinnedMeshComponent_SetCastCapsuleDirectShadow_Params
{
	bool                                               bNewValue;                                                
};


struct USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Params
{
	float                                              NewValue;                                                 
};


struct USkinnedMeshComponent_ResetAnimUROParams_Params
{
	TArray<float>                                      DistanceFactors;                                          
	int                                                MaxEvalRateForInterpolation;                              
};


struct USkinnedMeshComponent_IsUsingSkinWeightProfile_Params
{
	bool                                               ReturnValue;                                              
};


struct USkinnedMeshComponent_IsBoneHiddenByName_Params
{
	struct FName                                       BoneName;                                                 
	bool                                               ReturnValue;                                              
};


struct USkinnedMeshComponent_HideBoneByName_Params
{
	struct FName                                       BoneName;                                                 
	TEnumAsByte<EPhysBodyOp>                           PhysBodyOption;                                           
};


struct USkinnedMeshComponent_GetSocketBoneName_Params
{
	struct FName                                       InSocketName;                                             
	struct FName                                       ReturnValue;                                              
};


struct USkinnedMeshComponent_GetRenderInCustomPass_Params
{
	bool                                               ReturnValue;                                              
};


struct USkinnedMeshComponent_GetPredictedLODLevel_Params
{
	int                                                ReturnValue;                                              
};


struct USkinnedMeshComponent_GetParentBone_Params
{
	struct FName                                       BoneName;                                                 
	struct FName                                       ReturnValue;                                              
};


struct USkinnedMeshComponent_GetNumLODs_Params
{
	int                                                ReturnValue;                                              
};


struct USkinnedMeshComponent_GetNumBones_Params
{
	int                                                ReturnValue;                                              
};


struct USkinnedMeshComponent_GetIsHeadMesh_Params
{
	bool                                               ReturnValue;                                              
};


struct USkinnedMeshComponent_GetGlobalUROExcludeFlags_Params
{
	EGlobalUROExcludeFlags                             ReturnValue;                                              
};


struct USkinnedMeshComponent_GetForceSyncCreatePSO_Params
{
	bool                                               ReturnValue;                                              
};


struct USkinnedMeshComponent_GetDrawStyle_Params
{
	TEnumAsByte<EDrawStyleMode>                        ReturnValue;                                              
};


struct USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct USkinnedMeshComponent_GetBoneName_Params
{
	int                                                BoneIndex;                                                
	struct FName                                       ReturnValue;                                              
};


struct USkinnedMeshComponent_GetBoneIndex_Params
{
	struct FName                                       BoneName;                                                 
	int                                                ReturnValue;                                              
};


struct USkinnedMeshComponent_FindClosestBone_K2_Params
{
	struct FVector                                     TestLocation;                                             
	struct FVector                                     BoneLocation;                                             
	float                                              IgnoreScale;                                              
	bool                                               bRequirePhysicsAsset;                                     
	struct FName                                       ReturnValue;                                              
};


struct USkinnedMeshComponent_EnableMeshClipPlane_Params
{
	struct FPlane                                      ClipPlane;                                                
	int                                                PlaneIndex;                                               
};


struct USkinnedMeshComponent_EnableMeshClipArc_Params
{
	struct FPlane                                      ClipPlane;                                                
	struct FVector4                                    ClipSphere;                                               
};


struct USkinnedMeshComponent_EnableMeshClip4Planes_Params
{
	TArray<struct FPlane>                              ClipPlanes;                                               
	bool                                               bBox;                                                     
};


struct USkinnedMeshComponent_DisableMeshClipPlane_Params
{
	int                                                PlaneIndex;                                               
};


struct USkinnedMeshComponent_DisableMeshClipArc_Params
{
};


struct USkinnedMeshComponent_DisableMeshClip4Planes_Params
{
};


struct USkinnedMeshComponent_ClearVertexColorOverride_Params
{
	int                                                LODIndex;                                                 
};


struct USkinnedMeshComponent_ClearSkinWeightProfile_Params
{
};


struct USkinnedMeshComponent_ClearSkinWeightOverride_Params
{
	int                                                LODIndex;                                                 
};


struct USkinnedMeshComponent_BoneIsChildOf_Params
{
	struct FName                                       BoneName;                                                 
	struct FName                                       ParentBoneName;                                           
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_UnbindClothFromMasterPoseComponent_Params
{
	bool                                               bRestoreSimulationSpace;                                  
};


struct USkeletalMeshComponent_SuspendClothingSimulation_Params
{
};


struct USkeletalMeshComponent_Stop_Params
{
};


struct USkeletalMeshComponent_StartClothSimulationWithDelay_Params
{
	int                                                DelayFrames;                                              
	int                                                ResumeBlendFrames;                                        
};


struct USkeletalMeshComponent_SnapshotPose_Params
{
	struct FPoseSnapshot                               Snapshot;                                                 
};


struct USkeletalMeshComponent_SetUpdateAnimationInEditor_Params
{
	bool                                               NewUpdateState;                                           
};


struct USkeletalMeshComponent_SetTickMode_Params
{
	ESkeletaTickMode                                   InTickMode;                                               
};


struct USkeletalMeshComponent_SetTeleportRotationThreshold_Params
{
	float                                              Threshold;                                                
};


struct USkeletalMeshComponent_SetTeleportDistanceThreshold_Params
{
	float                                              Threshold;                                                
};


struct USkeletalMeshComponent_SetSubInstance_Params
{
	struct FName                                       InTag;                                                    
	class UClass*                                      TargetClass;                                              
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_SetPosition_Params
{
	float                                              InPos;                                                    
	bool                                               bFireNotifies;                                            
};


struct USkeletalMeshComponent_SetPlayRate_Params
{
	float                                              Rate;                                                     
};


struct USkeletalMeshComponent_SetPhysicsBlendWeight_Params
{
	float                                              PhysicsBlendWeight;                                       
};


struct USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Params
{
	bool                                               bNewNotifyRigidBodyCollision;                             
	struct FName                                       BoneName;                                                 
	bool                                               bIncludeSelf;                                             
};


struct USkeletalMeshComponent_SetMorphTarget_Params
{
	struct FName                                       MorphTargetName;                                          
	float                                              Value;                                                    
	bool                                               bRemoveZeroWeight;                                        
};


struct USkeletalMeshComponent_SetEnablePhysicsBlending_Params
{
	bool                                               bNewBlendPhysics;                                         
};


struct USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Params
{
	bool                                               bEnableGravity;                                           
	struct FName                                       BoneName;                                                 
	bool                                               bIncludeSelf;                                             
};


struct USkeletalMeshComponent_SetEnableBodyGravity_Params
{
	bool                                               bEnableGravity;                                           
	struct FName                                       BoneName;                                                 
};


struct USkeletalMeshComponent_SetDisableAnimCurves_Params
{
	bool                                               bInDisableAnimCurves;                                     
};


struct USkeletalMeshComponent_SetConstraintProfileForAll_Params
{
	struct FName                                       ProfileName;                                              
	bool                                               bDefaultIfNotFound;                                       
};


struct USkeletalMeshComponent_SetConstraintProfile_Params
{
	struct FName                                       JointName;                                                
	struct FName                                       ProfileName;                                              
	bool                                               bDefaultIfNotFound;                                       
};


struct USkeletalMeshComponent_SetClothSkinningMode_Params
{
	int                                                ClothAssetIndex;                                          
	EClothSkinningMode                                 InMode;                                                   
};


struct USkeletalMeshComponent_SetClothResumeBlendFrames_Params
{
	int                                                Frames;                                                   
};


struct USkeletalMeshComponent_SetClothMaxDistanceScale_Params
{
	float                                              Scale;                                                    
};


struct USkeletalMeshComponent_SetClothAnimDriveStiffnessRange_Params
{
	float                                              InLow;                                                    
	float                                              InHigh;                                                   
};


struct USkeletalMeshComponent_SetClothAnimDriveMultiplier_Params
{
	float                                              InMultiplier;                                             
};


struct USkeletalMeshComponent_SetClothAnimDriveMaxRelativeVelocity_Params
{
	float                                              InVelocity;                                               
};


struct USkeletalMeshComponent_SetClothAnimDriveEnabled_Params
{
	bool                                               bInEnabled;                                               
};


struct USkeletalMeshComponent_SetClothAnimDriveDampingRange_Params
{
	float                                              InLow;                                                    
	float                                              InHigh;                                                   
};


struct USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Params
{
	bool                                               bNewNotifyRigidBodyCollision;                             
	struct FName                                       BoneName;                                                 
};


struct USkeletalMeshComponent_SetAnimInstanceClass_Params
{
	class UClass*                                      NewClass;                                                 
};


struct USkeletalMeshComponent_SetAnimGroupRole_Params
{
	ESkeletalMeshGroupRole                             NewRole;                                                  
};


struct USkeletalMeshComponent_SetAnimationMode_Params
{
	TEnumAsByte<EAnimationMode>                        InAnimationMode;                                          
};


struct USkeletalMeshComponent_SetAnimation_Params
{
	class UAnimationAsset*                             NewAnimToPlay;                                            
};


struct USkeletalMeshComponent_SetAngularLimits_Params
{
	struct FName                                       InBoneName;                                               
	float                                              Swing1LimitAngle;                                         
	float                                              TwistLimitAngle;                                          
	float                                              Swing2LimitAngle;                                         
};


struct USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Params
{
	TArray<struct FName>                               List;                                                     
	bool                                               bAllow;                                                   
};


struct USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Params
{
	bool                                               bInAllow;                                                 
};


struct USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Params
{
	bool                                               bEnableSwingDrive;                                        
	bool                                               bEnableTwistDrive;                                        
	bool                                               bSkipCustomPhysicsType;                                   
};


struct USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Params
{
	bool                                               bEnableSwingDrive;                                        
	bool                                               bEnableTwistDrive;                                        
	bool                                               bSkipCustomPhysicsType;                                   
};


struct USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Params
{
	float                                              InSpring;                                                 
	float                                              InDamping;                                                
	float                                              InForceLimit;                                             
	bool                                               bSkipCustomPhysicsType;                                   
};


struct USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Params
{
	bool                                               bNewSimulate;                                             
};


struct USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Params
{
	float                                              PhysicsBlendWeight;                                       
	bool                                               bSkipCustomPhysicsType;                                   
};


struct USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Params
{
	struct FName                                       InBoneName;                                               
	bool                                               bNewSimulate;                                             
	bool                                               bIncludeSelf;                                             
};


struct USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Params
{
	struct FName                                       InBoneName;                                               
	float                                              PhysicsBlendWeight;                                       
	bool                                               bSkipCustomPhysicsType;                                   
	bool                                               bIncludeSelf;                                             
};


struct USkeletalMeshComponent_ResumeClothingSimulation_Params
{
};


struct USkeletalMeshComponent_ResetClothTeleportMode_Params
{
};


struct USkeletalMeshComponent_ResetClothSimulationDelay_Params
{
};


struct USkeletalMeshComponent_ResetClothAnimDriveRuntimeOverrides_Params
{
};


struct USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Params
{
};


struct USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Params
{
};


struct USkeletalMeshComponent_PlayAnimation_Params
{
	class UAnimationAsset*                             NewAnimToPlay;                                            
	bool                                               bLooping;                                                 
};


struct USkeletalMeshComponent_Play_Params
{
	bool                                               bLooping;                                                 
};


struct USkeletalMeshComponent_OverrideAnimationData_Params
{
	class UAnimationAsset*                             InAnimToPlay;                                             
	bool                                               bIsLooping;                                               
	bool                                               bIsPlaying;                                               
	float                                              Position;                                                 
	float                                              PlayRate;                                                 
};


struct USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Params
{
	struct FVector                                     WorldPosition;                                            
	struct FVector                                     ClosestWorldPosition;                                     
	struct FVector                                     Normal;                                                   
	struct FName                                       BoneName;                                                 
	float                                              Distance;                                                 
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_IsClothingSimulationSuspended_Params
{
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_IsBodyGravityEnabled_Params
{
	struct FName                                       BoneName;                                                 
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_GetTeleportRotationThreshold_Params
{
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetTeleportDistanceThreshold_Params
{
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetSubInstance_Params
{
	struct FName                                       InTag;                                                    
	class UAnimInstance*                               ReturnValue;                                              
};


struct USkeletalMeshComponent_GetSubAnimInstances_Params
{
	TArray<class UAnimInstance*>                       ReturnValue;                                              
};


struct USkeletalMeshComponent_GetSkeletalCenterOfMass_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USkeletalMeshComponent_GetPostProcessInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              
};


struct USkeletalMeshComponent_GetPosition_Params
{
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetMorphTarget_Params
{
	struct FName                                       MorphTargetName;                                          
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetDisableAnimCurves_Params
{
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_GetCurrentJointAngles_Params
{
	struct FName                                       InBoneName;                                               
	float                                              Swing1Angle;                                              
	float                                              TwistAngle;                                               
	float                                              Swing2Angle;                                              
};


struct USkeletalMeshComponent_GetContainerObject_Params
{
	struct FName                                       InTag;                                                    
	class UAnimInstanceContainer*                      ReturnValue;                                              
};


struct USkeletalMeshComponent_GetClothSkinningMode_Params
{
	int                                                ClothAssetIndex;                                          
	EClothSkinningMode                                 ReturnValue;                                              
};


struct USkeletalMeshComponent_GetClothMaxDistanceScale_Params
{
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetClothAnimDriveStiffnessRange_Params
{
	float                                              OutLow;                                                   
	float                                              OutHigh;                                                  
};


struct USkeletalMeshComponent_GetClothAnimDriveMultiplier_Params
{
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetClothAnimDriveMaxRelativeVelocity_Params
{
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetClothAnimDriveEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_GetClothAnimDriveDampingRange_Params
{
	float                                              OutLow;                                                   
	float                                              OutHigh;                                                  
};


struct USkeletalMeshComponent_GetBoneMass_Params
{
	struct FName                                       BoneName;                                                 
	bool                                               bScaleMass;                                               
	float                                              ReturnValue;                                              
};


struct USkeletalMeshComponent_GetAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              
};


struct USkeletalMeshComponent_GetAnimationMode_Params
{
	TEnumAsByte<EAnimationMode>                        ReturnValue;                                              
};


struct USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Params
{
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Params
{
};


struct USkeletalMeshComponent_ForceClothNextUpdateTeleport_Params
{
};


struct USkeletalMeshComponent_FindConstraintBoneName_Params
{
	int                                                ConstraintIndex;                                          
	struct FName                                       ReturnValue;                                              
};


struct USkeletalMeshComponent_EnableCheckPhysicsBounds_Params
{
	bool                                               InEnable;                                                 
};


struct USkeletalMeshComponent_ClearSubInstance_Params
{
	struct FName                                       InTag;                                                    
};


struct USkeletalMeshComponent_ClearMorphTargets_Params
{
};


struct USkeletalMeshComponent_ClearContainerObjects_Params
{
};


struct USkeletalMeshComponent_CacheContainerObject_Params
{
	struct FName                                       InTag;                                                    
	class UAnimInstanceContainer*                      InContainerObject;                                        
	class UAnimInstance*                               OwnerInstance;                                            
	bool                                               ReturnValue;                                              
};


struct USkeletalMeshComponent_BreakConstraint_Params
{
	struct FVector                                     Impulse;                                                  
	struct FVector                                     HitLocation;                                              
	struct FName                                       InBoneName;                                               
};


struct USkeletalMeshComponent_BindClothToMasterPoseComponent_Params
{
};


struct USkeletalMeshComponent_AllowAnimCurveEvaluation_Params
{
	struct FName                                       NameOfCurve;                                              
	bool                                               bAllow;                                                   
};


struct USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Params
{
	struct FVector                                     Impulse;                                                  
	struct FName                                       BoneName;                                                 
	bool                                               bVelChange;                                               
	bool                                               bIncludeSelf;                                             
};


struct USkeletalMeshComponent_AddForceToAllBodiesBelow_Params
{
	struct FVector                                     Force;                                                    
	struct FName                                       BoneName;                                                 
	bool                                               bAccelChange;                                             
	bool                                               bIncludeSelf;                                             
};


struct USkeletalMeshComponent_AddClothCollisionSphere_Params
{
	struct FVector                                     WorldLocation;                                            
	float                                              Radius;                                                   
};


struct USkeletalMeshComponent_AddClothCollisionCapsule_Params
{
	struct FVector                                     WorldLocation;                                            
	struct FRotator                                    WorldRotation;                                            
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
};


struct USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Params
{
	struct FName                                       InBoneName;                                               
	float                                              AddPhysicsBlendWeight;                                    
	bool                                               bSkipCustomPhysicsType;                                   
};


struct AHUD_UpdateShowDebugTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct AHUD_ShowHUD_Params
{
};


struct AHUD_ShowDebugToggleSubCategory_Params
{
	struct FName                                       Category;                                                 
};


struct AHUD_ShowDebugForReticleTargetToggle_Params
{
	class UClass*                                      DesiredClass;                                             
};


struct AHUD_ShowDebugForMoifiedTargetActor_Params
{
};


struct AHUD_ShowDebug_Params
{
	struct FName                                       DebugType;                                                
};


struct AHUD_RemoveDebugText_Params
{
	class AActor*                                      SrcActor;                                                 
	bool                                               bLeaveDurationText;                                       
};


struct AHUD_RemoveAllDebugStrings_Params
{
};


struct AHUD_ReceiveHitBoxRelease_Params
{
	struct FName                                       BoxName;                                                  
};


struct AHUD_ReceiveHitBoxEndCursorOver_Params
{
	struct FName                                       BoxName;                                                  
};


struct AHUD_ReceiveHitBoxClick_Params
{
	struct FName                                       BoxName;                                                  
};


struct AHUD_ReceiveHitBoxBeginCursorOver_Params
{
	struct FName                                       BoxName;                                                  
};


struct AHUD_ReceiveDrawHUD_Params
{
	int                                                SizeX;                                                    
	int                                                SizeY;                                                    
};


struct AHUD_Project_Params
{
	struct FVector                                     Location;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct AHUD_GetTextSize_Params
{
	struct FString                                     Text;                                                     
	float                                              OutWidth;                                                 
	float                                              OutHeight;                                                
	class UFont*                                       Font;                                                     
	float                                              Scale;                                                    
};


struct AHUD_GetOwningPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct AHUD_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                              
};


struct AHUD_GetActorsInSelectionRectangle_Params
{
	class UClass*                                      ClassFilter;                                              
	struct FVector2D                                   FirstPoint;                                               
	struct FVector2D                                   SecondPoint;                                              
	TArray<class AActor*>                              OutActors;                                                
	bool                                               bIncludeNonCollidingComponents;                           
	bool                                               bActorMustBeFullyEnclosed;                                
};


struct AHUD_DrawTextureSimple_Params
{
	class UTexture*                                    Texture;                                                  
	float                                              ScreenX;                                                  
	float                                              ScreenY;                                                  
	float                                              Scale;                                                    
	bool                                               bScalePosition;                                           
};


struct AHUD_DrawTexture_Params
{
	class UTexture*                                    Texture;                                                  
	float                                              ScreenX;                                                  
	float                                              ScreenY;                                                  
	float                                              ScreenW;                                                  
	float                                              ScreenH;                                                  
	float                                              TextureU;                                                 
	float                                              TextureV;                                                 
	float                                              TextureUWidth;                                            
	float                                              TextureVHeight;                                           
	struct FLinearColor                                TintColor;                                                
	TEnumAsByte<EBlendMode>                            BlendMode;                                                
	float                                              Scale;                                                    
	bool                                               bScalePosition;                                           
	float                                              Rotation;                                                 
	struct FVector2D                                   RotPivot;                                                 
};


struct AHUD_DrawText_Params
{
	struct FString                                     Text;                                                     
	struct FLinearColor                                TextColor;                                                
	float                                              ScreenX;                                                  
	float                                              ScreenY;                                                  
	class UFont*                                       Font;                                                     
	float                                              Scale;                                                    
	bool                                               bScalePosition;                                           
};


struct AHUD_DrawRect_Params
{
	struct FLinearColor                                RectColor;                                                
	float                                              ScreenX;                                                  
	float                                              ScreenY;                                                  
	float                                              ScreenW;                                                  
	float                                              ScreenH;                                                  
};


struct AHUD_DrawMaterialTriangle_Params
{
	class UMaterialInterface*                          Material;                                                 
	struct FVector2D                                   V0_Pos;                                                   
	struct FVector2D                                   V1_Pos;                                                   
	struct FVector2D                                   V2_Pos;                                                   
	struct FVector2D                                   V0_UV;                                                    
	struct FVector2D                                   V1_UV;                                                    
	struct FVector2D                                   V2_UV;                                                    
	struct FLinearColor                                V0_Color;                                                 
	struct FLinearColor                                V1_Color;                                                 
	struct FLinearColor                                V2_Color;                                                 
};


struct AHUD_DrawMaterialSimple_Params
{
	class UMaterialInterface*                          Material;                                                 
	float                                              ScreenX;                                                  
	float                                              ScreenY;                                                  
	float                                              ScreenW;                                                  
	float                                              ScreenH;                                                  
	float                                              Scale;                                                    
	bool                                               bScalePosition;                                           
};


struct AHUD_DrawMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 
	float                                              ScreenX;                                                  
	float                                              ScreenY;                                                  
	float                                              ScreenW;                                                  
	float                                              ScreenH;                                                  
	float                                              MaterialU;                                                
	float                                              MaterialV;                                                
	float                                              MaterialUWidth;                                           
	float                                              MaterialVHeight;                                          
	float                                              Scale;                                                    
	bool                                               bScalePosition;                                           
	float                                              Rotation;                                                 
	struct FVector2D                                   RotPivot;                                                 
};


struct AHUD_DrawLine_Params
{
	float                                              StartScreenX;                                             
	float                                              StartScreenY;                                             
	float                                              EndScreenX;                                               
	float                                              EndScreenY;                                               
	struct FLinearColor                                LineColor;                                                
	float                                              LineThickness;                                            
};


struct AHUD_Deproject_Params
{
	float                                              ScreenX;                                                  
	float                                              ScreenY;                                                  
	struct FVector                                     WorldPosition;                                            
	struct FVector                                     WorldDirection;                                           
};


struct AHUD_AddHitBox_Params
{
	struct FVector2D                                   Position;                                                 
	struct FVector2D                                   Size;                                                     
	struct FName                                       InName;                                                   
	bool                                               bConsumesInput;                                           
	int                                                Priority;                                                 
};


struct AHUD_AddDebugText_Params
{
	struct FString                                     DebugText;                                                
	class AActor*                                      SrcActor;                                                 
	float                                              Duration;                                                 
	struct FVector                                     Offset;                                                   
	struct FVector                                     DesiredOffset;                                            
	struct FColor                                      TextColor;                                                
	bool                                               bSkipOverwriteCheck;                                      
	bool                                               bAbsoluteLocation;                                        
	bool                                               bKeepAttachedToActor;                                     
	class UFont*                                       InFont;                                                   
	float                                              FontScale;                                                
	bool                                               bDrawShadow;                                              
};


struct ADefaultPawn_TurnAtRate_Params
{
	float                                              Rate;                                                     
};


struct ADefaultPawn_MoveUp_World_Params
{
	float                                              Val;                                                      
};


struct ADefaultPawn_MoveRight_Params
{
	float                                              Val;                                                      
};


struct ADefaultPawn_MoveForward_Params
{
	float                                              Val;                                                      
};


struct ADefaultPawn_LookUpAtRate_Params
{
	float                                              Rate;                                                     
};


struct ACharacter_UnCrouch_Params
{
	bool                                               bClientSimulation;                                        
};


struct ACharacter_StopJumping_Params
{
};


struct ACharacter_StopAnimMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                              
};


struct ACharacter_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     
};


struct ACharacter_RootMotionDebugClientPrintOnScreen_Params
{
	struct FString                                     inString;                                                 
};


struct ACharacter_PlayAnimMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                              
	float                                              InPlayRate;                                               
	struct FName                                       StartSectionName;                                         
	float                                              ReturnValue;                                              
};


struct ACharacter_OnWalkingOffLedge_Params
{
	struct FVector                                     PreviousFloorImpactNormal;                                
	struct FVector                                     PreviousFloorContactNormal;                               
	struct FVector                                     PreviousLocation;                                         
	float                                              TimeDelta;                                                
};


struct ACharacter_OnRep_ServerLastTransformUpdateTimeStamp_Params
{
};


struct ACharacter_OnRep_RootMotion_Params
{
};


struct ACharacter_OnRep_ReplicatedBasedMovement_Params
{
};


struct ACharacter_OnRep_IsCrouched_Params
{
};


struct ACharacter_OnLaunched_Params
{
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bXYOverride;                                              
	bool                                               bZOverride;                                               
};


struct ACharacter_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      
};


struct ACharacter_OnJumped_Params
{
};


struct ACharacter_LaunchCharacter_Params
{
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bXYOverride;                                              
	bool                                               bZOverride;                                               
};


struct ACharacter_K2_UpdateCustomMovement_Params
{
	float                                              DeltaTime;                                                
};


struct ACharacter_K2_OnStartCrouch_Params
{
	float                                              HalfHeightAdjust;                                         
	float                                              ScaledHalfHeightAdjust;                                   
};


struct ACharacter_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      PrevCustomMode;                                           
	unsigned char                                      NewCustomMode;                                            
};


struct ACharacter_K2_OnEndCrouch_Params
{
	float                                              HalfHeightAdjust;                                         
	float                                              ScaledHalfHeightAdjust;                                   
};


struct ACharacter_Jump_Params
{
};


struct ACharacter_IsPlayingRootMotion_Params
{
	bool                                               ReturnValue;                                              
};


struct ACharacter_IsPlayingNetworkedRootMotionMontage_Params
{
	bool                                               ReturnValue;                                              
};


struct ACharacter_IsJumpProvidingForce_Params
{
	bool                                               ReturnValue;                                              
};


struct ACharacter_GetCurrentMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              
};


struct ACharacter_GetBaseTranslationOffset_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ACharacter_GetBaseRotationOffsetRotator_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct ACharacter_GetAnimRootMotionTranslationScale_Params
{
	float                                              ReturnValue;                                              
};


struct ACharacter_Crouch_Params
{
	bool                                               bClientSimulation;                                        
};


struct ACharacter_ClientCheatWalk_Params
{
};


struct ACharacter_ClientCheatGhost_Params
{
};


struct ACharacter_ClientCheatFly_Params
{
};


struct ACharacter_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              
};


struct ACharacter_CanJump_Params
{
	bool                                               ReturnValue;                                              
};


struct ACharacter_CacheInitialMeshOffset_Params
{
	struct FVector                                     MeshRelativeLocation;                                     
	struct FRotator                                    MeshRelativeRotation;                                     
};


struct AGameModeBase_StartPlay_Params
{
};


struct AGameModeBase_SpawnDefaultPawnFor_Params
{
	class AController*                                 NewPlayer;                                                
	class AActor*                                      StartSpot;                                                
	class APawn*                                       ReturnValue;                                              
};


struct AGameModeBase_SpawnDefaultPawnAtTransform_Params
{
	class AController*                                 NewPlayer;                                                
	struct FTransform                                  SpawnTransform;                                           
	class APawn*                                       ReturnValue;                                              
};


struct AGameModeBase_ShouldReset_Params
{
	class AActor*                                      ActorToReset;                                             
	bool                                               ReturnValue;                                              
};


struct AGameModeBase_ReturnToMainMenuHost_Params
{
};


struct AGameModeBase_RestartPlayerAtTransform_Params
{
	class AController*                                 NewPlayer;                                                
	struct FTransform                                  SpawnTransform;                                           
};


struct AGameModeBase_RestartPlayerAtPlayerStart_Params
{
	class AController*                                 NewPlayer;                                                
	class AActor*                                      StartSpot;                                                
};


struct AGameModeBase_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                
};


struct AGameModeBase_ResetLevel_Params
{
};


struct AGameModeBase_PlayerCanRestart_Params
{
	class APlayerController*                           Player;                                                   
	bool                                               ReturnValue;                                              
};


struct AGameModeBase_MustSpectate_Params
{
	class APlayerController*                           NewPlayerController;                                      
	bool                                               ReturnValue;                                              
};


struct AGameModeBase_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                
};


struct AGameModeBase_K2_OnSwapPlayerControllers_Params
{
	class APlayerController*                           OldPC;                                                    
	class APlayerController*                           NewPC;                                                    
};


struct AGameModeBase_K2_OnRestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                
};


struct AGameModeBase_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                        
};


struct AGameModeBase_K2_OnChangeName_Params
{
	class AController*                                 Other;                                                    
	struct FString                                     NewName;                                                  
	bool                                               bNameChange;                                              
};


struct AGameModeBase_K2_FindPlayerStart_Params
{
	class AController*                                 Player;                                                   
	struct FString                                     IncomingName;                                             
	class AActor*                                      ReturnValue;                                              
};


struct AGameModeBase_InitStartSpot_Params
{
	class AActor*                                      StartSpot;                                                
	class AController*                                 NewPlayer;                                                
};


struct AGameModeBase_InitializeHUDForPlayer_Params
{
	class APlayerController*                           NewPlayer;                                                
};


struct AGameModeBase_HasMatchStarted_Params
{
	bool                                               ReturnValue;                                              
};


struct AGameModeBase_HandleStartingNewPlayer_Params
{
	class APlayerController*                           NewPlayer;                                                
};


struct AGameModeBase_GetNumSpectators_Params
{
	int                                                ReturnValue;                                              
};


struct AGameModeBase_GetNumPlayers_Params
{
	int                                                ReturnValue;                                              
};


struct AGameModeBase_GetDefaultPawnClassForController_Params
{
	class AController*                                 InController;                                             
	class UClass*                                      ReturnValue;                                              
};


struct AGameModeBase_FindPlayerStart_Params
{
	class AController*                                 Player;                                                   
	struct FString                                     IncomingName;                                             
	class AActor*                                      ReturnValue;                                              
};


struct AGameModeBase_ChoosePlayerStart_Params
{
	class AController*                                 Player;                                                   
	class AActor*                                      ReturnValue;                                              
};


struct AGameModeBase_ChangeName_Params
{
	class AController*                                 Controller;                                               
	struct FString                                     NewName;                                                  
	bool                                               bNameChange;                                              
};


struct AGameModeBase_CanSpectate_Params
{
	class APlayerController*                           Viewer;                                                   
	class APlayerState*                                ViewTarget;                                               
	bool                                               ReturnValue;                                              
};


struct AGameMode_StartMatch_Params
{
};


struct AGameMode_SetBandwidthLimit_Params
{
	float                                              AsyncIOBandwidthLimit;                                    
};


struct AGameMode_Say_Params
{
	struct FString                                     Msg;                                                      
};


struct AGameMode_RestartGame_Params
{
};


struct AGameMode_ReadyToStartMatch_Params
{
	bool                                               ReturnValue;                                              
};


struct AGameMode_ReadyToEndMatch_Params
{
	bool                                               ReturnValue;                                              
};


struct AGameMode_K2_OnSetMatchState_Params
{
	struct FName                                       NewState;                                                 
};


struct AGameMode_IsMatchInProgress_Params
{
	bool                                               ReturnValue;                                              
};


struct AGameMode_HasMatchEnded_Params
{
	bool                                               ReturnValue;                                              
};


struct AGameMode_GetMatchState_Params
{
	struct FName                                       ReturnValue;                                              
};


struct AGameMode_EndMatch_Params
{
};


struct AGameMode_AbortMatch_Params
{
};


struct AGameStateBase_OnRep_SpectatorClass_Params
{
};


struct AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Params
{
};


struct AGameStateBase_OnRep_ReplicatedHasBegunPlay_Params
{
};


struct AGameStateBase_OnRep_GameModeClass_Params
{
};


struct AGameStateBase_HasMatchStarted_Params
{
	bool                                               ReturnValue;                                              
};


struct AGameStateBase_HasBegunPlay_Params
{
	bool                                               ReturnValue;                                              
};


struct AGameStateBase_GetServerWorldTimeSeconds_Params
{
	float                                              ReturnValue;                                              
};


struct AGameStateBase_GetPlayerStartTime_Params
{
	class AController*                                 Controller;                                               
	float                                              ReturnValue;                                              
};


struct AGameStateBase_GetPlayerRespawnDelay_Params
{
	class AController*                                 Controller;                                               
	float                                              ReturnValue;                                              
};


struct AGameState_OnRep_MatchState_Params
{
};


struct AGameState_OnRep_ElapsedTime_Params
{
};


struct ALevelScriptActor_WorldOriginLocationChanged_Params
{
	struct FIntVector                                  OldOriginLocation;                                        
	struct FIntVector                                  NewOriginLocation;                                        
};


struct ALevelScriptActor_SetCinematicMode_Params
{
	bool                                               bCinematicMode;                                           
	bool                                               bHidePlayer;                                              
	bool                                               bAffectsHUD;                                              
	bool                                               bAffectsMovement;                                         
	bool                                               bAffectsTurning;                                          
};


struct ALevelScriptActor_RemoteEvent_Params
{
	struct FName                                       EventName;                                                
	bool                                               ReturnValue;                                              
};


struct ALevelScriptActor_LevelReset_Params
{
};


struct AController_UnPossess_Params
{
};


struct AController_StopMovement_Params
{
};


struct AController_SetInitialLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              
	struct FRotator                                    NewRotation;                                              
};


struct AController_SetIgnoreMoveInput_Params
{
	bool                                               bNewMoveInput;                                            
};


struct AController_SetIgnoreLookInput_Params
{
	bool                                               bNewLookInput;                                            
};


struct AController_SetControlRotation_Params
{
	struct FRotator                                    NewRotation;                                              
	struct FString                                     CallSource;                                               
};


struct AController_ResetIgnoreMoveInput_Params
{
};


struct AController_ResetIgnoreLookInput_Params
{
};


struct AController_ResetIgnoreInputFlags_Params
{
};


struct AController_ReceiveInstigatedAnyDamage_Params
{
	float                                              Damage;                                                   
	class UDamageType*                                 DamageType;                                               
	class AActor*                                      DamagedActor;                                             
	class AActor*                                      DamageCauser;                                             
};


struct AController_PossessOnlyClient_Params
{
	class APawn*                                       InPawn;                                                   
};


struct AController_Possess_Params
{
	class APawn*                                       InPawn;                                                   
};


struct AController_OnRep_PlayerState_Params
{
};


struct AController_OnRep_Pawn_Params
{
};


struct AController_LineOfSightTo_Params
{
	class AActor*                                      Other;                                                    
	struct FVector                                     ViewPoint;                                                
	bool                                               bAlternateChecks;                                         
	bool                                               ReturnValue;                                              
};


struct AController_K2_GetPawn_Params
{
	class APawn*                                       ReturnValue;                                              
};


struct AController_IsPlayerController_Params
{
	bool                                               ReturnValue;                                              
};


struct AController_IsMoveInputIgnored_Params
{
	bool                                               ReturnValue;                                              
};


struct AController_IsLookInputIgnored_Params
{
	bool                                               ReturnValue;                                              
};


struct AController_IsLocalPlayerController_Params
{
	bool                                               ReturnValue;                                              
};


struct AController_IsLocalController_Params
{
	bool                                               ReturnValue;                                              
};


struct AController_GetViewTarget_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct AController_GetDesiredRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct AController_GetControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct AController_ClientSetRotation_Params
{
	struct FRotator                                    NewRotation;                                              
	bool                                               bResetCamera;                                             
};


struct AController_ClientSetLocation_Params
{
	struct FVector                                     NewLocation;                                              
	struct FRotator                                    NewRotation;                                              
};


struct AController_CastToPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct APlayerController_WasInputKeyJustReleased_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct APlayerController_WasInputKeyJustPressed_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct APlayerController_ToggleSpeaking_Params
{
	bool                                               bInSpeaking;                                              
};


struct APlayerController_SwitchLevel_Params
{
	struct FString                                     URL;                                                      
};


struct APlayerController_StopHapticEffect_Params
{
	EControllerHand                                    Hand;                                                     
};


struct APlayerController_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              
};


struct APlayerController_SetVirtualJoystickVisibility_Params
{
	bool                                               bVisible;                                                 
};


struct APlayerController_SetViewTargetWithBlend_Params
{
	class AActor*                                      NewViewTarget;                                            
	float                                              BlendTime;                                                
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunc;                                                
	float                                              BlendExp;                                                 
	bool                                               bLockOutgoing;                                            
};


struct APlayerController_SetName_Params
{
	struct FString                                     S;                                                        
};


struct APlayerController_SetMouseLocation_Params
{
	int                                                X;                                                        
	int                                                Y;                                                        
};


struct APlayerController_SetMouseCursorWidget_Params
{
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   
	class UUserWidget*                                 CursorWidget;                                             
};


struct APlayerController_SetHapticsByValue_Params
{
	float                                              Frequency;                                                
	float                                              Amplitude;                                                
	EControllerHand                                    Hand;                                                     
};


struct APlayerController_SetControllerLightColor_Params
{
	struct FColor                                      Color;                                                    
};


struct APlayerController_SetCinematicMode_Params
{
	bool                                               bInCinematicMode;                                         
	bool                                               bHidePlayer;                                              
	bool                                               bAffectsHUD;                                              
	bool                                               bAffectsMovement;                                         
	bool                                               bAffectsTurning;                                          
};


struct APlayerController_SetAudioListenerOverride_Params
{
	class USceneComponent*                             AttachToComponent;                                        
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
};


struct APlayerController_ServerViewSelf_Params
{
	struct FViewTargetTransitionParams                 TransitionParams;                                         
};


struct APlayerController_ServerViewPrevPlayer_Params
{
};


struct APlayerController_ServerViewNextPlayer_Params
{
};


struct APlayerController_ServerVerifyViewTarget_Params
{
};


struct APlayerController_ServerUpdateLevelVisibility_Params
{
	struct FName                                       PackageName;                                              
	bool                                               bIsVisible;                                               
};


struct APlayerController_ServerUpdateCamera_Params
{
	struct FVector_NetQuantize                         CamLoc;                                                   
	int                                                CamPitchAndYaw;                                           
};


struct APlayerController_ServerUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 
};


struct APlayerController_ServerToggleAILogging_Params
{
};


struct APlayerController_ServerShortTimeout_Params
{
};


struct APlayerController_ServerSetSpectatorWaiting_Params
{
	bool                                               bWaiting;                                                 
};


struct APlayerController_ServerSetSpectatorLocation_Params
{
	struct FVector                                     NewLoc;                                                   
	struct FRotator                                    NewRot;                                                   
};


struct APlayerController_ServerRestartPlayer_Params
{
};


struct APlayerController_ServerPause_Params
{
};


struct APlayerController_ServerNotifyLoadedWorld_Params
{
	struct FName                                       WorldPackageName;                                         
};


struct APlayerController_ServerMutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 
};


struct APlayerController_ServerCheckClientPossessionReliable_Params
{
};


struct APlayerController_ServerCheckClientPossession_Params
{
};


struct APlayerController_ServerChangeName_Params
{
	struct FString                                     S;                                                        
};


struct APlayerController_ServerCamera_Params
{
	struct FName                                       NewMode;                                                  
};


struct APlayerController_ServerAcknowledgePossession_Params
{
	class APawn*                                       P;                                                        
};


struct APlayerController_SendToConsole_Params
{
	struct FString                                     Command;                                                  
};


struct APlayerController_RestartLevel_Params
{
};


struct APlayerController_ProjectWorldLocationToScreen_Params
{
	struct FVector                                     WorldLocation;                                            
	struct FVector2D                                   ScreenLocation;                                           
	bool                                               bPlayerViewportRelative;                                  
	bool                                               ReturnValue;                                              
};


struct APlayerController_PlayHapticEffect_Params
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             
	EControllerHand                                    Hand;                                                     
	float                                              Scale;                                                    
	bool                                               bLoop;                                                    
};


struct APlayerController_PlayDynamicForceFeedback_Params
{
	float                                              Intensity;                                                
	float                                              Duration;                                                 
	bool                                               bAffectsLeftLarge;                                        
	bool                                               bAffectsLeftSmall;                                        
	bool                                               bAffectsRightLarge;                                       
	bool                                               bAffectsRightSmall;                                       
	TEnumAsByte<EDynamicForceFeedbackAction>           Action;                                                   
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct APlayerController_Pause_Params
{
};


struct APlayerController_OnServerStartedVisualLogger_Params
{
	bool                                               bIsLogging;                                               
};


struct APlayerController_OnGoingToLoseJoystick_Params
{
};


struct APlayerController_LocalTravel_Params
{
	struct FString                                     URL;                                                      
};


struct APlayerController_IsInputKeyDown_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct APlayerController_GetViewportSize_Params
{
	int                                                SizeX;                                                    
	int                                                SizeY;                                                    
};


struct APlayerController_GetSpectatorPawn_Params
{
	class ASpectatorPawn*                              ReturnValue;                                              
};


struct APlayerController_GetMousePosition_Params
{
	float                                              LocationX;                                                
	float                                              LocationY;                                                
	bool                                               ReturnValue;                                              
};


struct APlayerController_GetInputVectorKeyState_Params
{
	struct FKey                                        Key;                                                      
	struct FVector                                     ReturnValue;                                              
};


struct APlayerController_GetInputTouchState_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
	float                                              LocationX;                                                
	float                                              LocationY;                                                
	bool                                               bIsCurrentlyPressed;                                      
};


struct APlayerController_GetInputMouseDelta_Params
{
	float                                              DeltaX;                                                   
	float                                              DeltaY;                                                   
};


struct APlayerController_GetInputMotionState_Params
{
	struct FVector                                     Tilt;                                                     
	struct FVector                                     RotationRate;                                             
	struct FVector                                     Gravity;                                                  
	struct FVector                                     Acceleration;                                             
};


struct APlayerController_GetInputKeyTimeDown_Params
{
	struct FKey                                        Key;                                                      
	float                                              ReturnValue;                                              
};


struct APlayerController_GetInputAnalogStickState_Params
{
	TEnumAsByte<EControllerAnalogStick>                WhichStick;                                               
	float                                              StickX;                                                   
	float                                              StickY;                                                   
};


struct APlayerController_GetInputAnalogKeyState_Params
{
	struct FKey                                        Key;                                                      
	float                                              ReturnValue;                                              
};


struct APlayerController_GetHUD_Params
{
	class AHUD*                                        ReturnValue;                                              
};


struct APlayerController_GetHitResultUnderFingerForObjects_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	struct FHitResult                                  HitResult;                                                
	bool                                               ReturnValue;                                              
};


struct APlayerController_GetHitResultUnderFingerByChannel_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	struct FHitResult                                  HitResult;                                                
	bool                                               ReturnValue;                                              
};


struct APlayerController_GetHitResultUnderFinger_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	struct FHitResult                                  HitResult;                                                
	bool                                               ReturnValue;                                              
};


struct APlayerController_GetHitResultUnderCursorForObjects_Params
{
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	struct FHitResult                                  HitResult;                                                
	bool                                               ReturnValue;                                              
};


struct APlayerController_GetHitResultUnderCursorByChannel_Params
{
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	struct FHitResult                                  HitResult;                                                
	bool                                               ReturnValue;                                              
};


struct APlayerController_GetHitResultUnderCursor_Params
{
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	struct FHitResult                                  HitResult;                                                
	bool                                               ReturnValue;                                              
};


struct APlayerController_GetFocalLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct APlayerController_FOV_Params
{
	float                                              NewFOV;                                                   
};


struct APlayerController_EnableCheats_Params
{
};


struct APlayerController_DeprojectScreenPositionToWorld_Params
{
	float                                              ScreenX;                                                  
	float                                              ScreenY;                                                  
	struct FVector                                     WorldLocation;                                            
	struct FVector                                     WorldDirection;                                           
	bool                                               ReturnValue;                                              
};


struct APlayerController_DeprojectMousePositionToWorld_Params
{
	struct FVector                                     WorldLocation;                                            
	struct FVector                                     WorldDirection;                                           
	bool                                               ReturnValue;                                              
};


struct APlayerController_ConsoleKey_Params
{
	struct FKey                                        Key;                                                      
};


struct APlayerController_ClientWasKicked_Params
{
	struct FText                                       KickReason;                                               
};


struct APlayerController_ClientVoiceHandshakeComplete_Params
{
};


struct APlayerController_ClientUpdateLevelStreamingStatus_Params
{
	struct FName                                       PackageName;                                              
	bool                                               bNewShouldBeLoaded;                                       
	bool                                               bNewShouldBeVisible;                                      
	bool                                               bNewShouldBlockOnLoad;                                    
	int                                                LODIndex;                                                 
};


struct APlayerController_ClientUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 
};


struct APlayerController_ClientTravelInternal_Params
{
	struct FString                                     URL;                                                      
	TEnumAsByte<ETravelType>                           TravelType;                                               
	bool                                               bSeamless;                                                
	struct FGuid                                       MapPackageGuid;                                           
};


struct APlayerController_ClientTravel_Params
{
	struct FString                                     URL;                                                      
	TEnumAsByte<ETravelType>                           TravelType;                                               
	bool                                               bSeamless;                                                
	struct FGuid                                       MapPackageGuid;                                           
};


struct APlayerController_ClientTeamMessage_Params
{
	class APlayerState*                                SenderPlayerState;                                        
	struct FString                                     S;                                                        
	struct FName                                       Type;                                                     
	float                                              MsgLifeTime;                                              
};


struct APlayerController_ClientStopForceFeedback_Params
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      
	struct FName                                       Tag;                                                      
};


struct APlayerController_ClientStopCameraShake_Params
{
	class UClass*                                      Shake;                                                    
	bool                                               bImmediately;                                             
};


struct APlayerController_ClientStopCameraAnim_Params
{
	class UCameraAnim*                                 AnimToStop;                                               
};


struct APlayerController_ClientStartOnlineSession_Params
{
};


struct APlayerController_ClientSpawnCameraLensEffect_Params
{
	class UClass*                                      LensEffectEmitterClass;                                   
};


struct APlayerController_ClientSetViewTarget_Params
{
	class AActor*                                      A;                                                        
	struct FViewTargetTransitionParams                 TransitionParams;                                         
};


struct APlayerController_ClientSetSpectatorWaiting_Params
{
	bool                                               bWaiting;                                                 
};


struct APlayerController_ClientSetHUD_Params
{
	class UClass*                                      NewHUDClass;                                              
};


struct APlayerController_ClientSetForceMipLevelsToBeResident_Params
{
	class UMaterialInterface*                          Material;                                                 
	float                                              ForceDuration;                                            
	int                                                CinematicTextureGroups;                                   
};


struct APlayerController_ClientSetCinematicMode_Params
{
	bool                                               bInCinematicMode;                                         
	bool                                               bAffectsMovement;                                         
	bool                                               bAffectsTurning;                                          
	bool                                               bAffectsHUD;                                              
};


struct APlayerController_ClientSetCameraMode_Params
{
	struct FName                                       NewCamMode;                                               
};


struct APlayerController_ClientSetCameraFade_Params
{
	bool                                               bEnableFading;                                            
	struct FColor                                      FadeColor;                                                
	struct FVector2D                                   FadeAlpha;                                                
	float                                              FadeTime;                                                 
	bool                                               bFadeAudio;                                               
};


struct APlayerController_ClientSetBlockOnAsyncLoading_Params
{
};


struct APlayerController_ClientReturnToMainMenu_Params
{
	struct FString                                     ReturnReason;                                             
};


struct APlayerController_ClientRetryClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  
};


struct APlayerController_ClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  
};


struct APlayerController_ClientReset_Params
{
};


struct APlayerController_ClientRepObjRef_Params
{
	class UObject*                                     Object;                                                   
};


struct APlayerController_ClientReceiveLocalizedMessage_Params
{
	class UClass*                                      Message;                                                  
	int                                                Switch;                                                   
	class APlayerState*                                RelatedPlayerState_2;                                     
	class APlayerState*                                RelatedPlayerState_3;                                     
	class UObject*                                     OptionalObject;                                           
};


struct APlayerController_ClientPrestreamTextures_Params
{
	class AActor*                                      ForcedActor;                                              
	float                                              ForceDuration;                                            
	bool                                               bEnableStreaming;                                         
	int                                                CinematicTextureGroups;                                   
};


struct APlayerController_ClientPrepareMapChange_Params
{
	struct FName                                       LevelName;                                                
	bool                                               bFirst;                                                   
	bool                                               bLast;                                                    
};


struct APlayerController_ClientPlaySoundAtLocation_Params
{
	class USoundBase*                                  Sound;                                                    
	struct FVector                                     Location;                                                 
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
};


struct APlayerController_ClientPlaySound_Params
{
	class USoundBase*                                  Sound;                                                    
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
};


struct APlayerController_ClientPlayForceFeedback_Params
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      
	bool                                               bLooping;                                                 
	bool                                               bIgnoreTimeDilation;                                      
	struct FName                                       Tag;                                                      
};


struct APlayerController_ClientPlayCameraShake_Params
{
	class UClass*                                      Shake;                                                    
	float                                              Scale;                                                    
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                
	struct FRotator                                    UserPlaySpaceRot;                                         
};


struct APlayerController_ClientPlayCameraAnim_Params
{
	class UCameraAnim*                                 AnimToPlay;                                               
	float                                              Scale;                                                    
	float                                              Rate;                                                     
	float                                              BlendInTime;                                              
	float                                              BlendOutTime;                                             
	bool                                               bLoop;                                                    
	bool                                               bRandomStartTime;                                         
	TEnumAsByte<ECameraAnimPlaySpace>                  Space;                                                    
	struct FRotator                                    CustomPlaySpace;                                          
};


struct APlayerController_ClientMutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 
};


struct APlayerController_ClientMessage_Params
{
	struct FString                                     S;                                                        
	struct FName                                       Type;                                                     
	float                                              MsgLifeTime;                                              
};


struct APlayerController_ClientIgnoreMoveInput_Params
{
	bool                                               bIgnore;                                                  
};


struct APlayerController_ClientIgnoreLookInput_Params
{
	bool                                               bIgnore;                                                  
};


struct APlayerController_ClientGotoState_Params
{
	struct FName                                       NewState;                                                 
};


struct APlayerController_ClientGameEnded_Params
{
	class AActor*                                      EndGameFocus;                                             
	bool                                               bIsWinner;                                                
};


struct APlayerController_ClientForceGarbageCollection_Params
{
};


struct APlayerController_ClientFlushLevelStreaming_Params
{
};


struct APlayerController_ClientEndOnlineSession_Params
{
};


struct APlayerController_ClientEnableNetworkVoice_Params
{
	bool                                               bEnable;                                                  
};


struct APlayerController_ClientCommitMapChange_Params
{
};


struct APlayerController_ClientClearCameraLensEffects_Params
{
};


struct APlayerController_ClientCapBandwidth_Params
{
	int                                                Cap;                                                      
};


struct APlayerController_ClientCancelPendingMapChange_Params
{
};


struct APlayerController_ClientAddTextureStreamingLoc_Params
{
	struct FVector                                     InLoc;                                                    
	float                                              Duration;                                                 
	bool                                               bOverrideLocation;                                        
};


struct APlayerController_ClearJoystick_Params
{
};


struct APlayerController_ClearAudioListenerOverride_Params
{
};


struct APlayerController_CanRestartPlayer_Params
{
	bool                                               ReturnValue;                                              
};


struct APlayerController_Camera_Params
{
	struct FName                                       NewMode;                                                  
};


struct APlayerController_AddYawInput_Params
{
	float                                              Val;                                                      
};


struct APlayerController_AddRollInput_Params
{
	float                                              Val;                                                      
};


struct APlayerController_AddPitchInput_Params
{
	float                                              Val;                                                      
};


struct APlayerController_ActivateTouchInterface_Params
{
	class UTouchInterface*                             NewTouchInterface;                                        
};


struct APlayerState_ReceiveOverrideWith_Params
{
	class APlayerState*                                OldPlayerState;                                           
};


struct APlayerState_ReceiveCopyProperties_Params
{
	class APlayerState*                                NewPlayerState;                                           
};


struct APlayerState_OnRep_UniqueId_Params
{
};


struct APlayerState_OnRep_Score_Params
{
};


struct APlayerState_OnRep_PlayerName_Params
{
};


struct APlayerState_OnRep_bIsInactive_Params
{
};


struct UAnimInstance_UnlockAIResources_Params
{
	bool                                               bUnlockMovement;                                          
	bool                                               UnlockAILogic;                                            
};


struct UAnimInstance_TryGetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              
};


struct UAnimInstance_StopSlotAnimation_Params
{
	float                                              InBlendOutTime;                                           
	struct FName                                       SlotNodeName;                                             
};


struct UAnimInstance_SnapshotPose_Params
{
	struct FPoseSnapshot                               Snapshot;                                                 
};


struct UAnimInstance_SetSubAnimNodeAnimInstance_Params
{
	struct FName                                       SubInstanceSlotName;                                      
	class UAnimInstance*                               AnimInstance;                                             
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_SetRootMotionMode_Params
{
	TEnumAsByte<ERootMotionMode>                       Value;                                                    
};


struct UAnimInstance_SetMorphTarget_Params
{
	struct FName                                       MorphTargetName;                                          
	float                                              Value;                                                    
};


struct UAnimInstance_SetForceParallelUpdateAnimation_Params
{
	bool                                               bForce;                                                   
};


struct UAnimInstance_SavePoseSnapshot_Params
{
	struct FName                                       SnapshotName;                                             
};


struct UAnimInstance_ResetSubAnimNodeAnimInstance_Params
{
	struct FName                                       SubInstanceSlotName;                                      
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_PrimeUpdateCounterForDormantSubInstance_Params
{
};


struct UAnimInstance_PlaySlotAnimationAsDynamicMontage_Params
{
	class UAnimSequenceBase*                           Asset;                                                    
	struct FName                                       SlotNodeName;                                             
	float                                              BlendInTime;                                              
	float                                              BlendOutTime;                                             
	float                                              InPlayRate;                                               
	int                                                LoopCount;                                                
	float                                              BlendOutTriggerTime;                                      
	float                                              InTimeToStartMontageAt;                                   
	class UAnimMontage*                                ReturnValue;                                              
};


struct UAnimInstance_PlaySlotAnimation_Params
{
	class UAnimSequenceBase*                           Asset;                                                    
	struct FName                                       SlotNodeName;                                             
	float                                              BlendInTime;                                              
	float                                              BlendOutTime;                                             
	float                                              InPlayRate;                                               
	int                                                LoopCount;                                                
	float                                              ReturnValue;                                              
};


struct UAnimInstance_Montage_Stop_Params
{
	float                                              InBlendOutTime;                                           
	class UAnimMontage*                                Montage;                                                  
};


struct UAnimInstance_Montage_SetPosition_Params
{
	class UAnimMontage*                                Montage;                                                  
	float                                              NewPosition;                                              
};


struct UAnimInstance_Montage_SetPlayRate_Params
{
	class UAnimMontage*                                Montage;                                                  
	float                                              NewPlayRate;                                              
};


struct UAnimInstance_Montage_SetNextSection_Params
{
	struct FName                                       SectionNameToChange;                                      
	struct FName                                       NextSection;                                              
	class UAnimMontage*                                Montage;                                                  
};


struct UAnimInstance_Montage_Resume_Params
{
	class UAnimMontage*                                Montage;                                                  
};


struct UAnimInstance_Montage_Play_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	float                                              InPlayRate;                                               
	EMontagePlayReturnType                             ReturnValueType;                                          
	float                                              InTimeToStartMontageAt;                                   
	float                                              ReturnValue;                                              
};


struct UAnimInstance_Montage_Pause_Params
{
	class UAnimMontage*                                Montage;                                                  
};


struct UAnimInstance_Montage_JumpToSectionsEnd_Params
{
	struct FName                                       SectionName;                                              
	class UAnimMontage*                                Montage;                                                  
};


struct UAnimInstance_Montage_JumpToSection_Params
{
	struct FName                                       SectionName;                                              
	class UAnimMontage*                                Montage;                                                  
};


struct UAnimInstance_Montage_IsPlaying_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_Montage_IsActive_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_Montage_GetPosition_Params
{
	class UAnimMontage*                                Montage;                                                  
	float                                              ReturnValue;                                              
};


struct UAnimInstance_Montage_GetPlayRate_Params
{
	class UAnimMontage*                                Montage;                                                  
	float                                              ReturnValue;                                              
};


struct UAnimInstance_Montage_GetNextSection_Params
{
	class UAnimMontage*                                Montage;                                                  
	struct FName                                       SectionName;                                              
	struct FName                                       ReturnValue;                                              
};


struct UAnimInstance_Montage_GetIsStopped_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_Montage_GetCurrentSection_Params
{
	class UAnimMontage*                                Montage;                                                  
	struct FName                                       ReturnValue;                                              
};


struct UAnimInstance_Montage_GetBlendTime_Params
{
	class UAnimMontage*                                Montage;                                                  
	float                                              ReturnValue;                                              
};


struct UAnimInstance_LockAIResources_Params
{
	bool                                               bLockMovement;                                            
	bool                                               LockAILogic;                                              
};


struct UAnimInstance_IsSyncGroupBetweenMarkers_Params
{
	struct FName                                       InSyncGroupName;                                          
	struct FName                                       PreviousMarker;                                           
	struct FName                                       NextMarker;                                               
	bool                                               bRespectMarkerOrder;                                      
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_IsPlayingSlotAnimation_Params
{
	class UAnimSequenceBase*                           Asset;                                                    
	struct FName                                       SlotNodeName;                                             
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_IsAnyMontagePlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_HasMarkerBeenHitThisFrame_Params
{
	struct FName                                       SyncGroup;                                                
	struct FName                                       MarkerName;                                               
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_GetTimeToClosestMarker_Params
{
	struct FName                                       SyncGroup;                                                
	struct FName                                       MarkerName;                                               
	float                                              OutMarkerTime;                                            
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_GetSyncGroupPosition_Params
{
	struct FName                                       InSyncGroupName;                                          
	struct FMarkerSyncAnimPosition                     ReturnValue;                                              
};


struct UAnimInstance_GetSubAnimNodeAnimInstance_Params
{
	struct FName                                       SubInstanceSlotName;                                      
	class UAnimInstance*                               ReturnValue;                                              
};


struct UAnimInstance_GetRelevantAnimTimeRemainingFraction_Params
{
	int                                                MachineIndex;                                             
	int                                                StateIndex;                                               
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetRelevantAnimTimeRemaining_Params
{
	int                                                MachineIndex;                                             
	int                                                StateIndex;                                               
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetRelevantAnimTimeFraction_Params
{
	int                                                MachineIndex;                                             
	int                                                StateIndex;                                               
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetRelevantAnimTime_Params
{
	int                                                MachineIndex;                                             
	int                                                StateIndex;                                               
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetRelevantAnimLength_Params
{
	int                                                MachineIndex;                                             
	int                                                StateIndex;                                               
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetOwningComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              
};


struct UAnimInstance_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Params
{
	int                                                MachineIndex;                                             
	int                                                TransitionIndex;                                          
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceTransitionTimeElapsed_Params
{
	int                                                MachineIndex;                                             
	int                                                TransitionIndex;                                          
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceTransitionCrossfadeDuration_Params
{
	int                                                MachineIndex;                                             
	int                                                TransitionIndex;                                          
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceStateWeight_Params
{
	int                                                MachineIndex;                                             
	int                                                StateIndex;                                               
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceMachineWeight_Params
{
	int                                                MachineIndex;                                             
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceCurrentStateElapsedTime_Params
{
	int                                                MachineIndex;                                             
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params
{
	int                                                AssetPlayerIndex;                                         
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Params
{
	int                                                AssetPlayerIndex;                                         
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceAssetPlayerTimeFraction_Params
{
	int                                                AssetPlayerIndex;                                         
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceAssetPlayerTime_Params
{
	int                                                AssetPlayerIndex;                                         
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetInstanceAssetPlayerLength_Params
{
	int                                                AssetPlayerIndex;                                         
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetCurveValue_Params
{
	struct FName                                       CurveName;                                                
	float                                              ReturnValue;                                              
};


struct UAnimInstance_GetCurrentStateName_Params
{
	int                                                MachineIndex;                                             
	struct FName                                       ReturnValue;                                              
};


struct UAnimInstance_GetCurrentActiveMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              
};


struct UAnimInstance_GetCurMontageBySlot_Params
{
	struct FName                                       SlotName;                                                 
	class UAnimMontage*                                ReturnValue;                                              
};


struct UAnimInstance_DestroySubAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             
	bool                                               ReturnValue;                                              
};


struct UAnimInstance_DestroyAllSubAnimInstances_Params
{
};


struct UAnimInstance_CreateSubAnimInstance_Params
{
	class UClass*                                      InstanceClass;                                            
	struct FName                                       InstanceName;                                             
	class UAnimInstance*                               ReturnValue;                                              
};


struct UAnimInstance_ClearMorphTargets_Params
{
};


struct UAnimInstance_CalculateDirection_Params
{
	struct FVector                                     Velocity;                                                 
	struct FRotator                                    BaseRotation;                                             
	float                                              ReturnValue;                                              
};


struct UAnimInstance_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               
};


struct UAnimInstance_BlueprintPostEvaluateAnimation_Params
{
};


struct UAnimInstance_BlueprintInitializeAnimation_Params
{
};


struct UAnimInstance_BlueprintBeginPlay_Params
{
};


struct USpringArmComponent_SetActive_Params
{
	bool                                               bNewActive;                                               
	bool                                               bReset;                                                   
};


struct USpringArmComponent_GetTargetRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UNavMovementComponent_StopMovementKeepPathing_Params
{
};


struct UNavMovementComponent_StopActiveMovement_Params
{
};


struct UNavMovementComponent_IsSwimming_Params
{
	bool                                               ReturnValue;                                              
};


struct UNavMovementComponent_IsMovingOnGround_Params
{
	bool                                               ReturnValue;                                              
};


struct UNavMovementComponent_IsFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct UNavMovementComponent_IsFalling_Params
{
	bool                                               ReturnValue;                                              
};


struct UNavMovementComponent_IsCrouching_Params
{
	bool                                               ReturnValue;                                              
};


struct UPawnMovementComponent_K2_GetInputVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPawnMovementComponent_IsMoveInputIgnored_Params
{
	bool                                               ReturnValue;                                              
};


struct UPawnMovementComponent_GetPendingInputVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPawnMovementComponent_GetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              
};


struct UPawnMovementComponent_GetLastInputVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPawnMovementComponent_ConsumeInputVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPawnMovementComponent_AddInputVector_Params
{
	struct FVector                                     WorldVector;                                              
	bool                                               bForce;                                                   
};


struct UCharacterMovementComponent_SetWalkableFloorZ_Params
{
	float                                              InWalkableFloorZ;                                         
};


struct UCharacterMovementComponent_SetWalkableFloorAngle_Params
{
	float                                              InWalkableFloorAngle;                                     
};


struct UCharacterMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UCharacterMovementComponent_SetGroupsToIgnoreMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UCharacterMovementComponent_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               
};


struct UCharacterMovementComponent_SetGroupsToAvoidMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UCharacterMovementComponent_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               
};


struct UCharacterMovementComponent_SetAvoidanceGroupMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UCharacterMovementComponent_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               
};


struct UCharacterMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  
};


struct UCharacterMovementComponent_ServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             
	struct FVector_NetQuantize10                       OldAccel;                                                 
	unsigned char                                      OldMoveFlags;                                             
};


struct UCharacterMovementComponent_ServerMoveDualHybridRootMotion_Params
{
	float                                              TimeStamp0;                                               
	struct FVector_NetQuantize10                       InAccel0;                                                 
	unsigned char                                      PendingFlags;                                             
	uint32_t                                           View0;                                                    
	float                                              TimeStamp;                                                
	struct FVector_NetQuantize10                       InAccel;                                                  
	struct FVector_NetQuantize100                      ClientLoc;                                                
	unsigned char                                      NewFlags;                                                 
	unsigned char                                      ClientRoll;                                               
	uint32_t                                           View;                                                     
	class UPrimitiveComponent*                         ClientMovementBase;                                       
	struct FName                                       ClientBaseBoneName;                                       
	unsigned char                                      ClientMovementMode;                                       
};


struct UCharacterMovementComponent_ServerMoveDual_Params
{
	float                                              TimeStamp0;                                               
	struct FVector_NetQuantize10                       InAccel0;                                                 
	unsigned char                                      PendingFlags;                                             
	uint32_t                                           View0;                                                    
	float                                              TimeStamp;                                                
	struct FVector_NetQuantize10                       InAccel;                                                  
	struct FVector_NetQuantize100                      ClientLoc;                                                
	unsigned char                                      NewFlags;                                                 
	unsigned char                                      ClientRoll;                                               
	uint32_t                                           View;                                                     
	class UPrimitiveComponent*                         ClientMovementBase;                                       
	struct FName                                       ClientBaseBoneName;                                       
	unsigned char                                      ClientMovementMode;                                       
};


struct UCharacterMovementComponent_ServerMove_Params
{
	float                                              TimeStamp;                                                
	struct FVector_NetQuantize10                       InAccel;                                                  
	struct FVector_NetQuantize100                      ClientLoc;                                                
	unsigned char                                      CompressedMoveFlags;                                      
	unsigned char                                      ClientRoll;                                               
	uint32_t                                           View;                                                     
	class UPrimitiveComponent*                         ClientMovementBase;                                       
	struct FName                                       ClientBaseBoneName;                                       
	unsigned char                                      ClientMovementMode;                                       
};


struct UCharacterMovementComponent_K2_GetWalkableFloorZ_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_K2_GetWalkableFloorAngle_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_K2_GetModifiedMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_K2_FindFloor_Params
{
	struct FVector                                     CapsuleLocation;                                          
	struct FFindFloorResult                            FloorResult;                                              
};


struct UCharacterMovementComponent_K2_ComputeFloorDist_Params
{
	struct FVector                                     CapsuleLocation;                                          
	float                                              LineDistance;                                             
	float                                              SweepDistance;                                            
	float                                              SweepRadius;                                              
	struct FFindFloorResult                            FloorResult;                                              
};


struct UCharacterMovementComponent_IsWalking_Params
{
	bool                                               ReturnValue;                                              
};


struct UCharacterMovementComponent_IsWalkable_Params
{
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};


struct UCharacterMovementComponent_GetValidPerchRadius_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_GetPerchRadiusThreshold_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              
};


struct UCharacterMovementComponent_GetMinAnalogSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_GetMaxJumpHeight_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UCharacterMovementComponent_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UCharacterMovementComponent_GetCharacterOwner_Params
{
	class ACharacter*                                  ReturnValue;                                              
};


struct UCharacterMovementComponent_GetAnalogInputModifier_Params
{
	float                                              ReturnValue;                                              
};


struct UCharacterMovementComponent_FlushServerMoves_Params
{
};


struct UCharacterMovementComponent_DisableMovement_Params
{
};


struct UCharacterMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float                                              TimeStamp;                                                
	struct FVector                                     NewLoc;                                                   
	class UPrimitiveComponent*                         NewBase;                                                  
	struct FName                                       NewBaseBoneName;                                          
	bool                                               bHasBase;                                                 
	bool                                               bBaseRelativePosition;                                    
	unsigned char                                      ServerMovementMode;                                       
};


struct UCharacterMovementComponent_ClientAdjustRootMotionSourcePosition_Params
{
	float                                              TimeStamp;                                                
	struct FRootMotionSourceGroup                      ServerRootMotion;                                         
	bool                                               bHasAnimRootMotion;                                       
	float                                              ServerMontageTrackPosition;                               
	struct FVector                                     ServerLoc;                                                
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           
	float                                              ServerVelZ;                                               
	class UPrimitiveComponent*                         ServerBase;                                               
	struct FName                                       ServerBoneName;                                           
	bool                                               bHasBase;                                                 
	bool                                               bBaseRelativePosition;                                    
	unsigned char                                      ServerMovementMode;                                       
};


struct UCharacterMovementComponent_ClientAdjustRootMotionPosition_Params
{
	float                                              TimeStamp;                                                
	float                                              ServerMontageTrackPosition;                               
	struct FVector                                     ServerLoc;                                                
	struct FVector_NetQuantizeNormal                   ServerRotation;                                           
	float                                              ServerVelZ;                                               
	class UPrimitiveComponent*                         ServerBase;                                               
	struct FName                                       ServerBoneName;                                           
	bool                                               bHasBase;                                                 
	bool                                               bBaseRelativePosition;                                    
	unsigned char                                      ServerMovementMode;                                       
};


struct UCharacterMovementComponent_ClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                
	struct FVector                                     NewLoc;                                                   
	struct FVector                                     NewVel;                                                   
	class UPrimitiveComponent*                         NewBase;                                                  
	struct FName                                       NewBaseBoneName;                                          
	bool                                               bHasBase;                                                 
	bool                                               bBaseRelativePosition;                                    
	unsigned char                                      ServerMovementMode;                                       
};


struct UCharacterMovementComponent_ClientAckGoodMove_Params
{
	float                                              TimeStamp;                                                
};


struct UCharacterMovementComponent_ClearAccumulatedForces_Params
{
};


struct UCharacterMovementComponent_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	int                                                OtherBodyIndex;                                           
	bool                                               bFromSweep;                                               
	struct FHitResult                                  SweepResult;                                              
};


struct UCharacterMovementComponent_CalcVelocity_Params
{
	float                                              DeltaTime;                                                
	float                                              Friction;                                                 
	bool                                               bFluid;                                                   
	float                                              BrakingDeceleration;                                      
};


struct UCharacterMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  
	bool                                               bVelocityChange;                                          
};


struct UCharacterMovementComponent_AddForce_Params
{
	struct FVector                                     Force;                                                    
};


struct UCameraComponent_SetUseFieldOfViewForLOD_Params
{
	bool                                               bInUseFieldOfViewForLOD;                                  
};


struct UCameraComponent_SetProjectionMode_Params
{
	TEnumAsByte<ECameraProjectionMode>                 InProjectionMode;                                         
};


struct UCameraComponent_SetPostProcessBlendWeight_Params
{
	float                                              InPostProcessBlendWeight;                                 
};


struct UCameraComponent_SetOrthoWidth_Params
{
	float                                              InOrthoWidth;                                             
};


struct UCameraComponent_SetOrthoNearClipPlane_Params
{
	float                                              InOrthoNearClipPlane;                                     
};


struct UCameraComponent_SetOrthoFarClipPlane_Params
{
	float                                              InOrthoFarClipPlane;                                      
};


struct UCameraComponent_SetFieldOfView_Params
{
	float                                              InFieldOfView;                                            
};


struct UCameraComponent_SetConstraintAspectRatio_Params
{
	bool                                               bInConstrainAspectRatio;                                  
};


struct UCameraComponent_SetAutoFixFovByAspectRatio_Params
{
	bool                                               bInAutoFixFovByAspectRatio;                               
};


struct UCameraComponent_SetAspectRatio_Params
{
	float                                              InAspectRatio;                                            
};


struct UCameraComponent_SetActive_Params
{
	bool                                               bNewActive;                                               
	bool                                               bReset;                                                   
};


struct UCameraComponent_RemoveBlendable_Params
{
	TScriptInterface<class UBlendableInterface>        InBlendableObject;                                        
};


struct UCameraComponent_OnViewportSizeChanged_Params
{
	struct FVector2D                                   OldViewportSize;                                          
	struct FVector2D                                   NewViewportSize;                                          
};


struct UCameraComponent_GetCameraView_Params
{
	float                                              DeltaTime;                                                
	struct FMinimalViewInfo                            DesiredView;                                              
};


struct UCameraComponent_ApplyDrawDistanceOffset_Params
{
	float                                              InFieldOfView;                                            
};


struct UCameraComponent_AddOrUpdateBlendable_Params
{
	TScriptInterface<class UBlendableInterface>        InBlendableObject;                                        
	float                                              InWeight;                                                 
};


struct UCapsuleComponent_SetCapsuleSize_Params
{
	float                                              InRadius;                                                 
	float                                              InHalfHeight;                                             
	bool                                               bUpdateOverlaps;                                          
};


struct UCapsuleComponent_SetCapsuleRadius_Params
{
	float                                              Radius;                                                   
	bool                                               bUpdateOverlaps;                                          
};


struct UCapsuleComponent_SetCapsuleHalfHeight_Params
{
	float                                              HalfHeight;                                               
	bool                                               bUpdateOverlaps;                                          
};


struct UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Params
{
	float                                              OutRadius;                                                
	float                                              OutHalfHeightWithoutHemisphere;                           
};


struct UCapsuleComponent_GetUnscaledCapsuleSize_Params
{
	float                                              OutRadius;                                                
	float                                              OutHalfHeight;                                            
};


struct UCapsuleComponent_GetUnscaledCapsuleRadius_Params
{
	float                                              ReturnValue;                                              
};


struct UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Params
{
	float                                              ReturnValue;                                              
};


struct UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Params
{
	float                                              ReturnValue;                                              
};


struct UCapsuleComponent_GetShapeScale_Params
{
	float                                              ReturnValue;                                              
};


struct UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Params
{
	float                                              OutRadius;                                                
	float                                              OutHalfHeightWithoutHemisphere;                           
};


struct UCapsuleComponent_GetScaledCapsuleSize_Params
{
	float                                              OutRadius;                                                
	float                                              OutHalfHeight;                                            
};


struct UCapsuleComponent_GetScaledCapsuleRadius_Params
{
	float                                              ReturnValue;                                              
};


struct UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Params
{
	float                                              ReturnValue;                                              
};


struct UCapsuleComponent_GetScaledCapsuleHalfHeight_Params
{
	float                                              ReturnValue;                                              
};


struct UFXSystemComponent_SetVectorParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FVector                                     Param;                                                    
};


struct UFXSystemComponent_SetFloatParameter_Params
{
	struct FName                                       ParameterName;                                            
	float                                              Param;                                                    
};


struct UFXSystemComponent_SetColorParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                Param;                                                    
};


struct UFXSystemComponent_SetActorParameter_Params
{
	struct FName                                       ParameterName;                                            
	class AActor*                                      Param;                                                    
};


struct UParticleSystemComponent_SetVectorParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FVector                                     Param;                                                    
};


struct UParticleSystemComponent_SetVectorCurveParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FInterpCurveVector                          InCurve;                                                  
	bool                                               bMaterialParam;                                           
};


struct UParticleSystemComponent_SetTrailSourceData_Params
{
	struct FName                                       InFirstSocketName;                                        
	struct FName                                       InSecondSocketName;                                       
	TEnumAsByte<ETrailWidthMode>                       InWidthMode;                                              
	float                                              InWidth;                                                  
};


struct UParticleSystemComponent_SetTemplate_Params
{
	class UParticleSystem*                             NewTemplate;                                              
};


struct UParticleSystemComponent_SetSubUVSize_Params
{
	int                                                SubImagesH;                                               
	int                                                SubImagesV;                                               
	int                                                EmitterIndex;                                             
};


struct UParticleSystemComponent_SetSocketName_Params
{
	struct FName                                       InSocketName;                                             
};


struct UParticleSystemComponent_SetShapeStyle_Params
{
	EParticleShapeStyle                                Style;                                                    
	int                                                EmitterIndex;                                             
};


struct UParticleSystemComponent_SetShapeInOut_Params
{
	EParticleShapeInOut                                InOut;                                                    
	int                                                EmitterIndex;                                             
};


struct UParticleSystemComponent_SetParticleCullDistance_Params
{
	float                                              ScreenSize;                                               
};


struct UParticleSystemComponent_SetMultiCurveActiveIndex_Params
{
	struct FName                                       ParameterName;                                            
	int                                                ActiveIndex;                                              
	bool                                               bNeedResetParticles;                                      
};


struct UParticleSystemComponent_SetMaterialParameter_Params
{
	struct FName                                       ParameterName;                                            
	class UMaterialInterface*                          Param;                                                    
};


struct UParticleSystemComponent_SetLODLevel_Params
{
	int                                                InLODLevel;                                               
};


struct UParticleSystemComponent_SetFloatParameter_Params
{
	struct FName                                       ParameterName;                                            
	float                                              Param;                                                    
};


struct UParticleSystemComponent_SetFloatCurveParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FInterpCurveFloat                           InCurve;                                                  
	bool                                               bMaterialParam;                                           
};


struct UParticleSystemComponent_SetFaceCameraMode_Params
{
	EParticleFaceCameraMode                            Mode;                                                     
	int                                                EmitterIndex;                                             
};


struct UParticleSystemComponent_SetEmitterEnable_Params
{
	struct FName                                       EmitterName;                                              
	bool                                               bNewEnableState;                                          
};


struct UParticleSystemComponent_SetEmitDirection_Params
{
	struct FVector                                     Direction;                                                
	int                                                EmitterIndex;                                             
};


struct UParticleSystemComponent_SetColorParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                Param;                                                    
};


struct UParticleSystemComponent_SetColorCurveParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FInterpCurveLinearColor                     InCurve;                                                  
	bool                                               bMaterialParam;                                           
};


struct UParticleSystemComponent_SetBurstInterval_Params
{
	float                                              IntervalSeconds;                                          
	int                                                EmitterIndex;                                             
};


struct UParticleSystemComponent_SetBurstCycles_Params
{
	int                                                Cycles;                                                   
	int                                                EmitterIndex;                                             
};


struct UParticleSystemComponent_SetBurstCount_Params
{
	int                                                BurstCount;                                               
	int                                                EmitterIndex;                                             
};


struct UParticleSystemComponent_SetBeamTargetTangent_Params
{
	int                                                EmitterIndex;                                             
	struct FVector                                     NewTangentPoint;                                          
	int                                                TargetIndex;                                              
};


struct UParticleSystemComponent_SetBeamTargetStrength_Params
{
	int                                                EmitterIndex;                                             
	float                                              NewTargetStrength;                                        
	int                                                TargetIndex;                                              
};


struct UParticleSystemComponent_SetBeamTargetPoint_Params
{
	int                                                EmitterIndex;                                             
	struct FVector                                     NewTargetPoint;                                           
	int                                                TargetIndex;                                              
};


struct UParticleSystemComponent_SetBeamSourceTangent_Params
{
	int                                                EmitterIndex;                                             
	struct FVector                                     NewTangentPoint;                                          
	int                                                SourceIndex;                                              
};


struct UParticleSystemComponent_SetBeamSourceStrength_Params
{
	int                                                EmitterIndex;                                             
	float                                              NewSourceStrength;                                        
	int                                                SourceIndex;                                              
};


struct UParticleSystemComponent_SetBeamSourcePoint_Params
{
	int                                                EmitterIndex;                                             
	struct FVector                                     NewSourcePoint;                                           
	int                                                SourceIndex;                                              
};


struct UParticleSystemComponent_SetBeamEndPoint_Params
{
	int                                                EmitterIndex;                                             
	struct FVector                                     NewEndPoint;                                              
};


struct UParticleSystemComponent_SetAutoAttachParams_Params
{
	class USceneComponent*                             Parent;                                                   
	struct FName                                       SocketName;                                               
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
};


struct UParticleSystemComponent_SetAutoAttachmentParameters_Params
{
	class USceneComponent*                             Parent;                                                   
	struct FName                                       SocketName;                                               
	EAttachmentRule                                    LocationRule;                                             
	EAttachmentRule                                    RotationRule;                                             
	EAttachmentRule                                    ScaleRule;                                                
};


struct UParticleSystemComponent_SetActorParameter_Params
{
	struct FName                                       ParameterName;                                            
	class AActor*                                      Param;                                                    
};


struct UParticleSystemComponent_RemoveCurveParameter_Params
{
	struct FName                                       ParameterName;                                            
};


struct UParticleSystemComponent_OnMaterialLoaded_Params
{
	class UMaterialInterface*                          MaterialInstance;                                         
	int                                                ElementIndex;                                             
};


struct UParticleSystemComponent_GetTemplate_Params
{
	class UParticleSystem*                             ReturnValue;                                              
};


struct UParticleSystemComponent_GetPerformanceScore_Params
{
	float                                              ReturnValue;                                              
};


struct UParticleSystemComponent_GetNumActiveParticles_Params
{
	int                                                ReturnValue;                                              
};


struct UParticleSystemComponent_GetNamedMaterial_Params
{
	struct FName                                       InName;                                                   
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UParticleSystemComponent_GetLODLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UParticleSystemComponent_GetBeamTargetTangent_Params
{
	int                                                EmitterIndex;                                             
	int                                                TargetIndex;                                              
	struct FVector                                     OutTangentPoint;                                          
	bool                                               ReturnValue;                                              
};


struct UParticleSystemComponent_GetBeamTargetStrength_Params
{
	int                                                EmitterIndex;                                             
	int                                                TargetIndex;                                              
	float                                              OutTargetStrength;                                        
	bool                                               ReturnValue;                                              
};


struct UParticleSystemComponent_GetBeamTargetPoint_Params
{
	int                                                EmitterIndex;                                             
	int                                                TargetIndex;                                              
	struct FVector                                     OutTargetPoint;                                           
	bool                                               ReturnValue;                                              
};


struct UParticleSystemComponent_GetBeamSourceTangent_Params
{
	int                                                EmitterIndex;                                             
	int                                                SourceIndex;                                              
	struct FVector                                     OutTangentPoint;                                          
	bool                                               ReturnValue;                                              
};


struct UParticleSystemComponent_GetBeamSourceStrength_Params
{
	int                                                EmitterIndex;                                             
	int                                                SourceIndex;                                              
	float                                              OutSourceStrength;                                        
	bool                                               ReturnValue;                                              
};


struct UParticleSystemComponent_GetBeamSourcePoint_Params
{
	int                                                EmitterIndex;                                             
	int                                                SourceIndex;                                              
	struct FVector                                     OutSourcePoint;                                           
	bool                                               ReturnValue;                                              
};


struct UParticleSystemComponent_GetBeamEndPoint_Params
{
	int                                                EmitterIndex;                                             
	struct FVector                                     OutEndPoint;                                              
	bool                                               ReturnValue;                                              
};


struct UParticleSystemComponent_GenerateParticleEvent_Params
{
	struct FName                                       InEventName;                                              
	float                                              InEmitterTime;                                            
	struct FVector                                     InLocation;                                               
	struct FVector                                     InDirection;                                              
	struct FVector                                     InVelocity;                                               
};


struct UParticleSystemComponent_EnsurePrivateTemplate_Params
{
};


struct UParticleSystemComponent_EndTrails_Params
{
};


struct UParticleSystemComponent_CreateNamedDynamicMaterialInstanceAsync_Params
{
	struct FName                                       InName;                                                   
	struct FScriptDelegate                             MaterialInstCallback;                                     
	class UMaterialInterface*                          SourceMaterial;                                           
};


struct UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Params
{
	struct FName                                       InName;                                                   
	class UMaterialInterface*                          SourceMaterial;                                           
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UParticleSystemComponent_BeginTrails_Params
{
	struct FName                                       InFirstSocketName;                                        
	struct FName                                       InSecondSocketName;                                       
	TEnumAsByte<ETrailWidthMode>                       InWidthMode;                                              
	float                                              InWidth;                                                  
};


struct USphereComponent_SetSphereRadius_Params
{
	float                                              InSphereRadius;                                           
	bool                                               bUpdateOverlaps;                                          
};


struct USphereComponent_GetUnscaledSphereRadius_Params
{
	float                                              ReturnValue;                                              
};


struct USphereComponent_GetShapeScale_Params
{
	float                                              ReturnValue;                                              
};


struct USphereComponent_GetScaledSphereRadius_Params
{
	float                                              ReturnValue;                                              
};


struct USplineComponent_UpdateSpline_Params
{
};


struct USplineComponent_SetWorldLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     InLocation;                                               
};


struct USplineComponent_SetUpVectorAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     InUpVector;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_SetUnselectedSplineSegmentColor_Params
{
	struct FLinearColor                                SegmentColor;                                             
};


struct USplineComponent_SetTangentsAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     InArriveTangent;                                          
	struct FVector                                     InLeaveTangent;                                           
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_SetTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     InTangent;                                                
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_SetSplineWorldPoints_Params
{
	TArray<struct FVector>                             Points;                                                   
};


struct USplineComponent_SetSplinePointType_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplinePointType>                      Type;                                                     
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_SetSplinePoints_Params
{
	TArray<struct FVector>                             Points;                                                   
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_SetSplineLocalPoints_Params
{
	TArray<struct FVector>                             Points;                                                   
};


struct USplineComponent_SetSelectedSplineSegmentColor_Params
{
	struct FLinearColor                                SegmentColor;                                             
};


struct USplineComponent_SetLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     InLocation;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_SetDrawDebug_Params
{
	bool                                               bShow;                                                    
};


struct USplineComponent_SetDefaultUpVector_Params
{
	struct FVector                                     UpVector;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
};


struct USplineComponent_SetClosedLoopAtPosition_Params
{
	bool                                               bInClosedLoop;                                            
	float                                              Key;                                                      
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_SetClosedLoop_Params
{
	bool                                               bInClosedLoop;                                            
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_RemoveSplinePoint_Params
{
	int                                                Index;                                                    
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_IsClosedLoop_Params
{
	bool                                               ReturnValue;                                              
};


struct USplineComponent_GetWorldTangentAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetWorldRotationAtTime_Params
{
	float                                              Time;                                                     
	bool                                               bUseConstantVelocity;                                     
	struct FRotator                                    ReturnValue;                                              
};


struct USplineComponent_GetWorldRotationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	struct FRotator                                    ReturnValue;                                              
};


struct USplineComponent_GetWorldLocationAtTime_Params
{
	float                                              Time;                                                     
	bool                                               bUseConstantVelocity;                                     
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetWorldLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetWorldLocationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetWorldDirectionAtTime_Params
{
	float                                              Time;                                                     
	bool                                               bUseConstantVelocity;                                     
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetUpVectorAtTime_Params
{
	float                                              Time;                                                     
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseConstantVelocity;                                     
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetUpVectorAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetUpVectorAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetTransformAtTime_Params
{
	float                                              Time;                                                     
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseConstantVelocity;                                     
	bool                                               bUseScale;                                                
	struct FTransform                                  ReturnValue;                                              
};


struct USplineComponent_GetTransformAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseScale;                                                
	struct FTransform                                  ReturnValue;                                              
};


struct USplineComponent_GetTransformAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseScale;                                                
	struct FTransform                                  ReturnValue;                                              
};


struct USplineComponent_GetTangentAtTime_Params
{
	float                                              Time;                                                     
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseConstantVelocity;                                     
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetTangentAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetSplinePointType_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplinePointType>                      ReturnValue;                                              
};


struct USplineComponent_GetSplineLength_Params
{
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetScaleAtTime_Params
{
	float                                              Time;                                                     
	bool                                               bUseConstantVelocity;                                     
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetScaleAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetScaleAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetRotationAtTime_Params
{
	float                                              Time;                                                     
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseConstantVelocity;                                     
	struct FRotator                                    ReturnValue;                                              
};


struct USplineComponent_GetRotationAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FRotator                                    ReturnValue;                                              
};


struct USplineComponent_GetRotationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FRotator                                    ReturnValue;                                              
};


struct USplineComponent_GetRollAtTime_Params
{
	float                                              Time;                                                     
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseConstantVelocity;                                     
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetRollAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetRollAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetRightVectorAtTime_Params
{
	float                                              Time;                                                     
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseConstantVelocity;                                     
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetRightVectorAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetRightVectorAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetNumberOfSplinePoints_Params
{
	int                                                ReturnValue;                                              
};


struct USplineComponent_GetLocationAtTime_Params
{
	float                                              Time;                                                     
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseConstantVelocity;                                     
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetLocationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetLocationAndTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     Location;                                                 
	struct FVector                                     Tangent;                                                  
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
};


struct USplineComponent_GetLocationAndRotationAtDistanceAlongSpline_Params
{
	struct FRotator                                    OutRotation;                                              
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	struct FVector                                     LocalLocation;                                            
	struct FVector                                     LocalTangent;                                             
};


struct USplineComponent_GetLeaveTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetInputKeyAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetDistanceAlongSplineAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Params
{
	float                                              InKey;                                                    
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetDirectionAtTime_Params
{
	float                                              Time;                                                     
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseConstantVelocity;                                     
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetDirectionAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetDirectionAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetDefaultUpVector_Params
{
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_GetCurvatureAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetCurvatureAtDistance_Params
{
	float                                              Distance;                                                 
	float                                              ReturnValue;                                              
};


struct USplineComponent_GetArriveTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_FindUpVectorClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_FindTransformClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUseScale;                                                
	struct FTransform                                  ReturnValue;                                              
};


struct USplineComponent_FindTangentClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_FindScaleClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_FindRotationClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FRotator                                    ReturnValue;                                              
};


struct USplineComponent_FindRollClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	float                                              ReturnValue;                                              
};


struct USplineComponent_FindRightVectorClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_FindLocationClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_FindInputKeyClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	float                                              ReturnValue;                                              
};


struct USplineComponent_FindDirectionClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	struct FVector                                     ReturnValue;                                              
};


struct USplineComponent_ClearSplinePoints_Params
{
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_AddSplineWorldPoint_Params
{
	struct FVector                                     Position;                                                 
};


struct USplineComponent_AddSplinePointAtIndex_Params
{
	struct FVector                                     Position;                                                 
	int                                                Index;                                                    
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_AddSplinePoint_Params
{
	struct FVector                                     Position;                                                 
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_AddSplineLocalPoint_Params
{
	struct FVector                                     Position;                                                 
};


struct USplineComponent_AddPoints_Params
{
	TArray<struct FSplinePoint>                        Points;                                                   
	bool                                               bUpdateSpline;                                            
};


struct USplineComponent_AddPoint_Params
{
	struct FSplinePoint                                Point;                                                    
	bool                                               bUpdateSpline;                                            
};


struct UProjectileMovementComponent_StopSimulating_Params
{
	struct FHitResult                                  HitResult;                                                
};


struct UProjectileMovementComponent_SetVelocityInLocalSpace_Params
{
	struct FVector                                     NewVelocity;                                              
};


struct UProjectileMovementComponent_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             
};


struct UProjectileMovementComponent_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             
	struct FVector                                     ImpactVelocity;                                           
};


struct UProjectileMovementComponent_LimitVelocity_Params
{
	struct FVector                                     NewVelocity;                                              
	struct FVector                                     ReturnValue;                                              
};


struct ULiteComponent_SetIsReplicated_Params
{
	bool                                               ShouldReplicate;                                          
};


struct ULiteComponent_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             
};


struct ULiteComponent_ReceivePostBeginPlay_Params
{
};


struct ULiteComponent_ReceiveEndPlay_Params
{
};


struct ULiteComponent_ReceiveBeginPlay_Params
{
};


struct ULiteComponent_IsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              
};


struct ULiteComponent_HasAuthority_Params
{
	bool                                               ReturnValue;                                              
};


struct ULiteComponent_GetOwner_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct USplineMeshComponent_UpdateMesh_Params
{
};


struct USplineMeshComponent_SetStartTangent_Params
{
	struct FVector                                     StartTangent;                                             
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetStartScale_Params
{
	struct FVector2D                                   StartScale;                                               
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetStartRoll_Params
{
	float                                              StartRoll;                                                
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetStartPosition_Params
{
	struct FVector                                     StartPos;                                                 
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetStartOffset_Params
{
	struct FVector2D                                   StartOffset;                                              
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetStartAndEnd_Params
{
	struct FVector                                     StartPos;                                                 
	struct FVector                                     StartTangent;                                             
	struct FVector                                     EndPos;                                                   
	struct FVector                                     EndTangent;                                               
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetSplineUpDir_Params
{
	struct FVector                                     InSplineUpDir;                                            
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetForwardAxis_Params
{
	TEnumAsByte<ESplineMeshAxis>                       InForwardAxis;                                            
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetEndTangent_Params
{
	struct FVector                                     EndTangent;                                               
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetEndScale_Params
{
	struct FVector2D                                   EndScale;                                                 
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetEndRoll_Params
{
	float                                              EndRoll;                                                  
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetEndPosition_Params
{
	struct FVector                                     EndPos;                                                   
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetEndOffset_Params
{
	struct FVector2D                                   EndOffset;                                                
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetBoundaryMin_Params
{
	float                                              InBoundaryMin;                                            
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_SetBoundaryMax_Params
{
	float                                              InBoundaryMax;                                            
	bool                                               bUpdateMesh;                                              
};


struct USplineMeshComponent_GetStartTangent_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USplineMeshComponent_GetStartScale_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct USplineMeshComponent_GetStartRoll_Params
{
	float                                              ReturnValue;                                              
};


struct USplineMeshComponent_GetStartPosition_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USplineMeshComponent_GetStartOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct USplineMeshComponent_GetSplineUpDir_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USplineMeshComponent_GetForwardAxis_Params
{
	TEnumAsByte<ESplineMeshAxis>                       ReturnValue;                                              
};


struct USplineMeshComponent_GetEndTangent_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USplineMeshComponent_GetEndScale_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct USplineMeshComponent_GetEndRoll_Params
{
	float                                              ReturnValue;                                              
};


struct USplineMeshComponent_GetEndPosition_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USplineMeshComponent_GetEndOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct USplineMeshComponent_GetBoundaryMin_Params
{
	float                                              ReturnValue;                                              
};


struct USplineMeshComponent_GetBoundaryMax_Params
{
	float                                              ReturnValue;                                              
};


struct UGameInstance_ReceiveShutdown_Params
{
};


struct UGameInstance_ReceiveInit_Params
{
};


struct UGameInstance_HandleTravelError_Params
{
	TEnumAsByte<ETravelFailure>                        FailureType;                                              
};


struct UGameInstance_HandleNetworkError_Params
{
	TEnumAsByte<ENetworkFailure>                       FailureType;                                              
	bool                                               bIsServer;                                                
};


struct UGameInstance_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UGameInstance_DebugRemovePlayer_Params
{
	int                                                ControllerId;                                             
};


struct UGameInstance_DebugCreatePlayer_Params
{
	int                                                ControllerId;                                             
};


struct UStaticMesh_RemoveVertexColors_Params
{
};


struct UStaticMesh_RemoveTextureCoord_Params
{
	int                                                ReserveTexCoordNum;                                       
};


struct UStaticMesh_GetNumVertices_Params
{
	int                                                LODIndex;                                                 
	int                                                ReturnValue;                                              
};


struct UStaticMesh_GetNumSections_Params
{
	int                                                InLOD;                                                    
	int                                                ReturnValue;                                              
};


struct UStaticMesh_GetNumLODs_Params
{
	int                                                ReturnValue;                                              
};


struct UStaticMesh_GetMaterialIndex_Params
{
	struct FName                                       MaterialSlotName;                                         
	int                                                ReturnValue;                                              
};


struct UStaticMesh_GetMaterial_Params
{
	int                                                MaterialIndex;                                            
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UStaticMesh_GetBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              
};


struct UStaticMesh_GetBoundingBox_Params
{
	struct FBox                                        ReturnValue;                                              
};


struct ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Params
{
};


struct ASkeletalMeshActor_OnRep_ReplicatedMesh_Params
{
};


struct ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Params
{
};


struct ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Params
{
};


struct UAnimNotify_Received_Notify_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	class UAnimSequenceBase*                           Animation;                                                
	bool                                               ReturnValue;                                              
};


struct UAnimNotify_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAnimNotifyState_Received_NotifyTick_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	class UAnimSequenceBase*                           Animation;                                                
	float                                              FrameDeltaTime;                                           
	bool                                               ReturnValue;                                              
};


struct UAnimNotifyState_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	class UAnimSequenceBase*                           Animation;                                                
	bool                                               ReturnValue;                                              
};


struct UAnimNotifyState_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	class UAnimSequenceBase*                           Animation;                                                
	float                                              TotalDuration;                                            
	bool                                               ReturnValue;                                              
};


struct UAnimNotifyState_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UOnlineBlueprintCallProxyBase_Activate_Params
{
};


struct UNetDriver_SetFunctionEligibleForSharedSerializationByName_Params
{
	class UClass*                                      Class;                                                    
	struct FString                                     FunctionName;                                             
	bool                                               bEligible;                                                
};


struct UNetDriver_PrintRPCFunctionCallInfo_Params
{
};


struct UGameplayStatics_UnloadStreamLevel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FName                                       LevelName;                                                
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct UGameplayStatics_UnloadAllStreamLevel_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UGameplayStatics_SuggestProjectileVelocity_CustomArc_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     OutLaunchVelocity;                                        
	struct FVector                                     StartPos;                                                 
	struct FVector                                     EndPos;                                                   
	float                                              OverrideGravityZ;                                         
	float                                              ArcParam;                                                 
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_SpawnSoundAttached_Params
{
	class USoundBase*                                  Sound;                                                    
	class USceneComponent*                             AttachToComponent;                                        
	struct FName                                       AttachPointName;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
	bool                                               bStopWhenAttachedToDestroyed;                             
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundAttenuation*                           AttenuationSettings;                                      
	class USoundConcurrency*                           ConcurrencySettings;                                      
	bool                                               bAutoDestroy;                                             
	class UAudioComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_SpawnSoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundBase*                                  Sound;                                                    
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundAttenuation*                           AttenuationSettings;                                      
	class USoundConcurrency*                           ConcurrencySettings;                                      
	bool                                               bAutoDestroy;                                             
	class UAudioComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_SpawnSound2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundBase*                                  Sound;                                                    
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundConcurrency*                           ConcurrencySettings;                                      
	bool                                               bPersistAcrossLevelTransition;                            
	bool                                               bAutoDestroy;                                             
	class UAudioComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_SpawnObject_Params
{
	class UClass*                                      ObjectClass;                                              
	class UObject*                                     Outer;                                                    
	class UObject*                                     ReturnValue;                                              
};


struct UGameplayStatics_SpawnForceFeedbackAttached_Params
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      
	class USceneComponent*                             AttachToComponent;                                        
	struct FName                                       AttachPointName;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
	bool                                               bStopWhenAttachedToDestroyed;                             
	bool                                               bLooping;                                                 
	float                                              IntensityMultiplier;                                      
	float                                              StartTime;                                                
	class UForceFeedbackAttenuation*                   AttenuationSettings;                                      
	bool                                               bAutoDestroy;                                             
	class UForceFeedbackComponent*                     ReturnValue;                                              
};


struct UGameplayStatics_SpawnForceFeedbackAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	bool                                               bLooping;                                                 
	float                                              IntensityMultiplier;                                      
	float                                              StartTime;                                                
	class UForceFeedbackAttenuation*                   AttenuationSettings;                                      
	bool                                               bAutoDestroy;                                             
	class UForceFeedbackComponent*                     ReturnValue;                                              
};


struct UGameplayStatics_SpawnEmitterAttachedToActor_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          
	class USceneComponent*                             AttachToComponent;                                        
	struct FName                                       AttachPointName;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
	bool                                               bAutoDestroy;                                             
	class UParticleSystemComponent*                    ReturnValue;                                              
};


struct UGameplayStatics_SpawnEmitterAttached_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          
	class USceneComponent*                             AttachToComponent;                                        
	struct FName                                       AttachPointName;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
	bool                                               bAutoDestroy;                                             
	class UParticleSystemComponent*                    ReturnValue;                                              
};


struct UGameplayStatics_SpawnEmitterAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UParticleSystem*                             EmitterTemplate;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
	bool                                               bAutoDestroy;                                             
	class UParticleSystemComponent*                    ReturnValue;                                              
};


struct UGameplayStatics_SpawnDialogueAttached_Params
{
	class UDialogueWave*                               Dialogue;                                                 
	struct FDialogueContext                            Context;                                                  
	class USceneComponent*                             AttachToComponent;                                        
	struct FName                                       AttachPointName;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
	bool                                               bStopWhenAttachedToDestroyed;                             
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundAttenuation*                           AttenuationSettings;                                      
	bool                                               bAutoDestroy;                                             
	class UAudioComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_SpawnDialogueAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UDialogueWave*                               Dialogue;                                                 
	struct FDialogueContext                            Context;                                                  
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundAttenuation*                           AttenuationSettings;                                      
	bool                                               bAutoDestroy;                                             
	class UAudioComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_SpawnDialogue2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UDialogueWave*                               Dialogue;                                                 
	struct FDialogueContext                            Context;                                                  
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	bool                                               bAutoDestroy;                                             
	class UAudioComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_SpawnDecalAttached_Params
{
	class UMaterialInterface*                          DecalMaterial;                                            
	struct FVector                                     DecalSize;                                                
	class USceneComponent*                             AttachToComponent;                                        
	struct FName                                       AttachPointName;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
	float                                              LifeSpan;                                                 
	class UDecalComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_SpawnDecalAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UMaterialInterface*                          DecalMaterial;                                            
	struct FVector                                     DecalSize;                                                
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	float                                              LifeSpan;                                                 
	class UDecalComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_SetWorldOriginLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FIntVector                                  NewLocation;                                              
};


struct UGameplayStatics_SetSubtitlesEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UGameplayStatics_SetSoundMixClassOverride_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundMix*                                   InSoundMixModifier;                                       
	class USoundClass*                                 InSoundClass;                                             
	float                                              Volume;                                                   
	float                                              Pitch;                                                    
	float                                              FadeInTime;                                               
	bool                                               bApplyToChildren;                                         
};


struct UGameplayStatics_SetPlayerControllerID_Params
{
	class APlayerController*                           Player;                                                   
	int                                                ControllerId;                                             
};


struct UGameplayStatics_SetGlobalTimeDilation_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              TimeDilation;                                             
};


struct UGameplayStatics_SetGlobalPitchModulation_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              PitchModulation;                                          
	float                                              TimeSec;                                                  
};


struct UGameplayStatics_SetGlobalListenerFocusParameters_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              FocusAzimuthScale;                                        
	float                                              NonFocusAzimuthScale;                                     
	float                                              FocusDistanceScale;                                       
	float                                              NonFocusDistanceScale;                                    
	float                                              FocusVolumeScale;                                         
	float                                              NonFocusVolumeScale;                                      
	float                                              FocusPriorityScale;                                       
	float                                              NonFocusPriorityScale;                                    
};


struct UGameplayStatics_SetGamePaused_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               bPaused;                                                  
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_SetBaseSoundMix_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundMix*                                   InSoundMix;                                               
};


struct UGameplayStatics_SaveGameToSlot_Params
{
	class USaveGame*                                   SaveGameObject;                                           
	struct FString                                     SlotName;                                                 
	int                                                UserIndex;                                                
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_RestartShaderPrecompile_Params
{
};


struct UGameplayStatics_RemovePlayer_Params
{
	class APlayerController*                           Player;                                                   
	bool                                               bDestroyPawn;                                             
};


struct UGameplayStatics_RebaseZeroOriginOntoLocal_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     WorldLocation;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UGameplayStatics_RebaseLocalOriginOntoZero_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     WorldLocation;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UGameplayStatics_PushSoundMixModifier_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundMix*                                   InSoundMixModifier;                                       
};


struct UGameplayStatics_ProjectWorldToScreen_Params
{
	class APlayerController*                           Player;                                                   
	struct FVector                                     WorldPosition;                                            
	struct FVector2D                                   ScreenPosition;                                           
	bool                                               bPlayerViewportRelative;                                  
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_PopSoundMixModifier_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundMix*                                   InSoundMixModifier;                                       
};


struct UGameplayStatics_PlayWorldCameraShake_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      Shake;                                                    
	struct FVector                                     Epicenter;                                                
	float                                              InnerRadius;                                              
	float                                              OuterRadius;                                              
	float                                              Falloff;                                                  
	bool                                               bOrientShakeTowardsEpicenter;                             
};


struct UGameplayStatics_PlaySoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundBase*                                  Sound;                                                    
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundAttenuation*                           AttenuationSettings;                                      
	class USoundConcurrency*                           ConcurrencySettings;                                      
	class AActor*                                      OwningActor;                                              
};


struct UGameplayStatics_PlaySound2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundBase*                                  Sound;                                                    
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundConcurrency*                           ConcurrencySettings;                                      
	class AActor*                                      OwningActor;                                              
};


struct UGameplayStatics_PlayDialogueAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UDialogueWave*                               Dialogue;                                                 
	struct FDialogueContext                            Context;                                                  
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundAttenuation*                           AttenuationSettings;                                      
};


struct UGameplayStatics_PlayDialogue2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UDialogueWave*                               Dialogue;                                                 
	struct FDialogueContext                            Context;                                                  
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
};


struct UGameplayStatics_ParseOption_Params
{
	struct FString                                     Options;                                                  
	struct FString                                     Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UGameplayStatics_OpenShaderCodeLibrary_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     VersionNum;                                               
	bool                                               bForceOpen;                                               
};


struct UGameplayStatics_OpenLevel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FName                                       LevelName;                                                
	bool                                               bAbsolute;                                                
	struct FString                                     Options;                                                  
};


struct UGameplayStatics_MakeHitResult_Params
{
	bool                                               bBlockingHit;                                             
	bool                                               bInitialOverlap;                                          
	float                                              Time;                                                     
	float                                              Distance;                                                 
	struct FVector                                     Location;                                                 
	struct FVector                                     ImpactPoint;                                              
	struct FVector                                     Normal;                                                   
	struct FVector                                     ImpactNormal;                                             
	class UPhysicalMaterial*                           PhysMat;                                                  
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComponent;                                             
	struct FName                                       HitBoneName;                                              
	int                                                HitItem;                                                  
	int                                                FaceIndex;                                                
	struct FVector                                     TraceStart;                                               
	struct FVector                                     TraceEnd;                                                 
	struct FHitResult                                  ReturnValue;                                              
};


struct UGameplayStatics_LoadStreamLevel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FName                                       LevelName;                                                
	bool                                               bMakeVisibleAfterLoad;                                    
	bool                                               bShouldBlockOnLoad;                                       
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct UGameplayStatics_LoadShaderLibraryAdditional_Params
{
	int                                                IncludeMask;                                              
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_LoadGameFromSlot_Params
{
	struct FString                                     SlotName;                                                 
	int                                                UserIndex;                                                
	class USaveGame*                                   ReturnValue;                                              
};


struct UGameplayStatics_IsGamePaused_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_IsForwardPlusShaderLibraryLoaded_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_HasOption_Params
{
	struct FString                                     Options;                                                  
	struct FString                                     InKey;                                                    
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_HasLaunchOption_Params
{
	struct FString                                     OptionToCheck;                                            
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_GrassOverlappingSphereCount_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UStaticMesh*                                 StaticMesh;                                               
	struct FVector                                     CenterPosition;                                           
	float                                              Radius;                                                   
	int                                                ReturnValue;                                              
};


struct UGameplayStatics_GetWorldOriginLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FIntVector                                  ReturnValue;                                              
};


struct UGameplayStatics_GetWorldDeltaSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              ReturnValue;                                              
};


struct UGameplayStatics_GetUnpausedTimeSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              ReturnValue;                                              
};


struct UGameplayStatics_GetTimeSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              ReturnValue;                                              
};


struct UGameplayStatics_GetSurfaceType_Params
{
	struct FHitResult                                  Hit;                                                      
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              
};


struct UGameplayStatics_GetStreamingLevel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FName                                       PackageName;                                              
	class ULevelStreaming*                             ReturnValue;                                              
};


struct UGameplayStatics_GetRealTimeSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              ReturnValue;                                              
};


struct UGameplayStatics_GetPlayerPawn_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                playerIndex;                                              
	class APawn*                                       ReturnValue;                                              
};


struct UGameplayStatics_GetPlayerControllerID_Params
{
	class APlayerController*                           Player;                                                   
	int                                                ReturnValue;                                              
};


struct UGameplayStatics_GetPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                playerIndex;                                              
	class APlayerController*                           ReturnValue;                                              
};


struct UGameplayStatics_GetPlayerCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                playerIndex;                                              
	class ACharacter*                                  ReturnValue;                                              
};


struct UGameplayStatics_GetPlayerCameraManager_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                playerIndex;                                              
	class APlayerCameraManager*                        ReturnValue;                                              
};


struct UGameplayStatics_GetPlatformName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameplayStatics_GetPlatformInt_Params
{
	int                                                ReturnValue;                                              
};


struct UGameplayStatics_GetObjectClass_Params
{
	class UObject*                                     Object;                                                   
	class UClass*                                      ReturnValue;                                              
};


struct UGameplayStatics_GetKeyValue_Params
{
	struct FString                                     Pair;                                                     
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UGameplayStatics_GetIntOption_Params
{
	struct FString                                     Options;                                                  
	struct FString                                     Key;                                                      
	int                                                DefaultValue;                                             
	int                                                ReturnValue;                                              
};


struct UGameplayStatics_GetGlobalTimeDilation_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              ReturnValue;                                              
};


struct UGameplayStatics_GetGameState_Params
{
	class UObject*                                     WorldContextObject;                                       
	class AGameStateBase*                              ReturnValue;                                              
};


struct UGameplayStatics_GetGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       
	class AGameModeBase*                               ReturnValue;                                              
};


struct UGameplayStatics_GetGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UGameInstance*                               ReturnValue;                                              
};


struct UGameplayStatics_GetFirstActorOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      ActorClass;                                               
	class AActor*                                      ReturnValue;                                              
};


struct UGameplayStatics_GetCurrentReverbEffect_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UReverbEffect*                               ReturnValue;                                              
};


struct UGameplayStatics_GetCurrentLevelName_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               bRemovePrefixString;                                      
	struct FString                                     ReturnValue;                                              
};


struct UGameplayStatics_GetAudioTimeSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              ReturnValue;                                              
};


struct UGameplayStatics_GetAllActorsWithTag_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FName                                       Tag;                                                      
	TArray<class AActor*>                              OutActors;                                                
};


struct UGameplayStatics_GetAllActorsWithInterface_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      Interface;                                                
	TArray<class AActor*>                              OutActors;                                                
};


struct UGameplayStatics_GetAllActorsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      ActorClass;                                               
	TArray<class AActor*>                              OutActors;                                                
};


struct UGameplayStatics_GetActorArrayBounds_Params
{
	TArray<class AActor*>                              Actors;                                                   
	bool                                               bOnlyCollidingComponents;                                 
	struct FVector                                     Center;                                                   
	struct FVector                                     BoxExtent;                                                
};


struct UGameplayStatics_GetActorArrayAverageLocation_Params
{
	TArray<class AActor*>                              Actors;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UGameplayStatics_GetAccurateRealTime_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                Seconds;                                                  
	float                                              PartialSeconds;                                           
};


struct UGameplayStatics_FlushLevelStreaming_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UGameplayStatics_FlushAsyncLoading_Params
{
};


struct UGameplayStatics_FinishSpawningActor_Params
{
	class AActor*                                      Actor;                                                    
	struct FTransform                                  SpawnTransform;                                           
	class AActor*                                      ReturnValue;                                              
};


struct UGameplayStatics_FindCollisionUV_Params
{
	struct FHitResult                                  Hit;                                                      
	int                                                UVChannel;                                                
	struct FVector2D                                   UV;                                                       
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_EnableShaderPak_Only_Params
{
	struct FString                                     ShaderPakName;                                            
};


struct UGameplayStatics_EnableShaderPak_Params
{
	struct FString                                     ShaderPakName;                                            
};


struct UGameplayStatics_EnableShaderLevel_Params
{
	struct FString                                     ShaderLevelName;                                          
};


struct UGameplayStatics_EnableShaderGroup_Params
{
	struct FString                                     GroupName;                                                
	int                                                ShaderPlatform;                                           
};


struct UGameplayStatics_EnableLiveStreaming_Params
{
	bool                                               Enable;                                                   
};


struct UGameplayStatics_DoesSaveGameExist_Params
{
	struct FString                                     SlotName;                                                 
	int                                                UserIndex;                                                
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_DeprojectScreenToWorld_Params
{
	class APlayerController*                           Player;                                                   
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector                                     WorldPosition;                                            
	struct FVector                                     WorldDirection;                                           
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_DeleteGameInSlot_Params
{
	struct FString                                     SlotName;                                                 
	int                                                UserIndex;                                                
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_DeactivateReverbEffect_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FName                                       TagName;                                                  
};


struct UGameplayStatics_CreateSound2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundBase*                                  Sound;                                                    
	float                                              VolumeMultiplier;                                         
	float                                              PitchMultiplier;                                          
	float                                              StartTime;                                                
	class USoundConcurrency*                           ConcurrencySettings;                                      
	bool                                               bPersistAcrossLevelTransition;                            
	bool                                               bAutoDestroy;                                             
	class UAudioComponent*                             ReturnValue;                                              
};


struct UGameplayStatics_CreateSaveGameObjectFromBlueprint_Params
{
	class UBlueprint*                                  SaveGameBlueprint;                                        
	class USaveGame*                                   ReturnValue;                                              
};


struct UGameplayStatics_CreateSaveGameObject_Params
{
	class UClass*                                      SaveGameClass;                                            
	class USaveGame*                                   ReturnValue;                                              
};


struct UGameplayStatics_CreatePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                ControllerId;                                             
	bool                                               bSpawnPawn;                                               
	class APlayerController*                           ReturnValue;                                              
};


struct UGameplayStatics_ClearSoundMixModifiers_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UGameplayStatics_ClearSoundMixClassOverride_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundMix*                                   InSoundMixModifier;                                       
	class USoundClass*                                 InSoundClass;                                             
	float                                              FadeOutTime;                                              
};


struct UGameplayStatics_CheckMetalLibraryUncompressed_Params
{
	int                                                ReturnValue;                                              
};


struct UGameplayStatics_CancelAsyncLoading_Params
{
};


struct UGameplayStatics_BreakHitResult_Params
{
	struct FHitResult                                  Hit;                                                      
	bool                                               bBlockingHit;                                             
	bool                                               bInitialOverlap;                                          
	float                                              Time;                                                     
	float                                              Distance;                                                 
	struct FVector                                     Location;                                                 
	struct FVector                                     ImpactPoint;                                              
	struct FVector                                     Normal;                                                   
	struct FVector                                     ImpactNormal;                                             
	class UPhysicalMaterial*                           PhysMat;                                                  
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComponent;                                             
	struct FName                                       HitBoneName;                                              
	int                                                HitItem;                                                  
	int                                                FaceIndex;                                                
	struct FVector                                     TraceStart;                                               
	struct FVector                                     TraceEnd;                                                 
};


struct UGameplayStatics_BlueprintSuggestProjectileVelocity_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     TossVelocity;                                             
	struct FVector                                     StartLocation;                                            
	struct FVector                                     EndLocation;                                              
	float                                              LaunchSpeed;                                              
	float                                              OverrideGravityZ;                                         
	TEnumAsByte<ESuggestProjVelocityTraceOption>       TraceOption;                                              
	float                                              CollisionRadius;                                          
	bool                                               bFavorHighArc;                                            
	bool                                               bDrawDebug;                                               
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_Blueprint_PredictProjectilePath_ByTraceChannel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FHitResult                                  OutHit;                                                   
	TArray<struct FVector>                             OutPathPositions;                                         
	struct FVector                                     OutLastTraceDestination;                                  
	struct FVector                                     StartPos;                                                 
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bTracePath;                                               
	float                                              ProjectileRadius;                                         
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	float                                              DrawDebugTime;                                            
	float                                              SimFrequency;                                             
	float                                              MaxSimTime;                                               
	float                                              OverrideGravityZ;                                         
	float                                              GravityScale;                                             
	float                                              IgnoreGravityDis;                                         
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_Blueprint_PredictProjectilePath_ByObjectType_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FHitResult                                  OutHit;                                                   
	TArray<struct FVector>                             OutPathPositions;                                         
	struct FVector                                     OutLastTraceDestination;                                  
	struct FVector                                     StartPos;                                                 
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bTracePath;                                               
	float                                              ProjectileRadius;                                         
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	float                                              DrawDebugTime;                                            
	float                                              SimFrequency;                                             
	float                                              MaxSimTime;                                               
	float                                              OverrideGravityZ;                                         
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_Blueprint_PredictProjectilePath_Advanced_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FPredictProjectilePathParams                PredictParams;                                            
	struct FPredictProjectilePathResult                PredictResult;                                            
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_Blueprint_PredictBulletPath_ByTraceChannel_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FHitResult                                  OutHit;                                                   
	TArray<struct FVector>                             OutPathPositions;                                         
	struct FVector                                     OutLastTraceDestination;                                  
	struct FVector                                     StartPos;                                                 
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bTracePath;                                               
	float                                              BulletRadius;                                             
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	float                                              DrawDebugTime;                                            
	float                                              SimFrequency;                                             
	float                                              MaxSimTime;                                               
	float                                              GravityScale;                                             
	float                                              IgnoreGravityDis;                                         
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_BeginSpawningActorFromClass_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      ActorClass;                                               
	struct FTransform                                  SpawnTransform;                                           
	bool                                               bNoCollisionFail;                                         
	class AActor*                                      Owner;                                                    
	class AActor*                                      ReturnValue;                                              
};


struct UGameplayStatics_BeginSpawningActorFromBlueprint_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UBlueprint*                                  Blueprint;                                                
	struct FTransform                                  SpawnTransform;                                           
	bool                                               bNoCollisionFail;                                         
	class AActor*                                      ReturnValue;                                              
};


struct UGameplayStatics_BeginDeferredActorSpawnFromClass_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      ActorClass;                                               
	struct FTransform                                  SpawnTransform;                                           
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                
	class AActor*                                      Owner;                                                    
	class AActor*                                      ReturnValue;                                              
};


struct UGameplayStatics_AreSubtitlesEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_AreAnyListenersWithinRange_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Location;                                                 
	float                                              MaximumRange;                                             
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_ApplyRadialDamageWithFalloff_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              BaseDamage;                                               
	float                                              MinimumDamage;                                            
	struct FVector                                     Origin;                                                   
	float                                              DamageInnerRadius;                                        
	float                                              DamageOuterRadius;                                        
	float                                              DamageFalloff;                                            
	class UClass*                                      DamageTypeClass;                                          
	TArray<class AActor*>                              IgnoreActors;                                             
	class AActor*                                      DamageCauser;                                             
	class AController*                                 InstigatedByController;                                   
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_ApplyRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              BaseDamage;                                               
	struct FVector                                     Origin;                                                   
	float                                              DamageRadius;                                             
	class UClass*                                      DamageTypeClass;                                          
	TArray<class AActor*>                              IgnoreActors;                                             
	class AActor*                                      DamageCauser;                                             
	class AController*                                 InstigatedByController;                                   
	bool                                               bDoFullDamage;                                            
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  
	bool                                               ReturnValue;                                              
};


struct UGameplayStatics_ApplyPointDamage_Params
{
	class AActor*                                      DamagedActor;                                             
	float                                              BaseDamage;                                               
	struct FVector                                     HitFromDirection;                                         
	struct FHitResult                                  HitInfo;                                                  
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
	class UClass*                                      DamageTypeClass;                                          
	float                                              ReturnValue;                                              
};


struct UGameplayStatics_ApplyDamage_Params
{
	class AActor*                                      DamagedActor;                                             
	float                                              BaseDamage;                                               
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
	class UClass*                                      DamageTypeClass;                                          
	float                                              ReturnValue;                                              
};


struct UGameplayStatics_ActivateReverbEffect_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UReverbEffect*                               ReverbEffect;                                             
	struct FName                                       TagName;                                                  
	float                                              Priority;                                                 
	float                                              Volume;                                                   
	float                                              FadeTime;                                                 
};


struct UCameraModifier_IsDisabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UCameraModifier_GetViewTarget_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UCameraModifier_EnableModifier_Params
{
};


struct UCameraModifier_DisableModifier_Params
{
	bool                                               bImmediate;                                               
};


struct UCameraModifier_BlueprintModifyPostProcess_Params
{
	float                                              DeltaTime;                                                
	float                                              PostProcessBlendWeight;                                   
	struct FPostProcessSettings                        PostProcessSettings;                                      
};


struct UCameraModifier_BlueprintModifyCamera_Params
{
	float                                              DeltaTime;                                                
	struct FVector                                     ViewLocation;                                             
	struct FRotator                                    ViewRotation;                                             
	float                                              FOV;                                                      
	struct FVector                                     NewViewLocation;                                          
	struct FRotator                                    NewViewRotation;                                          
	float                                              NewFOV;                                                   
};


struct ADecalBakingActor_SetMaxDecalProcessPerFame_Params
{
	int                                                InValue;                                                  
};


struct ADecalBakingActor_OnBakingFinished_Params
{
	class UTextureRenderTarget2D*                      InRenderTarget;                                           
};


struct ADecalBakingActor_GetMaxDecalProcessPerFame_Params
{
	int                                                ReturnValue;                                              
};


struct ADecalBakingActor_FindDecalBakingRequestID_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	int                                                ReturnValue;                                              
};


struct ADecalBakingActor_EndDecalBakingCache_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
};


struct ADecalBakingActor_DoCompression_Params
{
	class UTextureRenderTarget2D*                      InRenderTarget;                                           
};


struct ADecalBakingActor_CompressTexture_Params
{
	class UTextureRenderTarget2D*                      InRenderTarget;                                           
	bool                                               bInRGBA;                                                  
	bool                                               bUsePunchthroughAlpha;                                    
	bool                                               bUseOptimizeOpaque;                                       
	class UTexture*                                    ReturnValue;                                              
};


struct ADecalBakingActor_CancelDecalBakingRequest_Params
{
	int                                                RequestID;                                                
};


struct ADecalBakingActor_BeginDecalBakingCache_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
};


struct ADecalBakingActor_BakeDecalForStaticMesh_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	class UStaticMesh*                                 StaticMesh;                                               
	int                                                UVIndex;                                                  
	TArray<struct FDecalParameter>                     InDecalParams;                                            
	bool                                               bIntermidiate;                                            
	int                                                CachedDecalIndex;                                         
	int                                                ReturnValue;                                              
};


struct ADecalBakingActor_BakeDecalForSkeletalMesh_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	class USkeletalMesh*                               SkeletalMesh;                                             
	int                                                UVIndex;                                                  
	TArray<struct FDecalParameter>                     InDecalParams;                                            
	bool                                               bIntermidiate;                                            
	int                                                CachedDecalIndex;                                         
	int                                                SectionIndex;                                             
	class UTexture*                                    OriginTexture;                                            
	int                                                ReturnValue;                                              
};


struct UInterpToMovementComponent_StopSimulating_Params
{
	struct FHitResult                                  HitResult;                                                
};


struct UInterpToMovementComponent_RestartMovement_Params
{
	float                                              InitialDirection;                                         
};


struct UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             
	float                                              Time;                                                     
};


struct UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             
	float                                              Time;                                                     
};


struct UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             
	float                                              Time;                                                     
};


struct UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             
	float                                              Time;                                                     
};


struct UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             
	float                                              Time;                                                     
};


struct UInterpToMovementComponent_FinaliseControlPoints_Params
{
};


struct ANavLinkProxy_SetSmartLinkEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct ANavLinkProxy_ResumePathFollowing_Params
{
	class AActor*                                      Agent;                                                    
};


struct ANavLinkProxy_ReceiveSmartLinkReached_Params
{
	class AActor*                                      Agent;                                                    
	struct FVector                                     Destination;                                              
};


struct ANavLinkProxy_IsSmartLinkEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct ANavLinkProxy_HasMovingAgents_Params
{
	bool                                               ReturnValue;                                              
};


struct UCameraShake_ReceiveStopShake_Params
{
	bool                                               bImmediately;                                             
};


struct UCameraShake_ReceivePlayShake_Params
{
	float                                              Scale;                                                    
};


struct UCameraShake_ReceiveIsFinished_Params
{
	bool                                               ReturnValue;                                              
};


struct UCameraShake_BlueprintUpdateCameraShake_Params
{
	float                                              DeltaTime;                                                
	float                                              Alpha;                                                    
	struct FMinimalViewInfo                            POV;                                                      
	struct FMinimalViewInfo                            ModifiedPOV;                                              
};


struct APlayerCameraManager_StopCameraShake_Params
{
	class UCameraShake*                                ShakeInstance;                                            
	bool                                               bImmediately;                                             
};


struct APlayerCameraManager_StopCameraFade_Params
{
};


struct APlayerCameraManager_StopCameraAnimInst_Params
{
	class UCameraAnimInst*                             AnimInst;                                                 
	bool                                               bImmediate;                                               
};


struct APlayerCameraManager_StopAllInstancesOfCameraShake_Params
{
	class UClass*                                      Shake;                                                    
	bool                                               bImmediately;                                             
};


struct APlayerCameraManager_StopAllInstancesOfCameraAnim_Params
{
	class UCameraAnim*                                 Anim;                                                     
	bool                                               bImmediate;                                               
};


struct APlayerCameraManager_StopAllCameraShakes_Params
{
	bool                                               bImmediately;                                             
};


struct APlayerCameraManager_StopAllCameraAnims_Params
{
	bool                                               bImmediate;                                               
};


struct APlayerCameraManager_StartCameraFade_Params
{
	float                                              FromAlpha;                                                
	float                                              ToAlpha;                                                  
	float                                              Duration;                                                 
	struct FLinearColor                                Color;                                                    
	bool                                               bShouldFadeAudio;                                         
	bool                                               bHoldWhenFinished;                                        
};


struct APlayerCameraManager_SetManualCameraFade_Params
{
	float                                              InFadeAmount;                                             
	struct FLinearColor                                Color;                                                    
	bool                                               bInFadeAudio;                                             
};


struct APlayerCameraManager_RemoveCameraModifier_Params
{
	class UCameraModifier*                             ModifierToRemove;                                         
	bool                                               ReturnValue;                                              
};


struct APlayerCameraManager_RemoveCameraLensEffect_Params
{
	class AEmitterCameraLensEffectBase*                Emitter;                                                  
};


struct APlayerCameraManager_PlayCameraShake_Params
{
	class UClass*                                      ShakeClass;                                               
	float                                              Scale;                                                    
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                
	struct FRotator                                    UserPlaySpaceRot;                                         
	class UCameraShake*                                ReturnValue;                                              
};


struct APlayerCameraManager_PlayCameraAnim_Params
{
	class UCameraAnim*                                 Anim;                                                     
	float                                              Rate;                                                     
	float                                              Scale;                                                    
	float                                              BlendInTime;                                              
	float                                              BlendOutTime;                                             
	bool                                               bLoop;                                                    
	bool                                               bRandomStartTime;                                         
	float                                              Duration;                                                 
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                
	struct FRotator                                    UserPlaySpaceRot;                                         
	class UCameraAnimInst*                             ReturnValue;                                              
};


struct APlayerCameraManager_PhotographyCameraModify_Params
{
	struct FVector                                     NewCameraLocation;                                        
	struct FVector                                     PreviousCameraLocation;                                   
	struct FVector                                     OriginalCameraLocation;                                   
	struct FVector                                     ResultCameraLocation;                                     
};


struct APlayerCameraManager_OnPhotographySessionStart_Params
{
};


struct APlayerCameraManager_OnPhotographySessionEnd_Params
{
};


struct APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Params
{
};


struct APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Params
{
};


struct APlayerCameraManager_GetOwningPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct APlayerCameraManager_GetFOVAngle_Params
{
	float                                              ReturnValue;                                              
};


struct APlayerCameraManager_GetCameraRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct APlayerCameraManager_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct APlayerCameraManager_FindCameraModifierByClass_Params
{
	class UClass*                                      ModifierClass;                                            
	class UCameraModifier*                             ReturnValue;                                              
};


struct APlayerCameraManager_ClearCameraLensEffects_Params
{
};


struct APlayerCameraManager_BlueprintUpdateCamera_Params
{
	class AActor*                                      CameraTarget;                                             
	struct FVector                                     NewCameraLocation;                                        
	struct FRotator                                    NewCameraRotation;                                        
	float                                              NewCameraFOV;                                             
	bool                                               ReturnValue;                                              
};


struct APlayerCameraManager_AddNewCameraModifier_Params
{
	class UClass*                                      ModifierClass;                                            
	class UCameraModifier*                             ReturnValue;                                              
};


struct APlayerCameraManager_AddCameraLensEffect_Params
{
	class UClass*                                      LensEffectEmitterClass;                                   
	class AEmitterCameraLensEffectBase*                ReturnValue;                                              
};


struct UNavigationSystem_UpdateDynamicGenerateTargetNav_Params
{
	bool                                               IsAdd;                                                    
	struct FDynamicGenerateTargetNavigation            GenerateTargetNav;                                        
};


struct UNavigationSystem_UnregisterNavigationInvoker_Params
{
	class AActor*                                      Invoker;                                                  
};


struct UNavigationSystem_SimpleMoveToLocation_Params
{
	class AController*                                 Controller;                                               
	struct FVector                                     Goal;                                                     
};


struct UNavigationSystem_SimpleMoveToActor_Params
{
	class AController*                                 Controller;                                               
	class AActor*                                      Goal;                                                     
};


struct UNavigationSystem_SetMaxSimultaneousTileGenerationJobsCount_Params
{
	int                                                MaxNumberOfJobs;                                          
};


struct UNavigationSystem_SetGeometryGatheringMode_Params
{
	ENavDataGatheringModeConfig                        NewMode;                                                  
};


struct UNavigationSystem_ResetMaxSimultaneousTileGenerationJobsCount_Params
{
};


struct UNavigationSystem_RegisterNavigationInvoker_Params
{
	class AActor*                                      Invoker;                                                  
	float                                              TileGenerationRadius;                                     
	float                                              TileRemovalRadius;                                        
};


struct UNavigationSystem_ProjectPointToNavigation_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Point;                                                    
	class ANavigationData*                             NavData;                                                  
	class UClass*                                      FilterClass;                                              
	struct FVector                                     QueryExtent;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UNavigationSystem_OnNavigationBoundsUpdated_Params
{
	class ANavMeshBoundsVolume*                        NavVolume;                                                
};


struct UNavigationSystem_NavigationRaycast_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     RayStart;                                                 
	struct FVector                                     RayEnd;                                                   
	struct FVector                                     HitLocation;                                              
	class UClass*                                      FilterClass;                                              
	class AController*                                 Querier;                                                  
	bool                                               ReturnValue;                                              
};


struct UNavigationSystem_K2_ProjectPointToNavigation_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Point;                                                    
	struct FVector                                     ProjectedLocation;                                        
	class ANavigationData*                             NavData;                                                  
	class UClass*                                      FilterClass;                                              
	struct FVector                                     QueryExtent;                                              
	bool                                               ReturnValue;                                              
};


struct UNavigationSystem_K2_GetRandomReachablePointInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Origin;                                                   
	struct FVector                                     RandomLocation;                                           
	float                                              Radius;                                                   
	class ANavigationData*                             NavData;                                                  
	class UClass*                                      FilterClass;                                              
	bool                                               ReturnValue;                                              
};


struct UNavigationSystem_K2_GetRandomPointInNavigableRadius_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Origin;                                                   
	struct FVector                                     RandomLocation;                                           
	float                                              Radius;                                                   
	class ANavigationData*                             NavData;                                                  
	class UClass*                                      FilterClass;                                              
	bool                                               ReturnValue;                                              
};


struct UNavigationSystem_IsNavigationBeingBuiltOrLocked_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UNavigationSystem_IsNavigationBeingBuilt_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UNavigationSystem_GetRandomReachablePointInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Origin;                                                   
	float                                              Radius;                                                   
	class ANavigationData*                             NavData;                                                  
	class UClass*                                      FilterClass;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UNavigationSystem_GetRandomPointInNavigableRadius_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Origin;                                                   
	float                                              Radius;                                                   
	class ANavigationData*                             NavData;                                                  
	class UClass*                                      FilterClass;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UNavigationSystem_GetPathLength_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     PathStart;                                                
	struct FVector                                     PathEnd;                                                  
	float                                              PathLength;                                               
	class ANavigationData*                             NavData;                                                  
	class UClass*                                      FilterClass;                                              
	TEnumAsByte<ENavigationQueryResult>                ReturnValue;                                              
};


struct UNavigationSystem_GetPathCost_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     PathStart;                                                
	struct FVector                                     PathEnd;                                                  
	float                                              PathCost;                                                 
	class ANavigationData*                             NavData;                                                  
	class UClass*                                      FilterClass;                                              
	TEnumAsByte<ENavigationQueryResult>                ReturnValue;                                              
};


struct UNavigationSystem_GetNavigationSystem_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UNavigationSystem*                           ReturnValue;                                              
};


struct UNavigationSystem_FindPathToLocationSynchronously_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     PathStart;                                                
	struct FVector                                     PathEnd;                                                  
	class AActor*                                      PathfindingContext;                                       
	class UClass*                                      FilterClass;                                              
	class UNavigationPath*                             ReturnValue;                                              
};


struct UNavigationSystem_FindPathToActorSynchronously_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     PathStart;                                                
	class AActor*                                      GoalActor;                                                
	float                                              TetherDistance;                                           
	class AActor*                                      PathfindingContext;                                       
	class UClass*                                      FilterClass;                                              
	class UNavigationPath*                             ReturnValue;                                              
};


struct UAnimNotify_PlayParticleEffect_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                        
};


struct UAnimNotify_PlayParticleEffect_GetParentCharacter_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	class ACharacter*                                  ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_UpdateMesh_Params
{
};


struct UInstancedSplineMeshComponent_ShowOrHideIndex_Params
{
	int                                                Index;                                                    
	bool                                               bShow;                                                    
	bool                                               bUpdateMesh;                                              
	bool                                               ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_SetStaticMeshPrepation_Params
{
};


struct UInstancedSplineMeshComponent_SetSplineUpDir_Params
{
	struct FVector                                     InSplineUpDir;                                            
	bool                                               bUpdateMesh;                                              
};


struct UInstancedSplineMeshComponent_SetForwardAxis_Params
{
	TEnumAsByte<ESplineMeshAxis>                       InForwardAxis;                                            
	bool                                               bUpdateMesh;                                              
};


struct UInstancedSplineMeshComponent_SetBoundaryMin_Params
{
	float                                              InBoundaryMin;                                            
	bool                                               bUpdateMesh;                                              
};


struct UInstancedSplineMeshComponent_SetBoundaryMax_Params
{
	float                                              InBoundaryMax;                                            
	bool                                               bUpdateMesh;                                              
};


struct UInstancedSplineMeshComponent_ResetLocalBounds_Params
{
};


struct UInstancedSplineMeshComponent_IsInstanceHide_Params
{
	int                                                InstanceIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetStartTangent_Params
{
	int                                                InstanceIndex;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetStartPosition_Params
{
	int                                                InstanceIndex;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetSplineUpDir_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetInstanceNum_Params
{
	int                                                ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetForwardAxis_Params
{
	TEnumAsByte<ESplineMeshAxis>                       ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetEndTangent_Params
{
	int                                                InstanceIndex;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetEndPosition_Params
{
	int                                                InstanceIndex;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetBoundaryMin_Params
{
	float                                              ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_GetBoundaryMax_Params
{
	float                                              ReturnValue;                                              
};


struct UInstancedSplineMeshComponent_ClearIndex_Params
{
	int                                                Index;                                                    
	bool                                               bUpdateMesh;                                              
};


struct UInstancedSplineMeshComponent_AddOrSetIndexStartAndEnd_Params
{
	int                                                Index;                                                    
	struct FVector                                     StartPos;                                                 
	struct FVector                                     StartTangent;                                             
	struct FVector                                     EndPos;                                                   
	struct FVector                                     EndTangent;                                               
	struct FTransform                                  InstanceTransform;                                        
	bool                                               IsWorldSpace;                                             
	bool                                               bUpdateMesh;                                              
};


struct UMaterialInterface_SetStreamingTextureMipOffset_Params
{
	int                                                NewMipOffset;                                             
	bool                                               SizeLimited;                                              
};


struct UMaterialInterface_SetForceMipLevelsToBeResident_Params
{
	bool                                               OverrideForceMiplevelsToBeResident;                       
	bool                                               bForceMiplevelsToBeResidentValue;                         
	float                                              ForceDuration;                                            
	int                                                CinematicTextureGroups;                                   
};


struct UMaterialInterface_GetPhysicalMaterial_Params
{
	class UPhysicalMaterial*                           ReturnValue;                                              
};


struct UMaterialInterface_GetBaseMaterial_Params
{
	class UMaterial*                                   ReturnValue;                                              
};


struct AAmbientSound_Stop_Params
{
};


struct AAmbientSound_Play_Params
{
	float                                              StartTime;                                                
};


struct AAmbientSound_FadeOut_Params
{
	float                                              FadeOutDuration;                                          
	float                                              FadeVolumeLevel;                                          
};


struct AAmbientSound_FadeIn_Params
{
	float                                              FadeInDuration;                                           
	float                                              FadeVolumeLevel;                                          
};


struct AAmbientSound_AdjustVolume_Params
{
	float                                              AdjustVolumeDuration;                                     
	float                                              AdjustVolumeLevel;                                        
};


struct UAnimSequenceBase_GetPlayLength_Params
{
	float                                              ReturnValue;                                              
};


struct UAnimInstanceContainerInterface_OnDeactived_Params
{
};


struct UAnimInstanceContainerInterface_OnActived_Params
{
};


struct UAnimInstanceContainer_SetTargetAnimInstance_Params
{
	class UClass*                                      InstanceClass;                                            
	class UAnimInstance*                               ReturnValue;                                              
};


struct UAnimInstanceContainer_SetSoftTargetAnimInstance_Params
{
	bool                                               ReturnValue;                                              
};


struct UAnimInstanceContainer_RemoveCacheAnimInstance_Params
{
	class UClass*                                      InstanceClass;                                            
	bool                                               ReturnValue;                                              
};


struct UAnimInstanceContainer_IsRunningTargetAnimInstance_Params
{
	class UClass*                                      InstanceClass;                                            
	bool                                               ReturnValue;                                              
};


struct UAnimInstanceContainer_IsReceiveInPoseNode_Params
{
	bool                                               ReturnValue;                                              
};


struct UAnimInstanceContainer_GetTargetInstance_Params
{
	bool                                               bCheckPendingKill;                                        
	class UAnimInstance*                               ReturnValue;                                              
};


struct UAnimInstanceContainer_ClearCacheAnimInstance_Params
{
};


struct UAnimInstanceContainer_AddCacheAnimInstance_Params
{
	class UClass*                                      InstanceClass;                                            
	bool                                               ReturnValue;                                              
};


struct UAnimNotifyState_Trail_OverridePSTemplate_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 
	class UAnimSequenceBase*                           Animation;                                                
	class UParticleSystem*                             ReturnValue;                                              
};


struct UAnimSingleNodeInstance_StopAnim_Params
{
};


struct UAnimSingleNodeInstance_SetReverse_Params
{
	bool                                               bInReverse;                                               
};


struct UAnimSingleNodeInstance_SetPreviewCurveOverride_Params
{
	struct FName                                       PoseName;                                                 
	float                                              Value;                                                    
	bool                                               bRemoveIfZero;                                            
};


struct UAnimSingleNodeInstance_SetPositionWithPreviousTime_Params
{
	float                                              InPosition;                                               
	float                                              InPreviousTime;                                           
	bool                                               bFireNotifies;                                            
};


struct UAnimSingleNodeInstance_SetPosition_Params
{
	float                                              InPosition;                                               
	bool                                               bFireNotifies;                                            
};


struct UAnimSingleNodeInstance_SetPlayRate_Params
{
	float                                              InPlayRate;                                               
};


struct UAnimSingleNodeInstance_SetPlaying_Params
{
	bool                                               bIsPlaying;                                               
};


struct UAnimSingleNodeInstance_SetLooping_Params
{
	bool                                               bIsLooping;                                               
};


struct UAnimSingleNodeInstance_SetBlendSpaceInput_Params
{
	struct FVector                                     InBlendInput;                                             
};


struct UAnimSingleNodeInstance_SetAnimationAsset_Params
{
	class UAnimationAsset*                             NewAsset;                                                 
	bool                                               bIsLooping;                                               
	float                                              InPlayRate;                                               
};


struct UAnimSingleNodeInstance_PlayAnim_Params
{
	bool                                               bIsLooping;                                               
	float                                              InPlayRate;                                               
	float                                              InStartPosition;                                          
};


struct UAnimSingleNodeInstance_GetLength_Params
{
	float                                              ReturnValue;                                              
};


struct UAnimSingleNodeInstance_GetAnimationAsset_Params
{
	class UAnimationAsset*                             ReturnValue;                                              
};


struct UArrowComponent_SetArrowColor_Params
{
	struct FLinearColor                                NewColor;                                                 
};


struct UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Params
{
	struct FPrimaryAssetId                             PrimaryAsset;                                             
	TArray<struct FName>                               LoadBundles;                                              
	class UAsyncActionLoadPrimaryAsset*                ReturnValue;                                              
};


struct UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Params
{
	struct FPrimaryAssetId                             PrimaryAsset;                                             
	TArray<struct FName>                               LoadBundles;                                              
	class UAsyncActionLoadPrimaryAssetClass*           ReturnValue;                                              
};


struct UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Params
{
	TArray<struct FPrimaryAssetId>                     PrimaryAssetList;                                         
	TArray<struct FName>                               LoadBundles;                                              
	class UAsyncActionLoadPrimaryAssetList*            ReturnValue;                                              
};


struct UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Params
{
	TArray<struct FPrimaryAssetId>                     PrimaryAssetList;                                         
	TArray<struct FName>                               LoadBundles;                                              
	class UAsyncActionLoadPrimaryAssetClassList*       ReturnValue;                                              
};


struct UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Params
{
	TArray<struct FPrimaryAssetId>                     PrimaryAssetList;                                         
	TArray<struct FName>                               AddBundles;                                               
	TArray<struct FName>                               RemoveBundles;                                            
	class UAsyncActionChangePrimaryAssetBundles*       ReturnValue;                                              
};


struct UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Params
{
	TArray<struct FName>                               NewBundles;                                               
	TArray<struct FName>                               OldBundles;                                               
	class UAsyncActionChangePrimaryAssetBundles*       ReturnValue;                                              
};


struct UAtmosphericFogComponent_StartPrecompute_Params
{
};


struct UAtmosphericFogComponent_SetSunMultiplier_Params
{
	float                                              NewSunMultiplier;                                         
};


struct UAtmosphericFogComponent_SetStartDistance_Params
{
	float                                              NewStartDistance;                                         
};


struct UAtmosphericFogComponent_SetPrecomputeParams_Params
{
	float                                              DensityHeight;                                            
	int                                                MaxScatteringOrder;                                       
	int                                                InscatterAltitudeSampleNum;                               
};


struct UAtmosphericFogComponent_SetFogMultiplier_Params
{
	float                                              NewFogMultiplier;                                         
};


struct UAtmosphericFogComponent_SetDistanceScale_Params
{
	float                                              NewDistanceScale;                                         
};


struct UAtmosphericFogComponent_SetDistanceOffset_Params
{
	float                                              NewDistanceOffset;                                        
};


struct UAtmosphericFogComponent_SetDensityOffset_Params
{
	float                                              NewDensityOffset;                                         
};


struct UAtmosphericFogComponent_SetDensityMultiplier_Params
{
	float                                              NewDensityMultiplier;                                     
};


struct UAtmosphericFogComponent_SetDefaultLightColor_Params
{
	struct FLinearColor                                NewLightColor;                                            
};


struct UAtmosphericFogComponent_SetDefaultBrightness_Params
{
	float                                              NewBrightness;                                            
};


struct UAtmosphericFogComponent_SetAltitudeScale_Params
{
	float                                              NewAltitudeScale;                                         
};


struct UAtmosphericFogComponent_DisableSunDisk_Params
{
	bool                                               NewSunDisk;                                               
};


struct UAtmosphericFogComponent_DisableGroundScattering_Params
{
	bool                                               NewGroundScattering;                                      
};


struct UAudioComponent_Stop_Params
{
};


struct UAudioComponent_SetWaveParameter_Params
{
	struct FName                                       InName;                                                   
	class USoundWave*                                  InWave;                                                   
};


struct UAudioComponent_SetVolumeMultiplier_Params
{
	float                                              NewVolumeMultiplier;                                      
};


struct UAudioComponent_SetUISound_Params
{
	bool                                               bInUISound;                                               
};


struct UAudioComponent_SetSubmixSend_Params
{
	class USoundSubmix*                                Submix;                                                   
	float                                              SendLevel;                                                
};


struct UAudioComponent_SetSound_Params
{
	class USoundBase*                                  NewSound;                                                 
};


struct UAudioComponent_SetPitchMultiplier_Params
{
	float                                              NewPitchMultiplier;                                       
};


struct UAudioComponent_SetPaused_Params
{
	bool                                               bPause;                                                   
};


struct UAudioComponent_SetLowPassFilterFrequency_Params
{
	float                                              InLowPassFilterFrequency;                                 
};


struct UAudioComponent_SetLowPassFilterEnabled_Params
{
	bool                                               InLowPassFilterEnabled;                                   
};


struct UAudioComponent_SetIntParameter_Params
{
	struct FName                                       InName;                                                   
	int                                                inInt;                                                    
};


struct UAudioComponent_SetFloatParameter_Params
{
	struct FName                                       InName;                                                   
	float                                              InFloat;                                                  
};


struct UAudioComponent_SetBoolParameter_Params
{
	struct FName                                       InName;                                                   
	bool                                               InBool;                                                   
};


struct UAudioComponent_Play_Params
{
	float                                              StartTime;                                                
};


struct UAudioComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UAudioComponent_FadeOut_Params
{
	float                                              FadeOutDuration;                                          
	float                                              FadeVolumeLevel;                                          
};


struct UAudioComponent_FadeIn_Params
{
	float                                              FadeInDuration;                                           
	float                                              FadeVolumeLevel;                                          
	float                                              StartTime;                                                
};


struct UAudioComponent_BP_GetAttenuationSettingsToApply_Params
{
	struct FSoundAttenuationSettings                   OutAttenuationSettings;                                   
	bool                                               ReturnValue;                                              
};


struct UAudioComponent_AdjustVolume_Params
{
	float                                              AdjustVolumeDuration;                                     
	float                                              AdjustVolumeLevel;                                        
};


struct UAudioComponent_AdjustAttenuation_Params
{
	struct FSoundAttenuationSettings                   InAttenuationSettings;                                    
};


struct AAudioVolume_SetReverbSettings_Params
{
	struct FReverbSettings                             NewReverbSettings;                                        
};


struct AAudioVolume_SetPriority_Params
{
	float                                              NewPriority;                                              
};


struct AAudioVolume_SetInteriorSettings_Params
{
	struct FInteriorSettings                           NewInteriorSettings;                                      
};


struct AAudioVolume_SetEnabled_Params
{
	bool                                               bNewEnabled;                                              
};


struct AAudioVolume_OnRep_bEnabled_Params
{
};


struct UAvoidanceManager_RegisterMovementComponent_Params
{
	class UMovementComponent*                          MovementComp;                                             
	float                                              AvoidanceWeight;                                          
	bool                                               ReturnValue;                                              
};


struct UAvoidanceManager_GetObjectCount_Params
{
	int                                                ReturnValue;                                              
};


struct UAvoidanceManager_GetNewAvoidanceUID_Params
{
	int                                                ReturnValue;                                              
};


struct UAvoidanceManager_GetAvoidanceVelocityForComponent_Params
{
	class UMovementComponent*                          MovementComp;                                             
	struct FVector                                     ReturnValue;                                              
};


struct UBillboardComponent_SetUV_Params
{
	int                                                NewU;                                                     
	int                                                NewUL;                                                    
	int                                                NewV;                                                     
	int                                                NewVL;                                                    
};


struct UBillboardComponent_SetSpriteAndUV_Params
{
	class UTexture2D*                                  NewSprite;                                                
	int                                                NewU;                                                     
	int                                                NewUL;                                                    
	int                                                NewV;                                                     
	int                                                NewVL;                                                    
};


struct UBillboardComponent_SetSprite_Params
{
	class UTexture2D*                                  NewSprite;                                                
};


struct UBlueprintMapLibrary_SetMapPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	TMap<int, int>                                     Value;                                                    
};


struct UBlueprintMapLibrary_Map_Values_Params
{
	TMap<int, int>                                     TargetMap;                                                
	TArray<int>                                        Values;                                                   
};


struct UBlueprintMapLibrary_Map_Remove_Params
{
	TMap<int, int>                                     TargetMap;                                                
	int                                                Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UBlueprintMapLibrary_Map_Length_Params
{
	TMap<int, int>                                     TargetMap;                                                
	int                                                ReturnValue;                                              
};


struct UBlueprintMapLibrary_Map_Keys_Params
{
	TMap<int, int>                                     TargetMap;                                                
	TArray<int>                                        Keys;                                                     
};


struct UBlueprintMapLibrary_Map_Find_Params
{
	TMap<int, int>                                     TargetMap;                                                
	int                                                Key;                                                      
	int                                                Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlueprintMapLibrary_Map_Contains_Params
{
	TMap<int, int>                                     TargetMap;                                                
	int                                                Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UBlueprintMapLibrary_Map_Clear_Params
{
	TMap<int, int>                                     TargetMap;                                                
};


struct UBlueprintMapLibrary_Map_Add_Params
{
	TMap<int, int>                                     TargetMap;                                                
	int                                                Key;                                                      
	int                                                Value;                                                    
};


struct UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow_Params
{
	int                                                inSecondsFromNow;                                         
	struct FText                                       Title;                                                    
	struct FText                                       Body;                                                     
	struct FText                                       Action;                                                   
	int                                                NotificationID;                                           
};


struct UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow_Params
{
	int                                                inSecondsFromNow;                                         
	int                                                NotificationID;                                           
};


struct UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime_Params
{
	struct FDateTime                                   FireDateTime;                                             
	bool                                               LocalTime;                                                
	int                                                NotificationID;                                           
};


struct UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime_Params
{
	struct FDateTime                                   FireDateTime;                                             
	bool                                               LocalTime;                                                
	struct FText                                       Title;                                                    
	struct FText                                       Body;                                                     
	struct FText                                       Action;                                                   
	int                                                NotificationID;                                           
};


struct UBlueprintPlatformLibrary_GetLaunchNotification_Params
{
	bool                                               NotificationLaunchedApp;                                  
	struct FString                                     ActivationEvent;                                          
	int                                                FireDate;                                                 
};


struct UBlueprintPlatformLibrary_ClearAllLocalNotifications_Params
{
};


struct UBlueprintPlatformLibrary_CancelLocalNotification_Params
{
	int                                                NotificationID;                                           
};


struct UBlueprintSetLibrary_SetSetPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
};


struct UBlueprintSetLibrary_Set_Union_Params
{
};


struct UBlueprintSetLibrary_Set_ToArray_Params
{
	TArray<int>                                        Result;                                                   
};


struct UBlueprintSetLibrary_Set_RemoveItems_Params
{
	TArray<int>                                        Items;                                                    
};


struct UBlueprintSetLibrary_Set_Remove_Params
{
	int                                                Item;                                                     
	bool                                               ReturnValue;                                              
};


struct UBlueprintSetLibrary_Set_Length_Params
{
	int                                                ReturnValue;                                              
};


struct UBlueprintSetLibrary_Set_Intersection_Params
{
};


struct UBlueprintSetLibrary_Set_Difference_Params
{
};


struct UBlueprintSetLibrary_Set_Contains_Params
{
	int                                                ItemToFind;                                               
	bool                                               ReturnValue;                                              
};


struct UBlueprintSetLibrary_Set_Clear_Params
{
};


struct UBlueprintSetLibrary_Set_AddItems_Params
{
	TArray<int>                                        NewItems;                                                 
};


struct UBlueprintSetLibrary_Set_Add_Params
{
	int                                                NewItem;                                                  
};


struct UReflectionCaptureComponent_SetRealtimeColor_Params
{
	struct FVector                                     InColor;                                                  
};


struct UReflectionCaptureComponent_SetRealtimeBrightness_Params
{
	float                                              InBrightness;                                             
};


struct UReflectionCaptureComponent_SetRealtimeAngle_Params
{
	float                                              InAngle;                                                  
};


struct UCameraAnimInst_Stop_Params
{
	bool                                               bImmediate;                                               
};


struct UCameraAnimInst_SetScale_Params
{
	float                                              NewDuration;                                              
};


struct UCameraAnimInst_SetDuration_Params
{
	float                                              NewDuration;                                              
};


struct UCameraAnimInst_SetCurrentTime_Params
{
	float                                              NewTime;                                                  
};


struct UCanvas_K2_TextSize_Params
{
	class UFont*                                       RenderFont;                                               
	struct FString                                     RenderText;                                               
	struct FVector2D                                   Scale;                                                    
	struct FVector2D                                   ReturnValue;                                              
};


struct UCanvas_K2_StrLen_Params
{
	class UFont*                                       RenderFont;                                               
	struct FString                                     RenderText;                                               
	struct FVector2D                                   ReturnValue;                                              
};


struct UCanvas_K2_Project_Params
{
	struct FVector                                     WorldLocation;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UCanvas_K2_DrawTriangle_Params
{
	class UTexture*                                    RenderTexture;                                            
	TArray<struct FCanvasUVTri>                        Triangles;                                                
};


struct UCanvas_K2_DrawTexture_Params
{
	class UTexture*                                    RenderTexture;                                            
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector2D                                   ScreenSize;                                               
	struct FVector2D                                   CoordinatePosition;                                       
	struct FVector2D                                   CoordinateSize;                                           
	struct FLinearColor                                RenderColor;                                              
	TEnumAsByte<EBlendMode>                            BlendMode;                                                
	float                                              Rotation;                                                 
	struct FVector2D                                   PivotPoint;                                               
};


struct UCanvas_K2_DrawText_Params
{
	class UFont*                                       RenderFont;                                               
	struct FString                                     RenderText;                                               
	struct FVector2D                                   ScreenPosition;                                           
	struct FLinearColor                                RenderColor;                                              
	float                                              Kerning;                                                  
	struct FLinearColor                                ShadowColor;                                              
	struct FVector2D                                   ShadowOffset;                                             
	bool                                               bCentreX;                                                 
	bool                                               bCentreY;                                                 
	bool                                               bOutlined;                                                
	struct FLinearColor                                OutlineColor;                                             
};


struct UCanvas_K2_DrawPolygon_Params
{
	class UTexture*                                    RenderTexture;                                            
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector2D                                   Radius;                                                   
	int                                                NumberOfSides;                                            
	struct FLinearColor                                RenderColor;                                              
};


struct UCanvas_K2_DrawMaterialTriangle_Params
{
	class UMaterialInterface*                          RenderMaterial;                                           
	TArray<struct FCanvasUVTri>                        Triangles;                                                
};


struct UCanvas_K2_DrawMaterial_Params
{
	class UMaterialInterface*                          RenderMaterial;                                           
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector2D                                   ScreenSize;                                               
	struct FVector2D                                   CoordinatePosition;                                       
	struct FVector2D                                   CoordinateSize;                                           
	float                                              Rotation;                                                 
	struct FVector2D                                   PivotPoint;                                               
};


struct UCanvas_K2_DrawLine_Params
{
	struct FVector2D                                   ScreenPositionA;                                          
	struct FVector2D                                   ScreenPositionB;                                          
	float                                              Thickness;                                                
	struct FLinearColor                                RenderColor;                                              
};


struct UCanvas_K2_DrawBox_Params
{
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector2D                                   ScreenSize;                                               
	float                                              Thickness;                                                
};


struct UCanvas_K2_DrawBorder_Params
{
	class UTexture*                                    BorderTexture;                                            
	class UTexture*                                    BackgroundTexture;                                        
	class UTexture*                                    LeftBorderTexture;                                        
	class UTexture*                                    RightBorderTexture;                                       
	class UTexture*                                    TopBorderTexture;                                         
	class UTexture*                                    BottomBorderTexture;                                      
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector2D                                   ScreenSize;                                               
	struct FVector2D                                   CoordinatePosition;                                       
	struct FVector2D                                   CoordinateSize;                                           
	struct FLinearColor                                RenderColor;                                              
	struct FVector2D                                   BorderScale;                                              
	struct FVector2D                                   BackgroundScale;                                          
	float                                              Rotation;                                                 
	struct FVector2D                                   PivotPoint;                                               
	struct FVector2D                                   CornerSize;                                               
};


struct UCanvas_K2_Deproject_Params
{
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector                                     WorldOrigin;                                              
	struct FVector                                     WorldDirection;                                           
};


struct UTexture_Blueprint_ChangeMaxTextureSize_Params
{
	int                                                Size;                                                     
};


struct UCanvasRenderTarget2D_UpdateResource_Params
{
};


struct UCanvasRenderTarget2D_ReceiveUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   
	int                                                Width;                                                    
	int                                                Height;                                                   
};


struct UCanvasRenderTarget2D_GetSize_Params
{
	int                                                Width;                                                    
	int                                                Height;                                                   
};


struct UCanvasRenderTarget2D_CreateCanvasRenderTarget2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      CanvasRenderTarget2DClass;                                
	int                                                Width;                                                    
	int                                                Height;                                                   
	class UCanvasRenderTarget2D*                       ReturnValue;                                              
};


struct UCheatManager_Walk_Params
{
};


struct UCheatManager_ViewSelf_Params
{
};


struct UCheatManager_ViewPlayer_Params
{
	struct FString                                     S;                                                        
};


struct UCheatManager_ViewClass_Params
{
	class UClass*                                      DesiredClass;                                             
};


struct UCheatManager_ViewActor_Params
{
	struct FName                                       actorName;                                                
};


struct UCheatManager_TriggerCrash_Params
{
};


struct UCheatManager_ToggleDebugCamera_Params
{
};


struct UCheatManager_ToggleAILogging_Params
{
};


struct UCheatManager_TestCollisionDistance_Params
{
};


struct UCheatManager_Teleport_Params
{
};


struct UCheatManager_Summon_Params
{
	struct FString                                     ClassName;                                                
};


struct UCheatManager_StreamLevelOut_Params
{
	struct FName                                       PackageName;                                              
};


struct UCheatManager_StreamLevelIn_Params
{
	struct FName                                       PackageName;                                              
};


struct UCheatManager_Slomo_Params
{
	float                                              NewTimeDilation;                                          
};


struct UCheatManager_SetWorldOrigin_Params
{
};


struct UCheatManager_SetNavDrawDistance_Params
{
	float                                              DrawDistance;                                             
};


struct UCheatManager_SetMouseSensitivityToDefault_Params
{
};


struct UCheatManager_ServerToggleAILogging_Params
{
};


struct UCheatManager_ReceiveInitCheatManager_Params
{
};


struct UCheatManager_ReceiveEndPlay_Params
{
};


struct UCheatManager_RebuildNavigation_Params
{
};


struct UCheatManager_PlayersOnly_Params
{
};


struct UCheatManager_OnlyLoadLevel_Params
{
	struct FName                                       PackageName;                                              
};


struct UCheatManager_LogLoc_Params
{
};


struct UCheatManager_InvertMouse_Params
{
};


struct UCheatManager_God_Params
{
};


struct UCheatManager_Ghost_Params
{
};


struct UCheatManager_FreezeFrame_Params
{
	float                                              Delay;                                                    
};


struct UCheatManager_Fly_Params
{
};


struct UCheatManager_FlushLog_Params
{
};


struct UCheatManager_EnableDebugCamera_Params
{
};


struct UCheatManager_DumpVoiceMutingState_Params
{
};


struct UCheatManager_DumpPartyState_Params
{
};


struct UCheatManager_DumpOnlineSessionState_Params
{
};


struct UCheatManager_DumpChatState_Params
{
};


struct UCheatManager_DisableDebugCamera_Params
{
};


struct UCheatManager_DestroyTarget_Params
{
};


struct UCheatManager_DestroyPawns_Params
{
	class UClass*                                      aClass;                                                   
};


struct UCheatManager_DestroyAllPawnsExceptTarget_Params
{
};


struct UCheatManager_DestroyAll_Params
{
	class UClass*                                      aClass;                                                   
};


struct UCheatManager_DebugCapsuleSweepSize_Params
{
	float                                              HalfHeight;                                               
	float                                              Radius;                                                   
};


struct UCheatManager_DebugCapsuleSweepPawn_Params
{
};


struct UCheatManager_DebugCapsuleSweepComplex_Params
{
	bool                                               bTraceComplex;                                            
};


struct UCheatManager_DebugCapsuleSweepClear_Params
{
};


struct UCheatManager_DebugCapsuleSweepChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  
};


struct UCheatManager_DebugCapsuleSweepCapture_Params
{
};


struct UCheatManager_DebugCapsuleSweep_Params
{
};


struct UCheatManager_DamageTarget_Params
{
	float                                              DamageAmount;                                             
};


struct UCheatManager_CheatScript_Params
{
	struct FString                                     ScriptName;                                               
};


struct UCheatManager_ChangeSize_Params
{
	float                                              F;                                                        
};


struct UCheatManager_BugItStringCreator_Params
{
	struct FVector                                     ViewLocation;                                             
	struct FRotator                                    ViewRotation;                                             
	struct FString                                     GoString;                                                 
	struct FString                                     LocString;                                                
};


struct UCheatManager_BugItGo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              Pitch;                                                    
	float                                              Yaw;                                                      
	float                                              Roll;                                                     
};


struct UCheatManager_BugIt_Params
{
	struct FString                                     ScreenShotDescription;                                    
};


struct UChildActorComponent_SetChildActorClass_Params
{
	class UClass*                                      InClass;                                                  
};


struct UGameViewportClient_SSSwapControllers_Params
{
};


struct UGameViewportClient_ShowTitleSafeArea_Params
{
};


struct UGameViewportClient_SetConsoleTarget_Params
{
	int                                                playerIndex;                                              
};


struct UGameViewportClient_RemoveViewportChangeDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
};


struct UGameViewportClient_AddViewportChangeDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
};


struct UCurveBase_GetValueRange_Params
{
	float                                              MinValue;                                                 
	float                                              MaxValue;                                                 
};


struct UCurveBase_GetTimeRange_Params
{
	float                                              MinTime;                                                  
	float                                              MaxTime;                                                  
};


struct UCurveFloat_GetFloatValue_Params
{
	float                                              InTime;                                                   
	float                                              ReturnValue;                                              
};


struct UCurveLinearColor_GetLinearColorValue_Params
{
	float                                              InTime;                                                   
	struct FLinearColor                                ReturnValue;                                              
};


struct UCurveSourceInterface_GetCurveValue_Params
{
	struct FName                                       CurveName;                                                
	float                                              ReturnValue;                                              
};


struct UCurveSourceInterface_GetCurves_Params
{
	TArray<struct FNamedCurveValue>                    OutValues;                                                
};


struct UCurveSourceInterface_GetBindingName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct UCurveVector_GetVectorValue_Params
{
	float                                              InTime;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UDataTableFunctionLibrary_GetDataTableRowNames_Params
{
	class UDataTable*                                  Table;                                                    
	TArray<struct FName>                               OutRowNames;                                              
};


struct UDataTableFunctionLibrary_GetDataTableRowFromName_Params
{
	class UDataTable*                                  Table;                                                    
	struct FName                                       RowName;                                                  
	struct FTableRowBase                               OutRow;                                                   
	bool                                               ReturnValue;                                              
};


struct UDataTableFunctionLibrary_EvaluateCurveTableRow_Params
{
	class UCurveTable*                                 CurveTable;                                               
	struct FName                                       RowName;                                                  
	float                                              InXY;                                                     
	TEnumAsByte<EEvaluateCurveTableResult>             OutResult;                                                
	float                                              OutXY;                                                    
	struct FString                                     ContextString;                                            
};


struct ADebugCameraController_ToggleDisplay_Params
{
};


struct ADebugCameraController_ShowDebugSelectedInfo_Params
{
};


struct ADebugCameraController_SetPawnMovementSpeedScale_Params
{
	float                                              NewSpeedScale;                                            
};


struct ADebugCameraController_ReceiveOnDeactivate_Params
{
	class APlayerController*                           RestoredPC;                                               
};


struct ADebugCameraController_ReceiveOnActorSelected_Params
{
	class AActor*                                      NewSelectedActor;                                         
	struct FVector                                     SelectHitLocation;                                        
	struct FVector                                     SelectHitNormal;                                          
	struct FHitResult                                  Hit;                                                      
};


struct ADebugCameraController_ReceiveOnActivate_Params
{
	class APlayerController*                           OriginalPC;                                               
};


struct ADebugCameraController_GetSelectedActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct ADecalActor_SetDecalMaterial_Params
{
	class UMaterialInterface*                          NewDecalMaterial;                                         
};


struct ADecalActor_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              
};


struct ADecalActor_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UDecalBakingParameterComponent_GetUVScaleBias_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UDecalBakingParameterComponent_GetDecalBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              
};


struct UDecalBakingParameterComponent_GetCropUVScaleBias_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UDecalComponent_SetSortOrder_Params
{
	int                                                Value;                                                    
};


struct UDecalComponent_SetFadeScreenSize_Params
{
	float                                              NewFadeScreenSize;                                        
};


struct UDecalComponent_SetFadeOut_Params
{
	float                                              StartDelay;                                               
	float                                              Duration;                                                 
	bool                                               DestroyOwnerAfterFade;                                    
};


struct UDecalComponent_SetDecalMaterial_Params
{
	class UMaterialInterface*                          NewDecalMaterial;                                         
};


struct UDecalComponent_GetFadeStartDelay_Params
{
	float                                              ReturnValue;                                              
};


struct UDecalComponent_GetFadeDuration_Params
{
	float                                              ReturnValue;                                              
};


struct UDecalComponent_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UDecalComponent_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct ALight_ToggleEnabled_Params
{
};


struct ALight_SetLightFunctionScale_Params
{
	struct FVector                                     NewLightFunctionScale;                                    
};


struct ALight_SetLightFunctionMaterial_Params
{
	class UMaterialInterface*                          NewLightFunctionMaterial;                                 
};


struct ALight_SetLightFunctionFadeDistance_Params
{
	float                                              NewLightFunctionFadeDistance;                             
};


struct ALight_SetLightColor_Params
{
	struct FLinearColor                                NewLightColor;                                            
};


struct ALight_SetEnabled_Params
{
	bool                                               bSetEnabled;                                              
};


struct ALight_SetCastShadows_Params
{
	bool                                               bNewValue;                                                
};


struct ALight_SetBrightness_Params
{
	float                                              NewBrightness;                                            
};


struct ALight_SetAffectTranslucentLighting_Params
{
	bool                                               bNewValue;                                                
};


struct ALight_OnRep_bEnabled_Params
{
};


struct ALight_IsEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct ALight_GetLightColor_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct ALight_GetBrightness_Params
{
	float                                              ReturnValue;                                              
};


struct ULightComponentBase_SetCastVolumetricShadow_Params
{
	bool                                               bNewValue;                                                
};


struct ULightComponentBase_SetCastShadows_Params
{
	bool                                               bNewValue;                                                
};


struct ULightComponentBase_GetLightColor_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct ULightComponent_SetVolumetricScatteringIntensity_Params
{
	float                                              NewIntensity;                                             
};


struct ULightComponent_SetTemperature_Params
{
	float                                              NewTemperature;                                           
};


struct ULightComponent_SetShadowBias_Params
{
	float                                              NewValue;                                                 
};


struct ULightComponent_SetLightPriority_Params
{
	int                                                Priority;                                                 
};


struct ULightComponent_SetLightFunctionScale_Params
{
	struct FVector                                     NewLightFunctionScale;                                    
};


struct ULightComponent_SetLightFunctionMaterial_Params
{
	class UMaterialInterface*                          NewLightFunctionMaterial;                                 
};


struct ULightComponent_SetLightFunctionFadeDistance_Params
{
	float                                              NewLightFunctionFadeDistance;                             
};


struct ULightComponent_SetLightFunctionDisabledBrightness_Params
{
	float                                              NewValue;                                                 
};


struct ULightComponent_SetLightColor_Params
{
	struct FLinearColor                                NewLightColor;                                            
	bool                                               bSRGB;                                                    
};


struct ULightComponent_SetIntensity_Params
{
	float                                              NewIntensity;                                             
};


struct ULightComponent_SetIndirectLightingIntensity_Params
{
	float                                              NewIntensity;                                             
};


struct ULightComponent_SetIESTexture_Params
{
	class UTextureLightProfile*                        NewValue;                                                 
};


struct ULightComponent_SetEnableLightShaftBloom_Params
{
	bool                                               bNewValue;                                                
};


struct ULightComponent_SetBloomTint_Params
{
	struct FColor                                      NewValue;                                                 
};


struct ULightComponent_SetBloomThreshold_Params
{
	float                                              NewValue;                                                 
};


struct ULightComponent_SetBloomScale_Params
{
	float                                              NewValue;                                                 
};


struct ULightComponent_SetAffectTranslucentLighting_Params
{
	bool                                               bNewValue;                                                
};


struct ULightComponent_SetAffectDynamicIndirectLighting_Params
{
	bool                                               bNewValue;                                                
};


struct ULightComponent_ForceUpdateShadowState_Params
{
};


struct UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Params
{
	float                                              NewValue;                                                 
};


struct UDirectionalLightComponent_SetOcclusionMaskDarkness_Params
{
	float                                              NewValue;                                                 
};


struct UDirectionalLightComponent_SetLightShaftOverrideDirection_Params
{
	struct FVector                                     NewValue;                                                 
};


struct UDirectionalLightComponent_SetEnableLightShaftOcclusion_Params
{
	bool                                               bNewValue;                                                
};


struct UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Params
{
	float                                              NewValue;                                                 
};


struct UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Params
{
	float                                              NewValue;                                                 
};


struct UDirectionalLightComponent_SetDynamicShadowCascades_Params
{
	int                                                NewValue;                                                 
};


struct UDirectionalLightComponent_SetCloudShadowWinSpeed_Params
{
	struct FVector2D                                   InWinSpeed;                                               
};


struct UDirectionalLightComponent_SetCloudShadowTileSize_Params
{
	float                                              InValue;                                                  
};


struct UDirectionalLightComponent_SetCloudShadowTexture_Params
{
	class UTexture*                                    InTexture;                                                
};


struct UDirectionalLightComponent_SetCloudShadowDensity_Params
{
	float                                              InDensity;                                                
};


struct UDirectionalLightComponent_SetCastsCloudShadow_Params
{
	bool                                               InValue;                                                  
};


struct UDirectionalLightComponent_SetCastPhotonShadow_Params
{
	bool                                               InValue;                                                  
};


struct UDirectionalLightComponent_SetCastPhotonPerObjectShadow_Params
{
	bool                                               InValue;                                                  
};


struct UDirectionalLightComponent_SetCascadeTransitionFraction_Params
{
	float                                              NewValue;                                                 
};


struct UDirectionalLightComponent_SetCascadeDistributionExponent_Params
{
	float                                              NewValue;                                                 
};


struct UDirectionalLightComponent_SetAtmosphereSunLight_Params
{
	bool                                               bNewValue;                                                
};


struct UTexture2D_Blueprint_GetSizeY_Params
{
	int                                                ReturnValue;                                              
};


struct UTexture2D_Blueprint_GetSizeX_Params
{
	int                                                ReturnValue;                                              
};


struct AEmitter_ToggleActive_Params
{
};


struct AEmitter_SetVectorParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FVector                                     Param;                                                    
};


struct AEmitter_SetTemplate_Params
{
	class UParticleSystem*                             NewTemplate;                                              
};


struct AEmitter_SetMaterialParameter_Params
{
	struct FName                                       ParameterName;                                            
	class UMaterialInterface*                          Param;                                                    
};


struct AEmitter_SetFloatParameter_Params
{
	struct FName                                       ParameterName;                                            
	float                                              Param;                                                    
};


struct AEmitter_SetColorParameter_Params
{
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                Param;                                                    
};


struct AEmitter_SetActorParameter_Params
{
	struct FName                                       ParameterName;                                            
	class AActor*                                      Param;                                                    
};


struct AEmitter_OnRep_bCurrentlyActive_Params
{
};


struct AEmitter_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                        
};


struct AEmitter_IsActive_Params
{
	bool                                               ReturnValue;                                              
};


struct AEmitter_Deactivate_Params
{
};


struct AEmitter_Activate_Params
{
};


struct AExponentialHeightFog_OnRep_bEnabled_Params
{
};


struct UExponentialHeightFogComponent_SetVolumetricFogStartDistance_Params
{
	float                                              NewValue;                                                 
};


struct UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Params
{
	float                                              NewValue;                                                 
};


struct UExponentialHeightFogComponent_SetVolumetricFogNoiseTransform_Params
{
	struct FTransform                                  Transform;                                                
};


struct UExponentialHeightFogComponent_SetVolumetricFogNoiseTexture_Params
{
	class UTexture2D*                                  NewValue;                                                 
};


struct UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Params
{
	float                                              NewValue;                                                 
};


struct UExponentialHeightFogComponent_SetVolumetricFogEmissive_Params
{
	struct FLinearColor                                NewValue;                                                 
};


struct UExponentialHeightFogComponent_SetVolumetricFogDistance_Params
{
	float                                              NewValue;                                                 
};


struct UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Params
{
	struct FColor                                      NewValue;                                                 
};


struct UExponentialHeightFogComponent_SetVolumetricFog_Params
{
	bool                                               bNewValue;                                                
};


struct UExponentialHeightFogComponent_SetStartDistance_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetInscatteringTextureTint_Params
{
	struct FLinearColor                                Value;                                                    
};


struct UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetInscatteringColorCubemap_Params
{
	class UTextureCube*                                Value;                                                    
};


struct UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetFogMaxOpacity_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetFogInscatteringColor_Params
{
	struct FLinearColor                                Value;                                                    
};


struct UExponentialHeightFogComponent_SetFogHeightFalloff_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetFogDensity_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetFogCutoffDistance_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetDirectionalInscatteringGapControl_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Params
{
	float                                              Value;                                                    
};


struct UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Params
{
	struct FLinearColor                                Value;                                                    
};


struct UExponentialHeightFogComponent_SetCustomFogInscatteringColor_Params
{
	struct FLinearColor                                Value;                                                    
	int                                                Index;                                                    
};


struct UExponentialHeightFogComponent_SetCustomFogDensityCoefficient_Params
{
	float                                              Value;                                                    
	int                                                Index;                                                    
};


struct UForceFeedbackComponent_Stop_Params
{
};


struct UForceFeedbackComponent_SetIntensityMultiplier_Params
{
	float                                              NewIntensityMultiplier;                                   
};


struct UForceFeedbackComponent_SetForceFeedbackEffect_Params
{
	class UForceFeedbackEffect*                        NewForceFeedbackEffect;                                   
};


struct UForceFeedbackComponent_Play_Params
{
	float                                              StartTime;                                                
};


struct UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Params
{
	struct FForceFeedbackAttenuationSettings           OutAttenuationSettings;                                   
	bool                                               ReturnValue;                                              
};


struct UForceFeedbackComponent_AdjustAttenuation_Params
{
	struct FForceFeedbackAttenuationSettings           InAttenuationSettings;                                    
};


struct UGameUserSettings_ValidateSettings_Params
{
};


struct UGameUserSettings_SupportsHDRDisplayOutput_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameUserSettings_SetVSyncEnabled_Params
{
	bool                                               bEnable;                                                  
};


struct UGameUserSettings_SetVisualEffectQuality_Params
{
	int                                                Value;                                                    
};


struct UGameUserSettings_SetViewDistanceQuality_Params
{
	int                                                Value;                                                    
};


struct UGameUserSettings_SetToDefaults_Params
{
};


struct UGameUserSettings_SetTextureQuality_Params
{
	int                                                Value;                                                    
};


struct UGameUserSettings_SetShadowQuality_Params
{
	int                                                Value;                                                    
};


struct UGameUserSettings_SetScreenResolution_Params
{
	struct FIntPoint                                   Resolution;                                               
};


struct UGameUserSettings_SetResolutionScaleValueEx_Params
{
	float                                              NewScaleValue;                                            
};


struct UGameUserSettings_SetResolutionScaleValue_Params
{
	int                                                NewScaleValue;                                            
};


struct UGameUserSettings_SetResolutionScaleNormalized_Params
{
	float                                              NewScaleNormalized;                                       
};


struct UGameUserSettings_SetPostProcessingQuality_Params
{
	int                                                Value;                                                    
};


struct UGameUserSettings_SetOverallScalabilityLevel_Params
{
	int                                                Value;                                                    
};


struct UGameUserSettings_SetFullscreenMode_Params
{
	TEnumAsByte<EWindowMode>                           InFullscreenMode;                                         
};


struct UGameUserSettings_SetFrameRateLimit_Params
{
	float                                              NewLimit;                                                 
};


struct UGameUserSettings_SetFoliageQuality_Params
{
	int                                                Value;                                                    
};


struct UGameUserSettings_SetBenchmarkFallbackValues_Params
{
};


struct UGameUserSettings_SetAudioQualityLevel_Params
{
	int                                                QualityLevel;                                             
};


struct UGameUserSettings_SetAntiAliasingQuality_Params
{
	int                                                Value;                                                    
};


struct UGameUserSettings_SaveSettings_Params
{
};


struct UGameUserSettings_RunHardwareBenchmark_Params
{
	int                                                WorkScale;                                                
	float                                              CPUMultiplier;                                            
	float                                              GPUMultiplier;                                            
};


struct UGameUserSettings_RevertVideoMode_Params
{
};


struct UGameUserSettings_ResetToCurrentSettings_Params
{
};


struct UGameUserSettings_LoadSettings_Params
{
	bool                                               bForceReload;                                             
};


struct UGameUserSettings_IsVSyncEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameUserSettings_IsVSyncDirty_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameUserSettings_IsScreenResolutionDirty_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameUserSettings_IsHDREnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameUserSettings_IsFullscreenModeDirty_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameUserSettings_IsDirty_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameUserSettings_GetVisualEffectQuality_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetViewDistanceQuality_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetTextureQuality_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetShadowQuality_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetScreenResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              
};


struct UGameUserSettings_GetResolutionScaleInformationEx_Params
{
	float                                              CurrentScaleNormalized;                                   
	float                                              CurrentScaleValue;                                        
	float                                              MinScaleValue;                                            
	float                                              MaxScaleValue;                                            
};


struct UGameUserSettings_GetResolutionScaleInformation_Params
{
	float                                              CurrentScaleNormalized;                                   
	int                                                CurrentScaleValue;                                        
	int                                                MinScaleValue;                                            
	int                                                MaxScaleValue;                                            
};


struct UGameUserSettings_GetRecommendedResolutionScale_Params
{
	float                                              ReturnValue;                                              
};


struct UGameUserSettings_GetPreferredFullscreenMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              
};


struct UGameUserSettings_GetPostProcessingQuality_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetOverallScalabilityLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetLastConfirmedScreenResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              
};


struct UGameUserSettings_GetLastConfirmedFullscreenMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              
};


struct UGameUserSettings_GetGameUserSettings_Params
{
	class UGameUserSettings*                           ReturnValue;                                              
};


struct UGameUserSettings_GetFullscreenMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              
};


struct UGameUserSettings_GetFrameRateLimit_Params
{
	float                                              ReturnValue;                                              
};


struct UGameUserSettings_GetFoliageQuality_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetDesktopResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              
};


struct UGameUserSettings_GetDefaultWindowPosition_Params
{
	struct FIntPoint                                   ReturnValue;                                              
};


struct UGameUserSettings_GetDefaultWindowMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              
};


struct UGameUserSettings_GetDefaultResolutionScale_Params
{
	float                                              ReturnValue;                                              
};


struct UGameUserSettings_GetDefaultResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              
};


struct UGameUserSettings_GetCurrentHDRDisplayNits_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetAudioQualityLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_GetAntiAliasingQuality_Params
{
	int                                                ReturnValue;                                              
};


struct UGameUserSettings_EnableHDRDisplayOutput_Params
{
	bool                                               bEnable;                                                  
	int                                                DisplayNits;                                              
};


struct UGameUserSettings_ConfirmVideoMode_Params
{
};


struct UGameUserSettings_ApplySettings_Params
{
	bool                                               bCheckForCommandLineOverrides;                            
};


struct UGameUserSettings_ApplyResolutionSettings_Params
{
	bool                                               bCheckForCommandLineOverrides;                            
};


struct UGameUserSettings_ApplyNonResolutionSettings_Params
{
};


struct UGameUserSettings_ApplyHardwareBenchmarkResults_Params
{
};


struct ASpotLight_SetOuterConeAngle_Params
{
	float                                              NewOuterConeAngle;                                        
};


struct ASpotLight_SetInnerConeAngle_Params
{
	float                                              NewInnerConeAngle;                                        
};


struct UHeterogeneousVolumeComponent_SetVolumeResolution_Params
{
	struct FIntVector                                  NewValue;                                                 
};


struct UHeterogeneousVolumeComponent_SetStreamingMipBias_Params
{
	int                                                NewValue;                                                 
};


struct UHeterogeneousVolumeComponent_SetStartFrame_Params
{
	float                                              NewValue;                                                 
};


struct UHeterogeneousVolumeComponent_SetPlaying_Params
{
	bool                                               NewValue;                                                 
};


struct UHeterogeneousVolumeComponent_SetLooping_Params
{
	bool                                               NewValue;                                                 
};


struct UHeterogeneousVolumeComponent_SetFrameRate_Params
{
	float                                              NewValue;                                                 
};


struct UHeterogeneousVolumeComponent_SetFrame_Params
{
	float                                              NewValue;                                                 
};


struct UHeterogeneousVolumeComponent_SetEndFrame_Params
{
	float                                              NewValue;                                                 
};


struct UHeterogeneousVolumeComponent_Play_Params
{
};


struct UColorInstancedStaticMeshComponent_UpdateInstanceTransformWithColor_Params
{
	int                                                InstanceIndex;                                            
	struct FTransform                                  NewInstanceTransform;                                     
	struct FColor                                      InColor;                                                  
	bool                                               bWorldSpace;                                              
	bool                                               bMarkRenderStateDirty;                                    
	bool                                               bTeleport;                                                
	bool                                               ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_ShowInstancesWithColor_Params
{
	TArray<int>                                        InstanceIndices;                                          
	TArray<struct FTransform>                          InstanceTransforms;                                       
	TArray<struct FColor>                              InstanceColors;                                           
	bool                                               ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_ShowInstances_Params
{
	TArray<int>                                        InstanceIndices;                                          
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_ReplaceAllInstancesWithColor_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	TArray<struct FColor>                              InstanceColors;                                           
	bool                                               bShouldReturnIndices;                                     
	TArray<int>                                        ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_ReplaceAllInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               bShouldReturnIndices;                                     
	TArray<int>                                        ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_RemoveInstances_Params
{
	TArray<int>                                        InstanceIndices;                                          
	bool                                               ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_RemoveInstance_Params
{
	int                                                InstanceIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_HideInstance_Params
{
	TArray<int>                                        InstanceIndices;                                          
	bool                                               ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_ClearInstances_Params
{
};


struct UColorInstancedStaticMeshComponent_AddInstanceWorldSpace_Params
{
	struct FTransform                                  WorldTransform;                                           
	int                                                ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_AddInstancesWithColor_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	TArray<struct FColor>                              InstanceColors;                                           
	bool                                               bShouldReturnIndices;                                     
	bool                                               bMarkRenderStateDirty;                                    
	TArray<int>                                        ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_AddInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               bShouldReturnIndices;                                     
	bool                                               bMarkRenderStateDirty;                                    
	TArray<int>                                        ReturnValue;                                              
};


struct UColorInstancedStaticMeshComponent_AddInstance_Params
{
	struct FTransform                                  InstanceTransform;                                        
	int                                                ReturnValue;                                              
};


struct UColorHierarchicalInstancedStaticMeshComponent_ShowInstancesWithColor_Params
{
	TArray<int>                                        InstanceIndices;                                          
	TArray<struct FTransform>                          InstanceTransforms;                                       
	TArray<struct FColor>                              InstanceColors;                                           
	bool                                               ReturnValue;                                              
};


struct UColorHierarchicalInstancedStaticMeshComponent_ShowInstances_Params
{
	TArray<int>                                        InstanceIndices;                                          
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               ReturnValue;                                              
};


struct UColorHierarchicalInstancedStaticMeshComponent_RemoveInstances_Params
{
	TArray<int>                                        InstancesToRemove;                                        
	bool                                               ReturnValue;                                              
};


struct UColorHierarchicalInstancedStaticMeshComponent_AddInstancesWithColor_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	TArray<struct FColor>                              InstanceColors;                                           
	bool                                               bShouldReturnIndices;                                     
	bool                                               bMarkRenderStateDirty;                                    
	TArray<int>                                        ReturnValue;                                              
};


struct UImportanceSamplingLibrary_RandomSobolFloat_Params
{
	int                                                Index;                                                    
	int                                                Dimension;                                                
	float                                              Seed;                                                     
	float                                              ReturnValue;                                              
};


struct UImportanceSamplingLibrary_RandomSobolCell3D_Params
{
	int                                                Index;                                                    
	int                                                NumCells;                                                 
	struct FVector                                     Cell;                                                     
	struct FVector                                     Seed;                                                     
	struct FVector                                     ReturnValue;                                              
};


struct UImportanceSamplingLibrary_RandomSobolCell2D_Params
{
	int                                                Index;                                                    
	int                                                NumCells;                                                 
	struct FVector2D                                   Cell;                                                     
	struct FVector2D                                   Seed;                                                     
	struct FVector2D                                   ReturnValue;                                              
};


struct UImportanceSamplingLibrary_NextSobolFloat_Params
{
	int                                                Index;                                                    
	int                                                Dimension;                                                
	float                                              PreviousValue;                                            
	float                                              ReturnValue;                                              
};


struct UImportanceSamplingLibrary_NextSobolCell3D_Params
{
	int                                                Index;                                                    
	int                                                NumCells;                                                 
	struct FVector                                     PreviousValue;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UImportanceSamplingLibrary_NextSobolCell2D_Params
{
	int                                                Index;                                                    
	int                                                NumCells;                                                 
	struct FVector2D                                   PreviousValue;                                            
	struct FVector2D                                   ReturnValue;                                              
};


struct UImportanceSamplingLibrary_MakeImportanceTexture_Params
{
	class UTexture2D*                                  Texture;                                                  
	TEnumAsByte<EImportanceWeight>                     WeightingFunc;                                            
	struct FImportanceTexture                          ReturnValue;                                              
};


struct UImportanceSamplingLibrary_ImportanceSample_Params
{
	struct FImportanceTexture                          Texture;                                                  
	struct FVector2D                                   Rand;                                                     
	int                                                Samples;                                                  
	float                                              Intensity;                                                
	struct FVector2D                                   SamplePosition;                                           
	struct FLinearColor                                SampleColor;                                              
	float                                              SampleIntensity;                                          
	float                                              SampleSize;                                               
};


struct UImportanceSamplingLibrary_BreakImportanceTexture_Params
{
	struct FImportanceTexture                          ImportanceTexture;                                        
	class UTexture2D*                                  Texture;                                                  
	TEnumAsByte<EImportanceWeight>                     WeightingFunc;                                            
};


struct UInputComponent_WasControllerKeyJustReleased_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UInputComponent_WasControllerKeyJustPressed_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UInputComponent_IsControllerKeyDown_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UInputComponent_GetTouchState_Params
{
	int                                                FingerIndex;                                              
	float                                              LocationX;                                                
	float                                              LocationY;                                                
	bool                                               bIsCurrentlyPressed;                                      
};


struct UInputComponent_GetControllerVectorKeyState_Params
{
	struct FKey                                        Key;                                                      
	struct FVector                                     ReturnValue;                                              
};


struct UInputComponent_GetControllerMouseDelta_Params
{
	float                                              DeltaX;                                                   
	float                                              DeltaY;                                                   
};


struct UInputComponent_GetControllerKeyTimeDown_Params
{
	struct FKey                                        Key;                                                      
	float                                              ReturnValue;                                              
};


struct UInputComponent_GetControllerAnalogStickState_Params
{
	TEnumAsByte<EControllerAnalogStick>                WhichStick;                                               
	float                                              StickX;                                                   
	float                                              StickY;                                                   
};


struct UInputComponent_GetControllerAnalogKeyState_Params
{
	struct FKey                                        Key;                                                      
	float                                              ReturnValue;                                              
};


struct UInputSettings_SaveKeyMappings_Params
{
};


struct UInputSettings_RemoveAxisMapping_Params
{
	struct FInputAxisKeyMapping                        KeyMapping;                                               
	bool                                               bForceRebuildKeymaps;                                     
};


struct UInputSettings_RemoveActionMapping_Params
{
	struct FInputActionKeyMapping                      KeyMapping;                                               
	bool                                               bForceRebuildKeymaps;                                     
};


struct UInputSettings_GetInputSettings_Params
{
	class UInputSettings*                              ReturnValue;                                              
};


struct UInputSettings_GetAxisNames_Params
{
	TArray<struct FName>                               AxisNames;                                                
};


struct UInputSettings_GetAxisMappingByName_Params
{
	struct FName                                       InAxisName;                                               
	TArray<struct FInputAxisKeyMapping>                OutMappings;                                              
};


struct UInputSettings_GetActionNames_Params
{
	TArray<struct FName>                               ActionNames;                                              
};


struct UInputSettings_GetActionMappingByName_Params
{
	struct FName                                       InActionName;                                             
	TArray<struct FInputActionKeyMapping>              OutMappings;                                              
};


struct UInputSettings_ForceRebuildKeymaps_Params
{
};


struct UInputSettings_AddAxisMapping_Params
{
	struct FInputAxisKeyMapping                        KeyMapping;                                               
	bool                                               bForceRebuildKeymaps;                                     
};


struct UInputSettings_AddActionMapping_Params
{
	struct FInputActionKeyMapping                      KeyMapping;                                               
	bool                                               bForceRebuildKeymaps;                                     
};


struct UKismetArrayLibrary_SetArrayPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	TArray<int>                                        Value;                                                    
};


struct UKismetArrayLibrary_FilterArray_Params
{
	TArray<class AActor*>                              TargetArray;                                              
	class UClass*                                      FilterClass;                                              
	TArray<class AActor*>                              FilteredArray;                                            
};


struct UKismetArrayLibrary_Array_Swap_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                FirstIndex;                                               
	int                                                SecondIndex;                                              
};


struct UKismetArrayLibrary_Array_Shuffle_Params
{
	TArray<int>                                        TargetArray;                                              
};


struct UKismetArrayLibrary_Array_Set_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                Index;                                                    
	int                                                Item;                                                     
	bool                                               bSizeToFit;                                               
};


struct UKismetArrayLibrary_Array_Resize_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                Size;                                                     
};


struct UKismetArrayLibrary_Array_RemoveItem_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                Item;                                                     
	bool                                               ReturnValue;                                              
};


struct UKismetArrayLibrary_Array_Remove_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                IndexToRemove;                                            
};


struct UKismetArrayLibrary_Array_Length_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                ReturnValue;                                              
};


struct UKismetArrayLibrary_Array_LastIndex_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                ReturnValue;                                              
};


struct UKismetArrayLibrary_Array_IsValidIndex_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                IndexToTest;                                              
	bool                                               ReturnValue;                                              
};


struct UKismetArrayLibrary_Array_Insert_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                NewItem;                                                  
	int                                                Index;                                                    
};


struct UKismetArrayLibrary_Array_Get_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                Index;                                                    
	int                                                Item;                                                     
};


struct UKismetArrayLibrary_Array_Find_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                ItemToFind;                                               
	int                                                ReturnValue;                                              
};


struct UKismetArrayLibrary_Array_Contains_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                ItemToFind;                                               
	bool                                               ReturnValue;                                              
};


struct UKismetArrayLibrary_Array_Clear_Params
{
	TArray<int>                                        TargetArray;                                              
};


struct UKismetArrayLibrary_Array_Append_Params
{
	TArray<int>                                        TargetArray;                                              
	TArray<int>                                        SourceArray;                                              
};


struct UKismetArrayLibrary_Array_AddUnique_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                NewItem;                                                  
	int                                                ReturnValue;                                              
};


struct UKismetArrayLibrary_Array_Add_Params
{
	TArray<int>                                        TargetArray;                                              
	int                                                NewItem;                                                  
	int                                                ReturnValue;                                              
};


struct UKismetGuidLibrary_Parse_StringToGuid_Params
{
	struct FString                                     GuidString;                                               
	struct FGuid                                       OutGuid;                                                  
	bool                                               Success;                                                  
};


struct UKismetGuidLibrary_NotEqual_GuidGuid_Params
{
	struct FGuid                                       A;                                                        
	struct FGuid                                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetGuidLibrary_NewGuid_Params
{
	struct FGuid                                       ReturnValue;                                              
};


struct UKismetGuidLibrary_IsValid_Guid_Params
{
	struct FGuid                                       InGuid;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetGuidLibrary_Invalidate_Guid_Params
{
	struct FGuid                                       InGuid;                                                   
};


struct UKismetGuidLibrary_EqualEqual_GuidGuid_Params
{
	struct FGuid                                       A;                                                        
	struct FGuid                                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetGuidLibrary_Conv_GuidToString_Params
{
	struct FGuid                                       InGuid;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_TouchForce_Params
{
	struct FPointerEvent                               Input;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_IsTouchEvent_Params
{
	struct FPointerEvent                               Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Params
{
	struct FPointerEvent                               Input;                                                    
	struct FKey                                        MouseButton;                                              
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetWheelDelta_Params
{
	struct FPointerEvent                               Input;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetUserIndex_Params
{
	struct FPointerEvent                               Input;                                                    
	int                                                ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Params
{
	struct FPointerEvent                               Input;                                                    
	int                                                ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Params
{
	struct FPointerEvent                               Input;                                                    
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetPointerIndex_Params
{
	struct FPointerEvent                               Input;                                                    
	int                                                ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Params
{
	struct FPointerEvent                               Input;                                                    
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetGestureType_Params
{
	struct FPointerEvent                               Input;                                                    
	ESlateGesture                                      ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetGestureDelta_Params
{
	struct FPointerEvent                               Input;                                                    
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetEffectingButton_Params
{
	struct FPointerEvent                               Input;                                                    
	struct FKey                                        ReturnValue;                                              
};


struct UKismetInputLibrary_PointerEvent_GetCursorDelta_Params
{
	struct FPointerEvent                               Input;                                                    
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetInputLibrary_Key_IsVectorAxis_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_Key_IsMouseButton_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_Key_IsModifierKey_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_Key_IsKeyboardKey_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_Key_IsGamepadKey_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_Key_IsFloatAxis_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_Key_GetDisplayName_Params
{
	struct FKey                                        Key;                                                      
	struct FText                                       ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsShiftDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsRightShiftDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsRightControlDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsRightCommandDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsRightAltDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsRepeat_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsLeftShiftDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsLeftControlDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsLeftCommandDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsLeftAltDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsControlDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsCommandDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_InputEvent_IsAltDown_Params
{
	struct FInputEvent                                 Input;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_GetUserIndex_Params
{
	struct FKeyEvent                                   Input;                                                    
	int                                                ReturnValue;                                              
};


struct UKismetInputLibrary_GetKey_Params
{
	struct FKeyEvent                                   Input;                                                    
	struct FKey                                        ReturnValue;                                              
};


struct UKismetInputLibrary_GetAnalogValue_Params
{
	struct FAnalogInputEvent                           Input;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetInputLibrary_EqualEqual_KeyKey_Params
{
	struct FKey                                        A;                                                        
	struct FKey                                        B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_EqualEqual_InputChordInputChord_Params
{
	struct FInputChord                                 A;                                                        
	struct FInputChord                                 B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetInputLibrary_CalibrateTilt_Params
{
};


struct UKismetInternationalizationLibrary_SetCurrentLocale_Params
{
	struct FString                                     Culture;                                                  
	bool                                               SaveToConfig;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Params
{
	struct FString                                     Culture;                                                  
	bool                                               SaveToConfig;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_SetCurrentLanguage_Params
{
	struct FString                                     Culture;                                                  
	bool                                               SaveToConfig;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_SetCurrentCulture_Params
{
	struct FString                                     Culture;                                                  
	bool                                               SaveToConfig;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Params
{
	struct FName                                       AssetGroup;                                               
	struct FString                                     Culture;                                                  
	bool                                               SaveToConfig;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_GetCurrentLocale_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_GetCurrentLanguage_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_GetCurrentCulture_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Params
{
	struct FName                                       AssetGroup;                                               
	struct FString                                     ReturnValue;                                              
};


struct UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Params
{
	struct FName                                       AssetGroup;                                               
	bool                                               SaveToConfig;                                             
};


struct UKismetMaterialLibrary_SetVectorParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UMaterialParameterCollection*                Collection;                                               
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                ParameterValue;                                           
};


struct UKismetMaterialLibrary_SetScalarParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UMaterialParameterCollection*                Collection;                                               
	struct FName                                       ParameterName;                                            
	float                                              ParameterValue;                                           
};


struct UKismetMaterialLibrary_GetVectorParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UMaterialParameterCollection*                Collection;                                               
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMaterialLibrary_GetScalarParameterValue_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UMaterialParameterCollection*                Collection;                                               
	struct FName                                       ParameterName;                                            
	float                                              ReturnValue;                                              
};


struct UKismetMaterialLibrary_CreateDynamicMaterialInstance_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UMaterialInterface*                          Parent;                                                   
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UKismetMathLibrary_Xor_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_VSizeSquared_Params
{
	struct FVector                                     A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_VSize2DSquared_Params
{
	struct FVector2D                                   A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_VSize2D_Params
{
	struct FVector2D                                   A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_VSize_Params
{
	struct FVector                                     A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_VLerp_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	float                                              Alpha;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_VInterpTo_Constant_Params
{
	struct FVector                                     Current;                                                  
	struct FVector                                     Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_VInterpTo_Params
{
	struct FVector                                     Current;                                                  
	struct FVector                                     Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_VectorSpringInterp_Params
{
	struct FVector                                     Current;                                                  
	struct FVector                                     Target;                                                   
	struct FVectorSpringState                          SpringState;                                              
	float                                              Stiffness;                                                
	float                                              CriticalDampingFactor;                                    
	float                                              DeltaTime;                                                
	float                                              Mass;                                                     
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Vector2DInterpTo_Constant_Params
{
	struct FVector2D                                   Current;                                                  
	struct FVector2D                                   Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Vector2DInterpTo_Params
{
	struct FVector2D                                   Current;                                                  
	struct FVector2D                                   Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_VEase_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	float                                              Alpha;                                                    
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               
	float                                              BlendExp;                                                 
	int                                                Steps;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_UtcNow_Params
{
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_TransformRotation_Params
{
	struct FTransform                                  T;                                                        
	struct FRotator                                    Rotation;                                                 
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_TransformLocation_Params
{
	struct FTransform                                  T;                                                        
	struct FVector                                     Location;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_TransformDirection_Params
{
	struct FTransform                                  T;                                                        
	struct FVector                                     Direction;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Today_Params
{
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_TLerp_Params
{
	struct FTransform                                  A;                                                        
	struct FTransform                                  B;                                                        
	float                                              Alpha;                                                    
	TEnumAsByte<ELerpInterpolationMode>                InterpMode;                                               
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_TInterpTo_Params
{
	struct FTransform                                  Current;                                                  
	struct FTransform                                  Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_TimespanZeroValue_Params
{
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_TimespanRatio_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_TimespanMinValue_Params
{
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_TimespanMaxValue_Params
{
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_TimespanFromString_Params
{
	struct FString                                     TimespanString;                                           
	struct FTimespan                                   Result;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_TEase_Params
{
	struct FTransform                                  A;                                                        
	struct FTransform                                  B;                                                        
	float                                              Alpha;                                                    
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               
	float                                              BlendExp;                                                 
	int                                                Steps;                                                    
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_Tan_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_VectorVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_VectorInt_Params
{
	struct FVector                                     A;                                                        
	int                                                B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_VectorFloat_Params
{
	struct FVector                                     A;                                                        
	float                                              B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   B;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        
	float                                              B;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_DateTimeTimespan_Params
{
	struct FDateTime                                   A;                                                        
	struct FTimespan                                   B;                                                        
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        
	struct FDateTime                                   B;                                                        
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Subtract_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_Square_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Sqrt_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Sin_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_SignOfInteger_Params
{
	int                                                A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_SignOfFloat_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_SetRandomStreamSeed_Params
{
	struct FRandomStream                               Stream;                                                   
	int                                                NewSeed;                                                  
};


struct UKismetMathLibrary_SelectVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	bool                                               bPickA;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_SelectTransform_Params
{
	struct FTransform                                  A;                                                        
	struct FTransform                                  B;                                                        
	bool                                               bPickA;                                                   
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_SelectString_Params
{
	struct FString                                     A;                                                        
	struct FString                                     B;                                                        
	bool                                               bPickA;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetMathLibrary_SelectRotator_Params
{
	struct FRotator                                    A;                                                        
	struct FRotator                                    B;                                                        
	bool                                               bPickA;                                                   
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_SelectObject_Params
{
	class UObject*                                     A;                                                        
	class UObject*                                     B;                                                        
	bool                                               bSelectA;                                                 
	class UObject*                                     ReturnValue;                                              
};


struct UKismetMathLibrary_SelectInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	bool                                               bPickA;                                                   
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_SelectFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	bool                                               bPickA;                                                   
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_SelectColor_Params
{
	struct FLinearColor                                A;                                                        
	struct FLinearColor                                B;                                                        
	bool                                               bPickA;                                                   
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_SelectClass_Params
{
	class UClass*                                      A;                                                        
	class UClass*                                      B;                                                        
	bool                                               bSelectA;                                                 
	class UClass*                                      ReturnValue;                                              
};


struct UKismetMathLibrary_SeedRandomStream_Params
{
	struct FRandomStream                               Stream;                                                   
};


struct UKismetMathLibrary_Round_Params
{
	float                                              A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_RotatorFromAxisAndAngle_Params
{
	struct FVector                                     Axis;                                                     
	float                                              Angle;                                                    
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_RotateAngleAxis_Params
{
	struct FVector                                     InVect;                                                   
	float                                              AngleDeg;                                                 
	struct FVector                                     Axis;                                                     
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RLerp_Params
{
	struct FRotator                                    A;                                                        
	struct FRotator                                    B;                                                        
	float                                              Alpha;                                                    
	bool                                               bShortestPath;                                            
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_RInterpTo_Constant_Params
{
	struct FRotator                                    Current;                                                  
	struct FRotator                                    Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_RInterpTo_Params
{
	struct FRotator                                    Current;                                                  
	struct FRotator                                    Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_RGBToHSV_Vector_Params
{
	struct FLinearColor                                RGB;                                                      
	struct FLinearColor                                HSV;                                                      
};


struct UKismetMathLibrary_RGBToHSV_Params
{
	struct FLinearColor                                InColor;                                                  
	float                                              H;                                                        
	float                                              S;                                                        
	float                                              V;                                                        
	float                                              A;                                                        
};


struct UKismetMathLibrary_ResetVectorSpringState_Params
{
	struct FVectorSpringState                          SpringState;                                              
};


struct UKismetMathLibrary_ResetRandomStream_Params
{
	struct FRandomStream                               Stream;                                                   
};


struct UKismetMathLibrary_ResetFloatSpringState_Params
{
	struct FFloatSpringState                           SpringState;                                              
};


struct UKismetMathLibrary_REase_Params
{
	struct FRotator                                    A;                                                        
	struct FRotator                                    B;                                                        
	float                                              Alpha;                                                    
	bool                                               bShortestPath;                                            
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               
	float                                              BlendExp;                                                 
	int                                                Steps;                                                    
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorInEllipticalConeInRadiansFromStream_Params
{
	struct FVector                                     ConeDir;                                                  
	float                                              MaxYawInRadians;                                          
	float                                              MaxPitchInRadians;                                        
	struct FRandomStream                               Stream;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorInEllipticalConeInRadians_Params
{
	struct FVector                                     ConeDir;                                                  
	float                                              MaxYawInRadians;                                          
	float                                              MaxPitchInRadians;                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorInEllipticalConeInDegreesFromStream_Params
{
	struct FVector                                     ConeDir;                                                  
	float                                              MaxYawInDegrees;                                          
	float                                              MaxPitchInDegrees;                                        
	struct FRandomStream                               Stream;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorInEllipticalConeInDegrees_Params
{
	struct FVector                                     ConeDir;                                                  
	float                                              MaxYawInDegrees;                                          
	float                                              MaxPitchInDegrees;                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorInConeInRadiansFromStream_Params
{
	struct FVector                                     ConeDir;                                                  
	float                                              ConeHalfAngleInRadians;                                   
	struct FRandomStream                               Stream;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorInConeInRadians_Params
{
	struct FVector                                     ConeDir;                                                  
	float                                              ConeHalfAngleInRadians;                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorInConeInDegreesFromStream_Params
{
	struct FVector                                     ConeDir;                                                  
	float                                              ConeHalfAngleInDegrees;                                   
	struct FRandomStream                               Stream;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorInConeInDegrees_Params
{
	struct FVector                                     ConeDir;                                                  
	float                                              ConeHalfAngleInDegrees;                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVectorFromStream_Params
{
	struct FRandomStream                               Stream;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomUnitVector_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomRotatorFromStream_Params
{
	bool                                               bRoll;                                                    
	struct FRandomStream                               Stream;                                                   
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_RandomRotator_Params
{
	bool                                               bRoll;                                                    
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_RandomPointInBoundingBox_Params
{
	struct FVector                                     Origin;                                                   
	struct FVector                                     BoxExtent;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_RandomIntegerInRangeFromStream_Params
{
	int                                                Min;                                                      
	int                                                Max;                                                      
	struct FRandomStream                               Stream;                                                   
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_RandomIntegerInRange_Params
{
	int                                                Min;                                                      
	int                                                Max;                                                      
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_RandomIntegerFromStream_Params
{
	int                                                Max;                                                      
	struct FRandomStream                               Stream;                                                   
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_RandomInteger_Params
{
	int                                                Max;                                                      
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_RandomFloatInRangeFromStream_Params
{
	float                                              Min;                                                      
	float                                              Max;                                                      
	struct FRandomStream                               Stream;                                                   
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_RandomFloatInRange_Params
{
	float                                              Min;                                                      
	float                                              Max;                                                      
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_RandomFloatFromStream_Params
{
	struct FRandomStream                               Stream;                                                   
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_RandomFloat_Params
{
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_RandomBoolWithWeightFromStream_Params
{
	float                                              Weight;                                                   
	struct FRandomStream                               RandomStream;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_RandomBoolWithWeight_Params
{
	float                                              Weight;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_RandomBoolFromStream_Params
{
	struct FRandomStream                               Stream;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_RandomBool_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_RadiansToDegrees_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_ProjectVectorOnToVector_Params
{
	struct FVector                                     V;                                                        
	struct FVector                                     Target;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_ProjectVectorOnToPlane_Params
{
	struct FVector                                     V;                                                        
	struct FVector                                     PlaneNormal;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_ProjectPointOnToPlane_Params
{
	struct FVector                                     Point;                                                    
	struct FVector                                     PlaneBase;                                                
	struct FVector                                     PlaneNormal;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_PointsAreCoplanar_Params
{
	TArray<struct FVector>                             Points;                                                   
	float                                              Tolerance;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Percent_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Percent_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Percent_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_Or_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Now_Params
{
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	float                                              ErrorTolerance;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   B;                                                        
	float                                              ErrorTolerance;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        
	struct FRotator                                    B;                                                        
	float                                              ErrorTolerance;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        
	class UObject*                                     B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_NameName_Params
{
	struct FName                                       A;                                                        
	struct FName                                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        
	struct FDateTime                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_ClassClass_Params
{
	class UClass*                                      A;                                                        
	class UClass*                                      B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NotEqual_BoolBool_Params
{
	bool                                               A;                                                        
	bool                                               B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Not_PreBool_Params
{
	bool                                               A;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Not_Int_Params
{
	int                                                A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_NormalizeToRange_Params
{
	float                                              Value;                                                    
	float                                              RangeMin;                                                 
	float                                              RangeMax;                                                 
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_NormalizedDeltaRotator_Params
{
	struct FRotator                                    A;                                                        
	struct FRotator                                    B;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_NormalizeAxis_Params
{
	float                                              Angle;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Normal2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Normal_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_NegateVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_NegateRotator_Params
{
	struct FRotator                                    A;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_NearlyEqual_TransformTransform_Params
{
	struct FTransform                                  A;                                                        
	struct FTransform                                  B;                                                        
	float                                              LocationTolerance;                                        
	float                                              RotationTolerance;                                        
	float                                              Scale3DTolerance;                                         
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_NearlyEqual_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ErrorTolerance;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_MultiplyMultiply_FloatFloat_Params
{
	float                                              Base;                                                     
	float                                              Exp;                                                      
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_MultiplyByPi_Params
{
	float                                              Value;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_VectorVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_VectorInt_Params
{
	struct FVector                                     A;                                                        
	int                                                B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_VectorFloat_Params
{
	struct FVector                                     A;                                                        
	float                                              B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   B;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        
	float                                              B;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_TimespanFloat_Params
{
	struct FTimespan                                   A;                                                        
	float                                              Scalar;                                                   
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_RotatorInt_Params
{
	struct FRotator                                    A;                                                        
	int                                                B;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        
	float                                              B;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_LinearColorLinearColor_Params
{
	struct FLinearColor                                A;                                                        
	struct FLinearColor                                B;                                                        
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_LinearColorFloat_Params
{
	struct FLinearColor                                A;                                                        
	float                                              B;                                                        
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_IntFloat_Params
{
	int                                                A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Multiply_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_MirrorVectorByNormal_Params
{
	struct FVector                                     InVect;                                                   
	struct FVector                                     InNormal;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_MinOfIntArray_Params
{
	TArray<int>                                        IntArray;                                                 
	int                                                IndexOfMinValue;                                          
	int                                                MinValue;                                                 
};


struct UKismetMathLibrary_MinOfFloatArray_Params
{
	TArray<float>                                      FloatArray;                                               
	int                                                IndexOfMinValue;                                          
	float                                              MinValue;                                                 
};


struct UKismetMathLibrary_MinOfByteArray_Params
{
	TArray<unsigned char>                              ByteArray;                                                
	int                                                IndexOfMinValue;                                          
	unsigned char                                      MinValue;                                                 
};


struct UKismetMathLibrary_MinimumAreaRectangle_Params
{
	class UObject*                                     WorldContextObject;                                       
	TArray<struct FVector>                             InVerts;                                                  
	struct FVector                                     SampleSurfaceNormal;                                      
	struct FVector                                     OutRectCenter;                                            
	struct FRotator                                    OutRectRotation;                                          
	float                                              OutSideLengthX;                                           
	float                                              OutSideLengthY;                                           
	bool                                               bDebugDraw;                                               
};


struct UKismetMathLibrary_Min_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_MaxOfIntArray_Params
{
	TArray<int>                                        IntArray;                                                 
	int                                                IndexOfMaxValue;                                          
	int                                                MaxValue;                                                 
};


struct UKismetMathLibrary_MaxOfFloatArray_Params
{
	TArray<float>                                      FloatArray;                                               
	int                                                IndexOfMaxValue;                                          
	float                                              MaxValue;                                                 
};


struct UKismetMathLibrary_MaxOfByteArray_Params
{
	TArray<unsigned char>                              ByteArray;                                                
	int                                                IndexOfMaxValue;                                          
	unsigned char                                      MaxValue;                                                 
};


struct UKismetMathLibrary_Max_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_MapRangeUnclamped_Params
{
	float                                              Value;                                                    
	float                                              InRangeA;                                                 
	float                                              InRangeB;                                                 
	float                                              OutRangeA;                                                
	float                                              OutRangeB;                                                
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_MapRangeClamped_Params
{
	float                                              Value;                                                    
	float                                              InRangeA;                                                 
	float                                              InRangeB;                                                 
	float                                              OutRangeA;                                                
	float                                              OutRangeB;                                                
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_MakeVector2D_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_MakeVector_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_MakeTransform_Params
{
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_MakeTimespan2_Params
{
	int                                                Days;                                                     
	int                                                hours;                                                    
	int                                                Minutes;                                                  
	int                                                Seconds;                                                  
	int                                                FractionNano;                                             
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_MakeTimespan_Params
{
	int                                                Days;                                                     
	int                                                hours;                                                    
	int                                                Minutes;                                                  
	int                                                Seconds;                                                  
	int                                                Milliseconds;                                             
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromZY_Params
{
	struct FVector                                     Z;                                                        
	struct FVector                                     Y;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromZX_Params
{
	struct FVector                                     Z;                                                        
	struct FVector                                     X;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromZ_Params
{
	struct FVector                                     Z;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromYZ_Params
{
	struct FVector                                     Y;                                                        
	struct FVector                                     Z;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromYX_Params
{
	struct FVector                                     Y;                                                        
	struct FVector                                     X;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromY_Params
{
	struct FVector                                     Y;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromXZ_Params
{
	struct FVector                                     X;                                                        
	struct FVector                                     Z;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromXY_Params
{
	struct FVector                                     X;                                                        
	struct FVector                                     Y;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotFromX_Params
{
	struct FVector                                     X;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotator_Params
{
	float                                              Roll;                                                     
	float                                              Pitch;                                                    
	float                                              Yaw;                                                      
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRotationFromAxes_Params
{
	struct FVector                                     Forward;                                                  
	struct FVector                                     Right;                                                    
	struct FVector                                     Up;                                                       
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_MakeRandomStream_Params
{
	int                                                InitialSeed;                                              
	struct FRandomStream                               ReturnValue;                                              
};


struct UKismetMathLibrary_MakePulsatingValue_Params
{
	float                                              InCurrentTime;                                            
	float                                              InPulsesPerSecond;                                        
	float                                              InPhase;                                                  
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_MakePlaneFromPointAndNormal_Params
{
	struct FVector                                     Point;                                                    
	struct FVector                                     Normal;                                                   
	struct FPlane                                      ReturnValue;                                              
};


struct UKismetMathLibrary_MakeDateTime_Params
{
	int                                                Year;                                                     
	int                                                Month;                                                    
	int                                                Day;                                                      
	int                                                Hour;                                                     
	int                                                Minute;                                                   
	int                                                Second;                                                   
	int                                                Millisecond;                                              
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_MakeColor_Params
{
	float                                              R;                                                        
	float                                              G;                                                        
	float                                              B;                                                        
	float                                              A;                                                        
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_MakeBox2D_Params
{
	struct FVector2D                                   Min;                                                      
	struct FVector2D                                   Max;                                                      
	struct FBox2D                                      ReturnValue;                                              
};


struct UKismetMathLibrary_MakeBox_Params
{
	struct FVector                                     Min;                                                      
	struct FVector                                     Max;                                                      
	struct FBox                                        ReturnValue;                                              
};


struct UKismetMathLibrary_Loge_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Log_Params
{
	float                                              A;                                                        
	float                                              Base;                                                     
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_LinePlaneIntersection_OriginNormal_Params
{
	struct FVector                                     LineStart;                                                
	struct FVector                                     LineEnd;                                                  
	struct FVector                                     PlaneOrigin;                                              
	struct FVector                                     PlaneNormal;                                              
	float                                              T;                                                        
	struct FVector                                     Intersection;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_LinePlaneIntersection_Params
{
	struct FVector                                     LineStart;                                                
	struct FVector                                     LineEnd;                                                  
	struct FPlane                                      APlane;                                                   
	float                                              T;                                                        
	struct FVector                                     Intersection;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_LinearColorLerpUsingHSV_Params
{
	struct FLinearColor                                A;                                                        
	struct FLinearColor                                B;                                                        
	float                                              Alpha;                                                    
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_LinearColorLerp_Params
{
	struct FLinearColor                                A;                                                        
	struct FLinearColor                                B;                                                        
	float                                              Alpha;                                                    
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_LessLess_VectorRotator_Params
{
	struct FVector                                     A;                                                        
	struct FRotator                                    B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_LessEqual_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_LessEqual_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_LessEqual_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_LessEqual_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        
	struct FDateTime                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_LessEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Less_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Less_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Less_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Less_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        
	struct FDateTime                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Less_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Lerp_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              Alpha;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_IsPointInBoxWithTransform_Params
{
	struct FVector                                     Point;                                                    
	struct FTransform                                  BoxWorldTransform;                                        
	struct FVector                                     BoxExtent;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_IsPointInBox_Params
{
	struct FVector                                     Point;                                                    
	struct FVector                                     BoxOrigin;                                                
	struct FVector                                     BoxExtent;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_IsMorning_Params
{
	struct FDateTime                                   A;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_IsLeapYear_Params
{
	int                                                Year;                                                     
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_IsAfternoon_Params
{
	struct FDateTime                                   A;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_InvertTransform_Params
{
	struct FTransform                                  T;                                                        
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_InverseTransformRotation_Params
{
	struct FTransform                                  T;                                                        
	struct FRotator                                    Rotation;                                                 
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_InverseTransformLocation_Params
{
	struct FTransform                                  T;                                                        
	struct FVector                                     Location;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_InverseTransformDirection_Params
{
	struct FTransform                                  T;                                                        
	struct FVector                                     Direction;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_InverseLerp_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              Value;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_InRange_IntInt_Params
{
	int                                                Value;                                                    
	int                                                Min;                                                      
	int                                                Max;                                                      
	bool                                               InclusiveMin;                                             
	bool                                               InclusiveMax;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_InRange_FloatFloat_Params
{
	float                                              Value;                                                    
	float                                              Min;                                                      
	float                                              Max;                                                      
	bool                                               InclusiveMin;                                             
	bool                                               InclusiveMax;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Hypotenuse_Params
{
	float                                              Width;                                                    
	float                                              Height;                                                   
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_HSVToRGB_Vector_Params
{
	struct FLinearColor                                HSV;                                                      
	struct FLinearColor                                RGB;                                                      
};


struct UKismetMathLibrary_HSVToRGB_Params
{
	float                                              H;                                                        
	float                                              S;                                                        
	float                                              V;                                                        
	float                                              A;                                                        
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_GridSnap_Float_Params
{
	float                                              Location;                                                 
	float                                              GridSize;                                                 
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GreaterGreater_VectorRotator_Params
{
	struct FVector                                     A;                                                        
	struct FRotator                                    B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_GreaterEqual_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_GreaterEqual_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_GreaterEqual_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_GreaterEqual_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        
	struct FDateTime                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_GreaterEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Greater_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Greater_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Greater_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Greater_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        
	struct FDateTime                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Greater_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_GetYear_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetYawPitchFromVector_Params
{
	struct FVector                                     InVec;                                                    
	float                                              Yaw;                                                      
	float                                              Pitch;                                                    
};


struct UKismetMathLibrary_GetVectorArrayAverage_Params
{
	TArray<struct FVector>                             Vectors;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_GetUpVector_Params
{
	struct FRotator                                    InRot;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_GetTotalSeconds_Params
{
	struct FTimespan                                   A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetTotalMinutes_Params
{
	struct FTimespan                                   A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetTotalMilliseconds_Params
{
	struct FTimespan                                   A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetTotalHours_Params
{
	struct FTimespan                                   A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetTotalDays_Params
{
	struct FTimespan                                   A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetTimeOfDay_Params
{
	struct FDateTime                                   A;                                                        
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_GetTAU_Params
{
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetSeconds_Params
{
	struct FTimespan                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetSecond_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetRightVector_Params
{
	struct FRotator                                    InRot;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_GetReflectionVector_Params
{
	struct FVector                                     Direction;                                                
	struct FVector                                     SurfaceNormal;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_GetPointDistanceToSegment_Params
{
	struct FVector                                     Point;                                                    
	struct FVector                                     SegmentStart;                                             
	struct FVector                                     SegmentEnd;                                               
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetPointDistanceToLine_Params
{
	struct FVector                                     Point;                                                    
	struct FVector                                     LineOrigin;                                               
	struct FVector                                     LineDirection;                                            
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetPI_Params
{
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetMonth_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetMinutes_Params
{
	struct FTimespan                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetMinute_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetMinElement_Params
{
	struct FVector                                     A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetMilliseconds_Params
{
	struct FTimespan                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetMillisecond_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetMaxElement_Params
{
	struct FVector                                     A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_GetHours_Params
{
	struct FTimespan                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetHour12_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetHour_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetForwardVector_Params
{
	struct FRotator                                    InRot;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_GetDuration_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_GetDirectionUnitVector_Params
{
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_GetDays_Params
{
	struct FTimespan                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetDayOfYear_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetDay_Params
{
	struct FDateTime                                   A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_GetDate_Params
{
	struct FDateTime                                   A;                                                        
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_GetAzimuthAndElevation_Params
{
	struct FVector                                     InDirection;                                              
	struct FTransform                                  ReferenceFrame;                                           
	float                                              Azimuth;                                                  
	float                                              Elevation;                                                
};


struct UKismetMathLibrary_GetAxes_Params
{
	struct FRotator                                    A;                                                        
	struct FVector                                     X;                                                        
	struct FVector                                     Y;                                                        
	struct FVector                                     Z;                                                        
};


struct UKismetMathLibrary_FTruncVector_Params
{
	struct FVector                                     InVector;                                                 
	struct FIntVector                                  ReturnValue;                                              
};


struct UKismetMathLibrary_FTrunc_Params
{
	float                                              A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_FromSeconds_Params
{
	float                                              Seconds;                                                  
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_FromMinutes_Params
{
	float                                              Minutes;                                                  
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_FromMilliseconds_Params
{
	float                                              Milliseconds;                                             
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_FromHours_Params
{
	float                                              hours;                                                    
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_FromDays_Params
{
	float                                              Days;                                                     
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Fraction_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FMod_Params
{
	float                                              Dividend;                                                 
	float                                              Divisor;                                                  
	float                                              Remainder;                                                
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_FMin_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FMax_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FloatSpringInterp_Params
{
	float                                              Current;                                                  
	float                                              Target;                                                   
	struct FFloatSpringState                           SpringState;                                              
	float                                              Stiffness;                                                
	float                                              CriticalDampingFactor;                                    
	float                                              DeltaTime;                                                
	float                                              Mass;                                                     
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FixedTurn_Params
{
	float                                              InCurrent;                                                
	float                                              InDesired;                                                
	float                                              InDeltaRate;                                              
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FInterpTo_Constant_Params
{
	float                                              Current;                                                  
	float                                              Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FInterpTo_Params
{
	float                                              Current;                                                  
	float                                              Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FInterpEaseInOut_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              Alpha;                                                    
	float                                              Exponent;                                                 
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FindNearestPointsOnLineSegments_Params
{
	struct FVector                                     Segment1Start;                                            
	struct FVector                                     Segment1End;                                              
	struct FVector                                     Segment2Start;                                            
	struct FVector                                     Segment2End;                                              
	struct FVector                                     Segment1Point;                                            
	struct FVector                                     Segment2Point;                                            
};


struct UKismetMathLibrary_FindLookAtRotation_Params
{
	struct FVector                                     Start;                                                    
	struct FVector                                     Target;                                                   
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_FindClosestPointOnSegment_Params
{
	struct FVector                                     Point;                                                    
	struct FVector                                     SegmentStart;                                             
	struct FVector                                     SegmentEnd;                                               
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_FindClosestPointOnLine_Params
{
	struct FVector                                     Point;                                                    
	struct FVector                                     LineOrigin;                                               
	struct FVector                                     LineDirection;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_FFloor_Params
{
	float                                              A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_FClamp_Params
{
	float                                              Value;                                                    
	float                                              Min;                                                      
	float                                              Max;                                                      
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_FCeil_Params
{
	float                                              A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Exp_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	float                                              ErrorTolerance;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   B;                                                        
	float                                              ErrorTolerance;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_TransformTransform_Params
{
	struct FTransform                                  A;                                                        
	struct FTransform                                  B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        
	struct FRotator                                    B;                                                        
	float                                              ErrorTolerance;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        
	class UObject*                                     B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_NameName_Params
{
	struct FName                                       A;                                                        
	struct FName                                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_DateTimeDateTime_Params
{
	struct FDateTime                                   A;                                                        
	struct FDateTime                                   B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_ClassClass_Params
{
	class UClass*                                      A;                                                        
	class UClass*                                      B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_EqualEqual_BoolBool_Params
{
	bool                                               A;                                                        
	bool                                               B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Ease_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              Alpha;                                                    
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               
	float                                              BlendExp;                                                 
	int                                                Steps;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DotProduct2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Dot_VectorVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_VectorVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_VectorInt_Params
{
	struct FVector                                     A;                                                        
	int                                                B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_VectorFloat_Params
{
	struct FVector                                     A;                                                        
	float                                              B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   B;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        
	float                                              B;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_TimespanFloat_Params
{
	struct FTimespan                                   A;                                                        
	float                                              Scalar;                                                   
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Divide_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_DegTan_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DegSin_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DegreesToRadians_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DegCos_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DegAtan2_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DegAtan_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DegAsin_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DegAcos_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_DaysInYear_Params
{
	int                                                Year;                                                     
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_DaysInMonth_Params
{
	int                                                Year;                                                     
	int                                                Month;                                                    
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_DateTimeMinValue_Params
{
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_DateTimeMaxValue_Params
{
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_DateTimeFromString_Params
{
	struct FString                                     DateTimeString;                                           
	struct FDateTime                                   Result;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_DateTimeFromIsoString_Params
{
	struct FString                                     IsoString;                                                
	struct FDateTime                                   Result;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_CrossProduct2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Cross_VectorVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_CreateVectorFromYawPitch_Params
{
	float                                              Yaw;                                                      
	float                                              Pitch;                                                    
	float                                              Length;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Cos_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_ConvertTransformToRelative_Params
{
	struct FTransform                                  Transform;                                                
	struct FTransform                                  ParentTransform;                                          
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_VectorToVector2D_Params
{
	struct FVector                                     InVector;                                                 
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_VectorToTransform_Params
{
	struct FVector                                     InLocation;                                               
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_VectorToRotator_Params
{
	struct FVector                                     InVec;                                                    
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_VectorToLinearColor_Params
{
	struct FVector                                     InVec;                                                    
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_Vector2DToVector_Params
{
	struct FVector2D                                   InVector2D;                                               
	float                                              Z;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_RotatorToVector_Params
{
	struct FRotator                                    InRot;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_LinearColorToVector_Params
{
	struct FLinearColor                                InLinearColor;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_LinearColorToColor_Params
{
	struct FLinearColor                                InLinearColor;                                            
	struct FColor                                      ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_IntVectorToVector_Params
{
	struct FIntVector                                  InIntVector;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_IntToIntVector_Params
{
	int                                                inInt;                                                    
	struct FIntVector                                  ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_IntToFloat_Params
{
	int                                                inInt;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_IntToByte_Params
{
	int                                                inInt;                                                    
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_IntToBool_Params
{
	int                                                inInt;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_FloatToVector_Params
{
	float                                              InFloat;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_FloatToLinearColor_Params
{
	float                                              InFloat;                                                  
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_ColorToLinearColor_Params
{
	struct FColor                                      InColor;                                                  
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_ByteToInt_Params
{
	unsigned char                                      InByte;                                                   
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_ByteToFloat_Params
{
	unsigned char                                      InByte;                                                   
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_BoolToInt_Params
{
	bool                                               InBool;                                                   
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_BoolToFloat_Params
{
	bool                                               InBool;                                                   
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Conv_BoolToByte_Params
{
	bool                                               InBool;                                                   
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_ComposeTransforms_Params
{
	struct FTransform                                  A;                                                        
	struct FTransform                                  B;                                                        
	struct FTransform                                  ReturnValue;                                              
};


struct UKismetMathLibrary_ComposeRotators_Params
{
	struct FRotator                                    A;                                                        
	struct FRotator                                    B;                                                        
	struct FRotator                                    ReturnValue;                                              
};


struct UKismetMathLibrary_ClassIsChildOf_Params
{
	class UClass*                                      TestClass;                                                
	class UClass*                                      ParentClass;                                              
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_ClampVectorSize_Params
{
	struct FVector                                     A;                                                        
	float                                              Min;                                                      
	float                                              Max;                                                      
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_ClampAxis_Params
{
	float                                              Angle;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_ClampAngle_Params
{
	float                                              AngleDegrees;                                             
	float                                              MinAngleDegrees;                                          
	float                                              MaxAngleDegrees;                                          
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Clamp_Params
{
	int                                                Value;                                                    
	int                                                Min;                                                      
	int                                                Max;                                                      
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_CInterpTo_Params
{
	struct FLinearColor                                Current;                                                  
	struct FLinearColor                                Target;                                                   
	float                                              DeltaTime;                                                
	float                                              InterpSpeed;                                              
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetMathLibrary_BreakVector2D_Params
{
	struct FVector2D                                   InVec;                                                    
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct UKismetMathLibrary_BreakVector_Params
{
	struct FVector                                     InVec;                                                    
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UKismetMathLibrary_BreakTransform_Params
{
	struct FTransform                                  InTransform;                                              
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
};


struct UKismetMathLibrary_BreakTimespan2_Params
{
	struct FTimespan                                   InTimespan;                                               
	int                                                Days;                                                     
	int                                                hours;                                                    
	int                                                Minutes;                                                  
	int                                                Seconds;                                                  
	int                                                FractionNano;                                             
};


struct UKismetMathLibrary_BreakTimespan_Params
{
	struct FTimespan                                   InTimespan;                                               
	int                                                Days;                                                     
	int                                                hours;                                                    
	int                                                Minutes;                                                  
	int                                                Seconds;                                                  
	int                                                Milliseconds;                                             
};


struct UKismetMathLibrary_BreakRotIntoAxes_Params
{
	struct FRotator                                    InRot;                                                    
	struct FVector                                     X;                                                        
	struct FVector                                     Y;                                                        
	struct FVector                                     Z;                                                        
};


struct UKismetMathLibrary_BreakRotator_Params
{
	struct FRotator                                    InRot;                                                    
	float                                              Roll;                                                     
	float                                              Pitch;                                                    
	float                                              Yaw;                                                      
};


struct UKismetMathLibrary_BreakRandomStream_Params
{
	struct FRandomStream                               InRandomStream;                                           
	int                                                InitialSeed;                                              
};


struct UKismetMathLibrary_BreakDateTime_Params
{
	struct FDateTime                                   InDateTime;                                               
	int                                                Year;                                                     
	int                                                Month;                                                    
	int                                                Day;                                                      
	int                                                Hour;                                                     
	int                                                Minute;                                                   
	int                                                Second;                                                   
	int                                                Millisecond;                                              
};


struct UKismetMathLibrary_BreakColor_Params
{
	struct FLinearColor                                InColor;                                                  
	float                                              R;                                                        
	float                                              G;                                                        
	float                                              B;                                                        
	float                                              A;                                                        
};


struct UKismetMathLibrary_BooleanXOR_Params
{
	bool                                               A;                                                        
	bool                                               B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_BooleanOR_Params
{
	bool                                               A;                                                        
	bool                                               B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_BooleanNOR_Params
{
	bool                                               A;                                                        
	bool                                               B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_BooleanNAND_Params
{
	bool                                               A;                                                        
	bool                                               B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_BooleanAND_Params
{
	bool                                               A;                                                        
	bool                                               B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetMathLibrary_BMin_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_BMax_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_Atan2_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Atan_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Asin_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_And_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Add_VectorVector_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Add_VectorInt_Params
{
	struct FVector                                     A;                                                        
	int                                                B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Add_VectorFloat_Params
{
	struct FVector                                     A;                                                        
	float                                              B;                                                        
	struct FVector                                     ReturnValue;                                              
};


struct UKismetMathLibrary_Add_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        
	struct FVector2D                                   B;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Add_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        
	float                                              B;                                                        
	struct FVector2D                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Add_TimespanTimespan_Params
{
	struct FTimespan                                   A;                                                        
	struct FTimespan                                   B;                                                        
	struct FTimespan                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Add_IntInt_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Add_FloatFloat_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Add_DateTimeTimespan_Params
{
	struct FDateTime                                   A;                                                        
	struct FTimespan                                   B;                                                        
	struct FDateTime                                   ReturnValue;                                              
};


struct UKismetMathLibrary_Add_ByteByte_Params
{
	unsigned char                                      A;                                                        
	unsigned char                                      B;                                                        
	unsigned char                                      ReturnValue;                                              
};


struct UKismetMathLibrary_Acos_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetMathLibrary_Abs_Int_Params
{
	int                                                A;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetMathLibrary_Abs_Params
{
	float                                              A;                                                        
	float                                              ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_MarkBit_Params
{
	int                                                Data;                                                     
	int                                                Index;                                                    
};


struct UKismetNodeHelperLibrary_HasUnmarkedBit_Params
{
	int                                                Data;                                                     
	int                                                NumBits;                                                  
	bool                                               ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_HasMarkedBit_Params
{
	int                                                Data;                                                     
	int                                                NumBits;                                                  
	bool                                               ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_GetValidValue_Params
{
	class UEnum*                                       Enum;                                                     
	unsigned char                                      EnumeratorValue;                                          
	unsigned char                                      ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_GetUnmarkedBit_Params
{
	int                                                Data;                                                     
	int                                                StartIdx;                                                 
	int                                                NumBits;                                                  
	bool                                               bRandom;                                                  
	int                                                ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Params
{
	int                                                Data;                                                     
	int                                                StartIdx;                                                 
	int                                                NumBits;                                                  
	int                                                ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Params
{
	int                                                Data;                                                     
	int                                                StartIdx;                                                 
	int                                                NumBits;                                                  
	int                                                ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Params
{
	class UEnum*                                       Enum;                                                     
	unsigned char                                      EnumeratorIndex;                                          
	unsigned char                                      ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Params
{
	class UEnum*                                       Enum;                                                     
	unsigned char                                      EnumeratorValue;                                          
	struct FString                                     ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_GetEnumeratorName_Params
{
	class UEnum*                                       Enum;                                                     
	unsigned char                                      EnumeratorValue;                                          
	struct FName                                       ReturnValue;                                              
};


struct UKismetNodeHelperLibrary_ClearBit_Params
{
	int                                                Data;                                                     
	int                                                Index;                                                    
};


struct UKismetNodeHelperLibrary_ClearAllBits_Params
{
	int                                                Data;                                                     
};


struct UKismetNodeHelperLibrary_BitIsMarked_Params
{
	int                                                Data;                                                     
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	struct FString                                     Name;                                                     
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      
	TEnumAsByte<ETextureMipGenSettings>                MipSettings;                                              
	class UTexture2D*                                  ReturnValue;                                              
};


struct UKismetRenderingLibrary_ReleaseRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      TextureRenderTarget;                                      
};


struct UKismetRenderingLibrary_ReadRenderTargetRawUV_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTextureRenderTarget2D*                      TextureRenderTarget;                                      
	float                                              U;                                                        
	float                                              V;                                                        
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetRenderingLibrary_ReadRenderTargetRawPixel_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTextureRenderTarget2D*                      TextureRenderTarget;                                      
	int                                                X;                                                        
	int                                                Y;                                                        
	struct FLinearColor                                ReturnValue;                                              
};


struct UKismetRenderingLibrary_MakeSkinWeightInfo_Params
{
	int                                                Bone0;                                                    
	unsigned char                                      Weight0;                                                  
	int                                                Bone1;                                                    
	unsigned char                                      Weight1;                                                  
	int                                                Bone2;                                                    
	unsigned char                                      Weight2;                                                  
	int                                                Bone3;                                                    
	unsigned char                                      Weight3;                                                  
	struct FSkelMeshSkinWeightInfo                     ReturnValue;                                              
};


struct UKismetRenderingLibrary_ExportTexture2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTexture2D*                                  Texture;                                                  
	struct FString                                     FilePath;                                                 
	struct FString                                     Filename;                                                 
};


struct UKismetRenderingLibrary_ExportRenderTarget_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTextureRenderTarget2D*                      TextureRenderTarget;                                      
	struct FString                                     FilePath;                                                 
	struct FString                                     Filename;                                                 
};


struct UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FDrawToRenderTargetContext                  Context;                                                  
};


struct UKismetRenderingLibrary_DrawMaterialToRenderTarget_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTextureRenderTarget2D*                      TextureRenderTarget;                                      
	class UMaterialInterface*                          Material;                                                 
};


struct UKismetRenderingLibrary_CreateRenderTarget2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                Width;                                                    
	int                                                Height;                                                   
	TEnumAsByte<ETextureRenderTargetFormat>            Format;                                                   
	class UTextureRenderTarget2D*                      ReturnValue;                                              
};


struct UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	class UTexture2D*                                  Texture;                                                  
};


struct UKismetRenderingLibrary_ClearRenderTarget2D_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTextureRenderTarget2D*                      TextureRenderTarget;                                      
	struct FLinearColor                                ClearColor;                                               
};


struct UKismetRenderingLibrary_BreakSkinWeightInfo_Params
{
	struct FSkelMeshSkinWeightInfo                     InWeight;                                                 
	int                                                Bone0;                                                    
	unsigned char                                      Weight0;                                                  
	int                                                Bone1;                                                    
	unsigned char                                      Weight1;                                                  
	int                                                Bone2;                                                    
	unsigned char                                      Weight2;                                                  
	int                                                Bone3;                                                    
	unsigned char                                      Weight3;                                                  
};


struct UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UTextureRenderTarget2D*                      TextureRenderTarget;                                      
	class UCanvas*                                     Canvas;                                                   
	struct FVector2D                                   Size;                                                     
	struct FDrawToRenderTargetContext                  Context;                                                  
};


struct UKismetStringLibrary_TrimTrailing_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Trim_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_ToUpper_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_ToLower_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_TimeSecondsToString_Params
{
	float                                              InSeconds;                                                
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_StartsWith_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     InPrefix;                                                 
	TEnumAsByte<ESearchCase>                           SearchCase;                                               
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_Split_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     InStr;                                                    
	struct FString                                     LeftS;                                                    
	struct FString                                     RightS;                                                   
	TEnumAsByte<ESearchCase>                           SearchCase;                                               
	TEnumAsByte<ESearchDir>                            SearchDir;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_RightPad_Params
{
	struct FString                                     sourceString;                                             
	int                                                ChCount;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_RightChop_Params
{
	struct FString                                     sourceString;                                             
	int                                                Count;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Right_Params
{
	struct FString                                     sourceString;                                             
	int                                                Count;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Reverse_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_ReplaceInline_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     SearchText;                                               
	struct FString                                     ReplacementText;                                          
	TEnumAsByte<ESearchCase>                           SearchCase;                                               
	int                                                ReturnValue;                                              
};


struct UKismetStringLibrary_Replace_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     From;                                                     
	struct FString                                     To;                                                       
	TEnumAsByte<ESearchCase>                           SearchCase;                                               
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_ParseIntoArray_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     Delimiter;                                                
	bool                                               CullEmptyStrings;                                         
	TArray<struct FString>                             ReturnValue;                                              
};


struct UKismetStringLibrary_NotEqual_StrStr_Params
{
	struct FString                                     A;                                                        
	struct FString                                     B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_NotEqual_StriStri_Params
{
	struct FString                                     A;                                                        
	struct FString                                     B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_Mid_Params
{
	struct FString                                     sourceString;                                             
	int                                                Start;                                                    
	int                                                Count;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_MatchesWildcard_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     Wildcard;                                                 
	TEnumAsByte<ESearchCase>                           SearchCase;                                               
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_Len_Params
{
	struct FString                                     S;                                                        
	int                                                ReturnValue;                                              
};


struct UKismetStringLibrary_LeftPad_Params
{
	struct FString                                     sourceString;                                             
	int                                                ChCount;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_LeftChop_Params
{
	struct FString                                     sourceString;                                             
	int                                                Count;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Left_Params
{
	struct FString                                     sourceString;                                             
	int                                                Count;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_JoinStringArray_Params
{
	TArray<struct FString>                             SourceArray;                                              
	struct FString                                     Separator;                                                
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_IsNumeric_Params
{
	struct FString                                     sourceString;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_GetSubstring_Params
{
	struct FString                                     sourceString;                                             
	int                                                StartIndex;                                               
	int                                                Length;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_GetCharacterAsNumber_Params
{
	struct FString                                     sourceString;                                             
	int                                                Index;                                                    
	int                                                ReturnValue;                                              
};


struct UKismetStringLibrary_GetCharacterArrayFromString_Params
{
	struct FString                                     sourceString;                                             
	TArray<struct FString>                             ReturnValue;                                              
};


struct UKismetStringLibrary_FindSubstring_Params
{
	struct FString                                     SearchIn;                                                 
	struct FString                                     Substring;                                                
	bool                                               bUseCase;                                                 
	bool                                               bSearchFromEnd;                                           
	int                                                StartPosition;                                            
	int                                                ReturnValue;                                              
};


struct UKismetStringLibrary_EqualEqual_StrStr_Params
{
	struct FString                                     A;                                                        
	struct FString                                     B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_EqualEqual_StriStri_Params
{
	struct FString                                     A;                                                        
	struct FString                                     B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_EndsWith_Params
{
	struct FString                                     sourceString;                                             
	struct FString                                     InSuffix;                                                 
	TEnumAsByte<ESearchCase>                           SearchCase;                                               
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_CullArray_Params
{
	struct FString                                     sourceString;                                             
	TArray<struct FString>                             inArray;                                                  
	int                                                ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_VectorToString_Params
{
	struct FVector                                     InVec;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_Vector2dToString_Params
{
	struct FVector2D                                   InVec;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_TransformToString_Params
{
	struct FTransform                                  InTrans;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_StringToVector2D_Params
{
	struct FString                                     inString;                                                 
	struct FVector2D                                   OutConvertedVector2D;                                     
	bool                                               OutIsValid;                                               
};


struct UKismetStringLibrary_Conv_StringToVector_Params
{
	struct FString                                     inString;                                                 
	struct FVector                                     OutConvertedVector;                                       
	bool                                               OutIsValid;                                               
};


struct UKismetStringLibrary_Conv_StringToRotator_Params
{
	struct FString                                     inString;                                                 
	struct FRotator                                    OutConvertedRotator;                                      
	bool                                               OutIsValid;                                               
};


struct UKismetStringLibrary_Conv_StringToName_Params
{
	struct FString                                     inString;                                                 
	struct FName                                       ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_StringToInt_Params
{
	struct FString                                     inString;                                                 
	int                                                ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_StringToFloat_Params
{
	struct FString                                     inString;                                                 
	float                                              ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_StringToColor_Params
{
	struct FString                                     inString;                                                 
	struct FLinearColor                                OutConvertedColor;                                        
	bool                                               OutIsValid;                                               
};


struct UKismetStringLibrary_Conv_RotatorToString_Params
{
	struct FRotator                                    InRot;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_ObjectToString_Params
{
	class UObject*                                     InObj;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_NameToString_Params
{
	struct FName                                       InName;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_IntVectorToString_Params
{
	struct FIntVector                                  InIntVec;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_IntToString_Params
{
	int                                                inInt;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_FloatToString_Params
{
	float                                              InFloat;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_ColorToString_Params
{
	struct FLinearColor                                InColor;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_ByteToString_Params
{
	unsigned char                                      InByte;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Conv_BoolToString_Params
{
	bool                                               InBool;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_Contains_Params
{
	struct FString                                     SearchIn;                                                 
	struct FString                                     Substring;                                                
	bool                                               bUseCase;                                                 
	bool                                               bSearchFromEnd;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetStringLibrary_Concat_StrStr_Params
{
	struct FString                                     A;                                                        
	struct FString                                     B;                                                        
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Vector2d_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	struct FVector2D                                   InVector2D;                                               
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Vector_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	struct FVector                                     InVector;                                                 
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Rotator_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	struct FRotator                                    InRot;                                                    
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Object_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	class UObject*                                     InObj;                                                    
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Name_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	struct FName                                       InName;                                                   
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_IntVector_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	struct FIntVector                                  InIntVector;                                              
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Int_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	int                                                inInt;                                                    
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Float_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	float                                              InFloat;                                                  
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Color_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	struct FLinearColor                                InColor;                                                  
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringLibrary_BuildString_Bool_Params
{
	struct FString                                     AppendTo;                                                 
	struct FString                                     Prefix;                                                   
	bool                                               InBool;                                                   
	struct FString                                     Suffix;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringTableLibrary_IsRegisteredTableId_Params
{
	struct FName                                       TableId;                                                  
	bool                                               ReturnValue;                                              
};


struct UKismetStringTableLibrary_IsRegisteredTableEntry_Params
{
	struct FName                                       TableId;                                                  
	struct FString                                     Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UKismetStringTableLibrary_GetTableNamespace_Params
{
	struct FName                                       TableId;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringTableLibrary_GetTableEntrySourceString_Params
{
	struct FName                                       TableId;                                                  
	struct FString                                     Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringTableLibrary_GetTableEntryMetaData_Params
{
	struct FName                                       TableId;                                                  
	struct FString                                     Key;                                                      
	struct FName                                       MetaDataId;                                               
	struct FString                                     ReturnValue;                                              
};


struct UKismetStringTableLibrary_GetRegisteredStringTables_Params
{
	TArray<struct FName>                               ReturnValue;                                              
};


struct UKismetStringTableLibrary_GetMetaDataIdsFromStringTableEntry_Params
{
	struct FName                                       TableId;                                                  
	struct FString                                     Key;                                                      
	TArray<struct FName>                               ReturnValue;                                              
};


struct UKismetStringTableLibrary_GetKeysFromStringTable_Params
{
	struct FName                                       TableId;                                                  
	TArray<struct FString>                             ReturnValue;                                              
};


struct UKismetSystemLibrary_UnregisterForRemoteNotifications_Params
{
};


struct UKismetSystemLibrary_UnloadPrimaryAssetList_Params
{
	TArray<struct FPrimaryAssetId>                     PrimaryAssetIdList;                                       
};


struct UKismetSystemLibrary_UnloadPrimaryAsset_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
};


struct UKismetSystemLibrary_StackTrace_Params
{
};


struct UKismetSystemLibrary_SphereTraceSingleForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_SphereTraceSingleByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	struct FName                                       ProfileName;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_SphereTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_SphereTraceMultiForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_SphereTraceMultiByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	struct FName                                       ProfileName;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_SphereTraceMulti_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_SphereOverlapComponents_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     SpherePos;                                                
	float                                              SphereRadius;                                             
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	class UClass*                                      ComponentClassFilter;                                     
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_SphereOverlapActors_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     SpherePos;                                                
	float                                              SphereRadius;                                             
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	class UClass*                                      ActorClassFilter;                                         
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class AActor*>                              OutActors;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_ShowPlatformSpecificLeaderboardScreen_Params
{
	struct FString                                     CategoryName;                                             
};


struct UKismetSystemLibrary_ShowPlatformSpecificAchievementsScreen_Params
{
	class APlayerController*                           SpecificPlayer;                                           
};


struct UKismetSystemLibrary_ShowInterstitialAd_Params
{
};


struct UKismetSystemLibrary_ShowAdBanner_Params
{
	int                                                AdIdIndex;                                                
	bool                                               bShowOnBottomOfScreen;                                    
};


struct UKismetSystemLibrary_SetWindowTitle_Params
{
	struct FText                                       Title;                                                    
};


struct UKismetSystemLibrary_SetVolumeButtonsHandledBySystem_Params
{
	bool                                               bEnabled;                                                 
};


struct UKismetSystemLibrary_SetVectorPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FVector                                     Value;                                                    
};


struct UKismetSystemLibrary_SetUserActivity_Params
{
	struct FUserActivity                               UserActivity;                                             
};


struct UKismetSystemLibrary_SetTransformPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FTransform                                  Value;                                                    
};


struct UKismetSystemLibrary_SetTextPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FText                                       Value;                                                    
};


struct UKismetSystemLibrary_SetSuppressViewportTransitionMessage_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               bState;                                                   
};


struct UKismetSystemLibrary_SetStructurePropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FGenericStruct                              Value;                                                    
};


struct UKismetSystemLibrary_SetStringPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FString                                     Value;                                                    
};


struct UKismetSystemLibrary_SetSoftObjectPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
};


struct UKismetSystemLibrary_SetSoftClassPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
};


struct UKismetSystemLibrary_SetRotatorPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FRotator                                    Value;                                                    
};


struct UKismetSystemLibrary_SetObjectPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	class UObject*                                     Value;                                                    
};


struct UKismetSystemLibrary_SetNamePropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FName                                       Value;                                                    
};


struct UKismetSystemLibrary_SetLinearColorPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FLinearColor                                Value;                                                    
};


struct UKismetSystemLibrary_SetIntPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	int                                                Value;                                                    
};


struct UKismetSystemLibrary_SetInterfacePropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	TScriptInterface<class UInterface>                 Value;                                                    
};


struct UKismetSystemLibrary_SetFloatPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	float                                              Value;                                                    
};


struct UKismetSystemLibrary_SetCollisionProfileNameProperty_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	struct FCollisionProfileName                       Value;                                                    
};


struct UKismetSystemLibrary_SetClassPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	class UClass*                                      Value;                                                    
};


struct UKismetSystemLibrary_SetBytePropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	unsigned char                                      Value;                                                    
};


struct UKismetSystemLibrary_SetBoolPropertyByName_Params
{
	class UObject*                                     Object;                                                   
	struct FName                                       PropertyName;                                             
	bool                                               Value;                                                    
};


struct UKismetSystemLibrary_RetriggerableDelay_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              Duration;                                                 
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct UKismetSystemLibrary_ResetGamepadAssignmentToController_Params
{
	int                                                ControllerId;                                             
};


struct UKismetSystemLibrary_ResetGamepadAssignments_Params
{
};


struct UKismetSystemLibrary_RegisterForRemoteNotifications_Params
{
};


struct UKismetSystemLibrary_RedirectSoftObjectPaths_Params
{
	TArray<struct FSoftObjectPath>                     Paths;                                                    
	TArray<struct FSoftObjectPath>                     ReturnValue;                                              
};


struct UKismetSystemLibrary_QuitGame_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           SpecificPlayer;                                           
	TEnumAsByte<EQuitPreference>                       QuitPreference;                                           
};


struct UKismetSystemLibrary_PrintWarning_Params
{
	struct FString                                     inString;                                                 
};


struct UKismetSystemLibrary_PrintText_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FText                                       InText;                                                   
	bool                                               bPrintToScreen;                                           
	bool                                               bPrintToLog;                                              
	struct FLinearColor                                TextColor;                                                
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_PrintString_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     inString;                                                 
	bool                                               bPrintToScreen;                                           
	bool                                               bPrintToLog;                                              
	struct FLinearColor                                TextColor;                                                
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_PrintShippingString_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     inString;                                                 
	bool                                               bPrintToScreen;                                           
	bool                                               bPrintToLog;                                              
	struct FLinearColor                                TextColor;                                                
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_OnAssetLoaded__DelegateSignature_Params
{
	class UObject*                                     Loaded;                                                   
};


struct UKismetSystemLibrary_OnAssetClassLoaded__DelegateSignature_Params
{
	class UClass*                                      Loaded;                                                   
};


struct UKismetSystemLibrary_NotEqual_SoftObjectReference_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_NotEqual_SoftClassReference_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_NotEqual_PrimaryAssetType_Params
{
	struct FPrimaryAssetType                           A;                                                        
	struct FPrimaryAssetType                           B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_NotEqual_PrimaryAssetId_Params
{
	struct FPrimaryAssetId                             A;                                                        
	struct FPrimaryAssetId                             B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_MoveComponentTo_Params
{
	class USceneComponent*                             Component;                                                
	struct FVector                                     TargetRelativeLocation;                                   
	struct FRotator                                    TargetRelativeRotation;                                   
	bool                                               bEaseOut;                                                 
	bool                                               bEaseIn;                                                  
	float                                              OverTime;                                                 
	bool                                               bForceShortestRotationPath;                               
	TEnumAsByte<EMoveComponentAction>                  MoveAction;                                               
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct UKismetSystemLibrary_MakeSoftObjectPath_Params
{
	struct FString                                     PathString;                                               
	struct FSoftObjectPath                             ReturnValue;                                              
};


struct UKismetSystemLibrary_MakeLiteralText_Params
{
	struct FText                                       Value;                                                    
	struct FText                                       ReturnValue;                                              
};


struct UKismetSystemLibrary_MakeLiteralString_Params
{
	struct FString                                     Value;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_MakeLiteralName_Params
{
	struct FName                                       Value;                                                    
	struct FName                                       ReturnValue;                                              
};


struct UKismetSystemLibrary_MakeLiteralInt_Params
{
	int                                                Value;                                                    
	int                                                ReturnValue;                                              
};


struct UKismetSystemLibrary_MakeLiteralFloat_Params
{
	float                                              Value;                                                    
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_MakeLiteralByte_Params
{
	unsigned char                                      Value;                                                    
	unsigned char                                      ReturnValue;                                              
};


struct UKismetSystemLibrary_MakeLiteralBool_Params
{
	bool                                               Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_LoadInterstitialAd_Params
{
	int                                                AdIdIndex;                                                
};


struct UKismetSystemLibrary_LoadAssetClass_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FScriptDelegate                             OnLoaded;                                                 
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct UKismetSystemLibrary_LoadAsset_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FScriptDelegate                             OnLoaded;                                                 
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct UKismetSystemLibrary_LineTraceSingleForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_LineTraceSingleByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FName                                       ProfileName;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_LineTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_LineTraceMultiForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_LineTraceMultiByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FName                                       ProfileName;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_LineTraceMulti_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_LaunchUrl_Params
{
	struct FString                                     URL;                                                      
};


struct UKismetSystemLibrary_K2_UnPauseTimerHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
};


struct UKismetSystemLibrary_K2_UnPauseTimerDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
};


struct UKismetSystemLibrary_K2_UnPauseTimer_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
};


struct UKismetSystemLibrary_K2_TimerExistsHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_TimerExistsDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_TimerExists_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_SetTimerDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
	float                                              Time;                                                     
	bool                                               bLooping;                                                 
	struct FTimerHandle                                ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_SetTimer_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
	float                                              Time;                                                     
	bool                                               bLooping;                                                 
	struct FTimerHandle                                ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_PauseTimerHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
};


struct UKismetSystemLibrary_K2_PauseTimerDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
};


struct UKismetSystemLibrary_K2_PauseTimer_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
};


struct UKismetSystemLibrary_K2_IsValidTimerHandle_Params
{
	struct FTimerHandle                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_IsTimerPausedHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_IsTimerPausedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_IsTimerPaused_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_IsTimerActiveHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_IsTimerActiveDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_IsTimerActive_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_InvalidateTimerHandle_Params
{
	struct FTimerHandle                                Handle;                                                   
	struct FTimerHandle                                ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_GetTimerRemainingTimeHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_GetTimerRemainingTimeDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_GetTimerRemainingTime_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_GetTimerElapsedTimeHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_GetTimerElapsedTimeDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_GetTimerElapsedTime_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_K2_ClearTimerHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
};


struct UKismetSystemLibrary_K2_ClearTimerDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
};


struct UKismetSystemLibrary_K2_ClearTimer_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
};


struct UKismetSystemLibrary_K2_ClearAndInvalidateTimerHandle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTimerHandle                                Handle;                                                   
};


struct UKismetSystemLibrary_IsValidSoftObjectReference_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsValidSoftClassReference_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsValidPrimaryAssetType_Params
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsValidPrimaryAssetId_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsValidClass_Params
{
	class UClass*                                      Class;                                                    
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsValid_Params
{
	class UObject*                                     Object;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsStandalone_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsServer_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsPackagedForDistribution_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsLoggedIn_Params
{
	class APlayerController*                           SpecificPlayer;                                           
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsInterstitialAdRequested_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsInterstitialAdAvailable_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsDedicatedServer_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_IsControllerAssignedToGamepad_Params
{
	int                                                ControllerId;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_HideAdBanner_Params
{
};


struct UKismetSystemLibrary_GetVolumeButtonsHandledBySystem_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_GetUxCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetUniqueDeviceId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetSupportedFullscreenResolutions_Params
{
	TArray<struct FIntPoint>                           Resolutions;                                              
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_GetSoftObjectReferenceFromPrimaryAssetId_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
};


struct UKismetSystemLibrary_GetSoftClassReferenceFromPrimaryAssetId_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
};


struct UKismetSystemLibrary_GetRenderingMaterialQualityLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UKismetSystemLibrary_GetRenderingDetailMode_Params
{
	int                                                ReturnValue;                                              
};


struct UKismetSystemLibrary_GetRedirectedPackageName_Params
{
	struct FString                                     Path;                                                     
	bool                                               bInFilePath;                                              
	struct FName                                       ReturnValue;                                              
};


struct UKismetSystemLibrary_GetRedirectedFilePathString_Params
{
	struct FString                                     Path;                                                     
	bool                                               bInFilePath;                                              
	bool                                               bReplaceExt;                                              
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetRedirectedAssetPathString_Params
{
	struct FString                                     Path;                                                     
	bool                                               bInFilePath;                                              
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetPrimaryAssetsWithBundleState_Params
{
	TArray<struct FName>                               RequiredBundles;                                          
	TArray<struct FName>                               ExcludedBundles;                                          
	TArray<struct FPrimaryAssetType>                   ValidTypes;                                               
	bool                                               bForceCurrentState;                                       
	TArray<struct FPrimaryAssetId>                     OutPrimaryAssetIdList;                                    
};


struct UKismetSystemLibrary_GetPrimaryAssetIdList_Params
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         
	TArray<struct FPrimaryAssetId>                     OutPrimaryAssetIdList;                                    
};


struct UKismetSystemLibrary_GetPrimaryAssetIdFromSoftObjectReference_Params
{
	struct FPrimaryAssetId                             ReturnValue;                                              
};


struct UKismetSystemLibrary_GetPrimaryAssetIdFromSoftClassReference_Params
{
	struct FPrimaryAssetId                             ReturnValue;                                              
};


struct UKismetSystemLibrary_GetPrimaryAssetIdFromObject_Params
{
	class UObject*                                     Object;                                                   
	struct FPrimaryAssetId                             ReturnValue;                                              
};


struct UKismetSystemLibrary_GetPrimaryAssetIdFromClass_Params
{
	class UClass*                                      Class;                                                    
	struct FPrimaryAssetId                             ReturnValue;                                              
};


struct UKismetSystemLibrary_GetPreferredLanguages_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UKismetSystemLibrary_GetPlatformUserName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetPathName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetObjectName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetObjectFromPrimaryAssetId_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
	class UObject*                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetMinYResolutionForUI_Params
{
	int                                                ReturnValue;                                              
};


struct UKismetSystemLibrary_GetMinYResolutionFor3DView_Params
{
	int                                                ReturnValue;                                              
};


struct UKismetSystemLibrary_GetLocalCurrencySymbol_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetLocalCurrencyCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetGameTimeInSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_GetGameName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetGameBundleId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetEngineVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetDisplayName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetDeviceId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetDefaultLocale_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetDefaultLanguage_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetCurrentBundleState_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
	bool                                               bForceCurrentState;                                       
	TArray<struct FName>                               OutBundles;                                               
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_GetConvenientWindowedResolutions_Params
{
	TArray<struct FIntPoint>                           Resolutions;                                              
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_GetConsoleVariableValue_Params
{
	struct FString                                     VariableName;                                             
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetConsoleVariableIntValue_Params
{
	struct FString                                     VariableName;                                             
	int                                                ReturnValue;                                              
};


struct UKismetSystemLibrary_GetConsoleVariableFloatValue_Params
{
	struct FString                                     VariableName;                                             
	float                                              ReturnValue;                                              
};


struct UKismetSystemLibrary_GetConsoleVariableBoolValue_Params
{
	struct FString                                     VariableName;                                             
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_GetComponentBounds_Params
{
	class USceneComponent*                             Component;                                                
	struct FVector                                     Origin;                                                   
	struct FVector                                     BoxExtent;                                                
	float                                              SphereRadius;                                             
};


struct UKismetSystemLibrary_GetCommandLine_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetClassPathName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetClassName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetClassFromPrimaryAssetId_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
	class UClass*                                      ReturnValue;                                              
};


struct UKismetSystemLibrary_GetClassDisplayName_Params
{
	class UClass*                                      Class;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetBUoCode_Params
{
	TArray<struct FString>                             SxArray;                                                  
};


struct UKismetSystemLibrary_GetAUxCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_GetAUoCode_Params
{
	TArray<struct FString>                             SxArray;                                                  
};


struct UKismetSystemLibrary_GetAdIDCount_Params
{
	int                                                ReturnValue;                                              
};


struct UKismetSystemLibrary_GetActorListFromComponentList_Params
{
	TArray<class UPrimitiveComponent*>                 ComponentList;                                            
	class UClass*                                      ActorClassFilter;                                         
	TArray<class AActor*>                              OutActorList;                                             
};


struct UKismetSystemLibrary_GetActorBounds_Params
{
	class AActor*                                      Actor;                                                    
	struct FVector                                     Origin;                                                   
	struct FVector                                     BoxExtent;                                                
};


struct UKismetSystemLibrary_ForceCloseAdBanner_Params
{
};


struct UKismetSystemLibrary_FlushPersistentDebugLines_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UKismetSystemLibrary_FlushDebugStrings_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UKismetSystemLibrary_ExecuteConsoleCommand_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     Command;                                                  
	class APlayerController*                           SpecificPlayer;                                           
};


struct UKismetSystemLibrary_EqualEqual_SoftObjectReference_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_EqualEqual_SoftClassReference_Params
{
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_EqualEqual_PrimaryAssetType_Params
{
	struct FPrimaryAssetType                           A;                                                        
	struct FPrimaryAssetType                           B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_EqualEqual_PrimaryAssetId_Params
{
	struct FPrimaryAssetId                             A;                                                        
	struct FPrimaryAssetId                             B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_DrawDebugString_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     TextLocation;                                             
	struct FString                                     Text;                                                     
	class AActor*                                      TestBaseActor;                                            
	struct FLinearColor                                TextColor;                                                
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_DrawDebugSphere_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	int                                                Segments;                                                 
	struct FLinearColor                                LineColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugPoint_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Position;                                                 
	float                                              Size;                                                     
	struct FLinearColor                                PointColor;                                               
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_DrawDebugPlane_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FPlane                                      PlaneCoordinates;                                         
	struct FVector                                     Location;                                                 
	float                                              Size;                                                     
	struct FLinearColor                                PlaneColor;                                               
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_DrawDebugLine_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     LineStart;                                                
	struct FVector                                     LineEnd;                                                  
	struct FLinearColor                                LineColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugFrustum_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FTransform                                  FrustumTransform;                                         
	struct FLinearColor                                FrustumColor;                                             
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugFloatHistoryTransform_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FDebugFloatHistory                          FloatHistory;                                             
	struct FTransform                                  DrawTransform;                                            
	struct FVector2D                                   DrawSize;                                                 
	struct FLinearColor                                DrawColor;                                                
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_DrawDebugFloatHistoryLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FDebugFloatHistory                          FloatHistory;                                             
	struct FVector                                     DrawLocation;                                             
	struct FVector2D                                   DrawSize;                                                 
	struct FLinearColor                                DrawColor;                                                
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_DrawDebugCylinder_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	int                                                Segments;                                                 
	struct FLinearColor                                LineColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugCoordinateSystem_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     AxisLoc;                                                  
	struct FRotator                                    AxisRot;                                                  
	float                                              Scale;                                                    
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugConeInDegrees_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Origin;                                                   
	struct FVector                                     Direction;                                                
	float                                              Length;                                                   
	float                                              AngleWidth;                                               
	float                                              AngleHeight;                                              
	int                                                NumSides;                                                 
	struct FLinearColor                                LineColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugCone_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Origin;                                                   
	struct FVector                                     Direction;                                                
	float                                              Length;                                                   
	float                                              AngleWidth;                                               
	float                                              AngleHeight;                                              
	int                                                NumSides;                                                 
	struct FLinearColor                                LineColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugCircle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	int                                                NumSegments;                                              
	struct FLinearColor                                LineColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
	struct FVector                                     YAxis;                                                    
	struct FVector                                     ZAxis;                                                    
	bool                                               bDrawAxis;                                                
};


struct UKismetSystemLibrary_DrawDebugCapsule_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Center;                                                   
	float                                              HalfHeight;                                               
	float                                              Radius;                                                   
	struct FRotator                                    Rotation;                                                 
	struct FLinearColor                                LineColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugCamera_Params
{
	class ACameraActor*                                CameraActor;                                              
	struct FLinearColor                                CameraColor;                                              
	float                                              Duration;                                                 
};


struct UKismetSystemLibrary_DrawDebugBox_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Center;                                                   
	struct FVector                                     Extent;                                                   
	struct FLinearColor                                LineColor;                                                
	struct FRotator                                    Rotation;                                                 
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DrawDebugArrow_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     LineStart;                                                
	struct FVector                                     LineEnd;                                                  
	float                                              ArrowSize;                                                
	struct FLinearColor                                LineColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UKismetSystemLibrary_DoesImplementInterface_Params
{
	class UObject*                                     TestObject;                                               
	class UClass*                                      Interface;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_DelayForFrames_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                NumFrames;                                                
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct UKismetSystemLibrary_Delay_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              Duration;                                                 
	struct FLatentActionInfo                           LatentInfo;                                               
};


struct UKismetSystemLibrary_CreateCopyForUndoBuffer_Params
{
	class UObject*                                     ObjectToModify;                                           
};


struct UKismetSystemLibrary_Conv_SoftObjectReferenceToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_Conv_SoftObjectReferenceToObject_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_Conv_SoftClassReferenceToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_Conv_SoftClassReferenceToClass_Params
{
	class UClass*                                      ReturnValue;                                              
};


struct UKismetSystemLibrary_Conv_PrimaryAssetTypeToString_Params
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_Conv_PrimaryAssetIdToString_Params
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
	struct FString                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_Conv_ObjectToSoftObjectReference_Params
{
	class UObject*                                     Object;                                                   
};


struct UKismetSystemLibrary_Conv_InterfaceToObject_Params
{
	TScriptInterface<class UInterface>                 Interface;                                                
	class UObject*                                     ReturnValue;                                              
};


struct UKismetSystemLibrary_Conv_ClassToSoftClassReference_Params
{
	class UClass*                                      Class;                                                    
};


struct UKismetSystemLibrary_ControlScreensaver_Params
{
	bool                                               bAllowScreenSaver;                                        
};


struct UKismetSystemLibrary_ComponentOverlapComponents_Params
{
	class UPrimitiveComponent*                         Component;                                                
	struct FTransform                                  ComponentTransform;                                       
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	class UClass*                                      ComponentClassFilter;                                     
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_ComponentOverlapActors_Params
{
	class UPrimitiveComponent*                         Component;                                                
	struct FTransform                                  ComponentTransform;                                       
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	class UClass*                                      ActorClassFilter;                                         
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class AActor*>                              OutActors;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CollectGarbage_Params
{
};


struct UKismetSystemLibrary_ClearPkgRedirectMap_Params
{
};


struct UKismetSystemLibrary_CapsuleTraceSingleForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CapsuleTraceSingleByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	struct FName                                       ProfileName;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CapsuleTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CapsuleTraceMultiForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CapsuleTraceMultiByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	struct FName                                       ProfileName;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CapsuleTraceMulti_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CapsuleOverlapComponents_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     CapsulePos;                                               
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	class UClass*                                      ComponentClassFilter;                                     
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CapsuleOverlapActors_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     CapsulePos;                                               
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	class UClass*                                      ActorClassFilter;                                         
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class AActor*>                              OutActors;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_CanLaunchURL_Params
{
	struct FString                                     URL;                                                      
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_BreakSoftObjectPath_Params
{
	struct FSoftObjectPath                             InSoftObjectPath;                                         
	struct FString                                     PathString;                                               
};


struct UKismetSystemLibrary_BoxTraceSingleForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FVector                                     HalfSize;                                                 
	struct FRotator                                    Orientation;                                              
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_BoxTraceSingleByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FVector                                     HalfSize;                                                 
	struct FRotator                                    Orientation;                                              
	struct FName                                       ProfileName;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_BoxTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FVector                                     HalfSize;                                                 
	struct FRotator                                    Orientation;                                              
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_BoxTraceMultiForObjects_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FVector                                     HalfSize;                                                 
	struct FRotator                                    Orientation;                                              
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_BoxTraceMultiByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FVector                                     HalfSize;                                                 
	struct FRotator                                    Orientation;                                              
	struct FName                                       ProfileName;                                              
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_BoxTraceMulti_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FVector                                     HalfSize;                                                 
	struct FRotator                                    Orientation;                                              
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	TArray<struct FHitResult>                          OutHits;                                                  
	bool                                               bIgnoreSelf;                                              
	struct FLinearColor                                TraceColor;                                               
	struct FLinearColor                                TraceHitColor;                                            
	float                                              DrawTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_BoxOverlapComponents_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     BoxPos;                                                   
	struct FVector                                     Extent;                                                   
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	class UClass*                                      ComponentClassFilter;                                     
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_BoxOverlapActors_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     BoxPos;                                                   
	struct FVector                                     BoxExtent;                                                
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	class UClass*                                      ActorClassFilter;                                         
	TArray<class AActor*>                              ActorsToIgnore;                                           
	TArray<class AActor*>                              OutActors;                                                
	bool                                               ReturnValue;                                              
};


struct UKismetSystemLibrary_AddFloatHistorySample_Params
{
	float                                              Value;                                                    
	struct FDebugFloatHistory                          FloatHistory;                                             
	struct FDebugFloatHistory                          ReturnValue;                                              
};


struct UKismetTextLibrary_TextTrimTrailing_Params
{
	struct FText                                       InText;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_TextTrimPrecedingAndTrailing_Params
{
	struct FText                                       InText;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_TextTrimPreceding_Params
{
	struct FText                                       InText;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_TextToUpper_Params
{
	struct FText                                       InText;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_TextToLower_Params
{
	struct FText                                       InText;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_TextIsTransient_Params
{
	struct FText                                       InText;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_TextIsFromStringTable_Params
{
	struct FText                                       Text;                                                     
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_TextIsEmpty_Params
{
	struct FText                                       InText;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_TextIsCultureInvariant_Params
{
	struct FText                                       InText;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_TextFromStringTable_Params
{
	struct FName                                       TableId;                                                  
	struct FString                                     Key;                                                      
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_StringTableIdAndKeyFromText_Params
{
	struct FText                                       Text;                                                     
	struct FName                                       OutTableId;                                               
	struct FString                                     OutKey;                                                   
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_NotEqual_TextText_Params
{
	struct FText                                       A;                                                        
	struct FText                                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Params
{
	struct FText                                       A;                                                        
	struct FText                                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_GetEmptyText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Format_Params
{
	struct FText                                       InPattern;                                                
	TArray<struct FFormatArgumentData>                 InArgs;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_FindTextInLocalizationTable_Params
{
	struct FString                                     Namespace;                                                
	struct FString                                     Key;                                                      
	struct FText                                       OutText;                                                  
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_EqualEqual_TextText_Params
{
	struct FText                                       A;                                                        
	struct FText                                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Params
{
	struct FText                                       A;                                                        
	struct FText                                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_VectorToText_Params
{
	struct FVector                                     InVec;                                                    
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_Vector2dToText_Params
{
	struct FVector2D                                   InVec;                                                    
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_TransformToText_Params
{
	struct FTransform                                  InTrans;                                                  
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_TextToString_Params
{
	struct FText                                       InText;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_StringToText_Params
{
	struct FString                                     inString;                                                 
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_RotatorToText_Params
{
	struct FRotator                                    InRot;                                                    
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_ObjectToText_Params
{
	class UObject*                                     InObj;                                                    
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_NameToText_Params
{
	struct FName                                       InName;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_IntToText_Params
{
	int                                                Value;                                                    
	bool                                               bUseGrouping;                                             
	int                                                MinimumIntegralDigits;                                    
	int                                                MaximumIntegralDigits;                                    
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_Int64ToText_Params
{
	int64_t                                            Value;                                                    
	bool                                               bUseGrouping;                                             
	int                                                MinimumIntegralDigits;                                    
	int                                                MaximumIntegralDigits;                                    
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_FloatToText_Params
{
	float                                              Value;                                                    
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             
	bool                                               bUseGrouping;                                             
	int                                                MinimumIntegralDigits;                                    
	int                                                MaximumIntegralDigits;                                    
	int                                                MinimumFractionalDigits;                                  
	int                                                MaximumFractionalDigits;                                  
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_ColorToText_Params
{
	struct FLinearColor                                InColor;                                                  
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_ByteToText_Params
{
	unsigned char                                      Value;                                                    
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_Conv_BoolToText_Params
{
	bool                                               InBool;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsTimeZoneTime_DateTime_Params
{
	struct FDateTime                                   InDateTime;                                               
	struct FString                                     InTimeZone;                                               
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Params
{
	struct FDateTime                                   InDateTime;                                               
	struct FString                                     InTimeZone;                                               
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsTimeZoneDate_DateTime_Params
{
	struct FDateTime                                   InDateTime;                                               
	struct FString                                     InTimeZone;                                               
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsTimespan_Timespan_Params
{
	struct FTimespan                                   InTimespan;                                               
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsTime_DateTime_Params
{
	struct FDateTime                                   In;                                                       
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsPercent_Float_Params
{
	float                                              Value;                                                    
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             
	bool                                               bUseGrouping;                                             
	int                                                MinimumIntegralDigits;                                    
	int                                                MaximumIntegralDigits;                                    
	int                                                MinimumFractionalDigits;                                  
	int                                                MaximumFractionalDigits;                                  
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsDateTime_DateTime_Params
{
	struct FDateTime                                   In;                                                       
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsDate_DateTime_Params
{
	struct FDateTime                                   InDateTime;                                               
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsCurrencyBase_Params
{
	int                                                baseValue;                                                
	struct FString                                     CurrencyCode;                                             
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsCurrency_Integer_Params
{
	int                                                Value;                                                    
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             
	bool                                               bUseGrouping;                                             
	int                                                MinimumIntegralDigits;                                    
	int                                                MaximumIntegralDigits;                                    
	int                                                MinimumFractionalDigits;                                  
	int                                                MaximumFractionalDigits;                                  
	struct FString                                     CurrencyCode;                                             
	struct FText                                       ReturnValue;                                              
};


struct UKismetTextLibrary_AsCurrency_Float_Params
{
	float                                              Value;                                                    
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             
	bool                                               bUseGrouping;                                             
	int                                                MinimumIntegralDigits;                                    
	int                                                MaximumIntegralDigits;                                    
	int                                                MinimumFractionalDigits;                                  
	int                                                MaximumFractionalDigits;                                  
	struct FString                                     CurrencyCode;                                             
	struct FText                                       ReturnValue;                                              
};


struct ULevelStreaming_SetDisableByReason_Params
{
	ELevelDisableReason                                Reason;                                                   
	bool                                               bDisabled;                                                
};


struct ULevelStreaming_IsStreamingStatePending_Params
{
	bool                                               ReturnValue;                                              
};


struct ULevelStreaming_IsLevelVisible_Params
{
	bool                                               ReturnValue;                                              
};


struct ULevelStreaming_IsLevelLoaded_Params
{
	bool                                               ReturnValue;                                              
};


struct ULevelStreaming_HasDisableFlag_Params
{
	bool                                               ReturnValue;                                              
};


struct ULevelStreaming_GetWorldAssetPackageFName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct ULevelStreaming_GetLoadedLevel_Params
{
	class ULevel*                                      ReturnValue;                                              
};


struct ULevelStreaming_GetLevelScriptActor_Params
{
	class ALevelScriptActor*                           ReturnValue;                                              
};


struct ULevelStreaming_CreateInstance_Params
{
	struct FString                                     UniqueInstanceName;                                       
	class ULevelStreaming*                             ReturnValue;                                              
};


struct ULevelStreamingKismet_LoadLevelInstance_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     LevelName;                                                
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	bool                                               bOutSuccess;                                              
	class ULevelStreamingKismet*                       ReturnValue;                                              
};


struct UMaterialBillboardComponent_SetElements_Params
{
	TArray<struct FMaterialSpriteElement>              NewElements;                                              
};


struct UMaterialBillboardComponent_AddElement_Params
{
	class UMaterialInterface*                          Material;                                                 
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   
	bool                                               bSizeIsInScreenSpace;                                     
	float                                              BaseSizeX;                                                
	float                                              BaseSizeY;                                                
	class UCurveFloat*                                 DistanceToSizeCurve;                                      
};


struct UMaterialInstanceDynamic_SetVectorParameterValue_Params
{
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                Value;                                                    
};


struct UMaterialInstanceDynamic_SetTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                            
	class UTexture*                                    Value;                                                    
};


struct UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                            
	class USparseVolumeTexture*                        Value;                                                    
};


struct UMaterialInstanceDynamic_SetScalarParameterValue_Params
{
	struct FName                                       ParameterName;                                            
	float                                              Value;                                                    
};


struct UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Params
{
	class UMaterialInstance*                           SourceA;                                                  
	class UMaterialInstance*                           SourceB;                                                  
	float                                              Alpha;                                                    
};


struct UMaterialInstanceDynamic_K2_GetVectorParameterValue_Params
{
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                ReturnValue;                                              
};


struct UMaterialInstanceDynamic_K2_GetTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                            
	class UTexture*                                    ReturnValue;                                              
};


struct UMaterialInstanceDynamic_K2_GetScalarParameterValue_Params
{
	struct FName                                       ParameterName;                                            
	float                                              ReturnValue;                                              
};


struct UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Params
{
	class UMaterialInterface*                          Source;                                                   
};


struct UMaterialInstanceDynamic_CopyParameterOverrides_Params
{
	class UMaterialInstance*                           MaterialInstance;                                         
};


struct UMaterialInstanceDynamic_CopyInterpParameters_Params
{
	class UMaterialInstance*                           Source;                                                   
};


struct AMatineeActor_Stop_Params
{
};


struct AMatineeActor_SetPosition_Params
{
	float                                              NewPosition;                                              
	bool                                               bJump;                                                    
};


struct AMatineeActor_SetLoopingState_Params
{
	bool                                               bNewLooping;                                              
};


struct AMatineeActor_Reverse_Params
{
};


struct AMatineeActor_Play_Params
{
};


struct AMatineeActor_Pause_Params
{
};


struct AMatineeActor_EnableGroupByName_Params
{
	struct FString                                     GroupName;                                                
	bool                                               bEnable;                                                  
};


struct AMatineeActor_ChangePlaybackDirection_Params
{
};


struct UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      
};


struct UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      
	struct FLinearColor                                FillColor;                                                
	bool                                               bConvertToSRGB;                                           
};


struct UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      
	struct FLinearColor                                StartColor;                                               
	struct FLinearColor                                EndColor;                                                 
	EVertexPaintAxis                                   Axis;                                                     
	bool                                               bConvertToSRGB;                                           
};


struct UNavigationPath_IsValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UNavigationPath_IsStringPulled_Params
{
	bool                                               ReturnValue;                                              
};


struct UNavigationPath_IsPartial_Params
{
	bool                                               ReturnValue;                                              
};


struct UNavigationPath_GetPathLength_Params
{
	float                                              ReturnValue;                                              
};


struct UNavigationPath_GetPathCost_Params
{
	float                                              ReturnValue;                                              
};


struct UNavigationPath_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UNavigationPath_EnableRecalculationOnInvalidation_Params
{
	TEnumAsByte<ENavigationOptionFlag>                 DoRecalculation;                                          
};


struct UNavigationPath_EnableDebugDrawing_Params
{
	bool                                               bShouldDrawDebugData;                                     
	struct FLinearColor                                PathColor;                                                
};


struct UNavRelevantComponent_SetNavigationRelevancy_Params
{
	bool                                               bRelevant;                                                
};


struct UNavModifierComponent_SetAreaClass_Params
{
	class UClass*                                      NewAreaClass;                                             
};


struct ANavModifierVolume_SetAreaClass_Params
{
	class UClass*                                      NewAreaClass;                                             
};


struct UNetObjectPathNameMappingManager_OnMappingTableAsyncLoad_Params
{
	struct FSoftObjectPath                             MappingTableObj;                                          
};


struct UNetRPCIndexMapping_OnMappingTableAsyncLoad_Params
{
	struct FSoftObjectPath                             MappingTableObj;                                          
};


struct UNewObjectPoolSystem_SwitcherCheckByClassType_Params
{
	bool                                               ReturnValue;                                              
};


struct UNewObjectPoolSystem_SwitcherCheck_Params
{
	struct FObjectPoolConfig                           PoolConfig;                                               
	bool                                               ReturnValue;                                              
};


struct UNewObjectPoolSystem_RemoveFence_Params
{
	EObjectPoolFenceType                               FenceType;                                                
	struct FName                                       FenceName;                                                
};


struct UNewObjectPoolSystem_Remove_Params
{
};


struct UNewObjectPoolSystem_Recycle_Params
{
	class UObject*                                     RecycleObject;                                            
	bool                                               ReturnValue;                                              
};


struct UNewObjectPoolSystem_IsAvailableChildClass_Params
{
	bool                                               ReturnValue;                                              
};


struct UNewObjectPoolSystem_GetInited_Params
{
	bool                                               ReturnValue;                                              
};


struct UNewObjectPoolSystem_ExistingFences_Params
{
	EObjectPoolFenceType                               FenceType;                                                
	bool                                               ReturnValue;                                              
};


struct UNewObjectPoolSystem_CreateFence_Params
{
	EObjectPoolFenceType                               FenceType;                                                
	struct FName                                       FenceName;                                                
};


struct UNewObjectPoolSystem_ClearAll_Params
{
	bool                                               CollectGarbage;                                           
};


struct UNewObjectPoolSystem_Clear_Params
{
	bool                                               CollectGarbage;                                           
};


struct UNewObjectPoolSystem_AddDefault_Params
{
};


struct UNewObjectPoolSystem_Add_Params
{
	struct FObjectPoolConfig                           PoolConfig;                                               
};


struct UObjectPoolInterface_UseUnLimitObjectPool_Params
{
	bool                                               ReturnValue;                                              
};


struct UObjectPoolInterface_ResetPropsNormally_Params
{
	class UObject*                                     CDO;                                                      
};


struct UObjectPoolInterface_ReceiveOnRespawned_Params
{
};


struct UObjectPoolInterface_ReceiveOnRecycled_Params
{
};


struct UObjectPoolInterface_ReceiveOnNetRespawned_Params
{
};


struct UObjectPoolInterface_OnRespawned_Params
{
};


struct UObjectPoolInterface_OnRecycled_Params
{
};


struct UObjectPoolInterface_OnNetRespawned_Params
{
};


struct UObjectPoolInterface_GetUnLimitObjectPoolSize_Params
{
	int                                                ReturnValue;                                              
};


struct UObjectPoolInterface_GetUnLimitObjectPoolLifePeriodTime_Params
{
	int                                                ReturnValue;                                              
};


struct UObjectPoolInterface_GetDynamicRecyclePoolSize_Params
{
	int                                                ReturnValue;                                              
};


struct UObjectPoolInterface_EnableDynamicRecycle_Params
{
	bool                                               ReturnValue;                                              
};


struct UObjectPoolInterface_CheckIsRespawned_Params
{
	bool                                               ReturnValue;                                              
};


struct UObjectPoolInterface_CheckIsRecycled_Params
{
	bool                                               ReturnValue;                                              
};


struct UOceanFFTComponent_Update_Params
{
	float                                              DeltaTime;                                                
};


struct UParallelWorldSubsystem_AddWorlds_Params
{
	TArray<int>                                        InWorldIds;                                               
	bool                                               ReturnValue;                                              
};


struct UParticleSystem_GetBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              
};


struct UParticleSystem_GetBoundingBox_Params
{
	struct FBox                                        ReturnValue;                                              
};


struct UParticleSystem_ContainsEmitterType_Params
{
	class UClass*                                      TypeData;                                                 
	bool                                               ReturnValue;                                              
};


struct UPawnNoiseEmitterComponent_MakeNoise_Params
{
	class AActor*                                      NoiseMaker;                                               
	float                                              Loudness;                                                 
	struct FVector                                     NoiseLocation;                                            
};


struct UPhysicalAnimationComponent_SetStrengthMultiplyer_Params
{
	float                                              InStrengthMultiplyer;                                     
};


struct UPhysicalAnimationComponent_SetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      InSkeletalMeshComponent;                                  
};


struct UPhysicalAnimationComponent_GetBodyTargetTransform_Params
{
	struct FName                                       BodyName;                                                 
	struct FTransform                                  ReturnValue;                                              
};


struct UPhysicalAnimationComponent_ApplyPhysicalAnimationSettingsBelow_Params
{
	struct FName                                       BodyName;                                                 
	struct FPhysicalAnimationData                      PhysicalAnimationData;                                    
	bool                                               bIncludeSelf;                                             
};


struct UPhysicalAnimationComponent_ApplyPhysicalAnimationSettings_Params
{
	struct FName                                       BodyName;                                                 
	struct FPhysicalAnimationData                      PhysicalAnimationData;                                    
};


struct UPhysicalAnimationComponent_ApplyPhysicalAnimationProfileBelow_Params
{
	struct FName                                       BodyName;                                                 
	struct FName                                       ProfileName;                                              
	bool                                               bIncludeSelf;                                             
	bool                                               bClearNotFound;                                           
};


struct UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Params
{
	bool                                               bEnableTwistDrive;                                        
	bool                                               bEnableSwingDrive;                                        
};


struct UPhysicsConstraintComponent_SetOrientationDriveSLERP_Params
{
	bool                                               bEnableSLERP;                                             
};


struct UPhysicsConstraintComponent_SetLinearZLimit_Params
{
	TEnumAsByte<ELinearConstraintMotion>               ConstraintType;                                           
	float                                              LimitSize;                                                
};


struct UPhysicsConstraintComponent_SetLinearYLimit_Params
{
	TEnumAsByte<ELinearConstraintMotion>               ConstraintType;                                           
	float                                              LimitSize;                                                
};


struct UPhysicsConstraintComponent_SetLinearXLimit_Params
{
	TEnumAsByte<ELinearConstraintMotion>               ConstraintType;                                           
	float                                              LimitSize;                                                
};


struct UPhysicsConstraintComponent_SetLinearVelocityTarget_Params
{
	struct FVector                                     InVelTarget;                                              
};


struct UPhysicsConstraintComponent_SetLinearVelocityDrive_Params
{
	bool                                               bEnableDriveX;                                            
	bool                                               bEnableDriveY;                                            
	bool                                               bEnableDriveZ;                                            
};


struct UPhysicsConstraintComponent_SetLinearPositionTarget_Params
{
	struct FVector                                     InPosTarget;                                              
};


struct UPhysicsConstraintComponent_SetLinearPositionDrive_Params
{
	bool                                               bEnableDriveX;                                            
	bool                                               bEnableDriveY;                                            
	bool                                               bEnableDriveZ;                                            
};


struct UPhysicsConstraintComponent_SetLinearDriveParams_Params
{
	float                                              PositionStrength;                                         
	float                                              VelocityStrength;                                         
	float                                              InForceLimit;                                             
};


struct UPhysicsConstraintComponent_SetLinearBreakable_Params
{
	bool                                               bLinearBreakable;                                         
	float                                              LinearBreakThreshold;                                     
};


struct UPhysicsConstraintComponent_SetDisableCollision_Params
{
	bool                                               bDisableCollision;                                        
};


struct UPhysicsConstraintComponent_SetConstraintReferencePosition_Params
{
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    
	struct FVector                                     RefPosition;                                              
};


struct UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Params
{
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    
	struct FVector                                     PriAxis;                                                  
	struct FVector                                     SecAxis;                                                  
};


struct UPhysicsConstraintComponent_SetConstraintReferenceFrame_Params
{
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    
	struct FTransform                                  RefFrame;                                                 
};


struct UPhysicsConstraintComponent_SetConstrainedComponents_Params
{
	class UPrimitiveComponent*                         Component1;                                               
	struct FName                                       BoneName1;                                                
	class UPrimitiveComponent*                         Component2;                                               
	struct FName                                       BoneName2;                                                
};


struct UPhysicsConstraintComponent_SetAngularVelocityTarget_Params
{
	struct FVector                                     InVelTarget;                                              
};


struct UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Params
{
	bool                                               bEnableTwistDrive;                                        
	bool                                               bEnableSwingDrive;                                        
};


struct UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Params
{
	bool                                               bEnableSLERP;                                             
};


struct UPhysicsConstraintComponent_SetAngularVelocityDrive_Params
{
	bool                                               bEnableSwingDrive;                                        
	bool                                               bEnableTwistDrive;                                        
};


struct UPhysicsConstraintComponent_SetAngularTwistLimit_Params
{
	TEnumAsByte<EAngularConstraintMotion>              ConstraintType;                                           
	float                                              TwistLimitAngle;                                          
};


struct UPhysicsConstraintComponent_SetAngularSwing2Limit_Params
{
	TEnumAsByte<EAngularConstraintMotion>              MotionType;                                               
	float                                              Swing2LimitAngle;                                         
};


struct UPhysicsConstraintComponent_SetAngularSwing1Limit_Params
{
	TEnumAsByte<EAngularConstraintMotion>              MotionType;                                               
	float                                              Swing1LimitAngle;                                         
};


struct UPhysicsConstraintComponent_SetAngularOrientationTarget_Params
{
	struct FRotator                                    InPosTarget;                                              
};


struct UPhysicsConstraintComponent_SetAngularOrientationDrive_Params
{
	bool                                               bEnableSwingDrive;                                        
	bool                                               bEnableTwistDrive;                                        
};


struct UPhysicsConstraintComponent_SetAngularDriveParams_Params
{
	float                                              PositionStrength;                                         
	float                                              VelocityStrength;                                         
	float                                              InForceLimit;                                             
};


struct UPhysicsConstraintComponent_SetAngularDriveMode_Params
{
	TEnumAsByte<EAngularDriveMode>                     DriveMode;                                                
};


struct UPhysicsConstraintComponent_SetAngularBreakable_Params
{
	bool                                               bAngularBreakable;                                        
	float                                              AngularBreakThreshold;                                    
};


struct UPhysicsConstraintComponent_IsBroken_Params
{
	bool                                               ReturnValue;                                              
};


struct UPhysicsConstraintComponent_GetCurrentTwist_Params
{
	float                                              ReturnValue;                                              
};


struct UPhysicsConstraintComponent_GetCurrentSwing2_Params
{
	float                                              ReturnValue;                                              
};


struct UPhysicsConstraintComponent_GetCurrentSwing1_Params
{
	float                                              ReturnValue;                                              
};


struct UPhysicsConstraintComponent_GetConstraintWorldTransform_Params
{
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    
	struct FTransform                                  ReturnValue;                                              
};


struct UPhysicsConstraintComponent_GetConstraintForce_Params
{
	struct FVector                                     OutLinearForce;                                           
	struct FVector                                     OutAngularForce;                                          
};


struct UPhysicsConstraintComponent_BreakConstraint_Params
{
};


struct UPhysicsHandleComponent_SetTargetRotation_Params
{
	struct FRotator                                    NewRotation;                                              
};


struct UPhysicsHandleComponent_SetTargetLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              
	struct FRotator                                    NewRotation;                                              
};


struct UPhysicsHandleComponent_SetTargetLocation_Params
{
	struct FVector                                     NewLocation;                                              
};


struct UPhysicsHandleComponent_SetLinearStiffness_Params
{
	float                                              NewLinearStiffness;                                       
};


struct UPhysicsHandleComponent_SetLinearDamping_Params
{
	float                                              NewLinearDamping;                                         
};


struct UPhysicsHandleComponent_SetInterpolationSpeed_Params
{
	float                                              NewInterpolationSpeed;                                    
};


struct UPhysicsHandleComponent_SetAngularStiffness_Params
{
	float                                              NewAngularStiffness;                                      
};


struct UPhysicsHandleComponent_SetAngularDamping_Params
{
	float                                              NewAngularDamping;                                        
};


struct UPhysicsHandleComponent_ReleaseComponent_Params
{
};


struct UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Params
{
	class UPrimitiveComponent*                         Component;                                                
	struct FName                                       InBoneName;                                               
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
};


struct UPhysicsHandleComponent_GrabComponentAtLocation_Params
{
	class UPrimitiveComponent*                         Component;                                                
	struct FName                                       InBoneName;                                               
	struct FVector                                     GrabLocation;                                             
};


struct UPhysicsHandleComponent_GrabComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                
	struct FName                                       InBoneName;                                               
	struct FVector                                     GrabLocation;                                             
	bool                                               bConstrainRotation;                                       
};


struct UPhysicsHandleComponent_GetTargetLocationAndRotation_Params
{
	struct FVector                                     TargetLocation;                                           
	struct FRotator                                    TargetRotation;                                           
};


struct UPhysicsHandleComponent_GetGrabbedComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              
};


struct UPhysicsSpringComponent_GetSpringRestingPoint_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPhysicsSpringComponent_GetSpringDirection_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPhysicsSpringComponent_GetSpringCurrentEndPoint_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPhysicsSpringComponent_GetNormalizedCompressionScalar_Params
{
	float                                              ReturnValue;                                              
};


struct APixelProjectedReflection_OnInterpToggle_Params
{
	bool                                               bEnable;                                                  
};


struct APlanarReflection_OnInterpToggle_Params
{
	bool                                               bEnable;                                                  
};


struct UPlatformEventsComponent_SupportsConvertibleLaptops_Params
{
	bool                                               ReturnValue;                                              
};


struct UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature_Params
{
};


struct UPlatformEventsComponent_IsInTabletMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UPlatformEventsComponent_IsInLaptopMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UPlatformInterfaceWebResponse_GetNumHeaders_Params
{
	int                                                ReturnValue;                                              
};


struct UPlatformInterfaceWebResponse_GetHeaderValue_Params
{
	struct FString                                     HeaderName;                                               
	struct FString                                     ReturnValue;                                              
};


struct UPlatformInterfaceWebResponse_GetHeader_Params
{
	int                                                HeaderIndex;                                              
	struct FString                                     Header;                                                   
	struct FString                                     Value;                                                    
};


struct UPlayerInput_SetMouseSensitivity_Params
{
	float                                              Sensitivity;                                              
};


struct UPlayerInput_SetBind_Params
{
	struct FName                                       BindName;                                                 
	struct FString                                     Command;                                                  
};


struct UPlayerInput_InvertAxisKey_Params
{
	struct FKey                                        AxisKey;                                                  
};


struct UPlayerInput_InvertAxis_Params
{
	struct FName                                       AxisName;                                                 
};


struct UPlayerInput_ClearSmoothing_Params
{
};


struct APointLight_SetRadius_Params
{
	float                                              NewRadius;                                                
};


struct APointLight_SetLightFalloffExponent_Params
{
	float                                              NewLightFalloffExponent;                                  
};


struct UPointLightComponent_SetSourceRadius_Params
{
	float                                              bNewValue;                                                
};


struct UPointLightComponent_SetSourceLength_Params
{
	float                                              NewValue;                                                 
};


struct UPointLightComponent_SetSoftSourceRadius_Params
{
	float                                              bNewValue;                                                
};


struct UPointLightComponent_SetSimulateRectLight_Params
{
	bool                                               NewValue;                                                 
};


struct UPointLightComponent_SetSimulatePortalLight_Params
{
	bool                                               NewValue;                                                 
};


struct UPointLightComponent_SetRectLightSourceWidth_Params
{
	float                                              NewValue;                                                 
};


struct UPointLightComponent_SetRectLightSourceHeight_Params
{
	float                                              NewValue;                                                 
};


struct UPointLightComponent_SetLightFalloffExponent_Params
{
	float                                              NewLightFalloffExponent;                                  
};


struct UPointLightComponent_SetAttenuationRadius_Params
{
	float                                              NewRadius;                                                
};


struct UPoseableMeshComponent_SetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 
	struct FTransform                                  InTransform;                                              
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                
};


struct UPoseableMeshComponent_SetBoneScaleByName_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     InScale3D;                                                
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                
};


struct UPoseableMeshComponent_SetBoneRotationByName_Params
{
	struct FName                                       BoneName;                                                 
	struct FRotator                                    InRotation;                                               
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                
};


struct UPoseableMeshComponent_SetBoneLocationByName_Params
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     InLocation;                                               
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                
};


struct UPoseableMeshComponent_ResetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 
};


struct UPoseableMeshComponent_GetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                
	struct FTransform                                  ReturnValue;                                              
};


struct UPoseableMeshComponent_GetBoneScaleByName_Params
{
	struct FName                                       BoneName;                                                 
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UPoseableMeshComponent_GetBoneRotationByName_Params
{
	struct FName                                       BoneName;                                                 
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                
	struct FRotator                                    ReturnValue;                                              
};


struct UPoseableMeshComponent_GetBoneLocationByName_Params
{
	struct FName                                       BoneName;                                                 
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UPoseableMeshComponent_CopyPoseFromSkeletalComponent_Params
{
	class USkeletalMeshComponent*                      InComponentToCopy;                                        
};


struct UPostProcessComponent_AddOrUpdateBlendable_Params
{
	TScriptInterface<class UBlendableInterface>        InBlendableObject;                                        
	float                                              InWeight;                                                 
};


struct APostProcessVolume_RemoveBlendable_Params
{
	TScriptInterface<class UBlendableInterface>        InBlendableObject;                                        
};


struct APostProcessVolume_AddOrUpdateBlendable_Params
{
	TScriptInterface<class UBlendableInterface>        InBlendableObject;                                        
	float                                              InWeight;                                                 
};


struct ARadialForceActor_ToggleForce_Params
{
};


struct ARadialForceActor_FireImpulse_Params
{
};


struct ARadialForceActor_EnableForce_Params
{
};


struct ARadialForceActor_DisableForce_Params
{
};


struct URadialForceComponent_RemoveObjectTypeToAffect_Params
{
	TEnumAsByte<EObjectTypeQuery>                      ObjectType;                                               
};


struct URadialForceComponent_FireImpulse_Params
{
};


struct URadialForceComponent_AddObjectTypeToAffect_Params
{
	TEnumAsByte<EObjectTypeQuery>                      ObjectType;                                               
};


struct UResetableInReplayInterface_ResetInReplay_Params
{
};


struct UReusable_ReceiveOnSpawn_Params
{
};


struct UReusable_ReceiveOnRecycle_Params
{
};


struct UReusable_ReceiveOnPoolCreate_Params
{
};


struct UReusable_OnSpawn_Params
{
};


struct UReusable_OnRecycle_Params
{
};


struct ASceneCapture2D_OnInterpToggle_Params
{
	bool                                               bEnable;                                                  
};


struct USceneCaptureComponentCube_CaptureScene_Params
{
};


struct ASceneCaptureCube_OnInterpToggle_Params
{
	bool                                               bEnable;                                                  
};


struct USkeletalMesh_RestoreSpecificLOD_Params
{
	int                                                LODIndex;                                                 
	ELODDropResult                                     ReturnValue;                                              
};


struct USkeletalMesh_RestoreAllDroppedLODs_Params
{
};


struct USkeletalMesh_NumSockets_Params
{
	int                                                ReturnValue;                                              
};


struct USkeletalMesh_IsSectionUsingCloth_Params
{
	int                                                InSectionIndex;                                           
	bool                                               bCheckCorrespondingSections;                              
	bool                                               ReturnValue;                                              
};


struct USkeletalMesh_IsLODDropped_Params
{
	int                                                LODIndex;                                                 
	bool                                               ReturnValue;                                              
};


struct USkeletalMesh_HasPendingDropRelease_Params
{
	bool                                               ReturnValue;                                              
};


struct USkeletalMesh_GetSocketByIndex_Params
{
	int                                                Index;                                                    
	class USkeletalMeshSocket*                         ReturnValue;                                              
};


struct USkeletalMesh_GetNodeMappingContainer_Params
{
	class UBlueprint*                                  SourceAsset;                                              
	class UNodeMappingContainer*                       ReturnValue;                                              
};


struct USkeletalMesh_GetLODVRAMFootprint_Params
{
	int                                                LODIndex;                                                 
	int                                                ReturnValue;                                              
};


struct USkeletalMesh_GetImportedBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              
};


struct USkeletalMesh_GetDroppedLODs_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct USkeletalMesh_GetBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              
};


struct USkeletalMesh_FindSocketAndIndex_Params
{
	struct FName                                       InSocketName;                                             
	int                                                OutIndex;                                                 
	class USkeletalMeshSocket*                         ReturnValue;                                              
};


struct USkeletalMesh_FindSocket_Params
{
	struct FName                                       InSocketName;                                             
	class USkeletalMeshSocket*                         ReturnValue;                                              
};


struct USkeletalMesh_DropSpecificLOD_Params
{
	int                                                LODIndex;                                                 
	ELODDropResult                                     ReturnValue;                                              
};


struct USkeletalMesh_DropLODs_Params
{
	TArray<int>                                        LODIndices;                                               
	TArray<ELODDropResult>                             OutResults;                                               
};


struct USkeletalMesh_CommitPendingDropReleases_Params
{
};


struct USkeletalMeshSocket_InitializeSocketFromLocation_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 
	struct FVector                                     WorldLocation;                                            
	struct FVector                                     WorldNormal;                                              
};


struct USkeletalMeshSocket_GetSocketLocation_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct USkyAtmosphereComponent_SetSkyLuminanceFactor_Params
{
	struct FLinearColor                                NewValue;                                                 
};


struct USkyAtmosphereComponent_SetRayleighScatteringScale_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_SetRayleighScattering_Params
{
	struct FLinearColor                                NewValue;                                                 
};


struct USkyAtmosphereComponent_SetRayleighExponentialDistribution_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_SetOtherAbsorptionScale_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_SetOtherAbsorption_Params
{
	struct FLinearColor                                NewValue;                                                 
};


struct USkyAtmosphereComponent_SetMieScatteringScale_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_SetMieScattering_Params
{
	struct FLinearColor                                NewValue;                                                 
};


struct USkyAtmosphereComponent_SetMieExponentialDistribution_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_SetMieAnisotropy_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_SetMieAbsorptionScale_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_SetMieAbsorption_Params
{
	struct FLinearColor                                NewValue;                                                 
};


struct USkyAtmosphereComponent_SetHeightFogContribution_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Params
{
	float                                              NewValue;                                                 
};


struct USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Params
{
	int                                                AtmosphereLightIndex;                                     
	struct FVector                                     LightDirection;                                           
};


struct ASkyLight_OnRep_bEnabled_Params
{
};


struct USkyLightComponent_SetVolumetricScatteringIntensity_Params
{
	float                                              NewIntensity;                                             
};


struct USkyLightComponent_SetOcclusionTint_Params
{
	struct FColor                                      InTint;                                                   
};


struct USkyLightComponent_SetOcclusionExponent_Params
{
	float                                              InOcclusionExponent;                                      
};


struct USkyLightComponent_SetOcclusionContrast_Params
{
	float                                              InOcclusionContrast;                                      
};


struct USkyLightComponent_SetMinOcclusion_Params
{
	float                                              InMinOcclusion;                                           
};


struct USkyLightComponent_SetLightColor_Params
{
	struct FLinearColor                                NewLightColor;                                            
};


struct USkyLightComponent_SetIntensity_Params
{
	float                                              NewIntensity;                                             
};


struct USkyLightComponent_SetIndirectLightingIntensity_Params
{
	float                                              NewIntensity;                                             
};


struct USkyLightComponent_SetCubemapBlend_Params
{
	class UTextureCube*                                SourceCubemap;                                            
	class UTextureCube*                                DestinationCubemap;                                       
	float                                              InBlendFraction;                                          
};


struct USkyLightComponent_SetCubemap_Params
{
	class UTextureCube*                                NewCubemap;                                               
};


struct USkyLightComponent_RecaptureSky_Params
{
};


struct USparseVolumeTexture_GetSizeZ_Params
{
	int                                                ReturnValue;                                              
};


struct USparseVolumeTexture_GetSizeY_Params
{
	int                                                ReturnValue;                                              
};


struct USparseVolumeTexture_GetSizeX_Params
{
	int                                                ReturnValue;                                              
};


struct USparseVolumeTexture_GetNumMipLevels_Params
{
	int                                                ReturnValue;                                              
};


struct USparseVolumeTexture_GetNumFrames_Params
{
	int                                                ReturnValue;                                              
};


struct USparseVolumeTexture_GetFrameTransform_Params
{
	struct FTransform                                  ReturnValue;                                              
};


struct UAnimatedSparseVolumeTextureController_Update_Params
{
	float                                              DeltaTime;                                                
};


struct UAnimatedSparseVolumeTextureController_Stop_Params
{
};


struct UAnimatedSparseVolumeTextureController_Play_Params
{
};


struct UAnimatedSparseVolumeTextureController_Pause_Params
{
};


struct UAnimatedSparseVolumeTextureController_GetFrameByIndex_Params
{
	int                                                FrameIndex;                                               
	class USparseVolumeTextureFrame*                   ReturnValue;                                              
};


struct UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Params
{
	float                                              ReturnValue;                                              
};


struct UAnimatedSparseVolumeTextureController_GetDuration_Params
{
	float                                              ReturnValue;                                              
};


struct UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Params
{
	class USparseVolumeTextureFrame*                   Frame0;                                                   
	class USparseVolumeTextureFrame*                   Frame1;                                                   
	float                                              LerpAlpha;                                                
};


struct UAnimatedSparseVolumeTextureController_GetCurrentFrame_Params
{
	class USparseVolumeTextureFrame*                   ReturnValue;                                              
};


struct USplineComponentEditorModifer_ModifyPostion_Params
{
	struct FVector                                     InPosition;                                               
	struct FVector                                     ReturnValue;                                              
};


struct USpotLightComponent_SetOuterConeAngle_Params
{
	float                                              NewOuterConeAngle;                                        
};


struct USpotLightComponent_SetInnerConeAngle_Params
{
	float                                              NewInnerConeAngle;                                        
};


struct UStatLabelFunctionLibrary_StatStop_Params
{
};


struct UStatLabelFunctionLibrary_StatStart_Params
{
	bool                                               IsScreenshotEnabled;                                      
	bool                                               IsStatLogEnabled;                                         
	bool                                               IsStatLabelEnabled;                                       
};


struct UStatLabelFunctionLibrary_SetStatLabel_Params
{
	struct FString                                     LabelName;                                                
};


struct UStereoLayerComponent_SetUVRect_Params
{
	struct FBox2D                                      InUVRect;                                                 
};


struct UStereoLayerComponent_SetTexture_Params
{
	class UTexture*                                    InTexture;                                                
};


struct UStereoLayerComponent_SetQuadSize_Params
{
	struct FVector2D                                   InQuadSize;                                               
};


struct UStereoLayerComponent_SetPriority_Params
{
	int                                                InPriority;                                               
};


struct UStereoLayerComponent_MarkTextureForUpdate_Params
{
};


struct UStereoLayerComponent_GetUVRect_Params
{
	struct FBox2D                                      ReturnValue;                                              
};


struct UStereoLayerComponent_GetTexture_Params
{
	class UTexture*                                    ReturnValue;                                              
};


struct UStereoLayerComponent_GetQuadSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UStereoLayerComponent_GetPriority_Params
{
	int                                                ReturnValue;                                              
};


struct UStereoLayerFunctionLibrary_ShowSplashScreen_Params
{
};


struct UStereoLayerFunctionLibrary_SetSplashScreen_Params
{
	class UTexture*                                    Texture;                                                  
	struct FVector2D                                   Scale;                                                    
	struct FVector2D                                   Offset;                                                   
	bool                                               bShowLoadingMovie;                                        
	bool                                               bShowOnSet;                                               
};


struct UStereoLayerFunctionLibrary_HideSplashScreen_Params
{
};


struct UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Params
{
	bool                                               InAutoShowEnabled;                                        
};


struct USubsystemBlueprintLibrary_GetWorldSubsystem_Params
{
	class UObject*                                     ContextObject;                                            
	class UClass*                                      Class;                                                    
	class UWorldSubsystem*                             ReturnValue;                                              
};


struct USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Params
{
	class APlayerController*                           PlayerController;                                         
	class UClass*                                      Class;                                                    
	class ULocalPlayerSubsystem*                       ReturnValue;                                              
};


struct USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Params
{
	class UObject*                                     ContextObject;                                            
	class UClass*                                      Class;                                                    
	class ULocalPlayerSubsystem*                       ReturnValue;                                              
};


struct USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Params
{
	class UObject*                                     ContextObject;                                            
	class UClass*                                      Class;                                                    
	class UGameInstanceSubsystem*                      ReturnValue;                                              
};


struct USubsystemBlueprintLibrary_GetEngineSubsystem_Params
{
	class UClass*                                      Class;                                                    
	class UEngineSubsystem*                            ReturnValue;                                              
};


struct UTextRenderComponent_SetYScale_Params
{
	float                                              Value;                                                    
};


struct UTextRenderComponent_SetXScale_Params
{
	float                                              Value;                                                    
};


struct UTextRenderComponent_SetWorldSize_Params
{
	float                                              Value;                                                    
};


struct UTextRenderComponent_SetVertSpacingAdjust_Params
{
	float                                              Value;                                                    
};


struct UTextRenderComponent_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalTextAligment>                 Value;                                                    
};


struct UTextRenderComponent_SetTextRenderColor_Params
{
	struct FColor                                      Value;                                                    
};


struct UTextRenderComponent_SetTextMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 
};


struct UTextRenderComponent_SetText_Params
{
	struct FString                                     Value;                                                    
};


struct UTextRenderComponent_SetHorizSpacingAdjust_Params
{
	float                                              Value;                                                    
};


struct UTextRenderComponent_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizTextAligment>                    Value;                                                    
};


struct UTextRenderComponent_SetFont_Params
{
	class UFont*                                       Value;                                                    
};


struct UTextRenderComponent_K2_SetText_Params
{
	struct FText                                       Value;                                                    
};


struct UTextRenderComponent_GetTextWorldSize_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UTextRenderComponent_GetTextLocalSize_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UTextureArrayInstancedStaticMeshComponent_SetStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  
	bool                                               ReturnValue;                                              
};


struct UTextureArrayInstancedStaticMeshComponent_AddInstanceWithTextureArray_Params
{
	class UMaterialInstance*                           NewInstance;                                              
	struct FTransform                                  InstanceTransform;                                        
	int                                                ReturnValue;                                              
};


struct UTextureArrayInstancedStaticMeshComponent_AddInstancesWithTextureArray_Params
{
	class UMaterialInstance*                           NewInstance;                                              
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               bShouldReturnIndices;                                     
	bool                                               bMarkRenderStateDirty;                                    
	TArray<int>                                        ReturnValue;                                              
};


struct UTimelineComponent_Stop_Params
{
};


struct UTimelineComponent_SetVectorCurve_Params
{
	class UCurveVector*                                NewVectorCurve;                                           
	struct FName                                       VectorTrackName;                                          
};


struct UTimelineComponent_SetTimelineLengthMode_Params
{
	TEnumAsByte<ETimelineLengthMode>                   NewLengthMode;                                            
};


struct UTimelineComponent_SetTimelineLength_Params
{
	float                                              NewLength;                                                
};


struct UTimelineComponent_SetPlayRate_Params
{
	float                                              NewRate;                                                  
};


struct UTimelineComponent_SetPlaybackPosition_Params
{
	float                                              NewPosition;                                              
	bool                                               bFireEvents;                                              
	bool                                               bFireUpdate;                                              
};


struct UTimelineComponent_SetNewTime_Params
{
	float                                              NewTime;                                                  
};


struct UTimelineComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                              
};


struct UTimelineComponent_SetLinearColorCurve_Params
{
	class UCurveLinearColor*                           NewLinearColorCurve;                                      
	struct FName                                       LinearColorTrackName;                                     
};


struct UTimelineComponent_SetIgnoreTimeDilation_Params
{
	bool                                               bNewIgnoreTimeDilation;                                   
};


struct UTimelineComponent_SetFloatCurve_Params
{
	class UCurveFloat*                                 NewFloatCurve;                                            
	struct FName                                       FloatTrackName;                                           
};


struct UTimelineComponent_ReverseFromEnd_Params
{
};


struct UTimelineComponent_Reverse_Params
{
};


struct UTimelineComponent_PlayFromStart_Params
{
};


struct UTimelineComponent_Play_Params
{
};


struct UTimelineComponent_OnRep_Timeline_Params
{
};


struct UTimelineComponent_IsReversing_Params
{
	bool                                               ReturnValue;                                              
};


struct UTimelineComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UTimelineComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                              
};


struct UTimelineComponent_GetTimelineLength_Params
{
	float                                              ReturnValue;                                              
};


struct UTimelineComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                              
};


struct UTimelineComponent_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              
};


struct UTimelineComponent_GetIgnoreTimeDilation_Params
{
	bool                                               ReturnValue;                                              
};


struct UTwitterIntegrationBase_TwitterRequest_Params
{
	struct FString                                     URL;                                                      
	TArray<struct FString>                             ParamKeysAndValues;                                       
	TEnumAsByte<ETwitterRequestMethod>                 RequestMethod;                                            
	int                                                AccountIndex;                                             
	bool                                               ReturnValue;                                              
};


struct UTwitterIntegrationBase_ShowTweetUI_Params
{
	struct FString                                     InitialMessage;                                           
	struct FString                                     URL;                                                      
	struct FString                                     Picture;                                                  
	bool                                               ReturnValue;                                              
};


struct UTwitterIntegrationBase_Init_Params
{
};


struct UTwitterIntegrationBase_GetNumAccounts_Params
{
	int                                                ReturnValue;                                              
};


struct UTwitterIntegrationBase_GetAccountName_Params
{
	int                                                AccountIndex;                                             
	struct FString                                     ReturnValue;                                              
};


struct UTwitterIntegrationBase_CanShowTweetUI_Params
{
	bool                                               ReturnValue;                                              
};


struct UTwitterIntegrationBase_AuthorizeAccounts_Params
{
	bool                                               ReturnValue;                                              
};


struct UVectorFieldComponent_SetIntensity_Params
{
	float                                              NewIntensity;                                             
};


struct UVisualLoggerKismetLibrary_LogText_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     Text;                                                     
	struct FName                                       LogCategory;                                              
};


struct UVisualLoggerKismetLibrary_LogLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Location;                                                 
	struct FString                                     Text;                                                     
	struct FLinearColor                                ObjectColor;                                              
	float                                              Radius;                                                   
	struct FName                                       LogCategory;                                              
};


struct UVisualLoggerKismetLibrary_LogBox_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FBox                                        BoxShape;                                                 
	struct FString                                     Text;                                                     
	struct FLinearColor                                ObjectColor;                                              
	struct FName                                       LogCategory;                                              
};


struct UVolumetricCloudComponent_SetViewSampleCountScale_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetTracingStartMaxDistance_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetTracingMaxDistance_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetShadowViewSampleCountScale_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetShadowTracingDistance_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetReflectionSampleCountScale_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetPlanetRadius_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetMaterial_Params
{
	class UMaterialInterface*                          NewValue;                                                 
};


struct UVolumetricCloudComponent_SetLayerHeight_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetLayerBottomAltitude_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricCloudComponent_SetGroundAlbedo_Params
{
	struct FColor                                      NewValue;                                                 
};


struct UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Params
{
	bool                                               NewValue;                                                 
};


struct UVolumetricCloudComponent_SetBoxMin_Params
{
	struct FVector                                     NewValue;                                                 
};


struct UVolumetricCloudComponent_SetBoxMax_Params
{
	struct FVector                                     NewValue;                                                 
};


struct UVolumetricFogBoxComponent_SetVolumetricFogExtinctionScale_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricFogBoxComponent_SetVolumetricFogEmissive_Params
{
	struct FLinearColor                                NewValue;                                                 
};


struct UVolumetricFogBoxComponent_SetVolumetricFogAlbedo_Params
{
	struct FColor                                      NewValue;                                                 
};


struct UVolumetricFogSphereComponent_SetVolumetricFogExtinctionScale_Params
{
	float                                              NewValue;                                                 
};


struct UVolumetricFogSphereComponent_SetVolumetricFogEmissive_Params
{
	struct FLinearColor                                NewValue;                                                 
};


struct UVolumetricFogSphereComponent_SetVolumetricFogAlbedo_Params
{
	struct FColor                                      NewValue;                                                 
};


struct UWindDirectionalSourceComponent_SetWindType_Params
{
	EWindSourceType                                    InNewType;                                                
};


struct UWindDirectionalSourceComponent_SetStrength_Params
{
	float                                              InNewStrength;                                            
};


struct UWindDirectionalSourceComponent_SetSpeed_Params
{
	float                                              InNewSpeed;                                               
};


struct UWindDirectionalSourceComponent_SetRadius_Params
{
	float                                              InNewRadius;                                              
};


struct UWindDirectionalSourceComponent_SetMinimumGustAmount_Params
{
	float                                              InNewMinGust;                                             
};


struct UWindDirectionalSourceComponent_SetMaximumGustAmount_Params
{
	float                                              InNewMaxGust;                                             
};


struct UWorldComposition_SetStreamingDistanceScalePerLevel_Params
{
	struct FName                                       LevelName;                                                
	float                                              Scale;                                                    
	bool                                               ReturnValue;                                              
};


struct UWorldComposition_SetStreamingDistanceScaleByLayer_Params
{
	struct FString                                     LayerName;                                                
	float                                              Scale;                                                    
	bool                                               ReturnValue;                                              
};


struct UWorldComposition_SetStreamingDistanceScaleAllLevel_Params
{
	float                                              Scale;                                                    
	bool                                               ReturnValue;                                              
};


struct UWorldComposition_RemoveDynamicTile_Params
{
	struct FString                                     TilePackageNameStr;                                       
	bool                                               ReturnValue;                                              
};


struct UWorldComposition_GetDynamicTile_Params
{
	struct FString                                     TilePackageNameStr;                                       
	class ULevelStreaming*                             ReturnValue;                                              
};


struct UWorldComposition_AddEnableStreamingTile_Params
{
	int                                                EnableTileIdx;                                            
};


struct UWorldComposition_AddEnableStreamingLayer_Params
{
	struct FString                                     EnableLayerName;                                          
};


struct UWorldComposition_AddDynamicTile_Params
{
	struct FString                                     TilePackageNameStr;                                       
	int                                                X;                                                        
	int                                                Y;                                                        
	bool                                               bAllowCopy;                                               
	bool                                               bDisableDistanceStreaming;                                
	class ULevelStreaming*                             ReturnValue;                                              
};


struct AWorldSettings_OnRep_WorldGravityZ_Params
{
};

}

