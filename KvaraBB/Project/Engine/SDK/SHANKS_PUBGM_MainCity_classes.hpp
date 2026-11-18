#pragma once


 
namespace SDK
{






class UCarryBackMCAnimInstance : public UCharacterAnimStateBase
{
public:
	class UBlendSpace*                                 BS_CarryBackMove;                                         
	class UBlendSpace*                                 BS_beCarryBackMove;                                       
	ECarryBackAnimState                                CurrentCarryBackState;                                    
	unsigned char                                      UnknownData00[0x7];                                       
	float                                              CarryBackTimeAccumulator;                                 
	bool                                               bCarryBackState;                                          
	bool                                               bBeCarryBackState;                                        
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                SubStateID;                                               
	unsigned char                                      UnknownData02[0x4];                                       
	class ASTExtraBaseCharacter*                       AttachParentCharacter;                                    
	struct FVector                                     AttachParentPawnMoveVelocity;                             
	struct FVector                                     PreAnimVelocity;                                          
	class USTExtraAnimInstanceBase*                    MainInstance;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.CarryBackMCAnimInstance");
		return pStaticClass;
	}


	void HandlePlayerPoseChange(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose);
};




class UCharLocomotionMCAnimInstance : public UCharacterAnimStateBase
{
public:
	class UBlendSpace*                                 BS_MovementStand;                                         
	class UBlendSpace*                                 BS_MovementCrouch;                                        
	class UBlendSpace*                                 BS_MovementProne;                                         
	class UBlendSpace*                                 BS_MovementStandDest;                                     
	class UBlendSpace*                                 BS_MovementCrouchDest;                                    
	class UBlendSpace*                                 BS_MovementProneDest;                                     
	class UAnimSequence*                               AS_StandScopeBlend;                                       
	class UAnimSequence*                               AS_CrouchScopeBlend;                                      
	TMap<struct FName, float>                          MovementStand_SourceTransTime;                            
	TMap<struct FName, float>                          MovementStand_DestTransTime;                              
	TMap<TEnumAsByte<ECustomMovmentMode>, float>       CustomMovement_BlendTime;                                 
	class UAnimSequence*                               AS_SwitchPose_StandToCrouch;                              
	class UAnimSequence*                               AS_SwitchPose_StandToProne;                               
	class UAnimSequence*                               AS_SwitchPose_CrouchToStand;                              
	class UAnimSequence*                               AS_SwitchPose_CrouchToProne;                              
	class UAnimSequence*                               AS_SwitchPose_ProneToStand;                               
	class UAnimSequence*                               AS_SwitchPose_ProneToCrouch;                              
	class UAnimSequence*                               AS_SwitchPose_StandToCrouchDest;                          
	class UAnimSequence*                               AS_SwitchPose_StandToProneDest;                           
	class UAnimSequence*                               AS_SwitchPose_CrouchToStandDest;                          
	class UAnimSequence*                               AS_SwitchPose_CrouchToProneDest;                          
	class UAnimSequence*                               AS_SwitchPose_ProneToStandDest;                           
	class UAnimSequence*                               AS_SwitchPose_ProneToCrouchDest;                          
	struct FVector                                     moveVelocity;                                             
	TEnumAsByte<ECharacterPoseType>                    PoseType;                                                 
	TEnumAsByte<EWeaponType>                           WeaponType;                                               
	TEnumAsByte<ECharacterPoseType>                    InterruptCachePose;                                       
	TEnumAsByte<ECharacterPoseType>                    RecoverCharPose;                                          
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bIsOnVehicle;                                             
	bool                                               bScoping;                                                 
	bool                                               bIsMoving;                                                
	bool                                               bMovementChanged;                                         
	unsigned char                                      UnknownData01[0x1];                                       
	bool                                               bMovementChangedAndNotSwitchingPose;                      
	unsigned char                                      UnknownData02[0x1];                                       
	bool                                               bWithoutWeapon;                                           
	bool                                               bIsSwitchingPose;                                         
	bool                                               bUseInterruptPose;                                        
	bool                                               bEmptyToCrouch;                                           
	bool                                               bEmptyToProne;                                            
	bool                                               bEmptyToStand;                                            
	bool                                               bStandToProne;                                            
	bool                                               bStandToCrouchNotMove;                                    
	bool                                               bStandToCrouchMove;                                       
	bool                                               bStandTo_StandToProne;                                    
	bool                                               bStandTo_StandToCrouch;                                   
	bool                                               bCrouchToProne;                                           
	bool                                               bCrouchToStandNotMove;                                    
	bool                                               bCrouchToStandMove;                                       
	bool                                               bCrouchTo_CrouchToProne;                                  
	bool                                               bCrouchTo_CrouchToStand;                                  
	bool                                               bProneToStand;                                            
	bool                                               bProneToCrouch;                                           
	bool                                               bProneTo_ProneToCrouch;                                   
	bool                                               bProneTo_ProneToStand;                                    
	bool                                               bProneToStand_ToStand;                                    
	bool                                               bStandToProne_ToProne;                                    
	bool                                               bCrouchToProne_ToProne;                                   
	bool                                               bProneToCrouch_ToCrouch;                                  
	unsigned char                                      UnknownData03[0x1];                                       
	float                                              StandSwitchToPronePoseAnimDuration;                       
	float                                              StandSwitchFromPronePoseAnimDuration;                     
	float                                              CrouchSwitchToPronePoseAnimDuration;                      
	float                                              CrouchSwitchFromPronePoseAnimDuration;                    
	float                                              StandSwitchToPronePoseAnimDelay;                          
	float                                              StandSwitchFromPronePoseAnimDelay;                        
	float                                              CrouchSwitchToPronePoseAnimDelay;                         
	float                                              CrouchSwitchFromPronePoseAnimDelay;                       
	float                                              MovementBlendTime;                                        
	float                                              SwitchPoseTransTime;                                      
	float                                              SwitchingPoseTimer;                                       
	float                                              SwitchingPoseTimerInternal;                               
	float                                              InterruptPoseInternal;                                    
	float                                              SwitchPoseAnimStartPosition;                              
	float                                              CustomMovementBlendTime;                                  
	float                                              ScopeVelocityInterpSpeed;                                 
	float                                              SprintToPronePlayRate;                                    
	bool                                               bCarryBackState;                                          
	unsigned char                                      UnknownData04[0x7];                                       
	float                                              CarryBackTimeAccumulator;                                 
	TArray<struct FCharacterViewPointConfig>           PoseStatusViewPointConfig;                                
	unsigned char                                      UnknownData05[0x10];                                      
	float                                              LeaveStateTimerInternal;                                  
	float                                              GunSprintToProneDefaultPlayRate;                          
	float                                              CommonSprintToProneDefaultPlayRate;                       
	unsigned char                                      UnknownData06[0x4];                                       
	struct FName                                       JumpProneBlendCurveName;                                  
	class USTExtraAnimInstanceBase*                    MainInstance;                                             
	unsigned char                                      UnknownData07[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.CharLocomotionMCAnimInstance");
		return pStaticClass;
	}


	void SwitchingPoseFinishCallback();
	void SetViewPointLimitByPoseStatus(ECharacterAnimBlendPoseType InPoseType, bool bEnter);
	void SetInterruptPose(bool bUseInterruptPose, TEnumAsByte<ECharacterPoseType> InterruptPose);
	void LeaveStateCallback();
	void HandleStateLeave(EPawnState LeaveState);
	void HandlePlayerPoseChange(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose);
};




class UCharMainMCAnimInstance : public UCharacterAnimStateBase
{
public:
	class UAnimSequence*                               C_IdleAddtive;                                            
	class UAnimSequence*                               C_JumpStart;                                              
	class UAnimSequence*                               C_LandLight;                                              
	class UAnimSequence*                               C_LandHeavy;                                              
	class UBlendSpace1D*                               C_FallingBS;                                              
	bool                                               bUseCustomBS;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	class UAnimSequence*                               C_JumpCustom;                                             
	class UBlendSpace1D*                               C_FallingCustom;                                          
	bool                                               C_Scoping;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              C_CharacterYawRotateRate;                                 
	float                                              C_CharacterYawRotateRate_Reverse;                         
	float                                              ScopeVelocityInterpSpeed;                                 
	float                                              b_WalkAdditiveAlpha;                                      
	bool                                               b_UnarmedFallingToRifleFallLandingHard;                   
	bool                                               b_WalkToRifleJumpStationStart;                            
	bool                                               C_IdleAddtiveValid;                                       
	bool                                               C_ShouldPauseAnim;                                        
	bool                                               bWalkToJumpStart;                                         
	bool                                               C_Move;                                                   
	unsigned char                                      UnknownData02[0x2];                                       
	struct FVector                                     C_MoveVelocity;                                           
	float                                              f_C_MoveVelocityLengthSquard;                             
	TEnumAsByte<EWeaponType>                           C_WeaponType;                                             
	bool                                               b_C_LastMovementMode_NEQ_Falling_OR_HoldGrenade;          
	bool                                               b_WalkToUnarmedFalling;                                   
	bool                                               b_UnarmedFallingToRifleCombatFallLanding;                 
	float                                              f_FallingVelocityZFactor;                                 
	float                                              MaxFallingVelocityThreshold;                              
	float                                              f_C_MoveVelocity_X_FallingZFactor;                        
	float                                              C_MaxFallingSpeed;                                        
	bool                                               MovingOnGround;                                           
	bool                                               C_MovingOnGroundAndMovbale;                               
	TEnumAsByte<ECharacterPoseType>                    C_PoseType;                                               
	TEnumAsByte<EMovementMode>                         C_LastMovementMode;                                       
	bool                                               C_IsJumping;                                              
	bool                                               bIsLandingHard;                                           
	bool                                               bAlwaysLandLight;                                         
	unsigned char                                      UnknownData03[0x1];                                       
	struct FVector                                     moveVelocity;                                             
	bool                                               C_ClimbAnimSwitch;                                        
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              C_ClimbAnimTransTime;                                     
	float                                              C_ClimbAnimTime_A;                                        
	float                                              C_ClimbAnimTime_B;                                        
	unsigned char                                      UnknownData05[0x4];                                       
	class UAnimSequence*                               C_Climb_FrameAnim_A;                                      
	class UAnimSequence*                               C_Climb_FrameAnim_B;                                      
	bool                                               C_PlayerUseSeesaw;                                        
	bool                                               bIsLinkMotionLayer;                                       
	unsigned char                                      UnknownData06[0x6];                                       
	struct FName                                       LinkMotionLayerTagName;                                   
	bool                                               bHasCarryBacK;                                            
	TEnumAsByte<ECustomMovmentMode>                    C_CustomMovementMode;                                     
	unsigned char                                      UnknownData07[0x6];                                       
	class USTExtraAnimInstanceBase*                    MainInstance;                                             
	class UAnimInstanceContainer*                      LocomotionAnimContainer;                                  
	class UClass*                                      TargetLocomotionBP;                                       
	unsigned char                                      UnknownData08[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.CharMainMCAnimInstance");
		return pStaticClass;
	}


	void SetClimbAnimation(class UAnimSequence* AnimSequence, bool bFlag);
	void HandlePlayerAnimMontagePlayExtraDelegate(class UAnimMontage* MontageToPlay, bool bWantsPlay, float PlayRate, const struct FName& StartSection, float StartPos, bool bOnlyJumpToSectionWhilePlaying, const struct FName& IgnoreStopSection);
	void HandlePlayerAnimMontagePlayDelegate(class UAnimMontage* MontageToPlay, bool bWantsPlay, float PlayRate, const struct FName& StartSection, float StartPos);
	void HandleAnimPlaySlotAnimDelegate(class UAnimSequenceBase* AnimSequence, bool bWantsPlay, const struct FName& SlotName, float PlayRate, float BlendTime, unsigned char InLoopCount, float InStartPos, float LoopStartPos);
};




class UCharSeesawMCAnimInstance : public USTExtraAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      
	bool                                               C_IsActivate;                                             
	bool                                               C_IsLooping;                                              
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                C_CurSeatState;                                           
	int                                                C_OtherSeatState;                                         
	int                                                C_SeesawState;                                            
	bool                                               C_SitAtA;                                                 
	bool                                               C_SelfKnockUp;                                            
	bool                                               C_OtherKnockUp;                                           
	bool                                               C_SelfIdle;                                               
	bool                                               C_SelfWaiting;                                            
	bool                                               C_SelfEntering;                                           
	bool                                               C_SelfEntered;                                            
	bool                                               C_SelfExiting;                                            
	bool                                               C_OtherIdle;                                              
	bool                                               C_OtherWaiting;                                           
	bool                                               C_OtherEntering;                                          
	bool                                               C_OtherEntered;                                           
	bool                                               C_OtherExiting;                                           
	bool                                               C_IsEnterField;                                           
	bool                                               C_IsInGame;                                               
	bool                                               C_IsSpeedUp;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.CharSeesawMCAnimInstance");
		return pStaticClass;
	}

};




class UFollowerSysDataAsset : public UDataAsset
{
public:
	struct FName                                       HandHoldingSocket;                                        
	struct FVector                                     HandHoldingSocketLocOffset;                               
	struct FRotator                                    HandHoldingSocketRotOffset;                               
	float                                              PullW;                                                    
	bool                                               NormalizePull;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     PositivePullFactor;                                       
	struct FVector                                     NegativePullFactor;                                       
	bool                                               RotateBone;                                               
	bool                                               RotateLimb;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              DeltaSmoothSpeed;                                         
	float                                              AngularDeltaSmoothSpeed;                                  
	float                                              OffsetSoverParms1;                                        
	float                                              TargetLocLerpSpeed;                                       
	bool                                               SmoothPositionOverTime;                                   
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              MaxPositionSpeed;                                         
	float                                              MaxPositionDistance;                                      
	bool                                               SmoothRotationOverTime;                                   
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              MaxDegreesSpeed;                                          
	float                                              MaxDegreesDistance;                                       
	unsigned char                                      UnknownData04[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.FollowerSysDataAsset");
		return pStaticClass;
	}

};




class UHoldingHandsMCAnimInstance : public UCharacterAnimStateBase
{
public:
	class UBlendSpace*                                 BS_HoldingHoldsLeader;                                    
	class UBlendSpace*                                 BS_HoldingHoldsFollower;                                  
	struct FVector                                     HoldingHandsTargetLoc;                                    
	struct FRotator                                    HoldingHandsTargetRot;                                    
	struct FVector                                     LeaderHoldingHandsTargetLoc;                              
	struct FVector                                     FollowerHoldingHandsTargetLoc;                            
	bool                                               bIsFollower;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     OffsetSover1;                                             
	float                                              OffsetSoverParms1;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	class UFollowerSysDataAsset*                       FollowerDA;                                               
	class UFollowerSysDataAsset*                       LeaderDA;                                                 
	float                                              PullW;                                                    
	bool                                               NormalizePull;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	struct FVector                                     PositivePullFactor;                                       
	struct FVector                                     NegativePullFactor;                                       
	bool                                               RotateBone;                                               
	bool                                               RotateLimb;                                               
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              DeltaSmoothSpeed;                                         
	float                                              AngularDeltaSmoothSpeed;                                  
	float                                              F_PullW;                                                  
	bool                                               F_NormalizePull;                                          
	unsigned char                                      UnknownData04[0x3];                                       
	struct FVector                                     F_PositivePullFactor;                                     
	struct FVector                                     F_NegativePullFactor;                                     
	bool                                               F_RotateBone;                                             
	bool                                               F_RotateLimb;                                             
	unsigned char                                      UnknownData05[0x2];                                       
	float                                              F_DeltaSmoothSpeed;                                       
	float                                              F_AngularDeltaSmoothSpeed;                                
	TEnumAsByte<ECharacterFollowType>                  FollowType;                                               
	TEnumAsByte<EHoldingHandsIKMode>                   EHandIKMode;                                              
	unsigned char                                      UnknownData06[0x2];                                       
	struct FVector                                     followerVelocity;                                         
	bool                                               bUsePredictVelocity;                                      
	unsigned char                                      UnknownData07[0x3];                                       
	float                                              followerSpeed;                                            
	unsigned char                                      UnknownData08[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.HoldingHandsMCAnimInstance");
		return pStaticClass;
	}

};




class AMainCityGameMode : public ABattleRoyaleGameMode
{
public:
	unsigned char                                      UnknownData00[0x54];                                      
	uint32_t                                           MaxAcceptOneFrame;                                        
	float                                              MinAcceptTimeDelta;                                       
	float                                              UpdateDistTimeDelta;                                      
	TArray<float>                                      RelevantDistArray;                                        
	float                                              TickTimeDelta;                                            
	float                                              RelevantDataLifeTime;                                     
	float                                              ForceRelevantTimeDelta;                                   
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameMode");
		return pStaticClass;
	}


	void ReplayRecoverGenerateDSCheckpoint(const struct FString& InReplayName);
	void PreInitGameState();
	void InternalNotifyPlayerExit(class ASTExtraPlayerController* PlayerController);
	void InitConsoleVar(const struct FString& Command);
	void GenReplayDone(const struct FString& ErrorMsg);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};




class UMainCityGameModeStateActive : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameModeStateActive");
		return pStaticClass;
	}

};




class UMainCityGameModeStateFighting : public UGameModeStateFighting
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameModeStateFighting");
		return pStaticClass;
	}

};




class UMainCityGameModeStateFinished : public UGameModeStateFinished
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameModeStateFinished");
		return pStaticClass;
	}

};




class UMainCityGameModeStateReady : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameModeStateReady");
		return pStaticClass;
	}

};




class UMainCityGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameplayStatics");
		return pStaticClass;
	}


	struct FString GetProjectSavedDir();
};




class AMainCityGameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnMainCityPlayerStateChangedDelegate;                     
	bool                                               bEnableTimeUpdate;                                        
	bool                                               bEnableTimeOffset;                                        
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              ReplicatedWorldTimeSecondsOffset;                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityGameState");
		return pStaticClass;
	}

};




class UMainCityHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityHelper");
		return pStaticClass;
	}


	int SetSwapRolesForReplay(class AActor* InActor);
};




class AMainCityPlayerState : public ASTExtraPlayerState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCityPlayerState");
		return pStaticClass;
	}


	void RefreshAliasInfo(struct FGameModePlayerAliasInfo* PlayerAliasInfo);
};




class UMainCitySeesawAnimInstance : public UAnimInstance
{
public:
	class UAssetPlayerSyncNode*                        AssetPlayerSyncNode;                                      
	bool                                               C_IsActivate;                                             
	bool                                               C_IsLooping;                                              
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                C_SeatAState;                                             
	int                                                C_SeatBState;                                             
	int                                                C_SeesawState;                                            
	bool                                               C_AKnockUp;                                               
	bool                                               C_BKnockUp;                                               
	bool                                               C_A_Idle;                                                 
	bool                                               C_A_Waiting;                                              
	bool                                               C_A_Entering;                                             
	bool                                               C_A_Entered;                                              
	bool                                               C_A_Exiting;                                              
	bool                                               C_B_Idle;                                                 
	bool                                               C_B_Waiting;                                              
	bool                                               C_B_Entering;                                             
	bool                                               C_B_Entered;                                              
	bool                                               C_B_Exiting;                                              
	bool                                               C_IsEnterField;                                           
	bool                                               C_IsInGame;                                               
	bool                                               C_IsSpeedUp;                                              
	unsigned char                                      UnknownData01[0x9];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCitySeesawAnimInstance");
		return pStaticClass;
	}


	void SyncAttachedActorAnimation();
};




class UMainCitySubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FName                                       FeatureDefaultPawnName;                                   
	struct FString                                     SkipLoadMapLevel;                                         
	bool                                               bShutdownUnrealNetwork;                                   
	unsigned char                                      UnknownData01[0x2F];                                      
	class ASTExtraBaseCharacter*                       InitialCharacter;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MainCitySubsystem");
		return pStaticClass;
	}


	void SetHasInitLobbyAvatar(class ASTExtraPlayerController* InController, bool bInValue);
	void ResetMainCityGameState(class ASTExtraGameStateBase* InGameState);
	void PreShutdownUnrealNetwork();
	void PreEnterMainCityBattle();
	void PreDestroyAutonomousChar(class ASTExtraBaseCharacter* Character);
	void PostShutdownUnrealNetwork();
	void PostPlayerActorChannelOpen();
	void PostInitialize();
	void PostEnterMainCityBattle();
	void PostDeinitialize();
	void PostClearActors();
	void KeepActor(class AActor* InActor);
	class ASTExtraBaseCharacter* InitStandalonePawn(class UClass* InClass, const struct FVector& InLocation, const struct FRotator& InRotation);
	void ClearActors();
};




class UMCAnimInstanceLocomotion : public UAnimInstanceLocomotion
{
public:
	class UBlendSpace*                                 BS_MovementCrouchCustom;                                  
	class UBlendSpace*                                 BS_MovementProneCustom;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.MCAnimInstanceLocomotion");
		return pStaticClass;
	}

};




class UReplayRecoverSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      
	TArray<struct FString>                             IncludeWorldNames;                                        
	int                                                MoveStaticBuffer;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<unsigned char>                              LuaInfo;                                                  
	int64_t                                            MaxTimeDelta;                                             
	int                                                SkipRepNotifies;                                          
	unsigned char                                      UnknownData02[0xB4];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MainCity.ReplayRecoverSubsystem");
		return pStaticClass;
	}


	void WriteLuaInfo(TArray<unsigned char> InData);
	void SetReplayName(const struct FString& InReplayName);
	TArray<unsigned char> ReadLuaInfo();
	void PreInitializeWithParams(class UWorld* InWorld, class UNetDriver* InDriver);
	void PreInitializeForWorld(const struct FString& InURLStr, class UWorld* InWorld, class USTExtraGameInstance* InGameInstance);
	void PreInitializeForGameMode(const struct FString& InURLStr, class UWorld* InWorld, class AGameStateBase* InGameState);
	void PreDemoPlaybackEnded(class UWorld* InWorld);
	void PostInitializeWithParams(class UWorld* InWorld, class UNetDriver* InDriver);
	void PostInitializeForWorld(const struct FString& InURLStr, class UWorld* InWorld, class USTExtraGameInstance* InGameInstance);
	void PostInitializeForGameMode(const struct FString& InURLStr, class UWorld* InWorld, class AGameStateBase* InGameState);
	bool LuaSaveLuaInfo();
	void LoadReplayDone(const struct FString& ErrorMsg);
	bool IsVersionValid(const struct FString& RecordVersion, const struct FString& PlayerVersion);
	bool IsTimeValid(int64_t RecordTime, int64_t PlayTime);
	void GenReplayDone(const struct FString& ErrorMsg);
	void DeleteExpiredFiles(float MaxKeepHours);
	void ClearRecoverFile();
};


}

