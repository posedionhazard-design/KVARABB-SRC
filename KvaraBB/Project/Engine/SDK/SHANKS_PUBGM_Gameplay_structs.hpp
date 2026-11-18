#pragma once


 
namespace SDK
{





enum class EBattleItemOperationType : uint8_t
{
	EBattleItemOperationType__Pickup = 0,
	EBattleItemOperationType__Drop = 1,
	EBattleItemOperationType__Use  = 2,
	EBattleItemOperationType__Disuse = 3,
	EBattleItemOperationType__Enable = 4,
	EBattleItemOperationType__Disable = 5,
	EBattleItemOperationType__EBattleItemOperationType_MAX = 6
};



enum class EBattleItemOperationFailedReason : uint8_t
{
	EBattleItemOperationFailedReason__PickupFailed_Default = 0,
	EBattleItemOperationFailedReason__PickupFailed_CapacityExceeded = 1,
	EBattleItemOperationFailedReason__PickupFailed_ItemCountExceeded = 2,
	EBattleItemOperationFailedReason__PickupFailed_PickupLimitExceeded = 3,
	EBattleItemOperationFailedReason__DropFailed_Default = 4,
	EBattleItemOperationFailedReason__UseFailed_Default = 5,
	EBattleItemOperationFailedReason__UseFailed_CapacityExceeded = 6,
	EBattleItemOperationFailedReason__UseFailed_SafeBagCapacityExceeded = 7,
	EBattleItemOperationFailedReason__DisuseFailed_Default = 8,
	EBattleItemOperationFailedReason__DisuseFailed_CapacityExceeded = 9,
	EBattleItemOperationFailedReason__DisuseFailed_SafeBagCapacityExceeded = 10,
	EBattleItemOperationFailedReason__EBattleItemOperationFailedReason_MAX = 11
};



enum class EBattleItemChangeAreaType : uint8_t
{
	EBattleItemChangeAreaType__AllItem = 0,
	EBattleItemChangeAreaType__PartItemCaseCapacity = 1,
	EBattleItemChangeAreaType__PartItemCaseNum = 2,
	EBattleItemChangeAreaType__AllWantedNum = 3,
	EBattleItemChangeAreaType__EBattleItemChangeAreaType_MAX = 4
};



enum class EPickUpCheckResult : uint8_t
{
	EPickUpCheckResult__EPUFR_OK   = 0,
	EPickUpCheckResult__EPUFR_DelayAdd = 1,
	EPickUpCheckResult__EPUFR_Forbidden = 2,
	EPickUpCheckResult__EPUFR_MAX  = 3
};



enum class ECharacterGender : uint8_t
{
	ECharacterGender__Male         = 0,
	ECharacterGender__Female       = 1,
	ECharacterGender__ECharacterGender_MAX = 2
};



enum class ECharacterPoseType : uint8_t
{
	ECharPose_Stand                = 0,
	ECharPose_Crouch               = 1,
	ECharPose_Prone                = 2,
	ECharPose_Max                  = 3
};



enum class ECharacterVehicleAnimType : uint8_t
{
	ECharVehAnim_Idle              = 0,
	ECharVehAnim_IdleWithWeapon    = 1,
	ECharVehAnim_LeanOut           = 2,
	ECharVehAnim_LeanIn            = 3,
	ECharVehAnim_Aim               = 4,
	ECharVehAnim_Scope             = 5,
	ECharVehAnim_AimFPPCommon      = 6,
	ECharVehAnim_MotorbikeIdle     = 7,
	ECharVehAnim_MotorbikeVacate   = 8,
	ECharVehAnim_MotorbikeDriverLeaning = 9,
	ECharVehAnim_MotorbikeDriverLeaningLowSpeed = 10,
	ECharVehAnim_MotorbikeDriverLeaningGroundPitch = 11,
	ECharVehAnim_MotorbikePassengerIdleBaseDriverOff = 12,
	ECharVehAnim_MotorbikePassengerIdleBaseWithGunDriverOff = 13,
	ECharVehAnim_MotorbikePassengerIdleBaseWithMeleeDriverOff = 14,
	ECharVehAnim_MotorbikePassengerIdleBaseWithThrowObjDriverOff = 15,
	ECharVehAnim_MotorbikePassengerDriverOffAim = 16,
	ECharVehAnim_MotorbikePassengerIdleLeaning = 17,
	ECharVehAnim_MotorbikePassengerIdleBaseDriverOn = 18,
	ECharVehAnim_MotorbikePassengerIdleBaseWithGunDriverOn = 19,
	ECharVehAnim_MotorbikePassengerIdleBaseWithMeleeDriverOn = 20,
	ECharVehAnim_MotorbikePassengerIdleBaseWithThrowObjDriverOn = 21,
	ECharVehAnim_Jump0             = 22,
	ECharVehAnim_Jump1             = 23,
	ECharVehAnim_Jump2             = 24,
	ECharVehAnim_Jump3             = 25,
	ECharVehAnim_SpeedUpByFoot     = 26,
	ECharVehAnim_BrakeByFoot       = 27,
	ECharVehAnim_Falling           = 28,
	ECharVehAnim_FallLand_Additve  = 29,
	ECharVehAnim_FallLand_Hard     = 30,
	ECharVehAnim_Enter             = 31,
	ECharVehAnim_Enter2            = 32,
	ECharVehAnim_Leave             = 33,
	ECharVehAnim_StandIdle         = 34,
	ECharVehAnim_IdleProne         = 35,
	ECharVehAnim_EnterProne        = 36,
	ECharVehAnim_LeaveProne        = 37,
	ECharVehAnim_VehicleWeaponReload = 38,
	ECharVehAnim_VehicleWeaponFire = 39,
	ECharVehAnim_VehicleWeaponAimOffset = 40,
	ECharVehAnim_VehicleWeaponEquip = 41,
	ECharVehAnim_VehicleWeaponUnEquip = 42,
	ECharVehAnim_MotorgliderIdle   = 43,
	ECharVehAnim_MotorgliderSteer  = 44,
	ECharVehAnim_IdleWithWeapon_Down = 45,
	ECharVehAnim_DriverFoward      = 46,
	ECharVehAnim_Bike_NormalDriveAnim = 47,
	ECharVehAnim_Bike_SprintDriveAnim = 48,
	ECharVehAnim_Bike_SpeedLeaningAnim = 49,
	ECharVehAnim_Bike_DriveLeaningHorizontalAnim = 50,
	ECharVehAnim_Bike_DriveLeaningVerticalAnim = 51,
	ECharVehAnim_Bike_DriveAnticipation = 52,
	ECharVehAnim_Bike_AirLeaningHorizontal = 53,
	ECharVehAnim_Bike_AirLeaningVertical = 54,
	ECharVehAnim_Bike_DriveHeadAO  = 55,
	ECharVehAnim_Bike_DriveSteering = 56,
	ECharVehAnim_DlyingInVehicle_Idle = 57,
	ECharVehAnim_IdleWithDualGun   = 58,
	ECharVehAnim_AimWithDualGun    = 59,
	ECharVehAnim_HoldGrenadeAimModify = 60,
	ECharVehAnim_Max               = 61
};



enum class ECharacterAnimType : uint8_t
{
	ECharAnim_Move                 = 0,
	ECharAnim_Aim                  = 1,
	ECharAnim_ToStand              = 2,
	ECharAnim_ToCrouch             = 3,
	ECharAnim_ToProne              = 4,
	ECharAnim_PickM                = 5,
	ECharAnim_PickL                = 6,
	ECharAnim_Equip_Primary        = 7,
	ECharAnim_Equip_Secondary      = 8,
	ECharAnim_Equip_Pistol         = 9,
	ECharAnim_Equip_Melee          = 10,
	ECharAnim_Equip_Thrown         = 11,
	ECharAnim_Hurt                 = 12,
	ECharAnim_Reload               = 13,
	ECharAnim_TacticsReload        = 14,
	ECharAnim_JuggleStypeReload    = 15,
	ECharAnim_ReloadType1          = 16,
	ECharAnim_ReloadType2          = 17,
	ECharAnim_Fire_Single          = 18,
	ECharAnim_Fire_Burst           = 19,
	ECharAnim_Fire_Auto            = 20,
	ECharAnim_Accumulate           = 21,
	ECharAnim_PostFire             = 22,
	ECharAnim_Turn_L               = 23,
	ECharAnim_Turn_R               = 24,
	ECharAnim_PullingPlug          = 25,
	ECharAnim_PutDownWeapon        = 26,
	ECharAnim_WeaponIdle           = 27,
	ECharAnim_VehWeaponIdle        = 28,
	ECharAnim_VehWeaponIdle_Down   = 29,
	ECharAnim_VehWeaponAim         = 30,
	ECharAnim_VehWeaponReload      = 31,
	ECharAnim_Peek                 = 32,
	ECharAnim_PeekScope            = 33,
	ECharAnim_PeekLeftAim          = 34,
	ECharAnim_PeekRightAim         = 35,
	ECharAnim_ForegripAnim         = 36,
	ECharAnim_Fire_Scope           = 37,
	ECharAnim_Fire_Peek            = 38,
	ECharAnim_SprintToProne        = 39,
	ECharAnim_OpenDoor             = 40,
	ECharAnim_Shovel               = 41,
	ECharAnim_StandbyIdle          = 42,
	ECharAnim_StandbyIdle01        = 43,
	ECharAnim_ColdStandbyIdle      = 44,
	ECharAnim_ColdStandbyIdle01    = 45,
	ECharAnim_MovementUpBodyOverride = 46,
	ECharAnim_GrenadeLaunchAnim    = 47,
	ECharAnim_GrenadeLaunchReload  = 48,
	ECharAnim_GrenadeLaunchTacticsReload = 49,
	ECharAnim_FillGas              = 50,
	ECharAnim_DropWeapon           = 51,
	ECharAnim_ShoulderWeaponIdle   = 52,
	ECharAnim_BeCarriedBackMove    = 53,
	ECharAnim_BeCarriedBackPickM   = 54,
	ECharAnim_BeCarriedBackPickL   = 55,
	ECharAnim_BeCarriedBackOpenDoor = 56,
	ECharAnim_ScopeBlendAnim       = 57,
	ECharAnim_MovementLowerBodyOverride = 58,
	ECharAnim_WeaponStandBase      = 59,
	ECharAnim_Max                  = 60
};



enum class ECharacterMoveDragReason : uint8_t
{
	ECharacterMoveDragReason__CMDR_UnknowReason = 0,
	ECharacterMoveDragReason__CMDR_ExceedsDistance = 1,
	ECharacterMoveDragReason__CMDR_MovementModeError = 2,
	ECharacterMoveDragReason__CMDR_PassWall = 3,
	ECharacterMoveDragReason__CMDR_Imprisonment = 4,
	ECharacterMoveDragReason__CMDR_ServerControlPunish = 5,
	ECharacterMoveDragReason__CMDR_ClientLocAndRotErrorProne = 6,
	ECharacterMoveDragReason__CMDR_ResolvingTimeDiscrepancy = 7,
	ECharacterMoveDragReason__CMDR_ExceedMaxZMove = 8,
	ECharacterMoveDragReason__CMDR_OtherSecurity = 9,
	ECharacterMoveDragReason__CMDR_LagPktOrSpeedOverLimit = 10,
	ECharacterMoveDragReason__CMDR_MovementBaseError = 11,
	ECharacterMoveDragReason__CMDR_TimeStampError = 12,
	ECharacterMoveDragReason__CMDR_ModifyBaseMoveable = 13,
	ECharacterMoveDragReason__CMDR_MAX = 14
};



enum class ECharAnimEventType : uint8_t
{
	ECharAnimEvent_PoseChange      = 0,
	ECharAnimEvent_PickUp          = 1,
	ECharAnimEvent_Fire            = 2,
	ECharAnimEvent_Reload          = 3,
	ECharAnimEvent_Switch          = 4,
	ECharAnimEvent_Peek            = 5,
	ECharAnimEvent_PeekAim         = 6,
	ECharAnimEvent_Bolt            = 7,
	ECharAnimEvent_FillGas         = 8,
	ECharAnimEvent_DropWeapon      = 9,
	ECharAnimEvent_BeCarriedBackPickUp = 10,
	ECharAnimEvent_PostFire        = 11,
	ECharAnimEvent_Max             = 12
};



enum class ECharacterJumpType : uint8_t
{
	ECharJump_InPlace              = 0,
	ECharJump_Forward              = 1,
	ECharJump_Max                  = 2
};



enum class ECharacterParachuteAnimType : uint8_t
{
	ECharParachuteAnim_FreeFalling = 0,
	ECharParachuteAnim_Parachute   = 1,
	ECharParachuteAnim_ParachuteEnter = 2,
	ECharParachuteAnim_ParachuteLand = 3,
	ECharParachuteAnim_FreeFallingTurn = 4,
	ECharParachuteAnim_FreeFallingStart = 5,
	ECharParachuteAnim_FreeFallingShake = 6,
	ECharParachuteAnim_FreeFallAerialShow = 7,
	ECharParachuteAnim_DBNOParachuteEnter = 8,
	ECharParachuteAnim_DBNOParachute = 9,
	ECharParachuteAnim_DBNOParachuteLand = 10,
	ECharParachuteAnim_Max         = 11
};



enum class EMentorPlayerType : uint8_t
{
	EMentorPlayerType__MPT_NormalPlayer = 0,
	EMentorPlayerType__MPT_Veteran = 1,
	EMentorPlayerType__MPT_Recruit = 2,
	EMentorPlayerType__MPT_MAX     = 3
};



enum class EEventCounterDefine : uint8_t
{
	EEventCounterDefine__PlayerGotoSnowMountain = 0,
	EEventCounterDefine__PlayerGotoIceLand = 1,
	EEventCounterDefine__PlayerUseMoveablePlatform = 2,
	EEventCounterDefine__PlayerTurboDrop = 3,
	EEventCounterDefine__PlayerWingedFlightCount = 4,
	EEventCounterDefine__PlayerWingedFlightTotalDist = 5,
	EEventCounterDefine__PlayerUseCoin = 6,
	EEventCounterDefine__PlayerEasterEgg = 7,
	EEventCounterDefine__PlayerDuckGameTime = 8,
	EEventCounterDefine__PlayerBeeGameTime = 9,
	EEventCounterDefine__PlayerDuckGameCount = 10,
	EEventCounterDefine__PlayerBeeGameCount = 11,
	EEventCounterDefine__PlayerBlindBoxCount = 12,
	EEventCounterDefine__PlayerDuckShootingRangeCount = 13,
	EEventCounterDefine__PlayerPlaygroundSpringJumpCount = 14,
	EEventCounterDefine__PlayerTownSpringJumpCount = 15,
	EEventCounterDefine__PlayerMakeFiresNum = 16,
	EEventCounterDefine__PlayerChichenBBQNum = 17,
	EEventCounterDefine__PlayerUseKFNum = 18,
	EEventCounterDefine__PlayerUseUAVNum = 19,
	EEventCounterDefine__PlayerKFUsingTime = 20,
	EEventCounterDefine__PlayerUAVUsingTime = 21,
	EEventCounterDefine__PlayerSkateboardUsingCount = 22,
	EEventCounterDefine__PlayerSkateboardUsingTime = 23,
	EEventCounterDefine__PlayerSkateboardUsingDistance = 24,
	EEventCounterDefine__PlayerOpenTreasureBoxCount = 25,
	EEventCounterDefine__PlayerEatCakeCount = 26,
	EEventCounterDefine__PlayerUseDrinkMachineCount = 27,
	EEventCounterDefine__PlayerUseLeapPlatformCount = 28,
	EEventCounterDefine__PlayerPrayTotemsCount = 29,
	EEventCounterDefine__PlayerPickupMushroomCount = 30,
	EEventCounterDefine__PlayerUseBallonCount = 31,
	EEventCounterDefine__PlayerUseQuickSight = 32,
	EEventCounterDefine__PlayerPickingFruitCount = 33,
	EEventCounterDefine__PlayerInteractivePowerTotemCount = 34,
	EEventCounterDefine__PlayerInteractiveStrategyTotemCount = 35,
	EEventCounterDefine__PlayerInteractiveGuardTotemCount = 36,
	EEventCounterDefine__PlayerUseLookOutCount = 37,
	EEventCounterDefine__PlayerDancingInIslandCount = 38,
	EEventCounterDefine__PlayerFirstEnterVehicleType = 39,
	EEventCounterDefine__PlayerFirstEnterVehicleTime = 40,
	EEventCounterDefine__PlayerPlayVideoCount = 41,
	EEventCounterDefine__PlayerTakeBoatInWaterFallCount = 42,
	EEventCounterDefine__PlayerAceTaskStatusStat = 43,
	EEventCounterDefine__PlayerAcePillar1RewardTime = 44,
	EEventCounterDefine__PlayerAcePillar2RewardTime = 45,
	EEventCounterDefine__PlayerAcePillar3RewardTime = 46,
	EEventCounterDefine__PlayerAcePillar4RewardTime = 47,
	EEventCounterDefine__PlayerAcePillar5RewardTime = 48,
	EEventCounterDefine__PlayerAcePillarTotalCount = 49,
	EEventCounterDefine__PlayerDamageSteelDoorCount = 50,
	EEventCounterDefine__PlayerShowAceTaskPanelCount = 51,
	EEventCounterDefine__PlayerKillMetroAICount = 52,
	EEventCounterDefine__PlayerEnterUndergroundCount = 53,
	EEventCounterDefine__PlayerEnterRadiationCount = 54,
	EEventCounterDefine__PlayerUseSnowCockGrenadeCount = 55,
	EEventCounterDefine__PlayerUseSnowmanGrenadeCount = 56,
	EEventCounterDefine__PlayerEnterFloatIceCount = 57,
	EEventCounterDefine__PlayerInteractPineCount = 58,
	EEventCounterDefine__PlayerEnterWinterHouseCount = 59,
	EEventCounterDefine__PlayerEnterIceGardenCount = 60,
	EEventCounterDefine__PlayerDestroyPaperWallWithStickyBombCount = 61,
	EEventCounterDefine__PlayerUsePanzerFaustCount = 62,
	EEventCounterDefine__PlayerKillMonsterCount = 63,
	EEventCounterDefine__PlayerUseCrystalCount = 64,
	EEventCounterDefine__PlayerEnterDestroyedApex = 65,
	EEventCounterDefine__PlayerCollectLightBallCount = 66,
	EEventCounterDefine__PlayerKilledInSectManCount = 67,
	EEventCounterDefine__PlayerUseTeleport = 68,
	EEventCounterDefine__TeleportFromTrain = 69,
	EEventCounterDefine__A1StationEnter = 70,
	EEventCounterDefine__A1StationExit = 71,
	EEventCounterDefine__A2StationEnter = 72,
	EEventCounterDefine__A2StationExit = 73,
	EEventCounterDefine__A3StationEnter = 74,
	EEventCounterDefine__A3StationExit = 75,
	EEventCounterDefine__A4StationEnter = 76,
	EEventCounterDefine__A4StationExit = 77,
	EEventCounterDefine__A5StationEnter = 78,
	EEventCounterDefine__A5StationExit = 79,
	EEventCounterDefine__A6StationEnter = 80,
	EEventCounterDefine__A6StationExit = 81,
	EEventCounterDefine__B1StationEnter = 82,
	EEventCounterDefine__B1StationExit = 83,
	EEventCounterDefine__B2StationEnter = 84,
	EEventCounterDefine__B2StationExit = 85,
	EEventCounterDefine__B3StationEnter = 86,
	EEventCounterDefine__B3StationExit = 87,
	EEventCounterDefine__B4StationEnter = 88,
	EEventCounterDefine__B4StationExit = 89,
	EEventCounterDefine__C1StationEnter = 90,
	EEventCounterDefine__C1StationExit = 91,
	EEventCounterDefine__C2StationEnter = 92,
	EEventCounterDefine__C2StationExit = 93,
	EEventCounterDefine__C3StationEnter = 94,
	EEventCounterDefine__C3StationExit = 95,
	EEventCounterDefine__C4StationEnter = 96,
	EEventCounterDefine__C4StationExit = 97,
	EEventCounterDefine__C5StationEnter = 98,
	EEventCounterDefine__C5StationExit = 99,
	EEventCounterDefine__D1StationEnter = 100,
	EEventCounterDefine__D1StationExit = 101,
	EEventCounterDefine__D2StationEnter = 102,
	EEventCounterDefine__D2StationExit = 103,
	EEventCounterDefine__D3StationEnter = 104,
	EEventCounterDefine__D3StationExit = 105,
	EEventCounterDefine__D4StationEnter = 106,
	EEventCounterDefine__D4StationExit = 107,
	EEventCounterDefine__D5StationEnter = 108,
	EEventCounterDefine__D5StationExit = 109,
	EEventCounterDefine__EEventCounterDefine_MAX = 110
};



enum class ETLog_BackpackEquipmentSlotType : uint8_t
{
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_None = 0,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_WeaponSlot1 = 1,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_WeaponSlot2 = 2,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_HelmetSlot = 3,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_ArmorSlot = 4,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_BagSlot = 5,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1GunPoint = 6,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Grip = 7,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Magazine = 8,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Gunstock = 9,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1OpticalSight = 10,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2GunPoint = 11,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Grip = 12,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Magazine = 13,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Gunstock = 14,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2OpticalSight = 15,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_MAX = 16
};



enum class EWeaponDistanceType : uint8_t
{
	EWeaponDistanceType__Gun       = 0,
	EWeaponDistanceType__CloseCombat = 1,
	EWeaponDistanceType__Thrown    = 2,
	EWeaponDistanceType__EWeaponDistanceType_MAX = 3
};



enum class ELobbyCharacterAnimType : uint8_t
{
	ELobbyCharAnim_Boy             = 0,
	ELobbyCharAnim_Girl            = 1,
	ELobbyCharAnim_Max             = 2
};



enum class EGridGenerateType : uint8_t
{
	EGridGenerateType__Invalid     = 0,
	EGridGenerateType__Normal      = 1,
	EGridGenerateType__EGridGenerateType_MAX = 2
};



enum class EAutoRotationMode : uint8_t
{
	EAutoRotationMode__Normal      = 0,
	EAutoRotationMode__Pendulum    = 1,
	EAutoRotationMode__CustomCurve = 2,
	EAutoRotationMode__EAutoRotationMode_MAX = 3
};



enum class EDIYProjectDirection : uint8_t
{
	EDIYProjectDirection__X        = 0,
	EDIYProjectDirection__X_       = 1,
	EDIYProjectDirection__Y        = 2,
	EDIYProjectDirection__Y_       = 3,
	EDIYProjectDirection__Z        = 4,
	EDIYProjectDirection__Z_       = 5,
	EDIYProjectDirection__EDIYProjectDirection_MAX = 6
};



enum class EBattleDataType : uint8_t
{
	EBattleDataType__None          = 0,
	EBattleDataType__All           = 1,
	EBattleDataType__SimpleAll     = 2,
	EBattleDataType__PlayerInfo    = 3,
	EBattleDataType__SimplePlayerInfo = 4,
	EBattleDataType__WeaponAvatar  = 5,
	EBattleDataType__WeaponAvatarDIY = 6,
	EBattleDataType__EBattleDataType_MAX = 7
};



enum class EAntiMoveSpecialFlags : uint8_t
{
	StandOnMovableBase             = 0,
	EAntiMoveSpecialFlags_MAX      = 1
};



enum class EVehicleMoveDragReason : uint8_t
{
	EVehicleMoveDragReason__Unknown = 0,
	EVehicleMoveDragReason__ServerCorrection = 1,
	EVehicleMoveDragReason__PunishBySecurity = 2,
	EVehicleMoveDragReason__BeyondErrorThreshold = 3,
	EVehicleMoveDragReason__CorrectionWithoutPassengers = 4,
	EVehicleMoveDragReason__UseReplicatedMovementWhenRepMovementTimeout = 5,
	EVehicleMoveDragReason__UseReplicatedLocAndRotWhenRepMovementTimeout = 6,
	EVehicleMoveDragReason__StopSimulateWhenRepMovementTimeout = 7,
	EVehicleMoveDragReason__EVehicleMoveDragReason_MAX = 8
};



enum class EDeathMatchSubModeType : uint8_t
{
	EDeathMatchSubModeType__DeathMatch = 0,
	EDeathMatchSubModeType__HardPoint = 1,
	EDeathMatchSubModeType__ArmsRace = 2,
	EDeathMatchSubModeType__EDeathMatchSubModeType_MAX = 3
};



enum class EIDCardDestroyReasonType : uint8_t
{
	EDRT_Revived                   = 0,
	EDRT_Timeout                   = 1,
	EDRT_PlayerExit                = 2,
	EDRT_TeamTerminated            = 3,
	EDRT_MAX                       = 4
};



enum class ERevivalFailedReasonType : uint8_t
{
	ERFRT_Succeed                  = 0,
	ERFRT_PlayerDead               = 1,
	ERFRT_Cancel                   = 2,
	ERFRT_IDCardDestroyed          = 3,
	ERFRT_Interrupt                = 4,
	ERFRT_BeHit                    = 5,
	ERFRT_Max_DoNothing            = 6,
	ERFRT_MAX                      = 7
};



enum class EObserverEnemyTraceType : uint8_t
{
	EObserverEnemyTraceType__None  = 0,
	EObserverEnemyTraceType__FriendObserve = 1,
	EObserverEnemyTraceType__DeathObserve = 2,
	EObserverEnemyTraceType__Both  = 3,
	EObserverEnemyTraceType__EObserverEnemyTraceType_MAX = 4
};



enum class ERealtimeReportType : uint8_t
{
	ERealtimeReportType__CharMove1 = 0,
	ERealtimeReportType__ERealtimeReportType_MAX = 1
};



enum class ERealtimePunishType : uint8_t
{
	ERealtimePunishType__Invalid   = 0,
	ERealtimePunishType__CharMove  = 1,
	ERealtimePunishType__AutoAim   = 2,
	ERealtimePunishType__ERealtimePunishType_MAX = 3
};



enum class EPrisonBreak : uint8_t
{
	EPrisonBreak__ClientMaxSpeed   = 0,
	EPrisonBreak__ClientDamageRate = 1,
	EPrisonBreak__ClientParachuteSpeed = 2,
	EPrisonBreak__ClientCoronaDataEmpty = 3,
	EPrisonBreak__ClientCoronaDataCrcErr = 4,
	EPrisonBreak__EPrisonBreak_MAX = 5
};



enum class ERegionType : uint8_t
{
	SizeInvalid                    = 0,
	SizeSmall                      = 1,
	SizeMedium                     = 2,
	SizeLarge                      = 3,
	ERegionType_MAX                = 4
};



enum class EVehicleSpotRandomType : uint8_t
{
	Vehicle_TotalCount             = 0,
	Vehicle_Probability            = 1,
	Vehicle_MAX                    = 2
};



enum class ESpotType : uint8_t
{
	ESpotType_A                    = 0,
	ESpotType_B                    = 1,
	ESpotType_C                    = 2,
	ESpotType_D                    = 3,
	ESpotType_E                    = 4,
	ESpotType_F                    = 5,
	ESpotType_G                    = 6,
	ESpotType_H                    = 7,
	ESpotType_I                    = 8,
	ESpotType_J                    = 9,
	ESpotType_K                    = 10,
	ESpotType_L                    = 11,
	ESpotType_M                    = 12,
	ESpotType_N                    = 13,
	ESpotType_O                    = 14,
	ESpotType_P                    = 15,
	ESpotType_Q                    = 16,
	ESpotType_R                    = 17,
	ESpotType_S                    = 18,
	ESpotType_T                    = 19,
	ESpotType_U                    = 20,
	ESpotType_V                    = 21,
	ESpotType_W                    = 22,
	ESpotType_X                    = 23,
	ESpotType_Y                    = 24,
	ESpotType_Z                    = 25,
	ESpotType_A1                   = 26,
	ESpotType_B1                   = 27,
	ESpotType_C1                   = 28,
	ESpotType_D1                   = 29,
	ESpotType_E1                   = 30,
	ESpotType_F1                   = 31,
	ESpotType_G1                   = 32,
	ESpotType_H1                   = 33,
	ESpotType_I1                   = 34,
	ESpotType_J1                   = 35,
	ESpotType_K1                   = 36,
	ESpotType_L1                   = 37,
	ESpotType_M1                   = 38,
	ESpotType_N1                   = 39,
	ESpotType_O1                   = 40,
	ESpotType_P1                   = 41,
	ESpotType_Q1                   = 42,
	ESpotType_R1                   = 43,
	ESpotType_S1                   = 44,
	ESpotType_T1                   = 45,
	ESpotType_U1                   = 46,
	ESpotType_V1                   = 47,
	ESpotType_W1                   = 48,
	ESpotType_X1                   = 49,
	ESpotType_Y1                   = 50,
	ESpotType_Z1                   = 51,
	ESpotType_MAX                  = 52
};



enum class ESpotGroupType : uint8_t
{
	ESpotGroup_A                   = 0,
	ESpotGroup_B                   = 1,
	ESpotGroup_C                   = 2,
	ESpotGroup_D                   = 3,
	ESpotGroup_E                   = 4,
	ESpotGroup_F                   = 5,
	ESpotGroup_G                   = 6,
	ESpotGroup_H                   = 7,
	ESpotGroup_I                   = 8,
	ESpotGroup_J                   = 9,
	ESpotGroup_K                   = 10,
	ESpotGroup_L                   = 11,
	ESpotGroup_M                   = 12,
	ESpotGroup_N                   = 13,
	ESpotGroup_O                   = 14,
	ESpotGroup_P                   = 15,
	ESpotGroup_Q                   = 16,
	ESpotGroup_R                   = 17,
	ESpotGroup_S                   = 18,
	ESpotGroup_T                   = 19,
	ESpotGroup_U                   = 20,
	ESpotGroup_V                   = 21,
	ESpotGroup_W                   = 22,
	ESpotGroup_X                   = 23,
	ESpotGroup_Y                   = 24,
	ESpotGroup_Z                   = 25,
	ESpotGroup_MAX                 = 26
};



enum class ESVehAnimVehicleType : uint8_t
{
	ESVehAnimVehicleType__Anim_VT_Unknown = 0,
	ESVehAnimVehicleType__Anim_VT_Motorbike = 1,
	ESVehAnimVehicleType__Anim_VT_Motorbike_SideCart = 2,
	ESVehAnimVehicleType__Anim_VT_Dacia = 3,
	ESVehAnimVehicleType__Anim_VT_UAZ = 4,
	ESVehAnimVehicleType__Anim_VT_Buggy = 5,
	ESVehAnimVehicleType__Anim_VT_PG117 = 6,
	ESVehAnimVehicleType__Anim_VT_Aquarail = 7,
	ESVehAnimVehicleType__Anim_VT_MiniBus = 8,
	ESVehAnimVehicleType__Anim_VT_PickUp = 9,
	ESVehAnimVehicleType__Anim_VT_Mirado = 10,
	ESVehAnimVehicleType__Anim_VT_Rony = 11,
	ESVehAnimVehicleType__Anim_VT_Surfboard = 12,
	ESVehAnimVehicleType__Anim_VT_UH60 = 13,
	ESVehAnimVehicleType__Anim_VT_Amphibious = 14,
	ESVehAnimVehicleType__Anim_VT_Tuk = 15,
	ESVehAnimVehicleType__Anim_VT_Scooter = 16,
	ESVehAnimVehicleType__Anim_VT_Motorglider = 17,
	ESVehAnimVehicleType__Anim_VT_MAX = 18
};



enum class ECharacterAnimTypeAsynLoaded : uint8_t
{
	ECharAnimAsyn_Swim_Up          = 0,
	ECharAnimAsyn_Swim_Down        = 1,
	ECharAnimAsyn_Max              = 2
};



enum class ECharacterViewType : uint8_t
{
	ECharacterView_TPPandFPP       = 0,
	ECharacterView_TPP             = 1,
	ECharacterView_FPP             = 2,
	ECharacterView_Max             = 3
};



enum class EVehicleSeatType : uint8_t
{
	EVehSeatType_Driver            = 0,
	EVehSeatType_Left              = 1,
	EVehSeatType_Right             = 2,
	EVehSeatType_Max               = 3
};



enum class EVehicleType : uint8_t
{
	EVehType_Buggy                 = 0,
	EVehType_UAZ                   = 1,
	EVehType_Motorcycle            = 2,
	EVehType_Dacia                 = 3,
	EVehType_PG                    = 4,
	EVehType_Max                   = 5
};



enum class ECharacterShovelPhase : uint8_t
{
	ECharacterShovelPhase__ECharShovel_Enter = 0,
	ECharacterShovelPhase__ECharShovel_Shoveling = 1,
	ECharacterShovelPhase__ECharShovel_Leave = 2,
	ECharacterShovelPhase__ECharShovel_Crouch_Leave = 3,
	ECharacterShovelPhase__ECharShovel_Max = 4
};



enum class ECharacterJumpPhase : uint8_t
{
	EJumpPhase_PreJump             = 0,
	EJumpPhase_FallLoop0           = 1,
	EJumpPhase_FallLoop1           = 2,
	EJumpPhase_Land0               = 3,
	EJumpPhase_Land1               = 4,
	EJumpPhase_GrenadeJump         = 5,
	EJumpPhase_GrenadeJump01       = 6,
	EJumpPhase_GrenadeFall         = 7,
	EJumpPhase_GrenadeFall01       = 8,
	EJumpPhase_Max                 = 9
};



enum class ECharaAnimListType : uint8_t
{
	ECharaAnimListType_TPP         = 0,
	ECharaAnimListType_FPP         = 1,
	ECharaAnimListType_Jump        = 2,
	ECharaAnimListType_JumpFPP     = 3,
	ECharaAnimListType_Shield      = 4,
	EcharaAnimListType_Vehicle     = 5,
	ECharaAnimListType_Shovel      = 6,
	ECharaAnimListType_ShovelFPP   = 7,
	ECharaAnimListType_Max         = 8
};



enum class EBornItemFlag : uint8_t
{
	CANCARRYONPLANE                = 0,
	EBornItemFlag_MAX              = 1
};



enum class EGameOverReason : uint8_t
{
	EGameOverReason__Exit          = 0,
	EGameOverReason__NoJoinPlayers = 1,
	EGameOverReason__NoActivePlayers = 2,
	EGameOverReason__NoActivePlayersButHaveObservers = 3,
	EGameOverReason__InterruptGame = 4,
	EGameOverReason__EGameOverReason_MAX = 5
};



enum class EIndependentSpotType : uint8_t
{
	EIndependentSpotType__ItemSpot = 0,
	EIndependentSpotType__VehicleSpot = 1,
	EIndependentSpotType__EIndependentSpotType_MAX = 2
};



enum class ELevelSequenceStartPlayType : uint8_t
{
	ELvSeqStartPlayType_Enable     = 0,
	ELvSeqStartPlayType_Disable    = 1,
	ELvSeqStartPlayType_Check      = 2,
	ELvSeqStartPlayType_MAX        = 3
};



enum class ECharSpecialLevelSequenceType : uint8_t
{
	ECharSpecLvSeq_WeaponCheck     = 0,
	ECharSpecLvSeq_WeaponShow      = 1,
	ECharSpecLvSeq_WeaponHighlightMoment = 2,
	ECharSpecLvSeq_Max             = 3
};



enum class ESequenceRelevantType : uint8_t
{
	ESequenceRelevantType__Default = 0,
	ESequenceRelevantType__OnlySelf = 1,
	ESequenceRelevantType__Team    = 2,
	ESequenceRelevantType__ESequenceRelevantType_MAX = 3
};



enum class ECharacterShowSceneType : uint8_t
{
	ECharacterShowSceneType_Lobby  = 0,
	ECharacterShowSceneType_GameEndAvatarScene = 1,
	ECharacterShowSceneType_LobbyWithCar = 2,
	ECharacterShowSceneType_LobbySystem = 3,
	ECharacterShowSceneType_LobbyPure = 4,
	ECharacterShowSceneType_Max    = 5
};



enum class ELobbyCharacterPosIndex : uint8_t
{
	Self                           = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	ELobbyCharacterPosIndex_Max    = 4
};



enum class EPlayerStatisticTypeForPCOB : uint8_t
{
	EPlayerStatisticTypeForPCOB__None = 0,
	EPlayerStatisticTypeForPCOB__KillNumByDriveVehicle = 1,
	EPlayerStatisticTypeForPCOB__PoisonTotalDamage = 2,
	EPlayerStatisticTypeForPCOB__EPlayerStatisticTypeForPCOB_MAX = 3
};



enum class EActorSpawnType : uint8_t
{
	EStatic_Config                 = 0,
	EDynamic_Generator             = 1,
	LevelEvent_Trrigger            = 2,
	EActorSpawnType_MAX            = 3
};



enum class EMonsterBornType : uint8_t
{
	EMonsterBornType_Burrow        = 0,
	EMonsterBornType_ClimbWall     = 1,
	EMonsterBornType_Fall          = 2,
	EMonsterBornType_ProneToStand  = 3,
	EMonsterBornType_Garbage       = 4,
	EMonsterBornType_BreakWall     = 5,
	EMonsterBornType_LyingOnTheGround = 6,
	EMonsterBornType_Max           = 7
};



enum class EWeatherType : uint8_t
{
	EWeatherType_None              = 0,
	EWeatherType_Sunday            = 1,
	EWeatherType_Rainy             = 2,
	EWeatherType_Foggy             = 3,
	EWeatherType_Dark              = 4,
	EWeatherType_Night             = 5,
	EWeatherType_DayToNight        = 6,
	EWeatherType_SnowToSquall      = 7,
	EWeatherType_SnowToSquall2     = 8,
	EWeatherType_Aurora            = 9,
	EWeatherType_Max               = 10
};









struct FBattleItemNet
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                Count;                                                    
	bool                                               bEquipping;                                               
	EItemStoreArea                                     ItemStoreArea;                                            
	unsigned char                                      UnknownData00[0x2];                                       
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           
	TArray<struct FItemAssociation>                    Associations;                                             
	int                                                Durability;                                               
	bool                                               bDisableUse;                                              
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FNetArrayUnit
{
	struct FBattleItemNet                              Unit;                                                     
	bool                                               bMarkDelete;                                              
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FIncNetArray
{
	TArray<struct FNetArrayUnit>                       IncArray;                                                 
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FDSSwitchInfo
{
	int                                                KeyNum;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     SValue;                                                   
};



struct FDistanceDragData
{
	float                                              CX;                                                       
	float                                              CY;                                                       
	float                                              CZ;                                                       
	float                                              SX;                                                       
	float                                              SY;                                                       
	float                                              sz;                                                       
};



struct FCharacterMoveDrag
{
	int                                                Minute;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<unsigned char, int>                           ReasonCount;                                              
	TArray<struct FDistanceDragData>                   ExceedsDistances;                                         
};



struct FCharacterSimulateMoveDrag
{
	int                                                Minute;                                                   
	int                                                Count;                                                    
	int                                                DragCount;                                                
	int                                                ShakeCount;                                               
};



struct FCharacterMoveDragData
{
	TArray<struct FCharacterMoveDrag>                  Drag;                                                     
	TArray<struct FCharacterSimulateMoveDrag>          SimulateDrag;                                             
};



struct FParachuteDragData
{
	uint32_t                                           MyDrag;                                                   
	uint32_t                                           OtherDrag;                                                
};



struct FVehicleMoveDragFriendly
{
	int                                                Minute;                                                   
	unsigned char                                      VehicleType;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	TMap<unsigned char, int>                           Counters;                                                 
};



struct FVehicleMoveDragDataFriendly
{
	TArray<struct FVehicleMoveDragFriendly>            MoveDrag;                                                 
	TArray<struct FVehicleMoveDragFriendly>            SimulatedMoveDrag;                                        
};



struct FVehicleCorrectionData
{
	unsigned char                                      VehicleType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	TMap<unsigned char, int>                           Counters;                                                 
};



struct FVehicleProtectionReportData
{
	unsigned char                                      VehicleType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	TMap<unsigned char, int>                           Counters;                                                 
	bool                                               FromClient;                                               
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FCharacterShootVerifyData
{
	TMap<unsigned char, int>                           ShootVerifyFailed;                                        
};



struct FCharacterShootVerifyStat
{
	TMap<unsigned char, int>                           ShootVerifyStat;                                          
};



struct FDynamicTriggerTransform
{
	struct FVector                                     Loc;                                                      
	struct FRotator                                    Rot;                                                      
};



struct FDynamicTriggerConfig
{
	TArray<struct FDynamicTriggerTransform>            Transforms;                                               
	struct FString                                     TriggerClassPath;                                         
};



struct FDynamicBuildingGroupTransform
{
	float                                              LocX;                                                     
	float                                              LocY;                                                     
	float                                              LocZ;                                                     
	float                                              RotX;                                                     
	float                                              RotY;                                                     
	float                                              RotZ;                                                     
};



struct FDynamicLoadItem
{
	TArray<struct FDynamicBuildingGroupTransform>      TransArray;                                               
	int                                                ActID;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Path;                                                     
	bool                                               IsClearAfterStart;                                        
	bool                                               IsPlayerStartPot;                                         
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<int>                                        PosIdxList;                                               
};



struct FDynamicLoadActors
{
	TArray<class AActor*>                              ActorArray;                                               
};



struct FVehicleAvatarReplaceCfg
{
	int                                                OriginID;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        SkinIDList;                                               
	TArray<float>                                      ProbabilityDistribute;                                    
	int                                                MaxNum;                                                   
	int                                                CurrentNum;                                               
};



struct FAirDropBoxInOb
{
	int                                                boxId;                                                    
	bool                                               Flying;                                                   
	bool                                               IsEmpty;                                                  
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     pos;                                                      
};



struct FAdvertisementActorConfig
{
	struct FString                                     ResPath;                                                  
	struct FString                                     HttpImgPath;                                              
	struct FVector                                     Loc;                                                      
	struct FRotator                                    Rot;                                                      
	struct FVector                                     Scale;                                                    
	int                                                ID;                                                       
	int                                                CulDistance;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMissionBoardConfig
{
	struct FString                                     ResPath;                                                  
	struct FVector                                     Loc;                                                      
	struct FRotator                                    Rot;                                                      
	struct FVector                                     Scale;                                                    
	float                                              Progress;                                                 
	struct FString                                     CountOrTime;                                              
	int                                                TipId;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGameModePlayerItem
{
	int                                                ItemTableID;                                              
	int                                                Count;                                                    
	TArray<int>                                        AdditionIntData;                                          
	bool                                               bDropped;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FSeasonStatueData
{
	struct FString                                     Name;                                                     
	struct FVector                                     Loc;                                                      
	struct FRotator                                    Rot;                                                      
	struct FVector                                     Scale;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Nation;                                                   
	int                                                AGender;                                                  
	int                                                Head;                                                     
	int                                                hair;                                                     
	int                                                WeaponId;                                                 
	TArray<int>                                        AvatarList;                                               
	TArray<struct FGameModePlayerItem>                 AvatarWithAdditionList;                                   
};



struct FStatueBaseData
{
	struct FString                                     ClassPath;                                                
	struct FString                                     MatPath;                                                  
	struct FString                                     TeamFlag;                                                 
	struct FString                                     TeamName;                                                 
	struct FVector                                     Loc;                                                      
	struct FRotator                                    Rot;                                                      
	struct FVector                                     Scale;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCharacterOverrideAttrData
{
	struct FString                                     AttrName;                                                 
	float                                              AttrValue;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FDSCorpsInfo
{
	uint64_t                                           CorpsID;                                                  
	struct FString                                     CorpsName;                                                
	int                                                Icon;                                                     
	int                                                SegmentLevel;                                             
};



struct FVehicleReportEntry
{
	uint32_t                                           VehicleID;                                                
	int                                                VehicleShapeType;                                         
	bool                                               IsDestroyed;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FirstAttackedTime;                                        
	float                                              LastAttackedTime;                                         
	bool                                               Drived;                                                   
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FGameModeCorpsDetailData
{
	struct FString                                     Name;                                                     
	int                                                CorpsHeadIcon;                                            
	int                                                KilledNum;                                                
	int                                                SegmentLevel;                                             
	int                                                RealtimeRank;                                             
	int                                                DefeatPlayerNum;                                          
	float                                              TotalDamage;                                              
	float                                              SurvivalTime;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGameModeTeamBattleResultData
{
	struct FString                                     Reason;                                                   
	int                                                RemainTeamCount;                                          
	int                                                RemainAlivePlayerCount;                                   
	float                                              PlaneDirectionX;                                          
	float                                              PlaneDirectionY;                                          
	TMap<struct FString, struct FString>               PlayersLogoutTime;                                        
	TMap<struct FString, float>                        PlayersOnlineTime;                                        
	TArray<struct FGameModeCorpsDetailData>            RealTimeCorpsRank;                                        
	bool                                               bIsGameTerminator;                                        
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBattleData
{
	int                                                WatcherNum;                                               
	int                                                CircleNum;                                                
};



struct FGameModeParams
{
	struct FName                                       CurrentGameModeState;                                     
	int                                                MaxKillTime;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FDSAIDropItem
{
	uint64_t                                           UID;                                                      
	int                                                Time;                                                     
	int8_t                                             hlv;                                                      
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FDSAIDropInfo
{
	uint64_t                                           BattleID;                                                 
	int                                                nts;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FDSAIDropItem>                       ais;                                                      
};



struct FHitFlow
{
	int                                                AimType;                                                  
	int                                                Distance;                                                 
	int                                                IsKill;                                                   
	float                                              Damage;                                                   
	bool                                               bFallOnGround;                                            
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<unsigned char>                              PlayerStates;                                             
	unsigned char                                      HitPos;                                                   
	bool                                               IsAI;                                                     
	unsigned char                                      UnknownData01[0x2];                                       
	uint32_t                                           HitPlayerKey;                                             
	int                                                TimeStamp;                                                
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FWeaponReport
{
	int                                                WeaponId;                                                 
	int                                                FireCount;                                                
	int                                                AdsFireCount;                                             
	int                                                HitCount;                                                 
	int                                                UniqueHitCount;                                           
	int                                                KillCount;                                                
	float                                              TotalDamage;                                              
	float                                              TotalMonsterDamage;                                       
	float                                              TotalRealPlayerDamage;                                    
	float                                              TotalNormalAIDamage;                                      
	float                                              TotalMLAIDamage;                                          
	int                                                TotalOwnTime;                                             
	int                                                TotalUseTime;                                             
	int                                                KnockDownCount;                                           
	int                                                HeadShootCount;                                           
	int                                                KillAICount;                                              
	int                                                KnockDownAICount;                                         
	int                                                HeadShootAICount;                                         
	int                                                HitAICount;                                               
	int                                                UniqueHitAICount;                                         
	int                                                UseCount;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FHitFlow>                            HitFlow;                                                  
};



struct FOnePlayerWeapon
{
	struct FString                                     PlayerID;                                                 
	TArray<struct FWeaponReport>                       Weapons;                                                  
};



struct FRealtimeVerifyInfo
{
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	int                                                HitCountsNoAI;                                            
	int                                                HeadshotCountsNoAI;                                       
	int                                                ShotCounts;                                               
	int                                                Kills;                                                    
	int                                                PrisonBreaks;                                             
	int                                                JumpMaxHeight2;                                           
	int                                                SkeletonLengthCheckInvaildNum;                            
	int                                                MuzzleAndOwnerPosInVaildNum;                              
	int                                                ImpactActorPosOffsetBigNum;                               
	int                                                TotalImpactCharacterNum;                                  
	int                                                WeaponScopeHeightBigNum;                                  
	int                                                WeaponScopeDisBigNum;                                     
	int                                                OwnerHeadAndMuzzleBlockNum;                               
	int                                                ImpactPointAndBulletDisBigNum;                            
	int                                                ShootVerifyInvalidNum;                                    
	float                                              TotalSkeletonLengthMax;                                   
	int                                                TimeAccTimes;                                             
	int                                                SpeedQuickCheck;                                          
	float                                              ShootVerifyClientHitAABBCount;                            
	float                                              ShootVerifyDSAABBMissCount;                               
	float                                              PlayerZ;                                                  
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FHeartBeatData
{
	int                                                AlivePlayerNum;                                           
	int                                                AINum;                                                    
	int                                                MonsterNum;                                               
	int                                                ConnectionNum;                                            
	int                                                OnlineNum;                                                
	int                                                HighPingNum;                                              
};



struct FGroupSpotComponentArray
{
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UGroupSpotSceneComponent*>            AllGroupComponents;                                       
};



struct FWorldTileSpotArray
{
	int                                                WorldCompositionID;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<class USpotSceneComponent*>                 AllSpotComponents;                                        
};



struct FSpotWeight
{
	struct FString                                     Name;                                                     
	int                                                Weight;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FItemGenerateSpawnClass
{
	int                                                ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	class UClass*                                      ItemClass;                                                
	struct FString                                     ItemPath;                                                 
	int                                                ItemCount;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     MetaData;                                                 
	struct FString                                     ItemValue;                                                
	struct FString                                     ItemCategory;                                             
	bool                                               bRepeatGenerateItem;                                      
	bool                                               IsNearItem;                                               
	unsigned char                                      UnknownData02[0x2];                                       
	struct FVector                                     SpotGenerateLoc;                                          
	struct FVector                                     SpotGroupLoc;                                             
	struct FRotator                                    SpotRotator;                                              
	int                                                SpotPercent;                                              
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     SpotDefaultTag;                                           
	unsigned char                                      UnknownData04[0x8];                                       
	class AActor*                                      HostActor;                                                
	TWeakObjectPtr<class AActor>                       AttachedActor;                                            
	unsigned char                                      UnknownData05[0x14];                                      
	int                                                SpotIndex;                                                
	bool                                               Random;                                                   
	bool                                               IsStickToTheGround;                                       
	unsigned char                                      UnknownData06[0x2];                                       
	struct FVector                                     RelativeLoc;                                              
};



struct FItemGroupStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                AllGroupSpotCount;                                        
	int                                                AllValidGroupSpotCount;                                   
	int                                                AllSpotCount;                                             
	int                                                AllValidSpotCount;                                        
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FItemSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                AllSpotCount;                                             
	int                                                AllValidSpotCount;                                        
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FBuildingStatisticsData : public FTableRowBase
{
	struct FString                                     BuildingName;                                             
	float                                              BuildingLocationX;                                        
	float                                              BuildingLocationY;                                        
	int                                                AllGroupSpotCount;                                        
	int                                                AllValidGroupSpotCount;                                   
	int                                                AllSpotCount;                                             
	int                                                AllValidSpotCount;                                        
	TMap<TEnumAsByte<ESpotType>, struct FItemSpotStatisticsData> SpotStatisticsData;                                       
};



struct FItemClassStatisticsData : public FTableRowBase
{
	struct FString                                     ItemPath;                                                 
	bool                                               bValidPath;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                ItemCount;                                                
	struct FString                                     ItemTogetherPath;                                         
	int                                                ItemTogetherCount;                                        
	bool                                               bValidTogetherPath;                                       
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FAreaItemStatisticsData : public FTableRowBase
{
	struct FString                                     ItemName;                                                 
	int                                                UID;                                                      
	int                                                ItemId;                                                   
	int                                                GroupType;                                                
	int                                                SpotType;                                                 
	struct FString                                     AreaName;                                                 
	struct FVector                                     Location;                                                 
	float                                              X;                                                        
	float                                              Y;                                                        
	int                                                GameTime;                                                 
};



struct FItemGenerateStatisticsData
{
	int                                                AllGroupSpotCount;                                        
	int                                                AllValidGroupSpotCount;                                   
	int                                                AllSpotCount;                                             
	int                                                AllValidSpotCount;                                        
	TMap<TEnumAsByte<ESpotGroupType>, struct FItemGroupStatisticsData> GroupStatisticsData;                                      
	TMap<struct FString, struct FBuildingStatisticsData> BuildingStatisticsData;                                   
	TMap<struct FString, struct FItemClassStatisticsData> ItemStatisticsData;                                       
	TArray<struct FAreaItemStatisticsData>             AreaItemStatisticsData;                                   
};



struct FSpotTypeProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                SpotPercentMin;                                           
	int                                                SpotPercentMax;                                           
	int                                                SpotPercentDot;                                           
	int                                                ItemPerSpotMin;                                           
	int                                                ItemPerSpotMax;                                           
	TArray<struct FSpotWeight>                         WeightsPerValue;                                          
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       
};



struct FSpotGroupProperty
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                SpotGroupPercent;                                         
	TArray<struct FSpotTypeProperty>                   SpotTypeProperties;                                       
	bool                                               bRepeatGenerateItem;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              RepeatGenerateItemCDMin;                                  
	float                                              RepeatGenerateItemCDMax;                                  
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FItemRegionCircle
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	float                                              RadiusSquared2D;                                          
	unsigned char                                      UnknownData00[0x24];                                      
};



struct FExtraItemSpawn
{
	int                                                SpawnPercent;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     SpawnItemValue;                                           
	struct FString                                     SpawnItemCategory;                                        
};



struct FItemGenerateSpawnData
{
	int                                                KeyID;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ItemValue;                                                
	struct FString                                     ItemCategory;                                             
	int                                                ItemWeight;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ItemPath;                                                 
	int                                                ItemStackCount;                                           
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     ItemTogetherPath;                                         
	int                                                ItemTogetherStackCount;                                   
	int                                                ItemTogetherCountMin;                                     
	int                                                ItemTogetherCountMax;                                     
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FItemGenerateSpawnDataArray
{
	struct FString                                     ValueCatetory;                                            
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    
};



struct FRepeatItemSpotData
{
	unsigned char                                      UnknownData00[0xD0];                                      
	float                                              RepeatGenerateCD;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	int64_t                                            LastGenerateItemTime;                                     
	TMap<struct FString, int>                          CacheItemValeCategory;                                    
};



struct FGenerateItemLimit
{
	int                                                ItemId;                                                   
	int                                                ItemNum;                                                  
	struct FString                                     WrapperPath;                                              
};



struct FAreaItemsLimitEdit
{
	int                                                AreaX;                                                    
	int                                                AreaY;                                                    
	TArray<struct FGenerateItemLimit>                  ItemsMaxLimitEdit;                                        
	TArray<struct FGenerateItemLimit>                  ItemsMinLimitEdit;                                        
};



struct FAreaItemsNum
{
	int                                                LimitNum;                                                 
	int                                                CurNum;                                                   
	struct FString                                     WrapperPath;                                              
};



struct FAreaItemsLimit
{
	struct FRegionID                                   RegionID;                                                 
	bool                                               IsBeginGenerateItem;                                      
	bool                                               IsCheckRecoverItem;                                       
	unsigned char                                      UnknownData00[0x2];                                       
	TArray<struct FVector>                             AvailablePosi;                                            
	TMap<int, struct FAreaItemsNum>                    ItemsMaxLimit;                                            
	TMap<int, struct FAreaItemsNum>                    ItemsMinLimit;                                            
};



struct FCustomSpotConfig
{
	bool                                               bGenerateAtBeginning;                                     
	bool                                               bGroupNumCtrl;                                            
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                NeedGroupMin;                                             
	int                                                NeedGroupMax;                                             
	bool                                               bSpotPerGroupNumCtrl;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                NeedSpotPerGroupMin;                                      
	int                                                NeedSpotPerGroupMax;                                      
	bool                                               bUseCookedRotator;                                        
	bool                                               bOverrideNearItem;                                        
	bool                                               bNearItem;                                                
	bool                                               bUseDefaultSpotGroupProperties;                           
};



struct FDynamicSpotConfig
{
	struct FString                                     Comment;                                                  
	bool                                               bDefaultEnable;                                           
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     DynamicSpotPath;                                          
	struct FCustomSpotConfig                           CustomSpotConfig;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FSpotGroupProperty>                  SpotGroupProperties;                                      
};



struct FPrimeItemCircleConfig
{
	TArray<struct FSpotGroupProperty>                  PrimeItemCircleProperties;                                
};



struct FKnockOutData
{
	uint64_t                                           AttackerID;                                               
	int                                                Times;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTLog_PickUpItemFlow
{
	int                                                ItemSpesificID;                                           
	int                                                Count;                                                    
	struct FVector                                     Location;                                                 
	int                                                SourceType;                                               
	int                                                AdditionalParam;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     TimeStr;                                                  
	uint64_t                                           InstanceID;                                               
	uint64_t                                           OwnerUID;                                                 
};



struct FTLog_BornLandGrenadeData
{
	int                                                PickupCount;                                              
	int                                                ThrowCount;                                               
	int                                                HitOthersCount;                                           
	int                                                HitedByOthersCount;                                       
};



struct FAIDeliveryInfo
{
	int                                                DeliveryStartTime;                                        
	bool                                               bSuccess;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                DeliveryArrivalTime;                                      
	int                                                EventTypeId;                                              
};



struct FAIDeliveryTlogData
{
	uint64_t                                           UID;                                                      
	TMap<uint32_t, struct FAIDeliveryInfo>             DeliveryMap;                                              
};



struct FGameModeLikeResultData
{
	TArray<uint32_t>                                   Like;                                                     
	uint64_t                                           UID;                                                      
};



struct FGameModeTeammateLableCheckData
{
	uint32_t                                           Mask;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           UID;                                                      
};



struct FUseItemFlow
{
	int                                                ItemSpesificID;                                           
	int                                                UseCount;                                                 
	TMap<int, int>                                     AreaCountMap;                                             
};



struct FUseBuffFlow
{
	int                                                BuffID;                                                   
	int                                                UseCount;                                                 
	TMap<int, int>                                     AreaCountMap;                                             
};



struct FBuildingEnterFlow
{
	int                                                BuildingID;                                               
	int                                                EnterCount;                                               
	TMap<int, int>                                     AreaCountMap;                                             
};



struct FTLog_PropEquipUnequipFlow
{
	int                                                ItemSpesificID;                                           
	ETLog_BackpackEquipmentSlotType                    SlotType;                                                 
	bool                                               bEquip;                                                   
	unsigned char                                      UnknownData00[0x2];                                       
	struct FString                                     TimeStr;                                                  
};



struct FTLog_SpecialStats
{
	float                                              MonsterDamageInNight1;                                    
	float                                              MonsterDamageInNight2;                                    
};



struct FVehicleDriveDisData
{
	uint64_t                                           DriverID;                                                 
	int                                                VehicleType;                                              
	int                                                AvatarID;                                                 
	float                                              DriveDistance;                                            
	float                                              DriveTime;                                                
	float                                              VehicleJumpDistanceMax;                                   
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<uint64_t>                                   PeopleInCar;                                              
};



struct FEquipmentData
{
	int                                                HelmetID;                                                 
	int                                                ArmorID;                                                  
	int                                                BackPackID;                                               
	int                                                MainWeapon1ID;                                            
	TArray<int>                                        MainWeapon1AttachmentsID;                                 
	int                                                MainWeapon2ID;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        MainWeapon2AttachmentsID;                                 
	int                                                ViceWeaponID;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        ViceWeaponAttachmentsID;                                  
	int                                                CloseWeaponID;                                            
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<int>                                        ThrowWeaponsID;                                           
	int8_t                                             IsLuckyClothing;                                          
	unsigned char                                      UnknownData03[0x7];                                       
};



struct FGameModePlayerTaskData
{
	int                                                task_id;                                                  
	int                                                process;                                                  
	struct FString                                     ext_info;                                                 
};



struct FReportCollection
{
	int                                                item_id;                                                  
	int                                                Count;                                                    
};



struct FWeaponDamageRecord
{
	int                                                WeaponId;                                                 
	float                                              TotalDamage;                                              
	int                                                FireCount;                                                
	int                                                HeadShootCount;                                           
	int                                                LimbsShootCount;                                          
	int                                                BodyShootCount;                                           
	int                                                HandShootCount;                                           
	int                                                FootShootCount;                                           
	int                                                UniqueHitCount;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        HitDistanceArray;                                         
	int                                                TotalUseTime;                                             
	int                                                TotalOwnTime;                                             
	int                                                KillCount;                                                
	int                                                KnockNumber;                                              
	TArray<int>                                        Associations;                                             
	int                                                AvatarID;                                                 
	int                                                DIYPlanID;                                                
};



struct FSpecialPickItemState
{
	int                                                item_id;                                                  
	bool                                               bIsCollectionCompleted;                                   
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FDestroyVehicleWheelFlow
{
	int                                                AreaID;                                                   
	int                                                UseCount;                                                 
};



struct FActivityEventReportData
{
	unsigned char                                      EventID;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                Count;                                                    
	struct FVector                                     Location;                                                 
};



struct FTLog_KillInfo
{
	int                                                FakePlayerID;                                             
	int                                                DeadTime;                                                 
	int                                                AILastFightTime;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        PlayerAreas;                                              
	int                                                ArmorID;                                                  
	int                                                HelmetID;                                                 
};



struct FPlayEmoteData
{
	int                                                EmoteIndex;                                               
	int                                                AreaID;                                                   
};



struct FGameModePlayerAliasInfo
{
	int                                                aliasID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     aliasTitle;                                               
	struct FString                                     aliasNation;                                              
	int                                                aliasRank;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     aliasPartnerName;                                         
	int                                                aliasPartnerRelation;                                     
	int                                                aliasRankID;                                              
};



struct FGameModePlayerUpassInfo
{
	int                                                updateTime;                                               
	int                                                upassLevel;                                               
	int                                                upassScore;                                               
	bool                                               isBattleTitle;                                            
	bool                                               isUI;                                                     
	bool                                               battleShow;                                               
	bool                                               isBuy;                                                    
	struct FString                                     iconUrl;                                                  
	bool                                               mainSwitch;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                upassKeepBuy;                                             
	int                                                upassCurValue;                                            
	int                                                pass_type;                                                
	int                                                nUpassPrimePlusCard;                                      
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FTLog_Micphone
{
	float                                              TeammateMicrophoneTime;                                   
	float                                              TeammateSpeakerTime;                                      
	float                                              EnemyMicrophoneTime;                                      
	float                                              EnemySpeakerTime;                                         
	float                                              TeammateInterphoneTime;                                   
	float                                              EnemyInterphoneTime;                                      
};



struct FDamageInfo
{
	uint32_t                                           DamageType;                                               
	bool                                               bIsHeadShot;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Distance;                                                 
	uint32_t                                           Time;                                                     
	uint32_t                                           DamageValue;                                              
	uint32_t                                           AttackerID;                                               
	struct FVector                                     AttackerLoc;                                              
	uint32_t                                           AttackerBulletNumInClip;                                  
	uint32_t                                           AttackerSightType;                                        
	uint32_t                                           AttackerWeaponType;                                       
	uint32_t                                           AttackerWeaponScopeID;                                    
	uint32_t                                           AttackerShotTimes;                                        
	uint64_t                                           AttackerState;                                            
	TArray<unsigned char>                              AttackerStateArray;                                       
	bool                                               bAttackerMoving;                                          
	unsigned char                                      UnknownData01[0x7];                                       
	uint64_t                                           VictimID;                                                 
	uint32_t                                           VictimType;                                               
	uint32_t                                           VictimDeliveryType;                                       
	int                                                CircleIndex;                                              
	struct FVector                                     VictimLoc;                                                
	uint32_t                                           VictimState;                                              
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<unsigned char>                              VictimStateArray;                                         
	bool                                               bVictimInWater;                                           
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                VictimVehicleType;                                        
	float                                              VictimVelocity;                                           
	uint32_t                                           AttackerAreaID;                                           
	uint32_t                                           AlivePlayerNum;                                           
	uint32_t                                           VictimTeamID;                                             
	int                                                FloorType;                                                
	uint32_t                                           AttackerWeaponAvatarID;                                   
	uint32_t                                           AttackerVehicleShapeType;                                 
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FGameBaseInfo
{
	struct FString                                     GameSvrId;                                                
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	struct FString                                     UserName;                                                 
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     PicUrl;                                                   
	struct FString                                     GameAPPIDFromDS;                                          
};



struct FGameModeTeammateBattleResultData
{
	struct FString                                     Name;                                                     
	uint64_t                                           UID;                                                      
	int                                                Kill;                                                     
	int                                                AIKills;                                                  
	struct FString                                     State;                                                    
	float                                              travelDistance;                                           
	float                                              marchDistance;                                            
	float                                              DriveDistance;                                            
	float                                              MonsterCatchupDistance;                                   
	float                                              DamageAmount;                                             
	float                                              RealPlayerDamageAmount;                                   
	float                                              HealAmount;                                               
	int                                                AssistNum;                                                
	TArray<uint64_t>                                   AssistTeammatesList;                                      
	int                                                HeadShotNum;                                              
	int                                                HeadShotNumNoAI;                                          
	float                                              surviveTime;                                              
	float                                              surviveTimeFromPlane;                                     
	int                                                rescueTimes;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<uint64_t>                                   RescueTeammatesList;                                      
	int                                                DestroyVehicles;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FString>                             KillFlow;                                                 
	TArray<struct FString>                             KnockOutFlow;                                             
	float                                              OutsideBlueCircleTime;                                    
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 
	int                                                FirstOpenedAirDropBoxNum;                                 
	float                                              HitEnemyHeadAmount;                                       
	float                                              TotalBeenDamageAmount;                                    
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<struct FPlayEmoteData>                      FPlayEmoteDataArray;                                      
	int                                                FirstOpenedPlayerTombBoxNum;                              
	float                                              InDamageAmount;                                           
	int                                                ProneTimes;                                               
	int                                                CrouchTimes;                                              
	int                                                JumpTimes;                                                
	int                                                KillMonsterNum;                                           
	TMap<int, int>                                     MonsterID2KillNum;                                        
	int                                                LightCandleNum;                                           
	unsigned char                                      UnknownData04[0x4];                                       
	TMap<int, int>                                     ActivityButtonCount;                                      
	float                                              TotalDamageAmountToMonsters;                              
	float                                              TotalDamageAmountFromMonsters;                            
	int                                                MonsterHeadShotKilledTimes;                               
	int                                                BeMonsterDownTimes;                                       
	bool                                               bIsGameTerminator;                                        
	unsigned char                                      UnknownData05[0x3];                                       
	int                                                mainWeaponID;                                             
	float                                              MaxWeaponAccurate;                                        
	float                                              MaxWeaponHeadShotRate;                                    
};



struct FKillAnimalData
{
	unsigned char                                      AnimalType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                KillNum;                                                  
};



struct FGameModePlayerBattleResultData_SuperCold
{
	int                                                MakeFiresNum;                                             
	int                                                DeerBBQNum;                                               
	int                                                ChichenBBQNum;                                            
	int                                                UseKFNum;                                                 
	int                                                UseUAVNum;                                                
	int                                                KFUsingTime;                                              
	int                                                UAVUsingTime;                                             
	int                                                SkateboardUsingCount;                                     
	int                                                SkateboardUsingTime;                                      
	int                                                SkateboardUsingDistance;                                  
	TArray<struct FKillAnimalData>                     AnimalKillFlow;                                           
};



struct FGrenadeDamageRecordItem
{
	int                                                WeaponId;                                                 
	float                                              TotalDamage;                                              
	int                                                FireCount;                                                
	int                                                KillCount;                                                
	int                                                KnockNumber;                                              
	int                                                AvatarID;                                                 
};



struct FGrenadeDamageRecord
{
	int                                                HitCount;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        HitDistanceArray;                                         
	TArray<struct FGrenadeDamageRecordItem>            Grenades;                                                 
};



struct FKniveDamageRecordItem
{
	int                                                WeaponId;                                                 
	float                                              TotalDamage;                                              
	int                                                KillCount;                                                
	int                                                KnockNumber;                                              
	int                                                AvatarID;                                                 
	int                                                TotalUseTime;                                             
	int                                                TotalOwnTime;                                             
};



struct FKniveDamageRecord
{
	int                                                HeadShootCount;                                           
	int                                                LimbsShootCount;                                          
	int                                                BodyShootCount;                                           
	int                                                HandShootCount;                                           
	int                                                FootShootCount;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FKniveDamageRecordItem>              Knives;                                                   
};



struct FSpecialWeaponRecord
{
	int                                                WeaponId;                                                 
	int                                                FireCount;                                                
};



struct FGameModePlayerBattleResultData
{
	struct FString                                     Reason;                                                   
	int                                                RemainingPlayerCount;                                     
	int                                                TotalPlayerCount;                                         
	int                                                RemainingTeamCount;                                       
	int                                                TotalTeamCount;                                           
	float                                              OnlineTime;                                               
	bool                                               IsSolo;                                                   
	bool                                               IsSafeExit;                                               
	unsigned char                                      UnknownData00[0x2];                                       
	uint64_t                                           Killer;                                                   
	uint64_t                                           killer_ig_uid;                                            
	uint64_t                                           KillerAIDisplayUID;                                       
	struct FString                                     KillerName;                                               
	struct FString                                     BeKilledOpenID;                                           
	uint32_t                                           KillerType;                                               
	uint32_t                                           KillerDeliveryType;                                       
	int                                                KillerWeaponID;                                           
	uint32_t                                           DeadCircleIndex;                                          
	int                                                ShootWeaponShotNum;                                       
	int                                                ShootWeaponShotNumPicth;                                  
	int                                                ShootWeaponShotAndHitPlayerNum;                           
	int                                                ShootWeaponShotAndHitPlayerNumNoAI;                       
	int                                                ShootWeaponShotHeadNum;                                   
	int                                                ShootWeaponShotHeadNumNoAI;                               
	int                                                HealTimes;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FString>                             KillFlow;                                                 
	TArray<struct FString>                             KnockOutFlow;                                             
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  
	TMap<int, struct FTLog_BornLandGrenadeData>        TLog_BornLandGrenadeData;                                 
	int                                                PickUpItemTimes;                                          
	unsigned char                                      UnknownData02[0x4];                                       
	TMap<int, int>                                     TLog_BulletCount;                                         
	uint64_t                                           parachute_leader_uid;                                     
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              
	TArray<struct FUseBuffFlow>                        UseBuffFlow;                                              
	TArray<struct FBuildingEnterFlow>                  BuildingEnterFlow;                                        
	TArray<struct FDestroyVehicleWheelFlow>            DestroyVehicleWheelFlow;                                  
	int                                                destroyVehicleNum;                                        
	int                                                is_escape;                                                
	TArray<struct FTLog_KillInfo>                      PlayerKillAIInfo;                                         
	TArray<struct FTLog_KillInfo>                      PlayerNearDeathDuoToAI;                                   
	struct FTLog_KillInfo                              AIKillPlayerInfo;                                         
	TArray<struct FGameModeTeammateBattleResultData>   TeammateList;                                             
	TArray<struct FGameModeLikeResultData>             Like;                                                     
	TArray<uint64_t>                                   BeLiked;                                                  
	uint32_t                                           Switch;                                                   
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<uint32_t>                                   Self;                                                     
	TArray<struct FGameModeTeammateLableCheckData>     LabelCheck;                                               
	struct FVector                                     LandLocation;                                             
	int                                                LandTime;                                                 
	struct FVector                                     ParachuteLocation;                                        
	struct FVector                                     DeadLocation;                                             
	struct FString                                     DeadDamangeType;                                          
	int                                                PveDeadAttacker;                                          
	int                                                PveStageId;                                               
	struct FString                                     DeadTimeStr;                                              
	struct FString                                     logoutime;                                                
	float                                              Pronetime;                                                
	float                                              BeInWaterTime;                                            
	float                                              SwimmingDistance;                                         
	int                                                BeDownTimes;                                              
	int                                                BeSavedTimes;                                             
	int                                                PickUpAirDrops;                                           
	struct FEquipmentData                              EquipmentData;                                            
	int                                                Rank;                                                     
	int                                                TotalScore;                                               
	int                                                ProneTimes;                                               
	int                                                CrouchTimes;                                              
	int                                                JumpTimes;                                                
	int                                                TouchDownAreaID;                                          
	int                                                TouchDownLocTypeID;                                       
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<int>                                        TouchDownAreaList;                                        
	TArray<struct FGameModePlayerTaskData>             CompletedTaskList;                                        
	TArray<struct FReportCollection>                   SpecialCollectionList;                                    
	TArray<struct FWeaponDamageRecord>                 WeaponDamageRecordList;                                   
	struct FGrenadeDamageRecord                        GrenadeDamageRecord;                                      
	struct FKniveDamageRecord                          KniveDamageRecord;                                        
	TArray<int>                                        SecretAreaIDList;                                         
	int                                                KillNumInVehicle;                                         
	float                                              TotalSprintDistance;                                      
	float                                              TotalBeenDamageAmount;                                    
	float                                              DestroyVehicleWheelNum;                                   
	TArray<int>                                        BuildFlow;                                                
	TArray<int>                                        DestroyShelterFlow;                                       
	float                                              ShelterTakeDamage;                                        
	float                                              HitShelterDamage;                                         
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 
	TArray<struct FKnockOutData>                       KnockOutList;                                             
	bool                                               IsKickedFromGame;                                         
	unsigned char                                      UnknownData05[0x3];                                       
	int                                                KillMonsterNum;                                           
	int                                                LightCandleNum;                                           
	int                                                KillMagicWalkAI;                                          
	int                                                SendMagicWalkAI;                                          
	float                                              BattleStateTime;                                          
	bool                                               bIsGameTerminator;                                        
	unsigned char                                      UnknownData06[0x7];                                       
	TMap<int, int>                                     ActivityButtonCount;                                      
	struct FTLog_SpecialStats                          TLog_SpecialStats;                                        
	float                                              TotalDamage;                                              
	int                                                FirstMoveBattles;                                         
	int                                                TotalBattles;                                             
	float                                              DamageAmountFPP;                                          
	int                                                FPPSwitchTimes;                                           
	int                                                MeleeKillTimes;                                           
	float                                              MeleeDamageAmount;                                        
	float                                              RangedDamagedAmount;                                      
	float                                              VehicleDamageAmount;                                      
	int                                                OpenAirDropBoxesNum;                                      
	int                                                FollowState;                                              
	unsigned char                                      UnknownData07[0x4];                                       
	TArray<struct FString>                             DestroyVehicleFlow;                                       
	int                                                UseHelicoperNum;                                          
	float                                              UseHelicoperDistance;                                     
	int                                                RevivalNum;                                               
	int                                                BeRevivedNum;                                             
	int                                                DrivingHelicopterTime;                                    
	int                                                InHelicopterTime;                                         
	int                                                SnowBoardJumpActionCount;                                 
	int                                                EmoteOnTelpherCount;                                      
	TArray<int>                                        FindBlackMonsterIDs;                                      
	int                                                KillSnowManCount;                                         
	unsigned char                                      UnknownData08[0x4];                                       
	TMap<EEventCounterDefine, int>                     EventCounterMap;                                          
	TMap<int, int>                                     GeneralCounterMap;                                        
	struct FTLog_Micphone                              MicphoneTlog;                                             
	int                                                NormalItemNum;                                            
	int                                                SeniorItemNum;                                            
	TArray<struct FSpecialWeaponRecord>                SpecicalWeaponRecordList;                                 
};



struct FCustomAccessoriesData
{
	int                                                WeaponId;                                                 
	int                                                Index;                                                    
	int                                                ItemId;                                                   
};



struct FSpecialPickInfo
{
	int                                                item_id;                                                  
	int                                                cur_count;                                                
	int                                                total_count;                                              
	int                                                period_remain_count;                                      
	int                                                depot_item_count;                                         
};



struct FItemOperationInfo
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           BattleItemOperationType;                                  
	unsigned char                                      Reason;                                                   
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                Count;                                                    
};



struct FGameModePlayerPetInfo
{
	int                                                PetId;                                                    
	int                                                PetLevel;                                                 
	int                                                PetCfgId;                                                 
	int                                                PetColor;                                                 
	TArray<int>                                        PetAvatarList;                                            
};



struct FUAEWindowRepData
{
	struct FTransform                                  Transform;                                                
	struct FString                                     PathToLoad;                                               
	int                                                ID;                                                       
	bool                                               bBroken;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	class APawn*                                       LastInstigatorPawn;                                       
};



struct FWeatherInfo
{
	struct FString                                     WeatherLevelName;                                         
	int                                                WeatherID;                                                
	float                                              WeatherTime;                                              
};



struct FPlayerNetStats
{
	struct FString                                     ClientAddr;                                               
	struct FString                                     LocalAddr;                                                
	float                                              AvgPing;                                                  
	float                                              MaxPing;                                                  
	float                                              HighPingPercent;                                          
	unsigned char                                      UnknownData00[0x14];                                      
};



struct FTPlanExtraOBInfo
{
	int                                                GameCount;                                                
	int                                                Military;                                                 
	int64_t                                            Income;                                                   
	float                                              EscapeRate;                                               
	int                                                KillNum;                                                  
	float                                              KDNum;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPlayerOBInfo
{
	bool                                               IsEnableOB;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	uint64_t                                           UID;                                                      
	int                                                ZoneID;                                                   
	uint32_t                                           PlayerKey;                                                
	int                                                BattleMode;                                               
	bool                                               ValidBattleInfo;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                GameCount;                                                
	int                                                WinCount;                                                 
	int                                                TopTenCount;                                              
	int                                                KillNum;                                                  
	float                                              KDNum;                                                    
	unsigned char                                      UnknownData02[0x4];                                       
	struct FTPlanExtraOBInfo                           TPlanInfo;                                                
};



struct FGameModePlayerRolewearInfo
{
	TArray<struct FGameModePlayerItem>                 RolewearInfo;                                             
	bool                                               IsLocked;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FGameModePlayerConsumableAvatar
{
	int                                                GrenadeAvatarShoulei;                                     
	int                                                GrenadeAvatarSmoke;                                       
	int                                                GrenadeAvatarStun;                                        
	int                                                GrenadeAvatarBurn;                                        
};



struct FGameModePlayerKnapsackSingleInfo
{
	int                                                Parachute;                                                
	int                                                ParachuteGlider;                                          
	int                                                BagSkin;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        BagSkinList;                                              
	int                                                HelmetSkin;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        HelmetSkinList;                                           
	int                                                FlySkin;                                                  
	int                                                GrenadeSkin;                                              
	struct FGameModePlayerConsumableAvatar             ConsumableAvatarList;                                     
	TArray<struct FGameModePlayerItem>                 WeaponList;                                               
	TArray<struct FGameModePlayerItem>                 VehicleSkinList;                                          
	TArray<struct FGameModePlayerItem>                 BackPackPendantList;                                      
	int                                                ShowVehicleSkin;                                          
	int                                                WingmanSkin;                                              
};



struct FGameModePlayerKnapsackExtInfo
{
	struct FGameModePlayerKnapsackSingleInfo           KnapsackExtInfo;                                          
	bool                                               IsLocked;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                WearIndex;                                                
};



struct FGameModePlayeWeaponSchemeSlotInfo
{
	int                                                SlotIndex;                                                
	int                                                ItemId;                                                   
	int                                                Count;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        AttachList;                                               
};



struct FGameModePlayeWeaponSchemeInfo
{
	int                                                SchemeIndex;                                              
	bool                                               IsLocked;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<struct FGameModePlayeWeaponSchemeSlotInfo>  SlotList;                                                 
};



struct FPlayerEffectItemInfo
{
	int                                                Slot;                                                     
	int                                                ItemId;                                                   
	int                                                Count;                                                    
};



struct FGameModePlayerItems
{
	TArray<struct FGameModePlayerItem>                 Items;                                                    
};



struct FVehicleAvatarStyle
{
	int                                                ModelID;                                                  
	int                                                ColorID;                                                  
	int                                                PatternID;                                                
	int                                                ParticleID;                                               
};



struct FVehicleAvatarData
{
	int                                                VehicleSkinID;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        VehicleStyleIDList;                                       
	TArray<struct FVehicleAvatarStyle>                 VehicleAvatarStyle;                                       
};



struct FGameModePlayerEquipmentAvatar
{
	int                                                BagAvatar;                                                
	int                                                HelmetAvatar;                                             
	int                                                ArmorAvatar;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        BagAvatarList;                                            
	TArray<int>                                        HelmetAvatarList;                                         
};



struct FGameModeWeaponAvatarData
{
	int                                                ParentID;                                                 
	int                                                AvatarSpecificID;                                         
};



struct FVehicleAvatarSkinList
{
	TArray<int>                                        SkinList;                                                 
};



struct FGameModePlayerExpressionItem : public FGameModePlayerItem
{

};



struct FGameModeWeaponDIYPlanData
{
	int                                                WeaponAvatarID;                                           
	int                                                PlanID;                                                   
};



struct FSpecialPickItem
{
	int                                                item_id;                                                  
	int                                                cur_count;                                                
	int                                                total_count;                                              
	int                                                period_remain_count;                                      
	int                                                depot_item_count;                                         
};



struct FDailyTaskStoreInfo
{
	int                                                TaskID;                                                   
	int                                                State;                                                    
	int                                                Progress;                                                 
};



struct FLobbyWatchInfo
{
	uint32_t                                           WatchedPlayerKey;                                         
	bool                                               bIsHawkEyeSpectator;                                      
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FGameModePlayerBanChat
{
	int                                                end_time;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Reason;                                                   
};



struct FAchievementPrize
{
	int                                                MedalAvatarID;                                            
	int                                                NotifyTitleAvatarID;                                      
	int                                                ScoreBoardAvatarID;                                       
};



struct FGameModePlayerParams
{
	bool                                               bEnablePlaneBanner;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     PlanetailResLink;                                         
	uint64_t                                           UID;                                                      
	struct FString                                     OpenID;                                                   
	int                                                ZoneID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData01[0x3];                                       
	struct FName                                       PlayerType;                                               
	struct FString                                     PlayerName;                                               
	uint32_t                                           PlayerKey;                                                
	int                                                TeamID;                                                   
	int64_t                                            IdxInTeam;                                                
	uint64_t                                           PreTeamID;                                                
	int                                                PlayerBornPointID;                                        
	bool                                               bTeamLeader;                                              
	bool                                               bIsGM;                                                    
	unsigned char                                      Gender;                                                   
	unsigned char                                      SpeciesType;                                              
	unsigned char                                      SpeciesGrade;                                             
	unsigned char                                      UnknownData02[0x7];                                       
	struct FString                                     PIC_URL;                                                  
	int                                                Level;                                                    
	int                                                Segment_Level;                                            
	int                                                AceImprintShowId;                                         
	int                                                AceImprintBaseId;                                         
	int                                                AvatarBoxId;                                              
	bool                                               bAIPlayer;                                                
	unsigned char                                      UnknownData03[0x3];                                       
	uint64_t                                           MLAIDisplayUID;                                           
	TArray<struct FGameModePlayerItem>                 ItemList;                                                 
	TArray<struct FGameModePlayerItem>                 fireworksInfo;                                            
	TArray<int>                                        equip_plating_list;                                       
	TArray<struct FGameModePlayerRolewearInfo>         AllWear;                                                  
	int                                                RolewearIndex;                                            
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<struct FGameModePlayerExpressionItem>       ExpressionItemList;                                       
	TArray<struct FGameModePlayerTaskData>             TaskDataList;                                             
	TArray<struct FGameModePlayerItem>                 WeaponAvatarList;                                         
	TArray<struct FGameModePlayerItem>                 VehicleAvatarList;                                        
	TArray<struct FVehicleAvatarData>                  VehicleAdvanceAvatarList;                                 
	struct FGameModePlayerEquipmentAvatar              EquipmentAvatar;                                          
	TArray<struct FGameModeWeaponDIYPlanData>          WeaponDIYPlanData;                                        
	int                                                VehicleSkinInReady;                                       
	unsigned char                                      UnknownData05[0x4];                                       
	struct FGameModePlayerAliasInfo                    AliasInfo;                                                
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                
	struct FGameModePlayerPetInfo                      PetInfo;                                                  
	TArray<struct FGameModePlayerPetInfo>              AdditionalPetInfo;                                        
	int                                                UsingAdditionalPetIndex;                                  
	unsigned char                                      UnknownData06[0x4];                                       
	TArray<struct FGameModePlayerKnapsackExtInfo>      KnapsackExtInfoList;                                      
	TArray<struct FGameModePlayeWeaponSchemeInfo>      WeaponSchemeInfoList;                                     
	int                                                CurWeaponSchemeIndex;                                     
	int                                                PveLevel;                                                 
	TArray<int>                                        CharSkillList;                                            
	struct FGameModePlayerBanChat                      banChat;                                                  
	struct FGameModePlayerBanChat                      banTarget;                                                
	TArray<struct FSpecialPickItem>                    SpecialPickItem;                                          
	struct FAchievementPrize                           EquippedAchievementPrize;                                 
	unsigned char                                      UnknownData07[0x4];                                       
	TArray<int>                                        audioChat;                                                
	struct FName                                       CurrentPlayerState;                                       
	struct FName                                       CurrentCharacterState;                                    
	float                                              SyncedTimestamp;                                          
	float                                              DestinyValue;                                             
	float                                              WarmScore;                                                
	float                                              AIAllocMarkValue;                                         
	int                                                LeaderCount;                                              
	unsigned char                                      UnknownData08[0x4];                                       
	uint64_t                                           LastGameLeaderUID;                                        
	TArray<uint64_t>                                   LastGameTeammatesUID;                                     
	uint64_t                                           LastGameBattleID;                                         
	float                                              RatingScore;                                              
	bool                                               bDoPlayerUseAutoFollow;                                   
	unsigned char                                      UnknownData09[0x3];                                       
	float                                              MaxRankingScore;                                          
	uint32_t                                           ObserverFlags;                                            
	uint64_t                                           WatchPlayerKey;                                           
	bool                                               bIsHawkEyeSpectator;                                      
	unsigned char                                      UnknownData10[0x3];                                       
	int                                                HawkEyeSpectateMaxMatchCount;                             
	int                                                HawkEyeSpectateUsedMatchCount;                            
	unsigned char                                      PlatformGender;                                           
	unsigned char                                      UnknownData11[0x3];                                       
	int                                                planeAvatarId;                                            
	int                                                DyeDebugFlag;                                             
	struct FString                                     Nation;                                                   
	int                                                MatchLabel;                                               
	bool                                               OnlyTeammateSeeAvatar;                                    
	unsigned char                                      UnknownData12[0x3];                                       
	int64_t                                            LastGameResultTime;                                       
	int64_t                                            CorpsID;                                                  
	int64_t                                            Campid;                                                   
	bool                                               bUsedSimulation;                                          
	bool                                               bRoomCanKickPlayer;                                       
	bool                                               bCanDownloadInBattle;                                     
	unsigned char                                      UnknownData13[0x5];                                       
	struct FString                                     IpCountryStr;                                             
	bool                                               bRoomOwner;                                               
	unsigned char                                      UnknownData14[0x3];                                       
	int                                                VeteranRecruitIndex;                                      
	int                                                MatchStrategyLabel;                                       
	unsigned char                                      UnknownData15[0x4];                                       
	TArray<struct FDailyTaskStoreInfo>                 DailyTaskStoreList;                                       
	int                                                LandId;                                                   
	int                                                FollowType;                                               
	uint64_t                                           FollowUID;                                                
	uint32_t                                           TaskSyncToDsTs;                                           
	unsigned char                                      UnknownData16[0x4];                                       
	uint64_t                                           LuckmateUID;                                              
	struct FString                                     GameAPPIDFromDS;                                          
	float                                              RealHiddenScore;                                          
	float                                              RealScoreMu;                                              
	float                                              RealScoreSigma;                                           
	unsigned char                                      UnknownData17[0x4];                                       
};



struct FItemSpawnData
{
	struct FName                                       RowName;                                                  
	int                                                KeyID;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ItemValue;                                                
	struct FString                                     ItemCategory;                                             
	int                                                ItemWeight;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ItemPath;                                                 
	int                                                ItemStackCount;                                           
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     ItemTogetherPath;                                         
	int                                                ItemTogetherStackCount;                                   
	int                                                ItemTogetherCountMin;                                     
	int                                                ItemTogetherCountMax;                                     
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FGroupTypeSceneComponents
{
	int                                                GroupType;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<class USceneComponent*>                     SceneComponents;                                          
};



struct FItemSpawnClass
{
	class UClass*                                      ItemClass;                                                
	int                                                ItemCount;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCharacterAnimTypeAsynLoadedPhaseData
{
	struct FString                                     PhaseName;                                                
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FCharacterAsynLoadedTypeAnim
{
	TEnumAsByte<ECharacterAnimTypeAsynLoaded>          AnimTypeAsynLoaded;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     AnimsCatorgeryName;                                       
	struct FCharacterAnimTypeAsynLoadedPhaseData       Anim;                                                     
};



struct FCharCustomAnimData
{
	struct FUAEBlackboardKeySelector                   CustomAnimType;                                           
	unsigned char                                      UnknownData00[0x28];                                      
	class UAnimationAsset*                             CustomAnim;                                               
	struct FString                                     CustomAnimName;                                           
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FCharCustomAnimInstacneData
{
	struct FUAEBlackboardKeySelector                   CustomAnimInstacneType;                                   
	class UClass*                                      CustomAnimInstacneSoftPtr;                                
	struct FString                                     CustomAnimInstanceName;                                   
};



struct FCharParachuteAnimData
{
	TEnumAsByte<ECharacterParachuteAnimType>           ParachuteAnimType;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x28];                                      
	class UAnimationAsset*                             ParachuteAnim;                                            
	unsigned char                                      UnknownData02[0x10];                                      
};



struct FChararacterPoseAnimData
{
	TEnumAsByte<ECharacterPoseType>                    PoseType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x28];                                      
};



struct FCharacterMovementAnimData
{
	TEnumAsByte<ECharacterAnimType>                    AnimType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       AnimTypeName;                                             
	struct FChararacterPoseAnimData                    PoseAnim_Stand;                                           
	struct FChararacterPoseAnimData                    PoseAnim_Crouch;                                          
	struct FChararacterPoseAnimData                    PoseAnim_Prone;                                           
};



struct FChararacterJumpPhaseData
{
	TEnumAsByte<ECharacterJumpPhase>                   JumpPhase;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x28];                                      
};



struct FCharacterJumpAnimData
{
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       JumpTypeName;                                             
	struct FChararacterJumpPhaseData                   JumpPhase_PreJump;                                        
	struct FChararacterJumpPhaseData                   JumpPhase_FallLoop0;                                      
	struct FChararacterJumpPhaseData                   JumpPhase_FallLoop1;                                      
	struct FChararacterJumpPhaseData                   JumpPhase_Land0;                                          
	struct FChararacterJumpPhaseData                   JumpPhase_Land1;                                          
	struct FChararacterJumpPhaseData                   JumpPhase_GrenadeJump_1;                                  
	struct FChararacterJumpPhaseData                   JumpPhase_GrenadeJump_2;                                  
	struct FChararacterJumpPhaseData                   JumpPhase_GrenadeFall_1;                                  
	struct FChararacterJumpPhaseData                   JumpPhase_GrenadeFall_2;                                  
};



struct FCharacterShovelPhaseData
{
	ECharacterShovelPhase                              ShovelPhase;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x28];                                      
};



struct FCharacterShovelAnimData
{
	struct FCharacterShovelPhaseData                   ShovelPhase_Enter;                                        
	struct FCharacterShovelPhaseData                   ShovelPhase_Shoveling;                                    
	struct FCharacterShovelPhaseData                   ShovelPhase_Leave;                                        
	struct FCharacterShovelPhaseData                   ShovelPhase_Crouch_Leave;                                 
};



struct FCharAnimModifyData
{
	int                                                AppliedGameMode;                                          
	TEnumAsByte<ECharaAnimListType>                    ModifyAnimListType;                                       
	TEnumAsByte<ECharacterAnimType>                    AnimType;                                                 
	TEnumAsByte<ECharacterPoseType>                    PoseType;                                                 
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 
	TEnumAsByte<ECharacterJumpPhase>                   JumpPhase;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x28];                                      
};



struct FCharacterVehAnimModifyData
{
	ESVehAnimVehicleType                               VehicleType;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                SeatIdx;                                                  
	TEnumAsByte<ECharacterVehicleAnimType>             VehicleAnimType;                                          
	unsigned char                                      UnknownData01[0x7];                                       
	unsigned char                                      UnknownData02[0x28];                                      
};



struct FGetAnimUtil
{
	TArray<struct FSoftObjectPath>                     PendingList;                                              
	class UUAECharacterAnimListSubSystem*              AnimListSubSystem;                                        
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FAsyncLoadCharAnimParams
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FPlayerAnimData
{
	class UAnimationAsset*                             Animation;                                                
	float                                              Rate;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FVehCharAnimData
{
	TEnumAsByte<ECharacterVehicleAnimType>             VehAnimType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x28];                                      
	unsigned char                                      UnknownData02[0x10];                                      
};



struct FAsyncLoadCharVehAnimParams
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FSeqActorBindingData
{
	struct FString                                     TrackName;                                                
	class AActor*                                      BindingActor;                                             
};



struct FLobbyCharacterGenderWeaponAnimData
{
	TEnumAsByte<ELobbyCharacterAnimType>               GenderType;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     GenderTypeName;                                           
	unsigned char                                      UnknownData01[0x28];                                      
	unsigned char                                      UnknownData02[0x28];                                      
	unsigned char                                      UnknownData03[0x10];                                      
};



struct FLobbyCharacterWeaponAnimData
{
	TEnumAsByte<ELobbyCharacterPosIndex>               PosIndex;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     CharPosName;                                              
	TArray<struct FLobbyCharacterGenderWeaponAnimData> GenderWeaponAnimList;                                     
};



struct FLobbyAsyncLoadCharAnimParams
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FUAESpawnActorParam
{
	int                                                TemplateID;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	class UClass*                                      ActorClass;                                               
	struct FVector                                     SpawnLocation;                                            
	struct FRotator                                    SpawnRotator;                                             
	struct FVector                                     SpawnOffsetLoc;                                           
	ESpawnActorCollisionHandlingMethod                 CollisionHandling;                                        
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              RandomRadius;                                             
	bool                                               RandomRotYaw;                                             
	unsigned char                                      UnknownData02[0x3];                                       
	TArray<class UClass*>                              TraceAvoidClass;                                          
	class AActor*                                      Owner;                                                    
	class APawn*                                       Instigator;                                               
	struct FString                                     MakerName;                                                
	bool                                               IsTracePos;                                               
	bool                                               IsHalfCapsulePull;                                        
	TEnumAsByte<EActorSpawnType>                       SpawnType;                                                
	unsigned char                                      UnknownData03[0x1];                                       
	int                                                ZTraceOffset;                                             
	int                                                MonsterBornType;                                          
	int                                                MonsterFrontBornType;                                     
	EFeatureSetType                                    FeatureSetType;                                           
	unsigned char                                      UnknownData04[0xF];                                       
};



struct FBackupVehicleSpotData
{
	int                                                ID;                                                       
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     SpotGenerateLoc;                                          
	struct FRotator                                    SpotRotator;                                              
	bool                                               bRandomRotation;                                          
	bool                                               bUsed;                                                    
	unsigned char                                      UnknownData01[0x2];                                       
};



struct FVehicleSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       
	int                                                FuelPercentMin;                                           
	int                                                FuelPercentMax;                                           
	bool                                               bActiveByStartVolume;                                     
	TEnumAsByte<EVehicleSpotRandomType>                RandomType;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              TotalCountMultiplierWithPalyerCount;                      
	int                                                TotalCountRangeMin;                                       
	int                                                TotalCountRangeMax;                                       
	float                                              ProbabilityPersent;                                       
	float                                              ProbabilityPersentWithPalyerCount;                        
};



struct FTreasureBoxSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       
	int                                                TotalCountRangeMin;                                       
	int                                                TotalCountRangeMax;                                       
};



struct FVehicleSpotComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 
};



struct FVehicleGenerateSpawnData
{
	int                                                KeyID;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     VehicleType;                                              
	struct FString                                     VehiclePath;                                              
	int                                                VehicleWeight;                                            
	bool                                               SnapFloor;                                                
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FVehicleGenerateSpawnDataArray
{
	struct FString                                     Catetory;                                                 
	TArray<struct FVehicleGenerateSpawnData>           AllGenerateSpawnDatas;                                    
};



struct FVehicleSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     VehiclePath;                                              
	float                                              VehicleLocationX;                                         
	float                                              VehicleLocationY;                                         
	float                                              VehicleLocationZ;                                         
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FVehicleClassStatisticsData : public FTableRowBase
{
	struct FString                                     VehiclePath;                                              
	bool                                               bValidPath;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                AllVehicleCount;                                          
};



struct FVehicleGenerateStatisticsData
{
	TArray<struct FVehicleSpotStatisticsData>          VehicleSpotStatisticsData;                                
	TMap<struct FString, struct FVehicleClassStatisticsData> VehicleClassStatisticsData;                               
};



struct FVehicleGenerateRandomInfo
{
	struct FString                                     VehicleType;                                              
	struct FString                                     VehiclePath;                                              
	float                                              FuelPercent;                                              
	bool                                               SnapFloor;                                                
	bool                                               bActiveByStartVolume;                                     
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FGameModeStateChangedParams
{
	struct FName                                       GameModeState;                                            
	bool                                               bAliveOnNonePlayer;                                       
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FTLog_ActivityEventType
{
	unsigned char                                      ActivityEventID;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     ActivityEventLoc;                                         
};



struct FPlayerVehAnimList
{
	unsigned char                                      UnknownData00[0x4];                                       
	int                                                FrameCounter;                                             
	class UAnimationAsset*                             IdleAnim;                                                 
	class UAnimationAsset*                             IdleGunAnimLayerBlend;                                    
	class UAnimationAsset*                             IdleMotorbikeAnim;                                        
	class UAnimationAsset*                             VacateMotorbikeAnim;                                      
	class UAnimationAsset*                             IdleMotorBikeDirverLeaningAnim;                           
	class UAnimationAsset*                             IdleMotorBikeDirverLeaningLowSpeedAnim;                   
	class UAnimationAsset*                             MotorBikeDirverLeaningGroundPitchAnim;                    
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseDriverOffAnim;                  
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithGunDriverOffAnim;           
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithDualGunDriverOffAnim;       
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithMeleeDriverOffAnim;         
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithThrowObjDriverOffAnim;      
	class UAnimationAsset*                             PassengerDriverOffAimAim;                                 
	class UAnimationAsset*                             PassengerMotorBikeIdleLeaningAnim;                        
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseDriverOnAnim;                   
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithGunDriverOnAnim;            
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithMeleeDriverOnAnim;          
	class UAnimationAsset*                             PassengerMotorBikeIdleBaseWithThrowObjDriverOnAnim;       
	class UAnimationAsset*                             LeanOutAnim;                                              
	class UAnimationAsset*                             LeanInAnim;                                               
	class UAnimationAsset*                             AimAnim;                                                  
	class UAnimationAsset*                             WeaponIdleAddition;                                       
	class UAnimationAsset*                             WeaponAimAddition;                                        
	class UAnimationAsset*                             WeaponDualAimAddition;                                    
	class UAnimationAsset*                             WeaponReloadAddition;                                     
	class UAnimationAsset*                             SurfBoard_IdleAnim;                                       
	class UAnimationAsset*                             SurfBoard_MoveAnim;                                       
	class UAnimationAsset*                             SurfBoard_JumpAnim;                                       
	class UAnimationAsset*                             SurfBoard_LandAnim;                                       
	class UAnimationAsset*                             SurfBoard_JumpLeftTurnAnim;                               
	class UAnimationAsset*                             SurfBoard_JumpRightTurnAnim;                              
	class UAnimationAsset*                             Ski_JumpStationary;                                       
	class UAnimationAsset*                             Ski_DownTurnLR;                                           
	class UAnimationAsset*                             Ski_DownTurnRL;                                           
	class UAnimationAsset*                             Ski_DownTurnFD;                                           
	class UAnimationAsset*                             Ski_Falling;                                              
	class UAnimationAsset*                             Ski_DownFallLandingAdditive;                              
	class UAnimationAsset*                             Ski_DownFallLandingHard;                                  
	class UAnimationAsset*                             VehicleWeaponIdleAnim;                                    
	class UAnimationAsset*                             VehicleWeaponEquipAnim;                                   
	class UAnimationAsset*                             VehicleWeaponUnEquipAnim;                                 
	class UAnimationAsset*                             VehicleWeaponReloadAnim;                                  
	class UAnimationAsset*                             VehicleWeaponAimOffsetAnim;                               
	class UAnimationAsset*                             MotorgliderSteerAnim;                                     
	class UAnimationAsset*                             MotorgliderIdleAnim;                                      
	class UAnimationAsset*                             VehicleDriverForwardAnim;                                 
	class UAnimationAsset*                             DyingInVehicleIdleAnim;                                   
	class UAnimationAsset*                             HoldGrenadeAimModify;                                     
};



struct FGameModeAIPlayerParams : public FGameModePlayerParams
{
	int8_t                                             AIType;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           AILevel;                                                  
	bool                                               bMLAIPlayer;                                              
	bool                                               bMLDelivery;                                              
	unsigned char                                      UnknownData01[0x2];                                       
	uint32_t                                           MLBotType;                                                
	bool                                               bBornIslandAI;                                            
	bool                                               bAITakeOver;                                              
	unsigned char                                      UnknownData02[0x2];                                       
};



struct FPlayerPickUpInfo
{
	uint64_t                                           PlayerUID;                                                
	int                                                ItemSpesificID;                                           
	int                                                Count;                                                    
	TArray<int>                                        DataList;                                                 
};



struct FCircleDataMining
{
	struct FVector                                     WhiteCircleCenter;                                        
	bool                                               bDestinyCircle;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                LeftPlayerNum;                                            
};



struct FWatchFlow
{
	uint64_t                                           UID;                                                      
	uint32_t                                           sec;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGameWatchReport
{
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           player_uid;                                               
	float                                              total_time;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FWatchFlow>                          watch_flow;                                               
};



struct FGameDataMining
{
	struct FString                                     BattleID;                                                 
	struct FVector                                     PlaneStartPoint;                                          
	struct FVector                                     PlaneEndPoint;                                            
	TArray<struct FCircleDataMining>                   CircleDataMining;                                         
	TArray<struct FGameWatchReport>                    WatchReport;                                              
};



struct FGameModePlayerShowUpassInfo
{
	struct FString                                     PlayerName;                                               
	int                                                updateTime;                                               
	int                                                upassLevel;                                               
	int                                                upassScore;                                               
	int                                                planeAvatarId;                                            
	bool                                               isBattleTitle;                                            
	bool                                               isUI;                                                     
	bool                                               battleShow;                                               
	bool                                               isBuy;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     iconUrl;                                                  
	struct FString                                     Nation;                                                   
	struct FGameModePlayerAliasInfo                    AliasInfo;                                                
	int                                                upassKeepBuy;                                             
	int                                                upassCurValue;                                            
	int                                                pass_type;                                                
	int                                                nUpassPrimePlusCard;                                      
	struct FString                                     PlayerUID;                                                
};



struct FBuildMaterialData
{
	int                                                MatID;                                                    
	int                                                MatCount;                                                 
};



struct FMonsterTreasureBoxData
{
	float                                              BoxStartTime;                                             
	struct FVector                                     BoxLocation;                                              
	uint64_t                                           BoxStartPlayer;                                           
};



struct FPlayerBaseInfoInOB
{
	struct FVector_NetQuantize                         Location;                                                 
	int                                                Health;                                                   
	int                                                HealthMax;                                                
	int                                                LiveState;                                                
	int                                                KillNum;                                                  
	int                                                KillNumBeforeDie;                                         
	uint32_t                                           PlayerKey;                                                
};



struct FPlayerStaticInfoInOB
{
	struct FString                                     PlayerName;                                               
	unsigned char                                      UnknownData00[0x10];                                      
	struct FString                                     PlayerOpenID;                                             
	struct FString                                     PicUrl;                                                   
	int                                                TeamID;                                                   
	unsigned char                                      IndexInMap;                                               
	unsigned char                                      UnknownData01[0x3];                                       
	uint64_t                                           UID;                                                      
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FAllStarReportData
{
	bool                                               bShowReportFlag;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BeReportedNum;                                            
};



struct FTaskAwardItemInfo
{
	int                                                ItemId;                                                   
	int                                                ItemNum;                                                  
};



struct FDailyTaskAwardInfo
{
	int                                                TaskID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FTaskAwardItemInfo>                  AwardList;                                                
};



struct FDailyTaskReportInfo
{
	uint64_t                                           UID;                                                      
	uint32_t                                           PlayerKey;                                                
	uint32_t                                           TaskSyncToDsTs;                                           
	TArray<struct FDailyTaskStoreInfo>                 TaskInfo;                                                 
	TArray<struct FDailyTaskAwardInfo>                 RewardInfo;                                               
};



struct FPlayerInfoInOB : public FPlayerBaseInfoInOB
{
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           UID;                                                      
	struct FString                                     PlayerName;                                               
	struct FString                                     PlayerOpenID;                                             
	struct FString                                     PicUrl;                                                   
	bool                                               ShowPicUrl;                                               
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                TeamID;                                                   
	struct FString                                     TeamName;                                                 
	TWeakObjectPtr<class APawn>                        Character;                                                
	bool                                               IsFiring;                                                 
	bool                                               bHasDied;                                                 
	unsigned char                                      UnknownData02[0x1E];                                      
};



struct FParachuteData
{
	uint64_t                                           UID;                                                      
	float                                              SlideDuration;                                            
	unsigned char                                      FollowState;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     ClientLandLocation;                                       
	struct FVector                                     ClientLocation;                                           
	struct FVector                                     ServerLandLocation;                                       
	float                                              SlideStartTime;                                           
	float                                              SlideEndTime;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     InputCount;                                               
	struct FString                                     PositionCheck;                                            
	struct FString                                     ClientPositionDiff;                                       
	float                                              LastCorrectionTime;                                       
	float                                              LastCorrectionHeight;                                     
	struct FVector                                     LastCorrectionLocation;                                   
	struct FVector                                     LastCorrectedLocation;                                    
};



struct FPlayBaseInfo
{
	uint64_t                                           RoleID;                                                   
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ZoneID;                                                   
};



struct FIntPosition2D
{
	int                                                X;                                                        
	int                                                Y;                                                        
};



struct FPlayerPositionFlow
{
	struct FPlayBaseInfo                               PlayerBaseInfo;                                           
	int                                                FirstPointTimestamp;                                      
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FIntPosition2D>                      PointList;                                                
};



struct FVehicleMovePoint
{
	uint32_t                                           UniqueId;                                                 
	int8_t                                             Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                X;                                                        
	int                                                Y;                                                        
	int                                                Z;                                                        
	int                                                Speed;                                                    
	int8_t                                             VehicleN2oUse;                                            
	int8_t                                             VehicleCarPetUse;                                         
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                VehicleMoveDistance;                                      
	int                                                TimeStamp;                                                
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData02[0x3];                                       
};



struct FVehicleMoveFlow
{
	uint64_t                                           RoleID;                                                   
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ZoneID;                                                   
	TArray<struct FVehicleMovePoint>                   PointList;                                                
};



struct FOBSingleWeaponRecord
{
	int                                                OBSingleWeaponRecord_WeaponID;                            
	float                                              TotalDamage;                                              
	int                                                KillCount;                                                
	int                                                KnockDownCount;                                           
};



struct FOBPlayerWeaponRecord
{
	uint64_t                                           OBPlayerWeaponRecord_UID;                                 
	TArray<struct FOBSingleWeaponRecord>               WeaponReport;                                             
};



struct FAIPlayerInfoInOB
{
	struct FString                                     PlayerKey;                                                
	int                                                TeamID;                                                   
	TWeakObjectPtr<class APawn>                        Character;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FFriendObserver
{
	struct FString                                     PlayerName;                                               
	unsigned char                                      Gender;                                                   
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FDIYParamData
{
	int                                                Direction;                                                
	int                                                ColorID;                                                  
	float                                              Opacity;                                                  
	float                                              Rotation;                                                 
	float                                              ScaleX;                                                   
	float                                              ScaleY;                                                   
	float                                              OffSetX;                                                  
	float                                              OffSetY;                                                  
	float                                              UClipX;                                                   
	float                                              UClipY;                                                   
	float                                              VClipX;                                                   
	float                                              VClipY;                                                   
};



struct FDIYOneTexData
{
	int                                                TexPathID;                                                
	struct FDIYParamData                               DIYParam;                                                 
};



struct FDIYMergedTexData
{
	TArray<struct FDIYOneTexData>                      TextureList;                                              
	int                                                TexPathID;                                                
	struct FDIYParamData                               DIYParam;                                                 
	int                                                SlotID;                                                   
};



struct FResponResult
{
	bool                                               bResponed;                                                
};



struct FWeaponDIYData : public FResponResult
{
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                WeaponId;                                                 
	int                                                PlanID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FDIYMergedTexData>                   DIYData;                                                  
	TArray<int>                                        MatParam;                                                 
	TArray<int>                                        MirroParam;                                               
	TArray<int>                                        SlotMatParam;                                             
};



struct FVehicleMoveDrag
{
	int                                                Minute;                                                   
	unsigned char                                      VehicleType;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<unsigned char>                              Reasons;                                                  
	TArray<int>                                        Counters;                                                 
};



struct FVehicleMoveDragData
{
	TArray<struct FVehicleMoveDrag>                    MoveDrag;                                                 
	TArray<struct FVehicleMoveDrag>                    SimulatedMoveDrag;                                        
};



struct FAppInstallData
{
	int64_t                                            FirstInstallTime;                                         
	struct FGuid                                       Guid;                                                     
	struct FString                                     GuidStr;                                                  
};



struct FHisarData
{
	struct FAppInstallData                             AppInstallData;                                           
	struct FString                                     DeviceID;                                                 
};



struct FHitFireBtnSample
{
	float                                              LocX;                                                     
	float                                              LocY;                                                     
	uint64_t                                           StartFrame;                                               
	uint64_t                                           EndFrame;                                                 
};



struct FHitFireBtnSampleCluster
{
	float                                              StartTime;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FHitFireBtnSample>                   HitFireBtnSampleArray;                                    
};



struct FHitFireBtnFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           BattleID;                                                 
	uint64_t                                           UID;                                                      
	int                                                MapID;                                                    
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     ClientVersion;                                            
	int                                                MatchMode;                                                
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<struct FHitFireBtnSampleCluster>            HitFireBtnSampleClusterArray;                             
};



struct FAntiDataFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           BattleID;                                                 
	uint64_t                                           UID;                                                      
	struct FString                                     ClientVersion;                                            
	int                                                MatchMode;                                                
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     FlowDataStr;                                              
	struct FString                                     FlowDataStr2;                                             
};



struct FMemBTResultData
{
	struct FString                                     Name;                                                     
	uint32_t                                           Kill;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     State;                                                    
	float                                              travelDistance;                                           
	float                                              DamageAmount;                                             
	float                                              surviveTime;                                              
	uint32_t                                           AssistNum;                                                
	uint32_t                                           HeadShotNum;                                              
	uint32_t                                           rescueTimes;                                              
	float                                              HealAmount;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           UID;                                                      
	int8_t                                             ShouldShowAddFriendBtn;                                   
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FResultRatingData
{
	int                                                rank_rating;                                              
	int                                                kill_rating;                                              
	int                                                win_rating;                                               
	int                                                change_rank_rating;                                       
	int                                                change_kill_rating;                                       
	int                                                change_win_rating;                                        
};



struct FBattleResultData
{
	struct FString                                     Reason;                                                   
	uint32_t                                           RemainingPlayerCount;                                     
	uint32_t                                           TotalPlayerCount;                                         
	uint32_t                                           RemainingTeamCount;                                       
	uint32_t                                           TotalTeamCount;                                           
	bool                                               IsSolo;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           ShootWeaponShotNum;                                       
	uint32_t                                           ShootWeaponShotAndHitPlayerNum;                           
	uint32_t                                           HealTimes;                                                
	float                                              marchDistance;                                            
	float                                              DriveDistance;                                            
	uint32_t                                           destroyVehicleNum;                                        
	uint32_t                                           add_exp;                                                  
	uint32_t                                           add_gold;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           battle_id;                                                
	uint32_t                                           max_game_num;                                             
	uint32_t                                           person_rank;                                              
	uint32_t                                           team_rank;                                                
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FMemBTResultData>                    BP_ARRAY_TeammateList;                                    
	struct FResultRatingData                           BP_STRUCT_BTRating;                                       
};



struct FDIYVehicleParamData
{
	int                                                TexPathID;                                                
	struct FVector                                     Location;                                                 
	struct FVector                                     Normal;                                                   
	float                                              Rotation;                                                 
	float                                              Scale;                                                    
	bool                                               Mirror;                                                   
	bool                                               bEnableDepthCompare;                                      
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FGridGeneratorSpawnData
{
	unsigned char                                      UnknownData00[0x8];                                       
	int                                                UniqueId;                                                 
	ERegionSizeIndex                                   RegionSize;                                               
	bool                                               bBeforeFighting;                                          
	bool                                               bDontTrigger;                                             
	unsigned char                                      UnknownData01[0x1];                                       
};



struct FAIstrategyPlayerInfo
{
	TArray<uint64_t>                                   PlayerInfo;                                               
};



struct FAIstrategyPlayerTeam
{
	TArray<struct FAIstrategyPlayerInfo>               teamMember;                                               
	TArray<struct FString>                             countries;                                                
};



struct FAIStrategyInfo
{
	int64_t                                            TS;                                                       
	int8_t                                             circle;                                                   
	unsigned char                                      UnknownData00[0x7];                                       
	uint64_t                                           BattleID;                                                 
	int                                                MapID;                                                    
	int                                                rai;                                                      
	int                                                fai;                                                      
	int                                                Zone;                                                     
	TArray<struct FAIstrategyPlayerTeam>               Teams;                                                    
};



struct FAvatarBackpack
{
	TArray<int>                                        WeaponAvatarList;                                         
	TArray<int>                                        VehicleAvatarList;                                        
};



struct FPlayerAvatarData : public FResponResult
{
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FAvatarBackpack>                     AvatarBackpackData;                                       
};



struct FPlayerInfoData : public FResponResult
{
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     PlayerType;                                               
	struct FString                                     PlayerName;                                               
	uint32_t                                           PlayerKey;                                                
	bool                                               bIsGM;                                                    
	unsigned char                                      PlayerGender;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                TeamID;                                                   
	bool                                               UsePlayerInfoTeamID;                                      
	unsigned char                                      UnknownData02[0x3];                                       
	int64_t                                            Campid;                                                   
	int                                                PlayerBornPointID;                                        
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<struct FGameModePlayerItem>                 ItemList;                                                 
	TArray<struct FGameModePlayerExpressionItem>       ExpressionItemList;                                       
	struct FGameModePlayerEquipmentAvatar              EquipmentAvatar;                                          
	TArray<struct FGameModePlayerRolewearInfo>         AllWear;                                                  
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                
	int                                                planeAvatarId;                                            
	int                                                RolewearIndex;                                            
};



struct FGenerateOneMonsterFlow
{
	int                                                MonsterID;                                                
	int                                                GenerateNum;                                              
	int                                                DeadNum;                                                  
	int                                                KilledByPlayerNum;                                        
};



struct FGenerateMonsterPhaseFlow
{
	int                                                WeatherID;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FGenerateOneMonsterFlow>             GenerateOneMonsterFlowList;                               
};



struct FGenerateMonsterFlow
{
	struct FString                                     BattleID;                                                 
	int                                                BattleMode;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FGenerateMonsterPhaseFlow>           GenerateMonsterPhaseList;                                 
};



struct FPlayerID
{
	struct FName                                       PlayerType;                                               
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCharacterStateChangedParams
{
	struct FPlayerID                                   PlayerID;                                                 
	struct FName                                       CharacterState;                                           
};



struct FDSPlayerTeamParams
{
	struct FPlayerID                                   PlayerID;                                                 
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPlayerStateChangedParams
{
	struct FPlayerID                                   PlayerID;                                                 
	struct FName                                       PlayerState;                                              
	struct FString                                     Reason;                                                   
	struct FString                                     BanMsg;                                                   
};



struct FItemTableStruct
{
	int                                                ItemId;                                                   
	int                                                itemType;                                                 
	int                                                ItemSubType;                                              
	int                                                BPID;                                                     
	int                                                Durability;                                               
	int                                                AIFullVaule;                                              
	bool                                               Equippable;                                               
	bool                                               Consumable;                                               
	bool                                               AutoEquipandDrop;                                         
	unsigned char                                      UnknownData00[0x1];                                       
	int                                                MaxCount;                                                 
	int                                                WeightforOrder;                                           
	int                                                UnitWeight_f;                                             
	int                                                RedEmotionFightId;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     PickupSound;                                              
	struct FString                                     DropSound;                                                
	struct FString                                     EquipSound;                                               
	struct FString                                     UnEquipSound;                                             
	struct FString                                     PickUpBank;                                               
	struct FString                                     DropBank;                                                 
	struct FString                                     EquipBank;                                                
	struct FString                                     UnEquipBank;                                              
};



struct FPickUpCountSettingTableStruct
{
	int                                                ItemId;                                                   
	int                                                PickUpMaxCount;                                           
};



struct FBackpackMappingTableStruct
{
	int                                                SkinID;                                                   
	int                                                ItemIDLv1;                                                
	int                                                ItemIDLv2;                                                
	int                                                ItemIDLv3;                                                
	int                                                SkinItemIDLv1;                                            
	int                                                SkinItemIDLv2;                                            
	int                                                SkinItemIDLv3;                                            
	int                                                LobbyShowItemID;                                          
};



struct FWeaponAttachmentsTableStruct
{
	int                                                KeyID;                                                    
	int                                                Muzzle1ID;                                                
	int                                                Muzzle2ID;                                                
	int                                                Muzzle3ID;                                                
	int                                                Muzzle4ID;                                                
	int                                                Muzzle5ID;                                                
	int                                                Muzzle6ID;                                                
	int                                                Upper1ID;                                                 
	int                                                Upper2ID;                                                 
	int                                                Upper3ID;                                                 
	int                                                Upper4ID;                                                 
	int                                                Upper5ID;                                                 
	int                                                Upper6ID;                                                 
	int                                                Upper7ID;                                                 
	int                                                Stock1ID;                                                 
	int                                                Stock2ID;                                                 
	int                                                Magazine1ID;                                              
	int                                                Magazine2ID;                                              
	int                                                Magazine3ID;                                              
	int                                                Magazine4ID;                                              
	int                                                Magazine5ID;                                              
	int                                                Magazine6ID;                                              
	int                                                Lower1ID;                                                 
	int                                                Lower2ID;                                                 
	int                                                Lower3ID;                                                 
	int                                                Lower4ID;                                                 
	int                                                Lower5ID;                                                 
	int                                                BulletID;                                                 
	int                                                ProposeBulletNum;                                         
	int                                                AIMinAttackDist;                                          
	int                                                AIMaxAttackDist;                                          
};



struct FGameModePatchTableData
{
	TMap<int, struct FItemTableStruct>                 Item;                                                     
	TMap<int, struct FPickUpCountSettingTableStruct>   PickUpCountSetting;                                       
	TMap<int, struct FBackpackMappingTableStruct>      BackpackMapping;                                          
	TMap<int, struct FWeaponAttachmentsTableStruct>    WeaponAttachments;                                        
};



struct FDSNetSaturateResult
{
	float                                              SaturateTime;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           SaturateFrames;                                           
};



struct FGameModeIslandParams
{
	int                                                IslandDefaultLifeTime;                                    
	int                                                IslandSpecialLifeTime;                                    
	int                                                IslandMinimumPlayerNum;                                   
	int                                                IslandMinimumAliveTime;                                   
	int                                                IslandInactivePlayerKickoutTime;                          
};



struct FDynamicBattleRankInfo
{
	int                                                BattleRank;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           PlayerUID;                                                
};



struct FInfectionPlayerDeadTlogData
{
	int                                                DeadPawnSubType;                                          
	float                                              DeadPosiX;                                                
	float                                              DeadPosiY;                                                
	float                                              DeadPosiZ;                                                
	int                                                KillPawnSubType;                                          
	float                                              KillPosiX;                                                
	float                                              KillPosiY;                                                
	float                                              KillPosiZ;                                                
};



struct FInfectionSpringUseData
{
	int                                                SpringTag;                                                
	int                                                NormalPlayerUseTimes;                                     
	int                                                AvengerPlayerUseTimes;                                    
	int                                                MotherZombieUseTimes;                                     
	int                                                NormalZombieUseTimes;                                     
	int                                                InvisibleZombieUseTimes;                                  
	int                                                ThrowerZombieUseTimes;                                    
};



struct FInfectionRoundTlogGuidData
{
	int                                                GuidTriggerCount;                                         
	int                                                GuidHandCloseCount;                                       
	int                                                GuidArriveCloseCount;                                     
};



struct FInfectionRoundPlayerTlogData
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	struct FString                                     Country;                                                  
	uint64_t                                           CharacterID;                                              
	int64_t                                            ClientStartTime;                                          
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	int8_t                                             RoleTypeEnd;                                              
	unsigned char                                      UnknownData02[0x2];                                       
	uint32_t                                           RoleTypeSwitchTime;                                       
	float                                              PlayerJumpHeightMax;                                      
	float                                              PlayerJumpSpeedMax;                                       
	uint32_t                                           PlayerMoveDistance;                                       
	uint32_t                                           PlayerMoveTime;                                           
	TArray<float>                                      PlayerMoveSpeedArray;                                     
	uint32_t                                           PlayerKilled;                                             
	uint32_t                                           PlayerHurtCount;                                          
	uint32_t                                           PlayerDamageCount;                                        
	uint32_t                                           KillingCount;                                             
	uint32_t                                           AssistCount;                                              
	uint32_t                                           GunKillingTimes;                                          
	uint32_t                                           HeadshotCounts;                                           
	float                                              DamageAmount;                                             
	uint32_t                                           GunHitTimes;                                              
	uint32_t                                           GunShotTimes;                                             
	uint32_t                                           MovingDistance;                                           
	uint32_t                                           HealAmount;                                               
	uint32_t                                           CureCount;                                                
	uint32_t                                           CareRoundCheckUp;                                         
	uint32_t                                           KillZombiesCount;                                         
	uint32_t                                           KillHumanCount;                                           
	float                                              Damage4Avenger;                                           
	int                                                Headshot4Avenger;                                         
};



struct FInfectionRoundTlogData
{
	int                                                Round;                                                    
	int                                                WinCamp;                                                  
	float                                              PlayTime;                                                 
	bool                                               bSpawnRevenger;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              RevengerExistTime;                                        
	int                                                RevengerDoSkillCount;                                     
	int                                                ZombieReviveCount;                                        
	int                                                NormalZombieDoSkillCount;                                 
	int                                                InvisibleZombieDoSkillCount;                              
	int                                                ThrowerZombieDoSkillCount;                                
	int                                                MotherZombieDoSkillCount;                                 
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FInfectionPlayerDeadTlogData>        DeadList;                                                 
	int                                                NormalZombieChooseTimes;                                  
	int                                                InvisibleZombieChooseTimes;                               
	TArray<int>                                        ZombieLevelList;                                          
	TArray<int>                                        EnhancerUserList;                                         
	TArray<struct FInfectionSpringUseData>             SpringUseList;                                            
	TMap<int, struct FInfectionRoundTlogGuidData>      GuidCount;                                                
	int                                                PlayerNumber;                                             
	float                                              ZombieAbsorbingTime;                                      
	float                                              RevengerAbsorbingTime;                                    
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FInfectionRoundPlayerTlogData>       playerList;                                               
};



struct FInfectionZombieLevelData
{
	int                                                Level;                                                    
	int                                                Num;                                                      
};



struct FInfectionPlayerBattleResultData
{
	uint64_t                                           UID;                                                      
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     PlayerName;                                               
	int                                                PlayerScore;                                              
	int                                                Rank;                                                     
	int                                                Kills;                                                    
	int                                                Infections;                                               
	int                                                DamageAmount;                                             
	int                                                RoundNum;                                                 
	float                                              GamePlayTime;                                             
	int                                                BeMatrixMonsterTimes;                                     
	int                                                BeRevengerPlayerTimes;                                    
	int                                                RevengerPlayerKillWinTimes;                               
	int                                                BeMonsterWinTimes;                                        
	int                                                BePersonWinTimes;                                         
	int                                                UseSpringJumpTimes;                                       
	int                                                UseEnhancerTimes;                                         
	int                                                DamageToMonster;                                          
	int                                                DamageToRevengerPlayer;                                   
	int                                                ChooseZombieFirstTimes;                                   
	int                                                ChooseZombieSecondTimes;                                  
	float                                              TotalDamage;                                              
	float                                              TotalSprintDistance;                                      
	int                                                OpenAirDropBoxesNum;                                      
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FString>                             KillFlow;                                                 
};



struct FInfectionBattleResultData
{
	TArray<struct FInfectionPlayerBattleResultData>    playerList;                                               
	int                                                PlayTime;                                                 
	int                                                KillZombieNum;                                            
	int                                                InfectedHumanNum;                                         
	int                                                BecomeHeroNum;                                            
	uint64_t                                           EscapePlayerUid;                                          
};



struct FVehiclePlayerBattleResultData
{
	uint64_t                                           UID;                                                      
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     PlayerName;                                               
	int                                                TeamID;                                                   
	int                                                Campid;                                                   
	int                                                Score;                                                    
	int                                                Distance;                                                 
	int                                                KillNum;                                                  
	int                                                AssistKillNum;                                            
	int                                                DriverKillNum;                                            
	int                                                ShooterKillNum;                                           
	int                                                BeKillNum;                                                
	int                                                TeamKillNum;                                              
	int                                                GetItemNum;                                               
	int                                                OpenTreasureNum;                                          
	int                                                ShootTreasureNum;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              
	int                                                StrikeKillVehicleNum;                                     
	int                                                ItemKillVehicleNum;                                       
	int                                                GunKillVehicleNum;                                        
	float                                              CauseDamage;                                              
	int                                                GemStoneCount;                                            
	bool                                               HasFinished;                                              
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              FinishedTime;                                             
	bool                                               IsEscape;                                                 
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                VehicleID;                                                
	int                                                VehicleShapeType;                                         
	float                                              ExitPlayerPlayTime;                                       
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FVehicleCampKills
{
	int                                                Campid;                                                   
	int                                                Kills;                                                    
};



struct FVehicleBattleVehicleStatiscs
{
	int                                                VehicleID;                                                
	int                                                ChooseTimes;                                              
	int                                                DeadTimes;                                                
	int                                                Kills;                                                    
	float                                              VehicleWeaponDamage;                                      
	float                                              HitDamage;                                                
};



struct FVehicleBattleWeaponStatiscs
{
	int                                                WeaponId;                                                 
	int                                                ChooseTimes;                                              
	int                                                TotalDamage;                                              
	int                                                Kills;                                                    
};



struct FVehicleBattleResultData
{
	TArray<struct FVehiclePlayerBattleResultData>      playerList;                                               
	TArray<struct FVehicleCampKills>                   VehicleCampKills;                                         
	int                                                WinCampID;                                                
	float                                              GamePlayTime;                                             
	int                                                MatchPointNum;                                            
	int                                                WinCampTreasureScore;                                     
	int                                                FailCampTreasureScore;                                    
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FVehicleBattleVehicleStatiscs>       VehicleStaticsList;                                       
	TArray<struct FVehicleBattleWeaponStatiscs>        WeaponStatiscsList;                                       
	int                                                VehicleStuckResetTimes;                                   
	int                                                HealthPropItemTimes;                                      
	int                                                NormalPropItemTimes;                                      
	int                                                SuperPropItemTimes;                                       
};



struct FVehicleReportList
{
	TArray<struct FVehicleReportEntry>                 VehicleReports;                                           
};



struct FAIProxyNetInfo
{
	uint32_t                                           MaxBufferUsedSize;                                        
	float                                              MaxSendSpeed;                                             
};



struct FWeaponAntiData
{
	uint16_t                                           MuzzleFloorHeight;                                        
	int16_t                                            MuzzleActorHeadHeight;                                    
	uint16_t                                           ImplactPointAndActorDis;                                  
	uint16_t                                           ImplactPointAndBulletDis;                                 
	uint16_t                                           ImplactPoinPosChange;                                     
	uint16_t                                           BulletAndGunAngle;                                        
	uint16_t                                           NetDelay;                                                 
	unsigned char                                      UnknownData00[0x2];                                       
	uint32_t                                           ShooterPosDis;                                            
	uint32_t                                           VictmPosDis;                                              
};



struct FAntiCheatDetailData
{
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	TArray<struct FWeaponAntiData>                     WeaponAntiDataList;                                       
};



struct FAntiMoveCheatFlow
{
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	int                                                CheatType1;                                               
	int                                                CheatType2;                                               
	int                                                CheatType3;                                               
	float                                              Ping;                                                     
};



struct FAntiCheatMovementRawData
{
	int16_t                                            MinVelocity;                                              
	int16_t                                            MaxVelocity;                                              
	int16_t                                            AvgVelocity;                                              
	unsigned char                                      UnknownData00[0x2];                                       
	uint64_t                                           PlayerStatus;                                             
	int16_t                                            PlayerPing;                                               
	unsigned char                                      SpecialFlags;                                             
	unsigned char                                      UnknownData01[0x5];                                       
};



struct FZNQBattleResultData
{
	int                                                DuckGameCount;                                            
	int                                                BeeGameCount;                                             
	int                                                BlindBoxCount;                                            
	int                                                DuckShootingRangeCount;                                   
	int                                                ActivedDuckGameNum;                                       
	int                                                ActivedBeeGameNum;                                        
	int                                                ActivedBlindBoxNum;                                       
	int                                                ActivedDuckShootingRangeNum;                              
	int                                                MaxCoinCarried;                                           
	int                                                ParachutePlaygroundPlayer;                                
	int                                                DuckGameHighCount;                                        
	int                                                DuckGameMiddleCount;                                      
	int                                                DuckGameLowCount;                                         
	int                                                BeeGameHighCount;                                         
	int                                                BeeGameMiddleCount;                                       
	int                                                BeeGameLowCount;                                          
	int                                                DuckShootingRangeHighCount;                               
	int                                                DuckShootingRangeMiddleCount;                             
	int                                                DuckShootingRangeLowCount;                                
};



struct FHardPointActorTeamScoreResultData
{
	int                                                TeamID;                                                   
	int                                                Score;                                                    
};



struct FTLog_HardPointActorFlow
{
	int                                                HardPointID;                                              
	float                                              ActivatedTime;                                            
	TArray<int>                                        OccupiedTeamSequenceRecords;                              
	TArray<struct FHardPointActorTeamScoreResultData>  TeamScoreDataList;                                        
};



struct FHardPointPlayerBattleResultData
{
	uint64_t                                           UID;                                                      
	int                                                OccupyScore;                                              
	float                                              OccupyTime;                                               
	int                                                OccupyNum;                                                
	float                                              DamageToTheInHardPointEnemy;                              
	int                                                PickUpWeaponBoxNum;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FTLog_PickUpItemFlow>                PickUpItemFlowData;                                       
};



struct FHardPointTeamBattleResultData
{
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FHardPointPlayerBattleResultData>    TeamPlayerResultDatas;                                    
};



struct FHardPointBattleResultData
{
	float                                              HardPointEnterOccupiedStateMaxTime;                       
	int                                                TotalPoint;                                               
	TArray<struct FTLog_HardPointActorFlow>            HardPointActorFlowList;                                   
	TArray<struct FHardPointTeamBattleResultData>      TeamResultDatas;                                          
};



struct FCustomCircleParams
{
	int                                                Stage;                                                    
	int                                                delayTime;                                                
	int                                                SafeZoneAppeartime;                                       
	int                                                LastTime;                                                 
	int                                                CircleDamage;                                             
	int                                                BlueCircleRadius;                                         
	int                                                WhiteCircleRadius;                                        
};



struct FRoomCustomParams
{
	int                                                CircleSpeedMultiplicator;                                 
	bool                                               bAutoOpendoor;                                            
	bool                                               bAutoPickup;                                              
	bool                                               bAudioVisual;                                             
	bool                                               bShowSkull;                                               
	bool                                               bAutoAimAt;                                               
	bool                                               bGunRemoveBullet;                                         
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                BlueCircleDamageMultiplicator;                            
	bool                                               bUseFirstWhiteCircleDelayTime;                            
	bool                                               bUseFirstSafeZoneAppearTime;                              
	bool                                               bUseFirstWhiteCircleRadiusMultiplicator;                  
	unsigned char                                      UnknownData01[0x1];                                       
	int                                                FirstWhiteCircleDelayTime;                                
	int                                                FirstSafeZoneAppearTime;                                  
	int                                                FirstWhiteCircleRadiusMultiplicator;                      
	bool                                               EnableRedZone;                                            
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FCustomCircleParams>                 CustomCircleParamsList;                                   
	bool                                               bFuzzyInformation;                                        
	unsigned char                                      UnknownData03[0x7];                                       
};



struct FBattleCustomConfig
{
	struct FString                                     Config;                                                   
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGameModeGameOverData
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FSingleWeaponConfig
{
	int                                                WeaponId;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        AttachMentIDList;                                         
};



struct FPlayerWeaponsConfig
{
	struct FString                                     ConfigName;                                               
	TArray<struct FSingleWeaponConfig>                 WeaponDataList;                                           
};



struct FPlayerTotalWeaponsConfig
{
	int                                                DefaultSelectedIndex;                                     
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FPlayerWeaponsConfig>                WeaponsConfigList;                                        
};



struct FBornItem
{
	int                                                BornItemID;                                               
	int                                                BornItemCount;                                            
	int                                                BornItemFlags;                                            
};



struct FGameModePlayerItemAttachData
{
	int                                                SlotIndex;                                                
	int                                                ItemId;                                                   
	uint64_t                                           InstanceID;                                               
};



struct FGameModePlayerItemPackInfo
{
	int                                                SlotIndex;                                                
	int                                                ItemId;                                                   
	int                                                Count;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           InstanceID;                                               
	int                                                ItemDurability;                                           
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FGameModePlayerItemAttachData>       AttachList;                                               
};



struct FGameModePlayerWeaponAttachData
{
	int                                                SlotIndex;                                                
	int                                                ItemId;                                                   
	uint64_t                                           InstanceID;                                               
};



struct FGameModePlayerWeaponPackInfo
{
	int                                                SlotIndex;                                                
	int                                                ItemId;                                                   
	int                                                Count;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           InstanceID;                                               
	int                                                WeaponDurability;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FGameModePlayerWeaponAttachData>     AttachList;                                               
};



struct FGameModePlayerArmorAttachData
{
	int                                                SlotIndex;                                                
	int                                                ItemId;                                                   
	uint64_t                                           InstanceID;                                               
};



struct FGameModePlayerArmorPackInfo
{
	int                                                ItemId;                                                   
	int                                                Count;                                                    
	uint64_t                                           InstanceID;                                               
	int                                                ItemDurability;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FGameModePlayerArmorAttachData>      AttachList;                                               
};



struct FSocialIslandGameResult
{
	uint64_t                                           UID;                                                      
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FDailyTaskStoreInfo>                 TaskInfo;                                                 
	TArray<struct FDailyTaskAwardInfo>                 RewardInfo;                                               
	int                                                HighScoreCount;                                           
	int                                                TrainCount;                                               
	int                                                TotalTargetScore;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<uint64_t>                                   Interaction;                                              
	int                                                StayTime;                                                 
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<int>                                        DuelDurations;                                            
	int                                                DuelApplyCount;                                           
	int                                                DuelStartCount;                                           
};



struct FPlayerOBBattleInfo
{
	uint64_t                                           UID;                                                      
	int                                                BattleMode;                                               
	bool                                               ValidBattleInfo;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                GameCount;                                                
	int                                                WinCount;                                                 
	int                                                TopTenCount;                                              
	int                                                KillNum;                                                  
	struct FString                                     KDNum;                                                    
};



struct FReportFatalDamage
{
	struct FString                                     PlayerName;                                               
	uint64_t                                           PlayerUID;                                                
	uint64_t                                           OriginUID;                                                
	double                                             OccurTime;                                                
	bool                                               bIsDeliver;                                               
	bool                                               bIsMLAI;                                                  
	bool                                               bIsPlayerAI;                                              
	unsigned char                                      UnknownData00[0x5];                                       
};



struct FParachuteInfo
{
	int                                                LeaderCount;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           LastGameLeaderUID;                                        
	TArray<uint64_t>                                   LastGameTeammatesUID;                                     
	uint64_t                                           LastGameBattleID;                                         
};



struct FThemeRewardStateInfo
{
	int                                                ID;                                                       
	int                                                State;                                                    
	float                                              LastUseTimeStamp;                                         
};



struct FTimeToMedal
{
	int                                                MedalID;                                                  
	float                                              TimeStamp;                                                
};



struct FDeathMatchPlayerBattleResultData
{
	uint64_t                                           UID;                                                      
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     PlayerName;                                               
	int                                                TeamID;                                                   
	int                                                PlayerScore;                                              
	int                                                Rank;                                                     
	int                                                Kills;                                                    
	int                                                rescueTimes;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<uint64_t>                                   RescueTeammatesList;                                      
	int                                                Assists;                                                  
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<uint64_t>                                   AssistTeammatesList;                                      
	int                                                OccupyScore;                                              
	int                                                Deaths;                                                   
	int                                                MaxContinuouKills;                                        
	int                                                SuperGodNum;                                              
	int                                                RevengeNum;                                               
	int                                                DieInBaseRegionNum;                                       
	int                                                DamageAmount;                                             
	int                                                HeadShotNum;                                              
	int                                                ShootWeaponShotNum;                                       
	int                                                ShootWeaponShotAndHitPlayerNum;                           
	int                                                GunKillingTimes;                                          
	int                                                MeleeKillTimes;                                           
	float                                              RangedDamagedAmount;                                      
	float                                              MeleeDamageAmount;                                        
	float                                              MovingDistance;                                           
	float                                              HealAmount;                                               
	int                                                CureCount;                                                
	unsigned char                                      UnknownData03[0x4];                                       
	struct FEquipmentData                              EquipmentData;                                            
	TArray<uint64_t>                                   TeamMemberList;                                           
	TMap<int, int>                                     MedalList;                                                
	TArray<struct FTimeToMedal>                        TimeToMedalList;                                          
	float                                              surviveTime;                                              
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              
	float                                              TotalDamage;                                              
	float                                              TotalSprintDistance;                                      
	int                                                OpenAirDropBoxesNum;                                      
	unsigned char                                      UnknownData05[0x4];                                       
	struct FOnePlayerWeapon                            WeaponRecord;                                             
	float                                              Pronetime;                                                
	unsigned char                                      UnknownData06[0x4];                                       
	TArray<struct FString>                             KillFlow;                                                 
	bool                                               HasEscape;                                                
	unsigned char                                      UnknownData07[0x7];                                       
	struct FString                                     VsReadinessSwitchFlow;                                    
	int                                                CostGold;                                                 
	unsigned char                                      UnknownData08[0x4];                                       
	TMap<int, int>                                     GeneralCounterMap;                                        
};



struct FDeathMatchTeamBattleResultData
{
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Result;                                                   
	int                                                TeamRank;                                                 
	int                                                TeamScore;                                                
	TArray<struct FDeathMatchPlayerBattleResultData>   TeamPlayerResultDatas;                                    
};



struct FBRTDMWinLevelInfoTeamScoreResultData
{
	int                                                LevelIndex;                                               
	int                                                WinBornArea;                                              
};



struct FDeathMatchBattleResultData
{
	EDeathMatchSubModeType                             SubModeType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FDeathMatchTeamBattleResultData>     TeamResultDatas;                                          
	int                                                PlayerNumber;                                             
	int                                                RealPlayerNumber;                                         
	int                                                PlayTime;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           FirstKillPlayer;                                          
	uint64_t                                           LastKillPlayer;                                           
	struct FString                                     VsTeamGameFlow;                                           
	TArray<struct FBRTDMWinLevelInfoTeamScoreResultData> WinLevelInfo;                                             
};



struct FPlayerDeathRoundData
{
	uint64_t                                           UID;                                                      
	int                                                TeamID;                                                   
	int                                                Kills;                                                    
	int                                                DamageAmount;                                             
	float                                              HealAmount;                                               
	float                                              surviveTime;                                              
	int                                                ShootWeaponShotNum;                                       
	int                                                ShootWeaponShotAndHitPlayerNum;                           
	int                                                Deaths;                                                   
	int                                                PlayTime;                                                 
	struct FVector                                     DeadLocation;                                             
};



struct FAirDropBoxDataItem
{
	int                                                ItemSpesificID;                                           
	int                                                Count;                                                    
};



struct FAirDropBoxData
{
	int                                                AirDropBoxId;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FAirDropBoxDataItem>                 DataList;                                                 
	int                                                Reason;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           CallerPlayerID;                                           
	struct FVector                                     Location;                                                 
	float                                              DropTime;                                                 
};



struct FAirDropBoxDataFlow
{
	TArray<struct FAirDropBoxData>                     AirDropBoxDataList;                                       
	struct FString                                     BattleID;                                                 
};



struct FPlayerAssistInfo
{
	uint64_t                                           KillerUID;                                                
	uint64_t                                           VictimUID;                                                
	TArray<uint64_t>                                   AssistUIDArray;                                           
};



struct FPickUpSpecialItemFlow
{
	int                                                ItemSpesificID;                                           
	int                                                pickCount;                                                
};



struct FHeavyWeaponBoxItemFlow
{
	struct FString                                     BoxName;                                                  
	TArray<int>                                        ItemIdList;                                               
};



struct FHeavyWeaponBoxOpenPlayerFlow
{
	struct FString                                     BoxName;                                                  
	int                                                WaitTimeFromActiveToOpen;                                 
	unsigned char                                      UnknownData00[0x4];                                       
	int64_t                                            UID;                                                      
	uint32_t                                           TeamID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FHeavyWeaponBoxActivationFlow
{
	struct FString                                     BoxName;                                                  
	int64_t                                            ActiveTime;                                               
};



struct FHeavyWeaponBoxSpawnFlow
{
	struct FString                                     BoxName;                                                  
	int64_t                                            SpawnTime;                                                
	struct FString                                     SpawnLocation;                                            
};



struct FPrimeCircleArea
{
	TArray<struct FVector>                             Anchors;                                                  
	int                                                PrimeConfigIndex;                                         
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FItemGenerateTableRow : public FTableRowBase
{
	int                                                ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Value;                                                    
	struct FString                                     Catetory;                                                 
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    
};



struct FItemSpotSceneComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UItemSpotSceneComponent*>             AllSpots;                                                 
};



struct FRevivalRecordBaseInfo
{
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	struct FString                                     UserName;                                                 
	uint64_t                                           RoleID;                                                   
};



struct FReportIDCardDestroyFlow : public FRevivalRecordBaseInfo
{
	unsigned char                                      DestroyReason;                                            
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     DestroyTime;                                              
};



struct FReportIDCardPickUpFlow : public FRevivalRecordBaseInfo
{
	uint64_t                                           PickerUID;                                                
	int                                                RemainingCountDown;                                       
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FReportIDCardProduceFlow : public FRevivalRecordBaseInfo
{
	struct FString                                     DeathTime;                                                
};



struct FPlayerRevivalInfo
{
	int64_t                                            RevivedPlayerUID;                                         
	int64_t                                            PickerUID;                                                
	int                                                TimeAfterIDCardPicked;                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FReportRevivalFlow : public FRevivalRecordBaseInfo
{
	unsigned char                                      RevivalFailedReason;                                      
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     TowerLocation;                                            
	struct FString                                     RevivalTime;                                              
	TArray<struct FPlayerRevivalInfo>                  PlayerRevivalInfos;                                       
};



struct FFingerTouchSample
{
	int                                                FingerIndex;                                              
	float                                              PressLocX;                                                
	float                                              PressLocY;                                                
	float                                              PressTime;                                                
	float                                              ReleaseLocX;                                              
	float                                              ReleaseLocY;                                              
	float                                              ReleaseTime;                                              
};



struct FFingerTouchCluster
{
	float                                              StartTime;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FFingerTouchSample>                  Samples;                                                  
};



struct FFireSample
{
	float                                              LocX;                                                     
	float                                              LocY;                                                     
	double                                             StartTime;                                                
	double                                             EndTime;                                                  
	uint64_t                                           StartFrame;                                               
	uint64_t                                           EndFrame;                                                 
};



struct FFingerTouchFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           BattleID;                                                 
	uint64_t                                           UID;                                                      
	int                                                MapID;                                                    
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     ClientVersion;                                            
	int                                                MatchMode;                                                
	int                                                ViewportWidth;                                            
	int                                                ViewportHeight;                                           
	float                                              DPIScale;                                                 
	TArray<struct FFingerTouchCluster>                 Clusters;                                                 
	TArray<struct FFireSample>                         FireSamples;                                              
};



struct FTssAntiFlow
{
	int                                                GunID;                                                    
	int                                                KillAICnt;                                                
	int                                                KillRealPlayerCnt;                                        
	uint32_t                                           ShotTime;                                                 
	uint32_t                                           SendIndex;                                                
	unsigned char                                      ErrorCode;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           ReportLog;                                                
};



struct FPlayerNetworkData
{
	uint64_t                                           UID;                                                      
	int                                                TotalOutOfOrderPackets;                                   
	int                                                MaxOutOfOrderPacketsPerSec;                               
};



struct FClientNetworkData
{
	uint64_t                                           UID;                                                      
	int                                                AvgPing;                                                  
	int                                                MaxPing;                                                  
	int                                                MinPing;                                                  
	int                                                LostPackRate;                                             
	int                                                AvgNoOutlier;                                             
	int                                                StdNoOutlier;                                             
	int                                                NumNoOutlier;                                             
	int                                                InLoss;                                                   
	int                                                OutLoss;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FNetworkData
{
	int                                                AlivePlayerNum;                                           
	int                                                ConnectionNum;                                            
	int                                                OnlineNum;                                                
	int                                                HighPingNum;                                              
	int                                                NoConPktPerSec;                                           
	int                                                NoConBadPktPerSec;                                        
	int                                                DisConPktPerSec;                                          
	int                                                WorstFrameMSPerSec;                                       
	int                                                BlockNonConnBurst;                                        
	int                                                BlockNetConnBurst;                                        
	int                                                DropPktCntPerSec;                                         
};



struct FEquipmentFlow
{
	uint64_t                                           UID;                                                      
	int                                                EventType;                                                
	int                                                GameTime;                                                 
	int                                                MainWeapon1ID;                                            
	int                                                MainWeapon2ID;                                            
	int                                                ViceWeaponID;                                             
	int                                                HelmetID;                                                 
	int                                                VestID;                                                   
	int                                                BackPackID;                                               
	TMap<int, int>                                     Equipments;                                               
};



struct FSecMrpcsFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	struct FString                                     UserName;                                                 
	uint64_t                                           SvrRoleID;                                                
	unsigned char                                      SecMrpcsFlowID;                                           
	unsigned char                                      UnknownData02[0x7];                                       
	struct FString                                     MrpcsFlowStr;                                             
};



struct FClientSecMrpcsFlow
{
	unsigned char                                      SecMrpcsFlowID;                                           
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<unsigned char>                              MrpcsFlowData;                                            
};



struct FGameMisKillFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	uint64_t                                           MyRoleID;                                                 
	struct FString                                     MyOpenID;                                                 
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	struct FString                                     DeadDamangeType;                                          
	uint64_t                                           TeammateRoleID;                                           
	int                                                bConfirmMisKill;                                          
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FGameEndReport
{
	int                                                PvePoliceOfficeTriggerCount;                              
	int                                                PveZombieGrenadeCount;                                    
	int                                                PveGenerateZombieByNoTeamMate;                            
	int                                                NoneAIGameTime;                                           
	TMap<int, int>                                     AISpawnCountMap;                                          
	TMap<int, int>                                     AIEnterFightingCountMap;                                  
};



struct FVerifyInfoFlow
{
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint64_t                                           UID;                                                      
	uint64_t                                           BattleID;                                                 
	int                                                LocationX;                                                
	int                                                LocationY;                                                
	int                                                LocationZ;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FVoiceTeamQuit
{
	struct FString                                     AntsVoiceTeamID;                                          
	struct FString                                     AntsVoiceRoomID;                                          
	int                                                AntsVoiceTeamMemberID;                                    
	int                                                AntsVoiceRoomMemberID;                                    
	uint64_t                                           UID;                                                      
};



struct FVoiceTeamCreate
{
	struct FString                                     AntsVoiceTeamID;                                          
	struct FString                                     AntsVoiceRoomID;                                          
	int                                                AntsVoiceTeamMemberID;                                    
	int                                                AntsVoiceRoomMemberID;                                    
	uint64_t                                           UID;                                                      
};



struct FWatchGamePlayerInfoClickFlow
{
	uint64_t                                           WatchPlayer_UID;                                          
	int                                                WatchTimes;                                               
	float                                              Duration;                                                 
};



struct FGameSetting_BasicSetting
{
	int                                                CrossHairColor;                                           
	bool                                               AimAssist;                                                
	bool                                               WallFeedBack;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                SingleShotWeaponShootMode;                                
	int                                                ShotGunShootMode;                                         
	bool                                               LeftRightShoot;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                LRShootMode;                                              
	bool                                               LRShootSniperSwitch;                                      
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                LeftHandFire;                                             
	int                                                Gyroscope;                                                
	bool                                               AutoOpenDoor;                                             
	bool                                               IntelligentDrugs;                                         
	bool                                               ActorAnimationSwitch;                                     
	bool                                               FPViewSwitch;                                             
	bool                                               ShoulderEnable;                                           
	bool                                               ShoulderMode;                                             
	unsigned char                                      UnknownData03[0x2];                                       
};



struct FGameSetting_ArtQuality
{
	int                                                ArtStyle;                                                 
	bool                                               AntiAliasingSwitch;                                       
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FGameSetting_Operate
{
	int                                                FireMode;                                                 
	bool                                               Touch_3D_Switcher;                                        
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FGameSetting_Vehicle
{
	int                                                VehicleControlMode;                                       
	int                                                DrivingViewMode;                                          
};



struct FGameSetting_Sensibility_FreeCam
{
	float                                              VehicleEye;                                               
	float                                              ParachuteEye;                                             
	float                                              CamFpFreeEye;                                             
};



struct FGameSetting_Sensibility_Cam
{
	float                                              CamLensSenNoneSniper;                                     
	float                                              CamLensSenNoneSniperFP;                                   
	float                                              CamLensSenRedDotSniper;                                   
	float                                              CamLensSen2XSniper;                                       
	float                                              CamLensSen3XSniper;                                       
	float                                              CamLensSen4XSniper;                                       
	float                                              CamLensSen6XSniper;                                       
	float                                              CamLensSen8XSniper;                                       
	float                                              CamLensSenShoulderSniper;                                 
	float                                              CamLensSenShoulderSniperFP;                               
};



struct FGameSetting_Sensibility_Fire
{
	float                                              FireCamLensSenNoneSniper;                                 
	float                                              FireCamLensSenNoneSniperFP;                               
	float                                              FireCamLensSenRedDotSniper;                               
	float                                              FireCamLensSen2XSniper;                                   
	float                                              FireCamLensSen3XSniper;                                   
	float                                              FireCamLensSen4XSniper;                                   
	float                                              FireCamLensSen6XSniper;                                   
	float                                              FireCamLensSen8XSniper;                                   
	float                                              FireCamLensSenShoulderSniper;                             
	float                                              FireCamLensSenShoulderSniperFP;                           
};



struct FGameSetting_Sensibility_Gyroscope
{
	float                                              GyroscopeSenNoneSniper;                                   
	float                                              GyroscopeSenNoneSniperFP;                                 
	float                                              GyroscopeSenRedDotSniper;                                 
	float                                              GyroscopeSen2XSniper;                                     
	float                                              GyroscopeSen3XSniper;                                     
	float                                              GyroscopeSen4XSniper;                                     
	float                                              GyroscopeSen6XSniper;                                     
	float                                              GyroscopeSen8XSniper;                                     
	float                                              GyroscopeShoulderSniper;                                  
	float                                              GyroscopeShoulderSniperFP;                                
};



struct FGameSetting_Sensibility
{
	int                                                CameraLensSensibility;                                    
	struct FGameSetting_Sensibility_FreeCam            Sens_FreeCamera;                                          
	struct FGameSetting_Sensibility_Cam                Sens_Camera;                                              
	struct FGameSetting_Sensibility_Fire               Sens_Fire;                                                
	struct FGameSetting_Sensibility_Gyroscope          Sens_Gyroscope;                                           
};



struct FGameSetting_PickUp_Drug
{
	int                                                MedicalTreatment;                                         
	int                                                Bandage;                                                  
	int                                                PainKiller;                                               
	int                                                Adrenaline;                                               
	int                                                EnergyDrink;                                              
	int                                                FirstAidKit;                                              
};



struct FGamesetting_PickUp_Grenade
{
	int                                                IncendiaryBomb;                                           
	int                                                ShockBomb;                                                
	int                                                SmokeBomb;                                                
	int                                                GrenadeFragmented;                                        
};



struct FGameSetting_PickUp_WeaponBullet
{
	int                                                WeaponId;                                                 
	int                                                BulletCount;                                              
};



struct FGameSetting_PickUp
{
	bool                                               AutoPickUpSwitcher;                                       
	bool                                               AutoPickupPistol;                                         
	unsigned char                                      UnknownData00[0x2];                                       
	struct FGameSetting_PickUp_Drug                    Drug;                                                     
	struct FGamesetting_PickUp_Grenade                 Grenade;                                                  
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FGameSetting_PickUp_WeaponBullet>    WeaponBulletList;                                         
};



struct FGameSetting
{
	uint64_t                                           RoleID;                                                   
	struct FGameSetting_BasicSetting                   BasicSetting;                                             
	struct FGameSetting_ArtQuality                     ArtQuality;                                               
	struct FGameSetting_Operate                        Operate;                                                  
	struct FGameSetting_Vehicle                        Vehicle;                                                  
	struct FGameSetting_Sensibility                    Sensibility;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FGameSetting_PickUp                         PickUp;                                                   
};



struct FRecoilInfo
{
	int16_t                                            VerticalRecoilMin;                                        
	int16_t                                            VerticalRecoilMax;                                        
	int16_t                                            VerticalRecoilVariation;                                  
	int16_t                                            VerticalRecoveryModifier;                                 
	int16_t                                            VerticalRecoveryClamp;                                    
	int16_t                                            VerticalRecoveryMax;                                      
	int16_t                                            LeftMax;                                                  
	int16_t                                            RightMax;                                                 
	int16_t                                            HorizontalTendency;                                       
	int16_t                                            BulletPerSwitch;                                          
	int16_t                                            TimePerSwitch;                                            
	bool                                               SwitchOnTime;                                             
	unsigned char                                      UnknownData00[0x1];                                       
	int16_t                                            RecoilSpeedVertical;                                      
	int16_t                                            RecoilSpeedHorizontal;                                    
	int16_t                                            RecovertySpeedVertical;                                   
	int16_t                                            RecoilValueClimb;                                         
	int16_t                                            RecoilValueFail;                                          
	int16_t                                            RecoilModifierStand;                                      
	int16_t                                            RecoilModifierCrouch;                                     
	int16_t                                            RecoilModifierProne;                                      
	int16_t                                            RecoilHorizontalMinScalar;                                
	int16_t                                            BurstEmptyDelay;                                          
	bool                                               ShootSightReturn;                                         
	unsigned char                                      UnknownData01[0x1];                                       
	int16_t                                            ShootSightReturnSpeed;                                    
	int16_t                                            AccessoriesVRecoilFactor;                                 
	int16_t                                            AccessoriesHRecoilFactor;                                 
	int16_t                                            AccessoriesRecoveryFactor;                                
};



struct FSecPlayerKillFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	struct FString                                     UserName;                                                 
	uint64_t                                           SvrRoleID;                                                
	int64_t                                            ClientStartTime;                                          
	int8_t                                             SecPlayerKillFlowID;                                      
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                GunID;                                                    
	uint64_t                                           KilledPlayerRoleID;                                       
	struct FRecoilInfo                                 RecoilInfo;                                               
	unsigned char                                      UnknownData03[0x2];                                       
	int                                                LocationX;                                                
	int                                                LocationY;                                                
	int                                                LocationZ;                                                
	int                                                KilledLocationX;                                          
	int                                                KilledLocationY;                                          
	int                                                KilledLocationZ;                                          
	int                                                BornPointID;                                              
	int                                                KilledBornPointID;                                        
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     GameModeID;                                               
	uint64_t                                           PawnState;                                                
	uint64_t                                           KilledPawnState;                                          
};



struct FClientSecPlayerKillFlow
{
	int64_t                                            ClientStartTime;                                          
	int8_t                                             SecPlayerKillFlowID;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                GunID;                                                    
	uint32_t                                           KilledPlayerKey;                                          
	struct FRecoilInfo                                 RecoilInfo;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                LocationX;                                                
	int                                                LocationY;                                                
	int                                                LocationZ;                                                
	int                                                KilledLocationX;                                          
	int                                                KilledLocationY;                                          
	int                                                KilledLocationZ;                                          
	int                                                KilledTeamID;                                             
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     GameModeID;                                               
	uint64_t                                           PawnState;                                                
	uint64_t                                           KilledPawnState;                                          
};



struct FPlayerBehaviorFlow
{
	uint64_t                                           FrameCounter;                                             
	uint64_t                                           BattleID;                                                 
	bool                                               IsTargetPlayer;                                           
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     Name;                                                     
	uint32_t                                           PlayerKey;                                                
	uint32_t                                           RelevantPlayerKey;                                        
	int                                                LocationX;                                                
	int                                                LocationY;                                                
	int                                                LocationZ;                                                
	int                                                RotationP;                                                
	int                                                RotationY;                                                
	int                                                RotationR;                                                
	struct FString                                     Stats;                                                    
	bool                                               IsDying;                                                  
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              Breath;                                                   
	int                                                SpeedX;                                                   
	int                                                SpeedY;                                                   
	int                                                SpeedZ;                                                   
	float                                              Health;                                                   
	float                                              Energy;                                                   
	int                                                CurrentWeaponID;                                          
	int                                                Ammo;                                                     
	int                                                SightId;                                                  
	bool                                               IsBeAttacking;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                BeAttackDirX;                                             
	int                                                BeAttackDirY;                                             
	int                                                BeAttackDirZ;                                             
	int                                                MedicineId;                                               
	bool                                               IsHaveSound;                                              
	unsigned char                                      UnknownData03[0x3];                                       
};



struct FHurtFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	int64_t                                            ClientStartTime;                                          
	int                                                MrpcsFlowcount_;                                          
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     UserName;                                                 
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData03[0x7];                                       
	struct FString                                     EnemyOpenID;                                              
	struct FString                                     EnemyUserName;                                            
	uint64_t                                           EnemyRoleID;                                              
	int                                                EnemyRoleType;                                            
	uint32_t                                           HurtTime;                                                 
	int                                                HurtType;                                                 
	int                                                HitType;                                                  
	int                                                DamageStart;                                              
	int                                                DamageReduce;                                             
	int                                                ArmorDef;                                                 
	int                                                HPstart;                                                  
	int                                                HPEnd;                                                    
	int                                                ArmorHPStart1;                                            
	int                                                ArmorHPEnd1;                                              
	int                                                ArmorHPStart2;                                            
	int                                                ArmorHPEnd2;                                              
	int                                                CarHPStart;                                               
	int                                                CarHPEnd;                                                 
	int                                                FallHeight;                                               
	int                                                HypoxiaTime;                                              
	int                                                HypoxiaHurtTotal;                                         
	int                                                PlayerKilled;                                             
	int                                                ArmorKill;                                                
	int                                                CarKill;                                                  
	int                                                IfIsAI;                                                   
	int                                                CircleIndex;                                              
	uint32_t                                           HurtFlowID;                                               
};



struct FSecAttackFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           AreaID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	int64_t                                            ClientStartTime;                                          
	uint64_t                                           RoleID;                                                   
	struct FString                                     TargetUserName;                                           
	struct FString                                     TargetOpenID;                                             
	uint64_t                                           TargetRoleID;                                             
	struct FString                                     HitPart;                                                  
	int                                                GunID;                                                    
	unsigned char                                      PlayerKill;                                               
	unsigned char                                      UnknownData02[0x3];                                       
	uint64_t                                           AttackFlowID;                                             
	int                                                KillAICnt;                                                
	int                                                KillRealPlayerCnt;                                        
	int16_t                                            BulletDown;                                               
	unsigned char                                      UnknownData03[0x6];                                       
};



struct FAttackFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	int64_t                                            ClientStartTime;                                          
	int                                                MrpcsFlowcount_;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     UserName;                                                 
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData02[0x7];                                       
	struct FString                                     TargetOpenID;                                             
	struct FString                                     TargetUserName;                                           
	uint64_t                                           TargetRoleID;                                             
	int8_t                                             TargetRoleType;                                           
	unsigned char                                      UnknownData03[0x7];                                       
	struct FString                                     GunName;                                                  
	struct FString                                     GunPartsType;                                             
	int8_t                                             SightType;                                                
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                BulletSpeed;                                              
	int8_t                                             MagazineMax;                                              
	int8_t                                             MagazineLeft;                                             
	unsigned char                                      UnknownData05[0x2];                                       
	int                                                ShotFrequency;                                            
	int                                                BulletDamage;                                             
	int16_t                                            BulletDown;                                               
	unsigned char                                      BulletDamageReduce;                                       
	unsigned char                                      UnknownData06[0x1];                                       
	int                                                Recoil;                                                   
	int                                                ReloadTime;                                               
	struct FString                                     PlayerState;                                              
	unsigned char                                      ShotPose;                                                 
	unsigned char                                      FireType;                                                 
	unsigned char                                      bHoldBreath : 1;                                          
	unsigned char                                      Sideways;                                                 
	int                                                ShootingDeviationX;                                       
	int                                                ShootingDeviationY;                                       
	uint32_t                                           ZeroDistance;                                             
	uint32_t                                           ShotTime;                                                 
	int                                                HitTime;                                                  
	int                                                PlayerPositionX;                                          
	int                                                PlayerPositionY;                                          
	int                                                PlayerPositionZ;                                          
	int                                                GunPositionX;                                             
	int                                                GunPositionY;                                             
	int                                                GunPositionZ;                                             
	int                                                BulletsBornPositionX;                                     
	int                                                BulletsBornPositionY;                                     
	int                                                BulletsBornPositionZ;                                     
	uint32_t                                           LastHitTime;                                              
	uint32_t                                           BulletFlyDistance;                                        
	uint32_t                                           BulletFlyTime;                                            
	int                                                HitPositionX;                                             
	int                                                HitPositionY;                                             
	int                                                HitPositionZ;                                             
	unsigned char                                      HitPart;                                                  
	unsigned char                                      bHitCar : 1;                                              
	unsigned char                                      bTireOut : 1;                                             
	unsigned char                                      BulletCost;                                               
	unsigned char                                      UnknownData07[0x1];                                       
	int                                                HPstart;                                                  
	int                                                HPEnd;                                                    
	int                                                ArmorHPStart;                                             
	int                                                ArmorHPEnd;                                               
	int                                                CarHPStart;                                               
	int                                                CarHPEnd;                                                 
	unsigned char                                      PlayerKill;                                               
	unsigned char                                      bArmorKill : 1;                                           
	unsigned char                                      bCarKill : 1;                                             
	unsigned char                                      UnknownData08[0x2];                                       
	int                                                RecoilMoveX;                                              
	int                                                RecoilMoveY;                                              
	int                                                WeaponAimFOV;                                             
	int                                                BulletDamageDebuff;                                       
	int                                                BulletDamageBuff;                                         
	int                                                BulletType;                                               
	uint32_t                                           AtackFlowID;                                              
	int                                                AutoAimSpeed;                                             
	int                                                AutoAimSpeedRateMax;                                      
	int                                                AutoAimRangeMax;                                          
	int                                                AutoAimRangeRateMax;                                      
	int                                                GunID;                                                    
	int                                                IfIsOnCar;                                                
	bool                                               InMoveablePlatform;                                       
	unsigned char                                      UnknownData09[0x3];                                       
	int                                                KillAICnt;                                                
	int                                                KillRealPlayerCnt;                                        
	float                                              CameraRotationX;                                          
	float                                              CameraRotationY;                                          
	float                                              CameraRotationZ;                                          
};



struct FAimFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	int64_t                                            ClientStartTime;                                          
	int                                                MrpcsFlowcount_;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     UserName;                                                 
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                AimTime;                                                  
	struct FString                                     ShotCDTime;                                               
	int                                                ShotCount;                                                
	int                                                ShotHitCount;                                             
	int                                                ShotHeadHitCount;                                         
	int                                                ShotPersonHitCount;                                       
	int                                                ShotPersonKillCount;                                      
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     HitDistance;                                              
	struct FString                                     HitEachDistance;                                          
	struct FString                                     HitAngle;                                                 
	struct FString                                     HitEachCdTime;                                            
	struct FString                                     HitPartInfo;                                              
	struct FString                                     PlayerState;                                              
	unsigned char                                      bHoldBreath : 1;                                          
	int8_t                                             SightType;                                                
	unsigned char                                      UnknownData04[0x2];                                       
	uint32_t                                           AimFlowID;                                                
};



struct FGameEndFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	int64_t                                            ClientStartTime;                                          
	int                                                MrpcsFlowcount_;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     UserName;                                                 
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData02[0x7];                                       
	struct FString                                     ClientVersion;                                            
	uint32_t                                           OverTime;                                                 
	int8_t                                             EndType;                                                  
	unsigned char                                      KillCount;                                                
	unsigned char                                      AssistsCount;                                             
	unsigned char                                      DropCount;                                                
	unsigned char                                      SaveCount;                                                
	unsigned char                                      RebornCount;                                              
	unsigned char                                      AliveType : 1;                                            
	unsigned char                                      UnknownData03[0x1];                                       
	int                                                GoldGet;                                                  
	int                                                DiamondGet;                                               
	int                                                ExpGet;                                                   
	unsigned char                                      WinRank;                                                  
	unsigned char                                      TotalPlayers;                                             
	unsigned char                                      UnknownData04[0x2];                                       
	int                                                PlayerRank;                                               
	int                                                RankEnd;                                                  
	int                                                TeamID;                                                   
	struct FString                                     TeamPlayer1;                                              
	struct FString                                     TeamPlayer2;                                              
	struct FString                                     TeamPlayer3;                                              
	unsigned char                                      TeamPlayer1AliveType : 1;                                 
	unsigned char                                      TeamPlayer2AliveType : 1;                                 
	unsigned char                                      TeamPlayer3AliveType : 1;                                 
	unsigned char                                      TeamPlayer1Kill;                                          
	unsigned char                                      TeamPlayer2Kill;                                          
	unsigned char                                      TeamPlayer3Kill;                                          
	uint32_t                                           GameEndFlowID;                                            
	unsigned char                                      AIKillCount;                                              
	unsigned char                                      KillHeadShotCount;                                        
	unsigned char                                      RoundCircleCount;                                         
	unsigned char                                      PlayerLastKillGet;                                        
	int                                                ChangeWearingCount;                                       
	TArray<int>                                        ChangeWearingCountInReady;                                
	TArray<int>                                        ChangeWearingCountInBattle;                               
	float                                              AllowChangeWearingTime;                                   
	float                                              BattleStateTime;                                          
	TArray<int>                                        UseQuickMsgIDArray;                                       
	TArray<int>                                        UseQuickMsgCountArray;                                    
	TArray<int>                                        UseWheelMsgIDArray;                                       
	TArray<int>                                        UseWheelMsgCountArray;                                    
	TArray<int>                                        InexistentAvatarStat;                                     
	TArray<int>                                        InexistentAvatarInBornStat;                               
	TArray<int>                                        InexistentWeaponAvatarStat;                               
	TArray<int>                                        InexistentVehicleAvatarStat;                              
	int                                                InexistentPlaneAvatarStat;                                
	int                                                InexistentEmoteAvatarStat;                                
	unsigned char                                      ShowMsgCnt;                                               
	unsigned char                                      UserConfirmCnt;                                           
	unsigned char                                      UserCancelCnt;                                            
	unsigned char                                      UserDoNothingCnt;                                         
	float                                              FPSBeforeAdapt;                                           
	float                                              FPSAfterAdapt;                                            
	float                                              TeammateMicrophoneTime;                                   
	float                                              TeammateSpeakerTime;                                      
	float                                              EnemyMicrophoneTime;                                      
	float                                              EnemySpeakerTime;                                         
	float                                              TeammateInterphoneTime;                                   
	float                                              EnemyInterphoneTime;                                      
	unsigned char                                      PlayerUseQuickSight;                                      
	unsigned char                                      PlayerUseShoulderCnt;                                     
	unsigned char                                      UnknownData05[0x2];                                       
	int                                                MaxVehicleToLandHeight;                                   
	int                                                MaxVehicleInAirInterval;                                  
	int                                                PlayerMoveSpeedMax;                                       
	int                                                PlayerJumpHeightMax;                                      
	int                                                PlayerJumpSpeedMax;                                       
	unsigned char                                      UnknownData06[0x4];                                       
};



struct FTeammatHurtFlowNode
{
	struct FString                                     HurtPlayerName;                                           
	int                                                GameModeType;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     MakeHurtPlayerName;                                       
	struct FString                                     DataTimes;                                                
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData01[0x5];                                       
	struct FString                                     ZoneID;                                                   
	struct FString                                     OpenID;                                                   
};



struct FTeammatHurtFlow
{
	TArray<struct FTeammatHurtFlowNode>                TeammatHurtList;                                          
};



struct FForbitPickFlowNode
{
	struct FString                                     PlayerName;                                               
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	struct FString                                     OpenID;                                                   
	TArray<int>                                        forbitNumList;                                            
};



struct FForbitPickFlow
{
	TArray<struct FForbitPickFlowNode>                 forbitList;                                               
};



struct FClientGameEndFlow
{
	int64_t                                            ClientStartTime;                                          
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     ClientVersion;                                            
	uint32_t                                           OverTime;                                                 
	int8_t                                             EndType;                                                  
	unsigned char                                      KillCount;                                                
	unsigned char                                      AssistsCount;                                             
	unsigned char                                      DropCount;                                                
	unsigned char                                      SaveCount;                                                
	unsigned char                                      RebornCount;                                              
	unsigned char                                      AliveType : 1;                                            
	unsigned char                                      UnknownData00[0x1];                                       
	int                                                GoldGet;                                                  
	int                                                DiamondGet;                                               
	int                                                ExpGet;                                                   
	unsigned char                                      WinRank;                                                  
	unsigned char                                      TotalPlayers;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                PlayerRank;                                               
	int                                                RankEnd;                                                  
	int                                                TeamID;                                                   
	struct FString                                     TeamPlayer1;                                              
	struct FString                                     TeamPlayer2;                                              
	struct FString                                     TeamPlayer3;                                              
	unsigned char                                      TeamPlayer1AliveType : 1;                                 
	unsigned char                                      TeamPlayer2AliveType : 1;                                 
	unsigned char                                      TeamPlayer3AliveType : 1;                                 
	unsigned char                                      TeamPlayer1Kill;                                          
	unsigned char                                      TeamPlayer2Kill;                                          
	unsigned char                                      TeamPlayer3Kill;                                          
	uint32_t                                           GameEndFlowID;                                            
	unsigned char                                      RoundCircleCount;                                         
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<int>                                        UseQuickMsgIDArray;                                       
	TArray<int>                                        UseQuickMsgCountArray;                                    
	TArray<int>                                        UseWheelMsgIDArray;                                       
	TArray<int>                                        UseWheelMsgCountArray;                                    
	TArray<int>                                        InexistentAvatarStat;                                     
	TArray<int>                                        InexistentAvatarInBornStat;                               
	TArray<int>                                        InexistentWeaponAvatarStat;                               
	TArray<int>                                        InexistentVehicleAvatarStat;                              
	int                                                InexistentPlaneAvatarStat;                                
	int                                                InexistentEmoteAvatarStat;                                
	unsigned char                                      ShowMsgCnt;                                               
	unsigned char                                      UserConfirmCnt;                                           
	unsigned char                                      UserCancelCnt;                                            
	unsigned char                                      UserDoNothingCnt;                                         
	float                                              FPSBeforeAdapt;                                           
	float                                              FPSAfterAdapt;                                            
	float                                              TeammateMicrophoneTime;                                   
	float                                              TeammateSpeakerTime;                                      
	float                                              EnemyMicrophoneTime;                                      
	float                                              EnemySpeakerTime;                                         
	float                                              TeammateInterphoneTime;                                   
	float                                              EnemyInterphoneTime;                                      
	unsigned char                                      PlayerUseQuickSight;                                      
	unsigned char                                      PlayerUseShoulderCnt;                                     
	unsigned char                                      UnknownData03[0x2];                                       
	int                                                PlayerMoveSpeedMax;                                       
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FInexistentAvatarFlow
{
	unsigned char                                      UnknownData00[0x1E0];                                     
};



struct FDSFinalCircleFlow
{
	int64_t                                            dtEventTime;                                              
	uint64_t                                           BattleID;                                                 
	uint64_t                                           RoleID;                                                   
	uint32_t                                           GameStartTime;                                            
	uint32_t                                           FlowReportTime;                                           
	uint32_t                                           NewCircleBornTime;                                        
	int                                                NewCircleCount;                                           
	int                                                RecoveryTotal;                                            
	int                                                EnergyRecoveryTotal;                                      
	int                                                PlayerMoveDis;                                            
	int                                                PlayerDriveMoveDis;                                       
	int                                                PlayerDriveMoveTime;                                      
	int                                                PlayerCreepMoveTime;                                      
	int                                                RecordType;                                               
	int                                                PlayerKillRealPlayerCount;                                
	int                                                PlayerKillMLDeliverAICount;                               
	int                                                PlayerKillMLAICount;                                      
	int                                                PlayerKillBehaviorTreeDeliverAICount;                     
	int                                                PlayerKillBehaviorTreeAICount;                            
	int                                                KillerType;                                               
	int                                                KnockDownRealPlayerCount;                                 
	int                                                KnockDownMLDeliverAICount;                                
	int                                                KnockDownMLAICount;                                       
	int                                                KnockDownBehaviorTreeDeliverAICount;                      
	int                                                KnockDownBehaviorTreeAICount;                             
	int                                                BeKnockDownRealPlayerCount;                               
	int                                                BeKnockDownMLDeliverAICount;                              
	int                                                BeKnockDownMLAICount;                                     
	int                                                BeKnockDownBehaviorTreeDeliverAICount;                    
	int                                                BeKnockDownBehaviorTreeAICount;                           
	int                                                DamageRealPlayerAmount;                                   
	int                                                DamageMLDeliverAIAmount;                                  
	int                                                DamageMLAIAmount;                                         
	int                                                DamageBehaviorTreeDeliverAIAmount;                        
	int                                                DamageBehaviorTreeAIAmount;                               
	int                                                DamageFromRealPlayerAmount;                               
	int                                                DamageFromMLDeliverAIAmount;                              
	int                                                DamageFromMLAIAmount;                                     
	int                                                DamageFromBehaviorTreeDeliverAIAmount;                    
	int                                                DamageFromBehaviorTreeAIAmount;                           
	int                                                TeammateNum;                                              
	int                                                MapID;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCircleFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	int64_t                                            ClientStartTime;                                          
	int                                                MrpcsFlowcount_;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     UserName;                                                 
	struct FString                                     PicUrl;                                                   
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData02[0x3];                                       
	uint32_t                                           GameStartTime;                                            
	uint32_t                                           NewCircleBornTime;                                        
	int                                                NewCirclePositionX;                                       
	int                                                NewCirclePositionY;                                       
	int                                                NewCirclePositionRadius;                                  
	int                                                NewCircleCount;                                           
	int                                                PlayerPositionX;                                          
	int                                                PlayerPositionY;                                          
	int                                                PlayerPositionZ;                                          
	int                                                PlayerHP;                                                 
	uint32_t                                           OldCircleMoveTime;                                        
	uint32_t                                           OldCircleMoveEndTime;                                     
	int                                                PlayerOutTime;                                            
	int                                                CirclePoisonCount;                                        
	int                                                CirclePoisonMin;                                          
	int                                                CirclePoisonMax;                                          
	int                                                CirclePoisonAvg;                                          
	int                                                CirclePoisonTotal;                                        
	int                                                CirclePoisonDrop;                                         
	int                                                CirclePoisonDead;                                         
	int                                                RecoveryCount;                                            
	int                                                RecoveryMin;                                              
	int                                                RecoveryMax;                                              
	int                                                RecoveryTotal;                                            
	int                                                EnergyRecoveryCount;                                      
	int                                                EnergyRecoveryMin;                                        
	int                                                EnergyRecoveryMax;                                        
	int                                                EnergyRecoveryTotal;                                      
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     RecoveryItemCounts;                                       
	int                                                EnergyStartLv;                                            
	int                                                EnergyStartTime;                                          
	struct FString                                     EnergyItemUse;                                            
	int                                                EnergyLvTimeInfo;                                         
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     EnergyRunFastTime;                                        
	struct FString                                     EnergyRecoveryLvTimeInfo;                                 
	int                                                EnergyEndLv;                                              
	int                                                EnergyEndTime;                                            
	int                                                PlayerMoveDis;                                            
	int                                                PlayerSpeedMax;                                           
	int                                                PlayerSpeedAvg;                                           
	int                                                PlayerCarSpeedMax;                                        
	int                                                PlayerCarSpeedAvg;                                        
	int                                                PlayerSquatMoveDis;                                       
	int                                                PlayerSquatMoveTime;                                      
	int                                                PlayerCreepMoveDis;                                       
	int                                                PlayerCreepMoveTime;                                      
	int                                                PlayerRunMoveDis;                                         
	int                                                PlayerRunMoveTime;                                        
	int                                                PlayerDriveMoveDis;                                       
	int                                                PlayerDriveMoveTime;                                      
	int                                                PlayerCar;                                                
	int                                                PlayerCameraDistanceMax;                                  
	uint32_t                                           SecCircleFlowID;                                          
	int                                                RecordType;                                               
	unsigned char                                      AutoAimType;                                              
	unsigned char                                      UnknownData05[0x3];                                       
	int                                                AutoAimTime;                                              
	int                                                PlayerKillCount;                                          
	int                                                PlayerKillAICount;                                        
	int                                                PlayerHeadKillCount;                                      
	int                                                PlayerKillRealPlayerCount;                                
	int                                                PlayerKillMLDeliverAICount;                               
	int                                                PlayerKillMLAICount;                                      
	int                                                PlayerKillBehaviorTreeDeliverAICount;                     
	int                                                PlayerKillBehaviorTreeAICount;                            
	int                                                KillerType;                                               
	int                                                KnockDownRealPlayerCount;                                 
	int                                                KnockDownMLDeliverAICount;                                
	int                                                KnockDownMLAICount;                                       
	int                                                KnockDownBehaviorTreeDeliverAICount;                      
	int                                                KnockDownBehaviorTreeAICount;                             
	int                                                BeKnockDownRealPlayerCount;                               
	int                                                BeKnockDownMLDeliverAICount;                              
	int                                                BeKnockDownMLAICount;                                     
	int                                                BeKnockDownBehaviorTreeDeliverAICount;                    
	int                                                BeKnockDownBehaviorTreeAICount;                           
	int                                                DamageRealPlayerAmount;                                   
	int                                                DamageMLDeliverAIAmount;                                  
	int                                                DamageMLAIAmount;                                         
	int                                                DamageBehaviorTreeDeliverAIAmount;                        
	int                                                DamageBehaviorTreeAIAmount;                               
	int                                                DamageFromRealPlayerAmount;                               
	int                                                DamageFromMLDeliverAIAmount;                              
	int                                                DamageFromMLAIAmount;                                     
	int                                                DamageFromBehaviorTreeDeliverAIAmount;                    
	int                                                DamageFromBehaviorTreeAIAmount;                           
	int                                                AssistCount;                                              
	int                                                AirDropCount;                                             
	int                                                PickUpItemTimes;                                          
	int                                                RescueCount;                                              
	int                                                ShotWeaponCount;                                          
	int                                                PlayerHatID;                                              
	int                                                PlayerMaskID;                                             
	int                                                PlayerShirtID;                                            
	int                                                PlayerPantsID;                                            
	int                                                MedicineEnergyCnt;                                        
	int                                                MedicineAdrenalineCnt;                                    
	int                                                MedicinePainkillerCnt;                                    
	int                                                MedicineBandageCnt;                                       
	int                                                MedicineFirstAidKitCnt;                                   
	int                                                MedicineTreatmentCnt;                                     
	float                                              OccupiedCapacity;                                         
	float                                              ArmorPoints;                                              
	int                                                TeammateNum;                                              
	int                                                MainWeaponId1;                                            
	int                                                MainWeaponBulletId1;                                      
	int                                                MainWeaponBulletNum1;                                     
	int                                                MainWeaponId2;                                            
	int                                                MainWeaponBulletId2;                                      
	int                                                MainWeaponBulletNum2;                                     
	int                                                SubWeaponID;                                              
	int                                                SubWeaponBulletId;                                        
	int                                                SubWeaponBulletNum;                                       
	unsigned char                                      UnknownData06[0x4];                                       
	struct FString                                     MrpcsFlowStr;                                             
};



struct FDSCircleFlow
{
	uint32_t                                           GameStartTime;                                            
	uint32_t                                           NewCircleBornTime;                                        
	int                                                NewCircleCount;                                           
	int                                                RecoveryTotal;                                            
	int                                                EnergyRecoveryTotal;                                      
	int                                                PlayerMoveDis;                                            
	int                                                PlayerDriveMoveDis;                                       
	int                                                PlayerDriveMoveTime;                                      
	int                                                PlayerCreepMoveTime;                                      
	int                                                RecordType;                                               
};



struct FRecoveryItemCount
{
	uint32_t                                           ItemId;                                                   
	uint32_t                                           Count;                                                    
};



struct FClientCircleFlow
{
	int64_t                                            ClientStartTime;                                          
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     PicUrl;                                                   
	uint32_t                                           GameStartTime;                                            
	uint32_t                                           NewCircleBornTime;                                        
	int                                                NewCirclePositionX;                                       
	int                                                NewCirclePositionY;                                       
	int                                                NewCirclePositionRadius;                                  
	int                                                NewCircleCount;                                           
	int                                                PlayerPositionX;                                          
	int                                                PlayerPositionY;                                          
	int                                                PlayerPositionZ;                                          
	int                                                PlayerHP;                                                 
	uint32_t                                           OldCircleMoveTime;                                        
	uint32_t                                           OldCircleMoveEndTime;                                     
	uint32_t                                           PlayerOutTime;                                            
	int                                                CirclePoisonCount;                                        
	int                                                CirclePoisonMin;                                          
	int                                                CirclePoisonMax;                                          
	int                                                CirclePoisonAvg;                                          
	int                                                CirclePoisonTotal;                                        
	int                                                CirclePoisonDrop;                                         
	int                                                CirclePoisonDead;                                         
	int                                                RecoveryCount;                                            
	int                                                RecoveryMin;                                              
	int                                                RecoveryMax;                                              
	int                                                RecoveryTotal;                                            
	int                                                EnergyRecoveryCount;                                      
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FRecoveryItemCount>                  RecoveryItemCounts;                                       
	int                                                EnergyRecoveryMin;                                        
	int                                                EnergyRecoveryMax;                                        
	int                                                EnergyRecoveryTotal;                                      
	int                                                EnergyStartLv;                                            
	int                                                EnergyStartTime;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     EnergyItemUse;                                            
	int                                                EnergyLvTimeInfo;                                         
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     EnergyRunFastTime;                                        
	struct FString                                     EnergyRecoveryLvTimeInfo;                                 
	int                                                EnergyEndLv;                                              
	int                                                EnergyEndTime;                                            
	int                                                PlayerMoveDis;                                            
	int                                                PlayerSpeedMax;                                           
	int                                                PlayerSpeedAvg;                                           
	int                                                PlayerCarSpeedMax;                                        
	int                                                PlayerCarSpeedAvg;                                        
	int                                                PlayerSquatMoveDis;                                       
	int                                                PlayerSquatMoveTime;                                      
	int                                                PlayerCreepMoveDis;                                       
	int                                                PlayerCreepMoveTime;                                      
	int                                                PlayerRunMoveDis;                                         
	int                                                PlayerRunMoveTime;                                        
	int                                                PlayerDriveMoveDis;                                       
	int                                                PlayerDriveMoveTime;                                      
	int                                                PlayerCar;                                                
	int                                                PlayerCameraDistanceMax;                                  
	uint32_t                                           SecCircleFlowID;                                          
	int                                                RecordType;                                               
	unsigned char                                      AutoAimType;                                              
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                AutoAimTime;                                              
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<unsigned char>                              MrpcsFlowData;                                            
};



struct FJumpFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	int64_t                                            ClientStartTime;                                          
	int                                                MrpcsFlowcount_;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     UserName;                                                 
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData02[0x7];                                       
	struct FString                                     PicUrl;                                                   
	struct FString                                     MapName;                                                  
	int8_t                                             WeatherID;                                                
	unsigned char                                      UnknownData03[0x7];                                       
	int64_t                                            GameStartTime;                                            
	uint32_t                                           StartJumpTime;                                            
	uint32_t                                           EndJumpTime;                                              
	uint32_t                                           PlayerJumpTime;                                           
	uint32_t                                           PlayerOpenTime;                                           
	uint32_t                                           PlayerLandTime;                                           
	int                                                PlayerJumpPositionX;                                      
	int                                                PlayerJumpPositionY;                                      
	int                                                PlayerJumpPositionZ;                                      
	int                                                PlaneJumpPositionX;                                       
	int                                                PlaneJumpPositionY;                                       
	int                                                PlaneJumpPositionZ;                                       
	int                                                PlayerLandPositionX;                                      
	int                                                PlayerLandPositionY;                                      
	int                                                PlayerLandPositionZ;                                      
	uint32_t                                           PlayerLandDistance;                                       
	uint32_t                                           PlayerSpeedMax1;                                          
	uint32_t                                           PlayerSpeedMax2;                                          
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     AntsVoiceTeamID;                                          
	struct FString                                     AntsVoiceRoomID;                                          
	int                                                AntsVoiceTeamMemberID;                                    
	int                                                AntsVoiceRoomMemberID;                                    
	struct FString                                     FollowPlayerUID;                                          
	uint32_t                                           ExitFollowTime;                                           
	unsigned char                                      UnknownData05[0x4];                                       
};



struct FClientJumpFlow
{
	int64_t                                            ClientStartTime;                                          
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     MapName;                                                  
	int8_t                                             WeatherID;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	int64_t                                            GameStartTime;                                            
	uint32_t                                           StartJumpTime;                                            
	uint32_t                                           EndJumpTime;                                              
	uint32_t                                           PlayerJumpTime;                                           
	uint32_t                                           PlayerOpenTime;                                           
	uint32_t                                           PlayerLandTime;                                           
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     FollowPlayerUID;                                          
	uint32_t                                           ExitFollowTime;                                           
	int                                                PlayerJumpPositionX;                                      
	int                                                PlayerJumpPositionY;                                      
	int                                                PlayerJumpPositionZ;                                      
	int                                                PlaneJumpPositionX;                                       
	int                                                PlaneJumpPositionY;                                       
	int                                                PlaneJumpPositionZ;                                       
	int                                                PlayerLandPositionX;                                      
	int                                                PlayerLandPositionY;                                      
	int                                                PlayerLandPositionZ;                                      
	uint32_t                                           PlayerLandDistance;                                       
	uint32_t                                           PlayerSpeedMax1;                                          
	uint32_t                                           PlayerSpeedMax2;                                          
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     AntsVoiceTeamID;                                          
	struct FString                                     AntsVoiceRoomID;                                          
	int                                                AntsVoiceTeamMemberID;                                    
	int                                                AntsVoiceRoomMemberID;                                    
};



struct FGameStartFlow
{
	struct FString                                     GameSvrId;                                                
	int64_t                                            dtEventTime;                                              
	struct FString                                     GameAppID;                                                
	struct FString                                     OpenID;                                                   
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	int64_t                                            ClientStartTime;                                          
	int                                                MrpcsFlowcount_;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     UserName;                                                 
	uint64_t                                           RoleID;                                                   
	int8_t                                             RoleType;                                                 
	unsigned char                                      UnknownData02[0x7];                                       
	struct FString                                     PicUrl;                                                   
	uint32_t                                           SvrUserMoney1;                                            
	uint32_t                                           SvrUserMoney2;                                            
	uint32_t                                           SvrUserMoney3;                                            
	int                                                SvrRoundRank;                                             
	int                                                SvrRoundRank1;                                            
	int                                                SvrRoundRank2;                                            
	int                                                SvrRoundRank3;                                            
	unsigned char                                      UnknownData03[0x4];                                       
	uint64_t                                           SvrRoleID;                                                
	int8_t                                             SvrRoleType;                                              
	unsigned char                                      UnknownData04[0x7];                                       
	struct FString                                     SvrMapName;                                               
	int8_t                                             SvrWeatherid;                                             
	unsigned char                                      UnknownData05[0x7];                                       
	struct FString                                     SvrItemList;                                              
	int64_t                                            WaitStartTime;                                            
	int64_t                                            WaitEndTime;                                              
	struct FString                                     MapName;                                                  
	int8_t                                             WeatherID;                                                
	unsigned char                                      UnknownData06[0x7];                                       
	struct FString                                     ItemList;                                                 
	int8_t                                             GameType;                                                 
	int8_t                                             TeamType;                                                 
	unsigned char                                      AutoMatch;                                                
	unsigned char                                      PlayerCount;                                              
	int                                                TeamID;                                                   
	struct FString                                     TeamPlayer1;                                              
	struct FString                                     TeamPlayer2;                                              
	struct FString                                     TeamPlayer3;                                              
	int                                                TeamPlayer1Rank;                                          
	int                                                TeamPlayer2Rank;                                          
	int                                                TeamPlayer3Rank;                                          
	uint32_t                                           SecGameStartFlowFlowID;                                   
	struct FString                                     AntsVoiceTeamID;                                          
	struct FString                                     AntsVoiceRoomID;                                          
	int                                                AntsVoiceTeamMemberID;                                    
	int                                                AntsVoiceRoomMemberID;                                    
	struct FString                                     IP;                                                       
};



struct FClientGameStartFlow
{
	int64_t                                            ClientStartTime;                                          
	TArray<int>                                        MrpcsFlow;                                                
	struct FString                                     MapName;                                                  
	int8_t                                             WeatherID;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     ItemList;                                                 
	int8_t                                             TeamType;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                TeamID;                                                   
	struct FString                                     TeamPlayer1;                                              
	struct FString                                     TeamPlayer2;                                              
	struct FString                                     TeamPlayer3;                                              
	uint32_t                                           SecGameStartFlowFlowID;                                   
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     AntsVoiceTeamID;                                          
	struct FString                                     AntsVoiceRoomID;                                          
	int                                                AntsVoiceTeamMemberID;                                    
	int                                                AntsVoiceRoomMemberID;                                    
};



struct FIntPosition3D
{
	int                                                X;                                                        
	int                                                Y;                                                        
	int                                                Z;                                                        
};



struct FPosAndTime
{
	int                                                LocationX;                                                
	int                                                LocationY;                                                
	int                                                LocationZ;                                                
	int                                                Time;                                                     
	uint64_t                                           PlayerState;                                              
};



struct FPlayerRouteFlow
{
	struct FString                                     GameAppID;                                                
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     OpenID;                                                   
	uint64_t                                           UID;                                                      
	uint64_t                                           BattleID;                                                 
	int8_t                                             SeasonID;                                                 
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     PlayerName;                                               
	TArray<struct FPosAndTime>                         Route;                                                    
	struct FPosAndTime                                 End;                                                      
};



struct FVehicleSpotDebugData
{
	struct FString                                     VehicleSpotName;                                          
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            
	unsigned char                                      UnknownData00[0x6];                                       
	struct FString                                     VehiclePath;                                              
	float                                              VehicleLocationX;                                         
	float                                              VehicleLocationY;                                         
	float                                              VehicleLocationZ;                                         
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	unsigned char                                      UnknownData00[0x6];                                       
	struct FString                                     AreaName;                                                 
	struct FString                                     SpotDefaultTag;                                           
	bool                                               NearItem;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector                                     Location;                                                 
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	bool                                               RandomRot;                                                
	unsigned char                                      UnknownData02[0x3];                                       
	struct FRotator                                    Rotator;                                                  
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FCharacterAnimStartAsynLoadParam
{
	TEnumAsByte<ECharacterAnimTypeAsynLoaded>          AnimType;                                                 
	TEnumAsByte<ECharacterViewType>                    CharacterViewType;                                        
};



struct FCharacterAnimAsynLoadCompleteParam
{
	TEnumAsByte<ECharacterAnimTypeAsynLoaded>          AnimTypeAsynLoaded;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     AnimsCatorgeryName;                                       
	TEnumAsByte<ECharacterViewType>                    CharacterViewType;                                        
	unsigned char                                      UnknownData01[0x7];                                       
	unsigned char                                      UnknownData02[0x28];                                      
};



struct FSpawnItemStat
{
	struct FString                                     ItemCategory;                                             
	struct FString                                     ItemValue;                                                
	int                                                Together;                                                 
	int                                                Count;                                                    
	struct FString                                     TriggerName;                                              
};



struct FDamageMatchGroup
{
	TMap<int, float>                                   DamageMatchPairs;                                         
};



struct FLevelSequenceConfig
{
	struct FSoftClassPath                              SequenceActorTemplate;                                    
	unsigned char                                      UnknownData00[0x28];                                      
	float                                              LevelSequenceDuration;                                    
	unsigned char                                      UnknownData01[0x4];                                       
	TMap<struct FString, struct FString>               TrackBindingInfos;                                        
	TMap<struct FString, struct FSoftObjectPath>       TrackBindingObjects;                                      
};



struct FCharSpecialLevelSequenceData
{
	TEnumAsByte<ECharSpecialLevelSequenceType>         LevelSequenceType;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	struct FLevelSequenceConfig                        LevelSequenceConfig;                                      
};



struct FUAEMovieSceneSequenceControlTemplate : public FMovieSceneEvalTemplate
{
	bool                                               bHideUI;                                                  
	bool                                               bPrimitiveTrackingEnabled;                                
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FPlayerAMInfo
{
	uint64_t                                           PlayerUID;                                                
	TArray<struct FBattleItemSpectatingData>           PlayerCollectItem;                                        
	TArray<struct FBattleItemSpectatingData>           PlayerUseItem;                                            
};



struct FPlayerSightUsageInfoCompress
{
	TArray<unsigned char>                              TotalUseTime;                                             
	unsigned char                                      Index;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FPlayerSightUsageInfo
{
	TArray<float>                                      LastStartTime;                                            
	TArray<int>                                        TotalUsage;                                               
};



struct FPlayerStatisticForPCOB
{
	TArray<int>                                        StatisticInt;                                             
	TArray<float>                                      StatisticFloat;                                           
};



struct FGatherPlayerInfoForPCOB
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FGatherPlayerFloatInfoForPCOB : public FGatherPlayerInfoForPCOB
{
	float                                              Num;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGatherPlayerIntInfoForPCOB : public FGatherPlayerInfoForPCOB
{
	int                                                Num;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPlayerFiringList
{
	uint64_t                                           PlayerFiringIndexLow;                                     
	uint64_t                                           PlayerFiringIndexHigh;                                    
};



struct FPlayerBreathInfoList
{
	uint64_t                                           PlayerIndexLow;                                           
	uint64_t                                           PlayerIndexHigh;                                          
	TArray<unsigned char>                              BreathList;                                               
};



struct FPlayerKeyIndexForSort
{
	uint32_t                                           PlayerKey;                                                
	uint32_t                                           Index;                                                    
};



struct FPlanAGPlayerReportData
{
	uint64_t                                           UID;                                                      
	int                                                TeamID;                                                   
	int                                                TwoTargetScore;                                           
	int                                                FiveTargetScore;                                          
	int                                                FourColorTargetScore;                                     
	int                                                GophersTargetScore;                                       
	int                                                DishTargetScore;                                          
	int                                                AirdropTargetScore;                                       
	int                                                SpeedUpTargetNum;                                         
	int                                                BulletNum;                                                
	float                                              CurrentCityShootingAccuracy;                              
};



struct FPlanAGTeamReportData
{
	int                                                TeamID;                                                   
	int                                                TwoTargetScore;                                           
	int                                                FiveTargetScore;                                          
	int                                                FourColorTargetScore;                                     
	int                                                GophersTargetScore;                                       
	int                                                DishTargetScore;                                          
	int                                                AirdropTargetScore;                                       
	int                                                SpeedUpTargetNum;                                         
	int                                                CurrentCityTwoTargetScore;                                
	int                                                CurrentCityFiveTargetScore;                               
	int                                                CurrentCityFourColorTargetScore;                          
	int                                                CurrentCityGophersTargetScore;                            
	int                                                CurrentCityDishTargetScore;                               
	int                                                CurrentCityAirdropTargetScore;                            
	int                                                CurrentCitySpeedUpTargetNum;                              
	float                                              ShootingAccuracy;                                         
	float                                              TeamChecktime;                                            
	int                                                TeamOrder;                                                
	float                                              CurrentCityStayTime;                                      
	float                                              OverTime;                                                 
	TArray<float>                                      StageCompletedTime;                                       
	TArray<float>                                      EnterStageTimeStamp;                                      
	int                                                VehicleResetNum;                                          
	int                                                Fuel;                                                     
	int                                                FuelMax;                                                  
	int                                                Speed;                                                    
	int                                                RefuelingTime;                                            
	float                                              CompletionProgress;                                       
};



struct FTeamInfoInOB
{
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     TeamName;                                                 
	bool                                               IsShowLogo;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     LogoPicUrl;                                               
	int                                                KillNum;                                                  
	int                                                LiveMemberNum;                                            
};



struct FPlayerAfterMatchAPI
{
	uint32_t                                           PlayerKey;                                                
	int                                                InDamage;                                                 
	int                                                Heal;                                                     
	int                                                HeadShotNum;                                              
	int                                                SurvivalTime;                                             
	int                                                DriveDistance;                                            
	int                                                marchDistance;                                            
	int                                                Assists;                                                  
	float                                              OutsideBlueCircleTime;                                    
	int                                                Knockouts;                                                
	int                                                rescueTimes;                                              
	int                                                UseSmokeGrenadeNum;                                       
	int                                                UseFragGrenadeNum;                                        
	int                                                UseBurnGrenadeNum;                                        
	int                                                UseFlashGrenadeNum;                                       
	int                                                PoisonTotalDamage;                                        
	int                                                UseSelfRescueTime;                                        
	int                                                UseEmergencyCallTime;                                     
};



struct FPlayerRealTimeAPI
{
	uint32_t                                           PlayerKey;                                                
	int                                                AIKillNum;                                                
	int                                                GotAirDropNum;                                            
	int                                                MaxKillDistance;                                          
	int                                                Damage;                                                   
	int                                                KillNumInVehicle;                                         
	int                                                KillNumByGrenade;                                         
	int                                                Rank;                                                     
	bool                                               IsOutsideBlueCircle;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BossKillNum;                                              
};



struct FUAESpotDataSerialize
{
	unsigned char                                      UnknownData00[0x210];                                     
};



struct FUAEWindowPackageData
{
	TWeakObjectPtr<class AUAEHouseActor>               HouseActor;                                               
	class UClass*                                      WindowClass;                                              
	struct FUAEWindowRepData                           WindowData;                                               
};



struct FTotalWeaponReport
{
	struct FString                                     BattleID;                                                 
	int                                                BattleMode;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FOnePlayerWeapon>                    TotalWeaponRecord;                                        
};



struct FWeatherLevelInfo
{
	int                                                WeatherID;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     WeatherLevelName;                                         
	float                                              WeatherTime;                                              
	int                                                WeatherSyncCount;                                         
};

}

