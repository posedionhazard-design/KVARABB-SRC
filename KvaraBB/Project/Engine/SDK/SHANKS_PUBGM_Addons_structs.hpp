#pragma once


 
namespace SDK
{





enum class EStealthMoveState : uint8_t
{
	EStealthMoveState__None        = 0,
	EStealthMoveState__GoUnderground = 1,
	EStealthMoveState__Moving      = 2,
	EStealthMoveState__MovingBlocked = 3,
	EStealthMoveState__Exposure    = 4,
	EStealthMoveState__Falling     = 5,
	EStealthMoveState__Landing     = 6,
	EStealthMoveState__GoOut       = 7,
	EStealthMoveState__EStealthMoveState_MAX = 8
};



enum class EFoxStance : uint8_t
{
	EFoxStance__FourLegged         = 0,
	EFoxStance__TwoLegged          = 1,
	EFoxStance__Sleeping           = 2,
	EFoxStance__EFoxStance_MAX     = 3
};



enum class ENTFoxGait : uint8_t
{
	ENTFoxGait__ENTFoxGait_Walk    = 0,
	ENTFoxGait__ENTFoxGait_Run     = 1,
	ENTFoxGait__ENTFoxGait_MAX     = 2
};



enum class EEndSpecialMoveReason : uint8_t
{
	EEndSpecialMoveReason__None    = 0,
	EEndSpecialMoveReason__EndSMReason_UserOp = 1,
	EEndSpecialMoveReason__EndSMReason_Interrupted = 2,
	EEndSpecialMoveReason__EndSMReason_InvalidFloor = 3,
	EEndSpecialMoveReason__EndSMReason_InvalidMoveMode = 4,
	EEndSpecialMoveReason__EndSMReason_NoDriver = 5,
	EEndSpecialMoveReason__EndSMReason_NoFuel = 6,
	EEndSpecialMoveReason__EndSMReason_NoHealth = 7,
	EEndSpecialMoveReason__EndSMReason_ClientLoseConnection = 8,
	EEndSpecialMoveReason__EndSMReason_ServerCorrection = 9,
	EEndSpecialMoveReason__EndSMReason_ForceEnd = 10,
	EEndSpecialMoveReason__EndSMReason_InWater = 11,
	EEndSpecialMoveReason__EndSMReason_SkillEnd = 12,
	EEndSpecialMoveReason__MAX     = 13
};



enum class EMechaWeaponState : uint8_t
{
	EMWS_None                      = 0,
	EMWS_Magnet                    = 1,
	EMWS_Missile                   = 2,
	EMWS_Speed                     = 3,
	EMWS_Boxing                    = 4,
	EMWS_Missile2                  = 5,
	EMWS_MagnetToMissile           = 6,
	EMWS_MagnetToSpeed             = 7,
	EMWS_MagnetToBoxing            = 8,
	EMWS_MissileToMagnet           = 9,
	EMWS_MissileToBoxing           = 10,
	EMWS_MissileToMissile2         = 11,
	EMWS_SpeedToMagnet             = 12,
	EMWS_BoxingToMagnet            = 13,
	EMWS_BoxingToMissile           = 14,
	EMWS_BoxingToMissile2          = 15,
	EMWS_Missile2ToBoxing          = 16,
	EMWS_Missile2ToMissile         = 17,
	EMWS_MAX                       = 18
};



enum class EMechaState : uint8_t
{
	EMechaState__Normal            = 0,
	EMechaState__Jump              = 1,
	EMechaState__Fire              = 2,
	EMechaState__Stumble           = 3,
	EMechaState__Aim               = 4,
	EMechaState__Dance             = 5,
	EMechaState__Landing           = 6,
	EMechaState__AirGliding        = 7,
	EMechaState__Combine           = 8,
	EMechaState__Uncombine         = 9,
	EMechaState__Catch             = 10,
	EMechaState__BeCatched         = 11,
	EMechaState__Melee             = 12,
	EMechaState__LaunchState       = 13,
	EMechaState__Exploded          = 14,
	EMechaState____MAX             = 15,
	EMechaState__EMechaState_MAX   = 16
};



enum class ETransformerState : uint8_t
{
	ETransformerState__Normal      = 0,
	ETransformerState__Jump        = 1,
	ETransformerState__Dance       = 2,
	ETransformerState__Landing     = 3,
	ETransformerState__Melee       = 4,
	ETransformerState__Exploded    = 5,
	ETransformerState__HitStun     = 6,
	ETransformerState__PostCast    = 7,
	ETransformerState__Execute     = 8,
	ETransformerState__BeExecuted  = 9,
	ETransformerState__Born        = 10,
	ETransformerState____MAX       = 11,
	ETransformerState__ETransformerState_MAX = 12
};



enum class ECurveMoveType : uint8_t
{
	ECurveMoveType__None           = 0,
	ECurveMoveType__Dash           = 1,
	ECurveMoveType__FlyEnter       = 2,
	ECurveMoveType__Max            = 3
};



enum class ESnowMoveType : uint8_t
{
	ESnowMoveType__None            = 0,
	ESnowMoveType__Idel            = 1,
	ESnowMoveType__Move            = 2,
	ESnowMoveType__Jump            = 3,
	ESnowMoveType__ESnowMoveType_MAX = 4
};



enum class EMeshPositionSourceMode : uint8_t
{
	EMeshPositionSourceMode__ArrangementOnly = 0,
	EMeshPositionSourceMode__AnchorTargetOnly = 1,
	EMeshPositionSourceMode__AnchorTargetWithArrangement = 2,
	EMeshPositionSourceMode__EMeshPositionSourceMode_MAX = 3
};



enum class ERewindState : uint8_t
{
	ERewindState__RewindNone       = 0,
	ERewindState__RecordData       = 1,
	ERewindState__RewindMove       = 2,
	ERewindState__RewindEnd        = 3,
	ERewindState__ERewindState_MAX = 4
};



enum class EBioVehicleState : uint8_t
{
	EBioVehicleState__Move         = 0,
	EBioVehicleState__Sprint       = 1,
	EBioVehicleState__Stand        = 2,
	EBioVehicleState__Crouch       = 3,
	EBioVehicleState__Prone        = 4,
	EBioVehicleState__Jump         = 5,
	EBioVehicleState__Dead         = 6,
	EBioVehicleState__Variation    = 7,
	EBioVehicleState__Born         = 8,
	EBioVehicleState__Stun         = 9,
	EBioVehicleState__StunAnim     = 10,
	EBioVehicleState__Shackle      = 11,
	EBioVehicleState____MAX        = 12,
	EBioVehicleState__EBioVehicleState_MAX = 13
};



enum class EFlowerWingMoveState : uint8_t
{
	EFlowerWingMoveState__None     = 0,
	EFlowerWingMoveState__Sprint   = 1,
	EFlowerWingMoveState__Float    = 2,
	EFlowerWingMoveState__FlutterSprint = 3,
	EFlowerWingMoveState__FlutterSprintEnd = 4,
	EFlowerWingMoveState__Flash    = 5,
	EFlowerWingMoveState__Diving   = 6,
	EFlowerWingMoveState__EFlowerWingMoveState_MAX = 7
};



enum class EWallSurfaceState : uint8_t
{
	EWallSurfaceState__None        = 0,
	EWallSurfaceState__OnVerticalWall = 1,
	EWallSurfaceState__OnCeiling   = 2,
	EWallSurfaceState__TransitionCorner = 3,
	EWallSurfaceState__WallToCeiling = 4,
	EWallSurfaceState__CeilingToWall = 5,
	EWallSurfaceState__ExitWallToRoof = 6,
	EWallSurfaceState__ExitWallToFloor = 7,
	EWallSurfaceState__ExitWallDismount = 8,
	EWallSurfaceState__EWallSurfaceState_MAX = 9
};



enum class EGhostBalloonMoveState : uint8_t
{
	EGhostBalloonMoveState__None   = 0,
	EGhostBalloonMoveState__Rise   = 1,
	EGhostBalloonMoveState__Float  = 2,
	EGhostBalloonMoveState__Burst  = 3,
	EGhostBalloonMoveState__EGhostBalloonMoveState_MAX = 4
};



enum class EJumpPackMoveState : uint8_t
{
	EJumpPackMoveState__None       = 0,
	EJumpPackMoveState__Boost      = 1,
	EJumpPackMoveState__Descending = 2,
	EJumpPackMoveState__Landing    = 3,
	EJumpPackMoveState__EJumpPackMoveState_MAX = 4
};



enum class ELeaveNinjaTeamReason : uint8_t
{
	ELeaveNinjaTeamReason__ELNTR_Request = 0,
	ELeaveNinjaTeamReason__ELNTR_OutOfDistance = 1,
	ELeaveNinjaTeamReason__ELNTR_MAX = 2
};



enum class EODMGearMoveState : uint8_t
{
	EODMGearMoveState__None        = 0,
	EODMGearMoveState__Sprint      = 1,
	EODMGearMoveState__Rise        = 2,
	EODMGearMoveState__Spin        = 3,
	EODMGearMoveState__SpinEnd     = 4,
	EODMGearMoveState__EODMGearMoveState_MAX = 5
};



enum class ESpiderSwingMoveState : uint8_t
{
	ESpiderSwingMoveState__None    = 0,
	ESpiderSwingMoveState__Launching = 1,
	ESpiderSwingMoveState__Swinging = 2,
	ESpiderSwingMoveState__Releasing = 3,
	ESpiderSwingMoveState__Falling = 4,
	ESpiderSwingMoveState__Landing = 5,
	ESpiderSwingMoveState__ESpiderSwingMoveState_MAX = 6
};



enum class EPterosaurSwoopStage : uint8_t
{
	EPterosaurSwoopStage__ESwoopStage_None = 0,
	EPterosaurSwoopStage__ESwoopStage_Ready = 1,
	EPterosaurSwoopStage__ESwoopStage_DirectionCorrect = 2,
	EPterosaurSwoopStage__ESwoopStage_SwoopMove = 3,
	EPterosaurSwoopStage__ESwoopStage_PreCatch = 4,
	EPterosaurSwoopStage__ESwoopStage_Catch = 5,
	EPterosaurSwoopStage__ESwoopStage_Finish = 6,
	EPterosaurSwoopStage__ESwoopStage_FinishNoCatch = 7,
	EPterosaurSwoopStage__ESwoopStage_FinishNoCatchWithHit = 8,
	EPterosaurSwoopStage__ESwoopStage_MAX = 9
};



enum class EBallVehicleMotionState : uint8_t
{
	EBallVehicleMotionState__ENormalState = 0,
	EBallVehicleMotionState__EReadyForKick = 1,
	EBallVehicleMotionState__EInJumpState = 2,
	EBallVehicleMotionState__EInSecondJumpState = 3,
	EBallVehicleMotionState__EBallVehicleMotionState_MAX = 4
};



enum class EMountFromDirection : uint8_t
{
	EMFD_Default                   = 0,
	EMFD_Forward                   = 1,
	EMFD_Back                      = 2,
	EMFD_Left                      = 3,
	EMFD_Right                     = 4,
	EMFD_Origin                    = 5,
	EMFD_MAX                       = 6
};



enum class EHorseTransformType : uint8_t
{
	EHorseTransformType__HTT_None  = 0,
	EHorseTransformType__HTT_Appear = 1,
	EHorseTransformType__HTT_Disappear = 2,
	EHorseTransformType__HTT_Death = 3,
	EHorseTransformType__HTT_MAX   = 4
};



enum class EBlanketDanceState : uint8_t
{
	EBDS_Locomotion                = 0,
	EBDS_ReadyToDance              = 1,
	EBDS_Dancing                   = 2,
	EBDS_Idle                      = 3,
	EBDS_MAX                       = 4
};



enum class EBlankVehicleSwitchFailedReason : uint8_t
{
	EBlankVehicleSwitchFailedReason__ESwitchTraceInvalid = 0,
	EBlankVehicleSwitchFailedReason__ESwitchInterrupted = 1,
	EBlankVehicleSwitchFailedReason__EBlankVehicleSwitchFailedReason_MAX = 2
};



enum class EBroomChargeState : uint8_t
{
	EBroomChargeState__BroomChargeState_None = 0,
	EBroomChargeState__BroomChargeState_Charging = 1,
	EBroomChargeState__BroomChargeState_Dashing = 2,
	EBroomChargeState__BroomChargeState_Atk = 3,
	EBroomChargeState__BroomChargeState_CoolDown = 4,
	EBroomChargeState__BroomChargeState_MAX = 5
};



enum class EFlyBioVehicleBaseMoveMode : uint8_t
{
	EFlyBioVehicleBaseMoveMode__EMove_TakingOff = 0,
	EFlyBioVehicleBaseMoveMode__EMove_RegularFlying = 1,
	EFlyBioVehicleBaseMoveMode__EMove_Landing = 2,
	EFlyBioVehicleBaseMoveMode__EMove_MAX = 3
};



enum class EEndDashErrorCode : uint8_t
{
	EEndDashErrorCode__EndDash_None = 0,
	EEndDashErrorCode__EndDash_TimeOver = 1,
	EEndDashErrorCode__EndDash_MoveBlocked = 2,
	EEndDashErrorCode__EndDash_ForceEnd = 3,
	EEndDashErrorCode__EndDash_ServerAdjust = 4,
	EEndDashErrorCode__EndDash_MAX = 5
};



enum class ECatapultMachineStateType : uint8_t
{
	ECatapultMachineStateType__CMState_Initial = 0,
	ECatapultMachineStateType__CMState_ChargeReady = 1,
	ECatapultMachineStateType__CMState_Charge = 2,
	ECatapultMachineStateType__CMState_Launch = 3,
	ECatapultMachineStateType__CMState_Cooldown = 4,
	ECatapultMachineStateType__CMState_Supplement = 5,
	ECatapultMachineStateType__CMState_MAX = 6
};



enum class ENitrogenAccelState : uint8_t
{
	ENitrogenAccelState__None      = 0,
	ENitrogenAccelState__Ready     = 1,
	ENitrogenAccelState__Bounce    = 2,
	ENitrogenAccelState__SideAccel = 3,
	ENitrogenAccelState__Accel     = 4,
	ENitrogenAccelState__CoolDown  = 5,
	ENitrogenAccelState__ENitrogenAccelState_MAX = 6
};



enum class EHitDir : uint8_t
{
	EHitDir__None                  = 0,
	EHitDir__forward               = 1,
	EHitDir__right                 = 2,
	EHitDir__back                  = 3,
	EHitDir__left                  = 4,
	EHitDir__EHitDir_MAX           = 5
};



enum class ESnowBallBrokenReason : uint8_t
{
	ESnowBallBrokenReason__BrokenReason_Unknown = 0,
	ESnowBallBrokenReason__BrokenReason_ImpactObstacle = 1,
	ESnowBallBrokenReason__BrokenReason_ImpactVehicle = 2,
	ESnowBallBrokenReason__BrokenReason_ImpactCharacter = 3,
	ESnowBallBrokenReason__BrokenReason_ImpactNpc = 4,
	ESnowBallBrokenReason__BrokenReason_GroundSlope = 5,
	ESnowBallBrokenReason__BrokenReason_Falling = 6,
	ESnowBallBrokenReason__BrokenReason_Swimming = 7,
	ESnowBallBrokenReason__BrokenReason_NoDriver = 8,
	ESnowBallBrokenReason__BrokenReason_PlayerBreak = 9,
	ESnowBallBrokenReason__BrokenReason_Damaged = 10,
	ESnowBallBrokenReason__BrokenReason_FreeEnoughTime = 11,
	ESnowBallBrokenReason__BrokenReason_MAX = 12
};



enum class EStopDriftCheck : uint8_t
{
	EStopDriftCheck__Drift_SpeedCheck = 0,
	EStopDriftCheck__Drift_RotationCheck = 1,
	EStopDriftCheck__Drift_Interrupt = 2,
	EStopDriftCheck__Drift_None    = 3,
	EStopDriftCheck__Drift_MAX     = 4
};



enum class EMechanicalScorpionWeaponAimProfile : uint8_t
{
	EMechanicalScorpionWeaponAimProfile__Track = 0,
	EMechanicalScorpionWeaponAimProfile__TailGroundLateralSweep = 1,
	EMechanicalScorpionWeaponAimProfile__HandGroundLongitudinalSweep = 2,
	EMechanicalScorpionWeaponAimProfile__EMechanicalScorpionWeaponAimProfile_MAX = 3
};



enum class EMechanicalScorpionWeaponEmitter : uint8_t
{
	EMechanicalScorpionWeaponEmitter__None = 0,
	EMechanicalScorpionWeaponEmitter__Tail = 1,
	EMechanicalScorpionWeaponEmitter__LeftHand = 2,
	EMechanicalScorpionWeaponEmitter__RightHand = 3,
	EMechanicalScorpionWeaponEmitter__EMechanicalScorpionWeaponEmitter_MAX = 4
};



enum class EAmphibiousBoatInflationState : uint8_t
{
	EAmphibiousBoatInflationState__Deflated = 0,
	EAmphibiousBoatInflationState__Deflating = 1,
	EAmphibiousBoatInflationState__Inflated = 2,
	EAmphibiousBoatInflationState__Inflating = 3,
	EAmphibiousBoatInflationState__EAmphibiousBoatInflationState_MAX = 4
};



enum class EAnimalMoveDir : uint8_t
{
	EMove_Forward                  = 0,
	EMove_Left                     = 1,
	EMove_Right                    = 2,
	EMove_Backward                 = 3,
	EMove_MAX                      = 4
};



enum class EBlendCrossFadeOption : uint8_t
{
	EBlendCrossFadeOption__EBSBlend_None = 0,
	EBlendCrossFadeOption__EBCFO_BlendSpace = 1,
	EBlendCrossFadeOption__EBlendCrossFadeOption_MAX = 2
};



enum class EOffsetRootBoneMode : uint8_t
{
	EOffsetRootBoneMode__Accumulate = 0,
	EOffsetRootBoneMode__Interpolate = 1,
	EOffsetRootBoneMode__Simulate  = 2,
	EOffsetRootBoneMode__Release   = 3,
	EOffsetRootBoneMode__None      = 4,
	EOffsetRootBoneMode__EOffsetRootBoneMode_MAX = 5
};



enum class EAttachedOwnerResolveMode : uint8_t
{
	EAttachedOwnerResolveMode__Self = 0,
	EAttachedOwnerResolveMode__Owner = 1,
	EAttachedOwnerResolveMode__AttachParent = 2,
	EAttachedOwnerResolveMode__EAttachedOwnerResolveMode_MAX = 3
};



enum class EAxisLockType : uint8_t
{
	EAxisLockType__None            = 0,
	EAxisLockType__X               = 1,
	EAxisLockType__Y               = 2,
	EAxisLockType__Z               = 3,
	EAxisLockType__XY              = 4,
	EAxisLockType__XZ              = 5,
	EAxisLockType__YZ              = 6,
	EAxisLockType__EAxisLockType_MAX = 7
};



enum class EFlyBioVehicleMoveMode : uint8_t
{
	EFlyBioVehicleMoveMode__EMove_TakingOff = 0,
	EFlyBioVehicleMoveMode__EMove_RegularFlying = 1,
	EFlyBioVehicleMoveMode__EMove_MAX = 2
};



enum class EBioFlyMoveState : uint8_t
{
	EBioFlyMoveState__None         = 0,
	EBioFlyMoveState__TakingOff    = 1,
	EBioFlyMoveState__RegularFlying = 2,
	EBioFlyMoveState__Landing      = 3,
	EBioFlyMoveState__EBioFlyMoveState_MAX = 4
};



enum class EFlyVerticalCalcMode : uint8_t
{
	EFlyVerticalCalcMode__InputClamped = 0,
	EFlyVerticalCalcMode__CurveDriven = 1,
	EFlyVerticalCalcMode__EFlyVerticalCalcMode_MAX = 2
};



enum class EFlyVelocityCalcMode : uint8_t
{
	EFlyVelocityCalcMode__SteeredBraking = 0,
	EFlyVelocityCalcMode__CurveControlled = 1,
	EFlyVelocityCalcMode__EFlyVelocityCalcMode_MAX = 2
};



enum class EBirdCageStatus : uint8_t
{
	EBirdCageStatus__None          = 0,
	EBirdCageStatus__Alive         = 1,
	EBirdCageStatus__Destoryed     = 2,
	EBirdCageStatus__EBirdCageStatus_MAX = 3
};



enum class EBlankVehicleBaseMoveMode : uint8_t
{
	EBlankVehicleBaseMoveMode__EMove_LowFlying = 0,
	EBlankVehicleBaseMoveMode__EMove_HighFlying = 1,
	EBlankVehicleBaseMoveMode__EMove_RiseToHigh = 2,
	EBlankVehicleBaseMoveMode__EMove_DropToLow = 3,
	EBlankVehicleBaseMoveMode__EMove_Diving = 4,
	EBlankVehicleBaseMoveMode__EMove_MAX = 5
};



enum class EBlanketFlyingState : uint8_t
{
	EBFS_LOW                       = 0,
	EBFS_LOW_TO_HIGH               = 1,
	EBFS_HIGH                      = 2,
	EBFS_HIGH_TO_LOW               = 3,
	EBFS_DIVING                    = 4,
	EBFS_MAX                       = 5
};



enum class ECharBoardMoveLeisureStyle : uint8_t
{
	ECharBoardMoveLeisureStyle__ERandom = 0,
	ECharBoardMoveLeisureStyle__ENarrow = 1,
	ECharBoardMoveLeisureStyle__Default = 2,
	ECharBoardMoveLeisureStyle__ECharBoardMoveLeisureStyle_MAX = 3
};



enum class EScorpionOrbitMoveFinishMode : uint8_t
{
	EScorpionOrbitMoveFinishMode__Distance = 0,
	EScorpionOrbitMoveFinishMode__Angle = 1,
	EScorpionOrbitMoveFinishMode__EScorpionOrbitMoveFinishMode_MAX = 2
};



enum class EPendingSpawnLayoutMode : uint8_t
{
	EPendingSpawnLayoutMode__Arrangement = 0,
	EPendingSpawnLayoutMode__AnchorTargetOnly = 1,
	EPendingSpawnLayoutMode__EPendingSpawnLayoutMode_MAX = 2
};



enum class ECamelPostureState : uint8_t
{
	ECS_Idle                       = 0,
	ECS_Rest                       = 1,
	ECS_Dance                      = 2,
	ECS_Moving                     = 3,
	ECS_MAX                        = 4
};



enum class EVOFlag : uint8_t
{
	EVOFlag__EVOFlag_None          = 0,
	EVOFlag__EVOFlag_VelocityUpdate = 1,
	EVOFlag__EVOFlag_Stop          = 2,
	EVOFlag__EVOFlag_JumpOver      = 3,
	EVOFlag__EVOFlag_FlyOver       = 4,
	EVOFlag__EVOFlag_MAX           = 5
};



enum class ECollectedEventDataEventId : uint8_t
{
	ECollectedEventDataEventId__GameStatus = 0,
	ECollectedEventDataEventId__StartMatching = 1,
	ECollectedEventDataEventId__PlaneCarrying = 2,
	ECollectedEventDataEventId__PuttingDownCakeFireWorks = 3,
	ECollectedEventDataEventId__RankingScore = 4,
	ECollectedEventDataEventId__TakeDropItem = 5,
	ECollectedEventDataEventId__UsingItem = 6,
	ECollectedEventDataEventId__Falling = 7,
	ECollectedEventDataEventId__Climbing = 8,
	ECollectedEventDataEventId__InFieldOfView = 9,
	ECollectedEventDataEventId__UnderEnermyAttack = 10,
	ECollectedEventDataEventId__TakingDamage = 11,
	ECollectedEventDataEventId__ReducingSignalValue = 12,
	ECollectedEventDataEventId__CircleReducing = 13,
	ECollectedEventDataEventId__CircleChange = 14,
	ECollectedEventDataEventId__Rescue = 15,
	ECollectedEventDataEventId__DrivingVehicle = 16,
	ECollectedEventDataEventId__ReloadingBullet = 17,
	ECollectedEventDataEventId__AirDrop = 18,
	ECollectedEventDataEventId__PlayerPos = 19,
	ECollectedEventDataEventId__WeaponUsage = 20,
	ECollectedEventDataEventId__ItemPackageCreate = 21,
	ECollectedEventDataEventId__ItemAttach = 22,
	ECollectedEventDataEventId__ItemDetach = 23,
	ECollectedEventDataEventId__PlayerInfo = 24,
	ECollectedEventDataEventId__MiniMapShowInfo = 25,
	ECollectedEventDataEventId__Following = 26,
	ECollectedEventDataEventId__MiniMapPinning = 27,
	ECollectedEventDataEventId__Blocking = 28,
	ECollectedEventDataEventId__Dancing = 29,
	ECollectedEventDataEventId__PickingupTombBox = 30,
	ECollectedEventDataEventId__AirAttacking = 31,
	ECollectedEventDataEventId__CurrentWeapon = 32,
	ECollectedEventDataEventId__SceneInfo = 33,
	ECollectedEventDataEventId__TeamInfo = 34,
	ECollectedEventDataEventId__EnteringLeavingTeam = 35,
	ECollectedEventDataEventId__OnOffline = 36,
	ECollectedEventDataEventId__RankList = 37,
	ECollectedEventDataEventId__TextMessage = 38,
	ECollectedEventDataEventId__PawnState = 39,
	ECollectedEventDataEventId__OpenCloseDoor = 40,
	ECollectedEventDataEventId__MicSpeakerState = 41,
	ECollectedEventDataEventId__VehicleState = 42,
	ECollectedEventDataEventId__EnumMax = 43,
	ECollectedEventDataEventId__ECollectedEventDataEventId_MAX = 44
};



enum class ECurveMoveDriveMode : uint8_t
{
	ECurveMoveDriveMode__CurveSampling = 0,
	ECurveMoveDriveMode__TargetLerp = 1,
	ECurveMoveDriveMode__ECurveMoveDriveMode_MAX = 2
};



enum class EDancingState : uint8_t
{
	DancingState_Default           = 0,
	DancingState_PrepareMove       = 1,
	DancingState_DanceMoving       = 2,
	DancingState_EndMove           = 3,
	DancingState_Dancing           = 4,
	DancingState_Battle            = 5,
	DancingState_MAX               = 6
};



enum class EEventDataCollectionValues_MicSpeakerState_Speaker : uint8_t
{
	EEventDataCollectionValues_MicSpeakerState_Speaker__None = 0,
	EEventDataCollectionValues_MicSpeakerState_Speaker__Lbs = 1,
	EEventDataCollectionValues_MicSpeakerState_Speaker__Team = 2,
	EEventDataCollectionValues_MicSpeakerState_Speaker__EEventDataCollectionValues_MicSpeakerState_MAX = 3
};



enum class EEventDataCollectionValues_MicSpeakerState_Mic : uint8_t
{
	EEventDataCollectionValues_MicSpeakerState_Mic__None = 0,
	EEventDataCollectionValues_MicSpeakerState_Mic__Lbs = 1,
	EEventDataCollectionValues_MicSpeakerState_Mic__Team = 2,
	EEventDataCollectionValues_MicSpeakerState_Mic__KeyLbs = 3,
	EEventDataCollectionValues_MicSpeakerState_Mic__KeyTeam = 4,
	EEventDataCollectionValues_MicSpeakerState_Mic__EEventDataCollectionValues_MicSpeakerState_MAX = 5
};



enum class EEventDataCollectionValues_RankList_Type : uint8_t
{
	EEventDataCollectionValues_RankList_Type__None = 0,
	EEventDataCollectionValues_RankList_Type__Hot = 1,
	EEventDataCollectionValues_RankList_Type__Lucky = 2,
	EEventDataCollectionValues_RankList_Type__EEventDataCollectionValues_RankList_MAX = 3
};



enum class EFAMActiveState : uint8_t
{
	EFAMActiveState__None          = 0,
	EFAMActiveState__Magnet        = 1,
	EFAMActiveState__EFAMActiveState_MAX = 2
};



enum class EFAMFlyModeType : uint8_t
{
	EFAMFlyModeType__None          = 0,
	EFAMFlyModeType__Normal        = 1,
	EFAMFlyModeType__HighSpeed     = 2,
	EFAMFlyModeType__EFAMFlyModeType_MAX = 3
};



enum class EFlyCloudState : uint8_t
{
	CLOUD_FLY_NONE                 = 0,
	CLOUD_FLY_START                = 1,
	CLOUD_FLY_FLOAT                = 2,
	CLOUD_FLY_MAX                  = 3
};



enum class EFlySprintDirMode : uint8_t
{
	EFlySprintDirMode__FixedDirection = 0,
	EFlySprintDirMode__ActorForward = 1,
	EFlySprintDirMode__ToDestLocation = 2,
	EFlySprintDirMode__EFlySprintDirMode_MAX = 3
};



enum class EFrostDragonMoveMode : uint8_t
{
	EFrostDragonMoveMode__EMove_Idle = 0,
	EFrostDragonMoveMode__EMove_TakingOff = 1,
	EFrostDragonMoveMode__EMove_RegularFlying = 2,
	EFrostDragonMoveMode__EMove_Landing = 3,
	EFrostDragonMoveMode__EMove_LandingWalking = 4,
	EFrostDragonMoveMode__EMove_MAX = 5
};



enum class EHoverSimulateState : uint8_t
{
	EHoverSimulateState__Idle      = 0,
	EHoverSimulateState__Simple    = 1,
	EHoverSimulateState__Complex   = 2,
	EHoverSimulateState__EHoverSimulateState_MAX = 3
};



enum class EPoleVectorModeEnum : uint8_t
{
	PV_None                        = 0,
	PV_Position                    = 1,
	PV_Bone                        = 2,
	PV_AngleOffset                 = 3,
	PV_MAX                         = 4
};



enum class EEffectorSpaceEnum : uint8_t
{
	ES_Additive                    = 0,
	ES_World                       = 1,
	ES_Component                   = 2
};



enum class ELadderMoveType : uint8_t
{
	ELadderMove_None               = 0,
	ELadderMove_Idle               = 1,
	ELadderMove_Up                 = 2,
	ELadderMove_Down               = 3,
	ELadderMove_JumpToTop          = 4,
	ELadderMove_ExitFromBottom     = 5,
	ELadderMove_EnterFromTop       = 6,
	ELadderMove_EnterFromBottom    = 7,
	ELadderMove_MAX                = 8
};



enum class EMoveDirection : uint8_t
{
	EMD_F                          = 0,
	EMD_FL                         = 1,
	EMD_FR                         = 2,
	EMD_B                          = 3,
	EMD_BL                         = 4,
	EMD_BR                         = 5,
	EMD_L                          = 6,
	EMD_R                          = 7,
	EMD_MAX                        = 8
};



enum class EBioLocomotionType : uint8_t
{
	EBioLocomotionType__EBLT_Walk_F = 0,
	EBioLocomotionType__EBLT_Walk_B = 1,
	EBioLocomotionType__EBLT_Walk_L = 2,
	EBioLocomotionType__EBLT_Walk_R = 3,
	EBioLocomotionType__EBLT_Run_F = 4,
	EBioLocomotionType__EBLT_Run_B = 5,
	EBioLocomotionType__EBLT_RunLF = 6,
	EBioLocomotionType__EBLT_Run_R = 7,
	EBioLocomotionType__EBLT_MAX   = 8
};



enum class EMechaMoveCustomMode : uint8_t
{
	EMechaMoveCustomMode__EMove_None = 0,
	EMechaMoveCustomMode__EMove_Glide = 1,
	EMechaMoveCustomMode__EMove_Landing = 2,
	EMechaMoveCustomMode__EMove_MAX = 3
};



enum class ECombineState : uint8_t
{
	ECS_COMBINE                    = 0,
	ECS_UNCOMBINE                  = 1,
	ECS_None                       = 2
};



enum class EMirrorFindReplaceMethod : uint8_t
{
	Prefix                         = 0,
	Suffix                         = 1,
	RegularExpression              = 2,
	EMirrorFindReplaceMethod_MAX   = 3
};



enum class ECreateSkillItemType : uint8_t
{
	ECreateSkillItemType__WaterCheckOnly = 0,
	ECreateSkillItemType__SlopeCheck = 1,
	ECreateSkillItemType__BuildSystemCheck = 2,
	ECreateSkillItemType__AssociateActorDistance = 3,
	ECreateSkillItemType__HeightDifferenceCheck = 4,
	ECreateSkillItemType__ECreateSkillItemType_MAX = 5
};



enum class ENinjaTeamShape : uint8_t
{
	ENinjaTeamShape__ENTT_Triangle = 0,
	ENinjaTeamShape__ENTT_LineX    = 1,
	ENinjaTeamShape__ENTT_MAX      = 2
};



enum class ENinjaMoveType : uint8_t
{
	ENMT_Leader                    = 0,
	ENMT_Follower                  = 1,
	ENMT_MAX                       = 2
};



enum class ENTFoxScanDir : uint8_t
{
	ENTFoxScanDir__Forward         = 0,
	ENTFoxScanDir__Backward        = 1,
	ENTFoxScanDir__Right           = 2,
	ENTFoxScanDir__Left            = 3,
	ENTFoxScanDir__Around          = 4,
	ENTFoxScanDir__ENTFoxScanDir_MAX = 5
};



enum class ENTFoxPrecisePredictionMode : uint8_t
{
	ENTFoxPrecisePredictionMode__Disabled = 0,
	ENTFoxPrecisePredictionMode__StopAtTarget = 1,
	ENTFoxPrecisePredictionMode__FixedScale = 2,
	ENTFoxPrecisePredictionMode__ENTFoxPrecisePredictionMode_MAX = 3
};



enum class EUploadAPIResponse : uint8_t
{
	EUploadAPIResponse__EUploadAPIResponse_Success = 0,
	EUploadAPIResponse__EUploadAPIResponse_NotSuccessful = 1,
	EUploadAPIResponse__EUploadAPIResponse_ResponseInvalid = 2,
	EUploadAPIResponse__EUploadAPIResponse_NotOK = 3,
	EUploadAPIResponse__EUploadAPIResponse_MAX = 4
};



enum class ESkillObjectPropCompareMode : uint8_t
{
	ESkillObjectPropCompareMode__Value = 0,
	ESkillObjectPropCompareMode__EnumName = 1,
	ESkillObjectPropCompareMode__ArrayNum = 2,
	ESkillObjectPropCompareMode__ESkillObjectPropCompareMode_MAX = 3
};



enum class ESkillObjectPropSource : uint8_t
{
	ESkillObjectPropSource__CppReflection = 0,
	ESkillObjectPropSource__LuaTable = 1,
	ESkillObjectPropSource__ESkillObjectPropSource_MAX = 2
};



enum class EOceanVehicleBaseMoveMode : uint8_t
{
	EOceanVehicleBaseMoveMode__EMove_LowFlying = 0,
	EOceanVehicleBaseMoveMode__EMove_Diving = 1,
	EOceanVehicleBaseMoveMode__EMove_MAX = 2
};



enum class EPandaIdleMode : uint8_t
{
	EPandaIdleMode__ENPC           = 0,
	EPandaIdleMode__EDaze          = 1,
	EPandaIdleMode__EBeVehicle     = 2,
	EPandaIdleMode__EMax           = 3,
	EPandaIdleMode__EPandaIdleMode_MAX = 4
};



enum class EPandaFootIKStyle : uint8_t
{
	EPandaFootIKStyle__EDefault    = 0,
	EPandaFootIKStyle__EAdIK       = 1,
	EPandaFootIKStyle__EPandaFootIKStyle_MAX = 2
};



enum class EMonsterLeisureStyle : uint8_t
{
	EMonsterLeisureStyle__ESmall   = 0,
	EMonsterLeisureStyle__EBig     = 1,
	EMonsterLeisureStyle__EMonsterLeisureStyle_MAX = 2
};



enum class EVehicleEmoteInteractType : uint8_t
{
	EVehicleEmoteInteractType__ENPC_Interact = 0,
	EVehicleEmoteInteractType__EBeControl = 1,
	EVehicleEmoteInteractType__EMax = 2,
	EVehicleEmoteInteractType__EVehicleEmoteInteractType_MAX = 3
};



enum class EFlyGroundType : uint8_t
{
	EFGT_Default                   = 0,
	EFGT_Water                     = 1,
	EFGT_Snow                      = 2,
	EFGT_MAX                       = 3
};



enum class EFlyHeightType : uint8_t
{
	EFHT_Ground                    = 0,
	EFHT_LowAir                    = 1,
	EFHT_HighAir                   = 2,
	EFHT_MAX                       = 3
};



enum class ESnowBallState : uint8_t
{
	ESnowBallState__SnowBall_Unknown = 0,
	ESnowBallState__SnowBall_Attached = 1,
	ESnowBallState__SnowBall_Free  = 2,
	ESnowBallState__SnowBall_Broken = 3,
	ESnowBallState__SnowBall_MAX   = 4
};



enum class ETraceMissedFallback : uint8_t
{
	ETraceMissedFallback__None     = 0,
	ETraceMissedFallback__GroundTrace = 1,
	ETraceMissedFallback__EndPoint = 2,
	ETraceMissedFallback__ETraceMissedFallback_MAX = 3
};



enum class EPickTargetMode : uint8_t
{
	EPickTargetMode__LineTrace     = 0,
	EPickTargetMode__Sweep         = 1,
	EPickTargetMode__Screen        = 2,
	EPickTargetMode__FanSweep      = 3,
	EPickTargetMode__EPickTargetMode_MAX = 4
};



enum class EPterosaurMoveMode : uint8_t
{
	EPterosaurMoveMode__EMove_Idle = 0,
	EPterosaurMoveMode__EMove_TakingOff = 1,
	EPterosaurMoveMode__EMove_RegularFlying = 2,
	EPterosaurMoveMode__EMove_Diving = 3,
	EPterosaurMoveMode__EMove_Landing = 4,
	EPterosaurMoveMode__EMove_SwoopDown = 5,
	EPterosaurMoveMode__EMove_MAX  = 6
};



enum class ESkyHorseMaterialState : uint8_t
{
	ESHMS_Normal                   = 0,
	ESHMS_POI                      = 1,
	ESHMS_FadeIn                   = 2,
	ESHMS_FadeOut                  = 3,
	ESHMS_BlendToPOI               = 4,
	ESHMS_BlendToNormal            = 5,
	ESHMS_MAX                      = 6
};



enum class ESkyHorseStopDriftCheck : uint8_t
{
	ESkyHorseStopDriftCheck__Drift_SpeedCheck = 0,
	ESkyHorseStopDriftCheck__Drift_RotationCheck = 1,
	ESkyHorseStopDriftCheck__Drift_Interrupt = 2,
	ESkyHorseStopDriftCheck__Drift_None = 3,
	ESkyHorseStopDriftCheck__Drift_Manual = 4,
	ESkyHorseStopDriftCheck__Drift_MAX = 5
};



enum class ESkyHorseMovementDataType : uint8_t
{
	ESkyHorseMovementDataType__Normal = 0,
	ESkyHorseMovementDataType__POI = 1,
	ESkyHorseMovementDataType__Max = 2
};



enum class ESwingVerticalPhase : uint8_t
{
	ESwingVerticalPhase__None      = 0,
	ESwingVerticalPhase__SwingUp   = 1,
	ESwingVerticalPhase__SwingDown = 2,
	ESwingVerticalPhase__SwingPeak = 3,
	ESwingVerticalPhase__ESwingVerticalPhase_MAX = 4
};



enum class ESpiderSwingHandSide : uint8_t
{
	ESpiderSwingHandSide__None     = 0,
	ESpiderSwingHandSide__Left     = 1,
	ESpiderSwingHandSide__Right    = 2,
	ESpiderSwingHandSide__Mid      = 3,
	ESpiderSwingHandSide__ESpiderSwingHandSide_MAX = 4
};



enum class EAttachRelativeLocation : uint8_t
{
	EAttachRelativeLocation__None  = 0,
	EAttachRelativeLocation__Bottom = 1,
	EAttachRelativeLocation__Middle = 2,
	EAttachRelativeLocation__Top   = 3,
	EAttachRelativeLocation__EAttachRelativeLocation_MAX = 4
};



enum class EHitFilterType : uint8_t
{
	EHitFilterType__EFilterByGun   = 0,
	EHitFilterType__EFilterByBullet = 1,
	EHitFilterType__EHitFilterType_MAX = 2
};



enum class EBuffForceFinishVelocityMode : uint8_t
{
	EBuffForceFinishVelocityMode__MaintainLastVelocity = 0,
	EBuffForceFinishVelocityMode__SetZero = 1,
	EBuffForceFinishVelocityMode__ClampVelocity = 2,
	EBuffForceFinishVelocityMode__EBuffForceFinishVelocityMode_MAX = 3
};



enum class EBuffForceDirection : uint8_t
{
	EBuffForceDirection__CauserToOwner = 0,
	EBuffForceDirection__OwnerToCauser = 1,
	EBuffForceDirection__WorldDirection = 2,
	EBuffForceDirection__CauserForward = 3,
	EBuffForceDirection__DynamicBlackboard = 4,
	EBuffForceDirection__EBuffForceDirection_MAX = 5
};



enum class EBuffContinuousForceMode : uint8_t
{
	EBuffContinuousForceMode__AddImpulse = 0,
	EBuffContinuousForceMode__AddForce = 1,
	EBuffContinuousForceMode__Launch = 2,
	EBuffContinuousForceMode__RequestDirectMove = 3,
	EBuffContinuousForceMode__RootMotionConstantForce = 4,
	EBuffContinuousForceMode__EBuffContinuousForceMode_MAX = 5
};



enum class EBuffRequestDirectMoveType : uint8_t
{
	BRDMT_Dynamic                  = 0,
	BRDMT_Fix                      = 1,
	BRDMT_Causer                   = 2,
	BRDMT_MAX                      = 3
};



enum class EBuffDotValueType : uint8_t
{
	EBuffDotValueType__BurningDamage = 0,
	EBuffDotValueType__ShootWeaponDamage = 1,
	EBuffDotValueType__AddHealth   = 2,
	EBuffDotValueType__AddBulletNum = 3,
	EBuffDotValueType__AddArmor    = 4,
	EBuffDotValueType__AddHelmet   = 5,
	EBuffDotValueType__PoisonFogDamage = 6,
	EBuffDotValueType__AddEnergy   = 7,
	EBuffDotValueType__AddWeaponDurability = 8,
	EBuffDotValueType__DotDamage   = 9,
	EBuffDotValueType__SkillBlackboardInt = 10,
	EBuffDotValueType__SkillBlackboardFloat = 11,
	EBuffDotValueType__Drowning    = 12,
	EBuffDotValueType__AddAttr     = 13,
	EBuffDotValueType__PoisonDamage = 14,
	EBuffDotValueType__EBuffDotValueType_MAX = 15
};



enum class EBuffSenseTargetState : uint8_t
{
	EBuffSenseTargetState__Sensing = 0,
	EBuffSenseTargetState__HasEnemy = 1,
	EBuffSenseTargetState__WaitSense = 2,
	EBuffSenseTargetState__EBuffSenseTargetState_MAX = 3
};



enum class ELaunchDirectionType : uint8_t
{
	ELaunchDirectionType__UseLaunchCenter = 0,
	ELaunchDirectionType__UseSelfRotation = 1,
	ELaunchDirectionType__UseCauserRotation = 2,
	ELaunchDirectionType__FarAwayFromCauser = 3,
	ELaunchDirectionType__UseWorldDirection = 4,
	ELaunchDirectionType__ELaunchDirectionType_MAX = 5
};



enum class EBuffMofifyDurationType : uint8_t
{
	EBuffMofifyDurationType__RefCauserDistance = 0,
	EBuffMofifyDurationType__RefMonsterType = 1,
	EBuffMofifyDurationType__RefOneAndTwo = 2,
	EBuffMofifyDurationType__EBuffMofifyDurationType_MAX = 3
};



enum class EBuffModifyPropertyType : uint8_t
{
	EBMPT_Bool                     = 0,
	EBMPT_Int                      = 1,
	EBMPT_Float                    = 2,
	EBMPT_String                   = 3,
	EBMPT_MAX                      = 4
};



enum class ERotateCharacterType : uint8_t
{
	ERotateCharacterType__RotateToCauser = 0,
	ERotateCharacterType__RotateAsCauser = 1,
	ERotateCharacterType__ERotateCharacterType_MAX = 2
};



enum class EBuffObjectPropTarget : uint8_t
{
	EBuffObjectPropTarget__Owner   = 0,
	EBuffObjectPropTarget__Causer  = 1,
	EBuffObjectPropTarget__OwnerController = 2,
	EBuffObjectPropTarget__OwnerPlayerState = 3,
	EBuffObjectPropTarget__GameState = 4,
	EBuffObjectPropTarget__EBuffObjectPropTarget_MAX = 5
};



enum class EUSTCheckCastingSkillType : uint8_t
{
	EUSTCheckCastingSkillType__EUSTCheckCastingSkillType_Any = 0,
	EUSTCheckCastingSkillType__EUSTCheckCastingSkillType_AnyNot = 1,
	EUSTCheckCastingSkillType__EUSTCheckCastingSkillType_All = 2,
	EUSTCheckCastingSkillType__EUSTCheckCastingSkillType_AllNot = 3,
	EUSTCheckCastingSkillType__EUSTCheckCastingSkillType_MAX = 4
};



enum class EUSTCheckCastingBuffType : uint8_t
{
	EUSTCheckCastingBuffType__EUSTCheckCastingBuffType_Any = 0,
	EUSTCheckCastingBuffType__EUSTCheckCastingBuffType_AnyNot = 1,
	EUSTCheckCastingBuffType__EUSTCheckCastingBuffType_All = 2,
	EUSTCheckCastingBuffType__EUSTCheckCastingBuffType_AllNot = 3,
	EUSTCheckCastingBuffType__EUSTCheckCastingBuffType_MAX = 4
};



enum class EBuffHitFaceType : uint8_t
{
	EBuffHitFaceType__All          = 0,
	EBuffHitFaceType__Forward      = 1,
	EBuffHitFaceType__Back         = 2,
	EBuffHitFaceType__EBuffHitFaceType_MAX = 3
};



enum class EBuffBeHitSpaceType : uint8_t
{
	EBuffBeHitSpaceType__All       = 0,
	EBuffBeHitSpaceType__Stand     = 1,
	EBuffBeHitSpaceType__Air       = 2,
	EBuffBeHitSpaceType__EBuffBeHitSpaceType_MAX = 3
};



enum class EBuffKeepInStateType : uint8_t
{
	EBuffKeepInStateType__MinUnion = 0,
	EBuffKeepInStateType__ContainOne = 1,
	EBuffKeepInStateType__EBuffKeepInStateType_MAX = 2
};



enum class EBuffConditionRescueType : uint8_t
{
	EBuffConditionRescueType__EBCRT_RescueOther = 0,
	EBuffConditionRescueType__EBCRT_BeRescued = 1,
	EBuffConditionRescueType__EBCRT_RescueSelf = 2,
	EBuffConditionRescueType__EBCRT_MAX = 3
};



enum class ETargetClassType : uint8_t
{
	ETargetClassType__None         = 0,
	ETargetClassType__Player       = 1,
	ETargetClassType__Monster      = 2,
	ETargetClassType__ETargetClassType_MAX = 3
};



enum class EBuffEventRescueType : uint8_t
{
	EBuffEventRescueType__BERT_RescueOther = 0,
	EBuffEventRescueType__BERT_BeRescued = 1,
	EBuffEventRescueType__BERT_RescueSelf = 2,
	EBuffEventRescueType__BERT_MAX = 3
};



enum class EWalkType : uint8_t
{
	EWalkType__None                = 0,
	EWalkType__Walk                = 1,
	EWalkType__Canter              = 2,
	EWalkType__Run                 = 3,
	EWalkType__EWalkType_MAX       = 4
};



enum class EWalkSTATE : uint8_t
{
	EWalkSTATE__None               = 0,
	EWalkSTATE__Normal             = 1,
	EWalkSTATE__BreakOut           = 2,
	EWalkSTATE__EWalkSTATE_MAX     = 3
};



enum class ESTMryiapodState : uint8_t
{
	ESTMryiapodState__Stand        = 0,
	ESTMryiapodState__FallDown     = 1,
	ESTMryiapodState__Dead         = 2,
	ESTMryiapodState__ESTMryiapodState_MAX = 3
};



enum class EHorseBehaviorType : uint8_t
{
	EHorseBehaviorType__HorseStateType_Idle = 0,
	EHorseBehaviorType__HorseStateType_Grass = 1,
	EHorseBehaviorType__HorseStateType_ByRiding = 2,
	EHorseBehaviorType__HorseStateType_MAX = 3
};



enum class ETitanLocomotionType : uint8_t
{
	ETitanLocomotionType__ETLT_Walk_F = 0,
	ETitanLocomotionType__ETLT_Walk_B = 1,
	ETitanLocomotionType__ETLT_Walk_L = 2,
	ETitanLocomotionType__ETLT_Walk_R = 3,
	ETitanLocomotionType__ETLT_Run_F = 4,
	ETitanLocomotionType__ETLT_Run_B = 5,
	ETitanLocomotionType__ETLT_RunLF = 6,
	ETitanLocomotionType__ETLT_Run_R = 7,
	ETitanLocomotionType__ETLT_MAX = 8
};



enum class ETurnType : uint8_t
{
	ETT_WaitDelta                  = 0,
	ETT_WaitTouchEnd               = 1,
	ETT_NoTurn                     = 2,
	ETT_MAX                        = 3
};



enum class ETransformerCurveMoveType : uint8_t
{
	ETransformerCurveMoveType__Curve_Unknown = 0,
	ETransformerCurveMoveType__Curve_Velocity_Initial = 1,
	ETransformerCurveMoveType__Curve_Velocity_LocalFrame = 2,
	ETransformerCurveMoveType__Curve_MAX = 3
};



enum class EAccType : uint8_t
{
	EAt_Acc                        = 0,
	EAt_Dec                        = 1,
	EAt_None                       = 2,
	EAT_MAX                        = 3
};



enum class ETweenAnimLoop : uint8_t
{
	ETweenAnimLoop__None           = 0,
	ETweenAnimLoop__Restart        = 1,
	ETweenAnimLoop__PingPong       = 2,
	ETweenAnimLoop__ETweenAnimLoop_MAX = 3
};



enum class ETweenAnimEase : uint8_t
{
	ETweenAnimEase__Linear         = 0,
	ETweenAnimEase__EaseInQuad     = 1,
	ETweenAnimEase__EaseOutQuad    = 2,
	ETweenAnimEase__EaseInOutQuad  = 3,
	ETweenAnimEase__EaseInCubic    = 4,
	ETweenAnimEase__EaseOutCubic   = 5,
	ETweenAnimEase__EaseInOutCubic = 6,
	ETweenAnimEase__EaseInOutSine  = 7,
	ETweenAnimEase__ETweenAnimEase_MAX = 8
};



enum class EBioVehicleSkillStopReason : uint8_t
{
	StopReason_FINISH              = 0,
	StopReason_INTERRUPT           = 1,
	StopReason_MAX                 = 2
};



enum class ETyranState : uint8_t
{
	ETyranState__None              = 0,
	ETyranState__Normal            = 1,
	ETyranState__BreakOut          = 2,
	ETyranState__ETyranState_MAX   = 3
};



enum class EVehicleWeaponBoardDataType : uint8_t
{
	EVehicleWeaponBoardDataType__EVehicleWeaponBoardDataType_None = 0,
	EVehicleWeaponBoardDataType__EVehicleWeaponBoardDataType_MuzzlePos = 1,
	EVehicleWeaponBoardDataType__EVehicleWeaponBoardDataType_MAX = 2
};



enum class EDelegateBindType : uint8_t
{
	EDelegateBindType__BINDTYPE_NONE = 0,
	EDelegateBindType__BINDTYPE_DYNAMIC = 1,
	EDelegateBindType__BINDTYPE_DYNAMIC_MULTICAST = 2,
	EDelegateBindType__BINDTYPE_LUAEVENT = 3,
	EDelegateBindType__BINDTYPE_MAX = 4
};



enum class ECarryBackDirection : uint8_t
{
	ECarryBackDirection__ECarryBackDirection_NONE = 0,
	ECarryBackDirection__ECarryBackDirection_Front = 1,
	ECarryBackDirection__ECarryBackDirection_Back = 2,
	ECarryBackDirection__ECarryBackDirection_Left = 3,
	ECarryBackDirection__ECarryBackDirection_Right = 4,
	ECarryBackDirection__ECarryBackDirection_MAX = 5
};



enum class ECarryBackSkillActionType : uint8_t
{
	ECarryBackSkillActionType__ECBSAT_START = 0,
	ECarryBackSkillActionType__ECBSAT_CARRYBACK = 1,
	ECarryBackSkillActionType__ECBSAT_END = 2,
	ECarryBackSkillActionType__ECBSAT_FAILED = 3,
	ECarryBackSkillActionType__ECBSAT_NONE = 4,
	ECarryBackSkillActionType__ECBSAT_MAX = 5
};



enum class ECarryToVehicleActionState : uint8_t
{
	ECarryToVehicleActionState__ECTV_PREPARE = 0,
	ECarryToVehicleActionState__ECTV_UPDATE = 1,
	ECarryToVehicleActionState__ECTV_FINISH = 2,
	ECarryToVehicleActionState__ECTV_FAILED = 3,
	ECarryToVehicleActionState__ECTV_NONE = 4,
	ECarryToVehicleActionState__ECTV_MAX = 5
};



enum class ECircleMoveDirection : uint8_t
{
	ECircleMoveDirection__Clockwise = 0,
	ECircleMoveDirection__CounterClockwise = 1,
	ECircleMoveDirection__ECircleMoveDirection_MAX = 2
};



enum class EUAECommonTakeDamageRadialOrigin : uint8_t
{
	EUAECommonTakeDamageRadialOrigin__Picker = 0,
	EUAECommonTakeDamageRadialOrigin__Carrier = 1,
	EUAECommonTakeDamageRadialOrigin__EUAECommonTakeDamageRadialOrigin_MAX = 2
};



enum class EContinuousForceDirection : uint8_t
{
	EContinuousForceDirection__OwnerToTarget = 0,
	EContinuousForceDirection__WorldDirection = 1,
	EContinuousForceDirection__OwnerForward = 2,
	EContinuousForceDirection__OriginToTarget = 3,
	EContinuousForceDirection__EContinuousForceDirection_MAX = 4
};



enum class EContinuousForceMode : uint8_t
{
	EContinuousForceMode__AddImpulse = 0,
	EContinuousForceMode__AddForce = 1,
	EContinuousForceMode__Launch   = 2,
	EContinuousForceMode__RequestDirectMove = 3,
	EContinuousForceMode__EContinuousForceMode_MAX = 4
};



enum class EBSSkillActionType : uint8_t
{
	EBSSAT_START                   = 0,
	EBSSAT_PLACE                   = 1,
	EBSSAT_END                     = 2,
	EBSSAT_CHECK                   = 3,
	EBSSAT_PLACE_RELATIVE          = 4,
	EBSSAT_CACHE                   = 5,
	EBSSAT_STOP_PREBUILD           = 6,
	EBSSAT_NONE                    = 7,
	EBSSAT_MAX                     = 8
};



enum class EFindTargetStrategy : uint8_t
{
	EFindTargetStrategy__Default   = 0,
	EFindTargetStrategy__ByAngleLeftToRight = 1,
	EFindTargetStrategy__ByAngleRightToLeft = 2,
	EFindTargetStrategy__EFindTargetStrategy_MAX = 3
};



enum class EJumpStage : uint8_t
{
	EJumpStage__EJumpStage_Rising  = 0,
	EJumpStage__EJumpStage_Hovering = 1,
	EJumpStage__EJumpStage_Diving  = 2,
	EJumpStage__EJumpStage_MAX     = 3
};



enum class EPVEProjectileInitLocationType : uint8_t
{
	EPVEProjectileInitLocationType__UseOwnerLocation = 0,
	EPVEProjectileInitLocationType__UseTargetLocation = 1,
	EPVEProjectileInitLocationType__UseSocketLocation = 2,
	EPVEProjectileInitLocationType__UseBlackBoard = 3,
	EPVEProjectileInitLocationType__UseVehicleLoc = 4,
	EPVEProjectileInitLocationType__EPVEProjectileInitLocationType_MAX = 5
};



enum class ELockPPType : uint8_t
{
	ELPPT_FPP                      = 0,
	ELPPT_TPP                      = 1,
	ELPPT_MAX                      = 2
};



enum class ESkillModifyPropertyType : uint8_t
{
	ESMPT_Bool                     = 0,
	ESMPT_Int                      = 1,
	ESMPT_Float                    = 2,
	ESMPT_String                   = 3,
	ESMPT_MAX                      = 4
};



enum class EAnimMontageTypeAndPosture : uint8_t
{
	AnimMontageTypeAndPosture__FPS_Stand = 0,
	AnimMontageTypeAndPosture__FPS_Crouch = 1,
	AnimMontageTypeAndPosture__FPS_Prone = 2,
	AnimMontageTypeAndPosture__FPS_Vehicle = 3,
	AnimMontageTypeAndPosture__FPS_Max = 4,
	AnimMontageTypeAndPosture__TPS_Stand = 5,
	AnimMontageTypeAndPosture__TPS_Crouch = 6,
	AnimMontageTypeAndPosture__TPS_Prone = 7,
	AnimMontageTypeAndPosture__TPS_Vehicle = 8,
	AnimMontageTypeAndPosture__TPS_Max = 9,
	AnimMontageTypeAndPosture__AnimMontageTypeAndPosture_MAX = 10
};



enum class EPutDownDirection : uint8_t
{
	EPutDownDirection__EPutDownDirection_NONE = 0,
	EPutDownDirection__EPutDownDirection_Front = 1,
	EPutDownDirection__EPutDownDirection_Back = 2,
	EPutDownDirection__EPutDownDirection_MAX = 3
};



enum class EPutDownSkillActionType : uint8_t
{
	EPutDownSkillActionType__EPDSAT_START = 0,
	EPutDownSkillActionType__EPDSAT_PUTDOWN = 1,
	EPutDownSkillActionType__EPDSAT_END = 2,
	EPutDownSkillActionType__EPDSAT_FAILED = 3,
	EPutDownSkillActionType__EPDSAT_NONE = 4,
	EPutDownSkillActionType__EPDSAT_MAX = 5
};



enum class ESkillTouchEvent : uint8_t
{
	ESkillTouchEvent__ESkillTouchEvent_KEY_DOWN = 0,
	ESkillTouchEvent__ESkillTouchEvent_KEY_UP = 1,
	ESkillTouchEvent__ESkillTouchEvent_KEY_MAX = 2
};



enum class ESubAnimInsParamType : uint8_t
{
	ESubAnimInsParamType__Bool     = 0,
	ESubAnimInsParamType__Int      = 1,
	ESubAnimInsParamType__Float    = 2,
	ESubAnimInsParamType__Name     = 3,
	ESubAnimInsParamType__Object   = 4,
	ESubAnimInsParamType__ESubAnimInsParamType_MAX = 5
};



enum class EBeamEffectDataFromType : uint8_t
{
	EBeamEffectDataFromType__FixedPoint = 0,
	EBeamEffectDataFromType__BlackBoard = 1,
	EBeamEffectDataFromType__AttachPoint = 2,
	EBeamEffectDataFromType__EBeamEffectDataFromType_MAX = 3
};



enum class EUAESkillCheckItemType : uint8_t
{
	EUAESkillCheckItemType__EUAESkillCheckItemType_Or = 0,
	EUAESkillCheckItemType__EUAESkillCheckItemType_And = 1,
	EUAESkillCheckItemType__EUAESkillCheckItemType_MAX = 2
};



enum class ESkillConditionIsInHouseCheckType : uint8_t
{
	ESkillConditionIsInHouseCheckType__In = 0,
	ESkillConditionIsInHouseCheckType__NotIn = 1,
	ESkillConditionIsInHouseCheckType__ESkillConditionIsInHouseCheckType_MAX = 2
};



enum class ESkillConditionIsInHouseCheckTarget : uint8_t
{
	ESkillConditionIsInHouseCheckTarget__Self = 0,
	ESkillConditionIsInHouseCheckTarget__SelfForward = 1,
	ESkillConditionIsInHouseCheckTarget__ESkillConditionIsInHouseCheckTarget_MAX = 2
};



enum class EAxisType : uint8_t
{
	EAxis_X                        = 0,
	EAxis_Y                        = 1,
	EAxis_Z                        = 2,
	EAxis_MAX                      = 3
};



enum class ESCRotatorAngleType : uint8_t
{
	ESCRotatorAngleType__ESCRotatorAngleType_Character = 0,
	ESCRotatorAngleType__ESCRotatorAngleType_Controller = 1,
	ESCRotatorAngleType__ESCRotatorAngleType_Camera = 2,
	ESCRotatorAngleType__ESCRotatorAngleType_FreeCamera = 3,
	ESCRotatorAngleType__ESCRotatorAngleType_Max = 4
};



enum class ESettingConfigType : uint8_t
{
	SCT_Int                        = 0,
	SCT_UInt                       = 1,
	SCT_Float                      = 2,
	SCT_Bool                       = 3,
	SCT_String                     = 4,
	SCT_MAX                        = 5
};



enum class EVineRushState : uint8_t
{
	EVineRushState__VRS_Normal     = 0,
	EVineRushState__VRS_Search     = 1,
	EVineRushState__VRS_Wait       = 2,
	EVineRushState__VRS_Teleport   = 3,
	EVineRushState__VRS_MAX        = 4
};



enum class EAnimHurtingTarget : uint8_t
{
	EAnimHurtingTarget__PlayerCharacter = 0,
	EAnimHurtingTarget__SimpleCharacter = 1,
	EAnimHurtingTarget__AllCharacter = 2,
	EAnimHurtingTarget__EAnimHurtingTarget_MAX = 3
};



enum class EHurtApperanceRotateType : uint8_t
{
	EHurtApperanceRotateType__ERotateToCaster = 0,
	EHurtApperanceRotateType__EHurtApperanceRotateType_MAX = 1
};



enum class EUTSkill_SoundCue_ListenType : uint8_t
{
	UTSkill_SoundCue_ListenType__Listen_SelfOnly = 0,
	UTSkill_SoundCue_ListenType__Listen_Teammate = 1,
	UTSkill_SoundCue_ListenType__Listen_Target = 2,
	UTSkill_SoundCue_ListenType__Listen_AllTarget = 3,
	UTSkill_SoundCue_ListenType__Listen_All = 4,
	UTSkill_SoundCue_ListenType__Listen_MAX = 5
};



enum class ENavMeshDebugPacketType : uint8_t
{
	ENavMeshDebugPacketType__TileChunk = 0,
	ENavMeshDebugPacketType__ENavMeshDebugPacketType_MAX = 1
};









struct FMechanicalScorpionCastIdleState
{
	int                                                Seed;                                                     
	float                                              StartTime;                                                
	float                                              StopTime;                                                 
};



struct FMechanicalScorpionWeaponAimRepData
{
	struct FVector_NetQuantizeNormal                   PublishedDirection;                                       
	struct FVector_NetQuantize                         PublishedAimPoint;                                        
	bool                                               bAimActive;                                               
	bool                                               bAimPointValid;                                           
	EMechanicalScorpionWeaponAimProfile                AimProfile;                                               
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              PublishedAimRateDegPerSec;                                
	int                                                AimSerial;                                                
	int                                                BehaviorState;                                            
	int                                                ExecutionSerial;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	class ASTExtraBaseCharacter*                       TargetActor;                                              
};



struct FTurnData
{
	class ASTExtraSimpleCharacter*                     OwnerActor;                                               
	class UCurveVector*                                TurnCurve;                                                
	unsigned char                                      UnknownData00[0x38];                                      
};



struct FMechanicalScorpionCastIdlePose
{
	struct FVector                                     BodyOffset;                                               
	struct FRotator                                    BodyRotation;                                             
	TArray<struct FVector>                             FootOffsets;                                              
	float                                              Weight;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCopyPropertyData
{
	TArray<class UProperty*>                           Properties;                                               
};



struct FBioVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	class UAnimInstance*                               SourceAnimInstance;                                       
	TArray<struct FName>                               SourceInstancePropertyNames;                              
	TArray<class UProperty*>                           SourceInstanceProperty;                                   
	TMap<class UAnimInstance*, struct FCopyPropertyData> DestInstancePropertyMap;                                  
};



struct FBioVehicleBlowUpData
{
	float                                              TimeStamp;                                                
	int                                                InternalBlowUpID;                                         
	bool                                               bIsBeingBlew;                                             
	bool                                               bBTPaused;                                                
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     SelfLocationWhenLaunchHappened;                           
	struct FVector                                     LaunchVelocity;                                           
	TWeakObjectPtr<class AActor>                       HitActor;                                                 
	TWeakObjectPtr<class UPrimitiveComponent>          HitComponent;                                             
};



struct FFootStepEffect
{
	unsigned char                                      UnknownData00[0x28];                                      
	int                                                EnableDeviceLevel;                                        
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FMountMontagePair
{
	class UAnimMontage*                                CreatureMontage;                                          
	class UAnimMontage*                                RiderMontage;                                             
	class UCurveVector*                                LocationCurve;                                            
	class UCurveVector*                                RotationCurve;                                            
	float                                              PlayRate;                                                 
	float                                              Duration;                                                 
	float                                              StartTime;                                                
	float                                              CameraLerpStartTime;                                      
	float                                              CameraLerpDuration;                                       
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAmphibiousBoatThrusterRollSetup
{
	class UCurveVector*                                CurveOmega;                                               
	float                                              OmegaAccel;                                               
	float                                              RPMScale;                                                 
};



struct FRecordBoneData
{
	struct FTransform                                  LastTransform;                                            
	struct FTransform                                  CurrentTransform;                                         
	struct FVector                                     Velocity;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBakedBoneData
{
	TArray<struct FTransform>                          Transforms;                                               
};



struct FBakedSequenceData
{
	bool                                               bValid;                                                   
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FBakedBoneData>                      BoneTransforms;                                           
};



struct FAvatarMaterialGameThreadInfo
{
	class UMaterial*                                   BaseMaterial;                                             
	TMap<struct FName, class UTexture*>                ParamNameToTexture2DMap;                                  
};



struct FWaitSetParamTexture
{
	TMap<struct FName, class UTexture2D*>              TexMap;                                                   
};



struct FAvatarMergerAsyncTempData
{
	TArray<class USkeletalMeshComponent*>              MeshComponentToMerge;                                     
	TMap<class UMaterialInterface*, struct FAvatarMaterialGameThreadInfo> MatInterfaceToGameThreadInfoMap;                          
	TMap<int, struct FWaitSetParamTexture>             WaitForUpdateAndSetParamTextureMap;                       
	TArray<class UTexture2D*>                          CreateForAsyncThreadTextureArray;                         
	TMap<class UMaterial*, class UMaterialInstanceDynamic*> CreateForAsyncThreadMaterialMap;                          
	class UMaterialInstanceDynamic*                    CreateForAsyncThreadBasicMaterial;                        
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FRotationAxisInheritance
{
	unsigned char                                      bInheritPitch : 1;                                        
	unsigned char                                      bInheritYaw : 1;                                          
	unsigned char                                      bInheritRoll : 1;                                         
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FFlySprintParams
{
	EFlySprintDirMode                                  DirMode;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     Direction;                                                
	struct FVector                                     DestLocation;                                             
	float                                              Speed;                                                    
	class UCurveFloat*                                 SpeedCurve;                                               
	float                                              InitSpeed;                                                
	float                                              Acceleration;                                             
	float                                              Friction;                                                 
	float                                              VerticalSpeed;                                            
	class UCurveFloat*                                 VerticalSpeedCurve;                                       
	float                                              Duration;                                                 
	bool                                               bApplyGravity;                                            
	bool                                               bApplyHeightLimit;                                        
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              EndVelocityInheritRatio;                                  
	float                                              StopOnImpactAngle;                                        
};



struct FFlyFollowParams
{
	float                                              MaxFollowDistance;                                        
	float                                              MaxLostDistance;                                          
	bool                                               bBreakFollowOnInput;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FollowRotationSpeed;                                      
	float                                              FollowRotationTolerance;                                  
	bool                                               bAuthorityOnlyPassiveStop;                                
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FBeamEmitterData
{
	int                                                BeamEmitterIndex;                                         
	int                                                BeamEmitterSourceIndex;                                   
	int                                                BeamEmitterTargetIndex;                                   
};



struct FBioVehicleMovementPostPhysicsTickFunction : public FTickFunction
{
	class UBioVehicleMovementComponent*                Target;                                                   
};



struct FBioSimulateLODThesholds
{
	float                                              ScreenSize;                                               
	float                                              LODOptimizeCosAngle;                                      
	float                                              QueryPhysicsInternal;                                     
};



struct FCharacterNetworkSerializationPackedBits
{
	unsigned char                                      UnknownData00[0x518];                                     
};



struct FCharacterServerMovePackedBits : public FCharacterNetworkSerializationPackedBits
{

};



struct FFlyBioVehicleFlyingConfig
{
	float                                              MaxUpSpeed;                                               
	float                                              MaxDownSpeed;                                             
	float                                              MaxFlySpeed;                                              
	float                                              MaxFlyBackSpeed;                                          
	float                                              MaxFlyLeftRightSpeed;                                     
	float                                              MaxFlyingHeight;                                          
	float                                              MinFlyingHeight;                                          
	float                                              FlyingHeightThres;                                        
	float                                              MaxFlyAcceleration;                                       
	float                                              FlySteeringRotationSpeed;                                 
	class UCurveFloat*                                 FlySteeringRotationSpeedCurve;                            
};



struct FFlyBioVehicleLandingConfig
{
	float                                              MaxAllowedFlyingSpeed;                                    
	float                                              MaxLandingTime;                                           
	float                                              LandingToGroundTime;                                      
	bool                                               bForceToGroundInFixedTime;                                
	unsigned char                                      UnknownData00[0x3];                                       
	class UCurveVector*                                LandingCurve;                                             
};



struct FFlyBioVehicleUpdateDistanceToLandConfig
{
	float                                              Height;                                                   
	float                                              Interval;                                                 
	bool                                               bUseSweep;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FBioSnowboardInputState
{
	bool                                               HasDriver;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ThrottleInput;                                            
	float                                              SteeringInput;                                            
	float                                              HandBrakeInput;                                           
};



struct FBioSnowboardSlideConfig
{
	float                                              MaxSpeed;                                                 
	float                                              ReverseMaxSpeed;                                          
	float                                              MaxAcceleration;                                          
	float                                              OverSpeedDeceleration;                                    
	class UCurveFloat*                                 ResistanceCurve;                                          
	class UCurveFloat*                                 GroundDecelCurve;                                         
	class UCurveFloat*                                 BrakeCurve;                                               
	class UCurveFloat*                                 SteerDecelCurve;                                          
	class UCurveFloat*                                 SteerDecelSpeedScaleCurve;                                
	class UCurveFloat*                                 Omega;                                                    
	class UCurveFloat*                                 OmegaAccel;                                               
};



struct FBioVehicleAbilityAnimInstanceProxy : public FAnimAbilityAnimInstanceProxy
{
	class UAnimInstance*                               SourceAnimInstance;                                       
	TArray<struct FName>                               SourceInstancePropertyNames;                              
	TArray<class UProperty*>                           SourceInstanceProperty;                                   
	TMap<class UAnimInstance*, struct FCopyPropertyData> DestInstancePropertyMap;                                  
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FBioVHAgentMove
{
	bool                                               IsFollowingTarget;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	TWeakObjectPtr<class AActor>                       FollowTarget;                                             
	bool                                               IsHostingMove;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector                                     HostingVelocity;                                          
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FFollowTargetMoveRecord
{
	float                                              TimeStamp;                                                
	struct FVector                                     Velocity;                                                 
	struct FVector                                     Location;                                                 
};



struct FCustomVOHelper
{
	bool                                               IsObstacleDetected;                                       
	bool                                               IsPrecipiceDetected;                                      
	bool                                               IsMoveBlocked;                                            
	EVOFlag                                            VOFlag;                                                   
	EVOFlag                                            LastVOFlag;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                VO_LeftOrRight;                                           
	struct FVector                                     VO_Velocity;                                              
	TArray<struct FHitResult>                          VO_Obstacles;                                             
	float                                              VO_Duration;                                              
	struct FVector                                     VO_CacheVelocity;                                         
	struct FVector                                     VO_ObstacleCenter;                                        
	struct FVector                                     VO_OriginLoc;                                             
	int                                                VO_Step;                                                  
	struct FVector                                     Jump_Velocity;                                            
	float                                              CD;                                                       
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FJumpObstacleData
{
	struct FVector                                     ObstacleCenter;                                           
	struct FVector                                     ObstacleNearest;                                          
	struct FVector                                     ObstacleHighest;                                          
	struct FVector                                     JumpV;                                                    
	struct FVector                                     LandSpot;                                                 
	bool                                               bValidJump;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              TimeStamp;                                                
	struct FVector                                     OwnerLocation;                                            
	struct FRotator                                    OwnerRotation;                                            
};



struct FRepPrecipiceInfo
{
	struct FVector                                     Location;                                                 
	struct FVector                                     Direction;                                                
};



struct FSuddenStopData
{
	int                                                SuddenStopID;                                             
	struct FVector                                     Location;                                                 
};



struct FEffectTimeline
{
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	unsigned char                                      UnknownData01[0x28];                                      
	unsigned char                                      Attached : 1;                                             
	unsigned char                                      UnknownData02[0x7];                                       
	struct FName                                       SocketName;                                               
	struct FVector                                     Loc;                                                      
	struct FRotator                                    Rot;                                                      
	struct FVector                                     Scale3D;                                                  
	float                                              Duration;                                                 
	unsigned char                                      UnknownData03[0x10];                                      
};



struct FBioVehicleStateDisable
{
	EBioVehicleState                                   PawnState;                                                
	int8_t                                             Disabled;                                                 
};



struct FRepBirdCage
{
	bool                                               bIsDestroy;                                               
	bool                                               bIsAlert;                                                 
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                AlertIndex;                                               
	int                                                PlayerKey;                                                
	int                                                Count;                                                    
	struct FVector                                     OriPawnLocation;                                          
};



struct FBlanketDanceData
{
	TEnumAsByte<EBlanketDanceState>                    BlanketDanceState;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	class ASTExtraBaseCharacter*                       LookAtCharacter;                                          
};



struct FFootIKSlope
{
	struct FVector                                     StrideDirection;                                          
	float                                              MaxGroundAngle;                                           
	float                                              MaxNormalAngularSpeed;                                    
	bool                                               OrientToGround;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              OrientToPitch;                                            
	float                                              OrientToRoll;                                             
	bool                                               ScaleStride;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              UphillStrideScale;                                        
	float                                              DownhillStrideScale;                                      
	float                                              SidehillStrideScale;                                      
	float                                              SidehillPushOuterFeet;                                    
	bool                                               Lean;                                                     
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              UphillLean;                                               
	float                                              DownhillLean;                                             
	float                                              SidehillLean;                                             
	bool                                               CounterLean;                                              
	unsigned char                                      UnknownData03[0x3];                                       
	struct FName                                       CounterLeanBoneName;                                      
	unsigned char                                      UnknownData04[0x4];                                       
	float                                              UphillCounterLean;                                        
	float                                              DownhillCounterLean;                                      
	float                                              SidehillCounterLean;                                      
	bool                                               MoveRoot;                                                 
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              UphillVertOffset;                                         
	float                                              UphillHorizOffset;                                        
	float                                              DownhillVertOffset;                                       
	float                                              DownhillHorizOffset;                                      
	float                                              SidehillHorizOffset;                                      
	float                                              SidehillVertOffset;                                       
	bool                                               RotateFootToGround;                                       
	unsigned char                                      UnknownData06[0x3];                                       
	float                                              PitchFootAmount;                                          
	float                                              RollFootAmount;                                           
	float                                              FootAngleDeltaSmoothSpeed;                                
	bool                                               OffsetFeetPositions;                                      
	unsigned char                                      UnknownData07[0x3];                                       
	float                                              StaticFootOffset;                                         
	unsigned char                                      UnknownData08[0x4];                                       
};



struct FIKFoot
{
	struct FName                                       BoneName;                                                 
	float                                              PullWeight;                                               
	bool                                               NormalizePulling;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     PositivePullFactor;                                       
	struct FVector                                     NegativePullFactor;                                       
	unsigned char                                      UnknownData01[0x38];                                      
};



struct FIKBoneBendDirection
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     BendDirection;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FIKBoneLimit
{
	struct FName                                       BoneName;                                                 
	float                                              Stiffness;                                                
	unsigned char                                      UnknownData00[0x24];                                      
};



struct FIKExcludedBone
{
	struct FName                                       BoneName;                                                 
};



struct FBuffNodeBlackboardSetting
{
	TEnumAsByte<EUAEBlackboardType>                    Type;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x28];                                      
	unsigned char                                      UnknownData02[0x28];                                      
	unsigned char                                      Execute_Enum;                                             
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                Execute_Int;                                              
	float                                              Execute_Float;                                            
	bool                                               Execute_Bool;                                             
	unsigned char                                      UnknownData04[0x3];                                       
	struct FString                                     Execute_String;                                           
	struct FName                                       Execute_Name;                                             
	struct FVector                                     Execute_Vector;                                           
	struct FRotator                                    Execute_Rotator;                                          
	unsigned char                                      UnknownData05[0x28];                                      
	unsigned char                                      UnknownData06[0x28];                                      
	unsigned char                                      End_Enum;                                                 
	unsigned char                                      UnknownData07[0x3];                                       
	int                                                End_Int;                                                  
	float                                              End_Float;                                                
	bool                                               End_Bool;                                                 
	unsigned char                                      UnknownData08[0x3];                                       
	struct FString                                     End_String;                                               
	struct FName                                       End_Name;                                                 
	struct FVector                                     End_Vector;                                               
	struct FRotator                                    End_Rotator;                                              
};



struct FNearbyCharacter
{
	class ASTExtraCharacter*                           Character;                                                
	float                                              Attractive;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMercenaryAnimInstanceProxy : public FAnimInstanceProxy
{
	class UAnimInstance*                               SourceAnimInstance;                                       
	TArray<struct FName>                               SourceInstancePropertyNames;                              
	TArray<class UProperty*>                           SourceInstanceProperty;                                   
	TMap<class UAnimInstance*, struct FCopyPropertyData> DestInstancePropertyMap;                                  
};



struct FHorseTransformData
{
	EHorseTransformType                                TransformingState;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     StartTransformPoint;                                      
	float                                              TransformEndTime;                                         
	int                                                SkinID;                                                   
};



struct FTransformMatConfig
{
	unsigned char                                      SlotIdx;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       ParamName;                                                
	float                                              LerpSpeed;                                                
	float                                              TargetValue;                                              
	float                                              CurrentValue;                                             
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FDynamicSplineInfo
{
	bool                                               bHasNewWay;                                               
	bool                                               bBuildEnded;                                              
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                EndIndex;                                                 
	TArray<class USimpleSyncSplineMeshComponent*>      MeshComponents;                                           
	TArray<class USimpleSyncInstancedSplineMeshComponent*> MeshInstancedComponents;                                  
	TArray<int>                                        SplineMeshTypeIndex;                                      
	TArray<int>                                        HideMeshIndex;                                            
	TArray<struct FVector>                             SplinePoints;                                             
};



struct FDynamicSplineDebugInfo
{
	struct FVector                                     StartPoint;                                               
	struct FVector                                     EndPoint;                                                 
	bool                                               bHide;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
	class AActor*                                      OverlapActor;                                             
};



struct FFlowerWingMoveParam
{
	float                                              FlyMaxSpeed;                                              
	float                                              FlyRightMaxSpeed;                                         
	float                                              FlyBackMaxSpeed;                                          
	float                                              ForwardAccel;                                             
	float                                              RightAccel;                                               
	float                                              MaxBrakingDeceleration;                                   
	float                                              FlyFriction;                                              
};



struct FNetWallClimbData
{
	bool                                               bIsRunning;                                               
	bool                                               bValidNormal;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     WallNormal;                                               
	struct FVector                                     ExpectedLoc;                                              
	EWallSurfaceState                                  SurfaceState;                                             
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector                                     MovementDir;                                              
	struct FVector                                     Acceleration;                                             
};



struct FWallBodyCoverage
{
	bool                                               bHeadHasWall;                                             
};



struct FWallDetectionResult
{
	bool                                               bDetectedWall;                                            
	bool                                               bValidNormal;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     WallNormal;                                               
	struct FVector                                     WallLocation;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	class UPrimitiveComponent*                         WallComponent;                                            
	struct FWallBodyCoverage                           BodyCoverage;                                             
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FHitResult>                          RawHits;                                                  
	bool                                               bIsFloorExit;                                             
	bool                                               bIsRoofExit;                                              
	unsigned char                                      UnknownData03[0x6];                                       
};



struct FCornerTransitionState
{
	bool                                               bTransitioningCorner;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     OldWallNormal;                                            
	struct FVector                                     NewWallNormal;                                            
	struct FVector                                     OldPawnLocation;                                          
	struct FVector                                     NewPawnLocation;                                          
	EWallSurfaceState                                  OldWallSurfaceState;                                      
	EWallSurfaceState                                  NewWallSurfaceState;                                      
	unsigned char                                      UnknownData01[0x2];                                       
	struct FVector                                     OldMoveDir;                                               
	unsigned char                                      RequestID;                                                
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              ClientTimeStamp;                                          
	float                                              LocalTimeAtStart;                                         
	struct FVector                                     ArcCenter;                                                
	float                                              ArcRadius;                                                
	struct FQuat                                       OldYawRotation;                                           
	struct FQuat                                       NewYawRotation;                                           
	struct FRotator                                    OldControlRotation;                                       
	struct FRotator                                    NewControlRotation;                                       
	float                                              CachedCornerBlendTime;                                    
	bool                                               bNeedsCameraTransition;                                   
	unsigned char                                      UnknownData03[0x3];                                       
};



struct FGhostBalloonMoveParam
{
	float                                              ForwardAccel;                                             
	float                                              ForwardBrakingDecel;                                      
	float                                              SlideForwardSpeedMax;                                     
	float                                              SlideForwardSpeedMin;                                     
	float                                              RightAccel;                                               
	float                                              RightBrakingDecel;                                        
	float                                              SlideRightSpeedMax;                                       
	float                                              HorizontalSlideSpeedMax;                                  
};



struct FCurvedUpdateParam
{
	class ASTExtraBaseCharacter*                       UpdatedPlayer;                                            
	class UHorsePlayerCurvedUpdateComponent*           OwnerComponent;                                           
	class ABioVehicleBase*                             BioOwner;                                                 
	class UCurveVector*                                UsedLocationUpdateCurve;                                  
	class UCurveVector*                                UsedRotationUpdateCurve;                                  
	struct FVector                                     RealExitLocation;                                         
	float                                              Rate;                                                     
	float                                              CameraLerpStartTime;                                      
	float                                              CameraLerpDuration;                                       
	bool                                               bActived;                                                 
	bool                                               bValid;                                                   
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              TimeAccumulator;                                          
	float                                              ZScale;                                                   
	float                                              MaxCurveTime;                                             
};



struct FExitHorseSockets
{
	TArray<struct FName>                               ExitHorseSockets;                                         
};



struct FUncombineHelper
{
	bool                                               bReset;                                                   
	unsigned char                                      UnknownData00[0xF];                                       
	struct FTransform                                  NewTransform;                                             
};



struct FMechaStateSet
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FReplicatedHoverSimData
{
	float                                              HoverDelta;                                               
	struct FVector_NetQuantize100                      SimForce;                                                 
	struct FVector_NetQuantize100                      TraceHitLocation;                                         
	struct FVector_NetQuantize100                      HoverSpotRelativeLoc;                                     
};



struct FHoveringSimulateData
{
	float                                              HoverDelta;                                               
	float                                              HoverDelta_Predict;                                       
	float                                              HoverDelta_Old;                                           
	struct FVector                                     SimForce;                                                 
	bool                                               bInAir;                                                   
	bool                                               bUnderground;                                             
	bool                                               bInWater;                                                 
	bool                                               bPenetration;                                             
	struct FVector                                     TraceHitLocation;                                         
	struct FVector                                     SpotWorldLocation_Last;                                   
	struct FVector                                     HoverSpotRelativeLoc;                                     
};



struct FHoveringBodyData
{
	float                                              DistanceToGround;                                         
	float                                              DistanceToGround_Old;                                     
	struct FVector                                     TraceHitLocation;                                         
	float                                              BadStatusTime;                                            
	bool                                               bInAir;                                                   
	bool                                               bUnderground;                                             
	bool                                               bPenetration;                                             
	bool                                               bInWater;                                                 
};



struct FNitrogenAccelData
{
	struct FVector                                     LocationT0;                                               
	struct FRotator                                    RotationT0;                                               
	bool                                               IsSideOverlap;                                            
	bool                                               IsLeftSideOverlap;                                        
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FLadderMoveData
{
	bool                                               bOnLadder;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	class ALadderActor*                                Ladder;                                                   
	TEnumAsByte<ELadderMoveType>                       LadderMoveType;                                           
	unsigned char                                      LadderStep;                                               
	unsigned char                                      UnknownData01[0x6];                                       
};



struct FFootLockData
{
	struct FName                                       CurveName;                                                
	struct FName                                       BoneName;                                                 
	struct FName                                       IkBoneName;                                               
	float                                              LockAlpha;                                                
	struct FVector                                     LockedLocation;                                           
	struct FRotator                                    LockedRotator;                                            
	float                                              CurveValueLastFrame;                                      
};



struct FMechanicalScorpionWeaponAimConfig
{
	struct FName                                       WeaponSocketName;                                         
	class UCurveFloat*                                 PitchOffsetByDistanceCurve;                               
	class UCurveFloat*                                 YawOffsetByAngleCurve;                                    
	float                                              WeaponOffsetInterpSpeed;                                  
	float                                              AimStateLerpDuration;                                     
};



struct FMechanicalScorpionAbilityAimChannel
{
	float                                              AimActive;                                                
	float                                              AimPointValid;                                            
	float                                              WeaponPitchOffset;                                        
	float                                              WeaponYawOffset;                                          
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FMechaCameraModifier
{
	float                                              ArmLengthAddSpeed;                                        
	float                                              ArmLengthAddTarget;                                       
	float                                              ArmLengthAddCurrent;                                      
	float                                              FovAddSpeed;                                              
	float                                              FovAddTarget;                                             
	float                                              FovAddCurrent;                                            
	float                                              SocketOffsetAddSpeed;                                     
	struct FVector                                     SocketOffsetAddTarget;                                    
	struct FVector                                     SocketOffsetAddCurrent;                                   
	float                                              TargetOffsetAddSpeed;                                     
	struct FVector                                     TargetOffsetAddTarget;                                    
	struct FVector                                     TargetOffsetAddCurrent;                                   
};



struct FMaterialMergeResult
{
	TMap<int, class UMaterialInstanceDynamic*>         MergedMaterial;                                           
	unsigned char                                      UnknownData00[0xA8];                                      
};



struct FMirrorFindReplaceExpression
{
	struct FName                                       FindExpression;                                           
	struct FName                                       ReplaceExpression;                                        
	TEnumAsByte<EMirrorFindReplaceMethod>              FindReplaceMethod;                                        
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBoneMirrorPair
{
	struct FName                                       BoneName;                                                 
	struct FName                                       MirrorBoneName;                                           
};



struct FLinkMoveData
{
	int                                                Frame;                                                    
	struct FVector                                     PreLinkLoc;                                               
	struct FVector                                     PreLinkMoveDelta;                                         
};



struct FHitDymaicParams
{
	struct FVector                                     RelativeLocation;                                         
	struct FRotator                                    RelativeRotation;                                         
	struct FVector                                     BoxExtent;                                                
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	bool                                               bDetectBioVehicle;                                        
	bool                                               bDetectPhysVehicle;                                       
	unsigned char                                      UnknownData00[0x2];                                       
	class AActor*                                      OwnedActor;                                               
};



struct FEnvReponseObstacle
{
	class AActor*                                      Actor;                                                    
	struct FVector                                     ActorLocation;                                            
	struct FRotator                                    ActorRotator;                                             
	float                                              RelativeHeight;                                           
	float                                              Distance;                                                 
	struct FVector                                     HitNormal;                                                
	struct FVector                                     TopPoint;                                                 
};



struct FCreateSkillItemInfo
{
	TArray<ECreateSkillItemType>                       CreateSkillItemTypes;                                     
	int                                                BuildingSystemID;                                         
	int                                                CheckHight;                                               
	float                                              MaxSlopeAngle;                                            
	float                                              MaxAssociateDistance;                                     
	float                                              MinAssociateDistance;                                     
	float                                              MaxHeightDifference;                                      
};



struct FTeamPosition
{
	struct FVector                                     Position;                                                 
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FNinjaMoveState
{
	bool                                               bInNinjaMoveState;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	class ASTExtraBaseCharacter*                       LeaderPlayer;                                             
	class UNinjaMoveComponent*                         LeaderNinjaMoveComponent;                                 
};



struct FPoseSearchData
{
	class UAnimSequence*                               Sequence;                                                 
	struct FVector2D                                   SampleRange;                                              
};



struct FStopPoseData
{
	TArray<struct FPoseSearchData>                     StopSequences;                                            
};



struct FGaitStopSequenceData
{
	TMap<TEnumAsByte<EMoveDirection>, struct FStopPoseData> StopData;                                                 
};



struct FCircleRunSequenceData
{
	class UAnimSequence*                               CircleRunStartAnimSequence;                               
	class UAnimSequence*                               CircleRunLoopAnimSequence;                                
	TArray<struct FPoseSearchData>                     CircleStopRunData;                                        
};



struct FMotionSearchResult
{
	float                                              StartTime;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	class UAnimSequence*                               ResultSequence;                                           
};



struct FHeadItem
{
	struct FString                                     PlayerName;                                               
	class UOBModePositionWidget*                       HeadItemWidget;                                           
};



struct FTeamData
{
	TArray<struct FHeadItem>                           TeamHeadItems;                                            
};



struct FModOBActorPathConfig
{
	struct FString                                     ModName;                                                  
	struct FString                                     BPPath;                                                   
};



struct FODMGearSpeedCurve
{
	float                                              Distance;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	class UCurveFloat*                                 SpeedCurve;                                               
};



struct FMonsterLeisureItem
{
	struct FName                                       Key;                                                      
	float                                              Duration;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	class UAnimationAsset*                             AnimSeq;                                                  
};



struct FMonsterLeisureInfo
{
	TArray<struct FMonsterLeisureItem>                 LeisureArrs;                                              
};



struct FEmoteInteractAsset
{
	class UAnimationAsset*                             TriggerEmote;                                             
	class UAnimationAsset*                             VehicleEmote;                                             
	class UAnimationAsset*                             DriverEmote;                                              
	class UAnimationAsset*                             PassengerEmote;                                           
};



struct FEmoteInteractItem
{
	TArray<struct FEmoteInteractAsset>                 EmoteInteractArrs;                                        
};



struct FRepPandaEmoteInteract
{
	bool                                               bIsEmoteInteraction;                                      
	bool                                               bIsStopAllEmoteAnim;                                      
	unsigned char                                      EmoteAnimID;                                              
	EVehicleEmoteInteractType                          EmoteType;                                                
	int                                                Count;                                                    
	class AActor*                                      Trigger;                                                  
	bool                                               bPlayPassengerAnim;                                       
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FViewPoint
{
	bool                                               bHasSaved;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
};



struct FSpeedRangeToAnimPlayRateRange
{
	struct FVector2D                                   SpeedRange;                                               
	struct FVector2D                                   AnimPlayRateRange;                                        
};



struct FTurnMarginToAnimMargin
{
	struct FVector2D                                   TurnMargin;                                               
	struct FVector2D                                   AnimMargin;                                               
};



struct FAccelerationMarginToAnimMargin
{
	struct FVector2D                                   AccelerationMargin;                                       
	struct FVector2D                                   AnimMargin;                                               
};



struct FGroundParticle
{
	class UParticleSystem*                             GroundFlyingParticle;                                     
	struct FVector                                     LeftFootAttachPositionOffset;                             
	struct FRotator                                    LeftFootAttachRotationOffset;                             
	struct FVector                                     RightFootAttachPositionOffset;                            
	struct FRotator                                    RightFootAttachRotationOffset;                            
};



struct FDecalState
{
	int                                                State;                                                    
	struct FVector                                     pos;                                                      
};



struct FPushSnowBallSize
{
	bool                                               bSnowBallActivated;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	class APenguinSnowBall*                            SnowBall;                                                 
	float                                              MovedDistance;                                            
	float                                              Radius;                                                   
};



struct FPickTargetParam
{
	bool                                               bStartTraceFromSpringArm;                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              TraceDistance;                                            
	bool                                               bSingleChannel;                                           
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	bool                                               bCheckActorVisible;                                       
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FPickTargetSweepParam
{
	float                                              SweepRadius;                                              
};



struct FPickTargetScreenParam
{
	struct FVector2D                                   ScreenCrosshairBox;                                       
	float                                              DetectionRadius;                                          
	bool                                               bCustomFilter;                                            
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	bool                                               bCheckActorVisible;                                       
	bool                                               bCheckComponentVisible;                                   
	bool                                               bOnlyDetectCharacters;                                    
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UClass*>                              TargetClasses;                                            
};



struct FPickTargetFanSweepParam
{
	int                                                TraceSegments;                                            
	float                                              TraceAngle;                                               
	bool                                               bLineTraceFirst;                                          
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FPickTargetResultFilterParam
{
	bool                                               bAutoUseResultFilter;                                     
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       FilterTargetActorTag;                                     
	struct FName                                       FilterTargetComponentTag;                                 
	TArray<class UClass*>                              WrongTargetsClass;                                        
	bool                                               bCheckComponentVisible;                                   
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FPickTargetTraceFilterParam
{
	bool                                               bAutoUseTraceFilter;                                      
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       IgnoreActorTag;                                           
	struct FName                                       IgnoreComponentTag;                                       
	TArray<class UClass*>                              IgnoreActorClasses;                                       
	int                                                MaxPenetrationCount;                                      
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FPickTargetFallbackParam
{
	ETraceMissedFallback                               FallbackStrategy;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              GroundTraceHeight;                                        
};



struct FBuildCheckParam
{
	bool                                               bAutoUseBuildCheck;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FloatErrorTolerance;                                      
	TArray<TEnumAsByte<ECollisionChannel>>             BlockingChannels;                                         
	TArray<class UClass*>                              FilterActors;                                             
	struct FVector                                     BoxExtent;                                                
	float                                              MaxCheckPlaceHeight;                                      
	bool                                               bAngleDetect;                                             
	bool                                               LocationCheck;                                            
	bool                                               OverlapCheck;                                             
	unsigned char                                      UnknownData01[0x5];                                       
};



struct FPickTargetConfig
{
	EPickTargetMode                                    PickMode;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FPickTargetParam                            PickParam;                                                
	struct FPickTargetSweepParam                       SweepParam;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	struct FPickTargetScreenParam                      ScreenParam;                                              
	struct FPickTargetFanSweepParam                    FanSweepParam;                                            
	unsigned char                                      UnknownData02[0x4];                                       
	struct FPickTargetResultFilterParam                ResultFilterParam;                                        
	struct FPickTargetTraceFilterParam                 TraceFilterParam;                                         
	struct FPickTargetFallbackParam                    MissedFallback;                                           
	struct FBuildCheckParam                            BuildCheckParam;                                          
	bool                                               bDebugDraw;                                               
	unsigned char                                      UnknownData03[0x7];                                       
};



struct FPickTargetContext
{
	class ACharacter*                                  OwnerChar;                                                
	struct FName                                       ConfigKey;                                                
	struct FVector                                     StartLocation;                                            
	struct FVector                                     TraceDirection;                                           
	struct FVector                                     EndLocation;                                              
	bool                                               bTraceHit;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FHitResult                                  HitResult;                                                
	TArray<class AActor*>                              DetectedActors;                                           
	bool                                               bResultValid;                                             
	bool                                               bFallbackHit;                                             
	bool                                               bFinalResult;                                             
	unsigned char                                      UnknownData01[0x5];                                       
};



struct FPterosaurUpdateDistanceToLandConfig
{
	float                                              Height;                                                   
	float                                              Interval;                                                 
	bool                                               bUseSweep;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FPterosaurLandingConfig
{
	float                                              MaxAllowedFlyingSpeed;                                    
	float                                              MaxLandingTime;                                           
	float                                              LandingToGroundTime;                                      
	bool                                               bForceToGroundInFixedTime;                                
	unsigned char                                      UnknownData00[0x3];                                       
	class UCurveVector*                                LandingCurve;                                             
};



struct FHeadCapsuleSetup
{
	struct FName                                       CollisionProfileName;                                     
	struct FName                                       Tag;                                                      
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	struct FVector                                     RelativeLoc;                                              
	struct FRotator                                    RelativeRot;                                              
	TArray<TEnumAsByte<ECollisionChannel>>             TraceChannels;                                            
	TArray<TEnumAsByte<ECollisionResponse>>            TraceResponses;                                           
};



struct FRecordData
{
	float                                              RecordDeltaTime;                                          
	struct FVector                                     RecordLocation;                                           
};



struct FSkyHorseLightTrailConfig
{
	unsigned char                                      UnknownData00[0x28];                                      
	struct FName                                       FirstSocketName;                                          
	struct FName                                       SecondSocketName;                                         
};



struct FSkyHorseCurveMoveConfig
{
	class UCurveVector*                                VectorCurve;                                              
	float                                              FallbackSpeed;                                            
	float                                              Duration;                                                 
	float                                              Cooldown;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTextureLODBiasOverrideInfo
{
	TEnumAsByte<ETextureGroup>                         Group;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<int>                                        OverrideLODBias;                                          
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FMeshOptConfig
{
	int8_t                                             DeviceLevel;                                              
	int8_t                                             LODBias;                                                  
	bool                                               bScreenSizeForAIOnly;                                     
	bool                                               bLODBiasForAISkelOnly;                                    
	float                                              StaticMeshOverrideScreenSize;                             
	float                                              SkeletMeshOverrideScreenSize;                             
};



struct FMinUROConfig
{
	struct FString                                     PlatformLimit;                                            
	int8_t                                             FPSLimit;                                                 
	int8_t                                             RenderQualityLimit;                                       
	int8_t                                             CharacterSimulatedMinURO;                                 
	unsigned char                                      UnknownData00[0x5];                                       
};



struct FShadowOptConfig
{
	bool                                               Enable;                                                   
	unsigned char                                      DeviceLevel;                                              
	unsigned char                                      BearerType;                                               
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              LOD0_ScreenSize;                                          
	int                                                LOD0_MaxNum;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	float                                              LOD1_ScreenSize;                                          
	int                                                LOD1_MaxNum;                                              
	unsigned char                                      UnknownData02[0x4];                                       
	float                                              LOD2_ScreenSize;                                          
	int                                                LOD2_MaxNum;                                              
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FSmartBearerConfig
{
	float                                              MaxBearerNum;                                             
	int                                                NormalSkinShowNum;                                        
};



struct FDeviceSmartBearerOverrideConfig
{
	struct FString                                     DeviceName;                                               
	struct FSmartBearerConfig                          SmartBearerConfig;                                        
};



struct FLingeringRope
{
	class UCableComponent*                             CableComponent;                                           
	class USceneComponent*                             EndAnchor;                                                
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          
	class UParticleSystemComponent*                    EndEffectComponent;                                       
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSpiderSwingDetectResult
{
	bool                                               bFound;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     AttachPoint;                                              
	class AActor*                                      HitActor;                                                 
	bool                                               bFromHit;                                                 
	bool                                               bIsSkyHook;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              Score;                                                    
};



struct FSpiderSwingSyncData
{
	ESpiderSwingMoveState                              MoveState;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector_NetQuantize100                      AttachPoint;                                              
	float                                              RopeLength;                                               
	struct FVector_NetQuantize10                       Velocity;                                                 
	ESpiderSwingHandSide                               HandSide;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FSpiderSwingStartRequest
{
	struct FVector                                     AttachPoint;                                              
	ESpiderSwingHandSide                               ClientHandSide;                                           
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FActorMarkData
{
	class UClass*                                      MarkActorClass;                                           
	int                                                TypeId;                                                   
	EAddMarkFlag                                       MapAdded;                                                 
	bool                                               bLocalData;                                               
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              DistanceToMark;                                           
	bool                                               bUpdateRotation;                                          
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FBuffAttachmentItem
{
	class USceneComponent*                             Component;                                                
	unsigned char                                      UnknownData00[0x28];                                      
	bool                                               bCapsuleTop;                                              
	bool                                               bOnlyLocalControl;                                        
	bool                                               bDestroyOnEnd;                                            
	unsigned char                                      UnknownData01[0x5];                                       
	struct FName                                       SocketName;                                               
	EAttachRelativeLocation                            NonSocketAttachLocation;                                  
	unsigned char                                      UnknownData02[0x3];                                       
	struct FVector                                     LocationOffset;                                           
	struct FRotator                                    RotationOffset;                                           
	float                                              Scale;                                                    
	EBuffTargetType                                    TargetType;                                               
	unsigned char                                      UnknownData03[0x7];                                       
};



struct FBACustomDamageData
{
	float                                              ExtraDamageScale;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ExtraDamageScaleFormula;                                  
	bool                                               bMultiplyOnLayer;                                         
	bool                                               bEnableAllDamage;                                         
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<TEnumAsByte<EWeaponTypeNew>>                ValidWeaponTypeMap;                                       
};



struct FBACustomDistDamageData : public FBACustomDamageData
{
	float                                              minDist;                                                  
	float                                              MaxDist;                                                  
};



struct FBACustomHpDamageData : public FBACustomDamageData
{
	float                                              MinHpPer;                                                 
	float                                              MaxHpPer;                                                 
};



struct FBACustomTypeDamageData : public FBACustomDamageData
{
	TArray<int>                                        ResIDArray;                                               
	TArray<struct FName>                               TagArray;                                                 
};



struct FPropSkillExplodeParam
{
	float                                              GenProbility;                                             
	int                                                PropSkillLevel;                                           
	float                                              PlayerInnerDamageHealthRatio;                             
	float                                              PlayerOuterDamageHealthRatio;                             
	float                                              ZombieInnerDamageHealthRatio;                             
	float                                              ZombieOuterDamageHealthRatio;                             
	float                                              WallWeakenDamageRatio;                                    
	float                                              InnerDamageRadius;                                        
	float                                              OuterDamageRadius;                                        
};



struct FPropSkillPosionParam
{
	float                                              GenProbility;                                             
	int                                                PropSkillLevel;                                           
	float                                              CheckPeriod;                                              
	int                                                HumanBuffID;                                              
	int                                                ZombieBuffID;                                             
};



struct FBuffAttrModifierItem
{
	struct FString                                     AttrName;                                                 
	float                                              ModifyValue;                                              
	EAttrModifyRefType                                 AttrRefValueType;                                         
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FJumpStepInfo
{
	float                                              JumpZVelocity;                                            
};



struct FMultipleJumpInfo
{
	TArray<struct FJumpStepInfo>                       JumpSteps;                                                
};



struct FPostEventParams
{
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	TMap<struct FString, struct FString>               ActionParams;                                             
	TArray<struct FUAEBlackboardKeySelector>           BBKeySelectors;                                           
};



struct FPostEventWithCauserParams
{
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
};



struct FReplaceAvatarMaterialParams
{
	struct FName                                       ParameterName;                                            
	class UCurveFloat*                                 ParameterValueCurve;                                      
};



struct FBuffSpawnActorItem
{
	unsigned char                                      UnknownData00[0x28];                                      
	bool                                               bLoadAsync;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	struct FName                                       SocketName;                                               
	EBuffTargetSocketType                              TargetType;                                               
	bool                                               bUseSharedTarget;                                         
	unsigned char                                      UnknownData02[0x2];                                       
	struct FVector                                     RelLocation;                                              
	bool                                               bUseGroundNormal;                                         
	unsigned char                                      UnknownData03[0x3];                                       
	struct FVector                                     GroundOffset;                                             
	struct FRotator                                    Rotator;                                                  
	EBuffEnabledRole                                   EnableRole;                                               
	bool                                               IsDestroyOnBuffEnd;                                       
	unsigned char                                      UnknownData04[0x2];                                       
	float                                              LifeTime;                                                 
	float                                              NotEndDestroyLifeTime;                                    
	bool                                               bAttachMesh;                                              
	bool                                               bDSUpdateMesh;                                            
	bool                                               bRecordCauser;                                            
	unsigned char                                      UnknownData05[0x5];                                       
};



struct FBAWeaponAttrModifyConfig
{
	struct FString                                     AttrName;                                                 
	float                                              ModifyValue;                                              
	EAttrModifyRefType                                 AttrRefValueType;                                         
	bool                                               MultiplyOnLayer;                                          
	unsigned char                                      UnknownData00[0x2];                                       
	struct FString                                     ModifyValueFormula;                                       
	bool                                               ClientSimulate;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	uint32_t                                           ModifyID;                                                 
};



struct FDestructionConfig
{
	float                                              DestructionRadius;                                        
	float                                              DestructionRadiusScale;                                   
	float                                              DestructionDamage;                                        
	float                                              DestructionDamageScale;                                   
	float                                              DestructionVelocity;                                      
};



struct FDecorationCircleMatParams
{
	struct FVector2D                                   HPRange;                                                  
	struct FName                                       ColorParamName;                                           
	struct FName                                       LightColorParamName;                                      
	struct FLinearColor                                Color;                                                    
};



struct FDecorationCircle
{
	unsigned char                                      UnknownData00[0x28];                                      
	struct FName                                       SocketName;                                               
	struct FTransform                                  DefaultTransform;                                         
	struct FName                                       MatSlotName;                                              
	TArray<struct FDecorationCircleMatParams>          MatParams;                                                
	TWeakObjectPtr<class USkeletalMeshComponent>       MeshComponent;                                            
	TWeakObjectPtr<class UMaterialInstanceDynamic>     MatInstance;                                              
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FMyriapodVehicleMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	class USTExtraMyriapodVehMovementCom*              Target;                                                   
};



struct FTPlanPlayerInfo
{
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      State;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                Kills;                                                    
	int                                                Worth;                                                    
};



struct FTPlanTeamInfo
{
	int                                                TeamID;                                                   
	int                                                TeamWorth;                                                
	int                                                TeamKills;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FTPlanPlayerInfo>                    PlayerInfos;                                              
	TArray<struct FVector>                             EscapePosi;                                               
};



struct FTPlanPlayerUndergroundList
{
	uint64_t                                           PlayerUndergroundIndexLow;                                
	uint64_t                                           PlayerUndergroundIndexHigh;                               
};



struct FTitanHide
{
	bool                                               bHideIngame;                                              
	bool                                               bStopTick;                                                
	bool                                               bAutonomousEnter;                                         
	unsigned char                                      UnknownData00[0x1];                                       
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
};



struct FAttackPauseFrameData
{
	float                                              PauseDuration;                                            
	float                                              NewPlayRateAfterPause;                                    
	class UParticleSystem*                             HitParticle;                                              
	struct FVector                                     ParticleLocationOffset;                                   
	struct FRotator                                    ParticleRotationOffset;                                   
	class UClass*                                      CameraShaker;                                             
	float                                              CameraShakeScale;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	class UAkAudioEvent*                               HitAudio;                                                 
	float                                              CapsuleTraceRadius;                                       
	float                                              CapsuleTraceHalfHeight;                                   
	float                                              CapsuleTraceVerticalOffset;                               
	float                                              CapsuleTraceForwardOffset;                                
};



struct FAudioConfigWithTips
{
	unsigned char                                      UnknownData00[0x28];                                      
	int                                                TextIDForTips;                                            
	float                                              TextDurationForTips;                                      
	ESTExtraVehicleType                                ForceVehicleType;                                         
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FTransformerCurveMovingData
{
	struct FName                                       CurveMovingTag;                                           
	class UCurveVector*                                CurveAsset;                                               
	ETransformerCurveMoveType                          CurveType;                                                
	bool                                               bAdditiveMove;                                            
	bool                                               bMaintainCurVel;                                          
	bool                                               bInterruptByInput;                                        
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTransformerCurveNetData
{
	int                                                CurveIndex;                                               
	struct FVector                                     CurveDirX;                                                
	struct FVector                                     CurveOrigin;                                              
};



struct FTransformerStateSet
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FBunchAction
{
	class UUTSkillAction*                              Effect;                                                   
	bool                                               bExeReset;                                                
	bool                                               bExeUndo;                                                 
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FViewInfoCurve
{
	float                                              DistanceThreshold;                                        
	unsigned char                                      UnknownData00[0xC];                                       
	struct FMinimalViewInfo                            AdditiveCameraViewInfo;                                   
	class UCurveFloat*                                 FovCurve;                                                 
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FRandomBuffItem
{
	int                                                Probability;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       BuffName;                                                 
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	int                                                AddLayerCount;                                            
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FVehicleWeaponBoardDataConfigItem
{
	int                                                SeatID;                                                   
	int                                                WeaponListID;                                             
	EVehicleWeaponBoardDataType                        DataType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FUAEBlackboardKeySelector                   BlackboardKey;                                            
};



struct FSkillAction_AttachActorCreateData
{
	class UClass*                                      ActorTemplate;                                            
	struct FName                                       AttachSocketName;                                         
	struct FVector                                     RelativeLocation;                                         
	struct FRotator                                    RelativeRotation;                                         
	bool                                               DestroyAfterSkill;                                        
	bool                                               DestroyAfterPhase;                                        
	bool                                               SnapToTargetIncludingScale;                               
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              DestroyAfterTime;                                         
};



struct FAirAttackConfig
{
	float                                              AttackLastingTime;                                        
	float                                              AttackAreaRadius;                                         
	int                                                TotalBombs;                                               
	float                                              BombsRadius;                                              
	class UClass*                                      BombActorTemplate;                                        
};



struct FSpawnVehicleConfig
{
	int                                                VehicleSpawnID;                                           
	struct FVector                                     OffsetLocation;                                           
	bool                                               AutoEnterVehicle;                                         
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FAKSwitchParam
{
	struct FString                                     SwitchGroup;                                              
	struct FString                                     SwitchState;                                              
};



struct FAKRTPCParam
{
	struct FString                                     RTPC;                                                     
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	class UCurveFloat*                                 ValueCurve;                                               
	int                                                InterpolationTimeMs;                                      
	bool                                               NeedTick;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FTargetCommonFilter
{
	TArray<EPawnState>                                 ExcludePawnStates;                                        
	TArray<int>                                        ExcludeBuffIDs;                                           
	TArray<struct FName>                               ExcludeActorTags;                                         
	TArray<struct FName>                               RequiredActorTags;                                        
};



struct FDisableBioVehicleStateInfo
{
	EBioVehicleState                                   State;                                                    
	bool                                               bNewDisable;                                              
	bool                                               bResetOnEnable;                                           
};



struct FDisablePawnStateInfo
{
	EPawnState                                         State;                                                    
	bool                                               bNewDisable;                                              
	bool                                               bResetOnEnable;                                           
};



struct FSkillAction_DropItemData
{
	int                                                ItemId;                                                   
	int                                                Num;                                                      
};



struct FSkillAction_HideMainUIData
{
	struct FString                                     RegistUIName;                                             
};



struct FIngoreSkillArray
{
	TArray<int>                                        SkillList;                                                
};



struct FCollisionChannelResModify
{
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         
	TEnumAsByte<ECollisionResponse>                    ModifyResponse;                                           
};



struct FMoveSpeedCurve
{
	float                                              DistanceThreshold;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	class UCurveFloat*                                 LaunchSpeedCurve;                                         
};



struct FPlayMontageAsyncloadParams
{
	unsigned char                                      UnknownData00[0x38];                                      
};



struct FWeaponStateToAnimPair
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponTypeNew;                                            
	unsigned char                                      UnknownData00[0x7];                                       
	struct FSkillPoseMontageData                       PoseMontageData;                                          
	struct FSkillPoseMontageData                       FPPPoseMontageData;                                       
};



struct FAvatarSlotAnimData
{
	unsigned char                                      UnknownData00[0x28];                                      
	float                                              PlayRate;                                                 
	float                                              StartingPosition;                                         
	struct FName                                       StartingSection;                                          
	bool                                               ShowSlotMesh;                                             
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FSkillAction_SequenceCreateData
{
	struct FSoftClassPath                              SequenceActorTemplate;                                    
	struct FSoftObjectPath                             LevelSequence;                                            
	bool                                               bUseSelfTransformOrigin;                                  
	unsigned char                                      UnknownData00[0x7];                                       
	class UUTSkillLocationPicker*                      LocationPicker;                                           
	class UUAESkillPicker*                             TargetTransformPicker;                                    
	bool                                               bSetLocationToBB;                                         
	unsigned char                                      UnknownData01[0x7];                                       
	struct FName                                       BBName;                                                   
	bool                                               bDestroyedAtSkillEnd;                                     
	bool                                               bForceDestroyedAtSkillEnd;                                
	unsigned char                                      UnknownData02[0x6];                                       
	struct FUAEBlackboardKeySelector                   CachedSpawnActorKey;                                      
};



struct FSACacheSoftObjectList
{
	TArray<class UObject*>                             Objects;                                                  
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FRandomActionGroup
{
	TArray<class UUTSkillAction*>                      Actions;                                                  
};



struct FRandomActionByWeightCandidate
{
	int                                                Weight;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	class UUTSkillAction*                              Action;                                                   
};



struct FSlotMaterialParameterValue
{
	struct FName                                       SlotParameterName;                                        
	class UCurveFloat*                                 SlotParameterValueCurve;                                  
	float                                              SlotParameterValue;                                       
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FSubAnimInstanceParam
{
	struct FName                                       PropertyName;                                             
	ESubAnimInsParamType                               Type;                                                     
	bool                                               BoolValue;                                                
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                IntValue;                                                 
	float                                              FloatValue;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       NameValue;                                                
	unsigned char                                      UnknownData02[0x28];                                      
};



struct FSkillAction_ShowMainUIData
{
	struct FString                                     RegistUIName;                                             
	bool                                               AutoHideOnPhaseEnd;                                       
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FSkillAction_SpawnActorCreateData
{
	class UClass*                                      ActorTemplate;                                            
	unsigned char                                      UnknownData00[0x28];                                      
	struct FVector                                     DefaultLocationOffset;                                    
	bool                                               bPickFromTarget;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	class UUAESkillPicker*                             DamagePicker;                                             
	bool                                               bSetLocationToBB;                                         
	bool                                               bSetLocationToSkillBB;                                    
	unsigned char                                      UnknownData02[0x6];                                       
	struct FName                                       BBName;                                                   
	bool                                               bTraceGround;                                             
	unsigned char                                      UnknownData03[0x3];                                       
	struct FVector                                     TraceGroundOffset;                                        
	class UUTSkillLocationPicker*                      LocationPicker;                                           
	bool                                               bTriggerPickFailedEvent;                                  
	unsigned char                                      UnknownData04[0x7];                                       
	struct FString                                     TriggerPickFailedEventName;                               
	bool                                               bLocalSpawn;                                              
	bool                                               bClientSpawn;                                             
	bool                                               bDestroyedAtSkillEnd;                                     
	bool                                               bForceDestroyedAtSkillEnd;                                
	float                                              DelayDestroyedAtSkillEnd;                                 
	bool                                               bUseOffsetWithOutLocationPicker;                          
	bool                                               bUseOffsetWithDamagePicker;                               
	bool                                               bEnableAttach;                                            
	unsigned char                                      UnknownData05[0x5];                                       
	struct FName                                       AttachSocket;                                             
	bool                                               bAlignMainMesh;                                           
	bool                                               bAlignRotation;                                           
	bool                                               bAlignScale3D;                                            
	unsigned char                                      UnknownData06[0x1];                                       
	struct FVector                                     OffsetLocationStand;                                      
	struct FVector                                     OffsetLocationCrouch;                                     
	struct FVector                                     OffsetLocationProne;                                      
	struct FRotator                                    OffsetRotation;                                           
	bool                                               bAllowChangePoseWillUpdating;                             
	bool                                               bEnableRelativeTransform;                                 
	unsigned char                                      UnknownData07[0x2];                                       
	struct FUAEBlackboardKeySelector                   CachedSpawnActorKey;                                      
	float                                              DelaySecondsDestroy;                                      
	ESpawnActorCollisionHandlingMethod                 SpawnMethod;                                              
	unsigned char                                      UnknownData08[0x3];                                       
};



struct FBeamEffectData
{
	EBeamEffectDataFromType                            DataFromType;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     Location;                                                 
	struct FVector                                     LocationOffset;                                           
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       BlackBoardParam;                                          
	struct FName                                       AttachPointName;                                          
};



struct FSpawnMonsterConfig
{
	int                                                MonsterID;                                                
	struct FVector                                     pos;                                                      
	bool                                               bIsRelativePos;                                           
	bool                                               bNeedOverlapCheck;                                        
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              LineTraceHeight;                                          
	float                                              CapsuleCheckRadius;                                       
	float                                              CapsuleCheckHalfHeight;                                   
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	float                                              NineGridSearchRadius;                                     
	int                                                NineGridSearchFloor;                                      
	bool                                               bSearchRandom;                                            
	unsigned char                                      UnknownData01[0x57];                                      
};



struct FSkillAction_SpawnProjectileCreateData
{
	class UClass*                                      ProjectileTemplate;                                       
	struct FVector                                     OffsetLocation;                                           
	struct FRotator                                    OffsetRotation;                                           
};



struct FUAESkillCheckItemInfo
{
	TEnumAsByte<EOperatorType>                         OperatorType;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                NeedItemNum;                                              
	int                                                ItemId;                                                   
	int                                                Type;                                                     
};



struct FCharPoseSwitch
{
	TEnumAsByte<ECharacterPoseType>                    From;                                                     
	TEnumAsByte<ECharacterPoseType>                    To;                                                       
};



struct FUTSkillAppearance_ParticleSystem_Item
{
	class UUTSkillPicker*                              TargetPicker;                                             
	class UParticleSystem*                             TemplateSelfTeam_Effect;                                  
	class UParticleSystem*                             TemplateEnermyTeam_Effect;                                
	class UParticleSystem*                             TemplateSelfTeamFPP_Effect;                               
	unsigned char                                      UnknownData00[0x28];                                      
	unsigned char                                      UnknownData01[0x28];                                      
	unsigned char                                      UnknownData02[0x28];                                      
	bool                                               bLoop;                                                    
	bool                                               StopAfterPhase;                                           
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              Scale;                                                    
	struct FName                                       SocketName;                                               
	struct FName                                       RefSocketName;                                            
	struct FVector                                     LocationOffset;                                           
	struct FRotator                                    RotationOffset;                                           
	struct FVector                                     LocationOffsetTPP;                                        
	struct FRotator                                    RotationOffsetTPP;                                        
	float                                              ScaleTPP;                                                 
	unsigned char                                      UnknownData04[0x4];                                       
	struct FName                                       HurtRotationSocketName;                                   
	float                                              AutoDispearTime;                                          
	bool                                               bAttachToPawn;                                            
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              DetachOnDelayTime;                                        
	bool                                               bNeedEmitter;                                             
	bool                                               DisableOnLowCPU;                                          
	unsigned char                                      UnknownData06[0x2];                                       
	struct FName                                       DamageableInterfaceTag;                                   
};



struct FUTSkillAppearance_SoundCue_Item
{
	EUTSkill_SoundCue_ListenType                       ListenType;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	class UAkAudioEvent*                               AkEvent;                                                  
	unsigned char                                      UnknownData01[0x28];                                      
	unsigned char                                      UnknownData02[0x28];                                      
	bool                                               bLoop;                                                    
	unsigned char                                      UnknownData03[0x7];                                       
};



struct FBioHitData
{
	float                                              Time;                                                     
	int                                                Frame;                                                    
	float                                              Damage;                                                   
	struct FVector                                     LaunchVelocity;                                           
	class AActor*                                      HitActor;                                                 
	class UPrimitiveComponent*                         HitComponent;                                             
};



struct FVehicleHitBioVHTriggerSetup
{
	struct FName                                       CollisionProfileName;                                     
	struct FName                                       Tag;                                                      
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
};



struct FDynamicTriggerShape
{
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	float                                              LastUpdateSpeed;                                          
};



struct FLODLimitNum
{
	int                                                AutonomousMinLOD;                                         
	int                                                SimulatedMinLOD;                                          
	int                                                AutonomousMinURO;                                         
	int                                                SimulatedMinURO;                                          
};



struct FVehicleLODLimit
{
	struct FLODLimitNum                                HighDevice;                                               
	struct FLODLimitNum                                MediumDevice;                                             
	struct FLODLimitNum                                LowDevice;                                                
};



struct FSeatMountMontageSetting
{
	TMap<TEnumAsByte<EMountFromDirection>, struct FMountMontagePair> MountMontageParis;                                        
	TMap<TEnumAsByte<EMountFromDirection>, struct FMountMontagePair> DisMountMontageParis;                                     
};



struct FNitroPowerConfig
{
	class UCurveFloat*                                 NitroForceCurve;                                          
	class UCurveFloat*                                 NitroForceSpeedRatio;                                     
	class UCurveVector*                                DriftOmegaAccelCurve;                                     
	class UCurveVector*                                DriftRecoveryCurve;                                       
	class UCurveVector*                                DriftSpeedCurve;                                          
	class UCurveFloat*                                 DriftAccelCurve;                                          
	class UCurveFloat*                                 DriftAccelScaleCurve;                                     
	class UCurveFloat*                                 DriftDecelCurve;                                          
};



struct FNitroBioConfig
{
	float                                              NitroMaxWalkSpeed;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	class UCurveFloat*                                 NitroAccelCurve;                                          
};



struct FAttachedMeshConfig
{
	bool                                               bEnable;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       SocketName;                                               
	struct FVector                                     RelativeLoc;                                              
	struct FRotator                                    RelativeRot;                                              
	struct FVector                                     RelativeScale;                                            
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FNitroVisualConfig
{
	TArray<struct FAttachedMeshConfig>                 MeshTransforms;                                           
};



struct FNitroBoostState
{
	bool                                               bIsNitroBoosting;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              StartTimestamp;                                           
	int                                                BoostCount;                                               
};



struct FCustomVehicleShapeTypeSetup
{
	ESTExtraVehicleShapeType                           ShapeType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       DisplayName;                                              
};



struct FCustomVehicleTypeSetup
{
	ESTExtraVehicleType                                VehicleType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       DisplayName;                                              
};



struct FVDDebugFlag
{
	bool                                               bEnable;                                                  
	int8_t                                             bDebugBasic;                                              
	int8_t                                             bDebugBT;                                                 
	int8_t                                             bDebugMove;                                               
	int8_t                                             bDebugEnemy;                                              
	int8_t                                             bDebugLOD;                                                
	int8_t                                             bDebugOutline;                                            
	int8_t                                             bDebugMobBatch;                                           
	int8_t                                             bDebugNavMesh;                                            
};



struct FBTDebugNodeItem : public FFastArraySerializerItem
{
	int                                                ExecutionIndex;                                           
	unsigned char                                      TreeDepth;                                                
	unsigned char                                      Flags;                                                    
	unsigned char                                      UnknownData00[0x6];                                       
	struct FString                                     NodeName;                                                 
	struct FString                                     TypeShort;                                                
	struct FString                                     Runtime;                                                  
};



struct FBTDebugSnapshot : public FFastArraySerializer
{
	struct FVector                                     AnchorOffset;                                             
	struct FColor                                      Color;                                                    
	float                                              TextScale;                                                
	uint32_t                                           FrameSerial;                                              
	TArray<struct FBTDebugNodeItem>                    Items;                                                    
};



struct FVisualDraw
{
	struct FVector                                     BasePosition;                                             
	TWeakObjectPtr<class AActor>                       AttachedActor;                                            
	struct FColor                                      BaseColor;                                                
	float                                              Duration;                                                 
	float                                              Thickness;                                                
	int                                                TaskID;                                                   
	bool                                               bContinuous;                                              
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FDrawShape_Text : public FVisualDraw
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     TextString;                                               
};



struct FDrawShape_Sphere : public FVisualDraw
{
	float                                              Radius;                                                   
};



struct FDrawShape_Line : public FVisualDraw
{
	struct FVector                                     LineEnd;                                                  
};



struct FDrawShape_Cylinder : public FVisualDraw
{
	struct FVector                                     End;                                                      
	float                                              Radius;                                                   
};



struct FDrawShape_Capsule : public FVisualDraw
{
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	struct FRotator                                    Rotation;                                                 
};



struct FDrawShape_Box : public FVisualDraw
{
	struct FVector                                     BoxExtent;                                                
	struct FRotator                                    Rotation;                                                 
};



struct FNavMeshDebugPacket
{
	ENavMeshDebugPacketType                            Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           SessionID;                                                
	uint32_t                                           Sequence;                                                 
	uint32_t                                           WindowRevision;                                           
	int                                                CenterTileX;                                              
	int                                                CenterTileY;                                              
	unsigned char                                      TileRange;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                TileX;                                                    
	int                                                TileY;                                                    
	uint32_t                                           TileFingerprint;                                          
	uint16_t                                           ChunkIndex;                                               
	uint16_t                                           ChunkCount;                                               
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<unsigned char>                              Payload;                                                  
};



struct FWindowBarrierData
{
	struct FTransform                                  Transform;                                                
	TArray<int>                                        BreakWindowIds;                                           
};



struct FWindowBarrierDataList
{
	TArray<struct FWindowBarrierData>                  Datas;                                                    
};



struct FSpiderSwingAttachInfo
{
	struct FVector                                     AttachPoint;                                              
	float                                              RopeLength;                                               
	TWeakObjectPtr<class AActor>                       AttachTarget;                                             
};



struct FAnimNode_AdvanceBlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              PlayRate;                                                 
	bool                                               bLoop;                                                    
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                      
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              StartPosition;                                            
	class UBlendSpaceBase*                             BlendSpace;                                               
	int                                                LODThreshold;                                             
	unsigned char                                      UnknownData01[0xA4];                                      
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       
	EBlendCrossFadeOption                              CFadeStyle;                                               
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              CFadeBlendTime;                                           
	EAlphaBlendOption                                  BlendType;                                                
	unsigned char                                      UnknownData03[0x7];                                       
	class UCurveFloat*                                 CustomBlendCurve;                                         
	bool                                               bUseBlendInTheSameCache;                                  
	unsigned char                                      UnknownData04[0x7];                                       
	class UBlendSpaceBase*                             SourceBlendSpace;                                         
	class UBlendSpaceBase*                             TargetBlendSpace;                                         
	unsigned char                                      UnknownData05[0x298];                                     
	class USkeletalMesh*                               CachedSkeletalMesh;                                       
};



struct FSpecifiedBones
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FAnimNode_AIRuntimeAnimDataToPose : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x50];                                      
	class ACharacter*                                  OwnerCharacter;                                           
	struct FAIGCRuntimeBodyAnimFrameData               AIRuntimeBodyAnimFrameData;                               
	TEnumAsByte<EBoneControlSpace>                     TransformSpace;                                           
	bool                                               bUseSpecifiedBones;                                       
	unsigned char                                      UnknownData01[0x6];                                       
	struct FSpecifiedBones                             SpecifiedBones;                                           
};



struct FAngularRangeLimit
{
	struct FVector                                     LimitMin;                                                 
	struct FVector                                     LimitMax;                                                 
	struct FBoneReference                              Bone;                                                     
};



struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	TArray<struct FAngularRangeLimit>                  AngularRangeLimits;                                       
	TArray<struct FVector>                             AngularOffsets;                                           
};



struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     EffectorLocation;                                         
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    
	unsigned char                                      UnknownData00[0xB];                                       
	struct FBoneSocketTarget                           EffectorTarget;                                           
	struct FBoneReference                              TipBone;                                                  
	struct FBoneReference                              RootBone;                                                 
	float                                              Precision;                                                
	int                                                MaxIterations;                                            
	bool                                               bStartFromTail;                                           
	bool                                               bEnableRotationLimit;                                     
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<float>                                      RotationLimitPerJoints;                                   
};



struct FCCDIKChainLink
{
	unsigned char                                      UnknownData00[0x80];                                      
};



struct FAnimNode_CloseToWall : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 
	TArray<struct FBoneReference>                      TraceBones;                                               
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectTypesToTrace;                                       
	float                                              TraceSphereRadius;                                        
	float                                              TraceForwardOffset;                                       
	float                                              TraceBackwardOffset;                                      
	struct FVector                                     forwardDir;                                               
	float                                              IntendedWallDis;                                          
	float                                              InterpSpeed;                                              
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FLimb
{
	struct FBoneReference                              TipBone;                                                  
	struct FBoneReference                              IKBone;                                                   
	struct FAnimNode_TwoBoneIK                         IKNode;                                                   
	struct FName                                       LockCurveName;                                            
	float                                              MaxLockDistanceClockwise;                                 
	float                                              MaxLockDistanceCounterclockwise;                          
	bool                                               bUseLimbClamp;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              LimbOffsetClampMin;                                       
	float                                              LimbOffsetClampMax;                                       
	bool                                               bIsLeft;                                                  
	bool                                               bIsForward;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	struct FName                                       TraceSocketName;                                          
	unsigned char                                      UnknownData02[0x168];                                     
};



struct FAnimNode_CreepingFourLegIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableSlopeAdapt;                                        
	bool                                               bEnableLegAdapt;                                          
	bool                                               bEnableFootLock;                                          
	unsigned char                                      UnknownData00[0x5];                                       
	class UCurveFloat*                                 SlopePitchCurve;                                          
	class UCurveFloat*                                 SlopeRollCurve;                                           
	class UCurveFloat*                                 SlopeHeightCurve;                                         
	float                                              SlopeHeightAdditive;                                      
	float                                              SlopePitchAdditive;                                       
	float                                              SlopeRollAdditive;                                        
	float                                              SlopeMapInMin;                                            
	float                                              SlopeMapInMax;                                            
	float                                              SlopeProbeForwardOffset;                                  
	float                                              SlopeProbeBackwardOffset;                                 
	float                                              SlopeProbeLeftOffset;                                     
	float                                              SlopeProbeRightOffset;                                    
	float                                              FootLockDelaySeconds;                                     
	float                                              FootLockOutOfDistanceInterpSpeed;                         
	bool                                               bIgnoreFoliage;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              TraceUpOffset;                                            
	float                                              TraceDownOffset;                                          
	float                                              TraceSphereRadius;                                        
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectTypesToTrace;                                       
	TArray<struct FName>                               TraceIgnoreActorTags;                                     
	float                                              SlopeTraceInterval;                                       
	float                                              LimbTraceInterval;                                        
	float                                              LimbOffsetClampMin;                                       
	float                                              LimbOffsetClampMax;                                       
	float                                              FootAdaptMaxPitch;                                        
	float                                              FootAdaptMaxRoll;                                         
	float                                              IKInterpSpeed;                                            
	bool                                               bSlopeAdaptUseAlpha;                                      
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              SlopeAdaptMinZ;                                           
	float                                              SlopeAdaptMaxZ;                                           
	float                                              SlopeAdaptMaxPitch;                                       
	float                                              SlopeAdaptMaxRoll;                                        
	bool                                               bUseNeckAdapt;                                            
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              NeckAdaptMinPitch;                                        
	float                                              NeckAdaptMaxPitch;                                        
	float                                              SlopeInterpSpeed;                                         
	TArray<struct FLimb>                               LegLimbs;                                                 
	struct FBoneReference                              AdaptRootBone;                                            
	struct FBoneReference                              NeckBone;                                                 
	float                                              DebugSphereRadius;                                        
	float                                              DebugLineWidth;                                           
	TWeakObjectPtr<class UWorld>                       WorldContext;                                             
	unsigned char                                      UnknownData05[0x78];                                      
};



struct FAnimNode_CrossInstanceSyncSequencePlayer : public FAnimNode_SequencePlayer
{
	struct FName                                       SyncGroupName;                                            
	bool                                               bIsLeader;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	class UAnimInstance*                               LinkedAnimInstance;                                       
	class UAnimInstance*                               LinkedAnimInstanceLastFrame;                              
	TArray<class UProperty*>                           PropagatedProperties;                                     
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FAnimNode_DistanceMatching : public FAnimNode_SequencePlayer
{
	struct FName                                       SyncGroupName;                                            
	float                                              Distance;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       RootBoneName;                                             
	float                                              AcceptedDistanceError;                                    
	bool                                               bUseSuperUpdate;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	struct FFloatCurve                                 DistanceCurve;                                            
	bool                                               bHasValidDistanceCurve;                                   
	unsigned char                                      UnknownData02[0x4F];                                      
};



struct FFootLockLimb
{
	struct FName                                       CurveName;                                                
	struct FBoneReference                              LockBone;                                                 
	struct FAnimNode_TwoBoneIK                         IKNode;                                                   
	unsigned char                                      UnknownData00[0x30];                                      
};



struct FAnimNode_FootLock : public FAnimNode_SkeletalControlBase
{
	TArray<struct FFootLockLimb>                       Limbs;                                                    
	float                                              MaxLockDistance;                                          
	unsigned char                                      UnknownData00[0x44];                                      
};



struct FBoneDeclare
{
	struct FBoneReference                              Bone;                                                     
	struct FVector                                     ForwardAxis;                                              
	struct FVector                                     RightAxis;                                                
	struct FVector                                     UpAxis;                                                   
	struct FRotator                                    PitchAxis;                                                
	struct FRotator                                    YawAxis;                                                  
	struct FRotator                                    RollAxis;                                                 
};



struct FAnimNode_FourLeggedIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableSlopeAdapt;                                        
	bool                                               bEnableLegAdapt;                                          
	bool                                               bEnableFootAdapt;                                         
	bool                                               bEnableNeckAdapt;                                         
	bool                                               bUseSocketTrace;                                          
	bool                                               bEnableTraceOptimization;                                 
	unsigned char                                      UnknownData00[0x2];                                       
	struct FName                                       ForceTraceCurveName;                                      
	unsigned char                                      UnknownData01[0x2];                                       
	bool                                               bTraceNotHitUseOriginPosition;                            
	bool                                               bProcessLeftRightOverDistance;                            
	float                                              MaxLeftRightSideDifference;                               
	bool                                               bSendTraceResultsMessage;                                 
	unsigned char                                      UnknownData02[0x7];                                       
	class UCurveFloat*                                 SlopeHeightAdaptedCurve;                                  
	float                                              SlopeHeightAdditive;                                      
	unsigned char                                      UnknownData03[0x4];                                       
	class UCurveFloat*                                 SlopePitchAdaptedCurve;                                   
	float                                              SlopePitchAdditive;                                       
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectTypesToTrace;                                       
	float                                              TraceUpOffset;                                            
	float                                              TraceDownOffset;                                          
	float                                              TraceSphereRadius;                                        
	float                                              SlopeAdaptionMaxPitch;                                    
	float                                              SlopeAdaptionMaxZ;                                        
	float                                              SlopeAdaptLerpSpeed;                                      
	float                                              FootAdaptMaxRoll;                                         
	float                                              FootAdaptMaxPitch;                                        
	float                                              FootIKAdaptMaxZ;                                          
	float                                              FootIKLerpSpeed;                                          
	struct FBoneDeclare                                AdaptBone;                                                
	struct FBoneDeclare                                NeckBone;                                                 
	struct FBoneDeclare                                LClavicleBone;                                            
	struct FBoneDeclare                                RClavicleBone;                                            
	struct FBoneDeclare                                LThighBone;                                               
	struct FBoneDeclare                                RThighBone;                                               
	struct FBoneDeclare                                LeftHandBone;                                             
	struct FBoneDeclare                                RightHandBone;                                            
	struct FBoneDeclare                                LeftFootBone;                                             
	struct FBoneDeclare                                RightFootBone;                                            
	struct FBoneSocketTarget                           LeftHandTraceSocket;                                      
	struct FBoneSocketTarget                           RightHandTraceSocket;                                     
	struct FBoneSocketTarget                           LeftFootTraceSocket;                                      
	struct FBoneSocketTarget                           RightFootTraceSocket;                                     
	struct FAnimNode_TwoBoneIK                         LeftHandIK;                                               
	struct FAnimNode_TwoBoneIK                         RightHandIK;                                              
	struct FAnimNode_TwoBoneIK                         LeftFootIK;                                               
	struct FAnimNode_TwoBoneIK                         RightFootIK;                                              
	float                                              DebugSphereRadius;                                        
	float                                              DebugLineWidth;                                           
	float                                              DebugArrowSize;                                           
	struct FColor                                      DebugNegativeColor;                                       
	struct FColor                                      DebugPositiveColor;                                       
	struct FColor                                      DebugInfoColor;                                           
	struct FVector2D                                   DebugTextSize;                                            
	class APawn*                                       OwnerPawn;                                                
	unsigned char                                      UnknownData05[0x108];                                     
};



struct FIKBodyInertia
{
	bool                                               ApplyInertiaToBody;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SmoothFactor;                                             
	bool                                               UseSpring;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              SpringStrength;                                           
	float                                              SpringDamping;                                            
};



struct FFootIKCollision
{
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         
	bool                                               TraceComplex;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              RayCastUp;                                                
	float                                              RayCastDown;                                              
	bool                                               EnableWallCollision;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              WallOffset;                                               
	bool                                               bEnableCheckIgnoreActorName;                              
	unsigned char                                      UnknownData02[0x3];                                       
	TArray<struct FName>                               IgnoreHitTags;                                            
};



struct FAnimNode_GroundIK : public FAnimNode_SkeletalControlBase
{
	struct FName                                       Root;                                                     
	struct FIKBodyInertia                              BodyInertia;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FIKFoot>                             Feet;                                                     
	float                                              FeetDeltaSmoothSpeed;                                     
	float                                              RootRotationMultiplier;                                   
	struct FFootIKCollision                            FootCollision;                                            
	struct FFootIKSlope                                FootSlope;                                                
	TArray<struct FIKBoneBendDirection>                BendDirections;                                           
	TArray<struct FIKExcludedBone>                     ExcludedBones;                                            
	TArray<struct FIKBoneLimit>                        JointLimits;                                              
	unsigned char                                      UnknownData01[0x10];                                      
	int                                                MaxSquashIterations;                                      
	int                                                MaxStretchIterations;                                     
	int                                                MaxFinalIterations;                                       
	bool                                               AllowBoneTranslation;                                     
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              SolverAlpha;                                              
	float                                              DebugDrawSize;                                            
	bool                                               bShowDebug;                                               
	unsigned char                                      UnknownData03[0x7];                                       
	class UWorld*                                      World;                                                    
	unsigned char                                      UnknownData04[0x180];                                     
};



struct FAnimNode_HumanoidLeggedIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 
	struct FBoneReference                              LeftFootBone;                                             
	struct FBoneReference                              RightFootBone;                                            
	class UBoneParamDefineAsset*                       BoneParamDefine;                                          
	bool                                               bEnableRootAdaption;                                      
	bool                                               bEnableLegAdaption;                                       
	bool                                               bEnableFootAdaption;                                      
	unsigned char                                      UnknownData00[0x5];                                       
	TArray<TEnumAsByte<ECollisionChannel>>             ObjectTypesToTrace;                                       
	float                                              FootTraceUpOffset;                                        
	float                                              FootTraceDownOffset;                                      
	float                                              FootTraceSphereRadius;                                    
	bool                                               bIgnoreSelfType;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              RootPositionInterpolateSpeed;                             
	float                                              FootPositionInterpolateSpeed;                             
	float                                              FootRotationInterpolateSpeed;                             
	float                                              RootHeightOffsetScale;                                    
	float                                              RootMaxHeightOffset;                                      
	float                                              FootMaxHeightOffset;                                      
	float                                              FootMaxPitchOffset;                                       
	float                                              FootMaxRollOffset;                                        
	struct FAnimNode_TwoBoneIK                         LeftFootIKNode;                                           
	struct FAnimNode_TwoBoneIK                         RightFootIKNode;                                          
	unsigned char                                      UnknownData02[0x70];                                      
};



struct FAnimNode_InertializationBlendListBase : public FAnimNode_BlendListBase
{

};



struct FAnimNode_InertializationBlendByBool : public FAnimNode_InertializationBlendListBase
{
	bool                                               bActiveValue;                                             
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FAnimNode_InertializationBlendByEnum : public FAnimNode_InertializationBlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          
	unsigned char                                      ActiveEnumValue;                                          
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FAnimNode_InertializationBlendByInt : public FAnimNode_InertializationBlendListBase
{
	int                                                ActiveChildIndex;                                         
};



struct FAnimNode_LayeredBoneBlendWithoutExclusive : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 
	TArray<struct FPoseLink>                           BlendPoses;                                               
	class USkeletalMesh*                               BaseSkeletalMesh;                                         
	unsigned char                                      UnknownData00[0x18];                                      
	TArray<float>                                      BlendWeights;                                             
	bool                                               bMeshSpaceRotationBlend;                                  
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         
	bool                                               bBlendRootMotionBasedOnRootBone;                          
	bool                                               bHasRelevantPoses;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      
	struct FGuid                                       SkeletonGuid;                                             
	struct FGuid                                       VirtualBoneGuid;                                          
	unsigned char                                      UnknownData02[0x40];                                      
};



struct FAnimNode_MechanicalScorpionCastIdle : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BodyBone;                                                 
	TArray<struct FBoneReference>                      WeaponRoots;                                              
	TArray<struct FAnimNode_Fabrik>                    Legs;                                                     
	float                                              PoseWeight;                                               
	float                                              MaxWeaponPositionError;                                   
	float                                              MaxWeaponAngleError;                                      
	struct FVector                                     AppliedBodyOffset;                                        
	unsigned char                                      UnknownData00[0x88];                                      
};



struct FAnimNode_MirrorPose : public FAnimNode_Base
{
	class UMirrorPoseProfile*                          MirrorPoseProfile;                                        
	bool                                               bMirror;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FPoseLink                                   Source;                                                   
	unsigned char                                      UnknownData01[0x20];                                      
};



struct FAnimNode_OffsetRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   
	float                                              RotationHalfLife;                                         
	float                                              TranslationHalfLife;                                      
	float                                              MaxTransitionError;                                       
	bool                                               bOnlySimulateYaw;                                         
	bool                                               bUseAssetRootMotion;                                      
	bool                                               bIgnoreComponentScale;                                    
	EOffsetRootBoneMode                                RotationMode;                                             
	EOffsetRootBoneMode                                TranslationMode;                                          
	unsigned char                                      UnknownData00[0xF];                                       
	struct FQuat                                       InputSimulatedRotation;                                   
	unsigned char                                      UnknownData01[0x90];                                      
	class UWorld*                                      CachedWorldContext;                                       
	unsigned char                                      UnknownData02[0x8];                                       
};



struct FAnimNode_PoseDelay : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   
	bool                                               bEnable;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	class UAnimSequence*                               DefaultSequence;                                          
	float                                              delayTime;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	struct FAnimNode_SequencePlayer                    SequencePlayerNode;                                       
	unsigned char                                      UnknownData02[0x20];                                      
};



struct FPoseUnit
{
	unsigned char                                      UnknownData00[0x90];                                      
};



struct FAnimNode_PoseRecorder : public FAnimNode_Base
{
	class UAnimPoseRecorder*                           AnimPoseRecorder;                                         
	TArray<struct FBoneReference>                      RecordedBones;                                            
	struct FPoseLink                                   Source;                                                   
};



struct FProceduralLeg
{
	struct FBoneReference                              RootBone;                                                 
	struct FBoneReference                              TipBone;                                                  
	struct FVector                                     Offset;                                                   
	bool                                               bEnableRotationLimits;                                    
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<float>                                      JointRotationLimit;                                       
};



struct FLegGroup
{
	TArray<int>                                        LegIndices;                                               
};



struct FProceduralLegData
{
	unsigned char                                      UnknownData00[0x40];                                      
	class UPrimitiveComponent*                         MoveBaseComponent;                                        
	unsigned char                                      UnknownData01[0xE8];                                      
};



struct FLegGroupData
{
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FAnimNode_ProceduralWalk : public FAnimNode_SkeletalControlBase
{
	class UProceduralWalkData*                         ProceduralWalkData;                                       
	struct FBoneReference                              BodyBone;                                                 
	TArray<struct FProceduralLeg>                      ProceduralLegs;                                           
	TArray<struct FProceduralLeg>                      Pincers;                                                  
	bool                                               bFalling;                                                 
	bool                                               bHandleMovingPlatform;                                    
	bool                                               bEvaluateLegWhileNotHitGround;                            
	bool                                               bShouldCanUpDownInterface;                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FLegGroup>                           LegGroups;                                                
	float                                              ForwardStanceLength;                                      
	float                                              RightStanceLength;                                        
	bool                                               bSmoothStancePercent;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              StancePercentInterpSpeed;                                 
	float                                              StartMoveSpeedThreshold;                                  
	float                                              StopMoveSpeedThreshold;                                   
	float                                              MinStepDurationLimit;                                     
	bool                                               bTurnAwareStepDuration;                                   
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              TurnYawRateThreshold;                                     
	float                                              StepDurationInterpSpeed;                                  
	bool                                               bSmoothUnplantedFootTarget;                               
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              UnplantedFootTargetInterpSpeed;                           
	class UCurveFloat*                                 MinStepDurationCurve;                                     
	class UCurveFloat*                                 StepDurationScaleByVelocityAngleCurve;                    
	class UCurveFloat*                                 StancePercentageCurve;                                    
	class UCurveFloat*                                 StanceHeightCurve;                                        
	class UCurveFloat*                                 TraceYawRotationOffsetCurve;                              
	class UCurveFloat*                                 SlopeBodyZOffsetCurve;                                    
	bool                                               bStartFromTail;                                           
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              Precision;                                                
	int                                                MaxIterations;                                            
	int                                                InitSkipFramesNum;                                        
	bool                                               bSkipOptimization;                                        
	bool                                               bConsiderTimeInterval;                                    
	unsigned char                                      UnknownData05[0x2];                                       
	int                                                FootTraceSkipFrameCount;                                  
	float                                              FootTraceTimeInterval;                                    
	int                                                RootTraceSkipFrameCount;                                  
	int                                                PincerTraceSkipFrameCount;                                
	float                                              ForceRequestTraceTimeInterval;                            
	bool                                               bDuplicateCheckWeakPointer;                               
	bool                                               bCacheReferenceObjectEveryFrame;                          
	bool                                               bUseFABRIKSolve;                                          
	unsigned char                                      UnknownData06[0x5];                                       
	TArray<struct FAnimNode_Fabrik>                    FABRIK_Nodes;                                             
	bool                                               bCheckCCDIKValidation;                                    
	bool                                               bAdaptActorScale;                                         
	unsigned char                                      UnknownData07[0x6];                                       
	class APawn*                                       OwnerPawn;                                                
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    
	class UWorld*                                      WorldContext;                                             
	TWeakObjectPtr<class APawn>                        WeakOwnerPawn;                                            
	TWeakObjectPtr<class USkeletalMeshComponent>       WeakSkeletalMeshComponent;                                
	TWeakObjectPtr<class UWorld>                       WeakWorldContext;                                         
	TArray<struct FProceduralLegData>                  ProceduralLegsData;                                       
	TArray<struct FProceduralLegData>                  PincersData;                                              
	unsigned char                                      UnknownData08[0x8];                                       
	TArray<struct FLegGroupData>                       LegGroupsData;                                            
	unsigned char                                      UnknownData09[0x140];                                     
};



struct FPW_CCDIKChainLink
{
	unsigned char                                      UnknownData00[0x80];                                      
};



struct FRotationLimitsPerJoint
{
	TArray<float>                                      RotationLimits;                                           
};



struct FAnimNode_PUBGMLookAt : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     LookAtLocation;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FBoneReference>                      BonesToModify;                                            
	struct FVector                                     BoneForwardAxis;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FVector>                             BoneForwardAxes;                                          
	struct FRotator                                    MaxRotation;                                              
	float                                              InterpSpeed;                                              
	float                                              ExitBuffer;                                               
	unsigned char                                      UnknownData02[0x2C];                                      
};



struct FIKSmoothing
{
	bool                                               SmoothPositionOverTime;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxPositionSpeed;                                         
	float                                              MaxPositionDistance;                                      
	bool                                               SmoothRotationOverTime;                                   
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              MaxDegreesSpeed;                                          
	float                                              MaxDegreesDistance;                                       
};



struct FIKPoleVector
{
	TEnumAsByte<EPoleVectorModeEnum>                   Mode;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     Position;                                                 
	struct FName                                       BoneName;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	float                                              AngleOffset;                                              
};



struct FIKEffector
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     Position;                                                 
	TEnumAsByte<EEffectorSpaceEnum>                    PositionSpace;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	struct FRotator                                    Rotation;                                                 
	TEnumAsByte<EEffectorSpaceEnum>                    RotationSpace;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              PullWeight;                                               
	bool                                               NormalizePulling;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	struct FVector                                     PositivePullFactor;                                       
	struct FVector                                     NegativePullFactor;                                       
	bool                                               RotateBone;                                               
	bool                                               RotateLimb;                                               
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              DeltaSmoothSpeed;                                         
	float                                              AngularDeltaSmoothSpeed;                                  
	struct FIKSmoothing                                Smoothing;                                                
	unsigned char                                      UnknownData04[0x4];                                       
	struct FIKPoleVector                               PoleVector;                                               
	bool                                               AffectsCenterOfGravity;                                   
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              Alpha;                                                    
	unsigned char                                      UnknownData06[0x48];                                      
};



struct FIKCenterOfGravity
{
	float                                              Alpha;                                                    
	float                                              HorizAmount;                                              
	float                                              VertAmount;                                               
	float                                              PullBodyAmount;                                           
};



struct FAnimNode_SimpleIKSolver : public FAnimNode_SkeletalControlBase
{
	struct FName                                       Root;                                                     
	float                                              RootRotaionMultipier;                                     
	struct FIKBodyInertia                              BodyInertia;                                              
	TArray<struct FIKBoneBendDirection>                BendDirections;                                           
	TArray<struct FIKExcludedBone>                     ExcludeBones;                                             
	TArray<struct FIKBoneLimit>                        JointLimits;                                              
	TArray<struct FIKEffector>                         Effectors;                                                
	float                                              SmoothingMaxSpeedMultiplier;                              
	float                                              SmoothingMaxDistanceMultiplier;                           
	struct FIKCenterOfGravity                          CenterOfGravityConstraint;                                
	int                                                MaxSquashIterations;                                      
	int                                                MaxStretchIterations;                                     
	int                                                MaxFinalIterations;                                       
	bool                                               AllowBoneTranslation;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SolverAlpha;                                              
	float                                              DebugDrawSize;                                            
	class UWorld*                                      World;                                                    
	unsigned char                                      UnknownData01[0xA8];                                      
};



struct FAnimNode_SpineLean : public FAnimNode_SkeletalControlBase
{
	TArray<struct FBoneReference>                      SpineBones;                                               
	float                                              MaxLeanAngle;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<float>                                      SpineWeights;                                             
	float                                              InterpSpeed;                                              
	float                                              MaxAngularVelocity;                                       
	float                                              MaxAngleDelta;                                            
	struct FVector                                     MoveDirection;                                            
	struct FVector                                     WallNormal;                                               
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData01[0x13];                                      
};



struct FAnimNode_StretchBoneChain : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     TargetEffectorLocation;                                   
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	struct FBoneReference                              TipBone;                                                  
	struct FBoneReference                              RootBone;                                                 
	float                                              DefaultScaleStep;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	class UCurveFloat*                                 StretchScaleStepCurve;                                    
	unsigned char                                      UnknownData02[0x10];                                      
};



struct FAnimNode_StretchBoneChainSafety : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     TargetEffectorLocation;                                   
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<struct FBoneReference>                      BoneChain;                                                
	float                                              DefaultScaleStep;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	class UCurveFloat*                                 StretchScaleStepCurve;                                    
};



struct FAnimNode_SyncBlendSpacePlayer : public FAnimNode_BlendSpacePlayer
{
	class UAssetPlayerSyncNode*                        BlendSpaceSyncNode;                                       
	struct FName                                       SyncGroupName;                                            
	bool                                               bIsLeader;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FAnimNode_SyncBlendSpacePlayerSafety : public FAnimNode_BlendSpacePlayer
{
	struct FName                                       SyncGroupName;                                            
	bool                                               bIsLeader;                                                
	bool                                               bUseExperimentalSync;                                     
	unsigned char                                      UnknownData00[0x6];                                       
	class UAnimInstance*                               LinkedAnimInstance;                                       
	bool                                               bUpdateLeaderNodeAnyThread;                               
	unsigned char                                      UnknownData01[0x7];                                       
	class UAnimInstance*                               LinkedAnimInstanceLastFrame;                              
	TArray<class UProperty*>                           PropagatedProperties;                                     
	unsigned char                                      UnknownData02[0x8];                                       
};



struct FAnimNode_SyncSequencePlayer : public FAnimNode_SequencePlayer
{
	class UAssetPlayerSyncNode*                        SyncNode;                                                 
	struct FName                                       SyncGroupName;                                            
	bool                                               bIsLeader;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FAnimNode_SyncSequencePlayerSafety : public FAnimNode_SequencePlayer
{
	struct FName                                       SyncGroupName;                                            
	bool                                               bIsLeader;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FAnimNode_Turn : public FAnimNode_SyncSequencePlayerSafety
{
	struct FRotator                                    TargetRotator;                                            
	float                                              RootMotionThreshold;                                      
	bool                                               bUseAssetRootMotion;                                      
	unsigned char                                      UnknownData00[0x13];                                      
};



struct FAnimNode_TwoLeggedIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableRootAdaption;                                      
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBoneReference                              Root;                                                     
	float                                              RootTraceUpOffset;                                        
	float                                              RootTraceDownOffset;                                      
	float                                              RootTraceSphereRadius;                                    
	float                                              RootPositionLerpSpeed;                                    
	float                                              RootMaxHeightOffset;                                      
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<TEnumAsByte<ECollisionChannel>>             SlopeAdaption_ObjectTypesToQuery;                         
	bool                                               bEnableSlopeAdaption;                                     
	unsigned char                                      UnknownData02[0x7];                                       
	struct FBoneReference                              SpineRoot;                                                
	struct FBoneReference                              TailRoot;                                                 
	float                                              SlopeMaxPitchOffset;                                      
	float                                              SlopeRotationLerpSpeed;                                   
	TArray<TEnumAsByte<ECollisionChannel>>             FootAdaption_ObjectTypesToQuery;                          
	bool                                               bEnableFootPositionAdaption;                              
	bool                                               bEnableFootRotationAdaption;                              
	unsigned char                                      UnknownData03[0x6];                                       
	struct FBoneReference                              IKBone_L;                                                 
	struct FBoneReference                              FootBone_L;                                               
	unsigned char                                      UnknownData04[0x8];                                       
	struct FBoneSocketTarget                           JointTarget_L;                                            
	struct FVector                                     JointTargetLocation_L;                                    
	unsigned char                                      UnknownData05[0x4];                                       
	struct FBoneReference                              IKBone_R;                                                 
	struct FBoneReference                              FootBone_R;                                               
	struct FBoneSocketTarget                           JointTarget_R;                                            
	struct FVector                                     JointTargetLocation_R;                                    
	float                                              FootTraceUpOffset;                                        
	float                                              FootTraceDownOffset;                                      
	float                                              FootTraceSphereRadius;                                    
	float                                              FootPositionLerpSpeed;                                    
	float                                              FootRotationLerpSpeed;                                    
	float                                              FootMaxPitchOffset;                                       
	float                                              FootMaxRollOffset;                                        
	float                                              FootMaxHeightOffset;                                      
	int                                                SkipEvaluateTimes;                                        
	struct FAnimNode_TwoBoneIK                         LegAdapting_L;                                            
	struct FAnimNode_TwoBoneIK                         LegAdapting_R;                                            
	unsigned char                                      UnknownData06[0xA0];                                      
};



struct FRecordPoseData
{
	unsigned char                                      UnknownData00[0xA8];                                      
};



struct FAvatarObjectAsyncInfo
{
	TWeakObjectPtr<class UCharacterAvatarComponent2>   AvatarComponent2;                                         
	TWeakObjectPtr<class USkeletalMeshComponent>       MasterSkeletalMeshComponent;                              
	class UAvatarMerger*                               AvatarMerger;                                             
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FAvatarMergeAvatarConfigInfo
{
	TArray<int>                                        ItemList;                                                 
};



struct FPendingAnchorSpawn
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FCollectedEventKeysValues
{
	TArray<struct FString>                             Keys;                                                     
	TArray<struct FString>                             Values;                                                   
};



struct FCollectedEventData
{
	TMap<struct FString, struct FString>               KeyValueMap;                                              
};



struct FIKCore
{
	unsigned char                                      UnknownData00[0xA0];                                      
};



struct FIKBoneData
{
	unsigned char                                      UnknownData00[0x60];                                      
};



struct FIKRootData
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FIKEffectorData
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FTextureMergeExtInfo
{
	TWeakObjectPtr<class UTexture2D>                   Texture2D;                                                
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FTex2DMergeChunk
{
	struct FTextureMergeExtInfo                        OriginTextureExtInfo;                                     
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FMaterialTextureMergeInfo
{
	class UTexture2D*                                  Texture;                                                  
	class UMaterialInterface*                          OwnerMaterial;                                            
	struct FTex2DMergeChunk                            MergeChunk;                                               
	unsigned char                                      UnknownData00[0x1C];                                      
};



struct FMaterialMergeInfo
{
	class UMaterialInterface*                          Material;                                                 
	TMap<struct FName, struct FMaterialTextureMergeInfo> ParamName2TextureInfoMap;                                 
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FTeamShape
{
	TArray<struct FVector>                             TeamShape;                                                
};



struct FNTFoxDynamicNetSmoothConfig
{
	bool                                               bEnable;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BaseMaxSmoothDistance;                                    
	float                                              BaseSmoothLocationTime;                                   
	float                                              MinSmoothLocationTime;                                    
	float                                              MaxSpeedRatio;                                            
};



struct FSkillObjectPropPickerRow
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FTraceImpactPoint
{
	struct FVector                                     ImpactLocation;                                           
	struct FVector                                     ImpactNormal;                                             
};



struct FBuffSpawnActorInstanceItem
{
	unsigned char                                      UnknownData00[0x14];                                      
};



struct FTitanCurveMovingData
{
	struct FName                                       CurveMovingTag;                                           
	class UCurveVector*                                CurveAsset;                                               
};



struct FTFPoseData
{
	float                                              StartTime;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	class UAnimSequence*                               InSequence;                                               
	TArray<struct FVector>                             BoneLocations;                                            
};



struct FTransformLevelTargetConfig
{
	struct FString                                     Level;                                                    
	struct FString                                     Comment;                                                  
	bool                                               IsEnabled;                                                
	unsigned char                                      UnknownData00[0xF];                                       
	struct FTransform                                  Transform;                                                
};



struct FTransformLevelToolConfig
{
	struct FVector                                     SourceLevelOffset;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FTransformLevelTargetConfig>         TargetConfigs;                                            
};



struct FTweenAnimTask
{
	unsigned char                                      UnknownData00[0xC0];                                      
};



struct FAddCameraViewInfoStruct
{
	unsigned char                                      UnknownData00[0x10];                                      
	class UCurveFloat*                                 CurFOVCurve;                                              
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FAddMapMarkInstanceStruct
{
	int                                                InstanceID;                                               
};



struct FSkillActionMemory_AddRemoveBuff
{
	int                                                ActionID;                                                 
	TWeakObjectPtr<class AActor>                       Target;                                                   
};



struct FSAAllowPawnStateInstanceStruct
{
	TWeakObjectPtr<class ASTExtraCharacter>            TargetCharacter;                                          
};



struct FSAttachedActorPlayMontageInstanceStruct
{
	TWeakObjectPtr<class USkeletalMeshComponent>       CachedComp;                                               
};



struct FSAAttachPawnPlayMontageInstanceStruct
{
	TWeakObjectPtr<class UAnimMontage>                 AnimMontageCurrent;                                       
	TWeakObjectPtr<class ASTExtraBaseCharacter>        CachedCharacter;                                          
};



struct FSABindDelegateInstanceStruct
{
	TWeakObjectPtr<class UObject>                      TargetObject;                                             
	int                                                LuaEventHandle;                                           
};



struct FChangeAkRT
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UAkComponent*                                CachedAK;                                                 
};



struct FSACircleMove
{
	unsigned char                                      UnknownData00[0x40];                                      
};



struct FSkillActionMemory_ControlCharacterSearch
{
	struct FSearchControlRuntimeState                  Runtime;                                                  
	bool                                               bAlreadyReverted;                                         
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FSAFollowerPawnPlayMontageInstanceStruct
{
	TWeakObjectPtr<class UAnimMontage>                 AnimMontageCurrent;                                       
	TWeakObjectPtr<class ASTExtraBaseCharacter>        CachedCharacter;                                          
};



struct FFollowMovePitchLimit
{
	float                                              RelativeRotMin;                                           
	float                                              RelativeRotMax;                                           
};



struct FUAESkillActionMemory_GNAction
{
	int                                                ActionID;                                                 
};



struct FSALaunchMove
{
	unsigned char                                      UnknownData00[0x38];                                      
	class UCurveFloat*                                 SpeedCurve;                                               
};



struct FLockCameraViewTypeData
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSAPlayMontageInstanceStruct
{
	int                                                ActionID;                                                 
	TWeakObjectPtr<class UAnimMontage>                 AnimMontageCurrent;                                       
};



struct FSAPlayMontageWeaponStateInstanceStruct
{
	TWeakObjectPtr<class UAnimMontage>                 AnimMontageCurrent;                                       
};



struct FSAPlayMontageByTableOnSlotInstanceStruct : public FSAPlayMontageInstanceStruct
{
	TWeakObjectPtr<class USkeletalMeshComponent>       SlotMeshComp;                                             
};



struct FSAPlayWeaponMontageInstanceStruct
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FSetMeshNeedUpdateEveryFrameData
{
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FSASplineRailBoardingStruct
{
	TWeakObjectPtr<class USplineComponent>             RailSpline;                                               
	float                                              EnterDistance;                                            
	struct FVector                                     StartLocation;                                            
	struct FRotator                                    StartRotation;                                            
	struct FVector                                     TargetLocation;                                           
	struct FRotator                                    TargetRotation;                                           
	float                                              Elapsed;                                                  
	bool                                               bActive;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCurPlayingAKEvent
{
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FForceLODInfo
{
	int                                                InitForceLOD;                                             
	int                                                EnterForceLOD;                                            
	int                                                LeaveForceLOD;                                            
};

}

