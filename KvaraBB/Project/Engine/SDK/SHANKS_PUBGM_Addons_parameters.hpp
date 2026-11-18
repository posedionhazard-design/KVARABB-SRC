#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAdditiveCurveMoveObj_LeaveAdditiveCurveMove_Params
{
};


struct UAdditiveCurveMoveObj_EnterAdditiveCurveMove_Params
{
};


struct AAIMob_MechanicalScorpion_StopTurn_Params
{
};


struct AAIMob_MechanicalScorpion_StartWeaponAimSustain_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	float                                              SustainAimRateDegPerSec;                                  
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_ShowCachedWeaponVisual_Params
{
	int                                                Emitter;                                                  
	int                                                WeaponType;                                               
	struct FName                                       AttachSocket;                                             
	struct FVector                                     RelativeLocation;                                         
	struct FRotator                                    RelativeRotation;                                         
	struct FVector                                     RelativeScale;                                            
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_SetWeaponBehaviorState_Params
{
	int                                                Emitter;                                                  
	int                                                ExecutionSerial;                                          
	int                                                State;                                                    
	class ASTExtraBaseCharacter*                       Target;                                                   
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_SetCastIdleAllowed_Params
{
	bool                                               bAllowed;                                                 
};


struct AAIMob_MechanicalScorpion_RequestTurnToPosition_Params
{
	struct FVector                                     TargetPosition;                                           
	float                                              ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_OnRep_WeaponAimData_Params
{
};


struct AAIMob_MechanicalScorpion_Multicast_StopTurn_Params
{
};


struct AAIMob_MechanicalScorpion_Multicast_RequestTurn_Params
{
	struct FRotator                                    TargetRotator;                                            
	float                                              TurnDuration;                                             
};


struct AAIMob_MechanicalScorpion_IsWeaponTargetValid_Params
{
	class ASTExtraBaseCharacter*                       Target;                                                   
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_IsWeaponSweepSnapshotValid_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_IsWeaponAimValid_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_IsTurning_Params
{
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_IsActorAimValid_Params
{
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_HideCachedWeaponVisual_Params
{
	int                                                Emitter;                                                  
};


struct AAIMob_MechanicalScorpion_HideAllCachedWeaponVisuals_Params
{
};


struct AAIMob_MechanicalScorpion_GetWeaponSweepStart_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	struct FVector                                     ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponSweepEnd_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	struct FVector                                     ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponSweepCurrent_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	struct FVector                                     ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponSweepAlpha_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	float                                              ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponMuzzleSocket_Params
{
	int                                                Emitter;                                                  
	struct FName                                       ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponFireTransform_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	struct FTransform                                  ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponBehaviorTarget_Params
{
	int                                                Emitter;                                                  
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponAimTarget_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponAimPoint_Params
{
	int                                                Emitter;                                                  
	struct FVector                                     OutAimPoint;                                              
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetWeaponAimDebugState_Params
{
	int                                                Emitter;                                                  
	struct FString                                     ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetSmoothedWeaponAimDirection_Params
{
	int                                                Emitter;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetMinimumMuzzleHeightAboveActor_Params
{
	float                                              ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetMaximumMuzzleDistanceFromActor_Params
{
	float                                              ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetCastIdlePose_Params
{
	float                                              ServerTime;                                               
	struct FMechanicalScorpionCastIdlePose             ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_GetCachedWeaponVisualComponentCount_Params
{
	int                                                ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_EndWeaponAim_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_CompleteWeaponSweep_Params
{
	int                                                Emitter;                                                  
	int                                                AimSerial;                                                
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_CanRetargetWeapon_Params
{
	int                                                Emitter;                                                  
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_CacheWeaponVisualMesh_Params
{
	int                                                WeaponType;                                               
	class UStaticMesh*                                 WeaponMesh;                                               
	bool                                               ReturnValue;                                              
};


struct AAIMob_MechanicalScorpion_BeginWeaponAim_Params
{
	int                                                Emitter;                                                  
	class ASTExtraBaseCharacter*                       Target;                                                   
	float                                              AimRateDegPerSec;                                         
	float                                              AimReadyToleranceDeg;                                     
	int                                                AimProfile;                                               
	float                                              AimTargetHeight;                                          
	float                                              SweepDurationSec;                                         
	float                                              SweepStartYawDeg;                                         
	float                                              SweepEndYawDeg;                                           
	float                                              SweepStartPitchDeg;                                       
	float                                              SweepEndPitchDeg;                                         
	float                                              SweepHalfLengthCm;                                        
	float                                              WindupAimDurationSec;                                     
	int                                                ReturnValue;                                              
};


struct AAIMob_NTFox_SetStance_Params
{
	EFoxStance                                         NewStance;                                                
};


struct AAIMob_NTFox_SetGait_Params
{
	ENTFoxGait                                         NewGait;                                                  
};


struct AAIMob_NTFox_RequestTurnToRotation_Params
{
	struct FRotator                                    TargetRotator;                                            
	float                                              ReturnValue;                                              
};


struct AAIMob_NTFox_RequestTurnToPosition_Params
{
	struct FVector                                     TargetPosition;                                           
	float                                              ReturnValue;                                              
};


struct AAIMob_NTFox_RequestCurveTurn_Params
{
	struct FRotator                                    TargetRotator;                                            
	float                                              TurnDuration;                                             
};


struct AAIMob_NTFox_PlayMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
	float                                              ReturnValue;                                              
};


struct AAIMob_NTFox_OnRep_Stance_Params
{
	EFoxStance                                         OldStance;                                                
};


struct AAIMob_NTFox_OnRep_Gait_Params
{
	ENTFoxGait                                         OldGait;                                                  
};


struct AAIMob_NTFox_Multicast_RequestTurn_Params
{
	struct FRotator                                    TargetRotator;                                            
	float                                              Duration;                                                 
};


struct AAIMob_NTFox_Multicast_RequestCurveTurn_Params
{
	struct FRotator                                    TargetRotator;                                            
	float                                              TurnDuration;                                             
};


struct AAIMob_NTFox_Multicast_PlayMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
};


struct AAIMob_NTFox_Multicast_OnShootHit_Params
{
	struct FName                                       BoneName;                                                 
	float                                              DamageAmount;                                             
};


struct AAIMob_NTFox_InternalTurn_Params
{
	struct FRotator                                    TargetRotator;                                            
	float                                              Duration;                                                 
	bool                                               ReturnValue;                                              
};


struct AAIMob_NTFox_InternalPlayMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
	float                                              ReturnValue;                                              
};


struct AAIMob_NTFox_GetTurnMontageAndCurve_Params
{
	float                                              InYawDelta;                                               
	class UAnimMontage*                                OutMontage;                                               
	class UCurveVector*                                OutCurve;                                                 
};


struct UBioVehicleRiderAnimInstanceBase_SlotIsActived_Params
{
	struct FName                                       SlotName;                                                 
	bool                                               ReturnValue;                                              
};


struct UBioVehicleRiderAnimInstanceBase_OnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct UBioVehicleRiderAnimInstanceBase_OnBioVehiclePlayMontage_Params
{
	class UAnimMontage*                                PlayedMontage;                                            
};


struct UBioVehicleRiderAnimInstanceBase_OnBioVehicleEndMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UBioVehicleRiderAnimInstanceBase_HandleOnEndAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleRiderAnimInstanceBase_HandleOnBeginAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleRiderAnimInstanceBase_BpOnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct UBioVehicleRiderAnimInstanceBase_BpOnBioVehiclePlayMontage_Params
{
	class UAnimMontage*                                PlayedMontage;                                            
};


struct UBioVehicleRiderAnimInstanceBase_BpOnBioVehicleEndMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UBioVehicleRiderAnimInstanceBase_BpHandleOnEndAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleRiderAnimInstanceBase_BpHandleOnBeginAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleAnimInstanceBase_WeakUpdateParam_Params
{
};


struct UBioVehicleAnimInstanceBase_SlotIsActived_Params
{
	struct FName                                       SlotName;                                                 
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAnimInstanceBase_OnBioTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct UBioVehicleAnimInstanceBase_LuaUpdateAnimation_Params
{
	float                                              DeltaSeconds;                                             
};


struct UBioVehicleAnimInstanceBase_LuaOnAnimLodChanged_Params
{
	int                                                NewAnimLod;                                               
};


struct UBioVehicleAnimInstanceBase_LuaInitializeWithDeviceLevel_Params
{
	int                                                DeviceLevel;                                              
};


struct UBioVehicleAnimInstanceBase_LuaInitializeAnimation_Params
{
};


struct UBioVehicleAnimInstanceBase_HandleOnRiderAnimInstanceDeactived_Params
{
	class UAnimInstance*                               InAnimInstance;                                           
};


struct UBioVehicleAnimInstanceBase_HandleOnRiderAnimInstanceActived_Params
{
	class UAnimInstance*                               InAnimInstance;                                           
};


struct UBioVehicleAnimInstanceBase_HandleOnEndAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleAnimInstanceBase_HandleOnBeginAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleAnimInstanceBase_GetStateMachineElapsedTime_Params
{
	struct FName                                       StateMachineName;                                         
	float                                              ReturnValue;                                              
};


struct UBioVehicleAnimInstanceBase_GetRunningMontageBySlotNames_Params
{
	TArray<struct FName>                               InSlotNames;                                              
	class UAnimMontage*                                ReturnValue;                                              
};


struct UBioVehicleAnimInstanceBase_GetRunningMontageByGroupName_Params
{
	struct FName                                       InGroupName;                                              
	class UAnimMontage*                                ReturnValue;                                              
};


struct UBioVehicleAnimInstanceBase_CallWeakUpdateParam_Params
{
};


struct UBioVehicleAnimInstanceBase_BpWeakUpdateParam_Params
{
};


struct UBioVehicleAnimInstanceBase_BpOnBioTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct UBioVehicleAnimInstanceBase_BpHandleOnRiderAnimInstanceDeactived_Params
{
	class UAnimInstance*                               InAnimInstance;                                           
};


struct UBioVehicleAnimInstanceBase_BpHandleOnRiderAnimInstanceActived_Params
{
	class UAnimInstance*                               InAnimInstance;                                           
};


struct UBioVehicleAnimInstanceBase_BpHandleOnEndAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleAnimInstanceBase_BpHandleOnBeginAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleAnimInstanceBase_AnySlotIsActived_Params
{
	TArray<struct FName>                               SlotNames;                                                
	bool                                               ReturnValue;                                              
};


struct UPterosaurAnimInstance_ResetStartFlying_Params
{
};


struct UPterosaurAnimInstance_OnStartFlying_Params
{
	bool                                               bForward;                                                 
};


struct ABioVehicleBase_UseAIControl_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_UpdateFuelState_Params
{
};


struct ABioVehicleBase_UnregisterRiderAnimInstance_Params
{
	class UVehicleCharacterAnimInstanceBase*           InInstance;                                               
};


struct ABioVehicleBase_TryResolvePenetration_Params
{
};


struct ABioVehicleBase_SyncControlRotation_Params
{
	float                                              DeltaTime;                                                
};


struct ABioVehicleBase_StopJumping_Params
{
};


struct ABioVehicleBase_SetVehicleStateComponent_Params
{
};


struct ABioVehicleBase_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     
};


struct ABioVehicleBase_SetHandBrake_Params
{
	float                                              Rate;                                                     
};


struct ABioVehicleBase_SetBaseBluePrint_Params
{
	class UPrimitiveComponent*                         NewBase;                                                  
	struct FName                                       BoneName;                                                 
	bool                                               bNotifyActor;                                             
};


struct ABioVehicleBase_SetActorLocationSafetyWithParams_Params
{
	struct FVector                                     NewLocation;                                              
	struct FResolvePenetrationParams                   ResolveParams;                                            
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_ServerUpdateControlRotation_Params
{
	struct FRotator                                    ControlRotation;                                          
};


struct ABioVehicleBase_ServerResetToPosition_Params
{
	struct FVector                                     NewLocation;                                              
	struct FRotator                                    NewRotation;                                              
	bool                                               bResetVelocity;                                           
};


struct ABioVehicleBase_RegisterRiderAnimInstance_Params
{
	class UVehicleCharacterAnimInstanceBase*           InInstance;                                               
};


struct ABioVehicleBase_ProcessPenetration_Params
{
};


struct ABioVehicleBase_PlayerDelayAlready_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_OnWalkingOffLedge_Params
{
	struct FVector                                     PreviousFloorImpactNormal;                                
	struct FVector                                     PreviousFloorContactNormal;                               
	struct FVector                                     PreviousLocation;                                         
	float                                              TimeDelta;                                                
};


struct ABioVehicleBase_OnTakingDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct ABioVehicleBase_OnRep_ReplicatedBasedMovement_Params
{
};


struct ABioVehicleBase_OnRep_NetControlRotation_Params
{
};


struct ABioVehicleBase_OnRep_HasBeenTamed_Params
{
};


struct ABioVehicleBase_OnRep_FuelExhausted_Params
{
	bool                                               bPrevFuelExhausted;                                       
};


struct ABioVehicleBase_OnLaunched_Params
{
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bXYOverride;                                              
	bool                                               bZOverride;                                               
};


struct ABioVehicleBase_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      
};


struct ABioVehicleBase_OnJumped_Params
{
};


struct ABioVehicleBase_OnExitingVehicleOnServer_Params
{
};


struct ABioVehicleBase_OnEnteringVehicleOnServer_Params
{
	bool                                               IsSucc;                                                   
};


struct ABioVehicleBase_OnClientTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct ABioVehicleBase_MulticastTakingDamage_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      DamageCauser;                                             
};


struct ABioVehicleBase_MulticastDoJump_Params
{
	int                                                JumpCount;                                                
	bool                                               bSpecialJump;                                             
};


struct ABioVehicleBase_MoveUp_Params
{
	float                                              Rate;                                                     
};


struct ABioVehicleBase_LuaCanPlayMountMontage_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_LaunchCharacter_Params
{
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bXYOverride;                                              
	bool                                               bZOverride;                                               
};


struct ABioVehicleBase_K2_UpdateCustomMovement_Params
{
	float                                              DeltaTime;                                                
};


struct ABioVehicleBase_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      PrevCustomMode;                                           
	unsigned char                                      NewCustomMode;                                            
};


struct ABioVehicleBase_Jump_Params
{
};


struct ABioVehicleBase_IsPlayingRootMotion_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_IsLocalFollowingTarget_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_IsJumpProvidingForce_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_IsInAgentMove_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_IsHostingMove_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_IsFollowingTarget_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_IsAIControlling_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_IsAgentMoveEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_HandleOnSeatPreAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct ABioVehicleBase_HandleOnRiderAnimInstanceActive_Params
{
	class UAnimInstance*                               ActivedAnimInstance;                                      
};


struct ABioVehicleBase_HandleOnOpenPawnCollision_Params
{
};


struct ABioVehicleBase_HandleOnClientBeenTamed_Params
{
};


struct ABioVehicleBase_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct ABioVehicleBase_HandleDeviceLevel_Params
{
	int                                                DeviceLevel;                                              
};


struct ABioVehicleBase_GetVehicleOriginToLand_Params
{
	float                                              ReturnValue;                                              
};


struct ABioVehicleBase_GetVehicleHitBioVHComponent_Params
{
	class UVehicleHitBioVHComponent*                   ReturnValue;                                              
};


struct ABioVehicleBase_GetVehicleBreakOutState_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_GetRotationInputDir_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ABioVehicleBase_GetPlayerLookAtRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct ABioVehicleBase_GetMountMontage_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	TEnumAsByte<EMountFromDirection>                   FromDirection;                                            
	struct FMountMontagePair                           ReturnValue;                                              
};


struct ABioVehicleBase_GetMountFromDirection_Params
{
	struct FVector                                     CheckedLocation;                                          
	TEnumAsByte<EMountFromDirection>                   ReturnValue;                                              
};


struct ABioVehicleBase_GetInVehicleLocalPlayer_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct ABioVehicleBase_GetFollowTarget_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct ABioVehicleBase_GetDisMountMontage_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	TEnumAsByte<EMountFromDirection>                   FromDirection;                                            
	struct FMountMontagePair                           ReturnValue;                                              
};


struct ABioVehicleBase_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              
};


struct ABioVehicleBase_GetBodyShapeComponent_Params
{
	class UBoxComponent*                               ReturnValue;                                              
};


struct ABioVehicleBase_GetBioVehicleStateComponent_Params
{
	class UBioVehicleStateComponent*                   ReturnValue;                                              
};


struct ABioVehicleBase_GetBioVehicleMovement_Params
{
	class UBioVehicleMovementComponent*                ReturnValue;                                              
};


struct ABioVehicleBase_GetBioVehicleAIC_Params
{
	class ABioVehicleAIController*                     ReturnValue;                                              
};


struct ABioVehicleBase_GetBioAgentMoveComp_Params
{
	class UBioVehicleAgentMoveComponent*               ReturnValue;                                              
};


struct ABioVehicleBase_GetBaseTranslationOffset_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ABioVehicleBase_GetAnimListComponent_Params
{
	class UBioVehicleAnimListComponent*                ReturnValue;                                              
};


struct ABioVehicleBase_GetActivedRiderAnimInstances_Params
{
	TArray<class UVehicleCharacterAnimInstanceBase*>   ReturnValue;                                              
};


struct ABioVehicleBase_ExitVehicle_Params
{
};


struct ABioVehicleBase_EnterVehicle_Params
{
	bool                                               IsSucc;                                                   
};


struct ABioVehicleBase_ConsumeNeedPlayMountMontage_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	class UAnimMontage*                                PlayerMountMontage;                                       
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_ClientExitVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ABioVehicleBase_ClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ABioVehicleBase_CheckVehicleEmbeddedInGround_Params
{
	float                                              DeltaTime;                                                
};


struct ABioVehicleBase_CheckOnMoveablePlatform_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_CanPlayVehicleShake_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_CanPlayGroundParticle_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_CanJump_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              
};


struct ABioVehicleBase_CacheInitialMeshOffset_Params
{
	struct FVector                                     MeshRelativeLocation;                                     
	struct FRotator                                    MeshRelativeRotation;                                     
};


struct ABioVehicleBase_BroadCastPlayMountMontage_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	TEnumAsByte<EMountFromDirection>                   MountFromDirection;                                       
};


struct ABioVehicleBase_BroadCastPlayingRandomIdleAnim_Params
{
	int                                                RandomIdleAnim;                                           
};


struct ABioVehicleBase_BpHandleDeviceLevel_Params
{
	int                                                DeviceLevel;                                              
};


struct ABioVehicleBase_BlowUpBioVehicle_Params
{
	struct FVector                                     LaunchVel;                                                
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComp;                                                  
};


struct ABioVehicleBase_ActiveRagDoll_Params
{
};


struct ABioVehicleBase_ActiveFootParticleEffect_Params
{
	struct FName                                       EffectName;                                               
	struct FVector                                     ActivedLocation;                                          
};


struct APterosaurVehicle_TryFlyingDive_Params
{
	bool                                               bTry;                                                     
};


struct APterosaurVehicle_TryCancelSwoopDown_Params
{
};


struct APterosaurVehicle_ServerSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           
	bool                                               IsForceEnd;                                               
};


struct APterosaurVehicle_ServerReleaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       Requester;                                                
};


struct APterosaurVehicle_OnRep_SyncSwoopCatchState_Params
{
};


struct APterosaurVehicle_OnPterosaurSwoopStateChanged_Params
{
	EPterosaurSwoopStage                               NewStage;                                                 
	struct FVector                                     TargetLocation;                                           
};


struct APterosaurVehicle_OnPterosaurPrepareCatch_Params
{
};


struct APterosaurVehicle_OnClientExitFromPterosaur_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct APterosaurVehicle_MultiCast_SwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           
};


struct APterosaurVehicle_MultiCast_SplineCorrect_Params
{
	struct FVector                                     SyncLocation;                                             
	struct FVector                                     TargetLocation;                                           
	TArray<struct FVector>                             SplinePoints;                                             
};


struct APterosaurVehicle_IsSwoopDown_Params
{
	bool                                               ReturnValue;                                              
};


struct APterosaurVehicle_IsSwoopCoolDown_Params
{
	bool                                               ReturnValue;                                              
};


struct APterosaurVehicle_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              
};


struct APterosaurVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct APterosaurVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct APterosaurVehicle_GetPterosaurMovementComponent_Params
{
	class UPterosaurMovementComponent*                 ReturnValue;                                              
};


struct APterosaurVehicle_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              
};


struct APterosaurVehicle_ForceCatchCharacter_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	bool                                               ReturnValue;                                              
};


struct APterosaurVehicle_DoSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           
	bool                                               ReturnValue;                                              
};


struct APterosaurVehicle_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              
};


struct APterosaurVehicle_BroadCastOnPterosaurPrepareCatch_Params
{
};


struct APterosaurVehicle_BPOnPterosaurSwoopStateChanged_Params
{
	unsigned char                                      NewStage;                                                 
};


struct APterosaurVehicle_BPMultiCastSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           
};


struct AAircraftVehicleBase_RecoverInput_Params
{
};


struct AAircraftVehicleBase_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              
};


struct AAircraftVehicleBase_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct AAircraftVehicleBase_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct AAircraftVehicleBase_ConsumeNeedPlayMountMontage_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	class UAnimMontage*                                PlayerMountMontage;                                       
	bool                                               ReturnValue;                                              
};


struct UAmphibiousBoatDust_OnEnterWater_Params
{
	bool                                               IsInWater;                                                
};


struct UAmphibiousBoatAudioMovement_OnVehicleHealthStateChange_Params
{
	ESTExtraVehicleHealthState                         InHealthState;                                            
};


struct UAmphibiousBoatAudioMovement_OnPassengersRep_Params
{
};


struct UAmphibiousBoatAudioMovement_OnFuelRunOut_Params
{
	float                                              MaxFuel;                                                  
};


struct UAmphibiousBoatAudioMovement_OnClientDriverChange_Params
{
	class ASTExtraBaseCharacter*                       LastDriver;                                               
	class ASTExtraBaseCharacter*                       NewDriver;                                                
};


struct AAmphibiousSlidingVehicle_OnRep_WaterState_Params
{
};


struct AAmphibiousSlidingVehicle_OnRep_UseSyncatClient_Params
{
};


struct AAmphibiousSlidingVehicle_HandleContactWater_Params
{
	bool                                               bInContactingWater;                                       
};


struct AAmphibiousSlidingVehicle_GetFloatingVehicleMovement_Params
{
	class UFloatingVehicleVehicleMovementComponent2*   ReturnValue;                                              
};


struct UAnimationLocomotionLibrary_PredictGroundMovementStopLocation_Params
{
	class UBioVehicleMovementComponent*                InBioMovement;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UAnimationLocomotionLibrary_GetFloatCurveTimeByCurveValue_Params
{
	class UCurveFloat*                                 InCurve;                                                  
	float                                              CurveValue;                                               
	TArray<float>                                      OutTimes;                                                 
};


struct UAnimationLocomotionLibrary_GetCurveValueByAnimTime_Params
{
	class UAnimSequence*                               InAnimSequence;                                           
	struct FName                                       InCurveName;                                              
	float                                              InAnimTime;                                               
	float                                              ReturnValue;                                              
};


struct UAnimationLocomotionLibrary_GetBoneTransformCSByFrameCount_Params
{
	class UAnimSequence*                               InAnimSequence;                                           
	struct FName                                       InBoneName;                                               
	int                                                FrameCount;                                               
	struct FTransform                                  OutTransform;                                             
	bool                                               bExtractRootMotion;                                       
	bool                                               bUseRawDate;                                              
	bool                                               ReturnValue;                                              
};


struct UAnimationLocomotionLibrary_GetBoneTransformCSByAnimTime_Params
{
	class UAnimSequence*                               InAnimSequence;                                           
	struct FName                                       InBoneName;                                               
	float                                              InAnimTime;                                               
	struct FTransform                                  OutTransform;                                             
	bool                                               bExtractRootMotion;                                       
	bool                                               bUseRawDate;                                              
	bool                                               ReturnValue;                                              
};


struct UAnimationLocomotionLibrary_GetAnimTimeByCurveValue_Params
{
	class UAnimSequence*                               InAnimSequence;                                           
	struct FName                                       InCurveName;                                              
	float                                              CurveValue;                                               
	TArray<float>                                      OutTimes;                                                 
};


struct UAnimInstance_AuroraLocomotion_SetSecondJumpSerial_Params
{
	int                                                NewSerial;                                                
};


struct UAnimInstance_AuroraSlidingRail_SetSecondJumpSerial_Params
{
	int                                                NewSerial;                                                
};


struct UAnimInstance_FreeWallClimbing_OnWallClimbIdleChanged_Params
{
	bool                                               bIsIdle;                                                  
};


struct UAnimInstance_FreeWallClimbing_OnFreeWallRunStartOrEnd_Params
{
	bool                                               bStart;                                                   
};


struct UAnimInstance_LocomotionSP_OnOwnerPreDoJump_Params
{
};


struct UAnimInstance_LocomotionSP_OnGroundIdleChanged_Params
{
	bool                                               bInIdle;                                                  
};


struct UAnimInstanceDiving_OnHandlePlayerAnimMontagePlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
	bool                                               bOnlyJumpToSectionWhilePlaying;                           
	struct FName                                       IgnoreStopSection;                                        
};


struct UAnimInstanceLeggedAnimal_SetRunStop_Params
{
};


struct UAnimInstanceLeggedAnimal_SetJump_Params
{
	int                                                JumpCount;                                                
};


struct UAnimInstanceLeggedAnimal_SetAnimVault_Params
{
};


struct UAnimInstanceLeggedAnimal_ResetRunStop_Params
{
};


struct UAnimInstanceLeggedAnimal_ResetJump_Params
{
};


struct UAnimInstanceLeggedAnimal_ResetAnimVault_Params
{
};


struct UAnimInstanceLeggedAnimal_HandlePlayerAnimMontageExtraPlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
	bool                                               bOnlyJumpToSectionWhilePlaying;                           
	struct FName                                       IgnoreStopSection;                                        
};


struct UAnimInstanceLeggedAnimal_CalcWallRunParams_Params
{
};


struct UAnimInstanceLeggedAnimal_CalcMoveDirection_Params
{
	float                                              DeltaTime;                                                
};


struct UAnimInstanceLeggedAnimal_CalcHurtDir_Params
{
};


struct UAnimInstanceLeggedAnimal_CalcGaitAndStride_Params
{
};


struct UAnimInstanceWingFlyAnimal_InitSyncNode_Params
{
};


struct UProceduralWalkInterface_OnGroupUp_Params
{
	int                                                GroupIndex;                                               
	struct FVector                                     AverageFeetLocation;                                      
};


struct UProceduralWalkInterface_OnGroupDown_Params
{
	int                                                GroupIndex;                                               
	struct FVector                                     AverageFeetLocation;                                      
};


struct UProceduralWalkInterface_OnFootUp_Params
{
	int                                                LegIndex;                                                 
	struct FName                                       TipBone;                                                  
	struct FVector                                     FootLocation;                                             
};


struct UProceduralWalkInterface_OnFootDown_Params
{
	int                                                LegIndex;                                                 
	struct FName                                       TipBone;                                                  
	struct FVector                                     FootLocation;                                             
};


struct UAnimNotifyState_EarlyBlendOutBase_Received_CanBlendOut_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            
	class UAnimMontage*                                InMontage;                                                
	bool                                               ReturnValue;                                              
};


struct UAnimPoseRecorder_GetBoneTransform_Params
{
	struct FName                                       InBoneName;                                               
	struct FRecordBoneData                             ReturnValue;                                              
};


struct UAnimSequenceBoneTransformData_GetSequenceBoneTransformByFrame_Params
{
	class UAnimSequence*                               InSequence;                                               
	struct FName                                       InBoneName;                                               
	int                                                Frame;                                                    
	struct FTransform                                  OutTransform;                                             
	bool                                               ReturnValue;                                              
};


struct UAnimSequenceBoneTransformData_GetSequenceBoneTransform_Params
{
	class UAnimSequence*                               InSequence;                                               
	struct FName                                       InBoneName;                                               
	float                                              InTime;                                                   
	struct FTransform                                  OutTransform;                                             
	bool                                               ReturnValue;                                              
};


struct UAnimUtilBlueprintFunctions_MirrorVector_Params
{
	struct FVector                                     V;                                                        
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               
	struct FVector                                     ReturnValue;                                              
};


struct UAnimUtilBlueprintFunctions_MirrorQuat_Params
{
	struct FRotator                                    Q;                                                        
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               
	struct FRotator                                    ReturnValue;                                              
};


struct UAttachedActorAnimInstance_SetOverrideOwnerCharacter_Params
{
	class ASTExtraBaseCharacter*                       InOwnerCharacter;                                         
};


struct UAttachedActorAnimInstance_OnInit_Params
{
};


struct UAttachedActorAnimInstance_OnCacheAnimVars_Params
{
	class UCachedAnimListComponentBase*                CachedAnimListComponent;                                  
	struct FString                                     CacheReason;                                              
};


struct UAttachedActorAnimInstance_HandlePlayerAnimMontagePlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
};


struct UAttachedActorAnimInstance_HandlePlayerAnimMontageExtraPlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
	bool                                               bOnlyJumpToSectionWhilePlaying;                           
	struct FName                                       IgnoreStopSection;                                        
};


struct UAttachedActorAnimInstance_HandleOwnerActorAttachmentChanged_Params
{
};


struct UAttachedActorAnimInstance_ForceTriggerNotifyEndEvent_Params
{
};


struct UAttractMovementComponent_StopAttract_Params
{
};


struct UAttractMovementComponent_StartAttractTo_Params
{
	class AActor*                                      InTargetActor;                                            
};


struct UAttractMovementComponent_OnRep_TargetActor_Params
{
};


struct UAttractMovementComponent_IsAttracting_Params
{
	bool                                               ReturnValue;                                              
};


struct UAttractMovementComponent_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct AAuthorityMoveLuaCharacter_AddRotatorInput_Params
{
	float                                              YawVal;                                                   
	float                                              PitchVal;                                                 
	float                                              RollVal;                                                  
};


struct UAutoTestManagerBPLibrary_StopMergedTest_Params
{
};


struct UAutoTestManagerBPLibrary_StartMergedTestFromFileWithNum_Params
{
	float                                              TestIntervel;                                             
	int                                                MergedNum;                                                
	int                                                OriginNum;                                                
};


struct UAutoTestManagerBPLibrary_StartMergedTestFromFile_Params
{
	float                                              TestIntervel;                                             
};


struct UAutoTestManagerBPLibrary_StartMergedTestFromAISuitNum_Params
{
	float                                              TestIntervel;                                             
	int                                                MergedNum;                                                
	int                                                OriginNum;                                                
};


struct UAutoTestManagerBPLibrary_StartMergedRandomTestWithNum_Params
{
	float                                              TestIntervel;                                             
	int                                                TestNum;                                                  
	int                                                MergedNum;                                                
	int                                                OriginNum;                                                
};


struct UAutoTestManagerBPLibrary_StartMergedRandomTest_Params
{
	float                                              TestIntervel;                                             
	int                                                TestNum;                                                  
};


struct UAutoTestManagerBPLibrary_StartMergedAllTestWithNum_Params
{
	float                                              TestIntervel;                                             
	int                                                MergedNum;                                                
	int                                                OriginNum;                                                
};


struct UAutoTestManagerBPLibrary_StartMergedAllTest_Params
{
	float                                              TestIntervel;                                             
};


struct UAutoTestManagerBPLibrary_ResumeMergedTest_Params
{
};


struct UAutoTestManagerBPLibrary_PauseMergedTest_Params
{
};


struct UAutoTestManagerBPLibrary_GetMergedTestState_Params
{
	int                                                ReturnValue;                                              
};


struct UAvatarMergeUnit_OnAvatarMeshMaterialApplyed_Params
{
	class UMeshComponent*                              MeshComponent;                                            
};


struct UAvatarMergeUnit_OnAvatarMeshBeforeLoaded_Params
{
};


struct UAvatarMergeUnit_OnAvatarAsyncTaskFinished_Params
{
	uint32_t                                           RequestID;                                                
};


struct UAvatarMergeUnit_OnAvatarAllMeshLoaded_Params
{
};


struct UAxisLockedSpringArmComponent_SetRotationAxisInheritance_Params
{
	bool                                               bInInheritPitch;                                          
	bool                                               bInInheritYaw;                                            
	bool                                               bInInheritRoll;                                           
};


struct UAxisLockedSpringArmComponent_SetPositionLagAxisLockType_Params
{
	EAxisLockType                                      NewAxisLockType;                                          
};


struct UAxisLockedSpringArmComponent_SetInheritYaw_Params
{
	bool                                               bInherit;                                                 
};


struct UAxisLockedSpringArmComponent_SetInheritRoll_Params
{
	bool                                               bInherit;                                                 
};


struct UAxisLockedSpringArmComponent_SetInheritPitch_Params
{
	bool                                               bInherit;                                                 
};


struct UAxisLockedSpringArmComponent_SetAxisLockType_Params
{
	EAxisLockType                                      NewAxisLockType;                                          
};


struct UAxisLockedSpringArmComponent_SetAbsoluteRotationOverride_Params
{
	struct FRotator                                    NewAbsoluteRotation;                                      
};


struct UAxisLockedSpringArmComponent_ProcessRotationAxisControl_Params
{
	struct FRotator                                    InRotation;                                               
	struct FRotator                                    ReturnValue;                                              
};


struct UAxisLockedSpringArmComponent_ProcessPositionLagAxisLock_Params
{
	struct FVector                                     CurrentLoc;                                               
	struct FVector                                     TargetLoc;                                                
	float                                              DeltaTime;                                                
	float                                              LagSpeed;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct UAxisLockedSpringArmComponent_IsInheritingYaw_Params
{
	bool                                               ReturnValue;                                              
};


struct UAxisLockedSpringArmComponent_IsInheritingRoll_Params
{
	bool                                               ReturnValue;                                              
};


struct UAxisLockedSpringArmComponent_IsInheritingPitch_Params
{
	bool                                               ReturnValue;                                              
};


struct UAxisLockedSpringArmComponent_GetPositionLagAxisLockType_Params
{
	EAxisLockType                                      ReturnValue;                                              
};


struct UAxisLockedSpringArmComponent_GetAxisLockType_Params
{
	EAxisLockType                                      ReturnValue;                                              
};


struct UFlyingMoveBaseObj_StopSprint_Params
{
};


struct UFlyingMoveBaseObj_StopFollow_Params
{
};


struct UFlyingMoveBaseObj_StartSprint_Params
{
	struct FFlySprintParams                            Params;                                                   
};


struct UFlyingMoveBaseObj_StartFollow_Params
{
	class AActor*                                      Target;                                                   
	struct FFlyFollowParams                            Params;                                                   
};


struct UFlyingMoveBaseObj_SetRisingInput_Params
{
	float                                              Rate;                                                     
};


struct UFlyingMoveBaseObj_SetMovementDisabled_Params
{
	bool                                               bDisabled;                                                
};


struct UFlyingMoveBaseObj_SetCustomMoveComponent_Params
{
	class USceneComponent*                             InComponent;                                              
};


struct UFlyingMoveBaseObj_ReapplyEnterParams_Params
{
};


struct UFlyingMoveBaseObj_OnRestoreCapsuleAllFailed_Params
{
	struct FVector                                     FallbackLocation;                                         
};


struct UFlyingMoveBaseObj_IsSprinting_Params
{
	bool                                               ReturnValue;                                              
};


struct UFlyingMoveBaseObj_IsOnGround_Params
{
	bool                                               ReturnValue;                                              
};


struct UFlyingMoveBaseObj_IsMovementDisabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UFlyingMoveBaseObj_IsHuggingGround_Params
{
	bool                                               ReturnValue;                                              
};


struct UFlyingMoveBaseObj_IsFollowing_Params
{
	bool                                               ReturnValue;                                              
};


struct UFlyingMoveBaseObj_GetSprintElapsedTime_Params
{
	float                                              ReturnValue;                                              
};


struct UFlyingMoveBaseObj_GetFollowTarget_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UFlyingMoveBaseObj_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              
};


struct UFlyingMoveBaseObj_GetDistanceToCeiling_Params
{
	float                                              ReturnValue;                                              
};


struct UBatSwarmMoveObj_UpdateCapsuleAfterMoveBlocked_Params
{
	struct FHitResult                                  Hit;                                                      
	struct FVector                                     Vel;                                                      
	float                                              DeltaTime;                                                
	struct FVector                                     RampVector;                                               
	bool                                               bShouldSweep;                                             
	struct FTransform                                  SavedCapsuleWorldTransform;                               
	bool                                               ReturnValue;                                              
};


struct UBatSwarmMoveObj_RestoreHumanForm_Params
{
	bool                                               bTryCrouch;                                               
	bool                                               bTryProne;                                                
};


struct UBatSwarmMoveObj_PushLegalLocation_Params
{
	struct FVector                                     Loc;                                                      
};


struct UBatSwarmMoveObj_OnReformHuman_Params
{
};


struct UBatSwarmMoveObj_OnEnterBatSwarm_Params
{
};


struct UBatSwarmMoveObj_LeaveBatSwarm_Params
{
};


struct UBatSwarmMoveObj_IsInSwarmMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UBatSwarmMoveObj_IsCapsuleBlockedAt_Params
{
	struct FVector                                     Loc;                                                      
	float                                              HalfHeight;                                               
	bool                                               ReturnValue;                                              
};


struct UBatSwarmMoveObj_IsCapsuleBlockedAhead_Params
{
	float                                              HalfHeight;                                               
	bool                                               ReturnValue;                                              
};


struct UBatSwarmMoveObj_HandleWallClimb_Params
{
	struct FHitResult                                  Hit;                                                      
};


struct UBatSwarmMoveObj_GetCapsuleRadiusSafe_Params
{
	float                                              ReturnValue;                                              
};


struct UBatSwarmMoveObj_FindScatterSafeLocation_Params
{
	struct FVector                                     Center;                                                   
	float                                              HalfHeight;                                               
	struct FVector                                     OutSafeLoc;                                               
	bool                                               ReturnValue;                                              
};


struct UBatSwarmMoveObj_EnterBatSwarm_Params
{
};


struct UBatSwarmMoveObj_ApplyReplicatedCapsuleHalfHeight_Params
{
	float                                              NewHalfHeight;                                            
};


struct UBatSwarmMoveObj_ApplyCapsuleHalfHeight_Params
{
	float                                              NewHalfHeight;                                            
	bool                                               bUpdateOverlaps;                                          
};


struct ABeamEffectMoveActor_SetBeamEffectData_Params
{
	struct FBeamEffectDataParams                       InBeamEffectData;                                         
};


struct ABeamEffectMoveActor_RefreshEffectLocation_Params
{
};


struct ABeamEffectMoveActor_OnRep_BeamMoveEffectData_Params
{
};


struct UBioVehicleMovementComponent_UnpackAccelerationToInput_Params
{
	struct FVector                                     InAccel;                                                  
};


struct UBioVehicleMovementComponent_TickSpecialMoves_Params
{
	float                                              DeltaTime;                                                
};


struct UBioVehicleMovementComponent_StartSpecialMove_Params
{
	struct FGameplayTag                                MoveType;                                                 
};


struct UBioVehicleMovementComponent_ShouldRecordPosition_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_ShouldOptimizeTick_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_SetWalkableFloorZ_Params
{
	float                                              InWalkableFloorZ;                                         
};


struct UBioVehicleMovementComponent_SetWalkableFloorAngle_Params
{
	float                                              InWalkableFloorAngle;                                     
};


struct UBioVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              Rate;                                                     
};


struct UBioVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              Rate;                                                     
};


struct UBioVehicleMovementComponent_SetRisingInput_Params
{
	float                                              Rate;                                                     
};


struct UBioVehicleMovementComponent_SetNeedLerpRequestedVelocity_Params
{
	bool                                               bin;                                                      
};


struct UBioVehicleMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UBioVehicleMovementComponent_SetGroupsToIgnoreMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UBioVehicleMovementComponent_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               
};


struct UBioVehicleMovementComponent_SetGroupsToAvoidMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UBioVehicleMovementComponent_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               
};


struct UBioVehicleMovementComponent_SetDefaultMovementMode_Params
{
};


struct UBioVehicleMovementComponent_SetAvoidanceGroupMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UBioVehicleMovementComponent_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               
};


struct UBioVehicleMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  
};


struct UBioVehicleMovementComponent_SetAcceptInput_Params
{
	bool                                               bIsAccept;                                                
};


struct UBioVehicleMovementComponent_ServerStartBlowUpCharacter_Params
{
	float                                              TimeStamp;                                                
	int                                                BlowID;                                                   
	struct FVector_NetQuantize10                       LaunchVel;                                                
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComponent;                                             
};


struct UBioVehicleMovementComponent_ServerSetThrottleInput_Params
{
	float                                              Rate;                                                     
};


struct UBioVehicleMovementComponent_ServerSetSteeringInput_Params
{
	float                                              Rate;                                                     
};


struct UBioVehicleMovementComponent_ServerSetRisingInput_Params
{
	float                                              Rate;                                                     
};


struct UBioVehicleMovementComponent_ServerMovePacked_ClientSend_Params
{
	struct FCharacterServerMovePackedBits              PackedBits;                                               
};


struct UBioVehicleMovementComponent_ServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             
	struct FVector_NetQuantize10                       OldAccel;                                                 
	unsigned char                                      OldMoveFlags;                                             
};


struct UBioVehicleMovementComponent_ServerMoveDualHybridRootMotion_Params
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


struct UBioVehicleMovementComponent_ServerMoveDual_Params
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


struct UBioVehicleMovementComponent_ServerMove_Params
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


struct UBioVehicleMovementComponent_ServerForceEndSpecialMove_Params
{
	EEndSpecialMoveReason                              Reason;                                                   
};


struct UBioVehicleMovementComponent_PredictGroundMovementStopLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_PredictGroundMovementPivotLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_PackInputToAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_OnRep_SpecialMoveType_Params
{
	struct FGameplayTag                                LastMoveType;                                             
};


struct UBioVehicleMovementComponent_OnRep_RepDynamicCapsuleRadius_Params
{
	float                                              OldRadius;                                                
};


struct UBioVehicleMovementComponent_OnRep_OverrideMaxWalkSpeed_Params
{
};


struct UBioVehicleMovementComponent_OnRep_OverrideMaxSwimSpeed_Params
{
};


struct UBioVehicleMovementComponent_OnRep_HandBrakeRate_Params
{
	float                                              OldValue;                                                 
};


struct UBioVehicleMovementComponent_OnRecoverOnServer_Params
{
};


struct UBioVehicleMovementComponent_OnLostOnServer_Params
{
};


struct UBioVehicleMovementComponent_MulticastForceEndSpecialMove_Params
{
	struct FGameplayTag                                MoveType;                                                 
	EEndSpecialMoveReason                              Reason;                                                   
};


struct UBioVehicleMovementComponent_ModifyCapsuleRadius_Params
{
	float                                              NewRadius;                                                
	bool                                               bUpdate;                                                  
};


struct UBioVehicleMovementComponent_LockComponentTick_Params
{
	bool                                               InLock;                                                   
};


struct UBioVehicleMovementComponent_LimitFloorNormalTo_Params
{
	struct FVector                                     InNormal;                                                 
	float                                              Degree;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_K2_GetWalkableFloorZ_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_K2_GetWalkableFloorAngle_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_K2_GetModifiedMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_K2_FindFloor_Params
{
	struct FVector                                     CapsuleLocation;                                          
	struct FFindFloorResult                            FloorResult;                                              
};


struct UBioVehicleMovementComponent_K2_ComputeFloorDist_Params
{
	struct FVector                                     CapsuleLocation;                                          
	float                                              LineDistance;                                             
	float                                              SweepDistance;                                            
	float                                              SweepRadius;                                              
	struct FFindFloorResult                            FloorResult;                                              
};


struct UBioVehicleMovementComponent_JumpOff_Params
{
	class AActor*                                      MovementBaseActor;                                        
};


struct UBioVehicleMovementComponent_IsWalking_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsWalkable_Params
{
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsSwimming_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsSimulateMoveWithLOD_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsSeriousInjuriedAllowJumping_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsMoveStationaryStopSendEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsInSpecialMove_S_Params
{
	struct FGameplayTag                                SMType;                                                   
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsInSpecialMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsComponentTickLocked_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsBeingBlew_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_IsAckPawnRecoveryEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_InitializeSpecialMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_HasContinuousMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct UBioVehicleMovementComponent_HandleOnSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            LastSeatType;                                             
	int                                                LastSeatIdx;                                              
	ESTExtraVehicleSeatType                            NewSeatType;                                              
	int                                                NewSeatIdx;                                               
};


struct UBioVehicleMovementComponent_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct UBioVehicleMovementComponent_HandleOnExitVehicleAnim_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	int                                                SeatInx;                                                  
};


struct UBioVehicleMovementComponent_GetWalkingDecResistance_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetValidPerchRadius_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetSpecialMoveByTag_Params
{
	struct FGameplayTag                                MoveType;                                                 
	class UBioSpecialMoveCompBase*                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetSlopeSpeedFactor_Params
{
	float                                              Slope;                                                    
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetRisingInput_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetPredictVelocity_Params
{
	float                                              PredictTime;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetPerchRadiusThreshold_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetMinAnalogSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetMaxJumpHeightWithJumpTime_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetMaxJumpHeight_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetJumpVelocityZ_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetJumpingHeightBySpeed_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetJumpingHeightByObsHeight_Params
{
	float                                              ObsHeight;                                                
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetImpartedMovementBaseVelocity_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetHeadAdjustRotationOnSlope_Params
{
	struct FQuat                                       InQuat;                                                   
	struct FVector                                     SlopeNormal;                                              
	struct FQuat                                       ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetDesireAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetCurrentSpecialMoveComp_Params
{
	class UBioSpecialMoveCompBase*                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetCurrentSecuritySpeedRatio_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetCurrentMaxAllowedSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetBreakAcceleration_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetAngularVelocityByCurve_Params
{
	float                                              Speed;                                                    
	bool                                               AsForce;                                                  
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetAnalogInputModifier_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetAdjustRotationOnSlope_Params
{
	struct FQuat                                       InQuat;                                                   
	struct FVector                                     SlopeNormal;                                              
	struct FQuat                                       ReturnValue;                                              
};


struct UBioVehicleMovementComponent_GetAcceptInput_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_ForceSyncServerMove_Params
{
};


struct UBioVehicleMovementComponent_ForceRecordCurrentResolveLoc_Params
{
};


struct UBioVehicleMovementComponent_ForceCurrentFrameNoCombine_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_ForceClearHistoryResolveData_Params
{
};


struct UBioVehicleMovementComponent_EndSpecialMove_Params
{
	EEndSpecialMoveReason                              Reason;                                                   
};


struct UBioVehicleMovementComponent_DisableMovement_Params
{
};


struct UBioVehicleMovementComponent_DisableCheckJumpHeight_Params
{
	float                                              DurationTime;                                             
};


struct UBioVehicleMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                
};


struct UBioVehicleMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float                                              TimeStamp;                                                
	struct FVector                                     NewLoc;                                                   
	class UPrimitiveComponent*                         NewBase;                                                  
	struct FName                                       NewBaseBoneName;                                          
	bool                                               bHasBase;                                                 
	bool                                               bBaseRelativePosition;                                    
	unsigned char                                      ServerMovementMode;                                       
};


struct UBioVehicleMovementComponent_ClientAdjustSpecialMovePosition_Params
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


struct UBioVehicleMovementComponent_ClientAdjustRootMotionSourcePosition_Params
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


struct UBioVehicleMovementComponent_ClientAdjustRootMotionPosition_Params
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


struct UBioVehicleMovementComponent_ClientAdjustPositionAndRotation_Params
{
	float                                              TimeStamp;                                                
	struct FVector                                     NewLoc;                                                   
	struct FRotator                                    NewRot;                                                   
	struct FVector                                     NewVel;                                                   
	class UPrimitiveComponent*                         NewBase;                                                  
	struct FName                                       NewBaseBoneName;                                          
	bool                                               bHasBase;                                                 
	bool                                               bBaseRelativePosition;                                    
	unsigned char                                      ServerMovementMode;                                       
};


struct UBioVehicleMovementComponent_ClientAdjustPosition_Params
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


struct UBioVehicleMovementComponent_ClientAckGoodMove_Params
{
	float                                              TimeStamp;                                                
};


struct UBioVehicleMovementComponent_ClearPassWallIgnoreActors_Params
{
	float                                              DeltaTime;                                                
};


struct UBioVehicleMovementComponent_ClearAccumulatedForces_Params
{
};


struct UBioVehicleMovementComponent_CheckCanExecSpecialMoveDelegate__DelegateSignature_Params
{
	struct FGameplayTag                                MoveType;                                                 
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	int                                                OtherBodyIndex;                                           
	bool                                               bFromSweep;                                               
	struct FHitResult                                  SweepResult;                                              
};


struct UBioVehicleMovementComponent_CanStartSpecialMove_Params
{
	struct FGameplayTag                                MoveType;                                                 
	struct FString                                     OutReason;                                                
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_CalcVelocity_Params
{
	float                                              DeltaTime;                                                
	float                                              Friction;                                                 
	bool                                               bFluid;                                                   
	float                                              BrakingDeceleration;                                      
};


struct UBioVehicleMovementComponent_CalculateVelocityWithResistance_Params
{
	float                                              DeltaTime;                                                
	bool                                               bFluid;                                                   
};


struct UBioVehicleMovementComponent_CalculateCurrentForwardSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UBioVehicleMovementComponent_CalcAcceleration_Params
{
	float                                              DeltaTime;                                                
};


struct UBioVehicleMovementComponent_BioVehicleSpecialMoveStateChangeDelegate__DelegateSignature_Params
{
	bool                                               IsInSpecialMove;                                          
	struct FGameplayTag                                MoveType;                                                 
	EEndSpecialMoveReason                              EndReason;                                                
};


struct UBioVehicleMovementComponent_BioVehicleAntiVelocityBeyondLimitDelegate__DelegateSignature_Params
{
	class ABioVehicleBase*                             BioVehicle;                                               
	struct FVector                                     OldLocation;                                              
	struct FVector                                     NewLocation;                                              
	struct FVector                                     OldVelocity;                                              
	struct FVector                                     NewVelocity;                                              
	bool                                               ReturnValue;                                              
};


struct UBioVehicleMovementComponent_BioSMForceEndDelegate__DelegateSignature_Params
{
	struct FGameplayTag                                MoveType;                                                 
	EEndSpecialMoveReason                              EndReason;                                                
};


struct UBioVehicleMovementComponent_BioSMClientReceiveAdjustmentDelegate__DelegateSignature_Params
{
	struct FGameplayTag                                MoveType;                                                 
	EEndSpecialMoveReason                              EndReason;                                                
};


struct UBioVehicleMovementComponent_ApplySpeedRatio_Params
{
	float                                              Ratio;                                                    
};


struct UBioVehicleMovementComponent_AdjustHeadCapsuleOnSlope_Params
{
	float                                              DeltaTime;                                                
};


struct UBioVehicleMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  
	bool                                               bVelocityChange;                                          
};


struct UBioVehicleMovementComponent_AddForce_Params
{
	struct FVector                                     Force;                                                    
};


struct UBioVehicleMovementComponent_AddDirectionalBrakingAcceleration_Params
{
	struct FVector                                     BrakingAcceleration;                                      
};


struct UBioBaseFlyComponent_StartTakingOff_Params
{
};


struct UBioBaseFlyComponent_StartLanding_Params
{
};


struct UBioBaseFlyComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UBioBaseFlyComponent_PostCalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UBioBaseFlyComponent_OnRep_OverrideMaxFlySpeed_Params
{
};


struct UBioBaseFlyComponent_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioBaseFlyComponent_IsLanding_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioBaseFlyComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioBaseFlyComponent_GetMoveState_Params
{
	EFlyBioVehicleBaseMoveMode                         ReturnValue;                                              
};


struct UBioBaseFlyComponent_GetFlyingConfig_Params
{
	struct FFlyBioVehicleFlyingConfig                  ReturnValue;                                              
};


struct UBioBaseFlyComponent_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              
};


struct UBioBaseFlyComponent_ExitLanding_Params
{
};


struct UBioBaseFlyComponent_EndTakingOff_Params
{
};


struct UBioBaseFlyComponent_EndLanding_Params
{
};


struct UBioBaseFlyComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UBioBaseFlyComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                
};


struct UBioFlyMovementComponentBase_UpdateVerticalHeight_Params
{
	float                                              DeltaTime;                                                
};


struct UBioFlyMovementComponentBase_StartTakingOff_Params
{
};


struct UBioFlyMovementComponentBase_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UBioFlyMovementComponentBase_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioFlyMovementComponentBase_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioFlyMovementComponentBase_GetMoveState_Params
{
	EFlyBioVehicleMoveMode                             ReturnValue;                                              
};


struct UBioFlyMovementComponentBase_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              
};


struct UBioFlyMovementComponentBase_EndTakingOff_Params
{
};


struct UBioFlyMovementComponentBase_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UBioFlyMovementComponentBase_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                
};


struct ABioFlyVehicleBase_OnClientExitFromBioFlyVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ABioFlyVehicleBase_HandleVehicleHealthDestroy_Params
{
};


struct ABioFlyVehicleBase_GetBioFlyMovementComponent_Params
{
	class UBioBaseFlyComponent*                        ReturnValue;                                              
};


struct ABioSnowboard_ServerUpdateState_Params
{
	struct FBioSnowboardInputState                     InState;                                                  
};


struct ABioSnowboard_OnRep_InputState_Params
{
};


struct ABioSnowboard_GetSnowboardMovementComponent_Params
{
	class UBioSnowboardMovementComponent*              ReturnValue;                                              
};


struct ULandingCreatureAnimInstance_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct ULandingCreatureAnimInstance_GetLuaDebugString_Params
{
	int                                                DebugLevel;                                               
	struct FString                                     ReturnValue;                                              
};


struct ULandingCreatureAnimInstance_DoRandomIdle_Params
{
	int                                                Index;                                                    
};


struct ULandingCreatureAnimInstance_BpHandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct ULandingCreatureDriverAnimInstance_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct ULandingCreatureDriverAnimInstance_DoRandomIdle_Params
{
	int                                                Index;                                                    
};


struct ULandingCreatureDriverAnimInstance_BpHandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct UBioSnowboardMovementComponent_SetSpecialJumpAreaState_Params
{
	bool                                               bInSpecialJumpArea;                                       
};


struct UBioSnowboardMovementComponent_SetHandbrakeInput_Params
{
	float                                              Rate;                                                     
};


struct UBioSnowboardMovementComponent_ServerSetHandbrakeInput_Params
{
	float                                              Rate;                                                     
};


struct UBioSnowboardMovementComponent_GetEffectiveSurfaceType_Params
{
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              
};


struct UBioSnowboardMovementComponent_GetCurrentSurfaceType_Params
{
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              
};


struct UBioSpecialMoveCompBase_OnSpecialMoveStart_Params
{
};


struct UBioSpecialMoveCompBase_OnSpecialMoveEnd_Params
{
};


struct UBioSpecialMoveCompBase_OnMovementModeChangedDelegate_Params
{
	class ABioVehicleBase*                             Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct UBioSpecialMoveCompBase_Deactivate_Params
{
};


struct UBioSpecialMoveCompBase_ClearSpecialData_Params
{
};


struct UBioSpecialMoveCompBase_CheckCanExecSM_Params
{
	struct FString                                     OutErrCode;                                               
	bool                                               ReturnValue;                                              
};


struct UBioSpecialMoveCompBase_AddSpecialData_Vector_Params
{
	struct FName                                       Name;                                                     
	struct FVector                                     Value;                                                    
};


struct UBioSpecialMoveCompBase_AddSpecialData_Rotator_Params
{
	struct FName                                       Name;                                                     
	struct FRotator                                    Value;                                                    
};


struct UBioSpecialMoveCompBase_AddSpecialData_Int_Params
{
	struct FName                                       Name;                                                     
	int                                                Value;                                                    
};


struct UBioSpecialMoveCompBase_AddSpecialData_Float_Params
{
	struct FName                                       Name;                                                     
	float                                              Value;                                                    
};


struct UBioSpecialMoveCompBase_AddSpecialData_Bool_Params
{
	struct FName                                       Name;                                                     
	bool                                               Value;                                                    
};


struct UBioSpecialMoveCompBase_Activate_Params
{
	bool                                               bReset;                                                   
};


struct UBioSpecialMove_Fly_SetVerticalCalcMode_Params
{
	EFlyVerticalCalcMode                               NewMode;                                                  
};


struct UBioSpecialMove_Fly_SetVelocityCalcMode_Params
{
	EFlyVelocityCalcMode                               NewMode;                                                  
};


struct UBioSpecialMove_Fly_SetActiveSpeedCurve_Params
{
	class UCurveVector*                                InCurve;                                                  
	struct FVector                                     InLockedDirection;                                        
};


struct UBioSpecialMove_Fly_GetFlyMoveState_Params
{
	EBioFlyMoveState                                   ReturnValue;                                              
};


struct UBioSpecialMove_Fly_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              
};


struct UBioSpecialMove_Stealth_TryEndStalthMove_Params
{
	EEndSpecialMoveReason                              Reason;                                                   
};


struct UBioSpecialMove_Stealth_SetStealthState_Params
{
	EStealthMoveState                                  NewState;                                                 
};


struct UBioSpecialMove_Stealth_OnRep_StealthState_Params
{
	EStealthMoveState                                  OldState;                                                 
};


struct UBioSpecialMove_Stealth_GetStealthState_Params
{
	EStealthMoveState                                  ReturnValue;                                              
};


struct UBioSpecialMove_Stealth_Client_StopStealthMove_Params
{
	EEndSpecialMoveReason                              Reason;                                                   
};


struct UBioSpecialMove_Stealth_CheckCanExecStealthHere_Params
{
	struct FString                                     OutErrCode;                                               
	struct FHitResult                                  HitResult;                                                
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAbilityAnimInstanceBase_SlotIsActived_Params
{
	struct FName                                       SlotName;                                                 
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAbilityAnimInstanceBase_HandleOnPlayerAnimInstanceDeactived_Params
{
	class UAnimInstance*                               InAnimInstance;                                           
};


struct UBioVehicleAbilityAnimInstanceBase_HandleOnPlayerAnimInstanceActived_Params
{
	class UAnimInstance*                               InAnimInstance;                                           
};


struct UBioVehicleAbilityAnimInstanceBase_GetStateMachineElapsedTime_Params
{
	struct FName                                       StateMachineName;                                         
	float                                              ReturnValue;                                              
};


struct UBioVehicleAbilityAnimInstanceBase_GetRunningMontageBySlotNames_Params
{
	TArray<struct FName>                               InSlotNames;                                              
	class UAnimMontage*                                ReturnValue;                                              
};


struct UBioVehicleAbilityAnimInstanceBase_GetRunningMontageByGroupName_Params
{
	struct FName                                       InGroupName;                                              
	class UAnimMontage*                                ReturnValue;                                              
};


struct UBioVehicleAbilityAnimInstanceBase_BpHandleOnPlayerAnimInstanceDeactived_Params
{
	class UAnimInstance*                               InAnimInstance;                                           
};


struct UBioVehicleAbilityAnimInstanceBase_BpHandleOnPlayerAnimInstanceActived_Params
{
	class UAnimInstance*                               InAnimInstance;                                           
};


struct UBioVehicleAbilityAnimInstanceBase_AnySlotIsActived_Params
{
	TArray<struct FName>                               SlotNames;                                                
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_ServerHostingMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_ServerForceFinishAgentMove_Params
{
};


struct UBioVehicleAgentMoveComponent_ServerFollowTarget_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_RspAgentMove_Params
{
	bool                                               bSuccess;                                                 
	struct FBioVHAgentMove                             InMoveData;                                               
};


struct UBioVehicleAgentMoveComponent_ResetAgentMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_ReqFinishAgentMove_Params
{
};


struct UBioVehicleAgentMoveComponent_ReqBeginAgentMove_Params
{
	struct FBioVHAgentMove                             InMoveData;                                               
};


struct UBioVehicleAgentMoveComponent_OnRep_ReplicatedBioAgentMoveData_Params
{
};


struct UBioVehicleAgentMoveComponent_OnRep_bHasNearyTargetToFollow_Params
{
	bool                                               PreValue;                                                 
};


struct UBioVehicleAgentMoveComponent_OnCharacterLeaveVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct UBioVehicleAgentMoveComponent_OnCharacterEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct UBioVehicleAgentMoveComponent_IsUnderFollowMinDistance_Params
{
	float                                              InDistance;                                               
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_IsTargetCanFollow_Params
{
	class AActor*                                      InTarget;                                                 
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_IsInAgentMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_IsFollowingTarget_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_IsAgentMoveEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_GetTargetMoveSpeed_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_GetFollowTarget_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_GetDistanceToTarget_Params
{
	class AActor*                                      InTarget;                                                 
	float                                              ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_FindNearestFollowTarget_Params
{
	class APawn*                                       ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_CheckFollowTargetIsValid_Params
{
	class AActor*                                      InTarget;                                                 
	struct FString                                     OutReason;                                                
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_ChangeFollowTarget_Params
{
	class AActor*                                      InTarget;                                                 
};


struct UBioVehicleAgentMoveComponent_CanAgentMove_Params
{
	struct FBioVHAgentMove                             InMoveData;                                               
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_CalculateHostingMoveVelocity_Params
{
	struct FVector                                     InVelocity;                                               
	float                                              DeltaTime;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UBioVehicleAgentMoveComponent_CalculateFollowingVelocity_Params
{
	struct FVector                                     InVelocity;                                               
	struct FVector                                     OutAccel;                                                 
	float                                              DeltaTime;                                                
	struct FVector                                     ReturnValue;                                              
};


struct ABioVehicleAIController_SetMoveTargetLoc_Params
{
	struct FVector                                     TargetLoc;                                                
};


struct ABioVehicleAIController_SetCaughtOwner_Params
{
	class AActor*                                      CaughtOwner;                                              
};


struct ABioVehicleAIController_RunBehaviorTreeWithIndex_Params
{
	int                                                TreeIndex;                                                
};


struct ABioVehicleAIController_OnAirDropLandGroup_Params
{
	class AActor*                                      AirDropBoxActor;                                          
	bool                                               bIsInWater;                                               
};


struct UCharacterAvoidObstacleComponent_ServerForceFinish_Params
{
};


struct UCharacterAvoidObstacleComponent_ServerAvoidObstacle_Params
{
	struct FCustomVOHelper                             InVO;                                                     
};


struct UCharacterAvoidObstacleComponent_OnMovementModeChangedDelegate_Params
{
	class ACharacter*                                  Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct UCharacterAvoidObstacleComponent_NetMulticast_DoJumpObstacle_Params
{
	struct FVector                                     InVelocity;                                               
};


struct UCharacterAvoidObstacleComponent_MulticastForceFinishVO_Params
{
	float                                              CD;                                                       
};


struct UCharacterAvoidObstacleComponent_FinishAvoidObstacle_Params
{
	float                                              CD;                                                       
};


struct UBioVehicleAvoidObstacleComponent_ShouldStopNearPrecipice_Params
{
	struct FRepPrecipiceInfo                           InPrecipiceInfo;                                          
	bool                                               ReturnValue;                                              
};


struct UBioVehicleAvoidObstacleComponent_ServerSuddenStopWhenHeadBlocked_Params
{
	struct FSuddenStopData                             InSuddenStopData;                                         
};


struct UBioVehicleAvoidObstacleComponent_ServerSuddenStopNearPrecipice_Params
{
	struct FRepPrecipiceInfo                           InPrecipiceInfo;                                          
};


struct UBioVehicleAvoidObstacleComponent_OnMovementModeChangedDelegate2_Params
{
	class ABioVehicleBase*                             Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct UBioVehicleAvoidObstacleComponent_NetMulticast_SuddenStop_Params
{
};


struct UBioVehicleAvoidObstacleComponent_HandleOnVehicleUpdateInAIWorldVolume_Params
{
	int                                                InCellX;                                                  
	int                                                InCellY;                                                  
};


struct UBioVehicleAvoidObstacleComponent_FinishAvoidObstacle_Params
{
	float                                              CD;                                                       
};


struct UBioVehicleAvoidObstacleComponent_DoSuddenStop_Params
{
};


struct UBioVehicleAvoidObstacleComponent_ClientUpdatePrecipiceInfo_Params
{
	TArray<struct FRepPrecipiceInfo>                   InPrecipiceInfos;                                         
};


struct UBioVehicleEventAbility_OnBioTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct UBioVehicleEventAbility_HandleOnBeginAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleGroundDust_HandleOnMovementChanged_Params
{
	class ABioVehicleBase*                             BioVehicle;                                               
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct UBioVehicleJumpAbility_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct UBioVehiclePlayerAbilityAnimInstanceBase_SetVehicleSubInstanceUseInputPose_Params
{
	bool                                               InUseInputPose;                                           
};


struct UBioVehiclePlayerBattleAbility_HandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct UBioVehiclePlayerEventAbility_HandleOnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct UBioVehiclePlayerEventAbility_HandleOnEndAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehiclePlayerEventAbility_HandleOnBioVehiclePlayMontage_Params
{
	class UAnimMontage*                                PlayedMontage;                                            
};


struct UBioVehiclePlayerEventAbility_HandleOnBioVehicleEndMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UBioVehiclePlayerEventAbility_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct UBioVehiclePlayerEventAbility_HandleOnBeginAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UBioVehicleRandomIdleAbility_HandleOnBioVehicleDoRandomIdle_Params
{
	int                                                Index;                                                    
};


struct UBioVehicleStateComponent_StatesToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBioVehicleStateComponent_SetBioVehicleStateDisabled_Params
{
	EBioVehicleState                                   PawnState;                                                
	bool                                               bNewDisabled;                                             
};


struct UBioVehicleStateComponent_SetAllowPawnState_Params
{
	EBioVehicleState                                   PawnState;                                                
	bool                                               bAllow;                                                   
};


struct UBioVehicleStateComponent_S2C_InterruptState_Params
{
	int                                                stateID;                                                  
	int                                                InterruptedBy;                                            
};


struct UBioVehicleStateComponent_ResetStates_Params
{
	bool                                               bLeave;                                                   
};


struct UBioVehicleStateComponent_ResetBioVehicleStateDisabled_Params
{
	EBioVehicleState                                   State;                                                    
};


struct UBioVehicleStateComponent_PrintStates_Params
{
};


struct UBioVehicleStateComponent_OnRep_DisabledStates_Params
{
	uint64_t                                           prevStates;                                               
};


struct UBioVehicleStateComponent_OnRep_CurrentStates_Params
{
	uint64_t                                           prevStates;                                               
};


struct UBioVehicleStateComponent_OnRep_AllowStates_Params
{
};


struct UBioVehicleStateComponent_LeaveState_Params
{
	EBioVehicleState                                   State;                                                    
};


struct UBioVehicleStateComponent_IsBioVehicleStateDisabled_Params
{
	EBioVehicleState                                   State;                                                    
	bool                                               ReturnValue;                                              
};


struct UBioVehicleStateComponent_IsAllowPawnState_Params
{
	EBioVehicleState                                   State;                                                    
	bool                                               ReturnValue;                                              
};


struct UBioVehicleStateComponent_HasState_Params
{
	EBioVehicleState                                   State;                                                    
	bool                                               ReturnValue;                                              
};


struct UBioVehicleStateComponent_HasAnyState_Params
{
	TArray<EBioVehicleState>                           States;                                                   
	bool                                               ReturnValue;                                              
};


struct UBioVehicleStateComponent_GetOwnerBioVehicle_Params
{
	class ABioVehicleBase*                             ReturnValue;                                              
};


struct UBioVehicleStateComponent_EnterStateForDuration_Params
{
	EBioVehicleState                                   State;                                                    
	float                                              Duration;                                                 
	bool                                               ReturnValue;                                              
};


struct UBioVehicleStateComponent_EnterState_Params
{
	EBioVehicleState                                   State;                                                    
	bool                                               ReturnValue;                                              
};


struct UBioVehicleStateComponent_AllowState_Params
{
	EBioVehicleState                                   State;                                                    
	bool                                               withLog;                                                  
	bool                                               ReturnValue;                                              
};


struct UBioVehicleWaterSplash_OnEnterWater_Params
{
	class ABioVehicleBase*                             BioVehicle;                                               
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct UBioStealthDiggingDirt_OnBioVehicleSpecialMoveStateChange_Params
{
	bool                                               IsInSpecialMove;                                          
	struct FGameplayTag                                MoveType;                                                 
	EEndSpecialMoveReason                              EndReason;                                                
};


struct ABirdCage_StopAllAlertAudio_Params
{
};


struct ABirdCage_ShowVoiceTips_Params
{
	struct FVector                                     OriLocation;                                              
};


struct ABirdCage_ShouldImmuneToDamage_Params
{
	struct FShootWeaponDamageEvent                     ShootWeaponDamageEvent;                                   
	bool                                               ReturnValue;                                              
};


struct ABirdCage_SetCurrentHealth_Params
{
	float                                              NewHealth;                                                
};


struct ABirdCage_OnRep_BirdCageInfo_Params
{
};


struct ABirdCage_OnRep_BirdCageHealth_Params
{
};


struct ABirdCage_OnPost_TakeDamage_Params
{
	float                                              DamageAmount;                                             
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
};


struct ABirdCage_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              
};


struct ABirdCage_GetCanBePicked_Params
{
	bool                                               ReturnValue;                                              
};


struct ABirdCage_DoPlayDestroyLevelSeq_Params
{
};


struct ABirdCage_DoPlayAlertLevelSeq_Params
{
	int                                                Index;                                                    
};


struct ABirdCage_DoDestroyBirdCageOnly_Params
{
	struct FVector                                     OriLocation;                                              
};


struct ABirdCage_DoAlert_Params
{
};


struct ABirdCage_CancelAlert_Params
{
};


struct UBlanketDanceComponent_OnRep_BlanketDanceData_Params
{
};


struct UBlanketDanceComponent_OnEnterNewDanceState_Params
{
	TEnumAsByte<EBlanketDanceState>                    NewState;                                                 
};


struct UBlanketDanceComponent_BroadCastFaceLookAtPlayer_Params
{
	struct FRotator                                    InTargetRotator;                                          
};


struct UBlanketDriverAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             
};


struct UBlanketDriverAnimInstance_OnBeginDiving_Params
{
	bool                                               bStart;                                                   
};


struct UBlanketMovementComponent_StartFlyingDive_Params
{
};


struct UBlanketMovementComponent_SetServerDiveDirection_Params
{
	struct FVector                                     ClientDivDirection;                                       
};


struct UBlanketMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UBlanketMovementComponent_IsRisingToHigh_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_IsLowFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_IsHighFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_IsDroppingToLow_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_IsAutoLanding_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_GetFlyingConfig_Params
{
	struct FFlyBioVehicleFlyingConfig                  ReturnValue;                                              
};


struct UBlanketMovementComponent_GetBlanketMoveState_Params
{
	EBlankVehicleBaseMoveMode                          ReturnValue;                                              
};


struct UBlanketMovementComponent_EndFlyingDive_Params
{
};


struct UBlanketMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                
};


struct UBlanketMovementComponent_CheckVehicleCanSwitchMoveMode_Params
{
	bool                                               bRiseToHigh;                                              
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_CheckCanStartFlyingDive_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlanketMovementComponent_CalculateDivingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct ABlanketVehicle_TryVehicleDive_Params
{
	bool                                               bStart;                                                   
};


struct ABlanketVehicle_TrySwitchFlyingHeightMode_Params
{
};


struct ABlanketVehicle_StopAllBlanketSfx_Params
{
};


struct ABlanketVehicle_OnRep_BlanketDiveCDChanged_Params
{
	bool                                               bPrevState;                                               
};


struct ABlanketVehicle_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              
};


struct ABlanketVehicle_EnableSwitchModeCameraModifier_Params
{
	bool                                               bEnable;                                                  
};


struct ABlanketVehicle_EnableDiveCameraModifier_Params
{
	bool                                               bEnable;                                                  
};


struct ABlanketVehicle_DoSwitchFlyingHeightMode_Params
{
	bool                                               bRiseToHigh;                                              
};


struct ABlanketVehicle_DestroyAllCachedParticleEffect_Params
{
};


struct ABlanketVehicle_CanUpdateMovementInput_Params
{
	bool                                               ReturnValue;                                              
};


struct ABlanketVehicle_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              
};


struct ABlanketVehicle_CanBlanketSwitchMoveMode_Params
{
	bool                                               bRiseToHigh;                                              
	bool                                               ReturnValue;                                              
};


struct ABlanketVehicle_CanBlanketDive_Params
{
	bool                                               ReturnValue;                                              
};


struct ABlanketVehicle_CallServerSwitch_Params
{
	bool                                               bRiseToHigh;                                              
};


struct UBlanketVehicleAnimInstance_Turn_Params
{
	struct FRotator                                    TargetRotator;                                            
};


struct UBlanketVehicleAnimInstance_OnOwnerBlanketChangeDanceState_Params
{
	struct FBlanketDanceData                           InBlanketData;                                            
};


struct UBlanketVehicleAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             
};


struct UBlanketVehicleAnimInstance_OnBeginDiving_Params
{
	bool                                               bStart;                                                   
};


struct ABoardActor_GetSoundComponent_Params
{
	class UAkComponent*                                ReturnValue;                                              
};


struct UBoardMoveAnimInstance_UnregisterEvents_Params
{
};


struct UBoardMoveAnimInstance_RegisterEvents_Params
{
};


struct UBoardMoveAnimInstance_OnMovementModeChange_Params
{
	class ACharacter*                                  Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct UBoardMoveAnimInstance_OnLandedCallback_Params
{
	struct FHitResult                                  Hit;                                                      
};


struct UBoardMoveAnimInstance_OnBoardMoveJump_Params
{
	unsigned char                                      JumpCount;                                                
};


struct UBoardMoveAnimInstance_OnAnimStateChanged_Params
{
	bool                                               bEnter;                                                   
	EPawnState                                         PawnStateChanged;                                         
};


struct UBoardMoveAnimInstance_CalculateLandingTime_Params
{
	float                                              Height;                                                   
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct UBoardMoveObj_UpdateCameraConfig_Params
{
	struct FCameraOffsetData                           InCameraData;                                             
};


struct UBoardMoveObj_SpecialMoveSetCharacterOwner_Params
{
	class ACharacter*                                  InOwner;                                                  
};


struct UBoardMoveObj_SetBoardMoveSprint_Params
{
	bool                                               bInSprint;                                                
	bool                                               ReturnValue;                                              
};


struct UBoardMoveObj_SetBoardMoveFloating_Params
{
	bool                                               bInFloating;                                              
	bool                                               ReturnValue;                                              
};


struct UBoardMoveObj_SetAdapterAvatar_Params
{
	bool                                               bEnable;                                                  
};


struct UBoardMoveObj_RelevantStateChanged_Params
{
	bool                                               bInState;                                                 
};


struct UBoardMoveObj_PlayerExitBoardMove_Params
{
	bool                                               bInIsInterrupt;                                           
};


struct UBoardMoveObj_PlayerEnterBoardMoveCheck_Params
{
	bool                                               ReturnValue;                                              
};


struct UBoardMoveObj_PlayerEnterBoardMove_Params
{
};


struct UBoardMoveObj_OnResetJumpCount_Params
{
};


struct UBoardMoveObj_OnProcessLanded_Params
{
	struct FHitResult                                  Hit;                                                      
	float                                              RemainingTime;                                            
	int                                                Iterations;                                               
};


struct UBoardMoveObj_OnPostAnimMovementModeChange_Params
{
	class ACharacter*                                  Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct UBoardMoveObj_OnPawnStateInterrupted_Params
{
	EPawnState                                         State;                                                    
	EPawnState                                         InterruptedBy;                                            
};


struct UBoardMoveObj_OnPawnLeaveState_Params
{
	EPawnState                                         LeaveState;                                               
};


struct UBoardMoveObj_OnPawnEnterState_Params
{
	EPawnState                                         EnterState;                                               
};


struct UBoardMoveObj_OnNotAllowSecondJumpEvent_Params
{
};


struct UBoardMoveObj_OnFindPlayerOnWaterWhenForbid_Params
{
};


struct UBoardMoveObj_OnFindPlayerInDoor_Params
{
};


struct UBoardMoveObj_OnBoardMoveJump_Params
{
};


struct UBoardMoveObj_OnBoardMoveEnterFalling_Params
{
};


struct UBoardMoveObj_LeaveAnimLayerOnLanded_Params
{
};


struct UBoardMoveObj_IsMoveOnWater_Params
{
	class AWaterSwimActor*                             ReturnValue;                                              
};


struct UBoardMoveObj_CheckIndoorStatus_Params
{
};


struct UBoardMoveObj_CallBoardMoveJumpDelegate_Params
{
	int                                                InJumpCount;                                              
};


struct UBoardMoveObj_AllowBoardMoveSprint_Params
{
	bool                                               ReturnValue;                                              
};


struct UBoardMoveObj_AllowBoardMoveSecondJump_Params
{
	bool                                               ReturnValue;                                              
};


struct UBoardMoveObj_AllowBoardMoveFloating_Params
{
	bool                                               ReturnValue;                                              
};


struct ABossMechanicalScorpionClawShockProjectile_StartGroundTracking_Params
{
	struct FVector                                     StartLocation;                                            
	bool                                               ReturnValue;                                              
};


struct UBroomAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             
};


struct UBroomAnimInstance_DoRandomIdle_Params
{
	int                                                Index;                                                    
};


struct UBroomRiderAnimInstance_OnBroomStartMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
};


struct UBroomRiderAnimInstance_OnBroomEndMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
	bool                                               bInterrupt;                                               
};


struct UBroomRiderAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             
};


struct UBroomRiderAnimInstance_HandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct UBroomPassengerAnimInstance_BpHandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct ABroomVehicle_StopAllBlanketSfx_Params
{
};


struct ABroomVehicle_ServerUpdateCharge_Params
{
	EBroomChargeState                                  NewState;                                                 
};


struct ABroomVehicle_OnRep_BroomChargeState_Params
{
	EBroomChargeState                                  OldState;                                                 
};


struct ABroomVehicle_LuaShouldHandleExitVehicleProcess_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         
	bool                                               ReturnValue;                                              
};


struct ABroomVehicle_IsInSprint_Params
{
	bool                                               ReturnValue;                                              
};


struct ABroomVehicle_IsInChargeAttack_Params
{
	bool                                               ReturnValue;                                              
};


struct ABroomVehicle_HandleOnSeatPreAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct ABroomVehicle_HandleOnPreExitVehicleFinished_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	struct FVector                                     ExitLocation;                                             
};


struct ABroomVehicle_HandleOnPreExitVehicle_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	struct FVector                                     ExitLocation;                                             
};


struct ABroomVehicle_HandleOnMoveBlocked_Params
{
	struct FHitResult                                  Hit;                                                      
};


struct ABroomVehicle_HandleOnClientExitVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ABroomVehicle_HandleOnClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ABroomVehicle_HandleOnBroomDash_Params
{
	bool                                               isStart;                                                  
	struct FVector                                     Dir;                                                      
	float                                              Duration;                                                 
	unsigned char                                      errCode;                                                  
};


struct ABroomVehicle_GetMountFromDirection_Params
{
	struct FVector                                     CheckedLocation;                                          
	TEnumAsByte<EMountFromDirection>                   ReturnValue;                                              
};


struct ABroomVehicle_GetBroomRiders_Params
{
	class ASTExtraBaseCharacter*                       OutRider;                                                 
	class ASTExtraBaseCharacter*                       OutPassenger;                                             
};


struct ABroomVehicle_EnableDiveCameraModifier_Params
{
	bool                                               bEnable;                                                  
};


struct ABroomVehicle_EnableChargeAttackCameraModifier_Params
{
	bool                                               bEnable;                                                  
};


struct ABroomVehicle_DestroyAllCachedParticleEffect_Params
{
};


struct ABroomVehicle_CanUpdateMovementInput_Params
{
	bool                                               ReturnValue;                                              
};


struct ABroomVehicle_BroomInWater_Params
{
};


struct ABroomVehicle_BpHandlePreExitVehicleFinished_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ABroomVehicle_BpHandlePreExitVehicle_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	TEnumAsByte<EMountFromDirection>                   Direction;                                                
	float                                              Duration;                                                 
};


struct ABroomVehicle_BPChargeAimingResultChange_Params
{
	bool                                               HasTarget;                                                
	struct FHitResult                                  HitResult;                                                
};


struct UBroomVehicleMovementComponent_StartFlyingDash_Params
{
};


struct UBroomVehicleMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UBroomVehicleMovementComponent_SetCustomInitialVelocity_Params
{
	float                                              InVelocity;                                               
	float                                              Duration;                                                 
};


struct UBroomVehicleMovementComponent_ServerForceEndDash_Params
{
};


struct UBroomVehicleMovementComponent_RPC_Server_Dash_Params
{
	bool                                               isStart;                                                  
	float                                              InDashDuration;                                           
	struct FVector                                     ClientDashDirection;                                      
};


struct UBroomVehicleMovementComponent_OnRep_DashCDChanged_Params
{
	bool                                               bPrevState;                                               
};


struct UBroomVehicleMovementComponent_OnBioFlyVehicleDashDelegate__DelegateSignature_Params
{
	bool                                               bStart;                                                   
	struct FVector                                     Direction;                                                
	float                                              Duration;                                                 
	unsigned char                                      errCode;                                                  
};


struct UBroomVehicleMovementComponent_NetMulticast_Dash_Params
{
	bool                                               isStart;                                                  
	struct FVector                                     ClientDashDirection;                                      
	float                                              InDashDuration;                                           
	unsigned char                                      errCode;                                                  
};


struct UBroomVehicleMovementComponent_MulticastForceEndDash_Params
{
};


struct UBroomVehicleMovementComponent_IsLowFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct UBroomVehicleMovementComponent_IsInDash_Params
{
	bool                                               ReturnValue;                                              
};


struct UBroomVehicleMovementComponent_IsFlyingOverObstacles_Params
{
	bool                                               ReturnValue;                                              
};


struct UBroomVehicleMovementComponent_IsDashOnCD_Params
{
	bool                                               ReturnValue;                                              
};


struct UBroomVehicleMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UBroomVehicleMovementComponent_GetMaxDashMoveDistance_Params
{
	float                                              ReturnValue;                                              
};


struct UBroomVehicleMovementComponent_GetFlyingConfig_Params
{
	struct FFlyBioVehicleFlyingConfig                  ReturnValue;                                              
};


struct UBroomVehicleMovementComponent_EndFlyingDash_Params
{
	EEndDashErrorCode                                  EndCode;                                                  
};


struct UBroomVehicleMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                
};


struct UBroomVehicleMovementComponent_ClientTryDash_Params
{
	bool                                               isStart;                                                  
	struct FVector                                     DashDirection;                                            
	float                                              InDashDuration;                                           
};


struct UBroomVehicleMovementComponent_CanDash_Params
{
	bool                                               ReturnValue;                                              
};


struct UBroomVehicleMovementComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UBroomVehicleMovementComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                
};


struct UBroomVehicleMovementComponent_CalculateDashVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UBuffNodeBlackboardInterface_SetSkillBlackboardValue_Params
{
	struct FName                                       InBBKeyName;                                              
	int                                                SkillID;                                                  
	struct FBuffNodeBlackboardSetting                  InBBSetting;                                              
	bool                                               bExecuteOrEnd;                                            
};


struct UBuffNodeBlackboardInterface_SetAIBlackboardValue_Params
{
	struct FName                                       InBBKeyName;                                              
	struct FBuffNodeBlackboardSetting                  InBBSetting;                                              
	bool                                               bExecuteOrEnd;                                            
};


struct ABuildingMeshArray_StartGradualShow_Params
{
	int                                                TargetCount;                                              
};


struct ABuildingMeshArray_ShowMeshRange_Params
{
	int                                                Count;                                                    
};


struct ABuildingMeshArray_ShowMesh_Params
{
	int                                                MeshIndex;                                                
	bool                                               ReturnValue;                                              
};


struct ABuildingMeshArray_ShowAllMeshes_Params
{
};


struct ABuildingMeshArray_SetAnchorTarget_Params
{
	class AActor*                                      NewTarget;                                                
};


struct ABuildingMeshArray_ResetAnchorFollowState_Params
{
};


struct ABuildingMeshArray_OnRep_MeshVisibilityStates_Params
{
};


struct ABuildingMeshArray_OnRep_MeshComponents_Params
{
};


struct ABuildingMeshArray_OnMeshVisibilityChanged__DelegateSignature_Params
{
	int                                                MeshIndex;                                                
	bool                                               bVisible;                                                 
};


struct ABuildingMeshArray_OnMeshDestroyed__DelegateSignature_Params
{
	int                                                MeshIndex;                                                
	class UStaticMeshComponent*                        MeshComp;                                                 
};


struct ABuildingMeshArray_OnMeshDamaged__DelegateSignature_Params
{
	int                                                MeshIndex;                                                
	int                                                DamageType;                                               
	float                                              DamageAmount;                                             
};


struct ABuildingMeshArray_OnMeshComponentDied_Params
{
	class UStaticMeshComponent*                        MeshComp;                                                 
};


struct ABuildingMeshArray_OnMeshAdded__DelegateSignature_Params
{
	int                                                MeshIndex;                                                
	class UStaticMeshComponent*                        MeshComp;                                                 
};


struct ABuildingMeshArray_OnGradualShowCompleted__DelegateSignature_Params
{
};


struct ABuildingMeshArray_OnBatchShowCompleted__DelegateSignature_Params
{
};


struct ABuildingMeshArray_OnBatchCreateCompleted__DelegateSignature_Params
{
};


struct ABuildingMeshArray_OnArrayInitialized__DelegateSignature_Params
{
};


struct ABuildingMeshArray_IsMeshVisible_Params
{
	int                                                MeshIndex;                                                
	bool                                               ReturnValue;                                              
};


struct ABuildingMeshArray_IsBatchShowInProgress_Params
{
	bool                                               ReturnValue;                                              
};


struct ABuildingMeshArray_IsBatchCreateInProgress_Params
{
	bool                                               ReturnValue;                                              
};


struct ABuildingMeshArray_InitializeMeshArray_Params
{
};


struct ABuildingMeshArray_HideMesh_Params
{
	int                                                MeshIndex;                                                
	bool                                               ReturnValue;                                              
};


struct ABuildingMeshArray_HideAllMeshes_Params
{
};


struct ABuildingMeshArray_GetTotalMeshCount_Params
{
	int                                                ReturnValue;                                              
};


struct ABuildingMeshArray_GetMeshComponent_Params
{
	int                                                MeshIndex;                                                
	class UStaticMeshComponent*                        ReturnValue;                                              
};


struct ABuildingMeshArray_AddCloneMeshes_Params
{
	int                                                Count;                                                    
	bool                                               bVisible;                                                 
	int                                                ReturnValue;                                              
};


struct UCamelAnimInstance_OnFocusTargetPawnStateChanged_Simulate_Params
{
	uint64_t                                           preState;                                                 
	uint64_t                                           NewState;                                                 
};


struct UCamelAnimInstance_OnFocusTargetPawnStateChanged_Autonomous_Params
{
	EPawnState                                         NewState;                                                 
};


struct UCamelAnimInstance_OnFocusTargetFired_Params
{
	struct FBulletHitInfoUploadData                    ImpactResult;                                             
	class ASTEShootWeaponBulletImpactEffect*           ImpactEffect;                                             
};


struct UCamelAnimInstance_OnFocusTargetChanged_Params
{
	class ASTExtraCharacter*                           LastTarget;                                               
	class ASTExtraCharacter*                           NewTarget;                                                
};


struct UCamelAnimInstance_OnFocusShootWeaponChanged_Params
{
	class ASTExtraShootWeapon*                         LastWeapon;                                               
	class ASTExtraShootWeapon*                         NewWeapon;                                                
};


struct UCamelAnimInstance_OnCamelShockedByFocusTarget_Params
{
};


struct UCamelAnimInstance_OnCamelShocked_Params
{
};


struct UCamelAnimInstance_HandleOnCamelAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UCamelAnimInstance_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct UCamelAnimInstance_BpOnFocusTargetFired_Params
{
	struct FVector                                     ImpactLocation;                                           
};


struct UCamelAnimInstance_BpOnFocusTargetChanged_Params
{
	class ASTExtraCharacter*                           LastTarget;                                               
	class ASTExtraCharacter*                           NewTarget;                                                
};


struct UCamelAnimInstance_BpOnFocusShootWeaponChanged_Params
{
	class ASTExtraShootWeapon*                         LastWeapon;                                               
	class ASTExtraShootWeapon*                         NewWeapon;                                                
};


struct UCamelAnimInstance_BpOnCamelStartChewing_Params
{
};


struct UCamelAnimInstance_BpOnCamelShockedByFocusTarget_Params
{
};


struct UCamelAnimInstance_BpOnCamelShocked_Params
{
};


struct UCamelAnimInstance_BpOnCamelEndChewing_Params
{
};


struct UCamelAnimInstance_BpHandleOnCamelJumped_Params
{
	int                                                JumpCount;                                                
};


struct UCamelAnimInstance_BpHandleOnCamelAccelerate_Params
{
};


struct UCamelMovementComponent_OnRecoverOnServer_Params
{
};


struct UCamelRiderAnimInstance_ShowRealTimeSword_Params
{
};


struct UCamelRiderAnimInstance_ShowPlayerFakeTimeSword_Params
{
};


struct UCamelRiderAnimInstance_ShowCamelFakeTimeSword_Params
{
};


struct UCamelRiderAnimInstance_OnRiderDropTimeSword_Params
{
};


struct UCamelRiderAnimInstance_OnMountMontageFinished_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UCamelRiderAnimInstance_HideRealTimeSword_Params
{
};


struct UCamelRiderAnimInstance_HidePlayerFakeTimeSword_Params
{
};


struct UCamelRiderAnimInstance_HideCamelFakeTimeSword_Params
{
};


struct UCamelRiderAnimInstance_HandleTimeSwordDeactived_Params
{
};


struct UCamelRiderAnimInstance_HandleTimeSwordActived_Params
{
};


struct UCamelRiderAnimInstance_HandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct UCamelRiderAnimInstance_HandleOnRiderTimeSwordTypeChanged_Params
{
	int                                                LastType;                                                 
	int                                                NewType;                                                  
};


struct UCamelRiderAnimInstance_HandleOnCamelAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UCamelRiderAnimInstance_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct UCamelRiderAnimInstance_EnsureFakeSwordState_Params
{
};


struct UCamelRiderAnimInstance_BpOnRiderDropTimeSword_Params
{
};


struct UCamelRiderAnimInstance_BpHandleOnRiderTimeSwordTypeChanged_Params
{
	int                                                LastType;                                                 
	int                                                NewType;                                                  
};


struct UCamelRiderAnimInstance_BpHandleOnCamelJumped_Params
{
	int                                                JumpCount;                                                
};


struct UCamelRiderAnimInstance_BpHandleOnCamelAccelerate_Params
{
};


struct UCamelStandByComponent_SwitchFocusImmediately_Params
{
	class ASTExtraCharacter*                           NewTarget;                                                
};


struct UCamelStandByComponent_ResetPending_Params
{
};


struct UCamelStandByComponent_RefreshMaxAttractiveCharacter_Params
{
};


struct UCamelStandByComponent_PlayerReachable_Params
{
	class ASTExtraCharacter*                           InPlayer;                                                 
	bool                                               ReturnValue;                                              
};


struct UCamelStandByComponent_OnRep_FocusingCharacter_Params
{
};


struct UCamelStandByComponent_OnNearbyCharacterPawnStateChanged_Params
{
	class ASTExtraCharacter*                           Character;                                                
	EPawnState                                         EnterState;                                               
};


struct UCamelStandByComponent_OnFocusTargetChanged_Params
{
	struct FNearbyCharacter                            LastTarget;                                               
	struct FNearbyCharacter                            NewTarget;                                                
};


struct UCamelStandByComponent_IsCloseToWater_Params
{
	bool                                               ReturnValue;                                              
};


struct UCamelStandByComponent_GetFocusingCharacterAttractive_Params
{
	float                                              ReturnValue;                                              
};


struct UCamelStandByComponent_FocusingCharacterStillNearby_Params
{
	bool                                               ReturnValue;                                              
};


struct UCamelStandByComponent_CanSwitchToRest_Params
{
	bool                                               ReturnValue;                                              
};


struct ACamelVehicle_SwitchSpiritCameraData_Params
{
	bool                                               bEnable;                                                  
	int                                                Level;                                                    
};


struct ACamelVehicle_SetEnterVehicleDistance_Params
{
	float                                              InNewEnterDistance;                                       
};


struct ACamelVehicle_SetCamelMaxWalkSpeed_Params
{
	float                                              NewSpeed;                                                 
};


struct ACamelVehicle_ServerSetCamelMaxWalkSpeed_Params
{
	float                                              NewSpeed;                                                 
};


struct ACamelVehicle_OnRiderManipulateBackPack_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           OperationType;                                            
	unsigned char                                      Reason;                                                   
};


struct ACamelVehicle_OnRep_RiderTimeSwordType_Params
{
	int                                                LastSwordLevel;                                           
};


struct ACamelVehicle_MulticastOnRiderDropTimeSword_Params
{
};


struct ACamelVehicle_Jump_Params
{
};


struct ACamelVehicle_HandleVehicleHealthDestroy_Params
{
};


struct ACamelVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct ACamelVehicle_HandleOnSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            LastSeatType;                                             
	int                                                LastSeatIdx;                                              
	ESTExtraVehicleSeatType                            NewSeatType;                                              
	int                                                NewSeatIdx;                                               
};


struct ACamelVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct ACamelVehicle_HandleOnDeathDestroy_Params
{
};


struct ACamelVehicle_GetQueryIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct ACamelVehicle_GetCharacterTimeSwordType_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              
	int                                                ReturnValue;                                              
};


struct ACamelVehicle_GetCamelStandByComponent_Params
{
	class UCamelStandByComponent*                      ReturnValue;                                              
};


struct ACamelVehicle_GetCamelRiders_Params
{
	class ASTExtraBaseCharacter*                       OutRider;                                                 
	class ASTExtraBaseCharacter*                       OutPassenger;                                             
};


struct ACamelVehicle_GetCamelMovementComponent_Params
{
	class UCamelMovementComponent*                     ReturnValue;                                              
};


struct ACamelVehicle_GetBioVehicleAvoidObstacle_Params
{
	class UBioVehicleAvoidObstacleComponent*           ReturnValue;                                              
};


struct ACamelVehicle_CanPlayTimeSwordMontage_Params
{
	bool                                               ReturnValue;                                              
};


struct UCameraModifier_MechaCombineSmooth_ActiveMechaSmoothModifier_Params
{
	class ASTExtraBaseCharacter*                       OwnerPlayer;                                              
	float                                              LerpTime;                                                 
	class UCameraModifier_MechaCombineSmooth*          ReturnValue;                                              
};


struct UMercenaryAnimInstanceBase_UnlinkPlayerSubInstance_Params
{
	class UAnimInstance*                               InPlayerAnimInstance;                                     
};


struct UMercenaryAnimInstanceBase_SwitchingPoseFinishCallback_Params
{
};


struct UMercenaryAnimInstanceBase_StopMontageBySlot_Params
{
	struct FName                                       MontageSlot;                                              
};


struct UMercenaryAnimInstanceBase_SlotIsActive_Params
{
	struct FName                                       SlotName;                                                 
	bool                                               ReturnValue;                                              
};


struct UMercenaryAnimInstanceBase_PlayPlayerDeadAnimation_Params
{
};


struct UMercenaryAnimInstanceBase_OnEndInplaceTurn_Params
{
	bool                                               bIsLeft;                                                  
};


struct UMercenaryAnimInstanceBase_OnBeginInplaceTurn_Params
{
	bool                                               bIsLeft;                                                  
};


struct UMercenaryAnimInstanceBase_LinkPlayerSubInstance_Params
{
	class UAnimInstance*                               InPlayerAnimInstance;                                     
};


struct UMercenaryAnimInstanceBase_HandlePlayerPoseChange_Params
{
	TEnumAsByte<ESTEPoseState>                         LastPose;                                                 
	TEnumAsByte<ESTEPoseState>                         NewPose;                                                  
};


struct UMercenaryAnimInstanceBase_HandlePlayerPickUp_Params
{
};


struct UMercenaryAnimInstanceBase_HandlePlayerEnterRescueState_Params
{
	bool                                               bBeginRescueing;                                          
	bool                                               bSelfRescue;                                              
};


struct UMercenaryAnimInstanceBase_HandlePlayerAnimMontagePlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
};


struct UMercenaryAnimInstanceBase_HandlePlayerAnimMontageExtraPlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
	bool                                               bOnlyJumpToSectionWhilePlaying;                           
	struct FName                                       IgnoreStopSection;                                        
};


struct UMercenaryAnimInstanceBase_HandleOwnerAnimEvent_Params
{
	struct FName                                       EventMsg;                                                 
};


struct UMercenaryAnimInstanceBase_HandleOnCarryBackPlayer_Params
{
	bool                                               bIsCarryBack;                                             
	class ASTExtraBaseCharacter*                       InPlayer;                                                 
};


struct UMercenaryPassengerAnimInstanceBase_OnPartnerMontageStop_Params
{
	class UAnimMontage*                                PlayedMontage;                                            
	bool                                               bInterrupt;                                               
};


struct UMercenaryPassengerAnimInstanceBase_OnPartnerMontagePlay_Params
{
	class UAnimMontage*                                PlayedMontage;                                            
};


struct UMercenaryPassengerAnimInstanceBase_OnDetachToPartner_Params
{
	class UAnimInstance*                               InPartnerAnimInstance;                                    
};


struct UMercenaryPassengerAnimInstanceBase_OnAttachToPartner_Params
{
	class UAnimInstance*                               InPartnerAnimInstance;                                    
};


struct UCoeingLibrary_MarkBioVehicleDropSpeed_Params
{
	class ABioVehicleBase*                             PtrVehicle;                                               
	struct FString                                     CallerName;                                               
};


struct UCoeingLibrary_MarkBioVehicleAbnormalJump_Params
{
	class ABioVehicleBase*                             PtrVehicle;                                               
	float                                              JumpZVelocity;                                            
	struct FString                                     CallerName;                                               
};


struct UControllableDashMoveObj_LeaveControllableDashMove_Params
{
};


struct UControllableDashMoveObj_EnterControllableDashMove_Params
{
	struct FVector                                     InInitDir;                                                
};


struct UConvertInputComponent_SetController_Params
{
	class ASTExtraPlayerController*                    InController;                                             
};


struct UConvertInputComponent_OnRotatorInput_Params
{
	float                                              YawVal;                                                   
	float                                              PitchVal;                                                 
};


struct UConvertInputComponent_OnMoveRight_Params
{
	float                                              Val;                                                      
};


struct UConvertInputComponent_OnMoveForward_Params
{
	float                                              Val;                                                      
};


struct UConvertInputComponent_ConsumeInputRotator_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UCreateRoadMoveAnimInstance_HandleOnMainAnimInstancePlayMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
};


struct UCreateRoadMoveAnimInstance_BpHandleOnMainAnimInstancePlayMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
};


struct UCreateRoadMoveObj_SpecialOnMovementBaseChanged_Params
{
	class ACharacter*                                  Character;                                                
	class UPrimitiveComponent*                         NewMovementBase;                                          
	class UPrimitiveComponent*                         OldMovementBase;                                          
};


struct UCreateRoadMoveObj_SpecialMoveSetCharacterOwner_Params
{
	class ACharacter*                                  InOwner;                                                  
};


struct UCreateRoadMoveObj_SetupCamera_Params
{
	bool                                               bEnable;                                                  
};


struct UCreateRoadMoveObj_PlayerExitCreateRoadMove_Params
{
};


struct UCreateRoadMoveObj_PlayerEnterCreateRoadMove_Params
{
};


struct UCreateRoadMoveObj_OnPawnStateInterrupted_Params
{
	EPawnState                                         State;                                                    
	EPawnState                                         InterruptedBy;                                            
};


struct UCreateRoadMoveObj_OnPawnLeaveState_Params
{
	EPawnState                                         LeaveState;                                               
};


struct UCreateRoadMoveObj_OnPawnEnterState_Params
{
	EPawnState                                         EnterState;                                               
};


struct UCreateRoadMoveObj_OnNewMovementBaseActor_Params
{
	class AActor*                                      NewMovementBaseActor;                                     
};


struct UCreateRoadMoveObj_OnLeaveOldMovementBaseActor_Params
{
	class AActor*                                      OldMovementBaseActor;                                     
};


struct UCurveMoveObj_LeaveCurveMove_Params
{
};


struct UCurveMoveObj_EnterTargetCurveMove_Params
{
	struct FVector                                     InStartLocation;                                          
	struct FVector                                     InTargetLocation;                                         
	class UCurveVector*                                InShapeCurve;                                             
	struct FVector                                     InOffsetScale;                                            
	float                                              InDuration;                                               
};


struct UCurveMoveObj_EnterCurveMove_Params
{
};


struct UCurveUtils_SetKeyValueByIndex_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	int                                                KeyIndex;                                                 
	float                                              NewValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCurveUtils_SetKeyTimeAndValueByIndex_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	int                                                KeyIndex;                                                 
	float                                              NewTime;                                                  
	float                                              NewValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCurveUtils_SetKeyInterpModeByIndex_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	int                                                KeyIndex;                                                 
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               
	bool                                               ReturnValue;                                              
};


struct UCurveUtils_RemoveKeyByIndex_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	int                                                KeyIndex;                                                 
	bool                                               ReturnValue;                                              
};


struct UCurveUtils_RemoveKeyAtTime_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	float                                              InTime;                                                   
	float                                              TimeTolerance;                                            
	bool                                               ReturnValue;                                              
};


struct UCurveUtils_IsCurveValid_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	bool                                               ReturnValue;                                              
};


struct UCurveUtils_GetNumKeys_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	int                                                ReturnValue;                                              
};


struct UCurveUtils_GetKeyTimeAndValue_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	int                                                KeyIndex;                                                 
	float                                              OutTime;                                                  
	float                                              OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCurveUtils_GetCurveValueRange_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	float                                              MinValue;                                                 
	float                                              MaxValue;                                                 
};


struct UCurveUtils_GetCurveTimeRange_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	float                                              MinTime;                                                  
	float                                              MaxTime;                                                  
};


struct UCurveUtils_EvaluateCurveFloat_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	float                                              InTime;                                                   
	float                                              ReturnValue;                                              
};


struct UCurveUtils_CreateCurveFloatFromArrays_Params
{
	TArray<float>                                      Times;                                                    
	TArray<float>                                      Values;                                                   
	class UObject*                                     Outer;                                                    
	class UCurveFloat*                                 ReturnValue;                                              
};


struct UCurveUtils_CreateCurveFloat_Params
{
	class UObject*                                     Outer;                                                    
	class UCurveFloat*                                 ReturnValue;                                              
};


struct UCurveUtils_ClearKeys_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
};


struct UCurveUtils_AddKeyWithTangents_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	float                                              InTime;                                                   
	float                                              InValue;                                                  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               
	float                                              ArriveTangent;                                            
	float                                              LeaveTangent;                                             
	int                                                ReturnValue;                                              
};


struct UCurveUtils_AddKey_Params
{
	class UCurveFloat*                                 CurveFloat;                                               
	float                                              InTime;                                                   
	float                                              InValue;                                                  
	int                                                ReturnValue;                                              
};


struct UCustomVehicleBearerUnit_OnVehicleBeforeWheelDestroy_Params
{
	int                                                Index;                                                    
};


struct UCustomVehicleBearerUnit_OnVehicleAvatarEquiped_Params
{
};


struct UCustomVehicleBearerUnit_OnUpdateSeatGUI_Params
{
};


struct UCustomVehicleBearerUnit_OnAvatarAllMeshLoaded_Params
{
};


struct UDeadGhostAnimInstance_ResetJump_Params
{
};


struct UDeadGhostAnimInstance_OnJumped_Params
{
};


struct UDeadGhostAnimInstance_DestroySubAnimations_Params
{
};


struct ADeadGhostCharacter_SetBase_Params
{
	class UPrimitiveComponent*                         NewBase;                                                  
	struct FName                                       BoneName;                                                 
	bool                                               bNotifyActor;                                             
};


struct ADeadGhostCharacter_IsSameTeam_Params
{
	class APawn*                                       Other;                                                    
	bool                                               ReturnValue;                                              
};


struct ADeadGhostCharacter_HasSkillToken_Params
{
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct ADeadGhostCharacter_GetPlayerState_Params
{
	class ASTExtraPlayerState*                         ReturnValue;                                              
};


struct ADeadGhostCharacter_GetPlayerControllerSafety_Params
{
	class ASTExtraPlayerController*                    ReturnValue;                                              
};


struct ADeadGhostCharacter_GetAnimInstance_Params
{
	class UDeadGhostAnimInstance*                      ReturnValue;                                              
};


struct ADeadGhostCharacter_ForceMoveForward_Params
{
	float                                              InForceRate;                                              
	bool                                               bForceMoveForward;                                        
};


struct ADeadGhostCharacter_DetachFromControllerPendingDestroy_Params
{
};


struct ADeadGhostCharacter_ClientOnPossessedBy_Params
{
};


struct ADeadGhostCharacter_BP_GetHurtApperanceOffset_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UHorseAnimInstance_OnHorseSuddenStop_Params
{
	float                                              StopDuration;                                             
};


struct UHorseAnimInstance_OnHorseShocked_Params
{
};


struct UHorseAnimInstance_HandleOnHorseSuddenStop_Params
{
};


struct UHorseAnimInstance_HandleOnHorseFeeded_Params
{
};


struct UHorseAnimInstance_HandleOnHorseAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UHorseAnimInstance_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct UHorseAnimInstance_HandBrakeRateChanged_Params
{
	float                                              NewRate;                                                  
};


struct UHorseAnimInstance_BpOnHorseShocked_Params
{
};


struct UHorseAnimInstance_BpHandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                
};


struct UHorseAnimInstance_BpHandleOnHorseFeeded_Params
{
};


struct UHorseAnimInstance_BpHandleOnHorseAccelerate_Params
{
};


struct AHorseVehicle_UpdateTransformingEffect_Params
{
	float                                              DeltaTime;                                                
};


struct AHorseVehicle_SetHandBrake_Params
{
	float                                              Rate;                                                     
};


struct AHorseVehicle_ServerTransform_Params
{
	class ASTExtraBaseCharacter*                       InPlayer;                                                 
	struct FHorseTransformData                         InTranformData;                                           
};


struct AHorseVehicle_ServerSetHandBrake_Params
{
	float                                              Rate;                                                     
};


struct AHorseVehicle_OnRep_HorseTransformData_Params
{
};


struct AHorseVehicle_OnHorseTransformDelegate__DelegateSignature_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	EHorseTransformType                                TransformType;                                            
};


struct AHorseVehicle_LuaShouldHandleExitVehicleProcess_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         
	bool                                               ReturnValue;                                              
};


struct AHorseVehicle_Jump_Params
{
};


struct AHorseVehicle_IsTransforming_Params
{
	bool                                               ReturnValue;                                              
};


struct AHorseVehicle_HandleVehicleHealthDestroy_Params
{
};


struct AHorseVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct AHorseVehicle_HandleOnPreExitVehicleFinished_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	struct FVector                                     ExitLocation;                                             
};


struct AHorseVehicle_HandleOnPreExitVehicle_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	struct FVector                                     ExitLocation;                                             
};


struct AHorseVehicle_HandleOnDelayFinishHandBrake_Params
{
};


struct AHorseVehicle_HandleOnDeathDestroy_Params
{
};


struct AHorseVehicle_HandleOnClientExitVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AHorseVehicle_HandleOnClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AHorseVehicle_GetQueryIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct AHorseVehicle_GetHorseRiders_Params
{
	class ASTExtraBaseCharacter*                       OutRider;                                                 
	class ASTExtraBaseCharacter*                       OutPassenger;                                             
};


struct AHorseVehicle_GetHorseMovementComponent_Params
{
	class UHorseVehicleMovementComponent*              ReturnValue;                                              
};


struct AHorseVehicle_GetBioVehicleAvoidObstacle_Params
{
	class UBioVehicleAvoidObstacleComponent*           ReturnValue;                                              
};


struct AHorseVehicle_FeedHorse_Params
{
};


struct AHorseVehicle_ClearTransformingEffect_Params
{
};


struct AHorseVehicle_BpHandlePreExitVehicleFinished_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AHorseVehicle_BpHandlePreExitVehicle_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	TEnumAsByte<EMountFromDirection>                   Direction;                                                
	float                                              Duration;                                                 
};


struct AHorseVehicle_AddTransformingEffect_Params
{
	struct FTransformMatConfig                         MatConfig;                                                
};


struct UDistanceMatchingComponent_TryMatchDistance_Params
{
};


struct UDistanceMatchingComponent_ServerEndMatchDistance_Params
{
};


struct UDistanceMatchingComponent_ServerBeginMatchDistance_Params
{
	struct FVector                                     InPredictedStopLocation;                                  
};


struct UDistanceMatchingComponent_PredictStopLocation_Params
{
	struct FVector                                     OutLocation;                                              
	bool                                               ReturnValue;                                              
};


struct UDistanceMatchingComponent_OnTickMatchDistance_Params
{
	float                                              DeltaSeconds;                                             
};


struct UDistanceMatchingComponent_OnEndMatchDistance_Params
{
};


struct UDistanceMatchingComponent_OnBeginMatchDistance_Params
{
	struct FVector                                     InPredictedStopLocation;                                  
};


struct UDistanceMatchingComponent_MulticastEndMatchDistance_Params
{
};


struct UDistanceMatchingComponent_MulticastBeginMatchDistance_Params
{
	struct FVector                                     InPredictedStopLocation;                                  
};


struct UDistanceMatchingComponent_ForceInterruptMatchDistance_Params
{
};


struct UDistanceMatchingComponent_CheckMatchDistanceState_Params
{
};


struct UDistanceMatchingInterface_SetExternalTimerAccumulator_Params
{
	float                                              InTimerAccumulator;                                       
};


struct ADroneVehicle_TickSyncCameraInfo_Params
{
	float                                              Delta;                                                    
};


struct ADroneVehicle_StopAllDroneSfx_Params
{
};


struct ADroneVehicle_SetMoveSpeedScale_Params
{
	float                                              InMoveSpeedScale;                                         
};


struct ADroneVehicle_SetMaxTravelDistanceScale_Params
{
	float                                              InMaxTravelDistanceScale;                                 
};


struct ADroneVehicle_OnDistanceLimitReached_Params
{
};


struct ADroneVehicle_CanUpdateMovementInput_Params
{
	bool                                               ReturnValue;                                              
};


struct ADynamicSplineRoad_StopBuild_Params
{
	bool                                               bForceStop;                                               
};


struct ADynamicSplineRoad_StartBuild_Params
{
};


struct ADynamicSplineRoad_RefreshSpline_Params
{
};


struct ADynamicSplineRoad_RefreshMesh_Params
{
};


struct ADynamicSplineRoad_OnSplineMeshInstanceDead_Params
{
	class USimpleSyncInstancedSplineMeshComponent*     Component;                                                
	int                                                MeshInstanceIndex;                                        
};


struct ADynamicSplineRoad_OnSplineMeshComponentDead_Params
{
	class USimpleSyncSplineMeshComponent*              Component;                                                
};


struct ADynamicSplineRoad_OnSplineDataUpdateEvent_Params
{
};


struct ADynamicSplineRoad_OnRep_SplineInfo_Params
{
};


struct ADynamicSplineRoad_OnBaseCharacterLanded_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct ADynamicSplineRoad_Multicast_SplineMeshInstanceDead_Params
{
	class USimpleSyncInstancedSplineMeshComponent*     Component;                                                
	int                                                MeshInstanceIndex;                                        
};


struct ADynamicSplineRoad_Multicast_SplineMeshInfo_Params
{
	TArray<struct FDynamicSplineDebugInfo>             Info;                                                     
};


struct ADynamicSplineRoad_Multicast_SplineMeshComponentDead_Params
{
	class USimpleSyncSplineMeshComponent*              Component;                                                
};


struct ADynamicSplineRoad_GetMeshByIndex_Params
{
	int                                                Index;                                                    
	int                                                OutType;                                                  
	class UStaticMesh*                                 ReturnValue;                                              
};


struct ADynamicSplineRoad_GetMeshBodySetupByIndex_Params
{
	int                                                Index;                                                    
	class UBodySetup*                                  ReturnValue;                                              
};


struct ADynamicSplineRoad_CheckOwnerLocation_Params
{
	float                                              DeltaTime;                                                
};


struct ADynamicSplineRoad_AddSplineLocation_Params
{
	struct FVector                                     Location;                                                 
};


struct AEPPointGroupActor_SaveToBlueprint_Params
{
	class UBoxComponent*                               BoxComponent;                                             
};


struct AEPPointGroupActor_GenerateSceneComponents_Params
{
	class UBoxComponent*                               BoxComponent;                                             
	int                                                NumPoints;                                                
	float                                              Spacing;                                                  
};


struct UEventDataCollectionKeys_GetTimestamp_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GetTeammatePositions_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GetSelfPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GetTeammatePositionsFromContext_Params
{
	class AActor*                                      ActorContext;                                             
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GetTeammatePositions_Params
{
	class ASTExtraPlayerState*                         STExtraPlayerState;                                       
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GetTeammateOpenIds_Params
{
	class ASTExtraPlayerState*                         STExtraPlayerState;                                       
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetViewType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetTreatment_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetTime_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetTeammates_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetSurvivalTime_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetRescureCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetRescueTimes_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetRank_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetMaxKillDistance_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetMarchDistance_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetMapId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetKnockouts_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetKillNumInVehicle_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetKillNumByGrenade_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetKillNum_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetKill_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetInDamage_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetHurt_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetHeal_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetHeadShotNum_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetGotAirDropNum_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetGameID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetDriveDistance_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetDamage_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetAssists_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetAliveTeamNum_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankingScore_GetAlivePlayerNum_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetWeather_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetTotalPlayerCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetToPlaneCarryLeftTime_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetTeamID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetPlaneRouteStop_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetPlaneRouteStart_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_GameStatus_GetAlivePlayerCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetWin_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetWaitingOnLobby_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetQualityPlaza_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetPlaneCarrying_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetParachuteOpen_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetParachuteJumping_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetMatching_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetLanding_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetFireWorking_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetFighting_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_GameStatus_GameStatus_GetCake_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_StartMatching_GetViewType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_StartMatching_GetTeamCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_StartMatching_GetPlayerCountInGameMode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_StartMatching_GetMapId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_StartMatching_GetGameMode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_StartMatching_GetFullTeamCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PlaneCarrying_GetStartPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PlaneCarrying_GetEndPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PuttingDownCakeFireWorks_GetFireWorksOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PuttingDownCakeFireWorks_GetCakeOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetReason_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetItemInstanceId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetItemCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetHoldingCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetBulletCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakeDropItem_GetBackpackAvatarItemDurability_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakeDropItem_Type_GetTaking_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakeDropItem_Type_GetDropping_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UsingItem_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UsingItem_GetPredictLine_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UsingItem_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UsingItem_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UsingItem_GetItemLeftCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UsingItem_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UsingItem_Status_GetLeading_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UsingItem_Status_GetInteruption_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UsingItem_Status_GetCompletion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Falling_GetType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Falling_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Falling_Type_GetStart_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Falling_Type_GetEnd_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Falling_Status_GetNonDriving_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Falling_Status_GetDriving_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_InFieldOfView_GetUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_InFieldOfView_GetTargetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_InFieldOfView_GetOldFieldOfViewNotificationStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_InFieldOfView_GetMyWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_InFieldOfView_GetMinimalScreenLocation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_InFieldOfView_GetMaximumScreenLocation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_InFieldOfView_GetFieldOfViewTargetCategory_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_InFieldOfView_GetCurrentFieldOfViewNotificationStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTombBox_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTeammateVehicle_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetTeammate_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetSmog_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetFireWorks_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetEnemyVehicle_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetEnemy_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetCake_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_InFieldOfView_FieldOfView_GetAirDroping_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetValue_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetTargetPart_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetResult2_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetResult_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetReason_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtUid_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPosture_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPlayerTeamId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtPlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtHealth_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtEquipId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtDirection_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtCarForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetHurtAim_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetDph_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetDistance_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetCarValue_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetCarHealth_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtUniqueIdentifier_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtUid_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPosture_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPlayerTeamId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtPlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtLastHealth_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacketDurabilityReduction_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacketDurability_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtJacket_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmetDurabilityReduction_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmetDurability_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHelmet_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtHealth_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtEquipId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtDirection_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetBeHurtCarForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_UnderEnermyAttack_GetAce_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetWeedingOut_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetReducingHealth_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetKnockingOutReducingHealth_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Result_GetKnockingOut_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Result2_GetWeedingOut2_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetVehicleColliding_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetVehicleBombing_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetPoison_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetLastBreathWithoutRescue_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetFalling_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetDrowning_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_GetAirAttacking_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_Reason_FromDamageEvent_Params
{
	struct FDamageEvent                                DamageEvent;                                              
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetWalking_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetTurningHead_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetStanding_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetRunning_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetProning_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetJumping_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetDying_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetDriving_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetCrouching_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_GetCarriging_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_FromPawnStates_Params
{
	int64_t                                            PawnStates;                                               
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_BeHurtPosture_FromPawnState_Params
{
	EPawnState                                         PawnState;                                                
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_UnderEnermyAttack_HurtAim_Get_Params
{
	class ASTExtraBaseCharacter*                       AttackerSTExtraBaseCharacter;                             
	class AActor*                                      DamageCauser;                                             
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakingDamage_GetResult_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakingDamage_GetReason_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakingDamage_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakingDamage_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TakingDamage_GetLeftHealth_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_GetVehicleColliding_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_GetVehicleBombing_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_GetPoison_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_GetLastBreathWithoutRescue_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_GetFalling_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_GetDrowning_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_GetBombing_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_GetAirAttacking_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_TakingDamage_Reason_FromDamageEvent_Params
{
	struct FDamageEvent                                DamageEvent;                                              
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CircleReducing_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CircleChange_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CircleChange_GetOldCircleRadius_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CircleChange_GetOldCircleCenter_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CircleChange_GetNewCircleRadius_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CircleChange_GetNewCircleCenter_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Rescue_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Rescue_GetRescuePlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Rescue_GetRescueOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Rescue_GetBeRescuePlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Rescue_GetBeRescueOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetVehicleId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetTire_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetSpeed_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetPassengerOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetOil_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetDrivingType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetDriverUId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetDriverPlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_DrivingVehicle_GetDriverOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_DrivingVehicle_DrivingType_GetPassanger_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_DrivingVehicle_DrivingType_GetDriver_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_DrivingVehicle_Status_GetOn_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_DrivingVehicle_Status_GetOff_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_ReloadingBullet_GetMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_ReloadingBullet_GetBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_ReloadingBullet_GetBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_AirDrop_GetType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_AirDrop_GetPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_AirDrop_GetLandedPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_AirDrop_Type_GetSuper_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_AirDrop_Type_GetNormal_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_ItemAttach_GetState_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_ItemAttach_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_ItemAttach_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_ItemAttach_GetAttachmentId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_ItemAttach_State_GetDetaching_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_ItemAttach_State_GetAttaching_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PlayerInfo_GetSex_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PlayerInfo_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PlayerInfo_GetAvatars_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_PlayerInfo_Sex_GetMale_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_PlayerInfo_Sex_GetFemale_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_MiniMapShowInfo_GetVoiceCheck_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_MiniMapShowInfo_GetPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetWeapon_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetTyre_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetSilentWeapon_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetGlass_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_MiniMapShowInfo_VoiceCheck_GetFootPrint_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Following_GetFollowType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Following_GetFollowerOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Following_GetFolloweeOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Following_FollowType_GetRefuse_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Following_FollowType_GetInvitation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Following_FollowType_GetFollowing_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Following_FollowType_GetCancellation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Following_FollowType_GetAcception_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_MiniMapPinning_GetType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_MiniMapPinning_GetPinPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_MiniMapPinning_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_MiniMapPinning_Type_GetPinning_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_MiniMapPinning_Type_GetNonPinning_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Blocking_GetType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Blocking_GetBlockerOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Blocking_GetBlockerIndex_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Blocking_GetBlockeeOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Blocking_GetBlockeeIndex_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Blocking_Type_GetNonBlocking_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_Blocking_Type_GetBlocking_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Dancing_GetDancerOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_Dancing_GetDanceId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PickingupTombBox_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PickingupTombBox_GetItemIDs_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PickingupTombBox_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PickingupTombBox_GetItemCounts_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PickingupTombBox_GetItemCount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PickingupTombBox_GetBoxName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_AirAttacking_GetWorldLocation_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_AirAttacking_GetCenter_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CurrentWeapon_GetMaxBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CurrentWeapon_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CurrentWeapon_GetBulletCountInClip_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_CurrentWeapon_GetBulletCountInBarrel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_SceneInfo_GetIsInHouse_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_SceneInfo_IsInHouse_GetYes_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_SceneInfo_IsInHouse_GetNo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TeamInfo_GetTeammateUIds_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TeamInfo_GetTeammateOpenIds_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TeamInfo_GetTeamID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_EnteringLeavingTeam_GetTeamID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_EnteringLeavingTeam_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_EnteringLeavingTeam_GetAction_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_EnteringLeavingTeam_Action_GetLeaving_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_EnteringLeavingTeam_Action_GetEntering_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_OnOffline_GetType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_OnOffline_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_OnOffline_Type_GetOnline_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_OnOffline_Type_GetOffline_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankList_GetType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankList_GetState_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_RankList_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_RankList_State_GetOn_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_RankList_State_GetOff_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TextMessage_GetText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TextMessage_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TextMessage_GetItemPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_TextMessage_GetItemId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PawnState_IsInterestedPawnStates_Params
{
	EPawnState                                         PawnState;                                                
	bool                                               ReturnValue;                                              
};


struct UEventDataCollectionKeys_PawnState_GetType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PawnState_GetStates_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PawnState_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_PawnState_GetChangedState_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_PawnState_State_GetLeaving_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_PawnState_State_GetEntering_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_OpenCloseDoor_GetRightState_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_OpenCloseDoor_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_OpenCloseDoor_GetLeftState_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetOpen_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetClose_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionValues_OpenCloseDoor_RightState_GetBroken_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_MicSpeakerState_GetSpeaker_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_MicSpeakerState_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_MicSpeakerState_GetMic_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_VehicleState_GetWheelStates_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_VehicleState_GetHp_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_VehicleState_GetFuel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UEventDataCollectionKeys_VehicleState_GetForwardSpeed_Params
{
	struct FString                                     ReturnValue;                                              
};


struct AFloatingCapsuleVehicle_VehicleBreakOutVelocity_Params
{
	struct FVector                                     ApplyVelocity;                                            
	bool                                               bAddVelocity;                                             
};


struct AFloatingCapsuleVehicle_SetTargetFloatState_Params
{
	bool                                               bUpState;                                                 
};


struct AFloatingCapsuleVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct AFloatingCapsuleVehicle_OnRep_BreakOutState_Params
{
	bool                                               bPrevState;                                               
};


struct AFloatingCapsuleVehicle_MoveWheelHeight_Params
{
	float                                              DeltaSeconds;                                             
};


struct AFloatingCapsuleVehicle_GetFloatingVehicleMovement_Params
{
	class USTExtraFloatingVehicleMovementComponentBase* ReturnValue;                                              
};


struct AFloatingCapsuleVehicle_GetEnterDistanceSq_Params
{
	float                                              ReturnValue;                                              
};


struct AFloatingCapsuleVehicle_DoBreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct AFloatingCapsuleVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct AFloatingCapsuleVehicle_BPTryCheckSimulatePhysics_Params
{
};


struct UFloatingMechaAnimInstance_TryUncombineWithMecha_Params
{
};


struct UFloatingMechaAnimInstance_TryCombineWithMecha_Params
{
	class USkeletalMeshComponent*                      SourceMechaMesh;                                          
	struct FVector                                     InRelativeLocation;                                       
	struct FRotator                                    InRelativeRotation;                                       
};


struct UFloatingMechaAnimInstance_HandleOnPlayerEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct UFloatingMechaAnimInstance_HandleOnNitrogenAccelStateChanged_Params
{
	ENitrogenAccelState                                State;                                                    
	ENitrogenAccelState                                preState;                                                 
	class ASTExtraVehicleBase*                         Vehile;                                                   
};


struct AFloatingVehicleNew_OnPhysicsContact_Params
{
	class AActor*                                      InOtherActor;                                             
	class UPrimitiveComponent*                         InOtherComp;                                              
	EPhysicsContactState                               InState;                                                  
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct AFloatingVehicleNew_IsOnGround_Params
{
	bool                                               ReturnValue;                                              
};


struct AFloatingVehicleNew_GetVehicleMovement_Params
{
	class UFloatingVehicleVehicleMovementComponent2*   ReturnValue;                                              
};


struct AFloatingVehicleNew_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UFlowerWingAnimInstance_UpdateOwnerCharacter_Params
{
	class ASTExtraBaseCharacter*                       OwnerCharacter;                                           
};


struct UFlowerWingAnimInstance_HandlePlayerAnimMontagePlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
};


struct UFlowerWingAnimInstance_HandlePlayerAnimMontageExtraPlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
	bool                                               bOnlyJumpToSectionWhilePlaying;                           
	struct FName                                       IgnoreStopSection;                                        
};


struct UFlowerWingCharacterAnimInstance_OnFlowerAnimInstanceUpdate_Params
{
	class UAnimInstance*                               AnimInstance;                                             
};


struct UFlowerWingCharacterAnimInstance_OnAsyncLoadAssetDone_Params
{
};


struct UFlowerWingCharacterAnimInstance_AsyncLoadAsset_Params
{
};


struct UFlowerWingMoveObj_SetRisingInput_Params
{
	float                                              Rate;                                                     
};


struct UFlowerWingMoveObj_SetMoveState_Params
{
	EFlowerWingMoveState                               FlyMode;                                                  
};


struct UFlowerWingMoveObj_IsOnGround_Params
{
	bool                                               ReturnValue;                                              
};


struct UFlowerWingMoveObj_HandleMoveStateChange_Params
{
	EFlowerWingMoveState                               CurState;                                                 
	EFlowerWingMoveState                               OldState;                                                 
};


struct UFlowerWingMoveObj_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              
};


struct UFlowerWingMoveObj_GetCurMoveState_Params
{
	EFlowerWingMoveState                               ReturnValue;                                              
};


struct UFlyingArmorCharacterAnimInstance_OnFlowerAnimInstanceUpdate_Params
{
	class UAnimInstance*                               AnimInstance;                                             
};


struct UFlyingArmorCharacterAnimInstance_OnAsyncLoadAssetDone_Params
{
};


struct UFlyingArmorCharacterAnimInstance_AsyncLoadAsset_Params
{
};


struct UFlyingArmorMoveObj_SetRisingInput_Params
{
	float                                              Rate;                                                     
};


struct UFlyingArmorMoveObj_SetActiveState_Params
{
	EFAMActiveState                                    NewState;                                                 
};


struct UFlyingArmorMoveObj_OnLeaveFly_Params
{
};


struct UFlyingArmorMoveObj_OnEnterFly_Params
{
};


struct UFlyingArmorMoveObj_LeaveFly_Params
{
};


struct UFlyingArmorMoveObj_EnterFly_Params
{
};


struct UFlyingCloudMoveObj_StopFly_Params
{
};


struct UFlyingCloudMoveObj_SetState_Params
{
	TEnumAsByte<EFlyCloudState>                        FlyState;                                                 
};


struct UFlyingCloudMoveObj_SetPitchLimit_Params
{
	bool                                               bSetNew;                                                  
};


struct UFlyingCloudMoveObj_SetForceNotClientMode_Params
{
	bool                                               bNotUseClientMode;                                        
};


struct UFlyingCloudMoveObj_RealSetState_Params
{
	TEnumAsByte<EFlyCloudState>                        FlyState;                                                 
	bool                                               ForceChange;                                              
};


struct UFlyingCloudMoveObj_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              
};


struct UFlyingCloudMoveObj_GetCustomMoveStateByFlyState_Params
{
	TEnumAsByte<EFlyCloudState>                        FlyState;                                                 
	unsigned char                                      ReturnValue;                                              
};


struct UFlyingCloudMoveObj_GetCurrentFlyState_Params
{
	TEnumAsByte<EFlyCloudState>                        ReturnValue;                                              
};


struct UFlyingCloudMoveObj_EnterFly_Params
{
};


struct UFlyingCloudMoveObj_DoubleTerminalFlySetState_Params
{
	TEnumAsByte<EFlyCloudState>                        FlyState;                                                 
	bool                                               ForceChange;                                              
};


struct UFlyingCloudMoveObj_ChangeSoundRTPC_Params
{
};


struct UFlyingCloudMoveObj_BeforeApplyNetworkMovementModeDell_Params
{
	unsigned char                                      ReceivedMode;                                             
	bool                                               ReturnValue;                                              
};


struct AFreeViewPawn_UnbindPlayerInputDelegate_Params
{
};


struct AFreeViewPawn_SetController_Params
{
	class ASTExtraPlayerController*                    InController;                                             
};


struct AFreeViewPawn_MoveUp_Params
{
	float                                              Val;                                                      
};


struct AFreeViewPawn_MoveRight_Params
{
	float                                              Val;                                                      
};


struct AFreeViewPawn_MoveForward_Params
{
	float                                              Val;                                                      
};


struct AFreeViewPawn_GetFreeViewOrigin_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AFreeViewPawn_BindPlayerInputDelegate_Params
{
};


struct UFreeWallClimbingComponent_UpdateWallNormals_Params
{
	float                                              DeltaTime;                                                
};


struct UFreeWallClimbingComponent_UpdateSurfaceState_Params
{
};


struct UFreeWallClimbingComponent_UpdateCharacterRotation_Params
{
	float                                              DeltaTime;                                                
};


struct UFreeWallClimbingComponent_ToggleWallRun_Params
{
};


struct UFreeWallClimbingComponent_ToggleWallClimb_Params
{
};


struct UFreeWallClimbingComponent_TemporalFilterNormal_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UFreeWallClimbingComponent_SmoothWallNormals_Params
{
	struct FWallDetectionResult                        NewResult;                                                
	float                                              DeltaTime;                                                
};


struct UFreeWallClimbingComponent_ShouldEndClimbWall_Params
{
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_SetIsWallRunning_Params
{
	bool                                               bNewRunning;                                              
};


struct UFreeWallClimbingComponent_ServerToggleWallRun_Params
{
	bool                                               bEnabled;                                                 
};


struct UFreeWallClimbingComponent_ServerRPC_StartWallClimb_Params
{
};


struct UFreeWallClimbingComponent_ServerRPC_EndWallClimb_Params
{
};


struct UFreeWallClimbingComponent_ServerRPC_CornerTransition_Params
{
	struct FCornerTransitionState                      TransitionData;                                           
};


struct UFreeWallClimbingComponent_ServerCheckCornerTransition_Params
{
	struct FCornerTransitionState                      TransitionData;                                           
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_PreDoJump_Params
{
};


struct UFreeWallClimbingComponent_OnWeaponEquipped_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
	TEnumAsByte<ESurviveWeaponPropSlot>                Slot;                                                     
};


struct UFreeWallClimbingComponent_OnSuitEquipped_Params
{
	bool                                               bEnabled;                                                 
};


struct UFreeWallClimbingComponent_OnStartWallClimb_Params
{
};


struct UFreeWallClimbingComponent_OnStartCornerTransition_Params
{
};


struct UFreeWallClimbingComponent_OnRequestDropAgileItem_Params
{
};


struct UFreeWallClimbingComponent_OnRep_NetClimbState_Params
{
};


struct UFreeWallClimbingComponent_OnRep_JumpTriggerCount_Params
{
};


struct UFreeWallClimbingComponent_OnRep_IsPlayingWallIdle_Params
{
};


struct UFreeWallClimbingComponent_OnRep_IsGroundIdle_Params
{
};


struct UFreeWallClimbingComponent_OnRep_HasSpecificItem_Params
{
};


struct UFreeWallClimbingComponent_OnEndWallClimb_Params
{
};


struct UFreeWallClimbingComponent_OnEndCornerTransition_Params
{
};


struct UFreeWallClimbingComponent_OnAgileLocomotionEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UFreeWallClimbingComponent_MulticastRPC_CornerTransition_Params
{
	struct FCornerTransitionState                      TransitionData;                                           
};


struct UFreeWallClimbingComponent_MulticastRPC_CancelCornerTransition_Params
{
};


struct UFreeWallClimbingComponent_LuaOnStartWallClimb_Params
{
};


struct UFreeWallClimbingComponent_LuaOnStartCornerTransition_Params
{
};


struct UFreeWallClimbingComponent_LuaOnRepNetClimbState_Params
{
};


struct UFreeWallClimbingComponent_LuaOnEndWallClimb_Params
{
};


struct UFreeWallClimbingComponent_LuaOnEndCornerTransition_Params
{
};


struct UFreeWallClimbingComponent_LuaCanClimbWall_Params
{
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_IsWallTallEnough_Params
{
	struct FWallDetectionResult                        WallHit;                                                  
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_IsValidWallNormal_Params
{
	struct FVector                                     Normal;                                                   
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_IsSuitEquipped_Params
{
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_IsInCooldown_Params
{
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_IsAgileAnimEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_HasValidWall_Params
{
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_GetIsWallRunning_Params
{
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_DrawDebugDetectionInfo_Params
{
};


struct UFreeWallClimbingComponent_DetectWallSurfaces_Params
{
	struct FWallDetectionResult                        ReturnValue;                                              
};


struct UFreeWallClimbingComponent_CanWallClimbFromHit_Params
{
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_CanWallClimbActor_Params
{
	class AActor*                                      InActor;                                                  
	class UActorComponent*                             InComp;                                                   
	bool                                               ReturnValue;                                              
};


struct UFreeWallClimbingComponent_CanClimbWall_Params
{
	bool                                               ReturnValue;                                              
};


struct AFrostDragon_StartTakeOff_Params
{
	class ASTExtraCharacter*                           Pawn;                                                     
	class UCharacterMovementComponent*                 MovementComp;                                             
};


struct AFrostDragon_StartLanding_Params
{
	class ASTExtraCharacter*                           Pawn;                                                     
	class UCharacterMovementComponent*                 MovementComp;                                             
};


struct AFrostDragon_GetFrostDragonMovementComponent_Params
{
	class UFrostDragonMovementComponent*               ReturnValue;                                              
};


struct AFrostDragon_EndTakeOff_Params
{
	class ASTExtraCharacter*                           Pawn;                                                     
	class UCharacterMovementComponent*                 MovementComp;                                             
};


struct AFrostDragon_EndLanding_Params
{
	class ASTExtraCharacter*                           Pawn;                                                     
	class UCharacterMovementComponent*                 MovementComp;                                             
};


struct UFrostDragonAnimInstance_BpHandleOnDragonDie_Params
{
};


struct UFrostDragonMovementComponent_StartTakingOff_Params
{
};


struct UFrostDragonMovementComponent_StartLanding_Params
{
};


struct UFrostDragonMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UFrostDragonMovementComponent_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              
};


struct UFrostDragonMovementComponent_IsLanding_Params
{
	bool                                               ReturnValue;                                              
};


struct UFrostDragonMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UFrostDragonMovementComponent_GetMoveState_Params
{
	EFrostDragonMoveMode                               ReturnValue;                                              
};


struct UFrostDragonMovementComponent_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UFrostDragonMovementComponent_EndTakingOff_Params
{
};


struct UFrostDragonMovementComponent_EndLanding_Params
{
};


struct UGhostBalloonAnimInstance_UpdateOwnerCharacter_Params
{
	class ASTExtraBaseCharacter*                       OwnerCharacter;                                           
};


struct UGhostBalloonCharacterAnimInstance_OnBalloonAnimInstanceUpdate_Params
{
	class UAnimInstance*                               AnimInstance;                                             
};


struct UGhostBalloonCharacterAnimInstance_OnAsyncLoadAssetDone_Params
{
};


struct UGhostBalloonCharacterAnimInstance_AsyncLoadAsset_Params
{
};


struct UGhostBalloonMoveObj_SetMoveState_Params
{
	EGhostBalloonMoveState                             FlyMode;                                                  
};


struct UGhostBalloonMoveObj_HandleMoveStateChange_Params
{
	EGhostBalloonMoveState                             CurState;                                                 
	EGhostBalloonMoveState                             OldState;                                                 
};


struct UGhostBalloonMoveObj_GetCurMoveState_Params
{
	EGhostBalloonMoveState                             ReturnValue;                                              
};


struct UGhostBalloonMoveObj_DoHitImpulse_Params
{
};


struct UGhostBalloonMoveObj_DoBurst_Params
{
};


struct UGNAction_CharacterPlayMontage_HandleOnAvatarEquipped_Params
{
	EAvatarSlotType                                    SlotType;                                                 
	bool                                               IsEquipped;                                               
	int                                                ItemId;                                                   
};


struct UHorseAbility_HandleOnHorseSuddenStop_Params
{
};


struct UHorseAbility_HandleOnHorseShocked_Params
{
};


struct UHorseAbility_HandleOnHorseFeeded_Params
{
};


struct UHorseDistanceMatchingComponent_HandleOnSetHandBrake_Params
{
	float                                              NewRate;                                                  
};


struct UHorseRiderAnimInstance_OnHorseShocked_Params
{
};


struct UHorseRiderAnimInstance_HandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct UHorseRiderAnimInstance_HandleOnHorseSuddenStop_Params
{
};


struct UHorseRiderAnimInstance_HandleOnHorseFeeded_Params
{
};


struct UHorseRiderAnimInstance_HandleOnHorseAccelerate_Params
{
	bool                                               bForward;                                                 
};


struct UHorseRiderAnimInstance_HandleOnBioJumped_Params
{
	int                                                JumpCount;                                                
};


struct UHorseRiderAnimInstance_BpOnHorseShocked_Params
{
};


struct UHorseRiderAnimInstance_BpHandleOnHorseSuddenStop_Params
{
};


struct UHorseRiderAnimInstance_BpHandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                
};


struct UHorseRiderAnimInstance_BpHandleOnHorseFeeded_Params
{
};


struct UHorseRiderAnimInstance_BpHandleOnHorseAccelerate_Params
{
};


struct UHorsePassengerAnimInstance_HandleOnPreExit_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct UHorsePassengerAnimInstance_BpHandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct UHorsePassengerAnimInstance_BpHandleOnPreExit_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct UHorsePlayerAbility_HandleOnHorseSuddenStop_Params
{
};


struct UHorsePlayerAbility_HandleOnHorseShocked_Params
{
};


struct UHorsePlayerAbility_HandleOnHorseFeeded_Params
{
};


struct UHorsePlayerCurvedUpdateComponent_RegisterCurvedUpdateForPlayer_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	class UCurveVector*                                LocationCurve;                                            
	class UCurveVector*                                RotationCurve;                                            
	float                                              Rate;                                                     
	struct FVector                                     RealExitLocation;                                         
	float                                              StartTime;                                                
	float                                              CameraLerpStartTime;                                      
	float                                              CameraLerpDuration;                                       
	bool                                               ReturnValue;                                              
};


struct UHorsePlayerCurvedUpdateComponent_IsPlayerCurvedUpdating_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	bool                                               ReturnValue;                                              
};


struct UHorsePlayerCurvedUpdateComponent_ForceStopAndRemoveUpdateDataForPlayer_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
};


struct UHorsePlayerCurvedUpdateComponent_CanUpdatePlayer_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	bool                                               ReturnValue;                                              
};


struct UHorseSeatComponent_CheckSocketLocationIsValid_Params
{
	struct FVector                                     OutLocation;                                              
	struct FName                                       SocketName;                                               
	class ASTExtraPlayerCharacter*                     Character;                                                
	class USkeletalMeshComponent*                      HorseMesh;                                                
	struct FVector                                     EnterSocketPos;                                           
	float                                              CheckedHalfRadius;                                        
	float                                              CheckedHalfHeight;                                        
	bool                                               IgnoreVehicle;                                            
	bool                                               ReturnValue;                                              
};


struct UHorseSeatComponent_AddExitHorseSocketsSetting_Params
{
	struct FExitHorseSockets                           Sockets;                                                  
};


struct UHorseVehicleMovementComponent_OnRecoverOnServer_Params
{
};


struct AHoveringVehicle_SetBoosting_Params
{
	bool                                               bEnabled;                                                 
	bool                                               ReturnValue;                                              
};


struct AHoveringVehicle_OnVehicleRefuelWhenNoFuel_Params
{
	float                                              PreFuel;                                                  
	float                                              Increment;                                                
};


struct AHoveringVehicle_OnVehicleFuelRunOut_Params
{
	float                                              InMaxFuel;                                                
};


struct AHoveringVehicle_OnSkeletalMeshSleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        
	struct FName                                       BoneName;                                                 
};


struct AHoveringVehicle_OnSkeletalMeshAwake_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          
	struct FName                                       BoneName;                                                 
};


struct AHoveringVehicle_OnRep_SimulateViewData_Params
{
};


struct AHoveringVehicle_OnRep_bHoveringActive_Params
{
	bool                                               PreHoveringState;                                         
};


struct AHoveringVehicle_OnDriverStateChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	bool                                               isOn;                                                     
};


struct AHoveringVehicle_OnClientExit_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AHoveringVehicle_OnClientEnter_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AHoveringVehicle_OnClientChangeSeat_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            OldSeatType;                                              
	ESTExtraVehicleSeatType                            NewSeatType;                                              
};


struct AHoveringVehicle_InitHoveringSpots_Params
{
};


struct AHoveringVehicle_HandleVehicleHealthDestroy_Params
{
};


struct AHoveringVehicle_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct AHoveringVehicle_HandleOnSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            LastSeatType;                                             
	int                                                LastSeatIdx;                                              
	ESTExtraVehicleSeatType                            NewSeatType;                                              
	int                                                NewSeatIdx;                                               
};


struct AHoveringVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct AHoveringVehicle_HandleOnMeshHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct AHoveringVehicle_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct AHoveringVehicle_GetSpotLocation_Params
{
	int                                                Index;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct AHoveringVehicle_GetHoveringMovement_Params
{
	class UHoveringVehicleMovementComponent*           ReturnValue;                                              
};


struct AHoveringVehicle_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct AHoveringVehicle_DeactivateHoveringSimulate_Params
{
};


struct AHoveringVehicle_CanActivateHoveringSimulate_Params
{
	bool                                               ReturnValue;                                              
};


struct AHoveringVehicle_CalcFinalMomentum_Params
{
	class UClass*                                      DamageTypeClass;                                          
	float                                              BaseMomentun;                                             
	float                                              ReturnValue;                                              
};


struct AHoveringVehicle_ActivateHoveringSimulate_Params
{
};


struct AHoveringMecha_StateToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct AHoveringMecha_SetWeaponState_Params
{
	TEnumAsByte<EMechaWeaponState>                     InState;                                                  
};


struct AHoveringMecha_SetEnterVehicleDistance_Params
{
	float                                              InNewEnterDistance;                                       
};


struct AHoveringMecha_SetCollisionResponseForBody_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              
	struct FName                                       BoneName;                                                 
};


struct AHoveringMecha_OpenVehicleLogic_Params
{
};


struct AHoveringMecha_OnRep_UncombineHelper_Params
{
	struct FUncombineHelper                            OldUncombineHelper;                                       
};


struct AHoveringMecha_OnRep_MechaStates_Params
{
	uint32_t                                           OldStates;                                                
};


struct AHoveringMecha_OnRep_CombineProcess_Params
{
	float                                              OldProcess;                                               
};


struct AHoveringMecha_OnInitHoveringSpots_Params
{
};


struct AHoveringMecha_OnBeCachedCPlus_Params
{
	class AActor*                                      SourceCatcher;                                            
};


struct AHoveringMecha_LeaveState_Params
{
	EMechaState                                        State;                                                    
};


struct AHoveringMecha_InterruptState_Params
{
	EMechaState                                        State;                                                    
	EMechaState                                        InterruptBy;                                              
};


struct AHoveringMecha_InitHoveringSpots_Params
{
};


struct AHoveringMecha_HasState_Params
{
	EMechaState                                        State;                                                    
	bool                                               ReturnValue;                                              
};


struct AHoveringMecha_HasCombined_Params
{
	bool                                               ReturnValue;                                              
};


struct AHoveringMecha_GetInVehicleLocalPlayer_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct AHoveringMecha_GetCombineState_Params
{
	TEnumAsByte<ECombineState>                         ReturnValue;                                              
};


struct AHoveringMecha_GetCombinedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct AHoveringMecha_GetCombineComponent_Params
{
	class UMechaSmoothAttachComponent*                 ReturnValue;                                              
};


struct AHoveringMecha_EnterState_Params
{
	EMechaState                                        State;                                                    
	bool                                               ReturnValue;                                              
};


struct AHoveringMecha_EnableNitrogenAccelCameraModifier_Params
{
	bool                                               bEnable;                                                  
	class ASTExtraPlayerCharacter*                     Passenger;                                                
};


struct AHoveringMecha_CloseVehicleLogic_Params
{
};


struct AHoveringMecha_AllowState_Params
{
	EMechaState                                        State;                                                    
	bool                                               ReturnValue;                                              
};


struct UHoveringVehicleMovementComponent_UpdateSimulate_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateSimpleHover_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateRotationAutoAdapt_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdatePreCheck_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateNitrogenAccel_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateMovement2_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateMovement_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateInput_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateHoverSimulation_WeakFeedback_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateHoverSimulation_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateDrifting_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_UpdateDistToLand_Params
{
	float                                              DeltaTime;                                                
};


struct UHoveringVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              Rate;                                                     
};


struct UHoveringVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              Rate;                                                     
};


struct UHoveringVehicleMovementComponent_SetNitrogenAccelState_Params
{
	ENitrogenAccelState                                NewState;                                                 
};


struct UHoveringVehicleMovementComponent_ServerUpdatePassiveAccel_Params
{
	struct FNitrogenAccelData                          NAData;                                                   
};


struct UHoveringVehicleMovementComponent_ServerUpdateInput_Params
{
	float                                              InSteeringInput;                                          
	float                                              InThrottleInput;                                          
	struct FRotator                                    InCameraRot;                                              
};


struct UHoveringVehicleMovementComponent_ServerNitrogenAccel_Params
{
};


struct UHoveringVehicleMovementComponent_Reset_Params
{
};


struct UHoveringVehicleMovementComponent_OnRep_NitrogenAccelState_Params
{
	ENitrogenAccelState                                PrevState;                                                
};


struct UHoveringVehicleMovementComponent_OnRecoverOnServer_Params
{
};


struct UHoveringVehicleMovementComponent_IsShouldDsControl_Params
{
	bool                                               ReturnValue;                                              
};


struct UHoveringVehicleMovementComponent_IsInNitrogenAccel_Params
{
	bool                                               ReturnValue;                                              
};


struct UHoveringVehicleMovementComponent_IsHasPower_Params
{
	bool                                               ReturnValue;                                              
};


struct UHoveringVehicleMovementComponent_Internal_DoNitrogenAccel_Params
{
};


struct UHoveringVehicleMovementComponent_HandleActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UHoveringVehicleMovementComponent_ForceCorrectClientNitroAccelState_Params
{
	ENitrogenAccelState                                NewState;                                                 
	float                                              CD;                                                       
};


struct UHoveringVehicleMovementComponent_ClientUpdateDistToLand_Params
{
	struct FVector                                     TargetLoc;                                                
};


struct UHoveringVehicleMovementComponent_ClientTryNitrogenAccel_Params
{
	bool                                               ReturnValue;                                              
};


struct UHoveringVehicleMovementComponent_ClientAddForceAfterContinuousHit_Params
{
	struct FVector                                     Force;                                                    
};


struct UHoveringVehicleMovementComponent_CanPassiveNitrogenAccel_Params
{
	struct FString                                     FailedCode;                                               
	bool                                               ReturnValue;                                              
};


struct UHoveringVehicleMovementComponent_CalculateHoverSimulation_Params
{
	struct FHoveringSimulateData                       SimData;                                                  
	struct FVector                                     SpotWorldLoc;                                             
	struct FVector                                     OwnerLoc;                                                 
	float                                              DeltaTime;                                                
	bool                                               ReturnValue;                                              
};


struct UJumpPackMoveObj_StartJump_Params
{
	struct FVector2D                                   InJumpDir;                                                
};


struct ULadderMovementComponent_StartPhaseMoving_Params
{
};


struct ULadderMovementComponent_ShowDebugInformation_Params
{
	float                                              DeltaTime;                                                
};


struct ULadderMovementComponent_ServerMove_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           
	int                                                MoveDirection;                                            
	int                                                EnterOrLeave;                                             
};


struct ULadderMovementComponent_ServerCheckClientError_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           
	bool                                               ReturnValue;                                              
};


struct ULadderMovementComponent_RequestCurrentLadderState_Params
{
};


struct ULadderMovementComponent_ReceiveExitLadder_Params
{
};


struct ULadderMovementComponent_ReceiveEnterLadder_Params
{
};


struct ULadderMovementComponent_PushBackSimAction_Params
{
	struct FLadderMoveData                             InData;                                                   
};


struct ULadderMovementComponent_PopFirstSimAction_Params
{
};


struct ULadderMovementComponent_OnRep_NetLadderMoveState_Params
{
};


struct ULadderMovementComponent_OnCharacterExitLadder_Params
{
};


struct ULadderMovementComponent_OnCharacterEnterLadder_Params
{
	class ALadderActor*                                Ladder;                                                   
};


struct ULadderMovementComponent_LadderMoveInput_Params
{
	float                                              Rate;                                                     
};


struct ULadderMovementComponent_IsLeaving_Params
{
	bool                                               ReturnValue;                                              
};


struct ULadderMovementComponent_IsEntering_Params
{
	bool                                               ReturnValue;                                              
};


struct ULadderMovementComponent_InitLadderParams_Params
{
	class ALadderActor*                                Ladder;                                                   
};


struct ULadderMovementComponent_HandleJump_Params
{
};


struct ULadderMovementComponent_HandleInput_Params
{
};


struct ULadderMovementComponent_GetStateName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ULadderMovementComponent_GetNextMoveData_Params
{
	struct FLadderMoveData                             Cur;                                                      
	int8_t                                             MoveDir;                                                  
	struct FLadderMoveData                             ReturnValue;                                              
};


struct ULadderMovementComponent_GetLadderAnimSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              
};


struct ULadderMovementComponent_GatherCurrentLadderState_Params
{
};


struct ULadderMovementComponent_ForceSetLadderStep_Params
{
	int                                                InLadderStep;                                             
};


struct ULadderMovementComponent_ExitLadder_Params
{
	bool                                               ReturnValue;                                              
};


struct ULadderMovementComponent_EnterLadder_Params
{
	class ALadderActor*                                Ladder;                                                   
	bool                                               bTop;                                                     
	bool                                               ReturnValue;                                              
};


struct ULadderMovementComponent_EndPhaseMoving_Params
{
};


struct ULadderMovementComponent_EnableCharacterMovement_Params
{
	bool                                               bEnable;                                                  
};


struct ULadderMovementComponent_ClimbUpOneStepInternal_Params
{
};


struct ULadderMovementComponent_ClimbDownOneStepInternal_Params
{
};


struct ULadderMovementComponent_CheckValidPositionOnLadder_Params
{
	class AActor*                                      Ladder;                                                   
	int                                                StepNum;                                                  
	bool                                               ReturnValue;                                              
};


struct ULadderMovementComponent_CheckValidPosition_Params
{
	struct FVector                                     pos;                                                      
	bool                                               ReturnValue;                                              
};


struct ULadderMovementComponent_CheckEnterOrExitLadder_Params
{
};


struct ULadderMovementComponent_CheckAutoEnterLadder_Params
{
};


struct ULadderMovementComponent_CatchUp_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           
};


struct ULadderMovementComponent_CalcLocationOnLadder_Params
{
	class AActor*                                      Ladder;                                                   
	int                                                StepNum;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct ULadderMovementComponent_BuildActionQueue_Params
{
	struct FLadderMoveData                             Target;                                                   
};


struct ULadderMovementComponent_BindPlayerMoveInput_Params
{
	bool                                               bEnable;                                                  
};


struct ULadderMovementComponent_AdjustClient_Params
{
	struct FLadderMoveData                             LadderMoveData;                                           
};


struct ULifterControlMoveObj_Setup_Params
{
	int                                                InVelocityZ;                                              
	int                                                InMinZ;                                                   
	int                                                InMaxZ;                                                   
};


struct ULifterControlMoveObj_SetMoveState_Params
{
	int                                                InMoveState;                                              
};


struct ULifterControlMoveObj_Leave_Params
{
};


struct ULifterControlMoveObj_IsMovingUp_Params
{
	bool                                               ReturnValue;                                              
};


struct ULifterControlMoveObj_Enter_Params
{
};


struct ULifterControlMoveObj_CalculateVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UMainCharacterBearerUnit_OnWaitForDoMerge_Params
{
	int                                                RequestID;                                                
};


struct UMainCharacterBearerUnit_OnAvatarMeshMaterialApplyed_Params
{
	class UMeshComponent*                              MeshComponent;                                            
};


struct UMainCharacterBearerUnit_OnAvatarMeshBeforeLoaded_Params
{
};


struct UMainCharacterBearerUnit_OnAvatarAllMeshLoaded_Params
{
};


struct UMainWeaponBearerUnit_OnWeaponAvatarLoaded_Params
{
	int                                                Val;                                                      
	struct FItemDefineID                               ID;                                                       
};


struct UMainWeaponBearerUnit_OnWeaponAttachAvatarLoaded_Params
{
	int                                                Val;                                                      
	struct FItemDefineID                               ID;                                                       
};


struct ATyrannosaurusRexVehicle_ShowRoarOverSpeedTips_Params
{
};


struct ATyrannosaurusRexVehicle_ShakeNearbyPlayerCamera_Params
{
	class UClass*                                      CameraShakeClass;                                         
	float                                              Radius;                                                   
};


struct ATyrannosaurusRexVehicle_ServerStopRoar_Params
{
};


struct ATyrannosaurusRexVehicle_ServerRoar_Params
{
};


struct ATyrannosaurusRexVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct ATyrannosaurusRexVehicle_PrepareApplyRoarAttack_Params
{
};


struct ATyrannosaurusRexVehicle_OnTRexHPCHanged_Params
{
	float                                              NewHP;                                                    
	float                                              HPMax;                                                    
};


struct ATyrannosaurusRexVehicle_OnTakeRoarAttackDamage_Params
{
	class ASTExtraBaseCharacter*                       Target;                                                   
};


struct ATyrannosaurusRexVehicle_OnRoarFinished_Params
{
	TEnumAsByte<EBioVehicleSkillStopReason>            Reason;                                                   
};


struct ATyrannosaurusRexVehicle_OnRep_bIsRoaring_Params
{
};


struct ATyrannosaurusRexVehicle_GetVehicleMovement_Params
{
	class URaptorMovementComponent*                    ReturnValue;                                              
};


struct ATyrannosaurusRexVehicle_GetVehicleBreakOutState_Params
{
	bool                                               ReturnValue;                                              
};


struct ATyrannosaurusRexVehicle_GetNearlyPlayers_Params
{
	float                                              Radius;                                                   
	TArray<class ASTExtraBaseCharacter*>               Results;                                                  
	bool                                               ReturnValue;                                              
};


struct ATyrannosaurusRexVehicle_EndRoarAttack_Params
{
};


struct ATyrannosaurusRexVehicle_ClientHandleVehicleDead_Params
{
	bool                                               VehicleDeadDirection;                                     
};


struct ATyrannosaurusRexVehicle_CheckCanApplyDamageTo_Params
{
	class ASTExtraBaseCharacter*                       Target;                                                   
	bool                                               ReturnValue;                                              
};


struct ATyrannosaurusRexVehicle_CallClientDrawDebugSphere_Params
{
	struct FVector                                     Location;                                                 
	float                                              DeltaTime;                                                
};


struct ATyrannosaurusRexVehicle_BroadCastStopMontage_Params
{
};


struct ATyrannosaurusRexVehicle_BroadCastPlayRoarMontage_Params
{
};


struct ATyrannosaurusRexVehicle_BroadCastClientDrawSphere_Params
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
};


struct ATyrannosaurusRexVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct ATyrannosaurusRexVehicle_ApplyRoarAttackToSpecifiedCharacter_Params
{
	class ASTExtraBaseCharacter*                       TargetCharacter;                                          
};


struct ATyrannosaurusRexVehicle_ApplyRoarAttack_Params
{
};


struct AMammothVehicle_CheckShowWeakness_Params
{
	bool                                               Enable;                                                   
};


struct AMechaAimCircle_RefreshActorLocationFromBlackBoard_Params
{
};


struct AMechaAimCircle_HasCharacterInCircle_Params
{
	class UObject*                                     ContextObject;                                            
	struct FVector                                     Center;                                                   
	float                                              Raius;                                                    
	float                                              Height;                                                   
	bool                                               ReturnValue;                                              
};


struct AMechaAimCircle_GetBlackBoardScale_Params
{
	float                                              ReturnValue;                                              
};


struct AMechaAimCircle_CreateNewDecalComponent_Params
{
	struct FName                                       InName;                                                   
	float                                              InSize;                                                   
	class UMaterialInstance*                           InMaterial;                                               
	float                                              InExistsTime;                                             
	class UCustomDecalComponent*                       ReturnValue;                                              
};


struct UMechaAnimInstanceBase_TryUncombineWithMecha_Params
{
};


struct UMechaAnimInstanceBase_TryCombineWithMecha_Params
{
	bool                                               bShouldPlayAnimation;                                     
};


struct UMechaAnimInstanceBase_StopMechaMontage_Params
{
	struct FName                                       InGroupName;                                              
	float                                              BlendOutTime;                                             
};


struct UMechaAnimInstanceBase_ResetMechaGlidingToFalling_Params
{
};


struct UMechaAnimInstanceBase_PlayMechaMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
	float                                              PlayRate;                                                 
};


struct UMechaAnimInstanceBase_OnMechaStartMoving_Params
{
};


struct UMechaAnimInstanceBase_OnMechaStartFire_Params
{
};


struct UMechaAnimInstanceBase_OnMechaReloadFinish_Params
{
};


struct UMechaAnimInstanceBase_OnMechaHit_Params
{
	struct FVector                                     HitDir;                                                   
	bool                                               bHugeHit;                                                 
};


struct UMechaAnimInstanceBase_MechaEnterFlying_Params
{
};


struct UMechaAnimInstanceBase_HandleOnMechaGlidingToFalling_Params
{
};


struct UMechaAnimInstanceBase_HandleOnMechaAirGliding_Params
{
	bool                                               bAirGliding;                                              
};


struct UMechaAnimInstanceBase_GetActivedMontageNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UMechaAnimInstanceBase_CanLockFoot_Params
{
	bool                                               ReturnValue;                                              
};


struct UMechaDamageComponent_RepulseVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	struct FHitResult                                  InHit;                                                    
};


struct UMechaDamageComponent_RepulseCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           
	struct FHitResult                                  InHit;                                                    
};


struct UMechaDamageComponent_RegisterCollisionShapes_Params
{
};


struct UMechaDamageComponent_MulticastRPC_RepulseVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	struct FVector                                     Vel;                                                      
	struct FVector                                     HitPoint;                                                 
};


struct UMechaDamageComponent_MulticastRPC_RepulseCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           
	struct FVector                                     Vel;                                                      
	struct FVector                                     HitPoint;                                                 
};


struct UMechaDamageComponent_DetectBlockedPawn_Params
{
	float                                              DeltaTime;                                                
};


struct UMechaDamageComponent_DealWithVehicleHit_Params
{
	class UPrimitiveComponent*                         SelfComp;                                                 
	struct FHitResult                                  InHit;                                                    
};


struct UMechaDamageComponent_DealWithCharacterHit_Params
{
	class UPrimitiveComponent*                         SelfComp;                                                 
	struct FHitResult                                  InHit;                                                    
};


struct UMechaMovementComponent_UpdateDistanceToLand_Params
{
	float                                              DeltaTime;                                                
};


struct UMechaMovementComponent_OnRep_OverrideMaxForwardSpeed_Params
{
};


struct UMechaMovementComponent_OnRep_OverrideMaxBackwardSpeed_Params
{
};


struct UMechaMovementComponent_HasContinuousMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UMechaMovementComponent_DrawDebugInfo_Params
{
	float                                              DeltaTime;                                                
};


struct UMechaMovementComponent_ApplyContinuousMove_Params
{
	float                                              DeltaTime;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UScorpionAnimInstance_StopMechaMontage_Params
{
	struct FName                                       InGroupName;                                              
	float                                              BlendOutTime;                                             
};


struct UMechaSeatComponent_UpdateMechaSeatGUI_Params
{
};


struct UMechaSeatComponent_UncombineVehicleSeats_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UMechaSeatComponent_HandleUncombined_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UMechaSeatComponent_HandleCombined_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UMechaSeatComponent_GetVehicleUserComponentBase_Params
{
	class ASTExtraBaseCharacter*                       SeatOccupier;                                             
	class UVehicleUserComponentBase*                   ReturnValue;                                              
};


struct UMechaSeatComponent_CombineVehicleSeats_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UMechaCombineInterface_GetCombineState_Params
{
	TEnumAsByte<ECombineState>                         ReturnValue;                                              
};


struct UMechaCombineInterface_GetCombinedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct UMechaCombineInterface_GetCombineComponent_Params
{
	class UMechaSmoothAttachComponent*                 ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_TryUnCombine_Params
{
};


struct UMechaSmoothAttachComponent_TryCombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UMechaSmoothAttachComponent_ServerTryUnCombine_Params
{
};


struct UMechaSmoothAttachComponent_ServerTryCombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	bool                                               bRequested;                                               
};


struct UMechaSmoothAttachComponent_ProcessUncombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	int                                                ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_ProcessCombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	int                                                ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_OnUncombinedFinished_Params
{
};


struct UMechaSmoothAttachComponent_OnUncombined_Params
{
	class ASTExtraVehicleBase*                         OldCombinedMecha;                                         
};


struct UMechaSmoothAttachComponent_OnRep_CombineState_Params
{
	unsigned char                                      OldCombineState;                                          
};


struct UMechaSmoothAttachComponent_OnRep_CombinedOtherMecha_Params
{
	class ASTExtraVehicleBase*                         OldCombinedVehicle;                                       
};


struct UMechaSmoothAttachComponent_OnRep_bCanCombine_Params
{
};


struct UMechaSmoothAttachComponent_OnPreAttachTo_Params
{
	class ASTExtraVehicleBase*                         AttachedVehicle;                                          
};


struct UMechaSmoothAttachComponent_OnCombinedFinished_Params
{
};


struct UMechaSmoothAttachComponent_OnCombined_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UMechaSmoothAttachComponent_OnAttachedTo_Params
{
	class ASTExtraVehicleBase*                         AttachedVehicle;                                          
};


struct UMechaSmoothAttachComponent_MulticastSetRequestedCombine_Params
{
	bool                                               bRequested;                                               
};


struct UMechaSmoothAttachComponent_LuaCheckUncombinePosition_Params
{
	struct FVector                                     InPosition;                                               
	bool                                               ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_K2_ProcessUncombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	int                                                ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_K2_ProcessCombine_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	int                                                ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_K2_OnRep_CombineState_Params
{
	TEnumAsByte<ECombineState>                         OldCombineState;                                          
};


struct UMechaSmoothAttachComponent_K2_OnRep_CombinedOtherMecha_Params
{
	class ASTExtraVehicleBase*                         OldCombinedVehicle;                                       
};


struct UMechaSmoothAttachComponent_K2_OnRep_bCanCombine_Params
{
};


struct UMechaSmoothAttachComponent_HasCombined_Params
{
	bool                                               ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_HandleOnFatalUncombineError_Params
{
	class ASTExtraVehicleBase*                         HighPriorityVehicle;                                      
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UMechaSmoothAttachComponent_HandleOnFatalCombineError_Params
{
	class ASTExtraVehicleBase*                         HighPriorityVehicle;                                      
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UMechaSmoothAttachComponent_GetNearbyValidCombineVehicles_Params
{
	TArray<class ASTExtraVehicleBase*>                 ValidCombineVehicles;                                     
};


struct UMechaSmoothAttachComponent_GetLuaDebugString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_FindValidateUncombinePosition_Params
{
	struct FVector                                     StartLocation;                                            
	struct FVector                                     ForwardDirection;                                         
	struct FVector                                     BoxExtent;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_ExitFreeCamera_Params
{
};


struct UMechaSmoothAttachComponent_ClientDrawDebugString_Params
{
	struct FString                                     DebugString;                                              
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
};


struct UMechaSmoothAttachComponent_ClientDrawDebugCapsule_Params
{
	struct FVector                                     Center;                                                   
	float                                              HalfHeight;                                               
	float                                              Radius;                                                   
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UMechaSmoothAttachComponent_ClientDrawDebugBox_Params
{
	struct FVector                                     Center;                                                   
	struct FVector                                     Extent;                                                   
	struct FQuat                                       Quat;                                                     
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UMechaSmoothAttachComponent_ClientDrawDebugArrow_Params
{
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UMechaSmoothAttachComponent_CanUnCombineWith_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	int                                                ReturnValue;                                              
};


struct UMechaSmoothAttachComponent_CanCombineWith_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	int                                                ReturnValue;                                              
};


struct UMechaSpringArmComponent_HandleUncombined_Params
{
};


struct UMechaSpringArmComponent_HandleCombined_Params
{
};


struct UMechaUtils_GetMeshInfo_Params
{
	class USkeletalMeshComponent*                      InSkeletalMesh;                                           
	struct FString                                     ReturnValue;                                              
};


struct AMechaVehicle_UncombineHealthAndFuel_Params
{
	class ASTExtraVehicleBase*                         OtherHover;                                               
};


struct AMechaVehicle_StopMechaMontage_Params
{
	float                                              BlendOutTime;                                             
	class UAnimMontage*                                Montage;                                                  
};


struct AMechaVehicle_StateToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct AMechaVehicle_StartAirGliding_Params
{
};


struct AMechaVehicle_ShouldApplyVehicleImpulse_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	class UPrimitiveComponent*                         MyPrimComp;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};


struct AMechaVehicle_SetWeaponState_Params
{
	TEnumAsByte<EMechaWeaponState>                     InState;                                                  
};


struct AMechaVehicle_ProcessAirGlidingLanded_Params
{
};


struct AMechaVehicle_PlayMechaMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
};


struct AMechaVehicle_OnRep_MechaStates_Params
{
	uint32_t                                           OldStates;                                                
};


struct AMechaVehicle_OnRep_bAirGliding_Params
{
};


struct AMechaVehicle_OnPlayerExitMecha_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AMechaVehicle_OnPlayerEnterMecha_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AMechaVehicle_OnDriverLeaveMecha_Params
{
	class ASTExtraCharacter*                           LeaveDriver;                                              
};


struct AMechaVehicle_OnDriverEnterMecha_Params
{
	class ASTExtraCharacter*                           EnterDriver;                                              
};


struct AMechaVehicle_OnDeadMechaFallingToGrounded_Params
{
};


struct AMechaVehicle_OnBeCachedCPlus_Params
{
	class AActor*                                      SourceCatcher;                                            
};


struct AMechaVehicle_MulticastRPC_AddContinuousMove_Params
{
	class UCurveFloat*                                 MoveCurve;                                                
	float                                              Speed;                                                    
	struct FVector                                     MoveDir;                                                  
	float                                              Time;                                                     
};


struct AMechaVehicle_MulticastDrawDebugBox_Params
{
	struct FVector                                     Center;                                                   
	struct FVector                                     Extent;                                                   
	struct FQuat                                       Rotation;                                                 
	struct FColor                                      Color;                                                    
	float                                              LifeTime;                                                 
	float                                              Thickness;                                                
	bool                                               bAutonomousOnly;                                          
};


struct AMechaVehicle_MulticastDrawDebugArrow_Params
{
	struct FVector                                     LineStart;                                                
	struct FVector                                     LineEnd;                                                  
	float                                              ArrowSize;                                                
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
	float                                              Thickness;                                                
	bool                                               bAutonomousOnly;                                          
};


struct AMechaVehicle_LeaveState_Params
{
	EMechaState                                        State;                                                    
};


struct AMechaVehicle_InterruptState_Params
{
	EMechaState                                        State;                                                    
	EMechaState                                        InterruptBy;                                              
};


struct AMechaVehicle_HasState_Params
{
	EMechaState                                        State;                                                    
	bool                                               ReturnValue;                                              
};


struct AMechaVehicle_HasCombined_Params
{
	bool                                               ReturnValue;                                              
};


struct AMechaVehicle_HandleOnDestroyBy_Params
{
	float                                              DamageAmount;                                             
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
};


struct AMechaVehicle_GetMechaMovement_Params
{
	class UMechaMovementComponent*                     ReturnValue;                                              
};


struct AMechaVehicle_GetInVehicleLocalPlayer_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct AMechaVehicle_GetHeight_Params
{
	float                                              ReturnValue;                                              
};


struct AMechaVehicle_GetCombineState_Params
{
	TEnumAsByte<ECombineState>                         ReturnValue;                                              
};


struct AMechaVehicle_GetCombinedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct AMechaVehicle_GetCombineComponent_Params
{
	class UMechaSmoothAttachComponent*                 ReturnValue;                                              
};


struct AMechaVehicle_EnterState_Params
{
	EMechaState                                        State;                                                    
	bool                                               ReturnValue;                                              
};


struct AMechaVehicle_EndAirGliding_Params
{
};


struct AMechaVehicle_EnableMechaResolvePenetration_Params
{
	bool                                               bEnable;                                                  
};


struct AMechaVehicle_DrawDebugInfo_Params
{
	float                                              DeltaTime;                                                
};


struct AMechaVehicle_CombineHealthAndFuel_Params
{
	class ASTExtraVehicleBase*                         OtherHover;                                               
};


struct AMechaVehicle_CheckDriverState_Params
{
};


struct AMechaVehicle_CanHitVehicle_Params
{
	class ASTExtraVehicleBase*                         HitVehicle;                                               
	struct FHitResult                                  InHit;                                                    
	bool                                               ReturnValue;                                              
};


struct AMechaVehicle_CanHitCharacter_Params
{
	class ASTExtraBaseCharacter*                       HitCharacter;                                             
	struct FHitResult                                  InHit;                                                    
	bool                                               ReturnValue;                                              
};


struct AMechaVehicle_CacheMaxHealthAndFuel_Params
{
};


struct AMechaVehicle_ApplyVehicleImpulse_Params
{
	struct FVector                                     ApplyImpulse;                                             
	bool                                               bVelocityChange;                                          
};


struct AMechaVehicle_AllowState_Params
{
	EMechaState                                        State;                                                    
	bool                                               ReturnValue;                                              
};


struct AMechaVehicle_AddContinuousSpeedMove_Params
{
	float                                              Speed;                                                    
	struct FVector                                     MoveDir;                                                  
	float                                              Time;                                                     
};


struct AMechaVehicle_AddContinuousCurveMove_Params
{
	class UCurveFloat*                                 MoveCurve;                                                
	struct FVector                                     MoveDir;                                                  
	float                                              Time;                                                     
};


struct UMechaWeaponSeekAndLockUI_SetCompassMat_Params
{
	class UMaterialInstanceDynamic*                    InCompassMat;                                             
};


struct UMechaWeaponSeekAndLockUI_IsTextNotEqualTo_Params
{
	struct FText                                       SelfValue;                                                
	struct FText                                       OtherText;                                                
	bool                                               ReverseResult;                                            
	bool                                               ReturnValue;                                              
};


struct UMechaWeaponSeekAndLockUI_IsStrNotEqualToText_Params
{
	struct FString                                     InValue;                                                  
	struct FText                                       InText;                                                   
	bool                                               ReverseResult;                                            
	bool                                               ReturnValue;                                              
};


struct UMechaWeaponSeekAndLockUI_IsModToZero_Params
{
	int                                                InValue;                                                  
	int                                                ModValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UMechaWeaponSeekAndLockUI_IsIntNotEqualToText_Params
{
	int                                                InValue;                                                  
	struct FText                                       InText;                                                   
	bool                                               ReverseResult;                                            
	bool                                               ReturnValue;                                              
};


struct UMechaWeaponSeekAndLockUI_InitWeapon_Params
{
	class AActor*                                      OwnerWeapon;                                              
};


struct UMechaWeaponSeekAndLockUI_HandleChangeTraceTarget_Params
{
	struct FHitResult                                  HitInfo;                                                  
};


struct UMechaWeaponSeekAndLockUI_HandleChangeSeekAndLockStageTip_Params
{
	struct FString                                     Tip;                                                      
};


struct UMechaWeaponSeekAndLockUI_GetPlayerLookRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UMechaWeaponSeekAndLockUI_ExtraForGuidedMissileRenderStyle_Params
{
	bool                                               bSet;                                                     
};


struct UMechaWeaponSeekAndLockUI_BPChangeTraceTargetDis_Params
{
	float                                              Distance;                                                 
};


struct UMechaWeaponSeekAndLockUI_BPChangeSeekAndLockStageTip_Params
{
	struct FString                                     Tip;                                                      
};


struct UMechaWeaponSeekAndLockUI_AfterShow_Params
{
};


struct UMechaWeaponSeekAndLockUI_AfterHide_Params
{
};


struct AMonsterActorBase_IsInObjectPool_Params
{
	bool                                               ReturnValue;                                              
};


struct UMonsterRaptorAnimInstance_OnResetPlayedIdleIndex_Params
{
	int                                                NewIndex;                                                 
};


struct UMultiLinkActorMoveComponent_UpdatePlayersAfterSyncAdjust_Params
{
};


struct UMultiLinkActorMoveComponent_UpdateLinkMove_Params
{
	float                                              DeltaTime;                                                
};


struct UMultiLinkActorMoveComponent_UnRegisterPlayer_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	bool                                               ReturnValue;                                              
};


struct UMultiLinkActorMoveComponent_TickComponentInner_Params
{
	float                                              DeltaTime;                                                
};


struct UMultiLinkActorMoveComponent_TailMove2_Params
{
	float                                              DeltaTime;                                                
	struct FVector                                     LinkerPreLoc;                                             
	struct FVector                                     LinkerMoveDelta;                                          
};


struct UMultiLinkActorMoveComponent_TailMove_Params
{
	float                                              DeltaDistance;                                            
};


struct UMultiLinkActorMoveComponent_StartMove_Params
{
};


struct UMultiLinkActorMoveComponent_ShouldDetect_Params
{
	bool                                               ReturnValue;                                              
};


struct UMultiLinkActorMoveComponent_SetUpdatedComponent_Params
{
	class USceneComponent*                             NewUpdatedComponent;                                      
};


struct UMultiLinkActorMoveComponent_RegisterPlayerOnBoard_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	bool                                               ReturnValue;                                              
};


struct UMultiLinkActorMoveComponent_PushAwayVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                
	struct FHitResult                                  InHit;                                                    
};


struct UMultiLinkActorMoveComponent_PushAwayCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           
	struct FHitResult                                  InHit;                                                    
	struct FHitDymaicParams                            HitParam;                                                 
};


struct UMultiLinkActorMoveComponent_PushAwayAirdrop_Params
{
	class AAirDropBoxActor*                            InAirdrop;                                                
};


struct UMultiLinkActorMoveComponent_OnTriggeredBy_Params
{
	class AActor*                                      Other;                                                    
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct UMultiLinkActorMoveComponent_OnRep_Prev_Params
{
};


struct UMultiLinkActorMoveComponent_OnRep_Next_Params
{
};


struct UMultiLinkActorMoveComponent_MulticastRPC_PushAwayVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	struct FVector                                     Vel;                                                      
	struct FVector                                     HitPoint;                                                 
};


struct UMultiLinkActorMoveComponent_GetPlayersOnLinkedPlatform_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct UMultiLinkActorMoveComponent_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UMultiLinkActorMoveComponent_FindHead_Params
{
	class UMultiLinkActorMoveComponent*                ReturnValue;                                              
};


struct UMultiLinkActorMoveComponent_ExternalTickComponent_Params
{
};


struct UMultiLinkActorMoveComponent_DetectionAnalyse_Params
{
	class AActor*                                      HitActor;                                                 
	struct FHitResult                                  InHit;                                                    
	struct FHitDymaicParams                            HitParam;                                                 
};


struct UMultiLinkActorMoveComponent_BeenAddTo_Params
{
	class AActor*                                      PrevActor;                                                
};


struct UMultiLinkActorMoveComponent_AddTickDependencyToLinkedHead_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	bool                                               ReturnValue;                                              
};


struct UMultiLinkActorMoveComponent_AddTail_Params
{
	class AActor*                                      TailActor;                                                
};


struct UMultiTargetInteractiveComponent_OnSubTargetEndOverlap_Params
{
	class UPrimitiveComponent*                         SelfComponent;                                            
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComponent;                                           
	int                                                OtherBodyIndex;                                           
};


struct UMultiTargetInteractiveComponent_OnSubTargetBeginOverlap_Params
{
	class UPrimitiveComponent*                         SelfComponent;                                            
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComponent;                                           
	int                                                OtherBodyIndex;                                           
	bool                                               bFromSweep;                                               
	struct FHitResult                                  SweepResult;                                              
};


struct UMultiTargetInteractiveComponent_GetCurrentSubTargetType_Params
{
	class ACharacter*                                  Character;                                                
	struct FName                                       ReturnValue;                                              
};


struct UMultiTargetInteractiveComponent_GetCurrentSubTargetId_Params
{
	class ACharacter*                                  Character;                                                
	int                                                ReturnValue;                                              
};


struct UMultiTargetInteractiveComponent_GetCurrentSubTargetComponent_Params
{
	class ACharacter*                                  Character;                                                
	class UPrimitiveComponent*                         ReturnValue;                                              
};


struct AMyriapodVehicleAIController_SetMoveTargetLoc_Params
{
	struct FVector                                     TargetLoc;                                                
};


struct AMyriapodVehicleAIController_SetCaughtOwner_Params
{
	class AActor*                                      CaughtOwner;                                              
};


struct AMyriapodVehicleAIController_RunBehaviorTreeWithIndex_Params
{
	int                                                TreeIndex;                                                
};


struct AMyriapodVehicleAIController_OnAirDropLandGroup_Params
{
	class AActor*                                      AirDropBoxActor;                                          
	bool                                               bIsInWater;                                               
};


struct UMysticPlantCheckActorCallCreateUtils_GetBPUtils_Params
{
	class UMysticPlantCheckActorCallCreateBPUtils*     ReturnValue;                                              
};


struct UMysticPlantCheckActorCallCreateUtils_CanCreateSkillItem_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	int                                                SkillActorID;                                             
	struct FVector                                     CreateLocation;                                           
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     AssociationActorLocation;                                 
	bool                                               ReturnValue;                                              
};


struct UMysticPlantCheckActorCallCreateBPUtils_GetCreateSkillItemType_Params
{
	int                                                SkillActorID;                                             
	struct FCreateSkillItemInfo                        ReturnValue;                                              
};


struct UNinjaMoveAnimInstance_ShouldPlayJumpParticle_Params
{
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveAnimInstance_OnPlayerEnterJump_Params
{
};


struct UNinjaMoveAnimInstance_OnJumpEnterNTMove_Params
{
};


struct UNinjaMoveAnimInstance_HandlePlayerPickUp_Params
{
};


struct UNinjaMoveComponent_TryLeaveNinjaTeam_Params
{
	class ASTExtraBaseCharacter*                       FollowerPlayer;                                           
};


struct UNinjaMoveComponent_TryLeaveCurrentNinjaTeam_Params
{
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_TryJoinNinjaTeamWithPendingLeader_Params
{
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_TryJoinNinjaTeam_Params
{
	class ASTExtraBaseCharacter*                       FollowerPlayer;                                           
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_StopSprintAudio_Params
{
};


struct UNinjaMoveComponent_SetTeamShape_Params
{
	ENinjaTeamShape                                    InTeamShapeType;                                          
	float                                              InRowSpacing;                                             
	float                                              InColumnSpacing;                                          
	int                                                InRowCapacity_Triangle;                                   
	int                                                InRowCapacity_LineX;                                      
};


struct UNinjaMoveComponent_SetMoveIgnoreBetween_Params
{
	class ASTExtraBaseCharacter*                       A;                                                        
	class ASTExtraBaseCharacter*                       B;                                                        
	bool                                               bIgnore;                                                  
};


struct UNinjaMoveComponent_ServerGetFollowerDesiredPosition_Params
{
	class ASTExtraBaseCharacter*                       InFollowerPlayer;                                         
	struct FVector                                     OutPosition;                                              
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_ServerDoNinjaJump_Params
{
};


struct UNinjaMoveComponent_RefreshTeamCollisionMembers_Params
{
};


struct UNinjaMoveComponent_PlaySprintAudio_Params
{
};


struct UNinjaMoveComponent_OnSpecialMoveTypeChanged_Params
{
	ESpecialMovementType                               SpecialMovementType;                                      
	ESpecialMovementType                               OldSpecialMovementType;                                   
};


struct UNinjaMoveComponent_OnRep_TeamCollisionMembers_Params
{
};


struct UNinjaMoveComponent_OnRep_NinjaMoveState_Params
{
};


struct UNinjaMoveComponent_OnPawnStateInterrupted_Params
{
	EPawnState                                         State;                                                    
	EPawnState                                         InterruptedBy;                                            
};


struct UNinjaMoveComponent_OnPawnLeaveState_Params
{
	EPawnState                                         State;                                                    
};


struct UNinjaMoveComponent_OnPawnEnterState_Params
{
	EPawnState                                         State;                                                    
};


struct UNinjaMoveComponent_OnFollowersCountChanged_Params
{
};


struct UNinjaMoveComponent_OnClientNinjaStatChanged_Params
{
	struct FNinjaMoveState                             NewState;                                                 
};


struct UNinjaMoveComponent_MulticastDoNinjaJump_Params
{
};


struct UNinjaMoveComponent_IsNinjaMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_IsMoveOnWater_Params
{
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_IsLeader_Params
{
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_GetNinjaMoveAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UNinjaMoveComponent_GetLeaderNinjaMoveComponent_Params
{
	class UNinjaMoveComponent*                         ReturnValue;                                              
};


struct UNinjaMoveComponent_GetLeader_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct UNinjaMoveComponent_GenerateTeamShapePositions_Params
{
	int                                                InFollowerNum;                                            
	ENinjaTeamShape                                    InTeamShape;                                              
	TArray<struct FTeamPosition>                       ReturnValue;                                              
};


struct UNinjaMoveComponent_ExitNinjaMove_Params
{
};


struct UNinjaMoveComponent_EnterNinjaMove_Params
{
	class ASTExtraBaseCharacter*                       InLeaderPlayer;                                           
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_DoNinjaJump_Params
{
};


struct UNinjaMoveComponent_ClearAudioAndParticle_Params
{
};


struct UNinjaMoveComponent_CanJointNinjaTeam_Params
{
	bool                                               ReturnValue;                                              
};


struct UNinjaMoveComponent_ApplyTeamCollisionIgnore_Params
{
};


struct UNinjaMoveObj_OnEndWalkOnWater_Params
{
};


struct UNinjaMoveObj_OnBeginWalkOnWater_Params
{
};


struct UNinjaMoveObj_IsPlayerInRoom_Params
{
	bool                                               ReturnValue;                                              
};


struct UNinjaRushObj_StopRush_Params
{
};


struct UNinjaRushObj_StartRush_Params
{
};


struct UNinjaRushObj_OnEndWalkOnWater_Params
{
};


struct UNinjaRushObj_OnBeginWalkOnWater_Params
{
};


struct UNinjaRushObj_IsRushActive_Params
{
	bool                                               ReturnValue;                                              
};


struct UNitroThrusterAnimInstance_StopAnimMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
};


struct UNitroThrusterAnimInstance_PlayAnimMontage_Params
{
	class UAnimMontage*                                InMontage;                                                
	struct FName                                       Section;                                                  
	float                                              InPlayRate;                                               
};


struct UNitroThrusterAnimInstance_HandleNitroBoostStateChanged_Params
{
	bool                                               bIsNitroBoosting;                                         
};


struct UNosferatuAnimInstance_OnOwnerPreDoJump_Params
{
};


struct UNosferatuAnimInstance_OnOwnerPickUp_Params
{
};


struct UNosferatuAnimInstance_HandlePlayerAnimMontagePlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
};


struct UNosferatuAnimInstance_HandlePlayerAnimMontageExtraPlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
	bool                                               bOnlyJumpToSectionWhilePlaying;                           
	struct FName                                       IgnoreStopSection;                                        
};


struct UNosferatuAnimInstance_CalcHurtDir_Params
{
};


struct UNTFoxAnimInstance_RequestTurn_Params
{
	struct FRotator                                    TargetRotator;                                            
	float                                              Duration;                                                 
};


struct UNTFoxAnimInstance_PreRequestTurn_Params
{
	struct FRotator                                    TargetRotator;                                            
	float                                              Duration;                                                 
};


struct UNTFoxAnimInstance_PlayHitMontage_Params
{
};


struct UNTFoxAnimInstance_OnStop_Params
{
};


struct UNTFoxAnimInstance_OnNTFoxStanceChanged_Params
{
	EFoxStance                                         OldStance;                                                
};


struct UNTFoxAnimInstance_OnNTFoxGaitChanged_Params
{
	ENTFoxGait                                         OldGait;                                                  
};


struct UNTFoxAnimInstance_OnFoxHit_Params
{
	struct FName                                       HitBoneName;                                              
	float                                              HitAmount;                                                
};


struct UNTFoxAnimInstance_OnCircleStop_Params
{
};


struct UNTFoxAnimInstance_GetCircleStopSequence_Params
{
	struct FMotionSearchResult                         OutResult;                                                
	bool                                               ReturnValue;                                              
};


struct UNTFoxAnimInstance_GetBestStopSequence_Params
{
	struct FMotionSearchResult                         OutResult;                                                
	bool                                               ReturnValue;                                              
};


struct UNTFoxMovementComponent_SetPreciseMovementTarget_Params
{
	struct FVector                                     TargetLocation;                                           
};


struct UNTFoxMovementComponent_SetPreciseFixedScale_Params
{
	float                                              InScale;                                                  
};


struct UNTFoxMovementComponent_ScanAndIgnoreObstaclesAhead_Params
{
	float                                              ForwardDistance;                                          
	ENTFoxScanDir                                      ScanDir;                                                  
	bool                                               bSimpleFoliageOnly;                                       
};


struct UNTFoxMovementComponent_Multicast_ScanAndIgnoreObstaclesAhead_RPC_Params
{
	float                                              ForwardDistance;                                          
	ENTFoxScanDir                                      ScanDir;                                                  
	bool                                               bSimpleFoliageOnly;                                       
};


struct UNTFoxMovementComponent_Multicast_ScanAndIgnoreObstaclesAhead_Params
{
	float                                              ForwardDistance;                                          
	ENTFoxScanDir                                      ScanDir;                                                  
	bool                                               bSimpleFoliageOnly;                                       
};


struct UNTFoxMovementComponent_Multicast_ClearMoveIgnoreObstacles_RPC_Params
{
};


struct UNTFoxMovementComponent_Multicast_ClearMoveIgnoreObstacles_Params
{
};


struct UNTFoxMovementComponent_HasBlockingObstacleAhead_Params
{
	float                                              Distance;                                                 
	ENTFoxScanDir                                      ScanDir;                                                  
	float                                              HeightOffset;                                             
	bool                                               bIgnoreFoliageActors;                                     
	bool                                               ReturnValue;                                              
};


struct UNTFoxMovementComponent_ClearPrecisePrediction_Params
{
};


struct UNTFoxMovementComponent_ClearPreciseMovementTarget_Params
{
};


struct UNTFoxMovementComponent_ClearMoveIgnoreObstacles_Params
{
};


struct UOBHttpComponent_UploadAPIContent_Params
{
};


struct UOBHttpComponent_SetDataCenterURL_Params
{
	struct FString                                     URL;                                                      
};


struct UOBHttpComponent_SetAPIContentID_Params
{
	uint64_t                                           InID;                                                     
};


struct UOBHttpComponent_ServerGetBackPackInfo_Params
{
	int                                                TeamID;                                                   
};


struct UOBHttpComponent_ServerGetAllPlayerThrowInfo_Params
{
};


struct UOBHttpComponent_SerializeAPIContent_Params
{
	struct FString                                     CmdStr;                                                   
	struct FString                                     ContentStr;                                               
	bool                                               ReturnValue;                                              
};


struct UOBHttpComponent_PreUploadAPI_Params
{
};


struct UOBHttpComponent_PostTeamWeaponInfo_Params
{
	struct FString                                     TeamWeaponInfoJsonStr;                                    
};


struct UOBHttpComponent_PostTeamBackPackInfoByTeamID_Params
{
	int                                                TeamID;                                                   
};


struct UOBHttpComponent_PostTDMResultInfo_Params
{
	struct FString                                     TDMResultInfoJsonStr;                                     
};


struct UOBHttpComponent_PostPlayersAMInfo_Params
{
	struct FString                                     PlayerAMInfoJsonStr;                                      
};


struct UOBHttpComponent_PostCustomInfo_Params
{
	struct FString                                     UrlName;                                                  
	TMap<struct FString, struct FString>               Params;                                                   
};


struct UOBHttpComponent_OnUploadAPIResponse_Params
{
	int                                                Result;                                                   
};


struct UOBHttpComponent_OnRep_RealTimeAPIList_Params
{
};


struct UOBHttpComponent_OnRep_AfterMatchAPIList_Params
{
};


struct UOBHttpComponent_ClientUpdateTeammateItemList_Params
{
};


struct UOBHttpComponent_ClientGetPlayerUseSightInfo_Params
{
	TArray<struct FPlayerSightUsageInfoCompress>       PlayerSightUsageInfoCompress;                             
};


struct UOBHttpComponent_ClientGetPlayerPickUpInfo_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FPlayerPickUpInfo                           PickupInfo;                                               
};


struct UOBHttpComponent_ClientGetPlayerAssistInfo_Params
{
	struct FPlayerAssistInfo                           PlayerAssistInfo;                                         
};


struct UOBHttpComponent_ClientGetBackPackInfo_Params
{
	TArray<struct FPlayerBackPackInfo>                 TeamBackPackInfo;                                         
};


struct UOBHttpComponent_ClientGetAllPlayerThrowInfo_Params
{
	TArray<struct FPlayerThrowInfo>                    AllPlayerThrowInfo;                                       
};


struct UOBHttpComponent_ClientGetAirDropBoxInfo_Params
{
	unsigned char                                      AirDropId;                                                
	TArray<struct FAirDropBoxDataItem>                 AirDropBoxDataList;                                       
};


struct UOBModeAirDropWidget_SetAirDrop_Params
{
	class AAirDropBoxActor*                            DropBox;                                                  
};


struct UOBModeAirDropWidget_OnItemClicked_Params
{
};


struct UOBModePlayerHeadList_GetHeadItem_Params
{
	struct FString                                     PlayerName;                                               
	int                                                TeamID;                                                   
	bool                                               bIsWithCreate;                                            
	class UOBModePositionWidget*                       ReturnValue;                                              
};


struct UOBModePlayerHeadList_DynamicSortPlayerHeadWidget_Params
{
};


struct UOBModePlayerHeadList_CreateHeadItem_Params
{
	struct FString                                     PlayerName;                                               
	struct FHeadItem                                   HeadItem;                                                 
};


struct UOBModePositionWidget_SetPlayerCharacter_Params
{
	class ASTExtraPlayerController*                    Controller;                                               
	int                                                idx;                                                      
};


struct UOBModePositionWidget_RefreshWeaponIconStatusDetail_Params
{
	struct FItemDefineID                               DefineItem;                                               
};


struct UOBModePositionWidget_RefreshWeaponBulletStatus_Params
{
	bool                                               bHasBullet;                                               
};


struct UOBModePositionWidget_RefreshPlayerHealth_Params
{
	float                                              hpRatio;                                                  
	float                                              breathRatio;                                              
	bool                                               IsNearDeath;                                              
};


struct UOBModePositionWidget_RefreshOpenWeaponIconStatus_Params
{
	bool                                               IsOpen;                                                   
};


struct UOBModePositionWidget_RefreshDistance_Params
{
	int                                                Distance;                                                 
	float                                              fovDistance;                                              
};


struct UOBModePositionWidget_ReceiveUseWeseeStyle_Params
{
	ERelationshipWithTarget                            RelationshipWithTarget;                                   
};


struct UOBModePositionWidget_OpenShowWeaponIcon_Params
{
};


struct UOBModePositionWidget_OnItemClicked_Params
{
};


struct UOBModePositionWidget_OnDistanceModeChanged_Params
{
	int                                                DistanceMode;                                             
	int                                                TeamID;                                                   
};


struct UOBModePositionWidget_HandleWeaponChange_Params
{
};


struct UOBModePositionWidget_HandleCheckCurWeaponBulletChange_Params
{
};


struct UOBModePositionWidget_GetWidgetID_Params
{
	int                                                ReturnValue;                                              
};


struct UOBModePositionWidget_GetOpacityByDistance_Params
{
	float                                              Distance3D;                                               
	float                                              ReturnValue;                                              
};


struct UOBModePositionWidget_GetCachedPlayerCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct UOBModePositionWidget_DisplayFinalDamage_Params
{
	float                                              FinalDamage;                                              
	int                                                AttackerTeamID;                                           
};


struct UOBModePositionWidget_CloseShowWeaponIcon_Params
{
};


struct UOBModePositionWidget_CheckOwnWeaponStatus_Params
{
};


struct UObserverProbeComponent_PostInfoAfterMatch_Params
{
};


struct UObserverProbeComponent_OpenOBMLAIDebug_Params
{
};


struct UObserverProbeComponent_OnTerminatorEndGame_Params
{
	class AController*                                 Killer;                                                   
	class AController*                                 Victim;                                                   
	int                                                DamageType;                                               
	int                                                ExtraParam;                                               
};


struct UObserverProbeComponent_CollectSightUseTime_Params
{
	uint32_t                                           PlayerKey;                                                
	int                                                SightId;                                                  
	bool                                               bUse;                                                     
};


struct AOceanVehicle_TryVehicleDive_Params
{
	bool                                               bStart;                                                   
};


struct AOceanVehicle_TickSyncCameraInfo_Params
{
	float                                              Delta;                                                    
};


struct AOceanVehicle_StopAllBlanketSfx_Params
{
};


struct AOceanVehicle_OnRep_UpOnSpecialWater_Params
{
	bool                                               bPrevState;                                               
};


struct AOceanVehicle_OnRep_OceanVehicleDiveCDChanged_Params
{
	bool                                               bPrevState;                                               
};


struct AOceanVehicle_OnRep_InSpecialWater_Params
{
	bool                                               bPrevState;                                               
};


struct AOceanVehicle_IsOceanVehicleInWater_Params
{
	bool                                               ReturnValue;                                              
};


struct AOceanVehicle_GetUnitUID_Params
{
	int                                                ReturnValue;                                              
};


struct AOceanVehicle_GetConsumeFuelRate_Params
{
	float                                              ReturnValue;                                              
};


struct AOceanVehicle_EnableWaterModeCameraModifier_Params
{
	bool                                               bEnable;                                                  
};


struct AOceanVehicle_EnableDiveCameraModifier_Params
{
	bool                                               bEnable;                                                  
};


struct AOceanVehicle_DestroyAllCachedParticleEffect_Params
{
};


struct AOceanVehicle_CanUpdateMovementInput_Params
{
	bool                                               ReturnValue;                                              
};


struct AOceanVehicle_CanOceanVehicleDive_Params
{
	bool                                               ReturnValue;                                              
};


struct AOceanVehicle_CanConsumeFuel_Params
{
	bool                                               ReturnValue;                                              
};


struct AOceanVehicle_CanAutoIncreaseFuel_Params
{
	bool                                               ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_StartFlyingDive_Params
{
};


struct UOceanVehicleMovementComponent_SetServerDiveDirection_Params
{
	struct FVector                                     ClientDivDirection;                                       
};


struct UOceanVehicleMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UOceanVehicleMovementComponent_OnInSpecialWaterStateChange_Params
{
	bool                                               bInEnterWater;                                            
};


struct UOceanVehicleMovementComponent_IsLowFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_IsLocationInSpecialWater_Params
{
	struct FVector                                     InLoc;                                                    
	bool                                               ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_IsAutoLanding_Params
{
	bool                                               ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_GetOceanVehicleMoveState_Params
{
	EOceanVehicleBaseMoveMode                          ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_GetFlyingConfig_Params
{
	struct FFlyBioVehicleFlyingConfig                  ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_EndFlyingDive_Params
{
};


struct UOceanVehicleMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                
};


struct UOceanVehicleMovementComponent_CheckCanStartFlyingDive_Params
{
	bool                                               ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_CanDiving_Params
{
	bool                                               ReturnValue;                                              
};


struct UOceanVehicleMovementComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UOceanVehicleMovementComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                
};


struct UOceanVehicleMovementComponent_CalculateDivingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UODMGearCharacterAnimInstance_OnSwitchWeaponAnimPlay_Params
{
	struct FString                                     PlayerKey;                                                
	bool                                               bWantsEquip;                                              
};


struct UODMGearCharacterAnimInstance_OnOwnerPlayerAnimListChanged_Params
{
	struct FName                                       EventMsg;                                                 
};


struct UODMGearMoveObj_SetMoveState_Params
{
	EODMGearMoveState                                  FlyMode;                                                  
};


struct UODMGearMoveObj_SetHomingTarget_Params
{
	class AActor*                                      InHomingTarget;                                           
};


struct UODMGearMoveObj_SetDestLocation_Params
{
	struct FVector                                     InDestLocation;                                           
};


struct UODMGearMoveObj_GetCurMoveState_Params
{
	EODMGearMoveState                                  ReturnValue;                                              
};


struct UODMGearWeaponAnimInstance_UpdateOwnerMesh_Params
{
};


struct UODMGearWeaponAnimInstance_StopStandbyAnim_Params
{
};


struct UODMGearWeaponAnimInstance_PlaySwitchWeaponAnim_Params
{
	bool                                               bWantsEquip;                                              
};


struct UODMGearWeaponAnimInstance_PlayStandbyAnim_Params
{
	int                                                AnimType;                                                 
};


struct UOtherCharacterBearerUnit_OnAvatarAllMeshLoaded_Params
{
};


struct UOtherWeaponBearerUnit_OnWeaponAvatarLoaded_Params
{
	int                                                Val;                                                      
	struct FItemDefineID                               ID;                                                       
};


struct UOtherWeaponBearerUnit_OnWeaponAttachAvatarLoaded_Params
{
	int                                                Val;                                                      
	struct FItemDefineID                               ID;                                                       
};


struct UPandaAnimData_GetLeisureAnim_Params
{
	EMonsterLeisureStyle                               Style;                                                    
	struct FName                                       KeyName;                                                  
	float                                              ValidDuration;                                            
	class UAnimSequenceBase*                           ReturnValue;                                              
};


struct UPandaAnimInstance_SetRootBoneOffset_Params
{
	struct FRotator                                    InRotatorOffset;                                          
};


struct UPandaAnimInstance_OnPandaStartIdle_Params
{
	struct FString                                     sAnimSeqKey;                                              
	float                                              Duration;                                                 
	bool                                               bIsCrowd;                                                 
};


struct UPandaAnimInstance_OnHorseShocked_Params
{
};


struct UPandaAnimInstance_HandleOnSuddenStop_Params
{
};


struct UPandaAnimInstance_HandleOnHorseFeeded_Params
{
};


struct UPandaAnimInstance_HandleOnHorseAccelerate_Params
{
};


struct UPandaAnimInstance_HandleOnEndMatchDistance_Params
{
	float                                              StopDuration;                                             
};


struct UPandaAnimInstance_HandleOnBeginMatchDistance_Params
{
	struct FVector                                     PredictedStopLocation;                                    
};


struct UPandaAnimInstance_GetLeisureIdle_Params
{
	struct FString                                     sAnimSeqKey;                                              
	float                                              Duration;                                                 
	bool                                               bIsCrowd;                                                 
	class UAnimSequenceBase*                           ReturnValue;                                              
};


struct UPandaAnimInstance_BpStopAllMontages_Params
{
	float                                              BlendOut;                                                 
};


struct UPandaAnimInstance_BpOnHorseShocked_Params
{
};


struct UPandaAnimInstance_BPIMP_PandaSuddenStop_Params
{
	float                                              StopDuration;                                             
};


struct UPandaAnimInstance_BpHandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                
};


struct UPandaAnimInstance_BpHandleOnHorseFeeded_Params
{
};


struct UPandaAnimInstance_BpHandleOnHorseAccelerate_Params
{
};


struct UPandaBallAnimInstance_GetRotationWithMeshHead_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UPandaDriverAnimInstance_OnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct UPandaDriverAnimInstance_OnHorseShocked_Params
{
};


struct UPandaDriverAnimInstance_HandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct UPandaDriverAnimInstance_HandleOnSuddenStop_Params
{
};


struct UPandaDriverAnimInstance_HandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                
	bool                                               bSpecialJump;                                             
};


struct UPandaDriverAnimInstance_HandleOnHorseFeeded_Params
{
};


struct UPandaDriverAnimInstance_HandleOnHorseAccelerate_Params
{
};


struct UPandaDriverAnimInstance_DoRandomIdle_Params
{
	int                                                Index;                                                    
};


struct UPandaDriverAnimInstance_BpOnTakeDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct UPandaDriverAnimInstance_BpOnHorseShocked_Params
{
};


struct UPandaDriverAnimInstance_BPIMP_PandaDriverSuddenStop_Params
{
};


struct UPandaDriverAnimInstance_BpHandleOnHorseJumped_Params
{
	int                                                JumpCount;                                                
};


struct UPandaDriverAnimInstance_BpHandleOnHorseFeeded_Params
{
};


struct UPandaDriverAnimInstance_BpHandleOnHorseAccelerate_Params
{
};


struct UPandaPassengerAnimInstance_HandleOnPreExit_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct UPandaPassengerAnimInstance_BpHandleOnPreExit_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct UVehicleEmoteDA_GetVehicleAnim_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	class UAnimationAsset*                             ReturnValue;                                              
};


struct UVehicleEmoteDA_GetTriggerAnim_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	class UAnimationAsset*                             ReturnValue;                                              
};


struct UVehicleEmoteDA_GetPassengerAnim_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	class UAnimationAsset*                             ReturnValue;                                              
};


struct UVehicleEmoteDA_GetDriverAnim_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_ValidatePlayEmote_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      AnimEmoteID;                                              
	class AActor*                                      TriggerActor;                                             
	bool                                               bPlayCharacterAnim;                                       
	bool                                               ReturnValue;                                              
};


struct APandaVehicle_StopVehicleEmoteInternal_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	bool                                               bStopPassengerAnim;                                       
};


struct APandaVehicle_SpawnDeformObj_Internal_Params
{
	struct FRotator                                    ClientRotation;                                           
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct APandaVehicle_ShouldNeedPlayMountAnim_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	class UAnimMontage*                                PlayerMountMontage;                                       
	bool                                               ReturnValue;                                              
};


struct APandaVehicle_ShouldJump_Params
{
	bool                                               ReturnValue;                                              
};


struct APandaVehicle_ShouldCalcCamera_Params
{
	bool                                               ReturnValue;                                              
};


struct APandaVehicle_ServerStopEmoteInteract_Params
{
	bool                                               bPlayCharacterAnim;                                       
	bool                                               bStopAllAnim;                                             
};


struct APandaVehicle_ServerSpawnPandaDeformedObj_Params
{
	bool                                               bUseCustomRotation;                                       
	struct FRotator                                    InRotation;                                               
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct APandaVehicle_ServerPlayEmoteInteract_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      AnimEmoteID;                                              
	class AActor*                                      TriggerActor;                                             
	bool                                               bPlayCharacterAnim;                                       
};


struct APandaVehicle_RPC_ServerSetDeformedRotation_Params
{
	float                                              ClientRotationYaw;                                        
	struct FVector                                     VLoc;                                                     
};


struct APandaVehicle_RPC_ServerPlayEmoteInteract_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      AnimEmoteID;                                              
	class AActor*                                      TriggerActor;                                             
	bool                                               bPlayCharacterAnim;                                       
};


struct APandaVehicle_ReqPreFakeMeshAndApply_Params
{
};


struct APandaVehicle_ReqAsyncEmoteData_Params
{
};


struct APandaVehicle_PlayVehicleEmoteInternal_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	bool                                               bPlayPassengerAnim;                                       
};


struct APandaVehicle_PlaySimpleMontage_Params
{
	class UAnimMontage*                                InAnimMontage;                                            
};


struct APandaVehicle_OnRep_PandaEmoteInteract_Params
{
};


struct APandaVehicle_GetVehicleAnim_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_GetTriggerAnim_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_GetPassengerAnim_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_GetPandaMovementComponent_Params
{
	class UPandaVehicleMovementComponent*              ReturnValue;                                              
};


struct APandaVehicle_GetEmoteInteractStatus_Params
{
	bool                                               ReturnValue;                                              
};


struct APandaVehicle_GetEmoteInteractAnimID_Params
{
	unsigned char                                      ReturnValue;                                              
};


struct APandaVehicle_GetDriverAnim_Params
{
	EVehicleEmoteInteractType                          Type;                                                     
	unsigned char                                      ID;                                                       
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_GetCurrentVehicleAnim_Params
{
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_GetCurrentTriggerAnim_Params
{
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_GetCurrentPassengerAnim_Params
{
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_GetCurrentDriverAnim_Params
{
	class UAnimationAsset*                             ReturnValue;                                              
};


struct APandaVehicle_DoTestDebug_Params
{
};


struct APandaVehicle_DeformedSpawnEmitterAtLocation_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          
	struct FName                                       BoneName;                                                 
	bool                                               bAutoDestroy;                                             
};


struct APandaVehicle_CreatePreFakeMesh_Params
{
};


struct APandaVehicle_ConsumeNeedPlayMountMontage_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
	class UAnimMontage*                                PlayerMountMontage;                                       
	bool                                               ReturnValue;                                              
};


struct APandaVehicle_CheckSurroundingObstaclesWhenIdle_Params
{
	bool                                               ReturnValue;                                              
};


struct AParachuteWarterActor_CollisionQueryParamsAddIgnoredActor_Params
{
	class AActor*                                      InIgnoreActor;                                            
};


struct AParachuteWarterActor_ChangeAboveSpecicalAreaType_Params
{
	class ASTExtraBaseCharacter*                       DellActor;                                                
	bool                                               bAboveSpecicalAreaIn;                                     
};


struct AParachuteWarterActor_AddOrRemoveCheckActor_Params
{
	int                                                PlayerKey;                                                
	class ASTExtraBaseCharacter*                       checkActor;                                               
	bool                                               Add;                                                      
};


struct UPCOBCommonComponent_TrackingEnd_Params
{
};


struct UPCOBCommonComponent_PCOBTerminator_Params
{
	class ASTExtraBaseCharacter*                       Causer;                                                   
	class ASTExtraBaseCharacter*                       Victim;                                                   
};


struct UPCOBCommonComponent_OnLoadAllLevelChanged_Params
{
	bool                                               bLoadAllLevel;                                            
};


struct APenguinCart_SwitchSwimCameraData_Params
{
	bool                                               bEnable;                                                  
};


struct APenguinCart_SwitchSpiritCameraData_Params
{
	bool                                               bEnable;                                                  
};


struct APenguinCart_SwitchPushSnowBallCameraData_Params
{
	bool                                               bEnable;                                                  
};


struct APenguinCart_OnVehicleHelpPushOnStateChanged_Params
{
};


struct APenguinCart_OnTriggerSnowBallBroken_Params
{
	ESnowBallBrokenReason                              InSnowBallBrokenReason;                                   
};


struct APenguinCart_OnSnowBallHitCharacter_Params
{
};


struct APenguinCart_OnRep_HelpPushOnMaxSpeedIncrements_Params
{
};


struct APenguinCart_HasHelpPushOnActivated_Params
{
	bool                                               ReturnValue;                                              
};


struct APenguinCart_GetPenguinSnowBallComponent_Params
{
	class UPenguinSnowBallComponent*                   ReturnValue;                                              
};


struct APenguinCart_GetPenguinMovementComponent_Params
{
	class UPenguinCartMovementComponent*               ReturnValue;                                              
};


struct APenguinCart_GetHelpPushOnMaxSpeedIncrement_Params
{
	int                                                InSeatIndex;                                              
	float                                              ReturnValue;                                              
};


struct APenguinCart_GetHelpPushOnChargingState_Params
{
	int                                                InSeatIndex;                                              
	bool                                               ReturnValue;                                              
};


struct UPenguinCartMovementComponent_ShouldOptimizeTick_Params
{
	bool                                               ReturnValue;                                              
};


struct UPenguinCartMovementComponent_GetCurrentMaxAllowedSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UPenguinRocketAnimInstance_HandleWeaponState_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 InState;                                                  
};


struct UPenguinRocketAnimInstance_HandleOnWeaponReloadEnd_Params
{
};


struct UPenguinRocketMoveObj_SetWeaponLevel_Params
{
	int                                                InLevel;                                                  
};


struct UPenguinRocketMoveObj_OnSpecialMoveTypeChanged_Params
{
	ESpecialMovementType                               SpecialMovementType;                                      
	ESpecialMovementType                               OldSpecialMovementType;                                   
};


struct UPenguinRocketMoveObj_OnReachMaxMoveTime_Params
{
};


struct UPenguinRocketMoveObj_OnPawnStateInterrupted_Params
{
	EPawnState                                         State;                                                    
	EPawnState                                         InterruptedBy;                                            
};


struct UPenguinRocketMoveObj_OnPawnLeaveState_Params
{
	EPawnState                                         State;                                                    
};


struct UPenguinRocketMoveObj_OnPawnEnterState_Params
{
	EPawnState                                         State;                                                    
};


struct UPenguinRocketMoveObj_OnLeavePenguinRocketState_Params
{
};


struct UPenguinRocketMoveObj_OnLanding_Params
{
	struct FVector                                     EnterVelocity;                                            
	TEnumAsByte<EMovementMode>                         PreviousMovementMode;                                     
};


struct UPenguinRocketMoveObj_OnFlyPoseHeightTypeChanged_Params
{
	TEnumAsByte<EFlyHeightType>                        NewType;                                                  
};


struct UPenguinRocketMoveObj_OnEnterPenguinRocketState_Params
{
};


struct UPenguinRocketMoveObj_IsPlayerInRoom_Params
{
	bool                                               ReturnValue;                                              
};


struct UPenguinRocketMoveObj_ExitSpecialMove_Params
{
};


struct UPenguinRocketMoveObj_ExitLaunchFlying_Params
{
};


struct UPenguinRocketMoveObj_EnterLaunchFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct UPenguinRocketMoveObj_BpSpecialMoveSetCharacterOwner_Params
{
	class ASTExtraBaseCharacter*                       OwnerCharacter;                                           
};


struct UPenguinRocketMoveObj_BpOnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PreviousMovementMode;                                     
	unsigned char                                      PreviousCustomMode;                                       
};


struct APenguinSnowBall_TickUpdateLocationAndRotation_Params
{
	float                                              DeltaTime;                                                
};


struct APenguinSnowBall_TickEffect_Params
{
	float                                              DeltaTime;                                                
};


struct APenguinSnowBall_ShouldActivateRollingEffect_Params
{
	bool                                               ReturnValue;                                              
};


struct APenguinSnowBall_SetSnowBallState_Params
{
	ESnowBallState                                     InState;                                                  
};


struct APenguinSnowBall_SetSnowBallRadius_Params
{
	float                                              Radius;                                                   
};


struct APenguinSnowBall_ReleaseSnowBall_Params
{
};


struct APenguinSnowBall_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                
};


struct APenguinSnowBall_OnSnowBallFree_Params
{
};


struct APenguinSnowBall_OnSnowBallBroken_Params
{
};


struct APenguinSnowBall_OnSnowBallAppear_Params
{
};


struct APenguinSnowBall_OnRep_SnowBallState_Params
{
};


struct APenguinSnowBall_OnRep_NetSnowBallRadius_Params
{
};


struct APenguinSnowBall_OnRep_DecalInfo_Params
{
};


struct APenguinSnowBall_LuaOnSnowBallFree_Params
{
};


struct APenguinSnowBall_LuaOnSnowBallBroken_Params
{
};


struct APenguinSnowBall_LuaOnSnowBallAppear_Params
{
};


struct APenguinSnowBall_KnockAwayCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           
};


struct APenguinSnowBall_HandleSnowBallStateChanged_Params
{
};


struct APenguinSnowBall_HandleOnInteractWithTrigger_Params
{
	class AActor*                                      TriggerActor;                                             
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct APenguinSnowBall_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct APenguinSnowBall_HandleDecalInfo_Params
{
};


struct APenguinSnowBall_GetSnowBallVelocity_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct APenguinSnowBall_GetSnowBallRadius_Params
{
	float                                              ReturnValue;                                              
};


struct APenguinSnowBall_GetPenguinOwner_Params
{
	class APenguinCart*                                ReturnValue;                                              
};


struct APenguinSnowBall_ForceBreakSnowBall_Params
{
};


struct APenguinSnowBall_DamageCharacter_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	bool                                               ReturnValue;                                              
};


struct APenguinSnowBall_BreakSnowBall_Params
{
	ESnowBallBrokenReason                              Reason;                                                   
};


struct UPenguinSnowBallComponent_TriggerSnowBallBroken_Params
{
	ESnowBallBrokenReason                              BrokenReason;                                             
	class AActor*                                      Causer;                                                   
};


struct UPenguinSnowBallComponent_TickUpdateSnowBall_Params
{
	float                                              DeltaTime;                                                
};


struct UPenguinSnowBallComponent_ServerRPC_ReleaseSnowBall_Params
{
};


struct UPenguinSnowBallComponent_RefreshSnowBallRadius_Params
{
	float                                              CurRadius;                                                
	float                                              DeltaTime;                                                
};


struct UPenguinSnowBallComponent_PlayerReleaseSnowBall_Params
{
};


struct UPenguinSnowBallComponent_PlayerPushSnowBall_Params
{
};


struct UPenguinSnowBallComponent_PlayerBreakSnowBall_Params
{
};


struct UPenguinSnowBallComponent_OnStartPushSnowBall_Params
{
};


struct UPenguinSnowBallComponent_OnRep_PushSnowBallSize_Params
{
};


struct UPenguinSnowBallComponent_OnEndPushSnowBall_Params
{
};


struct UPenguinSnowBallComponent_MoveIgnoreSnowBall_Params
{
	class AActor*                                      SnowBall;                                                 
	bool                                               bIgnore;                                                  
};


struct UPenguinSnowBallComponent_LuaOnStartPushSnowBall_Params
{
};


struct UPenguinSnowBallComponent_LuaOnEndPushSnowBall_Params
{
};


struct UPenguinSnowBallComponent_IsPushingSnowBall_Params
{
	bool                                               ReturnValue;                                              
};


struct UPenguinSnowBallComponent_HandleMoveBlocked_Params
{
	class ABioVehicleBase*                             Vehicle;                                                  
	struct FHitResult                                  Impact;                                                   
};


struct UPenguinSnowBallComponent_GetSnowBallRadius_Params
{
	float                                              ReturnValue;                                              
};


struct UPenguinSnowBallComponent_CheckCurrentPosValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UPenguinSnowBallComponent_AdjustSnowBallFloor_Params
{
	float                                              DeltaTime;                                                
};


struct UPenguinSnowBallComponent_AdaptToRadiusChange_Params
{
	float                                              OldRadius;                                                
};


struct UPickTargetConfigObject_PrepareTraceData_Params
{
	struct FPickTargetContext                          Context;                                                  
	struct FPickTargetConfig                           Config;                                                   
};


struct UPickTargetSubsystem_TryInitializeByLua_Params
{
	bool                                               ReturnValue;                                              
};


struct UPickTargetSubsystem_RegisterPickConfigByObject_Params
{
	class UPickTargetConfigObject*                     ConfigObject;                                             
	bool                                               ReturnValue;                                              
};


struct UPickTargetSubsystem_PickTargetByKey_Params
{
	class ACharacter*                                  OwnerChar;                                                
	struct FName                                       Key;                                                      
	struct FHitResult                                  HitResult;                                                
	bool                                               ReturnValue;                                              
};


struct UPickTargetSubsystem_PickTarget_Params
{
	class ACharacter*                                  OwnerChar;                                                
	struct FHitResult                                  HitResult;                                                
	struct FPickTargetParam                            PickParam;                                                
	bool                                               ReturnValue;                                              
};


struct UPickTargetSubsystem_GetPickConfig_Params
{
	struct FName                                       Key;                                                      
	struct FPickTargetConfig                           OutConfig;                                                
	bool                                               ReturnValue;                                              
};


struct UPickTargetSubsystem_DoBuildCheck_Params
{
	class ACharacter*                                  OwnerChar;                                                
	struct FHitResult                                  HitResult;                                                
	struct FBuildCheckParam                            BuildParam;                                               
	bool                                               ReturnValue;                                              
};


struct UPicoBusEnergyRegeneration_OnVehiclePhysicsWake_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          
	struct FName                                       BoneName;                                                 
};


struct UPicoBusEnergyRegeneration_OnVehiclePhysicsSleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        
	struct FName                                       BoneName;                                                 
};


struct UPterosaurMovementComponent_UpdateVerticalHeight_Params
{
	float                                              DeltaTime;                                                
};


struct UPterosaurMovementComponent_StartTakingOff_Params
{
};


struct UPterosaurMovementComponent_StartSwoopDown_Params
{
	struct FVector                                     TargetLocation;                                           
};


struct UPterosaurMovementComponent_StartLanding_Params
{
};


struct UPterosaurMovementComponent_StartFlyingDive_Params
{
};


struct UPterosaurMovementComponent_SetServerDiveDirection_Params
{
	struct FVector                                     Direction;                                                
};


struct UPterosaurMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct UPterosaurMovementComponent_SetAutoLanding_Params
{
	float                                              Value;                                                    
};


struct UPterosaurMovementComponent_IsTakingOff_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_IsSwoopDown_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_IsSwoopCatching_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_IsStrugglingToLand_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_IsLocalSwoopingDown_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_IsLandingWalking_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_IsLanding_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_GetMoveState_Params
{
	EPterosaurMoveMode                                 ReturnValue;                                              
};


struct UPterosaurMovementComponent_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              
};


struct UPterosaurMovementComponent_ExitSwoopDown_Params
{
};


struct UPterosaurMovementComponent_ExitLanding_Params
{
};


struct UPterosaurMovementComponent_EndTakingOff_Params
{
};


struct UPterosaurMovementComponent_EndSwoopDown_Params
{
	bool                                               bRestVelocity;                                            
};


struct UPterosaurMovementComponent_EndLanding_Params
{
};


struct UPterosaurMovementComponent_EndFlyingDive_Params
{
};


struct UPterosaurMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                
};


struct UPterosaurMovementComponent_CheckFlyingSpeedError_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_CheckCanStartFlyingDive_Params
{
	bool                                               ReturnValue;                                              
};


struct UPterosaurMovementComponent_CalculateFlyingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct UPterosaurMovementComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                
};


struct UPterosaurMovementComponent_CalculateDivingVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct AQuadcopterDrone_SetMoveSpeedScale_Params
{
	float                                              InMoveSpeedScale;                                         
};


struct AQuadcopterDrone_SetMaxTravelDistanceScale_Params
{
	float                                              InMaxTravelDistanceScale;                                 
};


struct AQuadcopterDrone_OnDistanceLimitReached_Params
{
};


struct AQuadcopterDrone_GetDisToLand_Params
{
	float                                              ReturnValue;                                              
};


struct UQuadcopterDroneMovementComponent_ServerUpdateInput_Params
{
	float                                              ForwardInput;                                             
	float                                              RightInput;                                               
	float                                              UpInput;                                                  
	float                                              NowControllerRationYaw;                                   
};


struct URaptorMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct URaptorMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct ARaptorVehicle_GetRaptorMovementComponent_Params
{
	class URaptorMovementComponent*                    ReturnValue;                                              
};


struct URaysFishAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             
};


struct URaysFishAnimInstance_HandleOnOceanVehicleDive_Params
{
	bool                                               bEnter;                                                   
	struct FVector                                     InDirection;                                              
};


struct URaysFishAnimInstance_HandleOnOceanVehicleBubbleSkill_Params
{
	struct FVector                                     TargetLocation;                                           
};


struct URaysFishRiderAnimInstance_OnBeginFlying_Params
{
	bool                                               bIsLowFlying;                                             
};


struct URaysFishRiderAnimInstance_HandleOnOceanVehicleDive_Params
{
	bool                                               bEnter;                                                   
	struct FVector                                     InDirection;                                              
};


struct URaysFishRiderAnimInstance_HandleOnOceanVehicleBubbleSkill_Params
{
	struct FVector                                     TargetLocation;                                           
};


struct URegionOverlapComponent_SetPlayAreaComponent_Params
{
	class UPrimitiveComponent*                         AreaComponent;                                            
};


struct URegionOverlapComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        
	class UClass*                                      ClassFilter;                                              
	bool                                               bForceQuery;                                              
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         
};


struct AReindeerBioVehicle_TryAttachToOtherVehicle_Params
{
};


struct AReindeerBioVehicle_OnClientExitFromAttachedVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AReindeerBioVehicle_K2_OnClientAttachWithReindeerCart_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct AReindeerBioVehicle_HandleVehicleHealthDestroy_Params
{
};


struct AReindeerBioVehicle_GetVehicleAttachState_Params
{
	bool                                               ReturnValue;                                              
};


struct AReindeerBioVehicle_GetVehicleAttachComp_Params
{
	class UVehicleAttachmentComponent*                 ReturnValue;                                              
};


struct AReindeerBioVehicle_GetBioFlyMovementComponent_Params
{
	class UBioFlyMovementComponentBase*                ReturnValue;                                              
};


struct AReindeerBioVehicle_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct AReindeerBioVehicle_DoAttachLogic_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct AReindeerCartVehicle_UpdateParticleState_Params
{
};


struct AReindeerCartVehicle_TryAttachToOtherVehicle_Params
{
};


struct AReindeerCartVehicle_SetMovingParticleActived_Params
{
	bool                                               Inactive;                                                 
};


struct AReindeerCartVehicle_SetFloatingParticleActived_Params
{
	bool                                               Inactive;                                                 
};


struct AReindeerCartVehicle_OnParticleEffectLoadingFinished_Params
{
};


struct AReindeerCartVehicle_OnClientExitFromAttachedVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AReindeerCartVehicle_LoadParticleEffect_Params
{
};


struct AReindeerCartVehicle_K2_OnClientAttachToReindeer_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct AReindeerCartVehicle_HandleVehicleHealthDestroy_Params
{
};


struct AReindeerCartVehicle_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct AReindeerCartVehicle_GetVehicleAttachState_Params
{
	bool                                               ReturnValue;                                              
};


struct AReindeerCartVehicle_GetVehicleAttachComp_Params
{
	class UVehicleAttachmentComponent*                 ReturnValue;                                              
};


struct AReindeerCartVehicle_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct AReindeerCartVehicle_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct AReindeerCartVehicle_DoAttachLogic_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct AReindeerCartVehicle_DestroyAllCachedParticleEffect_Params
{
};


struct AReindeerCartVehicle_CloseWheelsCollision_Params
{
};


struct UReindeerSeatComponent_GetTotalSeatsNum_Params
{
	int                                                ReturnValue;                                              
};


struct ARewindActor_SmoothRewind_Params
{
	float                                              DeltaTime;                                                
};


struct ARewindActor_SetRewindState_Params
{
	ERewindState                                       InState;                                                  
};


struct ARewindActor_RecordRewindData_Params
{
	float                                              DeltaTime;                                                
};


struct ARewindActor_ProcessRewindData_Params
{
	float                                              DeltaTime;                                                
};


struct ARewindActor_OnRecordRewindData_Params
{
};


struct ARewindActor_CancelRewind_Params
{
};


struct AScanAvatar_ScanAndPrint_Params
{
};


struct UScorpionCharacterAnimInstance_HandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct AScorpionVehicle_StopAllBlanketSfx_Params
{
};


struct AScorpionVehicle_HandleOnClientExitVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct AScorpionVehicle_HandleOnClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct USimpleSyncInstancedSplineMeshComponent_GetMeshIndexFromInstanceIndex_Params
{
	int                                                MeshIndex;                                                
	int                                                ReturnValue;                                              
};


struct USimpleSyncInstancedSplineMeshComponent_GetInstanceIndexFromMeshIndex_Params
{
	int                                                InstanceIndex;                                            
	int                                                ReturnValue;                                              
};


struct USimpleSyncInstancedSplineMeshComponent_AddOrSetIndexStartAndEndWithBodySetUp_Params
{
	int                                                Index;                                                    
	struct FVector                                     StartPos;                                                 
	struct FVector                                     StartTangent;                                             
	struct FVector                                     EndPos;                                                   
	struct FVector                                     EndTangent;                                               
	struct FTransform                                  InstanceTransform;                                        
	class UBodySetup*                                  CacheBodySetup;                                           
	bool                                               IsWorldSpace;                                             
	bool                                               bUpdateMesh;                                              
};


struct ASkyHorse_TryStopFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_TryStopDrift_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_TryStartFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_TryStartDrift_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_TryStartDashInAir_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_TrySetToNormalMat_Params
{
};


struct ASkyHorse_StopAllWingTrailAudio_Params
{
};


struct ASkyHorse_SetShieldVehicleEnter_Params
{
	bool                                               bInShield;                                                
};


struct ASkyHorse_OnRep_ShieldVehicleEnter_Params
{
};


struct ASkyHorse_OnRep_IsDrift_Params
{
};


struct ASkyHorse_OnMovementTypeChanged_Params
{
	ESkyHorseMovementDataType                          InNewMovementType;                                        
};


struct ASkyHorse_IsVehicleEnterShielded_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_IsLocalViewPlayerMounted_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_HandleOnLocalViewPlayerMountChanged_Params
{
	bool                                               bIsMounted;                                               
};


struct ASkyHorse_HandleOnDriftStart_Params
{
};


struct ASkyHorse_HandleOnDriftEndAcc_Params
{
	float                                              DriftAccTime;                                             
};


struct ASkyHorse_HandleOnCurveMoveStart_Params
{
	ECurveMoveType                                     CurveType;                                                
};


struct ASkyHorse_HandleOnCurveMoveRejected_Params
{
	ECurveMoveType                                     CurveType;                                                
	bool                                               bRejectedByOwner;                                         
};


struct ASkyHorse_HandleOnAuthorityCurveMoveStart_Params
{
	ECurveMoveType                                     CurveType;                                                
};


struct ASkyHorse_CanShowVehicleEnterButton_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_CanEnterFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_CanCurveMove_Params
{
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_CanAuthorityStartCurveMove_Params
{
	ECurveMoveType                                     CurveType;                                                
	bool                                               ReturnValue;                                              
};


struct ASkyHorse_BpSpawn_Params
{
};


struct ASkyHorse_BpSetToNormalMat_Params
{
	ESkyHorseMovementDataType                          CurrentMovementDataType;                                  
};


struct ASkyHorse_BpSetToDissolveMat_Params
{
};


struct ASkyHorse_BpSetToBlendMat_Params
{
};


struct ASkyHorse_BpRecycle_Params
{
};


struct ASkyHorse_BpMatBlendTo_Params
{
	ESkyHorseMovementDataType                          TargetMovementType;                                       
};


struct USkyHorseAbility_HandleOnStartFlying_Params
{
};


struct USkyHorseAbility_HandleOnCurveMoveStart_Params
{
	ECurveMoveType                                     CurveType;                                                
};


struct USkyHorseAnimInstance_HandleOnStartFlying_Params
{
};


struct USkyHorseAnimInstance_HandleOnCurveMoveStart_Params
{
	ECurveMoveType                                     CurveType;                                                
};


struct USkyHorseMovementComponent_TryStopFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_TryStartFlying_Params
{
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_TryStartDrift_Params
{
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_TryStartCurveMove_Params
{
	ECurveMoveType                                     Type;                                                     
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_SetMovementDataType_Params
{
	ESkyHorseMovementDataType                          NewType;                                                  
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_SetMovementData_Params
{
	class USkyHorseMovementData*                       NewData;                                                  
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_SetDrift_Params
{
	bool                                               bin;                                                      
	ESkyHorseStopDriftCheck                            InStopDriftReason;                                        
};


struct USkyHorseMovementComponent_ServerMove_Params
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


struct USkyHorseMovementComponent_OnRep_MovementDataType_Params
{
};


struct USkyHorseMovementComponent_NetMulticast_OnStartFlying_Params
{
};


struct USkyHorseMovementComponent_NetMulticast_OnStartCurveMove_Params
{
	ECurveMoveType                                     Type;                                                     
};


struct USkyHorseMovementComponent_IsInDriftEndAcc_Params
{
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_IsDrifting_Params
{
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_GetDriftEndAccRemainTime_Params
{
	float                                              ReturnValue;                                              
};


struct USkyHorseMovementComponent_GetCurveMoveCooldown_Params
{
	ECurveMoveType                                     Type;                                                     
	float                                              ReturnValue;                                              
};


struct USkyHorseMovementComponent_ClientRejectCurveMove_Params
{
	ECurveMoveType                                     Type;                                                     
	bool                                               bRejectedByOwner;                                         
};


struct USkyHorseMovementComponent_CheckShouldStopDrift_Params
{
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_CanStartDrift_Params
{
	bool                                               ReturnValue;                                              
};


struct USkyHorseMovementComponent_ApplyMovementData_Params
{
};


struct USmartBearerManager_OnRenderQualityChange_Params
{
	bool                                               bLoadMap;                                                 
};


struct USmartBearerManager_ChangeModeBearerConfigManual_Params
{
};


struct USmartBearerManagerBPLibrary_SetUseSkipMapForDistacneFactor_Params
{
	class USkinnedMeshComponent*                       InMeshComponent;                                          
	bool                                               bEnable;                                                  
};


struct USmartBearerManagerBPLibrary_SetStaticMeshMinLOD_Params
{
	class UStaticMeshComponent*                        InMeshComponent;                                          
	int                                                NewLOD;                                                   
};


struct USmartBearerManagerBPLibrary_SetStaticMeshForceLOD_Params
{
	class UStaticMeshComponent*                        InMeshComponent;                                          
	int                                                NewLOD;                                                   
};


struct USmartBearerManagerBPLibrary_SetSkinnedMeshUpdateFlag_Params
{
	class USkinnedMeshComponent*                       InMeshComponent;                                          
	int                                                UpdateFlag;                                               
};


struct USmartBearerManagerBPLibrary_SetSkinnedMeshMinLOD_Params
{
	class USkinnedMeshComponent*                       InMeshComponent;                                          
	int                                                NewLOD;                                                   
};


struct USmartBearerManagerBPLibrary_SetSkinnedMeshLODSectoinEnabled_Params
{
	class USkinnedMeshComponent*                       InMeshComponent;                                          
	int                                                LODIndex;                                                 
	int                                                SectionIdx;                                               
	bool                                               bEnable;                                                  
};


struct USmartBearerManagerBPLibrary_SetSkinnedMeshForceLOD_Params
{
	class USkinnedMeshComponent*                       InMeshComponent;                                          
	int                                                NewLOD;                                                   
};


struct USmartBearerManagerBPLibrary_SetPrimitiveVisibile_Params
{
	class UPrimitiveComponent*                         InComponent;                                              
	bool                                               bVisible;                                                 
};


struct USmartBearerManagerBPLibrary_SetParticleSystemMinTimeBetweenTick_Params
{
	class UParticleSystemComponent*                    InParticleSystem;                                         
	int                                                tickTime;                                                 
};


struct USmartBearerManagerBPLibrary_SetLandScapeRenderMask_Params
{
	class AActor*                                      Actor;                                                    
	int                                                Index;                                                    
	bool                                               bUseRenderMask;                                           
	unsigned char                                      RenderMask;                                               
};


struct USmartBearerManagerBPLibrary_RemoveSubSquenceFromSequence_Params
{
	class ALevelSequenceActor*                         seqActor;                                                 
	struct FString                                     SubSequenceName;                                          
};


struct USmartBearerManagerBPLibrary_ReleaseTexture2D_Params
{
	class UTexture2D*                                  TextureToRelease;                                         
};


struct USmartBearerManagerBPLibrary_MarkRenderStateDirty_Params
{
	class UPrimitiveComponent*                         InComponent;                                              
};


struct USmartBearerManagerBPLibrary_IsUMGBlurEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_IsTickAsyncLoadingOptSpecialFullOpen_Params
{
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_IsSuperFrameOptSwitcherEnable_Params
{
	int                                                Switcher;                                                 
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_IsStreamingOptSpecialFullOpen_Params
{
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_IsSmartBearerOptSwitcherEnable_Params
{
	int                                                Switcher;                                                 
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_IsActorChanCleanUpOptSpecialFullOpen_Params
{
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_GetOrLoadFromCahceMap_Params
{
	int                                                GroudID;                                                  
	struct FString                                     PathToLoad;                                               
	class UObject*                                     ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_GetCurrentNormalCharacterSkinShow_Params
{
	int                                                ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_GetCurrentManagedTickEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_GetCurrentGradeLevel_Params
{
	int                                                ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_GetCurrentDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_GetCurrentBearerNum_Params
{
	float                                              ReturnValue;                                              
};


struct USmartBearerManagerBPLibrary_ClearFromResCacheMap_Params
{
	int                                                GroudID;                                                  
};


struct USmartBearerManagerBPLibrary_ChangeSmartBearerEnableStatus_Params
{
	bool                                               bEnable;                                                  
};


struct USmartBearerManagerBPLibrary_AddPrefixName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     PrefixName;                                               
};


struct USmartBearerManagerLuaBridge_SetSuperFrameOptSwitcher_Params
{
	int                                                State;                                                    
};


struct USmartBearerManagerLuaBridge_SetSmartBearerOptSwitcher_Params
{
	int                                                State;                                                    
};


struct USmartBearerManagerLuaBridge_SetSmartBearerNumData_Params
{
	struct FString                                     Data;                                                     
};


struct USmartBearerManagerLuaBridge_SetPostLoadThreadSwitcher_Params
{
	int                                                State;                                                    
};


struct USmartBearerManagerLuaBridge_SetOverrideSmartBearerNumData_Params
{
	struct FString                                     Data;                                                     
};


struct USmartBearerManagerLuaBridge_SetLightOptSwitcher_Params
{
	int                                                State;                                                    
};


struct USmartBearerManagerLuaBridge_SetLightLossyOptEnable_Params
{
	bool                                               bEnable;                                                  
};


struct USmartBearerManagerLuaBridge_SetLightCommonOptEnable_Params
{
	bool                                               bEnable;                                                  
};


struct USmartBearerManagerLuaBridge_SetIsMyTeam_Params
{
	struct FScriptDelegate                             IsMyTeamDel;                                              
};


struct USmartBearerManagerLuaBridge_SetIsMyFriend_Params
{
	struct FScriptDelegate                             IsMyFriendDel;                                            
};


struct USmartBearerManagerLuaBridge_SetClientBackEndSwitcherC_Params
{
	int                                                State;                                                    
};


struct USmartBearerManagerLuaBridge_SetClientBackEndSwitcherB_Params
{
	int                                                State;                                                    
};


struct USmartBearerManagerLuaBridge_SetClientBackEndSwitcherA_Params
{
	int                                                State;                                                    
};


struct USmartBearerManagerLuaBridge_OnPreMatchSuccess_Params
{
	int                                                submode_id;                                               
};


struct USmartBearerManagerLuaBridge_OnChatUIVisibleChange_Params
{
	bool                                               bVisible;                                                 
};


struct USmartBearerManagerLuaBridge_IsLightOptSwitcherEnable_Params
{
	int                                                Switcher;                                                 
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerLuaBridge_IsLightLossyOptEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerLuaBridge_IsLightCommonOptEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct USmartBearerManagerLuaBridge_IsClientBackEndSwitcherBEnable_Params
{
	int                                                Switcher;                                                 
	bool                                               ReturnValue;                                              
};


struct ASnowBall_ServerUpdateCameraRationYaw_Params
{
	float                                              InCameraRationYaw;                                        
};


struct USnowBallMovementComponent_StopSimulating_Params
{
	struct FHitResult                                  HitResult;                                                
};


struct USpecialMoveObj_FreeWallClimbing_TickCornerTransition_Params
{
	float                                              DeltaTime;                                                
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_StepUpObstacle_Params
{
	struct FVector                                     MovementDelta;                                            
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_StartWallClimb_Params
{
};


struct USpecialMoveObj_FreeWallClimbing_StartCornerTransition_Params
{
	struct FCornerTransitionState                      TransitionData;                                           
};


struct USpecialMoveObj_FreeWallClimbing_SafeMoveClimbCapsule_Params
{
	struct FVector                                     MoveDelta;                                                
	struct FQuat                                       NewQuat;                                                  
	struct FHitResult                                  OutFinalHit;                                              
	struct FHitResult                                  OutRootHit;                                               
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_ProjectVectorOnToWall_Params
{
	struct FVector                                     WorldVector;                                              
	struct FVector                                     ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_PhysWallClimb_Params
{
	float                                              DeltaTime;                                                
	int                                                Iterations;                                               
};


struct USpecialMoveObj_FreeWallClimbing_OnStartWallClimb_Params
{
};


struct USpecialMoveObj_FreeWallClimbing_OnEndWallClimb_Params
{
};


struct USpecialMoveObj_FreeWallClimbing_MoveClimbCapsule_Params
{
	struct FVector                                     MoveDelta;                                                
	struct FQuat                                       NewQuat;                                                  
	struct FHitResult                                  OutHit;                                                   
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_MoveAlongWallSurface_Params
{
	struct FVector                                     MovementDelta;                                            
	float                                              DeltaTime;                                                
};


struct USpecialMoveObj_FreeWallClimbing_IsWallClimbing_Params
{
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_IsTransitioningCorner_Params
{
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_GetWallTangentVector_Params
{
	struct FVector                                     WorldDirection;                                           
	struct FVector                                     ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_GetWallClimbInputVector_Params
{
	struct FVector                                     RawInput;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_GetAngleBetweenWalls_Params
{
	struct FVector                                     NormalA;                                                  
	struct FVector                                     NormalB;                                                  
	float                                              ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_EndWallClimb_Params
{
};


struct USpecialMoveObj_FreeWallClimbing_EndCornerTransition_Params
{
};


struct USpecialMoveObj_FreeWallClimbing_DrawDebugMovementInfo_Params
{
};


struct USpecialMoveObj_FreeWallClimbing_DetectWallToRoof_Params
{
	struct FVector                                     MoveDir;                                                  
	struct FWallDetectionResult                        OutHit;                                                   
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_DetectWallToFloor_Params
{
	struct FVector                                     MoveDir;                                                  
	struct FWallDetectionResult                        OutHit;                                                   
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_DetectWallInDirection_Params
{
	struct FVector                                     Loc;                                                      
	struct FVector                                     DetectDir;                                                
	struct FWallDetectionResult                        OutHit;                                                   
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_DetectWallCeilingCorner_Params
{
	struct FVector                                     MoveDir;                                                  
	struct FWallDetectionResult                        OutHit;                                                   
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_DetectConvexCorner_Params
{
	struct FVector                                     MoveDir;                                                  
	struct FWallDetectionResult                        OutHit;                                                   
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_DetectConcaveCorner_Params
{
	struct FVector                                     MoveDir;                                                  
	struct FWallDetectionResult                        OutHit;                                                   
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_FreeWallClimbing_ConstructCornerTransition_Params
{
	struct FWallDetectionResult                        InCornerHit;                                              
	struct FCornerTransitionState                      OutTransitionData;                                        
};


struct USpecialMoveObj_FreeWallClimbing_CancelCornerTransition_Params
{
};


struct USpecialMoveObj_FreeWallClimbing_CalculateWallClimbVelocity_Params
{
	float                                              DeltaTime;                                                
};


struct USpecialMoveObj_FreeWallClimbing_CacheFreeWallClimbingComp_Params
{
};


struct USpecialMoveObj_FreeWallClimbing_AdjustToWallSurface_Params
{
	float                                              DeltaTime;                                                
};


struct USpecialMoveObj_LeggedAnimal_WallRunVerticalStepUp_Params
{
	struct FVector                                     Delta;                                                    
	struct FHitResult                                  InHit;                                                    
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_LeggedAnimal_StartWallRun_Params
{
};


struct USpecialMoveObj_LeggedAnimal_SpecialMoveSetCharacterOwner_Params
{
	class ACharacter*                                  InOwner;                                                  
};


struct USpecialMoveObj_LeggedAnimal_SetAnimRunStop_Params
{
};


struct USpecialMoveObj_LeggedAnimal_OnStartWallRun_Params
{
};


struct USpecialMoveObj_LeggedAnimal_OnLuaStartWallRun_Params
{
};


struct USpecialMoveObj_LeggedAnimal_OnLuaRunStop_Params
{
};


struct USpecialMoveObj_LeggedAnimal_OnLuaEndWallRun_Params
{
};


struct USpecialMoveObj_LeggedAnimal_OnEndWallRun_Params
{
};


struct USpecialMoveObj_LeggedAnimal_OnClientWallRunEnd_Params
{
};


struct USpecialMoveObj_LeggedAnimal_LuaAnimalVaultExit_Params
{
};


struct USpecialMoveObj_LeggedAnimal_LuaAnimalVault_Params
{
	struct FDirectMoveData                             MoveData;                                                 
};


struct USpecialMoveObj_LeggedAnimal_HandleOnWallRunChanged_Params
{
	bool                                               bWallRun;                                                 
};


struct USpecialMoveObj_LeggedAnimal_HandleOnJump_Params
{
};


struct USpecialMoveObj_LeggedAnimal_GetSpeedRate_Params
{
	float                                              ReturnValue;                                              
};


struct USpecialMoveObj_LeggedAnimal_GetMaxRunSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct USpecialMoveObj_LeggedAnimal_EndWallRun_Params
{
};


struct USpecialMoveObj_LeggedAnimal_CheckForwardWall_Params
{
	float                                              Dt;                                                       
};


struct USpecialMoveObj_LeggedAnimal_CheckForwardInputOnWall_Params
{
	bool                                               ReturnValue;                                              
};


struct USpecialMoveObj_LeggedAnimal_CalcWaterHeightOffset_Params
{
	float                                              ReturnValue;                                              
};


struct USpecialMoveObj_LeggedAnimal_CalcCoolDown_Params
{
	float                                              DeltaTime;                                                
};


struct USpecialMoveObj_LeggedAnimal_AnimalVaultExit_Params
{
};


struct USpecialMoveObj_LeggedAnimal_AnimalVault_Params
{
	struct FVector                                     StartPos;                                                 
	struct FVector                                     VaultDir;                                                 
	struct FVector                                     EndPos;                                                   
};


struct USpecialMoveObj_Quadruped_SpecialMoveSetCharacterOwner_Params
{
	class ACharacter*                                  InOwner;                                                  
};


struct USpecialMoveObj_Quadruped_GetSpeedRate_Params
{
	float                                              ReturnValue;                                              
};


struct USpecialMoveObj_Quadruped_GetMaxRunSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct USpiderSwingMoveObj_StartSwing_Params
{
	struct FVector                                     InAttachPoint;                                            
};


struct USpiderSwingMoveObj_SetSwingInput_Params
{
	float                                              ForwardInput;                                             
	float                                              RightInput;                                               
};


struct USpiderSwingMoveObj_SetMoveState_Params
{
	ESpiderSwingMoveState                              NewMoveState;                                             
};


struct USpiderSwingMoveObj_SetFallingFloatExceedThreshold_Params
{
	int                                                InValue;                                                  
};


struct USpiderSwingMoveObj_SetFallingCheckWindow_Params
{
	float                                              InValue;                                                  
};


struct USpiderSwingMoveObj_SetFallingCheckMinDescendDist_Params
{
	float                                              InValue;                                                  
};


struct USpiderSwingMoveObj_RequestStartSwing_Params
{
	bool                                               ReturnValue;                                              
};


struct USpiderSwingMoveObj_RequestReleaseSwing_Params
{
};


struct USpiderSwingMoveObj_ReleaseSwing_Params
{
};


struct USpiderSwingMoveObj_OnServerAppDeactivated_Params
{
	bool                                               bAppActive;                                               
};


struct USpiderSwingMoveObj_OnPawnStateInterrupted_Params
{
	EPawnState                                         State;                                                    
	EPawnState                                         InterruptedBy;                                            
};


struct USpiderSwingMoveObj_OnPawnLeaveWebSwing_Params
{
	bool                                               bIsInterrupted;                                           
};


struct USpiderSwingMoveObj_OnPawnLeaveState_Params
{
	EPawnState                                         LeaveState;                                               
};


struct USpiderSwingMoveObj_OnCurrentUsingWeaponChanged_Params
{
	TEnumAsByte<ESurviveWeaponPropSlot>                TargetChangeSlot;                                         
};


struct USpiderSwingMoveObj_LeaveSpiderSwingMove_Params
{
};


struct USpiderSwingMoveObj_IsUsingRightHand_Params
{
	bool                                               ReturnValue;                                              
};


struct USpiderSwingMoveObj_IsOnGround_Params
{
	bool                                               ReturnValue;                                              
};


struct USpiderSwingMoveObj_GetSyncComponent_Params
{
	class USpiderSwingSyncComponent*                   ReturnValue;                                              
};


struct USpiderSwingMoveObj_GetSwingAngle_Params
{
	float                                              ReturnValue;                                              
};


struct USpiderSwingMoveObj_GetRopeLength_Params
{
	float                                              ReturnValue;                                              
};


struct USpiderSwingMoveObj_GetRopeDirection_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USpiderSwingMoveObj_GetDistanceToLand_Params
{
	float                                              ReturnValue;                                              
};


struct USpiderSwingMoveObj_GetCurrentHandSide_Params
{
	ESpiderSwingHandSide                               ReturnValue;                                              
};


struct USpiderSwingMoveObj_GetCurMoveState_Params
{
	ESpiderSwingMoveState                              ReturnValue;                                              
};


struct USpiderSwingMoveObj_GetAttachPoint_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USpiderSwingMoveObj_ForceExitSwingWithCorrection_Params
{
};


struct USpiderSwingMoveObj_FindSwingAttachPoint_Params
{
	struct FSpiderSwingDetectResult                    ReturnValue;                                              
};


struct USpiderSwingMoveObj_EnterSpiderSwingMove_Params
{
};


struct USpiderSwingMoveObj_DetachRopeAsLingering_Params
{
};


struct USpiderSwingMoveObj_DestroySyncComponent_Params
{
};


struct USpiderSwingMoveObj_DestroyRopeEndEffect_Params
{
};


struct USpiderSwingMoveObj_CreateSyncComponent_Params
{
};


struct USpiderSwingMoveObj_CreateRopeEndEffect_Params
{
};


struct USpiderSwingSyncComponent_ServerSetSwingInput_Params
{
	float                                              ForwardInput;                                             
	float                                              RightInput;                                               
};


struct USpiderSwingSyncComponent_ServerSetMoveState_Params
{
	ESpiderSwingMoveState                              NewState;                                                 
};


struct USpiderSwingSyncComponent_ServerRequestStartSwing_Params
{
	struct FSpiderSwingStartRequest                    InRequest;                                                
};


struct USpiderSwingSyncComponent_ServerReleaseSwing_Params
{
};


struct USpiderSwingSyncComponent_ServerNotifyLanded_Params
{
	struct FVector                                     LandLocation;                                             
};


struct USpiderSwingSyncComponent_OnRep_SyncData_Params
{
};


struct USpiderSwingSyncComponent_MulticastSwingStateChanged_Params
{
	struct FSpiderSwingSyncData                        SyncData;                                                 
};


struct USpiderSwingSyncComponent_InitWithMoveObj_Params
{
	class USpiderSwingMoveObj*                         InMoveObj;                                                
};


struct USpiderSwingSyncComponent_GetSyncData_Params
{
	struct FSpiderSwingSyncData                        ReturnValue;                                              
};


struct USpiderSwingSyncComponent_GetMoveObj_Params
{
	class USpiderSwingMoveObj*                         ReturnValue;                                              
};


struct USpiderSwingSyncComponent_GatherSyncData_Params
{
};


struct USpiderSwingSyncComponent_ClientAdjustSwingState_Params
{
	struct FSpiderSwingSyncData                        SyncData;                                                 
};


struct USplineMoveObj_UpdateTuring_Params
{
	float                                              DeltaTime;                                                
};


struct USplineMoveObj_UpdateSplineMoveTurning_Params
{
	float                                              DeltaTime;                                                
};


struct USplineMoveObj_UpdateMoveSound_Params
{
};


struct USplineMoveObj_UpdateFocusRotation_Params
{
	float                                              DeltaTime;                                                
};


struct USplineMoveObj_UpdateCameraLag_Params
{
	float                                              DeltaTime;                                                
};


struct USplineMoveObj_TryEnterSpline_Params
{
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_StopMoveSound_Params
{
};


struct USplineMoveObj_StartSplineMoveCameraLag_Params
{
};


struct USplineMoveObj_SplineMoveTurningEnd_Params
{
};


struct USplineMoveObj_SplineMoveTurningBegin_Params
{
	struct FVector                                     InTargetDir;                                              
	bool                                               bIsLeft;                                                  
};


struct USplineMoveObj_SpecialMoveSetCharacterOwner_Params
{
	class ACharacter*                                  InOwner;                                                  
};


struct USplineMoveObj_SetSplineMoveState_Params
{
	TEnumAsByte<ECustomMovmentMode>                    InMoveState;                                              
};


struct USplineMoveObj_SetSplineEnabled_Params
{
	class USplineComponent*                            InSpline;                                                 
	bool                                               bEnabled;                                                 
};


struct USplineMoveObj_SetSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
};


struct USplineMoveObj_ServerPlayerTryLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
	int                                                ExitMode;                                                 
	int                                                LeaveEpoch;                                               
};


struct USplineMoveObj_ServerPlayerTryEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
	struct FVector                                     EnterLocation;                                            
	struct FRotator                                    EnterRot;                                                 
	int                                                EnterEpoch;                                               
	float                                              EnterDistance;                                            
};


struct USplineMoveObj_RequestLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
	TEnumAsByte<EMovementMode>                         InMovementMode;                                           
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_RequestEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
	float                                              EnterDistance;                                            
	int                                                Direction;                                                
	bool                                               bIgnoreCooldown;                                          
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_PlayMoveSound_Params
{
};


struct USplineMoveObj_PlayerLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
	TEnumAsByte<EMovementMode>                         InMovementMode;                                           
};


struct USplineMoveObj_PlayerEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
	struct FVector                                     EnterLoc;                                                 
	struct FRotator                                    EnterRot;                                                 
};


struct USplineMoveObj_OwnerJump_Params
{
};


struct USplineMoveObj_OwnerHasWeapon_Params
{
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_OnSplineMoveSoundStateChanged_Params
{
	bool                                               bMoving;                                                  
};


struct USplineMoveObj_OnSplineMoveHit_Params
{
	struct FHitResult                                  Hit;                                                      
};


struct USplineMoveObj_OnSplineMoveFalling_Params
{
};


struct USplineMoveObj_OnSpecialMoveCharacterJump_Params
{
};


struct USplineMoveObj_OnSimulateCharStateChanged_Params
{
	uint64_t                                           InCurrentStates;                                          
	uint64_t                                           InPrevStates;                                             
};


struct USplineMoveObj_OnPlayerRespawn_Params
{
	class AUAEPlayerController*                        PC;                                                       
};


struct USplineMoveObj_OnPlayerLeaveSplineState_Params
{
};


struct USplineMoveObj_OnPawnStateInterrupted_Params
{
	EPawnState                                         State;                                                    
	EPawnState                                         InterruptedBy;                                            
};


struct USplineMoveObj_OnPawnLeaveState_Params
{
	EPawnState                                         LeaveState;                                               
};


struct USplineMoveObj_OnPawnEnterState_Params
{
	EPawnState                                         EnterState;                                               
};


struct USplineMoveObj_MoveAlongSplineError_Params
{
};


struct USplineMoveObj_IsSplineEnabled_Params
{
	class USplineComponent*                            InSpline;                                                 
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_IsOnSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_IsEnterCoolingDown_Params
{
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_InteractEnterSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
};


struct USplineMoveObj_InSplineMoveState_Params
{
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_HandleBeginTouchScreen_Params
{
	struct FVector2D                                   Loc;                                                      
};


struct USplineMoveObj_GetSplineMoveState_Params
{
	TEnumAsByte<ECustomMovmentMode>                    ReturnValue;                                              
};


struct USplineMoveObj_GetProjectionLocationOnSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
	struct FVector                                     InLocation;                                               
	struct FVector                                     ReturnValue;                                              
};


struct USplineMoveObj_GetPlayerEnterSplineRotation_Params
{
	class USplineComponent*                            InSpline;                                                 
	struct FRotator                                    ReturnValue;                                              
};


struct USplineMoveObj_GetPlayerEnterSplineLocation_Params
{
	class USplineComponent*                            InSpline;                                                 
	struct FVector                                     ReturnValue;                                              
};


struct USplineMoveObj_GetDistanceAlongSplineAtWorldLocation_Params
{
	class USplineComponent*                            InSpline;                                                 
	struct FVector                                     InLoc;                                                    
	float                                              ReturnValue;                                              
};


struct USplineMoveObj_GetCurrentTime_Params
{
	float                                              ReturnValue;                                              
};


struct USplineMoveObj_GetCurrentSplineEpoch_Params
{
	int                                                ReturnValue;                                              
};


struct USplineMoveObj_GetCurrentSplineDistance_Params
{
	float                                              ReturnValue;                                              
};


struct USplineMoveObj_GetCharacterOwner_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct USplineMoveObj_ForceLeaveSpline_Params
{
	class USplineComponent*                            InSpline;                                                 
};


struct USplineMoveObj_EndSplineMoveCameraLag_Params
{
};


struct USplineMoveObj_EnableFocusRotation_Params
{
	bool                                               InEnable;                                                 
};


struct USplineMoveObj_CustomModeIsSplineMove_Params
{
	unsigned char                                      InCustomMode;                                             
	bool                                               ReturnValue;                                              
};


struct USplineMoveObj_ClientSyncSplineSession_Params
{
	class USplineComponent*                            InSpline;                                                 
	int                                                Epoch;                                                    
	float                                              EnterDistance;                                            
};


struct USplineMoveObj_ClientLeaveSplineSession_Params
{
	class USplineComponent*                            InSpline;                                                 
	int                                                ClosedEpoch;                                              
};


struct USplineMoveObj_ClearEnterCooldown_Params
{
};


struct USplineMoveObj_BeginEnterCooldown_Params
{
};


struct USplineMoveObj_AsyncLoadSoundResourceFinish_Params
{
};


struct USplineMoveObj_AsyncLoadSoundResource_Params
{
};


struct USplineMoveObj_AllowTryEnterSpline_Params
{
	bool                                               ReturnValue;                                              
};


struct UStandradVehicleBearerUnit_OnVehicleBeforeWheelDestroy_Params
{
	int                                                Index;                                                    
};


struct UStandradVehicleBearerUnit_OnVehicleAvatarEquiped_Params
{
};


struct UStandradVehicleBearerUnit_OnUpdateSeatGUI_Params
{
};


struct USTBuffAction_AddAura_OnExecute_Params
{
};


struct USTBuffAction_AddAura_OnEnd_Params
{
};


struct USTBuffAction_AddItem_OnExecute_Params
{
};


struct USTBuffAction_AddItem_OnEnd_Params
{
};


struct USTBuffAction_AddOneSkill_OnExecute_Params
{
};


struct USTBuffAction_AddOneSkill_OnEnd_Params
{
};


struct USTBuffAction_AddRecoveryPrompt_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_AddRecoveryPrompt_OnExecute_Params
{
};


struct USTBuffAction_AddRecoveryPrompt_OnEnd_Params
{
};


struct USTBuffAction_AddRemoveBuff_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_AddRemoveBuff_OnExecute_Params
{
};


struct USTBuffAction_AddRemoveBuff_OnEnd_Params
{
};


struct USTBuffAction_AddRemoveMapMarkForActorClass_OnExecute_Params
{
};


struct USTBuffAction_AddRemoveMapMarkForActorClass_OnEnd_Params
{
};


struct USTBuffAction_AddRemoveMapMarkForSelfPawn_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_AddRemoveMapMarkForSelfPawn_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_AddRemoveMapMarkForSelfPawn_OnExecute_Params
{
};


struct USTBuffAction_AddRemoveMapMarkForSelfPawn_OnEnd_Params
{
};


struct USTBuffAction_AddSkillToken_OnExecute_Params
{
};


struct USTBuffAction_AddSkillToken_OnEnd_Params
{
};


struct USTBuffAction_AdjustStunPostMat_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_AdjustStunPostMat_OnInitialize_Params
{
};


struct USTBuffAction_AdjustStunPostMat_OnExecute_Params
{
};


struct USTBuffAction_AdjustStunPostMat_OnEnd_Params
{
};


struct USTBuffAction_AIMoveToLocation_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      Causer;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_AIMoveToLocation_OnInitialize_Params
{
};


struct USTBuffAction_AIMoveToLocation_OnForceMoveToLocationEvent_Params
{
	struct FVector                                     MoveToPos;                                                
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_AIMoveToLocation_OnExecute_Params
{
};


struct USTBuffAction_AIMoveToLocation_OnDestroy_Params
{
};


struct USTBuffAction_AIMoveToLocation_DoForceMoveToLocation_Params
{
	bool                                               bStart;                                                   
};


struct USTBuffAction_Attachment_OnInitialize_Params
{
};


struct USTBuffAction_Attachment_OnExecute_Params
{
};


struct USTBuffAction_Attachment_OnEnd_Params
{
};


struct USTBuffAction_Attachment_OnDestroy_Params
{
};


struct USTBuffAction_Attachment_DestroyAttachment_Params
{
};


struct USTBuffAction_Attachment_CreateAttachment_Params
{
};


struct USTBuffAction_Attachment_AsyncLoad_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_AttrConversion_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_AttrConversion_OnInitialize_Params
{
};


struct USTBuffAction_AttrConversion_OnExecute_Params
{
};


struct USTBuffAction_AttrConversion_OnEnd_Params
{
};


struct USTBuffAction_AttrConversion_GetAttrModify_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              
};


struct USTBuffAction_AttrModifier_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_AttrModifier_OnInitialize_Params
{
};


struct USTBuffAction_AttrModifier_OnExecute_Params
{
};


struct USTBuffAction_AttrModifier_OnEnd_Params
{
};


struct USTBuffAction_AttrModifier_OnDestroy_Params
{
};


struct USTBuffAction_AttrModifier_OnBuffUpdate_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
};


struct USTBuffAction_AttrModifier_GetAttrModify_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              
};


struct USTBuffAction_AttrModifierLinearDecay_OnTick_Params
{
	float                                              DeltaTime;                                                
};


struct USTBuffAction_BaseHitFilter_FilterGun_Params
{
	class AActor*                                      Shooter;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_BaseHitFilter_FilterBullet_Params
{
	class AActor*                                      Shooter;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_BaseHitFilter_CheckFilter_Params
{
	class AActor*                                      Shooter;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_BPCallEvent_OnInitialize_Params
{
};


struct USTBuffAction_BPCallEvent_OnExecute_Params
{
};


struct USTBuffAction_BPCallEvent_OnEnd_Params
{
};


struct USTBuffAction_BPCallEvent_BPInitialize_Params
{
};


struct USTBuffAction_BPCallEvent_BPGetOwner_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct USTBuffAction_CameraAnim_OnExecute_Params
{
};


struct USTBuffAction_CameraAnim_OnEnd_Params
{
};


struct USTBuffAction_CameraTracker_OnExecute_Params
{
};


struct USTBuffAction_CameraTracker_OnEnd_Params
{
};


struct USTBuffAction_ChangeBuffLevel_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_ChangeBuffLevel_OnExecute_Params
{
};


struct USTBuffAction_ChangeBuffLevel_OnEnd_Params
{
};


struct USTBuffAction_ChangeGravityScale_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_ChangeGravityScale_OnExecute_Params
{
};


struct USTBuffAction_ChangeGravityScale_OnEnd_Params
{
};


struct USTBuffAction_ChangeParticleParam_OnExecute_Params
{
};


struct USTBuffAction_ChangeParticleParam_OnEnd_Params
{
};


struct USTBuffAction_ChangePoseState_OnExecute_Params
{
};


struct USTBuffAction_ChangeRectiftAvatar_OnExecute_Params
{
};


struct USTBuffAction_ChangeRectiftAvatar_OnEnd_Params
{
};


struct USTBuffAction_ControlCharacterSearch_OnExecute_Params
{
};


struct USTBuffAction_ControlCharacterSearch_OnEnd_Params
{
};


struct USTBuffAction_Cooldown_OnInitialize_Params
{
};


struct USTBuffAction_Cooldown_OnExecute_Params
{
};


struct USTBuffAction_Cooldown_OnEnd_Params
{
};


struct USTBuffAction_CustomCondDamage_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_CustomCondDamage_OnExecute_Params
{
};


struct USTBuffAction_CustomCondDamage_OnEnd_Params
{
};


struct USTBuffAction_CustomCondDamage_OnAttackerPreTakeDamage_Params
{
	class AActor*                                      VictimActor;                                              
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        
};


struct USTBuffAction_CustomCondDamage_GetCustomTypeDamageData_Params
{
	class AActor*                                      VictimActor;                                              
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        
	struct FBACustomTypeDamageData                     OutData;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_CustomCondDamage_GetCustomSelfHpDamageData_Params
{
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        
	struct FBACustomHpDamageData                       OutData;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_CustomCondDamage_GetCustomHpDamageData_Params
{
	class AActor*                                      VictimActor;                                              
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        
	struct FBACustomHpDamageData                       OutData;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_CustomCondDamage_GetCustomDistDamageData_Params
{
	class AActor*                                      VictimActor;                                              
	class UCustomDamageableInfo*                       uCustomDamageInfo;                                        
	struct FBACustomDistDamageData                     OutData;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_DirectMove_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_DirectMove_OnExecute_Params
{
};


struct USTBuffAction_DirectMove_OnEnd_Params
{
};


struct USTBuffAction_DisablePawnState_OnExecute_Params
{
};


struct USTBuffAction_DisablePawnState_OnEnd_Params
{
};


struct USTBuffAction_Dot_TakeDotValue_Params
{
	float                                              ReturnValue;                                              
};


struct USTBuffAction_Dot_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_Dot_OnExecute_Params
{
};


struct USTBuffAction_DotBullet_TakeDotValue_Params
{
};


struct USTBuffAction_DotBullet_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_DotBullet_OnExecute_Params
{
};


struct USTBuffAction_DotBullet_CaculateDotValue_Params
{
	float                                              OriginValue;                                              
	float                                              ReturnValue;                                              
};


struct USTBuffAction_DotSkillBlackboard_TakeDotValue_Params
{
	float                                              ReturnValue;                                              
};


struct USTBuffAction_DotSkillBlackboard_OnInitialize_Params
{
};


struct USTBuffAction_EnableMove_OnExecute_Params
{
};


struct USTBuffAction_EnableMove_OnEnd_Params
{
};


struct USTBuffAction_EnemySense_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_EnemySense_OnInitialize_Params
{
};


struct USTBuffAction_EnemySense_OnExecute_Params
{
};


struct USTBuffAction_EnterState_OnExecute_Params
{
};


struct USTBuffAction_EnterState_OnEnd_Params
{
};


struct USTBuffAction_EquipmentWeightAttr_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_EquipmentWeightAttr_OnInitialize_Params
{
};


struct USTBuffAction_EquipmentWeightAttr_OnExecute_Params
{
};


struct USTBuffAction_EquipmentWeightAttr_OnEnd_Params
{
};


struct USTBuffAction_GameTipWithMsg_OnExecute_Params
{
};


struct USTBuffAction_GenBulletHitEffect_SpawnExplodeActor_Params
{
	struct FVector                                     SpawnEffActorPos;                                         
};


struct USTBuffAction_GenBulletHitEffect_SpawnEffectActor_Params
{
	struct FVector                                     SpawnEffActorPos;                                         
};


struct USTBuffAction_GenBulletHitEffect_OnServerBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	struct FVector                                     HitPos;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenBulletHitEffect_OnInitialize_Params
{
};


struct USTBuffAction_GenBulletHitEffect_OnExecute_Params
{
};


struct USTBuffAction_GenBulletHitEffect_OnDestroy_Params
{
};


struct USTBuffAction_GenBulletHitEffect_OnClientBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	struct FVector                                     HitPos;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenBulletHitEffect_AddScreenEdgeEff_Params
{
};


struct USTBuffAction_GenBulletHitExplode_RemoveExplodeEffect_Params
{
};


struct USTBuffAction_GenBulletHitExplode_OnServerBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	struct FVector                                     HitPos;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenBulletHitExplode_OnInitialize_Params
{
};


struct USTBuffAction_GenBulletHitExplode_OnDestroy_Params
{
};


struct USTBuffAction_GenBulletHitExplode_OnClientBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	struct FVector                                     HitPos;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenBulletHitExplode_AddScreenEdgeEff_Params
{
};


struct USTBuffAction_GenBulletPosionHitEffect_OnServerBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	struct FVector                                     HitPos;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenBulletPosionHitEffect_OnInitialize_Params
{
};


struct USTBuffAction_GenBulletPosionHitEffect_OnDestroy_Params
{
};


struct USTBuffAction_GenBulletPosionHitEffect_OnClientBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	struct FVector                                     HitPos;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenCureAmplifier_OnInitialize_Params
{
};


struct USTBuffAction_GenCureAmplifier_OnExecute_Params
{
};


struct USTBuffAction_GenCureAmplifier_OnDestroy_Params
{
};


struct USTBuffAction_GenCureAmplifier_GenCureEffect_Params
{
};


struct USTBuffAction_GenEffectAtPosition_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      
};


struct USTBuffAction_GenEffectAtPosition_OnInitialize_Params
{
};


struct USTBuffAction_GenEffectAtPosition_OnDestroy_Params
{
};


struct USTBuffAction_GenEffectAtPosition_OnClientTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      Causer;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenEffectAtPosition_OnClientPushDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
};


struct USTBuffAction_GenEffectAtPosition_GenDieEffect_Params
{
	struct FVector                                     GenPosition;                                              
};


struct USTBuffAction_GenNoiseAmplifier_SpawnEffectActor_Params
{
	struct FVector                                     SpawnEffActorPos;                                         
};


struct USTBuffAction_GenNoiseAmplifier_OnServerBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	struct FVector                                     HitPos;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenNoiseAmplifier_OnInitialize_Params
{
};


struct USTBuffAction_GenNoiseAmplifier_OnExecute_Params
{
};


struct USTBuffAction_GenNoiseAmplifier_OnDestroy_Params
{
};


struct USTBuffAction_GenNoiseAmplifier_OnClientBulleteHitEvent_Params
{
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	struct FVector                                     HitPos;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffAction_GenNoiseAmplifier_GenBulletHitEffect_Params
{
	struct FVector                                     GenPosition;                                              
};


struct USTBuffAction_GenNoiseAmplifier_AddScreenEdgeEff_Params
{
};


struct USTBuffAction_GenSmokeAmplifier_RemoveSmokeEffect_Params
{
};


struct USTBuffAction_GenSmokeAmplifier_OnInitialize_Params
{
};


struct USTBuffAction_GenSmokeAmplifier_OnExecute_Params
{
};


struct USTBuffAction_GenSmokeAmplifier_OnDestroy_Params
{
};


struct USTBuffAction_GenSmokeAmplifier_GenSmokeEffect_Params
{
};


struct USTBuffAction_HangInAir_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_HangInAir_OnExecute_Params
{
};


struct USTBuffAction_HangInAir_OnEnd_Params
{
};


struct USTBuffAction_HideCrossHair_OnInitialize_Params
{
};


struct USTBuffAction_HideCrossHair_OnExecute_Params
{
};


struct USTBuffAction_HideCrossHair_OnEnd_Params
{
};


struct USTBuffAction_InGameUIMsg_OnExecute_Params
{
};


struct USTBuffAction_InGameUIMsg_OnEnd_Params
{
};


struct USTBuffAction_InGameUIMsgIncludingDriver_OnExecute_Params
{
};


struct USTBuffAction_InGameUIMsgIncludingDriver_OnEnd_Params
{
};


struct USTBuffAction_Invincible_OnExecute_Params
{
};


struct USTBuffAction_Invincible_OnEnd_Params
{
};


struct USTBuffAction_LauchCharacter_OnExecute_Params
{
};


struct USTBuffAction_LauchCharacter_OnEnd_Params
{
};


struct USTBuffAction_Log_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_Log_OnExecute_Params
{
};


struct USTBuffAction_Log_OnEnd_Params
{
};


struct USTBuffAction_MagicRescue_OnExecute_Params
{
};


struct USTBuffAction_MagicRescue_OnEnd_Params
{
};


struct USTBuffAction_MaintenanceVehicle_OnExecute_Params
{
};


struct USTBuffAction_ModifyDuration_OnInitialize_Params
{
};


struct USTBuffAction_ModifyProperty_OnExecute_Params
{
};


struct USTBuffAction_ModifyProperty_OnEnd_Params
{
};


struct USTBuffAction_MPCSpeedScale_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_MPCSpeedScale_OnInitialize_Params
{
};


struct USTBuffAction_MPCSpeedScale_OnExecute_Params
{
};


struct USTBuffAction_MPCSpeedScale_OnEnd_Params
{
};


struct USTBuffAction_MPCSpeedScale_OnDestroy_Params
{
};


struct USTBuffAction_MultiAttrModifier_OnInitialize_Params
{
};


struct USTBuffAction_MultiAttrModifier_OnExecute_Params
{
};


struct USTBuffAction_MultiAttrModifier_OnEnd_Params
{
};


struct USTBuffAction_MultiAttrModifier_GetAttrModify_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              
};


struct USTBuffAction_MultipleJump_PreDoJump_Params
{
};


struct USTBuffAction_MultipleJump_OnExecute_Params
{
};


struct USTBuffAction_MultipleJump_OnEnd_Params
{
};


struct USTBuffAction_OverridePeojectile_OnPlayerProjectileInit_Params
{
	class ASTProjectileBase*                           Projectile;                                               
};


struct USTBuffAction_OverridePeojectile_OnExecute_Params
{
};


struct USTBuffAction_OverridePeojectile_OnEnd_Params
{
};


struct USTBuffAction_OverrideSkill_OnExecute_Params
{
};


struct USTBuffAction_OverrideSkill_OnEnd_Params
{
};


struct USTBuffAction_PetVisible_OnInitialize_Params
{
};


struct USTBuffAction_PetVisible_OnExecute_Params
{
};


struct USTBuffAction_PetVisible_OnEnd_Params
{
};


struct USTBuffAction_PlayAkAudio_OnTick_Params
{
	float                                              DeltaTime;                                                
};


struct USTBuffAction_PlayAkAudio_OnInitialize_Params
{
};


struct USTBuffAction_PlayAkAudio_OnExecute_Params
{
};


struct USTBuffAction_PlayAkAudio_OnEnd_Params
{
};


struct USTBuffAction_PlayEmote_OnExecute_Params
{
};


struct USTBuffAction_PlayerInvincibleEffect_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_PlayerInvincibleEffect_OnInitialize_Params
{
};


struct USTBuffAction_PlayerInvincibleEffect_OnExecute_Params
{
};


struct USTBuffAction_PlayerInvincibleEffect_OnEnd_Params
{
};


struct USTBuffAction_PlayMontage_OnInitialize_Params
{
};


struct USTBuffAction_PlayMontage_OnExecute_Params
{
};


struct USTBuffAction_PlayMontage_OnEnd_Params
{
};


struct USTBuffAction_PlayMontage_Pose_OnInitialize_Params
{
};


struct USTBuffAction_PlayMontage_Pose_OnExecute_Params
{
};


struct USTBuffAction_PlayMontage_Pose_OnEnd_Params
{
};


struct USTBuffAction_PlayMontage_Pose_IsArmed_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_PlayMontage_Pose_IsArmed_OnInitialize_Params
{
};


struct USTBuffAction_PlayMontage_Pose_IsArmed_OnExecute_Params
{
};


struct USTBuffAction_PlayMontage_Pose_IsArmed_OnEnd_Params
{
};


struct USTBuffAction_PlayParticleScreenEffect_OnExecute_Params
{
};


struct USTBuffAction_PlayParticleScreenEffect_OnEnd_Params
{
};


struct USTBuffAction_PlayScreenAppearance_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_PlayScreenAppearance_OnExecute_Params
{
};


struct USTBuffAction_PlayScreenAppearance_OnEnd_Params
{
};


struct USTBuffAction_PlayScreenEffect_OnExecute_Params
{
};


struct USTBuffAction_PlayScreenEffect_OnEnd_Params
{
};


struct USTBuffAction_RecoverWhenMove_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_RecoverWhenMove_OnExecute_Params
{
};


struct USTBuffAction_Recovery_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_Recovery_OnExecute_Params
{
};


struct USTBuffAction_Recovery_OnEnd_Params
{
};


struct USTBuffAction_ReplaceAvatarMaterial_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_ReplaceAvatarMaterial_OnInitialize_Params
{
};


struct USTBuffAction_ReplaceAvatarMaterial_OnEnd_Params
{
};


struct USTBuffAction_ReplaceCharAnim_OnExecute_Params
{
};


struct USTBuffAction_ReplaceCharAnim_OnEnd_Params
{
};


struct USTBuffAction_ReplaceCharAvatarAnim_OnExecute_Params
{
};


struct USTBuffAction_ReplaceCharAvatarAnim_OnEnd_Params
{
};


struct USTBuffAction_RotateCharacter_OnTick_Params
{
	float                                              DeltaTime;                                                
};


struct USTBuffAction_RotateCharacter_OnExecute_Params
{
};


struct USTBuffAction_RotateCharacter_GetNodeMemorySize_Params
{
	int                                                ReturnValue;                                              
};


struct USTBuffAction_SetEyeEffect_OnExecute_Params
{
};


struct USTBuffAction_SetEyeEffect_OnEnd_Params
{
};


struct USTBuffAction_SetMaterialParameter_SetMatParameter_Params
{
	class UMeshComponent*                              MeshComp;                                                 
	struct FCustomMatConfig                            Config;                                                   
	bool                                               End;                                                      
	int                                                MeshConfigIndex;                                          
};


struct USTBuffAction_SetMaterialParameter_OnExecute_Params
{
};


struct USTBuffAction_SetMaterialParameter_OnEnd_Params
{
};


struct USTBuffAction_SetMaterialParameterInterp_SetMatParameterInterp_Params
{
	class UMeshComponent*                              MeshComp;                                                 
	struct FCustomMatConfig                            Config;                                                   
	float                                              DetalTime;                                                
};


struct USTBuffAction_SetMaterialParameterInterp_SetMatParameter_Params
{
	class UMeshComponent*                              MeshComp;                                                 
	struct FCustomMatConfig                            Config;                                                   
	bool                                               End;                                                      
	int                                                MeshConfigIndex;                                          
};


struct USTBuffAction_SetMaterialParameterInterp_SaveMatParameter_Params
{
	class UMeshComponent*                              MeshComp;                                                 
	struct FCustomMatConfig                            Config;                                                   
};


struct USTBuffAction_SetMaterialParameterInterp_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_SetMaterialParameterInterp_OnExecute_Params
{
};


struct USTBuffAction_SetMaterialParameterInterp_OnEnd_Params
{
};


struct USTBuffAction_SetMoveable_OnExecute_Params
{
};


struct USTBuffAction_SetMoveable_OnEnd_Params
{
};


struct USTBuffAction_SetNewCD_OnInitOneSkill_Params
{
	int                                                InSkillID;                                                
};


struct USTBuffAction_SetNewCD_OnDeleteOneSkill_Params
{
	int                                                InSkillID;                                                
};


struct USTBuffAction_SetRecoveryPrompt_OnExecute_Params
{
};


struct USTBuffAction_SetRecoveryPrompt_OnEnd_Params
{
};


struct USTBuffAction_SetSkillBlackboard_OnInitOneSkill_Params
{
	int                                                InSkillID;                                                
};


struct USTBuffAction_SetSkillBlackboard_OnDeleteOneSkill_Params
{
	int                                                InSkillID;                                                
};


struct USTBuffAction_SpawnActor_OnInitialize_Params
{
};


struct USTBuffAction_SpawnActor_OnExecute_Params
{
};


struct USTBuffAction_SpawnActor_OnEnd_Params
{
};


struct USTBuffAction_StunGrenade_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_StunGrenade_OnExecute_Params
{
};


struct USTBuffAction_StunGrenade_OnEnd_Params
{
};


struct USTBuffAction_VehicleAddImpulse_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_VehicleAddImpulse_OnExecute_Params
{
};


struct USTBuffAction_VehicleAddImpulse_OnEnd_Params
{
};


struct USTBuffAction_VehicleBoostingEffect_OnInitialize_Params
{
};


struct USTBuffAction_VehicleBoostingEffect_OnExecute_Params
{
};


struct USTBuffAction_VehicleBoostingEffect_OnEnd_Params
{
};


struct USTBuffAction_VehicleDisablePhysicsTimer_OnExecute_Params
{
};


struct USTBuffAction_VehicleDisablePhysicsTimer_OnEnd_Params
{
};


struct USTBuffAction_VehicleEngineSetup_OnInitialize_Params
{
};


struct USTBuffAction_VehicleEngineSetup_OnExecute_Params
{
};


struct USTBuffAction_VehicleEngineSetup_OnEnd_Params
{
};


struct USTBuffAction_VehicleFastStart_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_VehicleFastStart_OnExecute_Params
{
};


struct USTBuffAction_VehicleFastStart_OnEnd_Params
{
};


struct USTBuffAction_VehicleSetLinearVelocity_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_VehicleSetLinearVelocity_OnExecute_Params
{
};


struct USTBuffAction_VehicleSetLinearVelocity_OnEnd_Params
{
};


struct USTBuffAction_VehicleTriggerFastStart_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_VehicleTriggerFastStart_OnExecute_Params
{
};


struct USTBuffAction_VehicleTriggerFastStart_OnEnd_Params
{
};


struct USTBuffAction_WeaponAttrModifier_UndoAllWeaponAttrModifier_Params
{
	bool                                               CallAfterAttrModify;                                      
};


struct USTBuffAction_WeaponAttrModifier_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_WeaponAttrModifier_OnNewWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
};


struct USTBuffAction_WeaponAttrModifier_OnInitialize_Params
{
};


struct USTBuffAction_WeaponAttrModifier_OnExecute_Params
{
};


struct USTBuffAction_WeaponAttrModifier_OnEnd_Params
{
};


struct USTBuffAction_WeaponAttrModifier_OnDestroy_Params
{
};


struct USTBuffAction_WeaponAttrModifier_OnBuffUpdate_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
};


struct USTBuffAction_WeaponAttrModifier_IsValidWeapon_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_WeaponAttrModifier_DoWeaponAttrModifier_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              
};


struct USTBuffAction_WeaponAttrModifier_DoAllWeaponAttrModifier_Params
{
};


struct USTBuffAction_WeaponAttrModifier_AfterAttrModify_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              
	float                                              OldValue;                                                 
	float                                              NewValue;                                                 
	struct FBAWeaponAttrModifyConfig                   AttrModifyCfg;                                            
};


struct USTBuffAction_WeaponAttrModifierForbid_OnNewWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
};


struct USTBuffAction_WeaponAttrModifierForbid_OnInitialize_Params
{
};


struct USTBuffAction_WeaponAttrModifierForbid_OnExecute_Params
{
};


struct USTBuffAction_WeaponAttrModifierForbid_OnEnd_Params
{
};


struct USTBuffAction_WeaponAttrModifierForbid_OnDestroy_Params
{
};


struct USTBuffAction_WeaponAttrModifierForbid_IsValidWeapon_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_WeaponAttrModifierForbid_HandleAllWeapons_Params
{
	bool                                               Forbid;                                                   
};


struct USTBuffAction_WeaponBreakthrough_UnDoBreakthroughIDForAllWeapon_Params
{
};


struct USTBuffAction_WeaponBreakthrough_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_WeaponBreakthrough_OnNewWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
};


struct USTBuffAction_WeaponBreakthrough_OnInitialize_Params
{
};


struct USTBuffAction_WeaponBreakthrough_OnExecute_Params
{
};


struct USTBuffAction_WeaponBreakthrough_OnEnd_Params
{
};


struct USTBuffAction_WeaponBreakthrough_OnDestroy_Params
{
};


struct USTBuffAction_WeaponBreakthrough_IsValidWeapon_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_WeaponBreakthrough_DoBreakthroughIDForWeapon_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              
};


struct USTBuffAction_WeaponBreakthrough_DoBreakthroughIDForAllWeapon_Params
{
};


struct USTBuffCondition_AllowPawnState_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_BlackboardValueComparison_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_BuffLevel_OnInitialize_Params
{
};


struct USTBuffCondition_BuffLevel_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_CDChanged_OnInitialize_Params
{
};


struct USTBuffCondition_CDChanged_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_Drowning_OnInitialize_Params
{
};


struct USTBuffCondition_Drowning_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_ExecActionOnEnd_OnEnd_Params
{
};


struct USTBuffCondition_HeightGround_OnInitialize_Params
{
};


struct USTBuffCondition_HeightGround_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsAI_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsCastingSkill_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsCDOK_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsHasBuff_OnRemoveBuff_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	int                                                InstID;                                                   
};


struct USTBuffCondition_IsHasBuff_OnAddBuff_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	bool                                               IsExist;                                                  
	class AActor*                                      Causer;                                                   
};


struct USTBuffCondition_IsHealthOn_OnInitialize_Params
{
};


struct USTBuffCondition_IsHealthOn_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsHit_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      Causer;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffCondition_IsHit_OnPushDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffCondition_IsHit_OnPostTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 Controller;                                               
	class AActor*                                      DamageCauser;                                             
	int                                                DamageType;                                               
};


struct USTBuffCondition_IsHit_OnInitialize_Params
{
};


struct USTBuffCondition_IsHit_OnDestroy_Params
{
};


struct USTBuffCondition_IsHit_IsFilterBullet_Params
{
	class AActor*                                      Shooter;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsHit_HandleDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      Causer;                                                   
};


struct USTBuffCondition_IsHit_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsInDoor_OnInitialize_Params
{
};


struct USTBuffCondition_IsInDoor_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsItemInBackpack_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsKeepInState_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 Controller;                                               
	class AActor*                                      DamageCauser;                                             
	int                                                DamageType;                                               
};


struct USTBuffCondition_IsKeepInState_OnPreTakeDamage_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      DamageCauser;                                             
};


struct USTBuffCondition_IsKeepInState_OnInitialize_Params
{
};


struct USTBuffCondition_IsKeepInState_OnDestroy_Params
{
};


struct USTBuffCondition_IsKeepInState_OnCharacterTakeDamageEvent_Params
{
	class ASTExtraBaseCharacter*                       TakeDamageChar;                                           
};


struct USTBuffCondition_IsKeepInState_IsInState_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsKeepInState_HandlePlayerStateChanged_Params
{
	EPawnState                                         NewState;                                                 
};


struct USTBuffCondition_IsKeepInState_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsKill_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      Causer;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffCondition_IsKill_OnPushDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Causer;                                                   
	class AActor*                                      Victim;                                                   
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffCondition_IsKill_OnInitialize_Params
{
};


struct USTBuffCondition_IsKill_OnDestroy_Params
{
};


struct USTBuffCondition_IsKill_IsFilterGun_Params
{
	class AActor*                                      Shooter;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsKill_IsFilterBullet_Params
{
	class AActor*                                      Shooter;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsKill_HandleDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      Victim;                                                   
	class AActor*                                      Causer;                                                   
};


struct USTBuffCondition_IsKill_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsKillSomeOne_OnRealDeathEvent_Params
{
	class AActor*                                      Victim;                                                   
};


struct USTBuffCondition_IsKillSomeOne_OnNearDeathEvent_Params
{
	class APawn*                                       Victim;                                                   
	class AController*                                 Causer;                                                   
};


struct USTBuffCondition_IsKillSomeOne_OnInitialize_Params
{
};


struct USTBuffCondition_IsKillSomeOne_OnDestroy_Params
{
};


struct USTBuffCondition_IsKillSomeOne_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsLanded_OnMovementChanged_Params
{
	class ACharacter*                                  Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct USTBuffCondition_IsLanded_OnInitialize_Params
{
};


struct USTBuffCondition_IsLanded_OnDestroy_Params
{
};


struct USTBuffCondition_IsLanded_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsMoveDistance_OnInitialize_Params
{
};


struct USTBuffCondition_IsMoveDistance_OnDestroy_Params
{
};


struct USTBuffCondition_IsMoveDistance_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsMoving_OnInitialize_Params
{
};


struct USTBuffCondition_IsMoving_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsNearDeath_OnInitialize_Params
{
};


struct USTBuffCondition_IsNearDeath_OnDestroy_Params
{
};


struct USTBuffCondition_IsNearDeath_IsLeaveNearDeath_Params
{
};


struct USTBuffCondition_IsNearDeath_IsEnterNearDeath_Params
{
	bool                                               IsEnter;                                                  
};


struct USTBuffCondition_IsNearDeath_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsOnMovePlatform_OnInitialize_Params
{
};


struct USTBuffCondition_IsOnMovePlatform_OnDestroy_Params
{
};


struct USTBuffCondition_IsOnMovePlatform_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsOnVehicle_OnInitialize_Params
{
};


struct USTBuffCondition_IsOnVehicle_OnEnterVehicle_Params
{
	bool                                               IsEnter;                                                  
	class AActor*                                      Vehicle;                                                  
};


struct USTBuffCondition_IsOnVehicle_OnDestroy_Params
{
};


struct USTBuffCondition_IsOnVehicle_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsOnWater_OnInitialize_Params
{
};


struct USTBuffCondition_IsOnWater_OnDestroy_Params
{
};


struct USTBuffCondition_IsOnWater_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsPlayer_OnInitialize_Params
{
};


struct USTBuffCondition_IsPlayer_OnDestroy_Params
{
};


struct USTBuffCondition_IsPlayer_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsRescueFinish_OnInitialize_Params
{
};


struct USTBuffCondition_IsRescueFinish_OnDestroy_Params
{
};


struct USTBuffCondition_IsRescueFinish_IsRescueFinish_Params
{
	class UActorComponent*                             BuffComponent;                                            
	int                                                InstID;                                                   
};


struct USTBuffCondition_IsRescueFinish_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsRescueOther_OnRescueOther_Params
{
	class APawn*                                       SelfActor;                                                
	class AActor*                                      DamageCauser;                                             
	bool                                               bNearDeath;                                               
	int                                                TypeId;                                                   
	class AActor*                                      Killer;                                                   
};


struct USTBuffCondition_IsRescueOther_OnInitialize_Params
{
};


struct USTBuffCondition_IsRescueOther_OnDestroy_Params
{
};


struct USTBuffCondition_IsRescueOther_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsStartRescue_OnInitialize_Params
{
};


struct USTBuffCondition_IsStartRescue_OnDestroy_Params
{
};


struct USTBuffCondition_IsStartRescue_IsStartRescue_Params
{
	class AActor*                                      BeRescue;                                                 
	bool                                               bIsStart;                                                 
};


struct USTBuffCondition_IsStartRescue_IsStartBeRescued_Params
{
	class AActor*                                      RescueCauser;                                             
	bool                                               bIsStart;                                                 
};


struct USTBuffCondition_IsStartRescue_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsVisible_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_IsWeaponEquip_OnInitialize_Params
{
};


struct USTBuffCondition_IsWeaponEquip_OnDestroy_Params
{
};


struct USTBuffCondition_IsWeaponEquip_IsUnEquipWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
};


struct USTBuffCondition_IsWeaponEquip_IsEquipWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
	TEnumAsByte<ESurviveWeaponPropSlot>                Slot;                                                     
};


struct USTBuffCondition_IsWeaponEquip_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_ItemOperation_OnInitialize_Params
{
};


struct USTBuffCondition_ItemOperation_OnDestroy_Params
{
};


struct USTBuffCondition_ItemOperation_HandleItemOperate_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           InOperationType;                                          
	int                                                Reason;                                                   
};


struct USTBuffCondition_ItemOperation_HandleItemCountChanged_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           InOperationType;                                          
	int                                                Count;                                                    
};


struct USTBuffCondition_ItemOperation_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_KeepStateTimedBuff_OnInitialize_Params
{
};


struct USTBuffCondition_KeepStateTimedBuff_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_LayerEqual_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_LayerMax_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_LayerSpecific_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_MovementMode_OnMovementChanged_Params
{
	class ACharacter*                                  Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct USTBuffCondition_MovementMode_OnInitialize_Params
{
};


struct USTBuffCondition_MovementMode_OnDestroy_Params
{
};


struct USTBuffCondition_MovementMode_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_PlayerState_OnPawnStateChanged_Params
{
	EPawnState                                         PawnState;                                                
};


struct USTBuffCondition_PlayerState_OnInitialize_Params
{
};


struct USTBuffCondition_PlayerState_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_Probability_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_PropertyLimit_OnInitialize_Params
{
};


struct USTBuffCondition_PropertyLimit_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_BooleanShared_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_FloatShared_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_Int32Shared_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_UInt8Shared_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_TeammateDistance_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_Timer_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffCondition_Timer_OnInitialize_Params
{
};


struct USTBuffCondition_Timer_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_VehicleAvatarChanged_OnInitialize_Params
{
};


struct USTBuffCondition_VehicleAvatarChanged_OnDestroy_Params
{
};


struct USTBuffCondition_VehicleAvatarChanged_OnAvatarChanged_Params
{
};


struct USTBuffCondition_VehicleAvatarChanged_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_WeaponEvent_OnInitialize_Params
{
};


struct USTBuffCondition_WeaponEvent_OnDestroy_Params
{
};


struct USTBuffCondition_WeaponEvent_HandleFireEvent_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct USTBuffCondition_WeaponEvent_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_WeaponPropSlot_OnInitialize_Params
{
};


struct USTBuffCondition_WeaponPropSlot_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_WeaponType_OnInitialize_Params
{
};


struct USTBuffCondition_WeaponType_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffEvent_AddBuff_OnRemoveBuff_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	int                                                InstID;                                                   
};


struct USTBuffEvent_AddBuff_OnInitialize_Params
{
};


struct USTBuffEvent_AddBuff_OnDestroy_Params
{
};


struct USTBuffEvent_AddBuff_OnAddBuff_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	bool                                               IsExist;                                                  
	class AActor*                                      Causer;                                                   
};


struct USTBuffEvent_BuffUpdateEvent_OnInitialize_Params
{
};


struct USTBuffEvent_BuffUpdateEvent_OnDestroy_Params
{
};


struct USTBuffEvent_BuffUpdateEvent_OnBuffUpdate_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
};


struct USTBuffEvent_Delay_OnInitialize_Params
{
};


struct USTBuffEvent_Delay_OnDestroy_Params
{
};


struct USTBuffEvent_Delay_OnDelay_Params
{
};


struct USTBuffEvent_EnterNearDeath_OnInitialize_Params
{
};


struct USTBuffEvent_EnterNearDeath_OnEnterNearDeath_Params
{
	bool                                               bEnter;                                                   
};


struct USTBuffEvent_EnterNearDeath_OnDestroy_Params
{
};


struct USTBuffEvent_EnterOrLeaveVehicle_OnInitialize_Params
{
};


struct USTBuffEvent_EnterOrLeaveVehicle_OnEnterVehicle_Params
{
	bool                                               IsEnter;                                                  
	class AActor*                                      Vehicle;                                                  
};


struct USTBuffEvent_EnterOrLeaveVehicle_OnDestroy_Params
{
};


struct USTBuffEvent_ItemOperation_OnInitialize_Params
{
};


struct USTBuffEvent_ItemOperation_OnDestroy_Params
{
};


struct USTBuffEvent_ItemOperation_HandleItemCountChanged_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           InOperationType;                                          
	int                                                Count;                                                    
};


struct USTBuffEvent_KillSomeOne_OnKnockDownOtherPlayer_Params
{
	class ASTExtraBaseCharacter*                       Victim;                                                   
};


struct USTBuffEvent_KillSomeOne_OnKillSomeOneEvent_Params
{
	class AActor*                                      Victim;                                                   
};


struct USTBuffEvent_KillSomeOne_OnInitialize_Params
{
};


struct USTBuffEvent_KillSomeOne_OnDestroy_Params
{
};


struct USTBuffEvent_MoveDistance_OnInitialize_Params
{
};


struct USTBuffEvent_MoveDistance_OnDestroy_Params
{
};


struct USTBuffEvent_MoveDistance_CheckMoveDistance_Params
{
};


struct USTBuffEvent_MovementModeChanged_OnMovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct USTBuffEvent_MovementModeChanged_OnInitialize_Params
{
};


struct USTBuffEvent_MovementModeChanged_OnDestroy_Params
{
};


struct USTBuffEvent_PawnState_OnPawnStateChange_Params
{
	class ASTExtraCharacter*                           Character;                                                
	EPawnState                                         State;                                                    
	bool                                               bIsEnter;                                                 
};


struct USTBuffEvent_PawnState_OnInitialize_Params
{
};


struct USTBuffEvent_PawnState_OnDestroy_Params
{
};


struct USTBuffEvent_PoseChange_OnPlayerPoseChange_Params
{
	TEnumAsByte<ESTEPoseState>                         LastPose;                                                 
	TEnumAsByte<ESTEPoseState>                         NewPose;                                                  
};


struct USTBuffEvent_PoseChange_OnInitialize_Params
{
};


struct USTBuffEvent_PoseChange_OnDestroy_Params
{
};


struct USTBuffEvent_PushDamage_OnPushDamage_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      DamageCauser;                                             
	class AActor*                                      DamagedActor;                                             
	struct FExtraDamageInfo                            ExtraDamageInfo;                                          
};


struct USTBuffEvent_PushDamage_OnInitialize_Params
{
};


struct USTBuffEvent_PushDamage_OnDestroy_Params
{
};


struct USTBuffEvent_RescueOther_OnRescueOther_Params
{
	class APawn*                                       SelfActor;                                                
	class AActor*                                      DamageCauser;                                             
	bool                                               bNearDeath;                                               
	int                                                TypeId;                                                   
	class AActor*                                      Killer;                                                   
};


struct USTBuffEvent_RescueOther_OnInitialize_Params
{
};


struct USTBuffEvent_RescueOther_OnDestroy_Params
{
};


struct USTBuffEvent_SkillDoCoolDown_OnSkillDoCoolDownEvent_Params
{
	int                                                InSkillID;                                                
	int                                                InCDIndex;                                                
};


struct USTBuffEvent_SkillDoCoolDown_OnInitialize_Params
{
};


struct USTBuffEvent_SkillDoCoolDown_OnDestroy_Params
{
};


struct USTBuffEvent_SkillStartEvent_OnSkillStartEvent_Params
{
	int                                                SkillID;                                                  
};


struct USTBuffEvent_SkillStartEvent_OnInitialize_Params
{
};


struct USTBuffEvent_SkillStartEvent_OnDestroy_Params
{
};


struct USTBuffEvent_SkillStopEvent_OnSkillStopEvent_Params
{
	int                                                SkillID;                                                  
	EUTSkillStopReason                                 StopReason;                                               
};


struct USTBuffEvent_SkillStopEvent_OnInitialize_Params
{
};


struct USTBuffEvent_SkillStopEvent_OnDestroy_Params
{
};


struct USTBuffEvent_StartFire_OnInitialize_Params
{
};


struct USTBuffEvent_StartFire_OnDestroy_Params
{
};


struct USTBuffEvent_StartFire_OnCharacterStartFire_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct USTBuffEvent_StartRescue_OnInitialize_Params
{
};


struct USTBuffEvent_StartRescue_OnDestroy_Params
{
};


struct USTBuffEvent_StartRescue_IsStartRescue_Params
{
	class AActor*                                      BeRescue;                                                 
	bool                                               bIsStart;                                                 
};


struct USTBuffEvent_StartRescue_IsStartBeRescued_Params
{
	class AActor*                                      RescueCauser;                                             
	bool                                               bIsStart;                                                 
};


struct USTBuffEvent_TakeDamage_OnTakeDamage_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AActor*                                      DamagedActor;                                             
	class AActor*                                      DamageCauser;                                             
	struct FExtraDamageInfo                            ExtraDamageInfo;                                          
};


struct USTBuffEvent_TakeDamage_OnInitialize_Params
{
};


struct USTBuffEvent_TakeDamage_OnDestroy_Params
{
};


struct USTBuffEvent_TakeDamageNotifyOnClient_OnPostTakeDamageEvent_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 Controller;                                               
	class AActor*                                      DamageCauser;                                             
	int                                                DamageType;                                               
};


struct USTBuffEvent_TakeDamageNotifyOnClient_OnInitialize_Params
{
};


struct USTBuffEvent_TakeDamageNotifyOnClient_OnDestroy_Params
{
};


struct USTBuffEvent_VehicleAvatarChanged_OnInitialize_Params
{
};


struct USTBuffEvent_VehicleAvatarChanged_OnDestroy_Params
{
};


struct USTBuffEvent_VehicleAvatarChanged_OnAvatarChanged_Params
{
};


struct USTBuffEvent_WeaponEquip_OnInitialize_Params
{
};


struct USTBuffEvent_WeaponEquip_OnDestroy_Params
{
};


struct USTBuffEvent_WeaponEquip_IsUnEquipWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
};


struct USTBuffEvent_WeaponEquip_IsEquipWeapon_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
	TEnumAsByte<ESurviveWeaponPropSlot>                Slot;                                                     
};


struct USTDestructionComponent_Simple_ServerInitalFragments_Params
{
	TArray<int>                                        ImpactFragmentItemIndex;                                  
};


struct USTDestructionComponent_Simple_ServerDamagedFragments_Params
{
	TArray<int>                                        ImpactFragmentItemIndex;                                  
};


struct USTDestructionComponent_Simple_ClientInitalFragments_Params
{
	TArray<int>                                        ImpactFragmentItemIndex;                                  
};


struct USTDestructionComponent_Simple_ClientDamagedFragments_Params
{
	TArray<int>                                        ImpactFragmentItemIndex;                                  
};


struct USTDestructionComponent_SetFragmentCanDestroy_Params
{
	int                                                FragmentItemIndex;                                        
	bool                                               bCanDestroy;                                              
};


struct USTDestructionComponent_SetAllFragmentsCanDestroy_Params
{
	bool                                               bCanDestroy;                                              
};


struct USTDestructionComponent_OnLocalVehicleHit_Params
{
	struct FVector                                     ImpactPoint;                                              
};


struct USTDestructionComponent_OnClientDamaged_Params
{
	TArray<int>                                        ImpactFragmentItemIndex;                                  
	struct FVector                                     LocalImpactPoint;                                         
	struct FVector                                     LocalVelocity;                                            
};


struct USTDestructionHierarchicalInstancedComponent_OnLocalVehicleHit_Params
{
	struct FVector                                     ImpactPoint;                                              
};


struct USTDestructionHierarchicalInstancedComponent_OnClientDamaged_Params
{
	int                                                InstanceIndex;                                            
	TArray<int>                                        ImpactFragmentItemIndex;                                  
	struct FVector                                     LocalImpactPoint;                                         
	struct FVector                                     LocalVelocity;                                            
};


struct USTDestructionInstancedComponent_OnLocalVehicleHit_Params
{
	struct FVector                                     ImpactPoint;                                              
};


struct USTDestructionInstancedComponent_OnClientDamaged_Params
{
	int                                                InstanceIndex;                                            
	TArray<int>                                        ImpactFragmentItemIndex;                                  
	struct FVector                                     LocalImpactPoint;                                         
	struct FVector                                     LocalVelocity;                                            
};


struct USTDestructionSubSystem_SetDestructibleEnable_Params
{
	class ASTExtraGameStateBase*                       GameState;                                                
	bool                                               bEnable;                                                  
};


struct USTDestructionSubSystem_OnVehicleTriggerServer_Params
{
	class ASTExtraVehicleBase*                         VehicleActor;                                             
	class UPrimitiveComponent*                         HitComp;                                                  
	class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent;                                            
	struct FVector                                     DesPos;                                                   
	int                                                TriggerIndex;                                             
};


struct USTDestructionSubSystem_OnVehicleTriggerClient_Params
{
	class ASTExtraVehicleBase*                         VehicleActor;                                             
	class UPrimitiveComponent*                         HitComp;                                                  
	class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent;                                            
	struct FVector                                     DesPos;                                                   
	int                                                TriggerIndex;                                             
};


struct USTDestructionSubSystem_OnVehicleServerCheckHit_Params
{
	class AActor*                                      OtherActor;                                               
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComp;                                                  
	struct FVector                                     DestroyCenter;                                            
	TArray<int>                                        DestoryInstanceIndex;                                     
};


struct USTDestructionSubSystem_OnVehicleRecoverClient_Params
{
	class AActor*                                      OtherActor;                                               
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComp;                                                  
	struct FVector                                     DestroyCenter;                                            
};


struct USTDestructionSubSystem_OnVehicleHitClient_Params
{
	class AActor*                                      OtherActor;                                               
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComp;                                                  
	struct FVector                                     DestroyCenter;                                            
};


struct USTDestructionSubSystem_OnVehicleHit_Params
{
	class AActor*                                      OtherActor;                                               
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComp;                                                  
	struct FVector                                     DestroyCenter;                                            
};


struct USTDestructionSubSystem_OnSTGameStateBeginPlay_Params
{
	class AGameState*                                  GameState;                                                
};


struct USTDestructionSubSystem_OnServerVehicleExplosion_Params
{
	class AActor*                                      OtherActor;                                               
	struct FVector                                     DestroyCenter;                                            
	float                                              OriginRange;                                              
	float                                              OriginDamage;                                             
};


struct USTDestructionSubSystem_OnServerRifleHit_Params
{
	class AActor*                                      OtherActor;                                               
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComp;                                                  
	struct FVector                                     DestroyCenter;                                            
	float                                              OriginDamage;                                             
};


struct USTDestructionSubSystem_OnServerMeleeHit_Params
{
	class AActor*                                      OtherActor;                                               
	struct FVector                                     DestroyCenter;                                            
	float                                              OriginDamage;                                             
	int                                                ItemId;                                                   
};


struct USTDestructionSubSystem_OnServerLandScapeDestroy_Params
{
	struct FVector                                     DestroyCenter;                                            
	float                                              Radius;                                                   
};


struct USTDestructionSubSystem_OnServerGrenadeExplosion_Params
{
	class AActor*                                      OtherActor;                                               
	struct FVector                                     DestroyCenter;                                            
	float                                              OriginRange;                                              
	float                                              OriginDamage;                                             
};


struct USTDestructionSubSystem_OnServerExplosin_Params
{
	class AActor*                                      OtherActor;                                               
	struct FHitResult                                  Hit;                                                      
	float                                              OriginRange;                                              
	float                                              OriginDamage;                                             
};


struct USTDestructionSubSystem_OnServerDropActorHit_Params
{
	class AActor*                                      OtherActor;                                               
	struct FVector                                     DestroyCenter;                                            
	float                                              OriginRange;                                              
	float                                              OriginDamage;                                             
};


struct USTDestructionSubSystem_LocalVehicleHit_Params
{
	class AActor*                                      OtherActor;                                               
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComp;                                                  
	struct FVector                                     DestroyCenter;                                            
	TArray<int>                                        DestoryInstanceIndex;                                     
};


struct USTDestructionSubSystem_ClientCorrectVehicleHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  
	TArray<int>                                        CorrectInstanceIndex;                                     
};


struct USTDestructionUtils_SphereDestroy_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     DestroyCenter;                                            
	float                                              Radius;                                                   
	float                                              OriginDamage;                                             
	int                                                AdditionalItemID;                                         
};


struct USTDestructionUtils_SetDestructionEnable_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               bEnable;                                                  
};


struct USTDestructionUtils_SetBPUtilsPath_Params
{
	struct FString                                     NewPath;                                                  
};


struct USTDestructionUtils_ReleaseInstance_Params
{
};


struct USTDestructionUtils_GetBPUtils_Params
{
	class USTDestructionBPUtils*                       ReturnValue;                                              
};


struct USTDestructionUtils_GasolineCanExplosionDestructibleActors_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FApplyRadialDamageParams                    ApplyRadialDamageParams;                                  
	bool                                               ReturnValue;                                              
};


struct USTDestructionUtils_ExtraDamageDestructibleActors_Params
{
	class UObject*                                     WorldContextObject;                                       
	EDestructionDamageType                             InDamageType;                                             
	struct FVector                                     DestroyCenter;                                            
	float                                              DestroyRadius;                                            
	float                                              Damage;                                                   
	struct FVector                                     DamageVelocity;                                           
	bool                                               ReturnValue;                                              
};


struct USteamTrainRuntimeSplineComponent_ExtendUpdateSpline_Params
{
	int                                                nReparamStepsPerSegment;                                  
};


struct ASTExtraBallIndicator_ShowMergedParticleSystemInBP_Params
{
};


struct ASTExtraBallIndicator_GetTargetDirectionMeshFromBP_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              
};


struct ASTExtraBallIndicator_GetPitchRangeFromBP_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ASTExtraBallIndicator_GetEffectMeshFromBP_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              
};


struct ASTExtraBallIndicator_GetCurrentKickRotation_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacter;                                          
	struct FRotator                                    ReturnValue;                                              
};


struct ASTExtraBallIndicator_GetCurrentDirectionMeshFromBP_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              
};


struct USTExtraBallMovementComponent_StopMovementImmediately_Params
{
};


struct USTExtraBallMovementComponent_ServerUpdateInput_Params
{
	float                                              FowardInput;                                              
	float                                              RightInput;                                               
	float                                              InCameraRationYaw;                                        
	float                                              InHandBrakeRate;                                          
};


struct USTExtraBallMovementComponent_ResetSimQuatFromRotator_Params
{
	struct FRotator                                    InRotation;                                               
};


struct USTExtraBallMovementComponent_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                
};


struct USTExtraBallMovementComponent_IsShouldDsControl_Params
{
	bool                                               ReturnValue;                                              
};


struct USTExtraBallMovementComponent_IsLogBallVehicle_Params
{
	bool                                               ReturnValue;                                              
};


struct USTExtraBallMovementComponent_HasPower_Params
{
	bool                                               ReturnValue;                                              
};


struct USTExtraBallMovementComponent_GetInputDirection_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USTExtraBallMovementComponent_CalculVelAndInputDiff_Params
{
	float                                              ReturnValue;                                              
};


struct ASTExtraBallVehicle_VehicleAirStateChanged_Params
{
	bool                                               bIsFoundFloor;                                            
};


struct ASTExtraBallVehicle_UpdateEffect_Params
{
};


struct ASTExtraBallVehicle_TryChangeWaitingForKickState_Params
{
	bool                                               bReady;                                                   
};


struct ASTExtraBallVehicle_SyncClientWaterStateToServer_Params
{
};


struct ASTExtraBallVehicle_SpawnEmitterAtLocation_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          
	struct FName                                       BoneName;                                                 
	bool                                               bAutoDestroy;                                             
};


struct ASTExtraBallVehicle_SpawnDeformObj_Internal_Params
{
	struct FRotator                                    ClientRotation;                                           
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct ASTExtraBallVehicle_ShouldCalcCamera_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTExtraBallVehicle_SetPhysVelocity_Params
{
	struct FVector                                     Velocity;                                                 
};


struct ASTExtraBallVehicle_SetHandBrake_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraBallVehicle_SetBoosting_Params
{
	bool                                               bEnalbed;                                                 
	bool                                               ReturnValue;                                              
};


struct ASTExtraBallVehicle_ServerSpawnBallDeformedObj_Params
{
	bool                                               bUseCustomRotation;                                       
	struct FRotator                                    InRotation;                                               
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct ASTExtraBallVehicle_ServerKickVehicle_Params
{
	struct FVector                                     KickImpulse;                                              
};


struct ASTExtraBallVehicle_ServerInitBallVehicle_Params
{
	bool                                               bInit;                                                    
};


struct ASTExtraBallVehicle_ServerHandleApplyImpulseByHit_Params
{
	struct FVector                                     HitImpulse;                                               
};


struct ASTExtraBallVehicle_RspKickVehicle_Params
{
	struct FVector                                     KickImpulse;                                              
};


struct ASTExtraBallVehicle_RspBoostJump_Params
{
	bool                                               bInMidAir;                                                
};


struct ASTExtraBallVehicle_RspApplyImpulseByHit_Params
{
	struct FVector                                     HitImpulse;                                               
};


struct ASTExtraBallVehicle_RPC_ServerSetDeformedRotation_Params
{
	float                                              ClientRotationYaw;                                        
	struct FVector                                     VLoc;                                                     
};


struct ASTExtraBallVehicle_ReqServerChangeWaitingKickState_Params
{
	bool                                               bReady;                                                   
};


struct ASTExtraBallVehicle_ReqServerBoostJump_Params
{
};


struct ASTExtraBallVehicle_RaiseBallVehicle_Params
{
	float                                              DeltaHeight;                                              
	bool                                               ReturnValue;                                              
};


struct ASTExtraBallVehicle_PlayJumpCameraEffect_Params
{
	bool                                               bInMidAir;                                                
};


struct ASTExtraBallVehicle_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                
};


struct ASTExtraBallVehicle_OnVehicleKicked_Params
{
};


struct ASTExtraBallVehicle_OnRep_CurrentMotionState_Params
{
};


struct ASTExtraBallVehicle_OnRep_BallInitialized_Params
{
};


struct ASTExtraBallVehicle_OnPlayLandEffect_Params
{
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct ASTExtraBallVehicle_OnHitOther_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct ASTExtraBallVehicle_OnBoostJump_Params
{
};


struct ASTExtraBallVehicle_MoveRight_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraBallVehicle_MoveForward_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraBallVehicle_KickVehicleInternal_Params
{
	struct FVector                                     Impulse;                                                  
};


struct ASTExtraBallVehicle_IsInServerAuthorizeNewInternal_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTExtraBallVehicle_IsBoostInMidAir_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTExtraBallVehicle_InitializeBallInternal_Params
{
	bool                                               bInit;                                                    
};


struct ASTExtraBallVehicle_GetRotationWithHead_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct ASTExtraBallVehicle_GetRotationWithBone_Params
{
	struct FName                                       BoneName;                                                 
	struct FRotator                                    ReturnValue;                                              
};


struct ASTExtraBallVehicle_GetRotationInputDir_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ASTExtraBallVehicle_GetMovementInfoStr_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ASTExtraBallVehicle_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct ASTExtraBallVehicle_GetCurrentVelocityRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct ASTExtraBallVehicle_GetCurrentMotionState_Params
{
	EBallVehicleMotionState                            ReturnValue;                                              
};


struct ASTExtraBallVehicle_GetBallMovement_Params
{
	class USTExtraBallMovementComponent*               ReturnValue;                                              
};


struct ASTExtraBallVehicle_EnterBallVehicleMotionState_Params
{
	EBallVehicleMotionState                            NewState;                                                 
};


struct ASTExtraBallVehicle_EnableBallCameraModifier_Params
{
	bool                                               bEnable;                                                  
	class ASTExtraPlayerCharacter*                     Passenger;                                                
};


struct ASTExtraBallVehicle_ClientHandleChangeWaitingState_Params
{
	bool                                               bSuccess;                                                 
};


struct ASTExtraBallVehicle_ChangeWaitingForKickState_Params
{
	bool                                               bReady;                                                   
};


struct ASTExtraCapsuleVehicle_VehicleBreakOutVelocity_Params
{
	struct FVector                                     ApplyVelocity;                                            
	bool                                               bAddVelocity;                                             
};


struct ASTExtraCapsuleVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct ASTExtraCapsuleVehicle_MoveWheelHeight_Params
{
	float                                              DeltaSeconds;                                             
};


struct ASTExtraCapsuleVehicle_GetEnterDistanceSq_Params
{
	float                                              ReturnValue;                                              
};


struct ASTExtraCapsuleVehicle_ForceUpdateChildTransforms_Params
{
	bool                                               bIsPropagateFromParent;                                   
};


struct ASTExtraCapsuleVehicle_EnableWheelAdjustHeight_Params
{
	bool                                               bEnable;                                                  
};


struct ASTExtraCapsuleVehicle_CheckAutoWakeUp_Params
{
};


struct ASTExtraCapsuleVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct ASTExtraCapsuleVehicle_BPTryCheckSimulatePhysics_Params
{
};


struct ASTExtraCapsuleVehicle_BP_RecordValidTransform_Params
{
};


struct ASTExtraCatapultMachineVehicle_TakeDamageWithWarehouse_Params
{
	class USceneComponent*                             Component;                                                
	int                                                Damage;                                                   
	class AController*                                 EventInstigator;                                          
};


struct ASTExtraCatapultMachineVehicle_SetTouchTurnDelta_Params
{
	float                                              Delta;                                                    
};


struct ASTExtraCatapultMachineVehicle_SetTouchLeanDelta_Params
{
	float                                              Delta;                                                    
};


struct ASTExtraCatapultMachineVehicle_ServerSetMoveInput_Params
{
	float                                              MoveForward;                                              
	float                                              MoveRight;                                                
};


struct ASTExtraCatapultMachineVehicle_ServerResetSeat_Params
{
};


struct ASTExtraCatapultMachineVehicle_ResetSeat_Params
{
};


struct ASTExtraCatapultMachineVehicle_OnRep_IsResetSeat_Params
{
};


struct ASTExtraCatapultMachineVehicle_OnRep_CurStateType_Params
{
};


struct ASTExtraCatapultMachineVehicle_OnHasAdjustSeatChanged_Params
{
};


struct ASTExtraCatapultMachineVehicle_OnBPRespawned_Params
{
};


struct ASTExtraCatapultMachineVehicle_OnBPRecycled_Params
{
};


struct ASTExtraCatapultMachineVehicle_InitOriginRotation_Params
{
	float                                              Yaw;                                                      
	float                                              Roll;                                                     
};


struct ASTExtraCatapultMachineVehicle_GetWarehouseLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ASTExtraCatapultMachineVehicle_ChangeState_Params
{
	ECatapultMachineStateType                          NewState;                                                 
};


struct USTExtraMyriapodVehMovementCom_SetWalkableFloorZ_Params
{
	float                                              InWalkableFloorZ;                                         
};


struct USTExtraMyriapodVehMovementCom_SetWalkableFloorAngle_Params
{
	float                                              InWalkableFloorAngle;                                     
};


struct USTExtraMyriapodVehMovementCom_SetThrottleInput_Params
{
	float                                              Rate;                                                     
};


struct USTExtraMyriapodVehMovementCom_SetSteeringInput_Params
{
	float                                              Rate;                                                     
};


struct USTExtraMyriapodVehMovementCom_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      NewCustomMode;                                            
};


struct USTExtraMyriapodVehMovementCom_SetGroupsToIgnoreMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct USTExtraMyriapodVehMovementCom_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               
};


struct USTExtraMyriapodVehMovementCom_SetGroupsToAvoidMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct USTExtraMyriapodVehMovementCom_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               
};


struct USTExtraMyriapodVehMovementCom_SetAvoidanceGroupMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct USTExtraMyriapodVehMovementCom_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               
};


struct USTExtraMyriapodVehMovementCom_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  
};


struct USTExtraMyriapodVehMovementCom_SetAcceptInput_Params
{
	bool                                               bIsAccept;                                                
};


struct USTExtraMyriapodVehMovementCom_ServerSetThrottleInput_Params
{
	float                                              Rate;                                                     
};


struct USTExtraMyriapodVehMovementCom_ServerSetSteeringInput_Params
{
	float                                              Rate;                                                     
};


struct USTExtraMyriapodVehMovementCom_ServerMoveOld_Params
{
	float                                              OldTimeStamp;                                             
	struct FVector_NetQuantize10                       OldAccel;                                                 
	unsigned char                                      OldMoveFlags;                                             
};


struct USTExtraMyriapodVehMovementCom_ServerMoveDualHybridRootMotion_Params
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


struct USTExtraMyriapodVehMovementCom_ServerMoveDual_Params
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


struct USTExtraMyriapodVehMovementCom_ServerMove_Params
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


struct USTExtraMyriapodVehMovementCom_K2_GetWalkableFloorZ_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_K2_GetWalkableFloorAngle_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_K2_GetModifiedMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_K2_FindFloor_Params
{
	struct FVector                                     CapsuleLocation;                                          
	struct FFindFloorResult                            FloorResult;                                              
};


struct USTExtraMyriapodVehMovementCom_K2_ComputeFloorDist_Params
{
	struct FVector                                     CapsuleLocation;                                          
	float                                              LineDistance;                                             
	float                                              SweepDistance;                                            
	float                                              SweepRadius;                                              
	struct FFindFloorResult                            FloorResult;                                              
};


struct USTExtraMyriapodVehMovementCom_IsWalking_Params
{
	bool                                               ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_IsWalkable_Params
{
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_IsSeriousInjuriedAllowJumping_Params
{
	bool                                               ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_HandleOnSeatDetached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct USTExtraMyriapodVehMovementCom_HandleOnSeatChanged_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            LastSeatType;                                             
	int                                                LastSeatIdx;                                              
	ESTExtraVehicleSeatType                            NewSeatType;                                              
	int                                                NewSeatIdx;                                               
};


struct USTExtraMyriapodVehMovementCom_HandleOnSeatAttached_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
	int                                                SeatIdx;                                                  
};


struct USTExtraMyriapodVehMovementCom_GetWalkingDecResistance_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetValidPerchRadius_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetSlopeSpeedFactor_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetPredictVelocity_Params
{
	float                                              PredictTime;                                              
	struct FVector                                     ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetPerchRadiusThreshold_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetMovementBase_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetMinAnalogSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetMaxJumpHeightWithJumpTime_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetMaxJumpHeight_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetJumpingHeightByObsHeight_Params
{
	float                                              ObsHeight;                                                
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetJumpingHeightByCurve_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetImpartedMovementBaseVelocity_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetDesireAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetBreakAcceleration_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetAngularVelocityByCurve_Params
{
	float                                              Speed;                                                    
	bool                                               AsForce;                                                  
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_GetAnalogInputModifier_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_DisableMovement_Params
{
};


struct USTExtraMyriapodVehMovementCom_ClientVeryShortAdjustPosition_Params
{
	float                                              TimeStamp;                                                
	struct FVector                                     NewLoc;                                                   
	class UPrimitiveComponent*                         NewBase;                                                  
	struct FName                                       NewBaseBoneName;                                          
	bool                                               bHasBase;                                                 
	bool                                               bBaseRelativePosition;                                    
	unsigned char                                      ServerMovementMode;                                       
};


struct USTExtraMyriapodVehMovementCom_ClientAdjustRootMotionSourcePosition_Params
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


struct USTExtraMyriapodVehMovementCom_ClientAdjustRootMotionPosition_Params
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


struct USTExtraMyriapodVehMovementCom_ClientAdjustPosition_Params
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


struct USTExtraMyriapodVehMovementCom_ClientAckGoodMove_Params
{
	float                                              TimeStamp;                                                
};


struct USTExtraMyriapodVehMovementCom_ClearAccumulatedForces_Params
{
};


struct USTExtraMyriapodVehMovementCom_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	int                                                OtherBodyIndex;                                           
	bool                                               bFromSweep;                                               
	struct FHitResult                                  SweepResult;                                              
};


struct USTExtraMyriapodVehMovementCom_CalcVelocity_Params
{
	float                                              DeltaTime;                                                
	float                                              Friction;                                                 
	bool                                               bFluid;                                                   
	float                                              BrakingDeceleration;                                      
};


struct USTExtraMyriapodVehMovementCom_CalculateVelocityWithResistance_Params
{
	float                                              DeltaTime;                                                
	bool                                               bFluid;                                                   
};


struct USTExtraMyriapodVehMovementCom_CalculateCurrentVerticalSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraMyriapodVehMovementCom_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  
	bool                                               bVelocityChange;                                          
};


struct USTExtraMyriapodVehMovementCom_AddForce_Params
{
	struct FVector                                     Force;                                                    
};


struct USTExtraMyriapodVehMovementCom_AddDirectionalBrakingAcceleration_Params
{
	struct FVector                                     BrakingAcceleration;                                      
};


struct USTExtraHorseMovementCom_ServerSetWalkType_Params
{
	EWalkType                                          walkType1;                                                
};


struct USTExtraHorseMovementCom_GetPredictVelocity_Params
{
	float                                              PredictTime;                                              
	struct FVector                                     ReturnValue;                                              
};


struct USTExtraHorseMovementCom_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraHorseMovementCom_GetDesireAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraHorseMovementCom_CalculateVelocityWithResistance_Params
{
	float                                              DeltaTime;                                                
	bool                                               bFluid;                                                   
};


struct ASTExtraMyriapodVehicle_UpdatePoseCollision_Params
{
	ESTMryiapodState                                   CurState;                                                 
};


struct ASTExtraMyriapodVehicle_SwitchPoseStateServer_Params
{
	ESTMryiapodState                                   InPoseState;                                              
};


struct ASTExtraMyriapodVehicle_StopJumping_Params
{
};


struct ASTExtraMyriapodVehicle_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     
};


struct ASTExtraMyriapodVehicle_SetPlayerEnterVelocity_Params
{
};


struct ASTExtraMyriapodVehicle_SetHandBrake_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraMyriapodVehicle_SetBoosting_Params
{
	bool                                               bEnalbed;                                                 
	bool                                               ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_ServerSetHandBrake_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraMyriapodVehicle_ServerGetUp_Params
{
};


struct ASTExtraMyriapodVehicle_ServerBrakeEnd_Params
{
};


struct ASTExtraMyriapodVehicle_SendClient_ApplyImpluse_Params
{
	EHitDir                                            Dir;                                                      
};


struct ASTExtraMyriapodVehicle_OnWalkingOffLedge_Params
{
	struct FVector                                     PreviousFloorImpactNormal;                                
	struct FVector                                     PreviousFloorContactNormal;                               
	struct FVector                                     PreviousLocation;                                         
	float                                              TimeDelta;                                                
};


struct ASTExtraMyriapodVehicle_OnTakingDamage_Params
{
	class AActor*                                      HitActor;                                                 
	class AActor*                                      HitInstigator;                                            
	struct FHitResult                                  HitInfo;                                                  
	struct FVector                                     ImpulseDir;                                               
	float                                              Damage;                                                   
};


struct ASTExtraMyriapodVehicle_OnRep_ReplicatedBasedMovement_Params
{
};


struct ASTExtraMyriapodVehicle_OnRep_PoseStateNotify_Params
{
	ESTMryiapodState                                   InPoseState;                                              
};


struct ASTExtraMyriapodVehicle_OnRep_MyriapodSeriousInjury_Params
{
};


struct ASTExtraMyriapodVehicle_OnRep_MyriapodDead_Params
{
};


struct ASTExtraMyriapodVehicle_OnLaunched_Params
{
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bXYOverride;                                              
	bool                                               bZOverride;                                               
};


struct ASTExtraMyriapodVehicle_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      
};


struct ASTExtraMyriapodVehicle_OnJumped_Params
{
};


struct ASTExtraMyriapodVehicle_OnExitingVehicleOnServer_Params
{
};


struct ASTExtraMyriapodVehicle_OnEnteringVehicleOnServer_Params
{
	bool                                               IsSucc;                                                   
};


struct ASTExtraMyriapodVehicle_MoveUp_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraMyriapodVehicle_LaunchCharacter_Params
{
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bXYOverride;                                              
	bool                                               bZOverride;                                               
};


struct ASTExtraMyriapodVehicle_K2_UpdateCustomMovement_Params
{
	float                                              DeltaTime;                                                
};


struct ASTExtraMyriapodVehicle_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	unsigned char                                      PrevCustomMode;                                           
	unsigned char                                      NewCustomMode;                                            
};


struct ASTExtraMyriapodVehicle_Jump_Params
{
};


struct ASTExtraMyriapodVehicle_IsPlayingRootMotion_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_IsJumpProvidingForce_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_HandleOnVehicleHealthStateChanged_Params
{
	ESTExtraVehicleHealthState                         InVehicleHealthState;                                     
};


struct ASTExtraMyriapodVehicle_GetUp_Params
{
};


struct ASTExtraMyriapodVehicle_GetRotationInputDir_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_GetBodyShapeComponent_Params
{
	class UBoxComponent*                               ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_GetBaseTranslationOffset_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_ExitVehicle_Params
{
};


struct ASTExtraMyriapodVehicle_EnterVehicle_Params
{
	bool                                               IsSucc;                                                   
};


struct ASTExtraMyriapodVehicle_ClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ASTExtraMyriapodVehicle_CanMove_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_CanJump_Params
{
	bool                                               ReturnValue;                                              
};


struct ASTExtraMyriapodVehicle_CacheInitialMeshOffset_Params
{
	struct FVector                                     MeshRelativeLocation;                                     
	struct FRotator                                    MeshRelativeRotation;                                     
};


struct ASTExtraMyriapodVehicle_BroadcastClient_TakeDamage_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class APawn*                                       DamageInstigatorPawn;                                     
	bool                                               IsHeadShotDamage;                                         
};


struct ASTExtraMyriapodVehicle_BrakeEnd_Params
{
};


struct ASTExtraHorseVehicle_SetWalkType_Params
{
	EWalkType                                          WalkType;                                                 
};


struct ASTExtraHorseVehicle_SetHandBrake_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraHorseVehicle_SetBoosting_Params
{
	bool                                               bEnalbed;                                                 
	bool                                               ReturnValue;                                              
};


struct ASTExtraHorseVehicle_OnRep_HorseStateChanged_Params
{
};


struct ASTExtraHorseVehicle_OnChangedState_Params
{
	EHorseBehaviorType                                 Type;                                                     
};


struct ASTExtraHorseVehicle_MoveUp_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraHorseVehicle_MoveRight_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraHorseVehicle_MoveForward_Params
{
	float                                              Rate;                                                     
};


struct ASTExtraHorseVehicle_Jump_Params
{
};


struct ASTExtraHorseVehicle_ClientTakeDamageByShoot_Params
{
};


struct ASTExtraLionDanceVehicle_SetEnergy_Params
{
	float                                              Energy;                                                   
};


struct ASTExtraLionDanceVehicle_ServerRecycleVehicle_Params
{
};


struct ASTExtraLionDanceVehicle_ServerBreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct ASTExtraLionDanceVehicle_RspClientBreakOut_Params
{
};


struct ASTExtraLionDanceVehicle_OnRep_Energy_Params
{
};


struct ASTExtraLionDanceVehicle_ClientRecycleVehicle_Params
{
};


struct ASTExtraLionDanceVehicle_BreakOut_Params
{
	bool                                               bEnable;                                                  
};


struct USTExtraLionDanceVehMovementCom_GetMaxBrakingDeceleration_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraLionDanceVehMovementCom_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct USTExtraLionDanceVehMovementCom_CalcVelocity_Params
{
	float                                              DeltaTime;                                                
	float                                              Friction;                                                 
	bool                                               bFluid;                                                   
	float                                              BrakingDeceleration;                                      
};


struct USTExtraLionDanceVehMovementCom_CalculateVelocityWithResistance_Params
{
	float                                              DeltaTime;                                                
	bool                                               bFluid;                                                   
};


struct ASTExtraMegaDropVehicle_SetNeedInitWingAvatar_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct ASTExtraMegaDropVehicle_SendControlRotationToServer_Params
{
};


struct ASTExtraMegaDropVehicle_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       
};


struct ASTExtraMegaDropVehicle_GetReplicatedRotator_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct ASTExtraMegaDropVehicle_GetReplicatedLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct USyncControlRotationComponent_StartAttachControlSync_Params
{
	class AController*                                 Controller;                                               
};


struct ASyncOBDataActor_OnRep_TotalPlayersStaticInfo_Params
{
};


struct ASyncOBDataActor_OnRep_RefreshTotalPlayers_Params
{
};


struct ASyncOBDataActor_OnRep_RefreshAirDropBox_Params
{
};


struct ASyncOBDataActor_OnRep_RealTimeAPIListForReplay_Params
{
};


struct ASyncOBDataActor_OnRep_PlayerKillsList_Params
{
};


struct ASyncOBDataActor_OnRep_PlayerInTeamIdxList_Params
{
};


struct ASyncOBDataActor_OnRep_PlayerFiringList_Params
{
};


struct ASyncOBDataActor_OnRep_PlayerDamageList_Params
{
};


struct ASyncOBDataActor_OnRep_PlayerBreathInfoList_Params
{
};


struct ASyncOBDataActor_OnRep_PlayerAssistsList_Params
{
};


struct ASyncOBDataActor_OnRep_AfterMatchAPIListForReplay_Params
{
};


struct ASyncOBDataActor_GetPlayerKillsByPlayerKey_Params
{
	uint32_t                                           InPlayerKey;                                              
	unsigned char                                      ReturnValue;                                              
};


struct ASyncOBDataActor_GetPlayerKeyFromClientSearchMap_Params
{
	uint32_t                                           Index;                                                    
	uint32_t                                           ReturnValue;                                              
};


struct ASyncOBDataActor_GetPlayerInTeamIdxByPlayerKey_Params
{
	uint32_t                                           InPlayerKey;                                              
	int                                                ReturnValue;                                              
};


struct ASyncOBDataActor_GetPlayerInfoInOBByUID_Params
{
	struct FString                                     InUID;                                                    
	struct FPlayerInfoInOB                             ReturnValue;                                              
};


struct ASyncOBDataActor_GetPlayerInfoInOBByPlayerKey_Params
{
	uint32_t                                           InPlayerKey;                                              
	struct FPlayerInfoInOB                             ReturnValue;                                              
};


struct ASyncOBDataActor_GetPlayerInfoInOBByName_Params
{
	struct FString                                     InPlayerName;                                             
	struct FPlayerInfoInOB                             ReturnValue;                                              
};


struct ASyncOBDataActor_GetPlayerDamageByPlayerKey_Params
{
	uint32_t                                           InPlayerKey;                                              
	uint32_t                                           ReturnValue;                                              
};


struct ASyncOBDataActor_GetPlayerAssistsByPlayerKey_Params
{
	uint32_t                                           InPlayerKey;                                              
	unsigned char                                      ReturnValue;                                              
};


struct ASyncOBDataActor_GetNewestAirDropBoxPos_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct ASyncOBDataActor_GetNearPlayerList_Params
{
	TArray<struct FPlayerInfoInOB>                     ReturnValue;                                              
};


struct ASyncOBDataActor_GetIndexFromDSSearchMap_Params
{
	uint32_t                                           InPlayerKey;                                              
	uint32_t                                           ReturnValue;                                              
};


struct ASyncOBDataActor_GetIndexByPlayerKeyOnClient_Params
{
	uint32_t                                           InPlayerKey;                                              
	uint32_t                                           ReturnValue;                                              
};


struct ASyncOBDataActor_GetCustomPlayerNameByPlayerName_Params
{
	struct FString                                     PlayerName;                                               
	struct FString                                     ReturnValue;                                              
};


struct ASyncOBDataActor_GetBreath_Params
{
	uint32_t                                           InPlayerKey;                                              
	float                                              ReturnValue;                                              
};


struct ASyncOBDataActor_GetAirDropBoxList_Params
{
	TArray<struct FAirDropBoxInOb>                     ReturnValue;                                              
};


struct ATPlanSyncOBDataActor_SetTPlanTeamEscapePosiInfo_Params
{
	int                                                TeamID;                                                   
	struct FVector                                     pos;                                                      
};


struct ATPlanSyncOBDataActor_SetTPlanPlayerUnderground_Params
{
	uint32_t                                           PlayerKey;                                                
	bool                                               bIsUnderground;                                           
};


struct ATPlanSyncOBDataActor_SetTPlanPlayerInfoWorth_Params
{
	int                                                TeamID;                                                   
	uint32_t                                           PlayerKey;                                                
	int                                                Worth;                                                    
};


struct ATPlanSyncOBDataActor_SetTPlanPlayerInfoState_Params
{
	int                                                TeamID;                                                   
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      State;                                                    
};


struct ATPlanSyncOBDataActor_SetTPlanPlayerInfoKills_Params
{
	int                                                TeamID;                                                   
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      Kills;                                                    
};


struct ATPlanSyncOBDataActor_OnRep_TeamInfos_Params
{
};


struct ATPlanSyncOBDataActor_OnRep_PlayerUndergroundList_Params
{
};


struct ATPlanSyncOBDataActor_OnRefreshTeamInfos_Params
{
};


struct ATPlanSyncOBDataActor_GetTPlanTeamInfo_Params
{
	int                                                TeamID;                                                   
	struct FTPlanTeamInfo                              ReturnValue;                                              
};


struct ATPlanSyncOBDataActor_GetTPlanPlayerInfo_Params
{
	int                                                TeamID;                                                   
	uint32_t                                           PlayerKey;                                                
	struct FTPlanPlayerInfo                            ReturnValue;                                              
};


struct UTigerDriverAnimInstance_HandlePlayerWeaponStateChanged_Params
{
	TEnumAsByte<EFreshWeaponStateType>                 NewState;                                                 
};


struct UTigerPassengerAnimInstance_HandleOnPreExit_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct UTigerPassengerAnimInstance_BpHandleOnPreExit_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct ATigerVehicle_TryVehicleDrift_Params
{
	bool                                               bStart;                                                   
};


struct ATigerVehicle_StartVehicleDrift_Params
{
	bool                                               bLeftDrift;                                               
};


struct ATigerVehicle_SetDrift_Params
{
	bool                                               bin;                                                      
	bool                                               bLeftDrift;                                               
	EStopDriftCheck                                    StopDriftReason;                                          
};


struct ATigerVehicle_SetCanDrift_Params
{
	bool                                               bin;                                                      
};


struct ATigerVehicle_ServerOnExitDrift_Params
{
	EStopDriftCheck                                    StopDriftReason;                                          
};


struct ATigerVehicle_ServerOnEnterDrift_Params
{
	bool                                               bLeftDrift;                                               
};


struct ATigerVehicle_OnRep_IsDrift_Params
{
	bool                                               bInPre;                                                   
};


struct ATigerVehicle_MulticastOnExitDrift_Params
{
	EStopDriftCheck                                    StopDriftReason;                                          
};


struct ATigerVehicle_MulticastOnEnterDrift_Params
{
	bool                                               bLeftDrift;                                               
};


struct ATigerVehicle_GetTigerRiders_Params
{
	class ASTExtraBaseCharacter*                       OutRider;                                                 
	class ASTExtraBaseCharacter*                       OutPassenger;                                             
};


struct ATigerVehicle_GetTigerMovementComponent_Params
{
	class UTigerVehicleMovementComponent*              ReturnValue;                                              
};


struct ATigerVehicle_EndVehicleDrift_Params
{
	EStopDriftCheck                                    StopDriftReason;                                          
};


struct ATigerVehicle_EnableDriftEndCameraModifier_Params
{
	bool                                               bEnable;                                                  
};


struct ATigerVehicle_CanVehicleDrift_Params
{
	bool                                               ReturnValue;                                              
};


struct UTigerVehicleAnimInstance_HandleOnTigerDriftStart_Params
{
	bool                                               bLeftDrift;                                               
};


struct UTigerVehicleAnimInstance_HandleOnTigerDriftEnd_Params
{
	EStopDriftCheck                                    StopDriftReason;                                          
};


struct UTigerVehicleAnimInstance_GetLuaDebugString_Params
{
	int                                                DebugLevel;                                               
	struct FString                                     ReturnValue;                                              
};


struct UTigerVehicleAnimInstance_BpHandleOnTigerDriftStart_Params
{
	bool                                               bLeftDrift;                                               
};


struct UTigerVehicleAnimInstance_BpHandleOnTigerDriftEnd_Params
{
	EStopDriftCheck                                    StopDriftReason;                                          
};


struct UTigerVehicleMovementComponent_SetDrift_Params
{
	bool                                               bin;                                                      
	EStopDriftCheck                                    StopDriftReason;                                          
};


struct UTigerVehicleMovementComponent_ServerMove_Params
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


struct UTigerVehicleMovementComponent_OnDriftEnd_Params
{
};


struct UTigerVehicleMovementComponent_OnDriftBegin_Params
{
};


struct UTigerVehicleMovementComponent_IsInDriftProtectTime_Params
{
	bool                                               ReturnValue;                                              
};


struct UTigerVehicleMovementComponent_GetWalkingAccResistance_Params
{
	float                                              Speed;                                                    
	float                                              ReturnValue;                                              
};


struct UTigerVehicleMovementComponent_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              
};


struct UTigerVehicleMovementComponent_GetAngularVelocityByCurve_Params
{
	float                                              Speed;                                                    
	bool                                               AsForce;                                                  
	float                                              ReturnValue;                                              
};


struct UTigerVehicleMovementComponent_DealWithCustomAction_Params
{
	float                                              DeltaTime;                                                
};


struct UTigerVehicleMovementComponent_CheckCanStopDrift_Params
{
	EStopDriftCheck                                    InCheck;                                                  
};


struct ATitan_StopAllAnimations_Params
{
	bool                                               bStop;                                                    
};


struct ATitan_SetTitanMaxWalkSpeed_Params
{
	float                                              NewSpeed;                                                 
};


struct ATitan_ServerSetTitanMaxWalkSpeed_Params
{
	float                                              NewSpeed;                                                 
};


struct ATitan_ResetStunDamageAccumulate_Params
{
};


struct ATitan_ProcessRespawnAnimation_Params
{
	bool                                               bRespawn;                                                 
};


struct ATitan_OnRep_IsNearExpiration_Params
{
};


struct ATitan_OnRep_HideInfo_Params
{
};


struct ATitan_MulticastOnTakeMeleeDamage_Params
{
};


struct ATitan_LuaOnRepHideInfo_Params
{
};


struct ATitan_HandleOnClientExitVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ATitan_HandleOnClientEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct ATitan_BpOnTitanStun_Params
{
	float                                              DamageAmount;                                             
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
};


struct ATitan_BpOnShootTitanWeakPoint_Params
{
	float                                              DamageAmount;                                             
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
};


struct ATitan_AkUpdateGameObjectPosition_Params
{
};


struct UTitanAnimInstance_StopTitanMontage_Params
{
	struct FName                                       InGroupName;                                              
	float                                              BlendOutTime;                                             
};


struct UTitanAnimInstance_RequestTurn_Params
{
	float                                              InRootBoneMeshYawDelta;                                   
};


struct UTitanAnimInstance_PlayTitanMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
	float                                              PlayRate;                                                 
};


struct UTitanAnimInstance_OnTitanPlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
};


struct UTitanAnimInstance_OnTitanEnterState_Params
{
	EBioVehicleState                                   NewState;                                                 
};


struct UTitanAnimInstance_OnTakeMeleeDamage_Params
{
};


struct UTitanAnimInstance_GetLocomotionType_Params
{
	ETitanLocomotionType                               ReturnValue;                                              
};


struct UTitanAnimInstance_GetActivedMontageNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UTitanAnimInstance_CanLockFoot_Params
{
	bool                                               ReturnValue;                                              
};


struct UTitanAnimInstance_BpRequestTurn_Params
{
	float                                              InRootBoneMeshYawDelta;                                   
};


struct UTitanAnimInstance_BpOnTitanPlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
};


struct UTitanAnimInstance_BpOnTitanEnterState_Params
{
	EBioVehicleState                                   NewState;                                                 
};


struct UTitanAnimInstance_BpOnTakeMeleeDamage_Params
{
};


struct UTitanAnimInstance_BindDelegate_Params
{
};


struct UTitanMovementComponent_TryResolveTitanPenetration_Params
{
	struct FResolvePenetrationParams                   InParam;                                                  
	bool                                               ReturnValue;                                              
};


struct UTitanMovementComponent_OnRep_OverrideMaxForwardSpeed_Params
{
};


struct UTitanMovementComponent_OnRep_OverrideMaxBackwardSpeed_Params
{
};


struct UTitanPassengerAnimInstance_OnTitanTurn_Params
{
	float                                              DeltaAngle;                                               
};


struct UTitanPassengerAnimInstance_BpOnTitanTurn_Params
{
	float                                              DeltaAngle;                                               
};


struct UTitanSeatComponent_OnTitanLeaveState_Params
{
	EBioVehicleState                                   InState;                                                  
};


struct UTitanSeatComponent_OnTitanEnterState_Params
{
	EBioVehicleState                                   InState;                                                  
};


struct UTitanSeatComponent_BindDelegate_Params
{
};


struct UMontagePauseFrameSetting_GetPauseFrameData_Params
{
	class UAnimMontage*                                PlayingMontage;                                           
	struct FAttackPauseFrameData                       OutPauseFrameData;                                        
	bool                                               ReturnValue;                                              
};


struct UTransformerAnimInstance_StopTransformerMontage_Params
{
	struct FName                                       InGroupName;                                              
	float                                              BlendOutTime;                                             
};


struct UTransformerAnimInstance_ResetOffsetRootBoneNode_Params
{
	bool                                               ReturnValue;                                              
};


struct UTransformerAnimInstance_RequestTurn_Params
{
	float                                              InRootBoneMeshYawDelta;                                   
};


struct UTransformerAnimInstance_PlayTransformerMontage_Params
{
	class UAnimMontage*                                Montage;                                                  
	float                                              PlayRate;                                                 
};


struct UTransformerAnimInstance_OnVehicleTransform_Params
{
	class ASTExtraVehicleBase*                         Form;                                                     
	ETransformState                                    preState;                                                 
	ETransformState                                    CurrentState;                                             
};


struct UTransformerAnimInstance_OnTriggerStop_Params
{
};


struct UTransformerAnimInstance_OnTriggerMove_Params
{
};


struct UTransformerAnimInstance_OnTakeMeleeDamage_Params
{
};


struct UTransformerAnimInstance_GetBestStopSequence_Params
{
	struct FMotionSearchResult                         OutResult;                                                
	bool                                               ReturnValue;                                              
};


struct UTransformerAnimInstance_GetActivedMontageNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UTransformerAnimInstance_BpRequestTurn_Params
{
	float                                              InRootBoneMeshYawDelta;                                   
};


struct UTransformerAnimInstance_BpOnVehicleTransform_Params
{
	class ASTExtraVehicleBase*                         Form;                                                     
	ETransformState                                    preState;                                                 
	ETransformState                                    CurrentState;                                             
};


struct UTransformerAnimInstance_BpOnTakeMeleeDamage_Params
{
};


struct UTransformerVehicleLoopAudio_Play_Params
{
};


struct UTransformerVehicleLoopAudio_CanPlay_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleAudioBoost_OnVehicleBoostChanged_Params
{
	bool                                               bInBoost;                                                 
};


struct UTransformerAudioTransformToVehicle_OnVehicleTransform_Params
{
	class ASTExtraVehicleBase*                         Form;                                                     
	ETransformState                                    preState;                                                 
	ETransformState                                    CurrentState;                                             
};


struct UTransformerAudioTransformToMecha_OnVehicleTransform_Params
{
	class ASTExtraVehicleBase*                         Form;                                                     
	ETransformState                                    preState;                                                 
	ETransformState                                    CurrentState;                                             
};


struct UVehicleAudioFireVehicleWeapon_OnFireVehicleWeaponOnSeat_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	int                                                SeatIdx;                                                  
};


struct UVehicleOnTransformerProminence_OnVehicleBeginPlay_Params
{
	class ASTExtraVehicleBase*                         Vehicle;                                                  
};


struct UVehicleOnPlayerFirstEnterVehicle_OnPlayerEnterVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct UTransformerMovementComponent_StartCurveMoving_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UTransformerMovementComponent_ShouldOptimizeTick_Params
{
	bool                                               ReturnValue;                                              
};


struct UTransformerMovementComponent_ServerRequestCurveMove_Params
{
	int                                                CurveMoveIndex;                                           
	struct FVector                                     DirX;                                                     
	struct FVector                                     pos;                                                      
};


struct UTransformerMovementComponent_RequestCurveMove_Params
{
	struct FName                                       RequestMoveName;                                          
	struct FVector                                     DirX;                                                     
	struct FVector                                     pos;                                                      
	bool                                               ReturnValue;                                              
};


struct UTransformerMovementComponent_OnRep_OverrideMaxForwardSpeed_Params
{
};


struct UTransformerMovementComponent_OnRep_OverrideMaxBackwardSpeed_Params
{
};


struct UTransformerMovementComponent_OnRep_NetCurveMovingData_Params
{
};


struct UTransformerMovementComponent_HasContinuousMove_Params
{
	bool                                               ReturnValue;                                              
};


struct UTransformerMovementComponent_EndCurveMoving_Params
{
};


struct UTransformerSpringArmComponent_AutoAdaptToScreenAspectRatio_Params
{
};


struct ATransformerVehicle_OnRep_TransformerStates_Params
{
	uint32_t                                           OldStates;                                                
};


struct ATransformerVehicle_LeaveState_Params
{
	ETransformerState                                  State;                                                    
};


struct ATransformerVehicle_InterruptState_Params
{
	ETransformerState                                  State;                                                    
	ETransformerState                                  InterruptBy;                                              
};


struct ATransformerVehicle_HasState_Params
{
	ETransformerState                                  State;                                                    
	bool                                               ReturnValue;                                              
};


struct ATransformerVehicle_HasAnyState_Params
{
	TArray<ETransformerState>                          States;                                                   
	bool                                               ReturnValue;                                              
};


struct ATransformerVehicle_GetTransformerMovement_Params
{
	class UTransformerMovementComponent*               ReturnValue;                                              
};


struct ATransformerVehicle_EnterStateForDuration_Params
{
	ETransformerState                                  State;                                                    
	float                                              Duration;                                                 
	bool                                               ReturnValue;                                              
};


struct ATransformerVehicle_EnterState_Params
{
	ETransformerState                                  State;                                                    
	bool                                               ReturnValue;                                              
};


struct ATransformerVehicle_EnableMechaResolvePenetration_Params
{
	bool                                               bEnable;                                                  
};


struct ATransformerVehicle_ApplyVehicleImpulse_Params
{
	struct FVector                                     ApplyImpulse;                                             
	bool                                               bVelocityChange;                                          
};


struct ATransformerVehicle_AllowState_Params
{
	ETransformerState                                  State;                                                    
	bool                                               ReturnValue;                                              
};


struct UTRexVehicleDamageComponent_HandleFootOverlapVehicle_Params
{
	class ASTExtraVehicleBase*                         OverlappedVehicle;                                        
	class UShapeComponent*                             DamageCollision;                                          
	struct FOverlapResult                              OverlapResult;                                            
};


struct UTRexVehicleDamageComponent_HandleFootOverlapCharacter_Params
{
	class ASTExtraBaseCharacter*                       OverlappedCharacter;                                      
	class UShapeComponent*                             DamageCollision;                                          
	struct FOverlapResult                              OverlapResult;                                            
};


struct UTweenAnimComponent_StopTween_Params
{
	int                                                Handle;                                                   
	bool                                               bGotoEnd;                                                 
	bool                                               ReturnValue;                                              
};


struct UTweenAnimComponent_StopAllTweens_Params
{
	bool                                               bGotoEnd;                                                 
};


struct UTweenAnimComponent_ReverseTween_Params
{
	int                                                Handle;                                                   
	float                                              OutEstimatedTime;                                         
	bool                                               ReturnValue;                                              
};


struct UTweenAnimComponent_ResumeTween_Params
{
	int                                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UTweenAnimComponent_ResumeAllTweens_Params
{
};


struct UTweenAnimComponent_RestartTween_Params
{
	int                                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UTweenAnimComponent_RestartAllTweens_Params
{
};


struct UTweenAnimComponent_PlayScale_Params
{
	struct FVector                                     ToOrBy;                                                   
	float                                              Duration;                                                 
	ETweenAnimEase                                     Ease;                                                     
	class USceneComponent*                             TargetComp;                                               
	bool                                               bBy;                                                      
	ETweenAnimLoop                                     Loop;                                                     
	int                                                LoopCount;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	bool                                               bAutoDestroy;                                             
	int                                                ReturnValue;                                              
};


struct UTweenAnimComponent_PlayRotate_Params
{
	struct FRotator                                    ToOrBy;                                                   
	float                                              Duration;                                                 
	ETweenAnimEase                                     Ease;                                                     
	class USceneComponent*                             TargetComp;                                               
	bool                                               bBy;                                                      
	ETweenAnimLoop                                     Loop;                                                     
	int                                                LoopCount;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	bool                                               bAutoDestroy;                                             
	int                                                ReturnValue;                                              
};


struct UTweenAnimComponent_PlayMove_Params
{
	struct FVector                                     ToOrBy;                                                   
	float                                              Duration;                                                 
	ETweenAnimEase                                     Ease;                                                     
	class USceneComponent*                             TargetComp;                                               
	bool                                               bBy;                                                      
	ETweenAnimLoop                                     Loop;                                                     
	int                                                LoopCount;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	bool                                               bAutoDestroy;                                             
	int                                                ReturnValue;                                              
};


struct UTweenAnimComponent_PlayMaterialVector_Params
{
	class UPrimitiveComponent*                         TargetMeshComp;                                           
	int                                                ElementIndex;                                             
	struct FName                                       ParamName;                                                
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenAnimEase                                     Ease;                                                     
	ETweenAnimLoop                                     Loop;                                                     
	int                                                LoopCount;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	bool                                               bAutoDestroy;                                             
	int                                                ReturnValue;                                              
};


struct UTweenAnimComponent_PlayMaterialScalar_Params
{
	class UPrimitiveComponent*                         TargetMeshComp;                                           
	int                                                ElementIndex;                                             
	struct FName                                       ParamName;                                                
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenAnimEase                                     Ease;                                                     
	ETweenAnimLoop                                     Loop;                                                     
	int                                                LoopCount;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	bool                                               bAutoDestroy;                                             
	int                                                ReturnValue;                                              
};


struct UTweenAnimComponent_PlayCustomFloat_Params
{
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenAnimEase                                     Ease;                                                     
	ETweenAnimLoop                                     Loop;                                                     
	int                                                LoopCount;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	bool                                               bAutoDestroy;                                             
	int                                                ReturnValue;                                              
};


struct UTweenAnimComponent_PauseTween_Params
{
	int                                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UTweenAnimComponent_PauseAllTweens_Params
{
};


struct UTweenAnimComponent_IsTweenPaused_Params
{
	int                                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UTweenAnimComponent_IsTweenFinished_Params
{
	int                                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UTweenAnimComponent_IsTweenActive_Params
{
	int                                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UTweenAnimComponent_GetActiveTweenCount_Params
{
	int                                                ReturnValue;                                              
};


struct UTyrannosaurusRexAnimInstance_ResetStartMoving_Params
{
};


struct UUAERotatingMovementComponent_SetRotationToTarget_Params
{
	struct FRotator                                    InTargetRotation;                                         
	float                                              MoveSeconds;                                              
	struct FVector                                     TargetLocation;                                           
};


struct UUAERotatingMovementComponent_FaceToTarget_Params
{
	class ASTExtraBaseCharacter*                       InTargetCharacter;                                        
};


struct UUAERotatingMovementComponent_EnableRotationToTarget_Params
{
	bool                                               bEnable;                                                  
};


struct UUAERotatingMovementComponent_EnableRotation_Params
{
	bool                                               bEnable;                                                  
};


struct UUAESkillAction_ActionWithEventWindow_OnSkillEvent_Params
{
	int                                                InSkillID;                                                
	TEnumAsByte<EUTSkillEventType>                     InEventType;                                              
};


struct UUAESkillAction_ActorJump_OnActorLanded_Params
{
	struct FHitResult                                  InHitResult;                                              
};


struct UUAESkillAction_ActorJump_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UUAESkillAction_ActorMove_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UUAESkillAction_ActorMoveToLocation_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UUAESkillAction_BindDelegate_OnDelegateBindCallback_Params
{
};


struct UUAESkillAction_CharMoveByPath_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UUAESkillAction_ConsumeHandleItem_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUAESkillAction_EnableMove_UndoAction_Internal_Params
{
};


struct UUAESkillAction_EnableMove_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAESkillAction_FaceTarget_OnFaceActionEnd_Params
{
	class UUTSkillManagerComponent*                    SkillMgr;                                                 
};


struct UUAESkillAction_FlySprint_OnFlyMoveSprintStop_Params
{
};


struct UUAESkillAction_FollowMoveActor_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UUAESkillAction_Invincible_UndoAction_Internal_Params
{
};


struct UUAESkillAction_Invincible_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAESkillAction_JumpByStages_Rising_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAESkillAction_JumpByStages_OnActorLanded_Params
{
	struct FHitResult                                  InHitResult;                                              
};


struct UUAESkillAction_JumpByStages_Hovering_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAESkillAction_JumpByStages_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UUAESkillAction_JumpByStages_FreeFalling_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAESkillAction_JumpByStages_Diving_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAESkillAction_JumpPhaseWithState_HandleChangeCurrentUsingWeapon_Params
{
	TEnumAsByte<ESurviveWeaponPropSlot>                TargetChangeSlot;                                         
};


struct UUAESkillAction_LaunchMove_OnLaunchMoveBlocked_Params
{
	class ASTExtraBaseCharacter*                       SelfRef;                                                  
	struct FHitResult                                  HitResult;                                                
};


struct UUAESkillAction_Log_UndoAction_Internal_Params
{
};


struct UUAESkillAction_MarkCurrentUseWeapon_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAESkillAction_MoveToRelativeLocation_HandleOnActorHit_Params
{
	class AActor*                                      SelfActor;                                                
	class AActor*                                      OtherActor;                                               
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UUAESkillAction_PlayAvatarAction_OnAsyncLoadHandlesDone_Params
{
	TArray<struct FItemDefineID>                       DefineIDList;                                             
	TArray<class UBattleItemHandleBase*>               AvatarHandles;                                            
	class UActorComponent*                             SkillManagerComponent;                                    
};


struct UUAESkillAction_PlayMontage_HandleOnAvatarEquipped_Params
{
	EAvatarSlotType                                    SlotType;                                                 
	bool                                               IsEquipped;                                               
	int                                                ItemId;                                                   
};


struct UUAESkillAction_PlayMontage_IsArmed_OnAsyncLoadAnimResFinished_Params
{
	struct FPlayMontageAsyncloadParams                 LoadParams;                                               
};


struct UUAESkillAction_PlayMontage_Pose_IsArmed_OnAsyncLoadAnimResFinished_Params
{
	struct FPlayMontageAsyncloadParams                 LoadParams;                                               
};


struct UAESkillAction_PlayMontageWithEndAction_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UUAESkillAction_PreloadDependResource_OnAsyncLoadFinished_Params
{
	class UActorComponent*                             CurComponent;                                             
};


struct UUAESkillAction_SetCameraData_ResetCameraData_Params
{
	class UActorComponent*                             NewOwnerActorComponent;                                   
};


struct UUAESkillAction_SetVehicleCameraData_ResetCameraData_Params
{
	class UActorComponent*                             NewOwnerActorComponent;                                   
};


struct UUAESkillAction_UIMessage_UndoAction_Internal_Params
{
};


struct UUAESkillAction_UIMessage_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAESkillAction_UIMessage_GetOwernPawnController_Params
{
	class ASTExtraPlayerController*                    ReturnValue;                                              
};


struct UUAESkillAction_UpdateSyncBlackboardV_OnReceiveUpdateSyncBlackboardV_Params
{
	class UUTSkillManagerComponent*                    SkillMgr;                                                 
	int                                                nSkillID;                                                 
};


struct AUAVDeer_SetRushState_Params
{
	bool                                               bState;                                                   
};


struct AUAVDeer_HandleDeerDestroy_Params
{
};


struct AUAVGodView_ServerEnter_Params
{
	class UVehicleUserComponent*                       InVehicleUserComp;                                        
};


struct AUAVGodView_SendToServerClientInitOK_Params
{
};


struct AUAVGodView_OnRep_BornLoc_Params
{
};


struct AUAVGodView_OnBornLocUpdateEvent_Params
{
};


struct AUAVGodView_GetDistanceLimitForBornLoc_Params
{
	float                                              ReturnValue;                                              
};


struct AUAVGodView_DistanceToBornLocForSquared2D_Params
{
	struct FVector                                     InLocation;                                               
	float                                              ReturnValue;                                              
};


struct UUAVGodViewMovementComponent_IsCurveMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAVGodViewMovementComponent_CalculateFlyingAcceleration_Params
{
	float                                              DeltaTime;                                                
};


struct AUVVine_StartRushMove_Params
{
	bool                                               bIsRush;                                                  
};


struct AUVVine_StarCustomRush_Params
{
	bool                                               bIsRush;                                                  
	struct FVector                                     Location;                                                 
};


struct AUVVine_OnRep_CurrentRushState_Params
{
};


struct UUTSkillAppearance_AddParticle_UndoAction_Internal_Params
{
};


struct UUTSkillAppearance_AddParticle_Reset_Internal_Params
{
};


struct UUTSkillAppearance_AddParticle_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      
};


struct UUTSkillAppearance_ParticleSystem_StopParticleSystem_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillAppearance_ParticleSystem_RealDoActionWrapper_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillAppearance_ParticleSystem_OnSpawnParticleSystem_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  
	bool                                               bHurtParticleSystem;                                      
};


struct UUTSkillAppearance_ParticleSystem_OnHurtAppearanceParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      
};


struct UUTSkillAppearance_ParticleSystem_OnAppearanceParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      
};


struct UUTSkillAppearance_ParticleSystem_GetPlayRateScale_Params
{
	float                                              ReturnValue;                                              
};


struct UUTSkillAppearance_RemoveAllParticle_UndoAction_Internal_Params
{
};


struct UUTSkillAppearance_RemoveAllParticle_Reset_Internal_Params
{
};


struct UUTSkillAppearance_RemoveAllParticle_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillAppearance_RomoveParticle_UndoAction_Internal_Params
{
};


struct UUTSkillAppearance_RomoveParticle_Reset_Internal_Params
{
};


struct UUTSkillAppearance_RomoveParticle_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillAppearance_SimpleParticleSystem_RealDoActionWrapper_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillAppearance_SimpleParticleSystem_HandleCreateParticleFail_Params
{
};


struct UUTSkillAppearance_SkillWarning_UndoAction_Internal_Params
{
};


struct UVehicleAttachmentComponent_TryToAttachOtherVehicle_Params
{
};


struct UVehicleAttachmentComponent_SetAttachState_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UVehicleAttachmentComponent_ServerDoAttachVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UVehicleAttachmentComponent_OnRep_AttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         PrevVehicle;                                              
};


struct UVehicleAttachmentComponent_GetAttachState_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleAttachmentComponent_GetAttachedVehicle_Params
{
	class ASTExtraVehicleBase*                         ReturnValue;                                              
};


struct UVehicleAttachmentComponent_DoAttachVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	bool                                               ReturnValue;                                              
};


struct UVehicleAttachmentComponent_CheckSurroundingVehicle_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleAttachmentComponent_CanInteractedByOther_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleAttachmentComponent_CanAttachVehicle_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleAttachmentComponent_CallServerToAttach_Params
{
};


struct UVehicleAttachmentComponent_BroadcastClientVehicleAttachment_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UVehicleAvatarComponentAircraft_CollectLoadRes_Params
{
	TArray<struct FSoftObjectPath>                     AssetRefArray;                                            
};


struct UVehicleDistanceMatchingAbility_HandleOnHandBrakeRateChanged_Params
{
	float                                              NewRate;                                                  
};


struct UVehicleHitBioVHComponent_UpdateMuteVehicleShapes_Params
{
	float                                              DeltaTime;                                                
};


struct UVehicleHitBioVHComponent_ToggleVehiclePhysics_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	bool                                               bOpen;                                                    
};


struct UVehicleHitBioVHComponent_ServerRPC_KnockAwayCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           
	int                                                BlowID;                                                   
	struct FVector_NetQuantize10                       LaunchVel;                                                
	struct FHitResult                                  Hit;                                                      
	class UPrimitiveComponent*                         SelfComp;                                                 
};


struct UVehicleHitBioVHComponent_RegisterMuteVehicleShapes_Params
{
};


struct UVehicleHitBioVHComponent_PauseOrResumeHitCharacter_Params
{
	bool                                               IsPause;                                                  
};


struct UVehicleHitBioVHComponent_OnRep_RepDynamicTriggerShape_Params
{
	struct FDynamicTriggerShape                        OldValue;                                                 
};


struct UVehicleHitBioVHComponent_OnPhysVHHitBioTriggered_Params
{
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct UVehicleHitBioVHComponent_OnMutePhysVehicleTriggered_Params
{
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct UVehicleHitBioVHComponent_OnBioHitPhysVHTriggered_Params
{
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct UVehicleHitBioVHComponent_MulticastRPC_PlayHitEffect_Params
{
	struct FVector                                     HitPoint;                                                 
	class APawn*                                       HitPawn;                                                  
};


struct UVehicleHitBioVHComponent_MulticastRPC_MuteVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	bool                                               bMute;                                                    
};


struct UVehicleHitBioVHComponent_MulticastRPC_KnockAwayVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	struct FVector                                     Vel;                                                      
};


struct UVehicleHitBioVHComponent_MulticastRPC_KnockAwayBioVehicle_Params
{
	class ABioVehicleBase*                             OtherBioVehicle;                                          
	struct FVector                                     Vel;                                                      
	struct FVector                                     HitPoint;                                                 
};


struct UVehicleHitBioVHComponent_KnockAwayVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UVehicleHitBioVHComponent_KnockAwayBioVehicle_Params
{
	class ABioVehicleBase*                             OtherBioVehicle;                                          
	class UPrimitiveComponent*                         SelfComp;                                                 
	struct FHitResult                                  InHit;                                                    
};


struct UVehicleHitBioVHComponent_HandleCrossHairEffect_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         
	class APawn*                                       HitPawn;                                                  
};


struct UVehicleHitBioVHComponent_GetTriggerForVehicle_Params
{
	class UCapsuleComponent*                           ReturnValue;                                              
};


struct UVehicleHitBioVHComponent_CommonQueryHitPawn_Params
{
	float                                              DeltaTime;                                                
};


struct UVehicleHitBioVHComponent_CanHitCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           
	class UPrimitiveComponent*                         SelfComp;                                                 
	bool                                               ReturnValue;                                              
};


struct UVehicleHitBioVHComponent_BpOnVehicleDamageOtherVehicle_Params
{
	class ASTExtraVehicleBase*                         Character;                                                
};


struct UVehicleHitBioVHComponent_BpOnVehicleDamageCharacter_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct UVehicleHitBioVHComponent_BPCheckBioCanImpulsedBy_Params
{
	class ASTExtraVehicleBase*                         PhysVehicle;                                              
	bool                                               ReturnValue;                                              
};


struct UVehicleHitBioVHComponent_BPCanHitBioVehicle_Params
{
	class ABioVehicleBase*                             OtherBioVehicle;                                          
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};


struct AVehicleLODlimitActor_OnVehicleEndPlay_Params
{
	class ASTExtraVehicleBase*                         Vehicle;                                                  
};


struct AVehicleLODlimitActor_OnVehicleBeginPlay_Params
{
	class ASTExtraVehicleBase*                         Vehicle;                                                  
};


struct AVehicleLODlimitActor_OnUpdateSeatGUI_Params
{
};


struct UVehicleNitroBoostComponent_UpdatePassengerCameraData_Params
{
	float                                              ElapsedTime;                                              
};


struct UVehicleNitroBoostComponent_UpdateNitroBoostCamera_Params
{
	float                                              ElapsedTime;                                              
};


struct UVehicleNitroBoostComponent_UpdateNitroAppearance_Params
{
	bool                                               bEnable;                                                  
};


struct UVehicleNitroBoostComponent_UpdateCameraShake_Params
{
	bool                                               bEnable;                                                  
	float                                              ElapsedTime;                                              
};


struct UVehicleNitroBoostComponent_UpdateCameraEffect_Params
{
	bool                                               bEnable;                                                  
	float                                              ElapsedTime;                                              
};


struct UVehicleNitroBoostComponent_TickProcessInput_Params
{
};


struct UVehicleNitroBoostComponent_TickGainNitroEnergy_Params
{
	float                                              DeltaTime;                                                
};


struct UVehicleNitroBoostComponent_SwitchPassengerCameraData_Params
{
	bool                                               bEnable;                                                  
	class ASTExtraPlayerCharacter*                     InChar;                                                   
};


struct UVehicleNitroBoostComponent_SwitchNitroBoostDriftSetUp_Params
{
	bool                                               bEnable;                                                  
};


struct UVehicleNitroBoostComponent_SwitchNitroBoostCamera_Params
{
	bool                                               bEnable;                                                  
};


struct UVehicleNitroBoostComponent_SwitchAllPassengerCameraData_Params
{
	bool                                               bEnable;                                                  
};


struct UVehicleNitroBoostComponent_StartNitroBoostInternal_Params
{
};


struct UVehicleNitroBoostComponent_StartNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_ShouldEndNitroBoost_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleNitroBoostComponent_SetNitrogen_Params
{
	float                                              InNitrogen;                                               
};


struct UVehicleNitroBoostComponent_ServerRPC_StartNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_ServerRPC_EndNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_PerformNitroBoost_Params
{
	float                                              ElapsedTime;                                              
	float                                              DeltaTime;                                                
};


struct UVehicleNitroBoostComponent_OnVisualAssetLoaded_Params
{
};


struct UVehicleNitroBoostComponent_OnStartNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_OnRep_NetNitrogen_Params
{
};


struct UVehicleNitroBoostComponent_OnRep_NetNitroBoostState_Params
{
};


struct UVehicleNitroBoostComponent_OnRep_EnableNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_OnNitroBoostTick_Params
{
};


struct UVehicleNitroBoostComponent_OnEndNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_OnClientExitFromVehicle_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	ESTExtraVehicleSeatType                            SeatType;                                                 
};


struct UVehicleNitroBoostComponent_OnClientDriverChange_Params
{
	class ASTExtraBaseCharacter*                       LastDriver;                                               
	class ASTExtraBaseCharacter*                       NewDriver;                                                
};


struct UVehicleNitroBoostComponent_LuaShouldEndNitroBoost_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleNitroBoostComponent_LuaOnVisualAssetLoaded_Params
{
};


struct UVehicleNitroBoostComponent_LuaOnStartNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_LuaOnNitroBoostEnabled_Params
{
	bool                                               bEnable;                                                  
};


struct UVehicleNitroBoostComponent_LuaOnEndNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_LuaCheckCanNitroBoost_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleNitroBoostComponent_IsNitroBoosting_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleNitroBoostComponent_HasNitroBoostAbility_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleNitroBoostComponent_FailedNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_EndNitroBoost_Params
{
};


struct UVehicleNitroBoostComponent_EnableNitroBoostAbility_Params
{
	bool                                               bEnable;                                                  
};


struct UVehicleNitroBoostComponent_ConstructNitroBoostDriftSetup_Params
{
};


struct UVehicleNitroBoostComponent_CheckCanNitroBoost_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleNitroBoostComponent_CanEnableNitroBoost_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleNitroBoostComponent_CacheNitroBoostPowerData_Params
{
};


struct UVehicleSettings_ValidateCustomShapeTypes_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UVehicleSettings_LoadCustomVehicleTypes_Params
{
};


struct UVehicleSettings_LoadCustomShapeTypes_Params
{
};


struct UVehicleSyncComponent_Hover_SendServerHoverMoveToClient_Params
{
	float                                              ServerAcceleration;                                       
	float                                              ServerMaxSpeed;                                           
	float                                              ServerMaxAcceleration;                                    
};


struct UVehicleSyncComponent_Hover_Correct_Params
{
	bool                                               bIsSnap;                                                  
	bool                                               bPlayerChannel;                                           
	float                                              ZAdjustValue;                                             
};


struct UVenomArmAnimInstance_UnBindDelegate_Params
{
};


struct UVenomArmAnimInstance_HandleOnOwnerPlayerPlayMontage_Params
{
	class UAnimMontage*                                PlayedMontage;                                            
};


struct UVenomArmAnimInstance_HandleOnOwnerPlayerEndMontage_Params
{
	class UAnimMontage*                                EndedMontage;                                             
	bool                                               bInterrupted;                                             
};


struct UVenomArmAnimInstance_BpOnTargetLocationFound_Params
{
};


struct UVenomArmAnimInstance_BpHandleOnPlayerPullObjEnd_Params
{
};


struct UVenomArmAnimInstance_BpHandleOnPlayerPullObj_Params
{
};


struct UVenomArmAnimInstance_BpHandleOnPlayerCatchObjEnd_Params
{
};


struct UVenomArmAnimInstance_BpHandleOnPlayerCatchObj_Params
{
};


struct UVenomArmAnimInstance_BpHandleOnPlayerCatchFlyEnd_Params
{
};


struct UVenomArmAnimInstance_BpHandleOnPlayerCatchFly_Params
{
};


struct UVenomArmAnimInstance_BpHandleOnPlayerAirCatchFlyEnd_Params
{
};


struct UVenomArmAnimInstance_BpHandleOnPlayerAirCatchFly_Params
{
};


struct UVenomArmAnimInstance_BindDelegate_Params
{
};


struct UVenomTwoArmAnimInstance_DoIKTrace_Params
{
};


struct UVisualDebugComponent_StopContinuous_Params
{
	int                                                TaskID;                                                   
};


struct UVisualDebugComponent_ServerRejectNavMeshDebugTile_Params
{
	uint32_t                                           SessionID;                                                
	uint32_t                                           WindowRevision;                                           
	int                                                TileX;                                                    
	int                                                TileY;                                                    
	uint32_t                                           Fingerprint;                                              
};


struct UVisualDebugComponent_ServerCompleteNavMeshDebugTile_Params
{
	uint32_t                                           SessionID;                                                
	uint32_t                                           WindowRevision;                                           
	int                                                TileX;                                                    
	int                                                TileY;                                                    
	uint32_t                                           Fingerprint;                                              
};


struct UVisualDebugComponent_ServerAckNavMeshDebugPacket_Params
{
	uint32_t                                           SessionID;                                                
	uint32_t                                           Sequence;                                                 
};


struct UVisualDebugComponent_RPC_DrawDebug_Text_Params
{
	struct FDrawShape_Text                             Text;                                                     
};


struct UVisualDebugComponent_RPC_DrawDebug_StopMultiShapes_Params
{
	int                                                TaskID;                                                   
};


struct UVisualDebugComponent_RPC_DrawDebug_Sphere_Params
{
	struct FDrawShape_Sphere                           Sphere;                                                   
};


struct UVisualDebugComponent_RPC_DrawDebug_MultiShapes_Params
{
	TArray<struct FDrawShape_Sphere>                   Spheres;                                                  
	TArray<struct FDrawShape_Line>                     Lines;                                                    
};


struct UVisualDebugComponent_RPC_DrawDebug_Line_Params
{
	struct FDrawShape_Line                             Line;                                                     
};


struct UVisualDebugComponent_RPC_DrawDebug_Cylinder_Params
{
	struct FDrawShape_Cylinder                         Cylinder;                                                 
};


struct UVisualDebugComponent_RPC_DrawDebug_Capsule_Params
{
	struct FDrawShape_Capsule                          Capsule;                                                  
};


struct UVisualDebugComponent_RPC_DrawDebug_Box_Params
{
	struct FDrawShape_Box                              Box;                                                      
};


struct UVisualDebugComponent_OnRep_VDDebugFlag_Params
{
};


struct UVisualDebugComponent_OnRep_RepDebugInfoString_Params
{
};


struct UVisualDebugComponent_OnRep_BTDebugSnapshot_Params
{
};


struct UVisualDebugComponent_NetMulticast_DrawDebug_Sphere_Params
{
	struct FDrawShape_Sphere                           Sphere;                                                   
};


struct UVisualDebugComponent_NetMulticast_DrawDebug_Line_Params
{
	struct FDrawShape_Line                             Line;                                                     
};


struct UVisualDebugComponent_NetMulticast_DrawDebug_Cylinder_Params
{
	struct FDrawShape_Cylinder                         Cylinder;                                                 
};


struct UVisualDebugComponent_NetMulticast_DrawDebug_Capsule_Params
{
	struct FDrawShape_Capsule                          Capsule;                                                  
};


struct UVisualDebugComponent_NetMulticast_DrawDebug_Box_Params
{
	struct FDrawShape_Box                              Box;                                                      
};


struct UVisualDebugComponent_MarkContinuousEnd_Params
{
};


struct UVisualDebugComponent_MarkContinuousBegin_Params
{
	int                                                ReturnValue;                                              
};


struct UVisualDebugComponent_DrawString_Params
{
	struct FVector                                     TextLocation;                                             
	struct FString                                     Text;                                                     
	class AActor*                                      TestBaseActor;                                            
	struct FColor                                      TextColor;                                                
	float                                              Duration;                                                 
};


struct UVisualDebugComponent_DrawSphere_Params
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	struct FColor                                      Color;                                                    
	float                                              LifeTime;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugComponent_DrawLine_Params
{
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FColor                                      Color;                                                    
	float                                              LifeTime;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugComponent_DrawCylinder_Params
{
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	int                                                Segments;                                                 
	struct FColor                                      Color;                                                    
	float                                              LifeTime;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugComponent_DrawCapsule_Params
{
	class APawn*                                       Requester;                                                
	struct FVector                                     Center;                                                   
	float                                              HalfHeight;                                               
	float                                              Radius;                                                   
	struct FQuat                                       Rotation;                                                 
	struct FColor                                      Color;                                                    
	float                                              LifeTime;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugComponent_DrawBox_Params
{
	struct FVector                                     Center;                                                   
	struct FVector                                     Extent;                                                   
	struct FColor                                      Color;                                                    
	struct FRotator                                    Rotation;                                                 
	float                                              LifeTime;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugComponent_ClientUpdateNavMeshDebugWindow_Params
{
	uint32_t                                           SessionID;                                                
	uint32_t                                           WindowRevision;                                           
	int                                                CenterTileX;                                              
	int                                                CenterTileY;                                              
	unsigned char                                      TileRange;                                                
	bool                                               bReset;                                                   
};


struct UVisualDebugComponent_ClientStopNavMeshDebug_Params
{
	uint32_t                                           SessionID;                                                
	uint32_t                                           WindowRevision;                                           
};


struct UVisualDebugComponent_ClientReceiveNavMeshDebugPacket_Params
{
	struct FNavMeshDebugPacket                         Packet;                                                   
};


struct UVisualDebugComponent_ClearDebugInfo_Params
{
	struct FString                                     Key;                                                      
};


struct UVisualDebugComponent_ClearAllDebugInfo_Params
{
};


struct UVisualDebugComponent_AddDebugInfo_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UVisualDebugLibrary_StopDrawContinuous_Params
{
	class APawn*                                       Requester;                                                
	int                                                TaskID;                                                   
};


struct UVisualDebugLibrary_MarkNavMeshDebug_Params
{
	class APawn*                                       Requester;                                                
	struct FName                                       AgentName;                                                
	int                                                TileRange;                                                
	bool                                               bEnable;                                                  
};


struct UVisualDebugLibrary_MarkDebug_Params
{
	class APawn*                                       Requester;                                                
	struct FVDDebugFlag                                flag;                                                     
};


struct UVisualDebugLibrary_MarkContinuousEnd_Params
{
	class APawn*                                       Requester;                                                
};


struct UVisualDebugLibrary_MarkContinuousBegin_Params
{
	class APawn*                                       Requester;                                                
	int                                                ReturnValue;                                              
};


struct UVisualDebugLibrary_FindDebugComponent_Params
{
	class APawn*                                       Requester;                                                
	class UVisualDebugComponent*                       ReturnValue;                                              
};


struct UVisualDebugLibrary_DrawText_Params
{
	class APawn*                                       Requester;                                                
	struct FVector                                     TextLocation;                                             
	struct FString                                     Text;                                                     
	class AActor*                                      TestBaseActor;                                            
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
};


struct UVisualDebugLibrary_DrawSphere_Params
{
	class APawn*                                       Requester;                                                
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	int                                                Segments;                                                 
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugLibrary_DrawLine_Params
{
	class APawn*                                       Requester;                                                
	struct FVector                                     LineStart;                                                
	struct FVector                                     LineEnd;                                                  
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugLibrary_DrawCylinder_Params
{
	class APawn*                                       Requester;                                                
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
	int                                                Segments;                                                 
	struct FColor                                      Color;                                                    
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugLibrary_DrawCapsule_Params
{
	class APawn*                                       Requester;                                                
	struct FVector                                     Center;                                                   
	float                                              HalfHeight;                                               
	float                                              Radius;                                                   
	struct FQuat                                       Rotation;                                                 
	struct FColor                                      Color;                                                    
	float                                              LifeTime;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugLibrary_DrawBox_Params
{
	class APawn*                                       Requester;                                                
	struct FVector                                     Center;                                                   
	struct FVector                                     Extent;                                                   
	struct FColor                                      Color;                                                    
	struct FRotator                                    Rotation;                                                 
	float                                              Duration;                                                 
	float                                              Thickness;                                                
};


struct UVisualDebugLibrary_ClearDebugInfo_Params
{
	class APawn*                                       Requester;                                                
	struct FString                                     Key;                                                      
};


struct UVisualDebugLibrary_ClearAllDebugInfo_Params
{
	class APawn*                                       Requester;                                                
};


struct UVisualDebugLibrary_AddDebugInfo_Params
{
	class APawn*                                       Requester;                                                
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UWaterMoveObj_OnSpecialMoveTypeChanged_Params
{
	ESpecialMovementType                               NewSpecialMoveType;                                       
	ESpecialMovementType                               OldSpecialMoveType;                                       
};


struct UWindowBarrierDataAsset_SetVerboseLog_Params
{
	bool                                               bEnable;                                                  
};


struct UWindowBarrierDataAsset_GetData_Params
{
	class AActor*                                      Actor;                                                    
	struct FWindowBarrierDataList                      ReturnValue;                                              
};


struct UWindowBarrierDataAsset_GetActorBlueprintPathKey_Params
{
	class AActor*                                      Actor;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UZombiesHitVHComponent_ShouldCauseHitDamageToCharacter_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};


struct UZombiesHitVHComponent_OnHitPhysVHTriggered_Params
{
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct UZombiesHitVHComponent_MulticastRPC_PlayHitEffect_Params
{
	struct FVector                                     HitPoint;                                                 
	class APawn*                                       HitPawn;                                                  
};


struct UZombiesHitVHComponent_MulticastRPC_KnockAwayVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
	struct FVector                                     Vel;                                                      
};


struct UZombiesHitVHComponent_MulticastRPC_KnockAwayBioVehicle_Params
{
	class ABioVehicleBase*                             OtherBioVehicle;                                          
	struct FVector                                     Vel;                                                      
	struct FVector                                     HitPoint;                                                 
};


struct UZombiesHitVHComponent_KnockAwayVehicle_Params
{
	class ASTExtraVehicleBase*                         OtherVehicle;                                             
};


struct UZombiesHitVHComponent_KnockAwayCharacter_Params
{
	class ASTExtraBaseCharacter*                       OtherCharacter;                                           
	class UPrimitiveComponent*                         SelfComp;                                                 
	struct FHitResult                                  InHit;                                                    
};


struct UZombiesHitVHComponent_KnockAwayBioVehicle_Params
{
	class ABioVehicleBase*                             OtherBioVehicle;                                          
	class UPrimitiveComponent*                         SelfComp;                                                 
	struct FHitResult                                  InHit;                                                    
};


struct UZombiesHitVHComponent_CommonQueryHitPawn_Params
{
	float                                              DeltaTime;                                                
};


struct UZombiesHitVHComponent_BPCanHitBioVehicle_Params
{
	class ABioVehicleBase*                             OtherBioVehicle;                                          
	struct FHitResult                                  Hit;                                                      
	bool                                               ReturnValue;                                              
};

}

