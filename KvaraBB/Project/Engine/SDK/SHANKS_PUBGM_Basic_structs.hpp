#pragma once


 
namespace SDK
{





enum class EAttrOperator : uint8_t
{
	EAttrOperator__Plus            = 0,
	EAttrOperator__Multiply        = 1,
	EAttrOperator__Set             = 2,
	EAttrOperator__EAttrOperator_MAX = 3
};



enum class EAttrModifyRefType : uint8_t
{
	EAttrModifyRefType__Val        = 0,
	EAttrModifyRefType__Rate       = 1,
	EAttrModifyRefType__Abs        = 2,
	EAttrModifyRefType__Set        = 3,
	EAttrModifyRefType__EAttrModifyRefType_MAX = 4
};



enum class EAttrVariableType : uint8_t
{
	EAttrVariableType__Byte        = 0,
	EAttrVariableType__Int         = 1,
	EAttrVariableType__Float       = 2,
	EAttrVariableType__Num         = 3,
	EAttrVariableType__EAttrVariableType_MAX = 4
};



enum class EActorRegAttrTableType : uint8_t
{
	EActorRegAttrTableType__EATY_NONE = 0,
	EActorRegAttrTableType__EATY_PLAYER = 1,
	EActorRegAttrTableType__EATY_ZOMBIE = 2,
	EActorRegAttrTableType__EATY_WEAPON = 3,
	EActorRegAttrTableType__EATY_VEHICLE = 4,
	EActorRegAttrTableType__EATY_MAX = 5
};



enum class EBattleItemDropReason : uint8_t
{
	EBattleItemDropReason__Manually = 0,
	EBattleItemDropReason__Associated = 1,
	EBattleItemDropReason__AutoEquipAndDrop = 2,
	EBattleItemDropReason__AutoEquipFailed = 3,
	EBattleItemDropReason__CapacityExceeded = 4,
	EBattleItemDropReason__UsedUp  = 5,
	EBattleItemDropReason__Force   = 6,
	EBattleItemDropReason__Replaced = 7,
	EBattleItemDropReason__VehicleGroup = 8,
	EBattleItemDropReason__Throwaway = 9,
	EBattleItemDropReason__WeaponExchangeDropAttach = 10,
	EBattleItemDropReason__EBattleItemDropReason_MAX = 11
};



enum class EBattleItemAdditionalDataType : uint8_t
{
	EBattleItemAdditionalDataType__None = 0,
	EBattleItemAdditionalDataType__TargetLogicSocket = 1,
	EBattleItemAdditionalDataType__Weapon_Durability_Backpack = 2,
	EBattleItemAdditionalDataType__Weapon_BulletNum_Backpack = 3,
	EBattleItemAdditionalDataType__Weapon_UpgradeInfo_Backpack = 4,
	EBattleItemAdditionalDataType__RemainingDuability = 5,
	EBattleItemAdditionalDataType__EquipmentAvatar = 6,
	EBattleItemAdditionalDataType__WeaponAvatar = 7,
	EBattleItemAdditionalDataType__CustomColor = 8,
	EBattleItemAdditionalDataType__CustomPattern = 9,
	EBattleItemAdditionalDataType__CurElectricty = 10,
	EBattleItemAdditionalDataType__AutoUse = 11,
	EBattleItemAdditionalDataType__LimitPlayerKey = 12,
	EBattleItemAdditionalDataType__MaxElectricty = 13,
	EBattleItemAdditionalDataType__ConsumeSpeed = 14,
	EBattleItemAdditionalDataType__ChipSlot1 = 15,
	EBattleItemAdditionalDataType__ChipSlot2 = 16,
	EBattleItemAdditionalDataType__ChipSlot3 = 17,
	EBattleItemAdditionalDataType__CustomNum = 18,
	EBattleItemAdditionalDataType__AUTO_EQUIP_ARMOE_ATTACHMENT = 19,
	EBattleItemAdditionalDataType__AUTO_EQUIP_WEAPON_ATTACHMENT = 20,
	EBattleItemAdditionalDataType__RollOnDead = 21,
	EBattleItemAdditionalDataType__AutoEquipFromBackpack = 22,
	EBattleItemAdditionalDataType__BUsing = 23,
	EBattleItemAdditionalDataType__IsEquiping = 24,
	EBattleItemAdditionalDataType__AvatarItem = 25,
	EBattleItemAdditionalDataType__Affix = 26,
	EBattleItemAdditionalDataType__VehicleHPRatio = 27,
	EBattleItemAdditionalDataType__VehicleFuelRatio = 28,
	EBattleItemAdditionalDataType__VehicleEnergyRatio = 29,
	EBattleItemAdditionalDataType__ExtraData01 = 30,
	EBattleItemAdditionalDataType__ExtraData02 = 31,
	EBattleItemAdditionalDataType__OwnerInfo = 32,
	EBattleItemAdditionalDataType__DropPlanInfo = 33,
	EBattleItemAdditionalDataType__PveAffix = 34,
	EBattleItemAdditionalDataType__ShapeInfo = 35,
	EBattleItemAdditionalDataType__SearchResult = 36,
	EBattleItemAdditionalDataType__LuckyEggFreshSpawn = 37,
	EBattleItemAdditionalDataType__ItemSource = 38,
	EBattleItemAdditionalDataType__AmmoItemSource = 39,
	EBattleItemAdditionalDataType__GunPoint = 40,
	EBattleItemAdditionalDataType__Grip = 41,
	EBattleItemAdditionalDataType__Magazine = 42,
	EBattleItemAdditionalDataType__Gunstock = 43,
	EBattleItemAdditionalDataType__OpticalSight = 44,
	EBattleItemAdditionalDataType__MasterGun = 45,
	EBattleItemAdditionalDataType__Ammo = 46,
	EBattleItemAdditionalDataType__Pendant = 47,
	EBattleItemAdditionalDataType__AngledOpticalSight = 48,
	EBattleItemAdditionalDataType__ACCore = 49,
	EBattleItemAdditionalDataType__Bezel = 50,
	EBattleItemAdditionalDataType__GunLock = 51,
	EBattleItemAdditionalDataType__TacticalAttach = 52,
	EBattleItemAdditionalDataType__EBattleItemAdditionalDataType_MAX = 53
};



enum class EAnimLayerType : uint8_t
{
	EAnimLayer_Char                = 0,
	EAnimLayer_Avatar              = 1,
	EAnimLayer_AvatarAdditive      = 2,
	EAnimLayer_AvatarSpecialMove   = 3,
	EAnimLayer_Weapon              = 4,
	EAnimLayer_WeaponAdditive      = 5,
	EAnimLayer_WeaponAdditive2     = 6,
	EAnimLayer_WeaponDIYAvatar     = 7,
	EAnimLayer_WeaponDIYAvatarAdditive = 8,
	EAnimLayer_Skill               = 9,
	EAnimLayer_SkillAdditive       = 10,
	EAnimLayer_Skill2              = 11,
	EAnimLayer_Max                 = 12
};



enum class EBattleItemUseReason : uint8_t
{
	EBattleItemUseReason__Manually = 0,
	EBattleItemUseReason__Associated = 1,
	EBattleItemUseReason__AutoEquipAndDrop = 2,
	EBattleItemUseReason__Swapped  = 3,
	EBattleItemUseReason__Initial  = 4,
	EBattleItemUseReason__EquipAndRecovery = 5,
	EBattleItemUseReason__SwappedWithPackageWeapon = 6,
	EBattleItemUseReason__EquipAndRecoveryToSafetyBox = 7,
	EBattleItemUseReason__SkillUse = 8,
	EBattleItemUseReason__EBattleItemUseReason_MAX = 9
};



enum class EItemStoreArea : uint8_t
{
	EItemStoreArea__InBag          = 0,
	EItemStoreArea__InSafetyBox    = 1,
	EItemStoreArea__EItemStoreArea_MAX = 2
};



enum class EBattleItemDisuseReason : uint8_t
{
	EBattleItemDisuseReason__Manually = 0,
	EBattleItemDisuseReason__Associated = 1,
	EBattleItemDisuseReason__Excluded = 2,
	EBattleItemDisuseReason__Swapped = 3,
	EBattleItemDisuseReason__Dropped = 4,
	EBattleItemDisuseReason__Force = 5,
	EBattleItemDisuseReason__Replace = 6,
	EBattleItemDisuseReason__VehicleGroup = 7,
	EBattleItemDisuseReason__PutBack = 8,
	EBattleItemDisuseReason__PutIntoSafetyBox = 9,
	EBattleItemDisuseReason__ReplacedAndPutBack = 10,
	EBattleItemDisuseReason__EBattleItemDisuseReason_MAX = 11
};



enum class EBattleItemPickupReason : uint8_t
{
	EBattleItemPickupReason__Manually = 0,
	EBattleItemPickupReason__Associated = 1,
	EBattleItemPickupReason__AutoPickup = 2,
	EBattleItemPickupReason__Initial = 3,
	EBattleItemPickupReason__ForceIntoBackpack = 4,
	EBattleItemPickupReason__AutoPickupAttachment = 5,
	EBattleItemPickupReason__SplitStack = 6,
	EBattleItemPickupReason__StorageBoxToBag = 7,
	EBattleItemPickupReason__FromStore = 8,
	EBattleItemPickupReason__EBattleItemPickupReason_MAX = 9
};



enum class EAttrModifyRecordType : uint8_t
{
	Record_None                    = 0,
	SetValue_Respone               = 1,
	SetValue_OnRepModSim           = 2,
	SetValue_CaculateAttr1         = 3,
	SetValue_CaculateAttr2         = 4,
	SetValue_ClampAttr             = 5,
	SetValue_InterfaceSet          = 6,
	SetValue_Lua                   = 7,
	Remove_DisableAttr             = 8,
	Remove_RemoveDynamic           = 9,
	Remove_OnRepDynamic            = 10,
	Modify_EnableAttrIndex         = 11,
	Modify_AddDynamic              = 12,
	EAttrModifyRecordType_MAX      = 13
};



enum class EAttrModifyChannel : uint8_t
{
	EAttrModifyChannel__SimulatedProxy = 0,
	EAttrModifyChannel__AutonomousProxy = 1,
	EAttrModifyChannel__Authority  = 2,
	EAttrModifyChannel__AllChannel = 3,
	EAttrModifyChannel__EAttrModifyChannel_MAX = 4
};



enum class EBattleItemClientPickupType : uint8_t
{
	EBattleItemClientPickupType__Defalut = 0,
	EBattleItemClientPickupType__ForceIntoBackpack = 1,
	EBattleItemClientPickupType__PickupIntoSafetyBox = 2,
	EBattleItemClientPickupType__EBattleItemClientPickupType_MAX = 3
};



enum class EColdModeItemType : uint8_t
{
	EColdModeItemType__firewood    = 0,
	EColdModeItemType__meat        = 1,
	EColdModeItemType__EColdModeItemType_MAX = 2
};



enum class EItemAttrs : uint8_t
{
	EItemAttrs__ItemAttr_CannotManualDrop = 0,
	EItemAttrs__ItemAttr_RespawnNotDrop = 1,
	EItemAttrs__ItemAttr_TransformNotDrop = 2,
	EItemAttrs__ItemAttr_NotAddInTombBox = 3,
	EItemAttrs__ItemAttr_CanCarryInBattle = 4,
	EItemAttrs__ItemAttr_CannotMoveToVehicleBackpack = 5,
	EItemAttrs__ItemAttr_MAX       = 6
};



enum class EBattleItemPickupRule : uint8_t
{
	EBattleItemPickupRule__All     = 0,
	EBattleItemPickupRule__Self    = 1,
	EBattleItemPickupRule__Team    = 2,
	EBattleItemPickupRule__Group   = 3,
	EBattleItemPickupRule__AllCanSeeSelfCanPickUp = 4,
	EBattleItemPickupRule__None    = 5,
	EBattleItemPickupRule__EBattleItemPickupRule_MAX = 6
};



enum class EBattleItemEquiptType : uint8_t
{
	EBattleItemEquiptType__Bag     = 0,
	EBattleItemEquiptType__Helmet  = 1,
	EBattleItemEquiptType__Armor   = 2,
	EBattleItemEquiptType__EBattleItemEquiptType_MAX = 3
};



enum class ECommonMessageDataValueType : uint8_t
{
	ECommonMessageDataValueType__None = 0,
	ECommonMessageDataValueType__Bool = 1,
	ECommonMessageDataValueType__Byte = 2,
	ECommonMessageDataValueType__Int32 = 3,
	ECommonMessageDataValueType__Int64 = 4,
	ECommonMessageDataValueType__Float = 5,
	ECommonMessageDataValueType__Vector2D = 6,
	ECommonMessageDataValueType__Vector = 7,
	ECommonMessageDataValueType__Vector4 = 8,
	ECommonMessageDataValueType__IntPoint = 9,
	ECommonMessageDataValueType__IntVector = 10,
	ECommonMessageDataValueType__Rotator = 11,
	ECommonMessageDataValueType__Quat = 12,
	ECommonMessageDataValueType__Transform = 13,
	ECommonMessageDataValueType__LinearColor = 14,
	ECommonMessageDataValueType__Color = 15,
	ECommonMessageDataValueType__Name = 16,
	ECommonMessageDataValueType__String = 17,
	ECommonMessageDataValueType__Struct = 18,
	ECommonMessageDataValueType__Object = 19,
	ECommonMessageDataValueType__Actor = 20,
	ECommonMessageDataValueType__Class = 21,
	ECommonMessageDataValueType__Array = 22,
	ECommonMessageDataValueType__ECommonMessageDataValueType_MAX = 23
};



enum class EStackModifyValueType : uint8_t
{
	EStackModifyValueType__None    = 0,
	EStackModifyValueType__Bool    = 1,
	EStackModifyValueType__Byte    = 2,
	EStackModifyValueType__Int32   = 3,
	EStackModifyValueType__Int64   = 4,
	EStackModifyValueType__Float   = 5,
	EStackModifyValueType__Vector2D = 6,
	EStackModifyValueType__Vector  = 7,
	EStackModifyValueType__Vector4 = 8,
	EStackModifyValueType__IntPoint = 9,
	EStackModifyValueType__IntVector = 10,
	EStackModifyValueType__Rotator = 11,
	EStackModifyValueType__Quat    = 12,
	EStackModifyValueType__Transform = 13,
	EStackModifyValueType__LinearColor = 14,
	EStackModifyValueType__Color   = 15,
	EStackModifyValueType__Name    = 16,
	EStackModifyValueType__String  = 17,
	EStackModifyValueType__Struct  = 18,
	EStackModifyValueType__EStackModifyValueType_MAX = 19
};



enum class EItemAssociationType : uint8_t
{
	EItemAssociationType__None     = 0,
	EItemAssociationType__Parent   = 1,
	EItemAssociationType__ChipSlot1 = 2,
	EItemAssociationType__ChipSlot2 = 3,
	EItemAssociationType__ChipSlot3 = 4,
	EItemAssociationType__AssociationName = 5,
	EItemAssociationType__Pendant  = 6,
	EItemAssociationType__Weapon_Durability_Backpack = 7,
	EItemAssociationType__EItemAssociationType_MAX = 8
};



enum class ESkillPropSubType : uint8_t
{
	ESkillPropSubType_None         = 0,
	ESkillPropSubType              = 1,
	ESkillPropSubType_MAX          = 2
};



enum class EBuffConditionFalseExecutePolicy : uint8_t
{
	EBuffConditionFalseExecutePolicy__None = 0,
	EBuffConditionFalseExecutePolicy__EndAction = 1,
	EBuffConditionFalseExecutePolicy__EBuffConditionFalseExecutePolicy_MAX = 2
};



enum class EBuffSharedType : uint8_t
{
	EBuffSharedType__None          = 0,
	EBuffSharedType__Target        = 1,
	EBuffSharedType__Boolean       = 2,
	EBuffSharedType__UInt8         = 3,
	EBuffSharedType__Float         = 4,
	EBuffSharedType__Int32         = 5,
	EBuffSharedType__Vector        = 6,
	EBuffSharedType__Rotator       = 7,
	EBuffSharedType__Name          = 8,
	EBuffSharedType__String        = 9,
	EBuffSharedType__EBuffSharedType_MAX = 10
};



enum class EBuffConditionEvalMode : uint8_t
{
	EBuffConditionEvalMode__EveryTime = 0,
	EBuffConditionEvalMode__OnChanged = 1,
	EBuffConditionEvalMode__EBuffConditionEvalMode_MAX = 2
};



enum class EDeviceLevel : uint8_t
{
	EDeviceLevel__DeviceLevel_Low  = 0,
	EDeviceLevel__DeviceLevel_Middle = 1,
	EDeviceLevel__DeviceLevel_Hight = 2,
	EDeviceLevel__DeviceLevel_MAX  = 3
};



enum class EBuffEnabledRole : uint8_t
{
	EBuffEnabledRole__ROLE_None    = 0,
	EBuffEnabledRole__ROLE_SimulatedProxy = 1,
	EBuffEnabledRole__ROLE_AutonomousProxy = 2,
	EBuffEnabledRole__ROLE_Authority = 3,
	EBuffEnabledRole__ROLE_Client  = 4,
	EBuffEnabledRole__Role_AutonomousAuthority = 5,
	EBuffEnabledRole__Role_AuthoritySimulated = 6,
	EBuffEnabledRole__EBuffEnabledRole_MAX = 7
};



enum class EBuffClientSyncType : uint8_t
{
	EBuffClientSyncType__None      = 0,
	EBuffClientSyncType__All       = 1,
	EBuffClientSyncType__Autonomous = 2,
	EBuffClientSyncType__EBuffClientSyncType_MAX = 3
};



enum class EBuffConditionAndOr : uint8_t
{
	EBuffConditionAndOr__And       = 0,
	EBuffConditionAndOr__Or        = 1,
	EBuffConditionAndOr__EBuffConditionAndOr_MAX = 2
};



enum class EBuffConditionExecuteTimeType : uint8_t
{
	EBuffConditionExecuteTimeType__FirstTime = 0,
	EBuffConditionExecuteTimeType__EveryTime = 1,
	EBuffConditionExecuteTimeType__EBuffConditionExecuteTimeType_MAX = 2
};



enum class EBuffConditionFalseExecuteTypeNew : uint8_t
{
	EBuffConditionFalseExecuteTypeNew__None = 0,
	EBuffConditionFalseExecuteTypeNew__EndAction = 1,
	EBuffConditionFalseExecuteTypeNew__EBuffConditionFalseExecuteTypeNew_MAX = 2
};



enum class EBuffConditionFalseExecuteType : uint8_t
{
	EBuffConditionFalseExecuteType__None = 0,
	EBuffConditionFalseExecuteType__Disabled = 1,
	EBuffConditionFalseExecuteType__DisabledEnd = 2,
	EBuffConditionFalseExecuteType__EBuffConditionFalseExecuteType_MAX = 3
};



enum class EBuffConditionTrueExecuteType : uint8_t
{
	EBuffConditionTrueExecuteType__Enabled = 0,
	EBuffConditionTrueExecuteType__ReAction = 1,
	EBuffConditionTrueExecuteType__EBuffConditionTrueExecuteType_MAX = 2
};



enum class EBuffConditionInitializeType : uint8_t
{
	EBuffConditionInitializeType__None = 0,
	EBuffConditionInitializeType__Disabled = 1,
	EBuffConditionInitializeType__DisabledWhenFalse = 2,
	EBuffConditionInitializeType__EBuffConditionInitializeType_MAX = 3
};



enum class EBuffTargetSubType : uint8_t
{
	EBuffTargetSubType__EBuffTargetSubType_Other = 0,
	EBuffTargetSubType__EBuffTargetSubType_Rifle = 1,
	EBuffTargetSubType__EBuffTargetSubType_SingleShotSniper = 2,
	EBuffTargetSubType__EBuffTargetSubType_BurstShotSniper = 3,
	EBuffTargetSubType__EBuffTargetSubType_Submachine = 4,
	EBuffTargetSubType__EBuffTargetSubType_ShotGun = 5,
	EBuffTargetSubType__EBuffTargetSubType_MachineGun = 6,
	EBuffTargetSubType__EBuffTargetSubType_Pistol = 7,
	EBuffTargetSubType__EBuffTargetSubType_Melee = 8,
	EBuffTargetSubType__EBuffTargetSubType_Crossbow = 9,
	EBuffTargetSubType__EBuffTargetSubType_All = 10,
	EBuffTargetSubType__EBuffTargetSubType_MAX = 11
};



enum class EBuffShowInUIType : uint8_t
{
	EBuffShowInUIType__None        = 0,
	EBuffShowInUIType__DurationTime = 1,
	EBuffShowInUIType__CDTime      = 2,
	EBuffShowInUIType__EBuffShowInUIType_MAX = 3
};



enum class EBuffTargetSocketType : uint8_t
{
	EBuffTargetSocketType__Character = 0,
	EBuffTargetSocketType__Weapon  = 1,
	EBuffTargetSocketType__World   = 2,
	EBuffTargetSocketType__Vehicle = 3,
	EBuffTargetSocketType__EBuffTargetSocketType_MAX = 4
};



enum class EBuffTargetType : uint8_t
{
	EBuffTargetType__Character     = 0,
	EBuffTargetType__Weapon        = 1,
	EBuffTargetType__Player        = 2,
	EBuffTargetType__Monster       = 3,
	EBuffTargetType__MonsterPlayer = 4,
	EBuffTargetType__Vehicle       = 5,
	EBuffTargetType__AllWeapons    = 6,
	EBuffTargetType__EBuffTargetType_MAX = 7
};



enum class EBuffReActionType : uint8_t
{
	EBuffReActionType__None        = 0,
	EBuffReActionType__OverWOrAddL = 1,
	EBuffReActionType__ResetTime   = 2,
	EBuffReActionType__ResetLayer  = 3,
	EBuffReActionType__LayerChange = 4,
	EBuffReActionType__InitWeapon  = 5,
	EBuffReActionType__EBuffReActionType_MAX = 6
};



enum class EBuffRefreshType : uint8_t
{
	EBuffRefreshType__None         = 0,
	EBuffRefreshType__ResetTime    = 1,
	EBuffRefreshType__ResetTimeOnOverFlow = 2,
	EBuffRefreshType__ResetLayerOnOverFlow = 3,
	EBuffRefreshType__ResetAllOnOverFlow = 4,
	EBuffRefreshType__AppendTime   = 5,
	EBuffRefreshType__EBuffRefreshType_MAX = 6
};



enum class EMultiSkillHandleType : uint8_t
{
	EMultiSkillHandleType__UseNewer = 0,
	EMultiSkillHandleType__UseOlder = 1,
	EMultiSkillHandleType__StackEffect = 2,
	EMultiSkillHandleType__RefreshOlder = 3,
	EMultiSkillHandleType__EMultiSkillHandleType_MAX = 4
};



enum class EMultiCauserHandleType : uint8_t
{
	EMultiCauserHandleType__UseNewer = 0,
	EMultiCauserHandleType__UseOlder = 1,
	EMultiCauserHandleType__StackEffect = 2,
	EMultiCauserHandleType__RefreshOlder = 3,
	EMultiCauserHandleType__EMultiCauserHandleType_MAX = 4
};



enum class EBuffTargetSourceType : uint8_t
{
	EBuffTargetSourceType__Self    = 0,
	EBuffTargetSourceType__PrevActionSet = 1,
	EBuffTargetSourceType__AreaOfTeammate = 2,
	EBuffTargetSourceType__AreaOfMonster = 3,
	EBuffTargetSourceType__Causer  = 4,
	EBuffTargetSourceType__SelfAndAreaOfTeammate = 5,
	EBuffTargetSourceType__EBuffTargetSourceType_MAX = 6
};



enum class ESTExtraNetPriorityIssueID : uint8_t
{
	ESTExtraNetPriorityIssueID__kNone = 0,
	ESTExtraNetPriorityIssueID__kMove = 1,
	ESTExtraNetPriorityIssueID__kStateChange = 2,
	ESTExtraNetPriorityIssueID__ESTExtraNetPriorityIssueID_MAX = 3
};



enum class ESTExtraNetPriorityFlags : uint8_t
{
	ESTExtraNetPriorityFlags__kPriority1 = 0,
	ESTExtraNetPriorityFlags__kPriority2 = 1,
	ESTExtraNetPriorityFlags__kPriority3 = 2,
	ESTExtraNetPriorityFlags__kPriority4 = 3,
	ESTExtraNetPriorityFlags__kMaxNum = 4,
	ESTExtraNetPriorityFlags__kPriorityNormal = 5,
	ESTExtraNetPriorityFlags__ESTExtraNetPriorityFlags_MAX = 6
};



enum class ETickOptimizationAnimUROMode : uint8_t
{
	ETickOptimizationAnimUROMode__ScreenSize = 0,
	ETickOptimizationAnimUROMode__LOD = 1,
	ETickOptimizationAnimUROMode__MinLOD = 2,
	ETickOptimizationAnimUROMode__ETickOptimizationAnimUROMode_MAX = 3
};



enum class ETickOptimizationDistanceMode : uint8_t
{
	ETickOptimizationDistanceMode__None = 0,
	ETickOptimizationDistanceMode__Sphere = 1,
	ETickOptimizationDistanceMode__ETickOptimizationDistanceMode_MAX = 2
};



enum class ELostConnectionToDSReason : uint8_t
{
	ELostConnectionToDSReason__LostConnectionToDSReason_None = 0,
	ELostConnectionToDSReason__LostConnectionToDSReason_TravelFailure_Default = 1,
	ELostConnectionToDSReason__LostConnectionToDSReason_LocalConnectionLost = 2,
	ELostConnectionToDSReason__LostConnectionToDSReason_LocalDetectedTimeout = 3,
	ELostConnectionToDSReason__LostConnectionToDSReason_NMTFailure_Default = 4,
	ELostConnectionToDSReason__LostConnectionToDSReason_MAX = 5
};



enum class ECommonCompare : uint8_t
{
	ECommonCompare__Greater        = 0,
	ECommonCompare__Equal          = 1,
	ECommonCompare__Less           = 2,
	ECommonCompare__GreaterOrEqual = 3,
	ECommonCompare__LessOrEqual    = 4,
	ECommonCompare__ECommonCompare_MAX = 5
};



enum class EAngleRotationDirectionType : uint8_t
{
	EAngleRotationDirectionType__EAutoMinAngle = 0,
	EAngleRotationDirectionType__ERight = 1,
	EAngleRotationDirectionType__ELeft = 2,
	EAngleRotationDirectionType__EAngleRotationDirectionType_MAX = 3
};









struct FAnimListData
{
	int                                                LayerID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	class UAnimationAsset*                             Animation;                                                
};



struct FAnimListMapValueData
{
	TArray<struct FAnimListData>                       AnimListMapValue;                                         
};



struct FItemDefineID
{
	int                                                Type;                                                     
	int                                                TypeSpecificID;                                           
	bool                                               bValidItem;                                               
	bool                                               bValidInstance;                                           
	unsigned char                                      UnknownData00[0x6];                                       
	uint64_t                                           InstanceID;                                               
};



struct FItemAssociation
{
	int                                                AssociationType;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	struct FItemDefineID                               AssociationTargetDefineID;                                
	class UItemHandleBase*                             AssociationTargetHandle;                                  
};



struct FBattleItemAdditionalData
{
	EBattleItemAdditionalDataType                      EDataType;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                IntData;                                                  
	struct FString                                     StringData;                                               
	float                                              FloatData;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           Uint64Data;                                               
};



struct FBattleItemUseTarget
{
	struct FItemDefineID                               TargetDefineID;                                           
	int                                                TargetAssociationType;                                    
	unsigned char                                      UnknownData00[0x4];                                       
	class AActor*                                      TargetActor;                                              
};



struct FBattleItemPickupInfo
{
	class UObject*                                     Source;                                                   
	int                                                Count;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           
	bool                                               bAutoEquip;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	struct FBattleItemUseTarget                        AutoEquipTarget;                                          
	bool                                               bDropOnDead;                                              
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FItemData
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FItemDefineID                               DefineID;                                                 
	struct FString                                     Name;                                                     
	struct FString                                     Desc;                                                     
	struct FString                                     Icon;                                                     
	class UItemHandleBase*                             ItemHandle;                                               
};



struct FBattleItemFeatureData
{
	float                                              UnitWeight;                                               
	int                                                MaxCount;                                                 
	int                                                CountLimit;                                               
	bool                                               bUnique;                                                  
	bool                                               bStackable;                                               
	bool                                               bEquippable;                                              
	bool                                               bConsumable;                                              
	bool                                               bAutoEquipAndDrop;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                ItemAttrsFlag;                                            
	int                                                SortingPriority;                                          
	int                                                Worth;                                                    
	int                                                ItemCapacity;                                             
	int                                                ItemDurability;                                           
	int                                                itemType;                                                 
	int                                                ItemSubType;                                              
};



struct FBattleItemData : public FItemData
{
	int                                                Count;                                                    
	bool                                               bEquipping;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           
	int                                                Durability;                                               
	EItemStoreArea                                     ItemStoreArea;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	int64_t                                            Priority;                                                 
	struct FBattleItemFeatureData                      FeatureData;                                              
	TArray<struct FItemAssociation>                    Associations;                                             
	bool                                               bDisableUse;                                              
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FClientBaseInfo
{
	struct FString                                     OpenID;                                                   
	uint64_t                                           RoleID;                                                   
	struct FString                                     GameSvrId;                                                
	struct FString                                     GameAppID;                                                
	uint16_t                                           AreaID;                                                   
	int8_t                                             PlatID;                                                   
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     ZoneID;                                                   
	uint64_t                                           BattleID;                                                 
	uint64_t                                           GameID;                                                   
	struct FString                                     BattleServerIP;                                           
	uint32_t                                           BattleServerPort;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     UserName;                                                 
	struct FString                                     PicUrl;                                                   
	uint32_t                                           PlayerKey;                                                
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<int>                                        MrpcsData;                                                
	unsigned char                                      UnknownData03[0x8];                                       
	TMap<int, struct FString>                          AdvConfig;                                                
	TMap<struct FString, class UTexture2D*>            AdvTextureList;                                           
};



struct FCacheAffactTargetInfo
{
	TWeakObjectPtr<class AActor>                       AffectTarget;                                             
	float                                              FinalAddValue;                                            
	uint32_t                                           CModifyUid;                                               
};



struct FAttrModifyItem
{
	TArray<struct FCacheAffactTargetInfo>              AffectTargetsCachInfo;                                    
	struct FString                                     AttrModifyItemName;                                       
	struct FString                                     AttrName;                                                 
	int                                                AttrID;                                                   
	int                                                CompareId;                                                
	EAttrOperator                                      ModifierOp;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ModifierValue;                                            
	bool                                               IsEnable;                                                 
	bool                                               ClientSimulate;                                           
	unsigned char                                      UnknownData01[0x6];                                       
};



struct FAttrDynamicModifyItem
{
	unsigned char                                      UnknownData00[0x1C];                                      
	TWeakObjectPtr<class UObject>                      Causer;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FAttrDynamicModifyTarget
{
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<struct FAttrDynamicModifyItem>              List;                                                     
};



struct FAttrDynamicModifyConfig
{
	bool                                               IsOneceModify;                                            
	bool                                               HasLimitAttr;                                             
	bool                                               HasMaxAttr;                                               
	unsigned char                                      UnknownData00[0x5];                                       
	struct FString                                     AttrName;                                                 
	struct FString                                     LimitAttrName;                                            
	struct FString                                     MaxAttrName;                                              
};



struct FAttrDynamicModifier
{
	TMap<struct FString, struct FAttrDynamicModifyTarget> ModifyAttrs;                                              
	TMap<struct FString, struct FAttrDynamicModifyConfig> ModifyConfigs;                                            
	class UAttrModifyComponent*                        Component;                                                
};



struct FAttributeExpand
{
	struct FString                                     AttrName;                                                 
	struct FString                                     AttrDesc;                                                 
	int                                                RelateTypeId;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     RelateGroup;                                              
	float                                              Value;                                                    
	int                                                nValue;                                                   
	unsigned char                                      bValue;                                                   
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FRelateAttributeGroup
{
	TMap<int, struct FString>                          RelateAttributes;                                         
};



struct FModAttrSimulateSyncItem
{
	int                                                AttrID;                                                   
	float                                              FinalValue;                                               
};



struct FAttrDesc
{
	struct FString                                     AttrName;                                                 
	bool                                               bNeedSync;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CurValue;                                                 
};



struct FAttrModifyRecordDetail
{
	float                                              PreModifyValue;                                           
	float                                              AfterModifyValue;                                         
	float                                              WorldTime;                                                
	int                                                ModifyType;                                               
};



struct FAttrModifyRecordDetails
{
	struct FString                                     ModifyDesc;                                               
	int                                                NextIndex;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FAttrModifyRecordDetail>             Data;                                                     
};



struct FAttrModifyRecordItem
{
	struct FAttrDesc                                   AttrDesc;                                                 
	TArray<struct FAttrModifyRecordDetails>            DetailsArray;                                             
};



struct FAttrRegisterItem
{
	int                                                AttrID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     AttrName;                                                 
	EAttrVariableType                                  AttrVariableType;                                         
	bool                                               HasReplicatedTag;                                         
	unsigned char                                      UnknownData01[0x1E];                                      
};



struct FAttrAffected
{
	struct FString                                     AttrName;                                                 
	class AActor*                                      AffectedActor;                                            
};



struct FBPClassItem
{
	struct FString                                     ClassTagName;                                             
	unsigned char                                      UnknownData00[0x28];                                      
	unsigned char                                      UnknownData01[0x28];                                      
	TMap<struct FString, struct FString>               BPClassModOverridePath;                                   
};



struct FBPClassItemMap
{
	TMap<struct FString, struct FString>               BPClassModOverridePath;                                   
};



struct FBudgetSchedulerChannelConfig
{
	struct FName                                       ChannelName;                                              
	float                                              BudgetMsPerFrame;                                         
	int                                                MaxPerFrame;                                              
	bool                                               bEnabled;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FCommonMessageData
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FGameModeEnvData
{
	int                                                ModeID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ModType;                                                  
	struct FString                                     ModType2;                                                 
	int                                                MapID;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     MapType;                                                  
	struct FString                                     SubMod;                                                   
};



struct FEventValueContainer
{
	TWeakObjectPtr<class UObject>                      ObjContext;                                               
	struct FString                                     FunctionName;                                             
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	uint32_t                                           SignatureFingerprint;                                     
	uint32_t                                           CurrentSignatureFingerprint;                              
};



struct FEventIDContainer
{
	TArray<struct FEventValueContainer>                EventValueContainer;                                      
};



struct FEventTypeContainer
{
	TMap<struct FString, struct FEventIDContainer>     EventIDContainer;                                         
};



struct FLuaEventTypeContainer
{
	TMap<struct FString, int>                          EventIDContainer;                                         
};



struct FLuaEventTypeIDSet
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FLuaEventTypeToIDSet
{
	TMap<struct FString, struct FLuaEventTypeIDSet>    EventTypeToIDSet;                                         
};



struct FNetRelevancyGroupID
{
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FConditionIndex
{
	int                                                Index;                                                    
};



struct FBuffCheckConditionWrapperItem
{
	struct FConditionIndex                             ConditionIndex;                                           
	EBuffConditionFalseExecuteType                     FalseExecType;                                            
	EBuffConditionFalseExecuteTypeNew                  FalseActionType;                                          
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FTriggerIndex
{
	int                                                Index;                                                    
};



struct FBuffTriggerWrapperItem
{
	struct FTriggerIndex                               TriggerIndex;                                             
	EBuffConditionFalseExecutePolicy                   ConditionFalsePolicy;                                     
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FBuffConditionActionItem
{
	int                                                Index;                                                    
	EBuffConditionInitializeType                       InitializeType;                                           
	EBuffConditionTrueExecuteType                      TrueExecType;                                             
	EBuffConditionFalseExecuteType                     FalseExecType;                                            
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FBuffSyncBrief
{
	int                                                InstID;                                                   
	unsigned char                                      LayerCount;                                               
	unsigned char                                      LayerMax;                                                 
	unsigned char                                      Level;                                                    
	unsigned char                                      UnknownData00[0x1];                                       
	int                                                BuffID;                                                   
	int                                                CauseSkillID;                                             
	class AActor*                                      CauseActor;                                               
	float                                              SyncTime;                                                 
	float                                              Duration;                                                 
	float                                              EndTime;                                                  
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<float>                                      CDDataArray;                                              
};



struct FBuffNetArrayUnit
{
	struct FBuffSyncBrief                              Unit;                                                     
	bool                                               bMarkDelete;                                              
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBuffIncNetArray
{
	TArray<struct FBuffNetArrayUnit>                   IncArray;                                                 
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FBuffReplaceData
{
	int                                                ID;                                                       
	bool                                               bBuffInst;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FTriggerConditionConfig
{
	class USTBuffCondition*                            Condition;                                                
	EBuffConditionEvalMode                             EvalMode;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FStringMap
{
	TMap<struct FString, struct FString>               Data;                                                     
};



struct FTickOptimizationTickSettings
{
	bool                                               bEnabled;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Interval;                                                 
};



struct FBPTableItem
{
	int                                                ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Name;                                                     
	struct FString                                     Path;                                                     
	struct FString                                     LobbyPath;                                                
	struct FString                                     WrapperPath;                                              
	struct FString                                     Custom1;                                                  
};



struct FTableNameToName
{
	struct FName                                       tableName;                                                
	struct FName                                       ID;                                                       
	struct FName                                       Name;                                                     
	struct FName                                       Path;                                                     
	struct FName                                       PathHigh;                                                 
	struct FName                                       LobbyPath;                                                
	struct FName                                       LobbyPathHigh;                                            
	struct FName                                       WrapperPath;                                              
	struct FName                                       Custom1;                                                  
};



struct FUnLoadLevelActorCollection
{
	TArray<class AActor*>                              LevelActors;                                              
	float                                              CollectionTime;                                           
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPendingRegionNetworkObject
{
	class UObject*                                     RegionObject;                                             
	struct FRegionID                                   OldRegionID;                                              
	struct FRegionID                                   NewRegionID;                                              
};



struct FRPCShareSerializationFunctionPresetConfig
{
	struct FSoftClassPath                              ClassPath;                                                
	struct FString                                     FunctionName;                                             
	bool                                               bEligible;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBattleItemSpectatingData
{
	int                                                TypeSpecificID;                                           
	int                                                AdditionalData;                                           
};



struct FItemFixTableItem
{
	int                                                ValidTimes;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ExTime;                                                   
};



struct FAttrModifyRepItem
{
	unsigned char                                      UnknownData00[0x8];                                       
	class AActor*                                      TargetActor;                                              
};



struct FAttrRowData
{
	int                                                AttrGroup;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     AttrName;                                                 
	EAttrVariableType                                  AttrVariableType;                                         
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              OriginalValue;                                            
	float                                              MinValue;                                                 
	float                                              MaxValue;                                                 
};



struct FAttrModifyGroupItem
{
	TArray<struct FAttrModifyItem>                     AttrModifyItem;                                           
};



struct FPlayerThrowInfo
{
	TArray<struct FBattleItemSpectatingData>           PlayerThrowInfo;                                          
	uint32_t                                           PlayerKey;                                                
	uint32_t                                           TeamID;                                                   
};



struct FPlayerBackPackInfo
{
	TArray<struct FBattleItemSpectatingData>           PlayerBackPackInfo;                                       
	int                                                MainWeapon1TypeSpecificID;                                
	int                                                MainWeapon1AmmoNuminClip;                                 
	int                                                MainWeapon2TypeSpecificID;                                
	int                                                MainWeapon2AmmoNuminClip;                                 
	uint32_t                                           PlayerKey;                                                
	uint32_t                                           TeamID;                                                   
};



struct FBattleItemPickupAfterLand
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FTagItemList
{
	TArray<int>                                        tagList;                                                  
};



struct FTagOneItem
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FPickupFirstCount
{
	int                                                pickID;                                                   
	int                                                Count;                                                    
};



struct FPickupProposeData
{
	TArray<struct FPickupFirstCount>                   TaskPickFirst;                                            
	int                                                closeSubType;                                             
	int                                                crossbowSubType;                                          
	int                                                pistolSubType;                                            
	int                                                gunType;                                                  
	int                                                specialType;                                              
	int                                                specialType2;                                             
	int                                                ID2Type;                                                  
	int                                                pistolClipSubType;                                        
	int                                                SubMachineGunClipSubType;                                 
	int                                                SniperClipSubType;                                        
	int                                                RifleClipSubType;                                         
	int                                                gasSubID;                                                 
	int                                                backSubType;                                              
	int                                                MedicalSubType;                                           
	int                                                BandageID;                                                
	int                                                EnergyDrinksID;                                           
	int                                                AdrenalineID;                                             
	int                                                AnodyneID;                                                
	int                                                Medical1ID;                                               
	int                                                Medical2ID;                                               
	TArray<int>                                        SideMirrorList;                                           
	TArray<int>                                        MirrorList;                                               
	int                                                ViscidityBomb;                                            
	int                                                DefaultMedicineNum;                                       
	int                                                helmetSubType;                                            
	int                                                armorSubType;                                             
	int                                                ScoreItemSubType;                                         
	int                                                SpecialNoDropItemSubType;                                 
	int                                                IceDrinkItemSubType;                                      
	int                                                IsAutoPickUpTaskSubType;                                  
	int                                                CapacityThreshold;                                        
	int                                                GlideSubType;                                             
	int                                                ParachuteItemSubType;                                     
	int                                                revivalCardID;                                            
	float                                              revivalCardValidTime;                                     
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        firewoodPriority;                                         
	TArray<int>                                        meatPriority;                                             
	TArray<int>                                        UAVList;                                                  
	TArray<int>                                        ElectricityList;                                          
	TArray<int>                                        ToUseInBackpackSubList;                                   
	TArray<int>                                        ToUseInBackpackIDList;                                    
	TArray<int>                                        notExtractItemIDList;                                     
};



struct FPickupSettingForTPlan
{
	int                                                LimitSkillProps;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<int, int>                                     LimitBulletMap_XT;                                        
	TMap<int, int>                                     LimitDrugMap_XT;                                          
	TMap<int, int>                                     LimitThrowObjMap_XT;                                      
	TMap<int, int>                                     LimitMultipleMirrorMap_XT;                                
	TMap<int, int>                                     LimitNormalInfillingMap_XT;                               
	TMap<int, int>                                     LimitHalloweenInfillingMap_XT;                            
};



struct FPickupSetting
{
	int                                                LimitViscidityBomb;                                       
	bool                                               AutoPickupPistol;                                         
	bool                                               AutoPickupLevel3Backpack;                                 
	bool                                               AutoPickupSideMirror;                                     
	bool                                               AutoPickupSkillProps;                                     
	int                                                LimitSkillProps;                                          
	bool                                               AutoPickMirror;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                AutoPickClipType;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	TMap<int, int>                                     LimitDrugMap;                                             
	TMap<int, int>                                     LimitThrowObjMap;                                         
	TMap<int, int>                                     LimitMultipleMirrorMap;                                   
	TMap<int, int>                                     LimitFixConsumeItemMap;                                   
	TMap<int, int>                                     LimitSeasonItemMap;                                       
};



struct FSpecPickItem
{
	int                                                item_id;                                                  
	int                                                cur_count;                                                
	int                                                total_count;                                              
};



struct FItemRecordData
{
	unsigned char                                      UnknownData00[0x4];                                       
	int                                                ItemId;                                                   
	int                                                itemType;                                                 
	int                                                ItemSubType;                                              
	int                                                BPID;                                                     
	int                                                WeightforOrder;                                           
	int                                                Worth;                                                    
	int                                                ItemCapacity;                                             
	int                                                Durability;                                               
	int                                                ItemSoundID;                                              
	int                                                ItemQuality;                                              
	int                                                ItemPickupRule;                                           
	int                                                AIFullVaule;                                              
	float                                              Weight;                                                   
	int                                                MaxCount;                                                 
	bool                                               AutoEquipandDrop;                                         
	bool                                               Consumable;                                               
	bool                                               Equipable;                                                
	unsigned char                                      UnknownData01[0x1];                                       
	struct FString                                     ItemName;                                                 
	struct FString                                     ItemBigIcon;                                              
	struct FString                                     ItemDesc;                                                 
	struct FString                                     ItemSmallIcon;                                            
	struct FString                                     KillWhiteIcon;                                            
	struct FString                                     ItemWhiteIcon;                                            
	struct FString                                     RedEmotionSoundPath;                                      
	struct FString                                     PickupDesc;                                               
	struct FString                                     BackpackSimple;                                           
	struct FString                                     SpecialIcon;                                              
	struct FString                                     ItemBigIcon2;                                             
	struct FString                                     ItemSmallIcon2;                                           
};



struct FArmorAttachItemUnit
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemAdditionalDataType                      SlotAdditionalType;                                       
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FSkillTableRow
{
	int                                                SkillID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Name;                                                     
	struct FString                                     IconPath;                                                 
	int                                                SkillType;                                                
	float                                              Coeff1;                                                   
	float                                              CoolTime;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     BPPath;                                                   
	struct FString                                     Desc;                                                     
	TArray<int>                                        BuffIDs;                                                  
	TMap<int, int>                                     BuffLoadTypes;                                            
	unsigned char                                      UnknownData02[0x50];                                      
};



struct FBuffTableRow
{
	int                                                BuffID;                                                   
	int                                                MaxLayer;                                                 
	float                                              Duration;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     BuffType;                                                 
	struct FString                                     Name;                                                     
	struct FString                                     IconPath;                                                 
	struct FString                                     BPPath;                                                   
	struct FString                                     Desc;                                                     
	unsigned char                                      UnknownData01[0x50];                                      
	unsigned char                                      UnknownData02[0x50];                                      
	EBuffRefreshType                                   RefreshType;                                              
	EBuffReActionType                                  ReActionType;                                             
	EBuffTargetType                                    TargetType;                                               
	EMultiCauserHandleType                             MultiCauserHanleType;                                     
	EMultiSkillHandleType                              MultiSkillHandleType;                                     
	EBuffClientSyncType                                ClientSyncType;                                           
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              ClientSyncInterval;                                       
	bool                                               ExistForever;                                             
	bool                                               IsOnece;                                                  
	bool                                               IsClientOwnLife;                                          
	EBuffShowInUIType                                  NeedShowInUIType;                                         
	int                                                LocalizeDescID;                                           
	int                                                TipsOnAddBuff;                                            
	int                                                ModeOpen;                                                 
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     ModeStrings;                                              
	bool                                               ClientPreLoad;                                            
	unsigned char                                      UnknownData05[0x7];                                       
};



struct FCommonMessageDataElement
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCommonMessageDataArrayValue : public FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FCommonMessageDataClassValue : public FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCommonMessageDataActorValue : public FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCommonMessageDataObjectValue : public FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCommonMessageDataStructValue : public FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FCommonMessageDataStringValue : public FCommonMessageDataValue
{
	struct FString                                     Value;                                                    
};



struct FCommonMessageDataNameValue : public FCommonMessageDataValue
{
	struct FName                                       Value;                                                    
};



struct FCommonMessageDataColorValue : public FCommonMessageDataValue
{
	struct FColor                                      Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCommonMessageDataLinearColorValue : public FCommonMessageDataValue
{
	struct FLinearColor                                Value;                                                    
};



struct FCommonMessageDataTransformValue : public FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  Value;                                                    
};



struct FCommonMessageDataQuatValue : public FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FQuat                                       Value;                                                    
};



struct FCommonMessageDataRotatorValue : public FCommonMessageDataValue
{
	struct FRotator                                    Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCommonMessageDataIntVectorValue : public FCommonMessageDataValue
{
	struct FIntVector                                  Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCommonMessageDataIntPointValue : public FCommonMessageDataValue
{
	struct FIntPoint                                   Value;                                                    
};



struct FCommonMessageDataVector4Value : public FCommonMessageDataValue
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FVector4                                    Value;                                                    
};



struct FCommonMessageDataVectorValue : public FCommonMessageDataValue
{
	struct FVector                                     Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCommonMessageDataVector2DValue : public FCommonMessageDataValue
{
	struct FVector2D                                   Value;                                                    
};



struct FCommonMessageDataFloatValue : public FCommonMessageDataValue
{
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCommonMessageDataInt64Value : public FCommonMessageDataValue
{
	int64_t                                            Value;                                                    
};



struct FCommonMessageDataInt32Value : public FCommonMessageDataValue
{
	int                                                Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCommonMessageDataByteValue : public FCommonMessageDataValue
{
	unsigned char                                      Value;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FCommonMessageDataBoolValue : public FCommonMessageDataValue
{
	bool                                               Value;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FRecordItemID
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FStackModifyValue
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FStackModifyStructValue : public FStackModifyValue
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FStackModifyStringValue : public FStackModifyValue
{
	struct FString                                     Value;                                                    
};



struct FStackModifyNameValue : public FStackModifyValue
{
	struct FName                                       Value;                                                    
};



struct FStackModifyColorValue : public FStackModifyValue
{
	struct FColor                                      Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FStackModifyLinearColorValue : public FStackModifyValue
{
	struct FLinearColor                                Value;                                                    
};



struct FStackModifyTransformValue : public FStackModifyValue
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  Value;                                                    
};



struct FStackModifyQuatValue : public FStackModifyValue
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FQuat                                       Value;                                                    
};



struct FStackModifyRotatorValue : public FStackModifyValue
{
	struct FRotator                                    Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FStackModifyIntVectorValue : public FStackModifyValue
{
	struct FIntVector                                  Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FStackModifyIntPointValue : public FStackModifyValue
{
	struct FIntPoint                                   Value;                                                    
};



struct FStackModifyVector4Value : public FStackModifyValue
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FVector4                                    Value;                                                    
};



struct FStackModifyVectorValue : public FStackModifyValue
{
	struct FVector                                     Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FStackModifyVector2DValue : public FStackModifyValue
{
	struct FVector2D                                   Value;                                                    
};



struct FStackModifyFloatValue : public FStackModifyValue
{
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FStackModifyInt64Value : public FStackModifyValue
{
	int64_t                                            Value;                                                    
};



struct FStackModifyInt32Value : public FStackModifyValue
{
	int                                                Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FStackModifyByteValue : public FStackModifyValue
{
	unsigned char                                      Value;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FStackModifyBoolValue : public FStackModifyValue
{
	bool                                               Value;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FNetRelevancyGroupManager
{
	TMap<struct FNetRelevancyGroupID, class UNetRelevancyGroup*> RelevancyGroups;                                          
};



struct FSTBuffInstancedItem
{
	int                                                InstID;                                                   
	int                                                BuffID;                                                   
	int                                                BuffIndex;                                                
	int                                                LayerCount;                                               
	int                                                Level;                                                    
	bool                                               PendingRemove;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              EndTime;                                                  
	float                                              DSEndTime;                                                
	float                                              Duration;                                                 
	int                                                LayerMax;                                                 
	TArray<float>                                      CDDataArray;                                              
	TWeakObjectPtr<class AActor>                       Causer;                                                   
	TWeakObjectPtr<class AActor>                       Owner;                                                    
	TWeakObjectPtr<class USTBuff>                      Buff;                                                     
	TWeakObjectPtr<class UActorComponent>              OwnerSystem;                                              
	int                                                CauseSkillID;                                             
	float                                              LastSyncClientTime;                                       
	bool                                               IsNeedSyncClient;                                         
	unsigned char                                      UnknownData01[0x6F];                                      
};



struct FBuffShared
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FBuffStringShared : public FBuffShared
{
	struct FString                                     Value;                                                    
};



struct FBuffNameShared : public FBuffShared
{
	struct FName                                       Value;                                                    
};



struct FBuffRotatorShared : public FBuffShared
{
	struct FRotator                                    Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBuffVectorShared : public FBuffShared
{
	struct FVector                                     Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBuffInt32Shared : public FBuffShared
{
	int                                                Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBuffFloatShared : public FBuffShared
{
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBuffUInt8Shared : public FBuffShared
{
	unsigned char                                      Value;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBuffBooleanShared : public FBuffShared
{
	bool                                               Value;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBuffTargetShared : public FBuffShared
{
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   
};



struct FMultiStringMap
{
	TMap<int, struct FStringMap>                       StringMap;                                                
};



struct FAnimChildComponentData
{
	TWeakObjectPtr<class UUAEAnimListComponentBase>    ChildComp;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGameEngineTickStat
{
	float                                              Duration;                                                 
	float                                              AvgTickDelta;                                             
};



struct FTravelFailureInfo
{
	class UWorld*                                      World;                                                    
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     ErrorMessage;                                             
};



struct FNetworkFailureInfo
{
	class UWorld*                                      World;                                                    
	class UNetDriver*                                  NetDriver;                                                
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     ErrorMessage;                                             
};



struct FLoadClassArrayParams
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FDSNetSaturateCollectInfo
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FDistanceSegmentConfig
{
	float                                              RadiusSquared;                                            
	int                                                NumberLimit;                                              
};



struct FDistanceSegmentItem
{
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FDSNetReportInfo
{
	unsigned char                                      UnknownData00[0x1C];                                      
};

}

