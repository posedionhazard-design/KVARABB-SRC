#pragma once


 
namespace SDK
{





enum class ETextGender : uint8_t
{
	ETextGender__Masculine         = 0,
	ETextGender__Feminine          = 1,
	ETextGender__Neuter            = 2,
	ETextGender__ETextGender_MAX   = 3
};



enum class EFormatArgumentType : uint8_t
{
	EFormatArgumentType__Int       = 0,
	EFormatArgumentType__UInt      = 1,
	EFormatArgumentType__Float     = 2,
	EFormatArgumentType__Double    = 3,
	EFormatArgumentType__Text      = 4,
	EFormatArgumentType__Gender    = 5,
	EFormatArgumentType__EFormatArgumentType_MAX = 6
};



enum class EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	EEndPlayReason__LevelTransition = 1,
	EEndPlayReason__EndPlayInEditor = 2,
	EEndPlayReason__RemovedFromWorld = 3,
	EEndPlayReason__Quit           = 4,
	EEndPlayReason__EEndPlayReason_MAX = 5
};



enum class ETriggerAction : uint8_t
{
	ETriggerAction__None           = 0,
	ETriggerAction__Enter          = 1,
	ETriggerAction__Exit           = 2,
	ETriggerAction__ETriggerAction_MAX = 3
};



enum class EPhysicsContactState : uint8_t
{
	EPhysicsContactState__None     = 0,
	EPhysicsContactState__Found    = 1,
	EPhysicsContactState__Persist  = 2,
	EPhysicsContactState__Lost     = 3,
	EPhysicsContactState__EPhysicsContactState_MAX = 4
};



enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};



enum class EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	EAttachLocation__KeepWorldPosition = 1,
	EAttachLocation__SnapToTarget  = 2,
	EAttachLocation__SnapToTargetIncludingScale = 3,
	EAttachLocation__EAttachLocation_MAX = 4
};



enum class EAttachmentRule : uint8_t
{
	EAttachmentRule__KeepRelative  = 0,
	EAttachmentRule__KeepWorld     = 1,
	EAttachmentRule__SnapToTarget  = 2,
	EAttachmentRule__EAttachmentRule_MAX = 3
};



enum class EDetachmentRule : uint8_t
{
	EDetachmentRule__KeepRelative  = 0,
	EDetachmentRule__KeepWorld     = 1,
	EDetachmentRule__EDetachmentRule_MAX = 2
};



enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORN_MAX                       = 5,
	ENetDormancy_MAX               = 6
};



enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};



enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 5
};



enum class EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	EAutoReceiveInput__Player0     = 1,
	EAutoReceiveInput__Player1     = 2,
	EAutoReceiveInput__Player2     = 3,
	EAutoReceiveInput__Player3     = 4,
	EAutoReceiveInput__Player4     = 5,
	EAutoReceiveInput__Player5     = 6,
	EAutoReceiveInput__Player6     = 7,
	EAutoReceiveInput__Player7     = 8,
	EAutoReceiveInput__EAutoReceiveInput_MAX = 9
};



enum class ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	ERotatorQuantization__ShortComponents = 1,
	ERotatorQuantization__ERotatorQuantization_MAX = 2
};



enum class EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	EVectorQuantization__RoundOneDecimal = 1,
	EVectorQuantization__RoundTwoDecimals = 2,
	EVectorQuantization__EVectorQuantization_MAX = 3
};



enum class ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	ENavPathEvent__NewPath         = 1,
	ENavPathEvent__UpdatedDueToGoalMoved = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged = 3,
	ENavPathEvent__Invalidated     = 4,
	ENavPathEvent__RePathFailed    = 5,
	ENavPathEvent__MetaPathUpdate  = 6,
	ENavPathEvent__Custom          = 7,
	ENavPathEvent__ENavPathEvent_MAX = 8
};



enum class EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	EComponentCreationMethod__SimpleConstructionScript = 1,
	EComponentCreationMethod__UserConstructionScript = 2,
	EComponentCreationMethod__Instance = 3,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 4
};



enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_ViewTranslated             = 4,
	RTS_MAX                        = 5
};



enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};



enum class EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	EComponentMobility__Stationary = 1,
	EComponentMobility__Movable    = 2,
	EComponentMobility__EComponentMobility_MAX = 3
};



enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};



enum class ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	ECollisionEnabled__QueryOnly   = 1,
	ECollisionEnabled__PhysicsOnly = 2,
	ECollisionEnabled__QueryAndPhysics = 3,
	ECollisionEnabled__TriggerOnly = 4,
	ECollisionEnabled__QueryAndTrigger = 5,
	ECollisionEnabled__ECollisionEnabled_MAX = 6
};



enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};



enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};



enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};



enum class EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	EDOFMode__SixDOF               = 1,
	EDOFMode__YZPlane              = 2,
	EDOFMode__XZPlane              = 3,
	EDOFMode__XYPlane              = 4,
	EDOFMode__CustomPlane          = 5,
	EDOFMode__None                 = 6,
	EDOFMode__EDOFMode_MAX         = 7
};



enum class ERendererStencilMask : uint8_t
{
	ERendererStencilMask__ERSM_Default = 0,
	ERendererStencilMask__ERSM     = 1,
	ERendererStencilMask__ERSM01   = 2,
	ERendererStencilMask__ERSM02   = 3,
	ERendererStencilMask__ERSM03   = 4,
	ERendererStencilMask__ERSM04   = 5,
	ERendererStencilMask__ERSM05   = 6,
	ERendererStencilMask__ERSM06   = 7,
	ERendererStencilMask__ERSM07   = 8,
	ERendererStencilMask__ERSM08   = 9,
	ERendererStencilMask__ERSM_MAX = 10
};



enum class EDrawDyeingMode : uint8_t
{
	EDrawDyeingMode__EDDM_STENCIL  = 0,
	EDrawDyeingMode__EDDM_WHOLE    = 1,
	EDrawDyeingMode__EDDM_OCCLUDED = 2,
	EDrawDyeingMode__EDDM_MAX      = 3
};



enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	ESleepFamily__Sensitive        = 1,
	ESleepFamily__Custom           = 2,
	ESleepFamily__ESleepFamily_MAX = 3
};



enum class ERenderShadingRate : uint8_t
{
	RSR_1x1                        = 0,
	RSR_2x1                        = 1,
	RSR_1x2                        = 2,
	RSR_2x2                        = 3,
	RSR_4x2                        = 4,
	RSR_2x4                        = 5,
	RSR_4x4                        = 6,
	RSR_MAX                        = 7
};



enum class EPrimitiveShadingStrategy : uint8_t
{
	PSS_AutoShading                = 0,
	PSS_FixShading                 = 1,
	PSS_FOVAdaptiveShading         = 2,
	PSS_CollisionAdaptiveShading   = 3,
	PSS_MAX                        = 4
};



enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};



enum class EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	EHasCustomNavigableGeometry__Yes = 1,
	EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
	EHasCustomNavigableGeometry__DontExport = 3,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4
};



enum class ELightmapType : uint8_t
{
	ELightmapType__Default         = 0,
	ELightmapType__ForceSurface    = 1,
	ELightmapType__ForceVolumetric = 2,
	ELightmapType__ELightmapType_MAX = 3
};



enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};



enum class ETemperatureSeverityType : uint8_t
{
	ETemperatureSeverityType__Unknown = 0,
	ETemperatureSeverityType__Good = 1,
	ETemperatureSeverityType__Bad  = 2,
	ETemperatureSeverityType__Serious = 3,
	ETemperatureSeverityType__Critical = 4,
	ETemperatureSeverityType__NumSeverities = 5,
	ETemperatureSeverityType__ETemperatureSeverityType_MAX = 6
};



enum class EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	EPlaneConstraintAxisSetting__X = 1,
	EPlaneConstraintAxisSetting__Y = 2,
	EPlaneConstraintAxisSetting__Z = 3,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5
};



enum class EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	EInterpToBehaviourType__OneShot_Reverse = 1,
	EInterpToBehaviourType__Loop_Reset = 2,
	EInterpToBehaviourType__PingPong = 3,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4
};



enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};



enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};



enum class ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	ENetworkFailure__NetDriverCreateFailure = 1,
	ENetworkFailure__NetDriverListenFailure = 2,
	ENetworkFailure__ConnectionLost = 3,
	ENetworkFailure__ConnectionTimeout = 4,
	ENetworkFailure__FailureReceived = 5,
	ENetworkFailure__OutdatedClient = 6,
	ENetworkFailure__OutdatedServer = 7,
	ENetworkFailure__PendingConnectionFailure = 8,
	ENetworkFailure__NetGuidMismatch = 9,
	ENetworkFailure__NetChecksumMismatch = 10,
	ENetworkFailure__ENetworkFailure_MAX = 11
};



enum class ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	ETravelFailure__LoadMapFailure = 1,
	ETravelFailure__InvalidURL     = 2,
	ETravelFailure__PackageMissing = 3,
	ETravelFailure__PackageVersion = 4,
	ETravelFailure__NoDownload     = 5,
	ETravelFailure__TravelFailure  = 6,
	ETravelFailure__CheatCommands  = 7,
	ETravelFailure__PendingNetGameCreateFailure = 8,
	ETravelFailure__CloudSaveFailure = 9,
	ETravelFailure__ServerTravelFailure = 10,
	ETravelFailure__ClientTravelFailure = 11,
	ETravelFailure__ETravelFailure_MAX = 12
};



enum class EScreenOrientation : uint8_t
{
	EScreenOrientation__Unknown    = 0,
	EScreenOrientation__Portrait   = 1,
	EScreenOrientation__PortraitUpsideDown = 2,
	EScreenOrientation__LandscapeLeft = 3,
	EScreenOrientation__LandscapeRight = 4,
	EScreenOrientation__FaceUp     = 5,
	EScreenOrientation__FaceDown   = 6,
	EScreenOrientation__EScreenOrientation_MAX = 7
};



enum class EApplicationState : uint8_t
{
	EApplicationState__Unknown     = 0,
	EApplicationState__Inactive    = 1,
	EApplicationState__Background  = 2,
	EApplicationState__Active      = 3,
	EApplicationState__EApplicationState_MAX = 4
};



enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};



enum class EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	EDrawDebugTrace__ForOneFrame   = 1,
	EDrawDebugTrace__ForDuration   = 2,
	EDrawDebugTrace__Persistent    = 3,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 4
};



enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};



enum class EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	EMoveComponentAction__Stop     = 1,
	EMoveComponentAction__Return   = 2,
	EMoveComponentAction__EMoveComponentAction_MAX = 3
};



enum class EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	EQuitPreference__Background    = 1,
	EQuitPreference__EQuitPreference_MAX = 2
};



enum class EDPCompareType : uint8_t
{
	DP_Equal                       = 0,
	DP_Less                        = 1,
	DP_LessEqual                   = 2,
	DP_Greater                     = 3,
	DP_GreaterEqual                = 4,
	DP_NotEqual                    = 5,
	DP_Regex                       = 6,
	DP_CMP_MAX                     = 7,
	DP_MAX                         = 8
};



enum class EDPSourceType : uint8_t
{
	DP_PreviousRegexMatch          = 0,
	DP_ProfileName                 = 1,
	DP_DeviceType                  = 2,
	DP_GpuFamily                   = 3,
	DP_GlVersion                   = 4,
	DP_OsVersion                   = 5,
	DP_DeviceMake                  = 6,
	DP_DeviceModel                 = 7,
	DP_VulkanVersion               = 8,
	DP_MemorySizeInGB              = 9,
	DP_QualityLevel                = 10,
	DP_MaxQualityLevel             = 11,
	DP_TCQualityGrade              = 12,
	DP_ScreenPhysicSize            = 13,
	DP_MainBroadInfo               = 14,
	DP_GamePlayFlag                = 15,
	DP_HDRSupport                  = 16,
	DP_SocName                     = 17,
	DP_SRC_MAX                     = 18
};



enum class EMontagePlayReturnType : uint8_t
{
	EMontagePlayReturnType__MontageLength = 0,
	EMontagePlayReturnType__Duration = 1,
	EMontagePlayReturnType__EMontagePlayReturnType_MAX = 2
};



enum class ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	ERootMotionMode__IgnoreRootMotion = 1,
	ERootMotionMode__RootMotionFromEverything = 2,
	ERootMotionMode__RootMotionFromMontagesOnly = 3,
	ERootMotionMode__ERootMotionMode_MAX = 4
};



enum class EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	EAnimLinkMethod__Relative      = 1,
	EAnimLinkMethod__Proportional  = 2,
	EAnimLinkMethod__EAnimLinkMethod_MAX = 3
};



enum class ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	ENotifyFilterType__LOD         = 1,
	ENotifyFilterType__ENotifyFilterType_MAX = 2
};



enum class EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	EMontageNotifyTickType__BranchingPoint = 1,
	EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2
};



enum class EDrawStyleMode : uint8_t
{
	DrS_None                       = 0,
	DrS_Dissolve                   = 1,
	DrS_Decal                      = 2,
	DrS_MAX                        = 3
};



enum class EMeshVisibleLayer : uint8_t
{
	VisibleLayer_NotVisible        = 0,
	VisibleLayer_Default           = 1,
	VisibleLayer                   = 2,
	VisibleLayer01                 = 3,
	VisibleLayer02                 = 4,
	VisibleLayer03                 = 5,
	VisibleLayer04                 = 6,
	VisibleLayer05                 = 7,
	VisibleLayer_Visible           = 8,
	VisibleLayer_MAX               = 9
};



enum class EMeshCastShadowLayer : uint8_t
{
	CastShadowLayer_NotCastShadow  = 0,
	CastShadowLayer_Default        = 1,
	CastShadowLayer                = 2,
	CastShadowLayer01              = 3,
	CastShadowLayer02              = 4,
	CastShadowLayer03              = 5,
	CastShadowLayer04              = 6,
	CastShadowLayer05              = 7,
	CastShadowLayer_CastShadow     = 8,
	CastShadowLayer_MAX            = 9
};



enum class ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	ECameraAnimPlaySpace__World    = 1,
	ECameraAnimPlaySpace__UserDefined = 2,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3
};



enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};



enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};



enum class EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	EControllerAnalogStick__CAS_RightStick = 1,
	EControllerAnalogStick__CAS_MAX = 2
};



enum class EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	EDynamicForceFeedbackAction__Update = 1,
	EDynamicForceFeedbackAction__Stop = 2,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3
};



enum class EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	EAutoPossessAI__PlacedInWorld  = 1,
	EAutoPossessAI__Spawned        = 2,
	EAutoPossessAI__PlacedInWorldOrSpawned = 3,
	EAutoPossessAI__EAutoPossessAI_MAX = 4
};



enum class EShapeUsage : uint8_t
{
	EShapeUsage__None              = 0,
	EShapeUsage__Usage0            = 1,
	EShapeUsage__Usage1            = 2,
	EShapeUsage__Usage2            = 3,
	EShapeUsage__Usage3            = 4,
	EShapeUsage__Usage4            = 5,
	EShapeUsage__Usage5            = 6,
	EShapeUsage__NumUsages         = 7,
	EShapeUsage__EShapeUsage_MAX   = 8
};



enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64
};



enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};



enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2
};



enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};



enum class ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	ECameraProjectionMode__Orthographic = 1,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 2
};



enum class EClientSerializeStatus : uint8_t
{
	EClientSerializeStatus__CSS_ArError = 0,
	EClientSerializeStatus__CSS_AtEndClose = 1,
	EClientSerializeStatus__CSS_AtEndNULL = 2,
	EClientSerializeStatus__CSS_AtEndOnly = 3,
	EClientSerializeStatus__CSS_ActorNullSuccess = 4,
	EClientSerializeStatus__CSS_ActorNullFailed = 5,
	EClientSerializeStatus__CSS_ActorNullArchetypeNULL = 6,
	EClientSerializeStatus__CSS_ActorSuccess = 7,
	EClientSerializeStatus__CSS_NotDynamicActorNULL = 8,
	EClientSerializeStatus__CSS_UnKnown = 9,
	EClientSerializeStatus__CSS_MAX = 10
};



enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8
};



enum class EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	EBoneSpaces__ComponentSpace    = 1,
	EBoneSpaces__EBoneSpaces_MAX   = 2
};



enum class ERegionSizeIndex : uint8_t
{
	ERegionSizeIndex__Small        = 0,
	ERegionSizeIndex__Medium       = 1,
	ERegionSizeIndex__Large        = 2,
	ERegionSizeIndex__SuperLarge   = 3,
	ERegionSizeIndex__Max          = 4
};



enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};



enum class ENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode__Disabled = 0,
	ENetworkSmoothingMode__Linear  = 1,
	ENetworkSmoothingMode__Exponential = 2,
	ENetworkSmoothingMode__Replay  = 3,
	ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 4
};



enum class EQueuedSpawnStage : uint8_t
{
	EQueuedSpawnStage__PreCheck    = 0,
	EQueuedSpawnStage__BeginSpawn  = 1,
	EQueuedSpawnStage__ExecuteConstruction = 2,
	EQueuedSpawnStage__PostActorConstruction = 3,
	EQueuedSpawnStage__FinishSpawn = 4,
	EQueuedSpawnStage__Done        = 5,
	EQueuedSpawnStage__EQueuedSpawnStage_MAX = 6
};



enum class EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	EAlphaBlendOption__Cubic       = 1,
	EAlphaBlendOption__HermiteCubic = 2,
	EAlphaBlendOption__Sinusoidal  = 3,
	EAlphaBlendOption__QuadraticInOut = 4,
	EAlphaBlendOption__CubicInOut  = 5,
	EAlphaBlendOption__QuarticInOut = 6,
	EAlphaBlendOption__QuinticInOut = 7,
	EAlphaBlendOption__CircularIn  = 8,
	EAlphaBlendOption__CircularOut = 9,
	EAlphaBlendOption__CircularInOut = 10,
	EAlphaBlendOption__ExpIn       = 11,
	EAlphaBlendOption__ExpOut      = 12,
	EAlphaBlendOption__ExpInOut    = 13,
	EAlphaBlendOption__Custom      = 14,
	EAlphaBlendOption__EAlphaBlendOption_MAX = 15
};



enum class EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	EAnimGroupRole__AlwaysFollower = 1,
	EAnimGroupRole__AlwaysLeader   = 2,
	EAnimGroupRole__TransitionLeader = 3,
	EAnimGroupRole__TransitionFollower = 4,
	EAnimGroupRole__EAnimGroupRole_MAX = 5
};



enum class ERawCurveTrackTypes : uint8_t
{
	ERawCurveTrackTypes__RCT_Float = 0,
	ERawCurveTrackTypes__RCT_Vector = 1,
	ERawCurveTrackTypes__RCT_Transform = 2,
	ERawCurveTrackTypes__RCT_MAX   = 3
};



enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_DriveMorphTarget_DEPRECATED = 0,
	AACF_DriveAttribute_DEPRECATED = 1,
	AACF_Editable                  = 2,
	AACF_DriveMaterial_DEPRECATED  = 3,
	AACF_Metadata                  = 4,
	AACF_DriveTrack                = 5,
	AACF_Disabled                  = 6,
	AACF_MAX                       = 7
};



enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};



enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4
};



enum class ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	ERootMotionRootLock__AnimFirstFrame = 1,
	ERootMotionRootLock__Zero      = 2,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 3
};



enum class EAnimCurveType : uint8_t
{
	EAnimCurveType__AttributeCurve = 0,
	EAnimCurveType__MaterialCurve  = 1,
	EAnimCurveType__MorphTargetCurve = 2,
	EAnimCurveType__MaxAnimCurveType = 3,
	EAnimCurveType__EAnimCurveType_MAX = 4
};



enum class EDrawDebugItemType : uint8_t
{
	EDrawDebugItemType__DirectionalArrow = 0,
	EDrawDebugItemType__Sphere     = 1,
	EDrawDebugItemType__Line       = 2,
	EDrawDebugItemType__OnScreenMessage = 3,
	EDrawDebugItemType__CoordinateSystem = 4,
	EDrawDebugItemType__EDrawDebugItemType_MAX = 5
};



enum class EMontageSubStepResult : uint8_t
{
	EMontageSubStepResult__Moved   = 0,
	EMontageSubStepResult__NotMoved = 1,
	EMontageSubStepResult__InvalidSection = 2,
	EMontageSubStepResult__InvalidMontage = 3,
	EMontageSubStepResult__EMontageSubStepResult_MAX = 4
};



enum class EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	EAnimNotifyEventType__End      = 1,
	EAnimNotifyEventType__EAnimNotifyEventType_MAX = 2
};



enum class EInertializationSpace : uint8_t
{
	EInertializationSpace__Default = 0,
	EInertializationSpace__WorldSpace = 1,
	EInertializationSpace__WorldRotation = 2,
	EInertializationSpace__EInertializationSpace_MAX = 3
};



enum class EInertializationBoneState : uint8_t
{
	EInertializationBoneState__Invalid = 0,
	EInertializationBoneState__Valid = 1,
	EInertializationBoneState__Excluded = 2,
	EInertializationBoneState__EInertializationBoneState_MAX = 3
};



enum class EInertializationState : uint8_t
{
	EInertializationState__Inactive = 0,
	EInertializationState__Pending = 1,
	EInertializationState__Active  = 2,
	EInertializationState__EInertializationState_MAX = 3
};



enum class EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	EEvaluatorMode__EM_Freeze      = 1,
	EEvaluatorMode__EM_DelayedFreeze = 2,
	EEvaluatorMode__EM_MAX         = 3
};



enum class EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	EEvaluatorDataSource__EDS_DestinationPose = 1,
	EEvaluatorDataSource__EDS_MAX  = 2
};



enum class ECopyType : uint8_t
{
	ECopyType__MemCopy             = 0,
	ECopyType__BoolProperty        = 1,
	ECopyType__StructProperty      = 2,
	ECopyType__ObjectProperty      = 3,
	ECopyType__ECopyType_MAX       = 4
};



enum class EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	EPostCopyOperation__LogicalNegateBool = 1,
	EPostCopyOperation__EPostCopyOperation_MAX = 2
};



enum class EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	EPinHidingMode__PinHiddenByDefault = 1,
	EPinHidingMode__PinShownByDefault = 2,
	EPinHidingMode__AlwaysAsPin    = 3,
	EPinHidingMode__EPinHidingMode_MAX = 4
};



enum class EAnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType__CoM     = 0,
	AnimPhysCollisionType__CustomSphere = 1,
	AnimPhysCollisionType__InnerSphere = 2,
	AnimPhysCollisionType__OuterSphere = 3,
	AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4
};



enum class EAnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis__AxisX       = 0,
	AnimPhysTwistAxis__AxisY       = 1,
	AnimPhysTwistAxis__AxisZ       = 2,
	AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 3
};



enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_ACLDefault                 = 3,
	AKF_ACLCustom                  = 4,
	AKF_ACLSafetyFallback          = 5,
	AKF_MAX                        = 6
};



enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};



enum class ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	ETransitionLogicType__TLT_Custom = 1,
	ETransitionLogicType__TLT_Inertialization = 2,
	ETransitionLogicType__TLT_MAX  = 3
};



enum class ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	ETransitionBlendMode__TBM_Cubic = 1,
	ETransitionBlendMode__TBM_MAX  = 2
};



enum class EAnimNotifyLimit : uint8_t
{
	EANL_None                      = 0,
	EANL_LocalControl              = 1,
	EANL_NonLocalControl           = 2,
	EANL_LocalControlOrView        = 3,
	EANL_NonLocalControlOrView     = 4,
	EANL_MAX                       = 5
};



enum class EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	EAxisOption__Y                 = 1,
	EAxisOption__Z                 = 2,
	EAxisOption__X_Neg             = 3,
	EAxisOption__Y_Neg             = 4,
	EAxisOption__Z_Neg             = 5,
	EAxisOption__Custom            = 6,
	EAxisOption__EAxisOption_MAX   = 7
};



enum class EAnimInterpolationType : uint8_t
{
	EAnimInterpolationType__Linear = 0,
	EAnimInterpolationType__Step   = 1,
	EAnimInterpolationType__EAnimInterpolationType_MAX = 2
};



enum class ECurveBlendOption : uint8_t
{
	ECurveBlendOption__MaxWeight   = 0,
	ECurveBlendOption__NormalizeByWeight = 1,
	ECurveBlendOption__BlendByWeight = 2,
	ECurveBlendOption__ECurveBlendOption_MAX = 3
};



enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};



enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};



enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};



enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};



enum class EPrimaryAssetCookRule : uint8_t
{
	EPrimaryAssetCookRule__Unknown = 0,
	EPrimaryAssetCookRule__NeverCook = 1,
	EPrimaryAssetCookRule__DevelopmentCook = 2,
	EPrimaryAssetCookRule__AlwaysCook = 3,
	EPrimaryAssetCookRule__EPrimaryAssetCookRule_MAX = 4
};



enum class EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	EAttenuationShape__Capsule     = 1,
	EAttenuationShape__Box         = 2,
	EAttenuationShape__Cone        = 3,
	EAttenuationShape__EAttenuationShape_MAX = 4
};



enum class EAttenuationDistanceModel : uint8_t
{
	EAttenuationDistanceModel__Linear = 0,
	EAttenuationDistanceModel__Logarithmic = 1,
	EAttenuationDistanceModel__Inverse = 2,
	EAttenuationDistanceModel__LogReverse = 3,
	EAttenuationDistanceModel__NaturalSound = 4,
	EAttenuationDistanceModel__Custom = 5,
	EAttenuationDistanceModel__EAttenuationDistanceModel_MAX = 6
};



enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};



enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_AfterUI                     = 4,
	BL_MAX                         = 5
};



enum class ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	ENotifyTriggerMode__HighestWeightedAnimation = 1,
	ENotifyTriggerMode__None       = 2,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3
};



enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3
};



enum class EBlueprintNativizationFlag : uint8_t
{
	EBlueprintNativizationFlag__Disabled = 0,
	EBlueprintNativizationFlag__Dependency = 1,
	EBlueprintNativizationFlag__ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag__EBlueprintNativizationFlag_MAX = 3
};



enum class EBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode__Default = 0,
	EBlueprintCompileMode__Development = 1,
	EBlueprintCompileMode__FinalRelease = 2,
	EBlueprintCompileMode__EBlueprintCompileMode_MAX = 3
};



enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};



enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};



enum class EDynamicActorScene : uint8_t
{
	EDynamicActorScene__Default    = 0,
	EDynamicActorScene__UseSyncScene = 1,
	EDynamicActorScene__UseAsyncScene = 2,
	EDynamicActorScene__EDynamicActorScene_MAX = 3
};



enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	EBodyCollisionResponse__BodyCollision_Disabled = 1,
	EBodyCollisionResponse__BodyCollision_MAX = 2
};



enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};



enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};



enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};



enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};



enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};



enum class ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	ECameraAlphaBlendMode__CABM_Cubic = 1,
	ECameraAlphaBlendMode__CABM_MAX = 2
};



enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};



enum class EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	EAngularDriveMode__TwistAndSwing = 1,
	EAngularDriveMode__EAngularDriveMode_MAX = 2
};



enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3
};



enum class EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	EEvaluateCurveTableResult__RowNotFound = 1,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2
};



enum class EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	EGrammaticalNumber__Plural     = 1,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 2
};



enum class EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	EGrammaticalGender__Masculine  = 1,
	EGrammaticalGender__Feminine   = 2,
	EGrammaticalGender__Mixed      = 3,
	EGrammaticalGender__EGrammaticalGender_MAX = 4
};



enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};



enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};



enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};



enum class EDSPVSConfigCategory : uint8_t
{
	CTY_LeastAggressive            = 0,
	CTY_ModeratelyAggressive       = 1,
	CTY_MostAggressive             = 2,
	CTY_Max                        = 3
};



enum class EDSPVSCategory : uint8_t
{
	CATEGORY_Loose                 = 0,
	CATEGORY_Strict                = 1,
	CATEGORY_Null                  = 2,
	CATEGORY_Max                   = 3
};



enum class ENodeEnabledState : uint8_t
{
	ENodeEnabledState__Enabled     = 0,
	ENodeEnabledState__Disabled    = 1,
	ENodeEnabledState__DevelopmentOnly = 2,
	ENodeEnabledState__ENodeEnabledState_MAX = 3
};



enum class ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	ENodeAdvancedPins__Shown       = 1,
	ENodeAdvancedPins__Hidden      = 2,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3
};



enum class ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	ENodeTitleType__ListView       = 1,
	ENodeTitleType__EditableTitle  = 2,
	ENodeTitleType__MenuTitle      = 3,
	ENodeTitleType__MAX_TitleTypes = 4,
	ENodeTitleType__ENodeTitleType_MAX = 5
};



enum class EPinContainerType : uint8_t
{
	EPinContainerType__None        = 0,
	EPinContainerType__Array       = 1,
	EPinContainerType__Set         = 2,
	EPinContainerType__Map         = 3,
	EPinContainerType__EPinContainerType_MAX = 4
};



enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};



enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};



enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6
};



enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};



enum class EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_MAX                    = 2
};



enum class ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7
};



enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};



enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_PhysicMaterialColoration   = 24,
	VMI_Max                        = 25,
	VMI_Unknown                    = 26
};



enum class EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic      = 0,
	EDemoPlayFailure__DemoNotFound = 1,
	EDemoPlayFailure__Corrupt      = 2,
	EDemoPlayFailure__InvalidVersion = 3,
	EDemoPlayFailure__EDemoPlayFailure_MAX = 4
};



enum class ENetworkLagState : uint8_t
{
	ENetworkLagState__NotLagging   = 0,
	ENetworkLagState__Lagging      = 1,
	ENetworkLagState__ENetworkLagState_MAX = 2
};



enum class ECustomTickIntervel : uint8_t
{
	ECustomTickIntervel__Intervel_60FPS = 0,
	ECustomTickIntervel__Intervel_30FPS = 1,
	ECustomTickIntervel__Intervel_15FPS = 2,
	ECustomTickIntervel__Intervel_10FPS = 3,
	ECustomTickIntervel__Intervel_5FPS = 4,
	ECustomTickIntervel__Intervel_1FPS = 5,
	ECustomTickIntervel__Intervel_MAX = 6
};



enum class EMouseLockMode : uint8_t
{
	EMouseLockMode__DoNotLock      = 0,
	EMouseLockMode__LockOnCapture  = 1,
	EMouseLockMode__LockAlways     = 2,
	EMouseLockMode__EMouseLockMode_MAX = 3
};



enum class EMouseCaptureMode : uint8_t
{
	EMouseCaptureMode__NoCapture   = 0,
	EMouseCaptureMode__CapturePermanently = 1,
	EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 2,
	EMouseCaptureMode__CaptureDuringMouseDown = 3,
	EMouseCaptureMode__CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode__EMouseCaptureMode_MAX = 5
};



enum class EDepthTestMethod : uint8_t
{
	EDepthTestMethod__EDTM_DepthNearOrEqual = 0,
	EDepthTestMethod__EDTM_DepthNear = 1,
	EDepthTestMethod__EDTM_DepthFartherOrEqual = 2,
	EDepthTestMethod__EDTM_DepthFarther = 3,
	EDepthTestMethod__EDTM_Never   = 4,
	EDepthTestMethod__EDTM_Equal   = 5,
	EDepthTestMethod__EDTM_NotEqual = 6,
	EDepthTestMethod__EDTM_MAX     = 7
};



enum class EMeshBufferAccess : uint8_t
{
	EMeshBufferAccess__Default     = 0,
	EMeshBufferAccess__ForceCPUAndGPU = 1,
	EMeshBufferAccess__EMeshBufferAccess_MAX = 2
};



enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	EConstraintFrame__Frame2       = 1,
	EConstraintFrame__EConstraintFrame_MAX = 2
};



enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3
};



enum class EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	EComponentSocketType__Bone     = 1,
	EComponentSocketType__Socket   = 2,
	EComponentSocketType__EComponentSocketType_MAX = 3
};



enum class EUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket__ShiftBucket0 = 0,
	EUpdateRateShiftBucket__ShiftBucket1 = 1,
	EUpdateRateShiftBucket__ShiftBucket2 = 2,
	EUpdateRateShiftBucket__ShiftBucket3 = 3,
	EUpdateRateShiftBucket__ShiftBucket4 = 4,
	EUpdateRateShiftBucket__ShiftBucket5 = 5,
	EUpdateRateShiftBucket__ShiftBucketMax = 6,
	EUpdateRateShiftBucket__EUpdateRateShiftBucket_MAX = 7
};



enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};



enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};



enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};



enum class EInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll                 = 0,
	ICO_ConsumeBoundKeys           = 1,
	ICO_ConsumeNone                = 2,
	ICO_MAX                        = 3
};



enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3
};



enum class EPhysicsSceneType : uint8_t
{
	PST_Sync                       = 0,
	PST_Cloth                      = 1,
	PST_Async                      = 2,
	PST_MAX                        = 3
};



enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};



enum class ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3
};



enum class ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6
};



enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};



enum class EMaterialTexturePrecision : uint8_t
{
	PRECISIONTYPE_Float            = 0,
	PRECISIONTYPE_Half             = 1,
	PRECISIONTYPE_Fixed            = 2,
	PRECISIONTYPE_MAX              = 3
};



enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_External           = 8,
	SAMPLERTYPE_MAX                = 9
};



enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};



enum class ESimpleVertexNormalSituation : uint8_t
{
	SVNS_None                      = 0,
	SVNS_UsedInFullyRough          = 1,
	SVNS_UsedInNonMetalAndFullyRough = 2,
	SVNS_Always                    = 3,
	SVNS_MAX                       = 4
};



enum class EMaterialShadowOverride : uint8_t
{
	MSO_Default                    = 0,
	MSO_NoShadow                   = 1,
	MSO_NoFilter                   = 2,
	MSO_PCF1x1                     = 3,
	MSO_MAX                        = 4
};



enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_IdeaLit                    = 10,
	MSM_IdeaLitS3                  = 11,
	MSM_IdeaLitS2                  = 12,
	MSM_IdeaLitS1                  = 13,
	MSM_IdeaLitS1D                 = 14,
	MSM_Water                      = 15,
	MSM_Toon                       = 16,
	MSM_MAX                        = 17
};



enum class EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	EParticleCollisionMode__DistanceField = 1,
	EParticleCollisionMode__EParticleCollisionMode_MAX = 2
};



enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};



enum class EGBufferFormat : uint8_t
{
	EGBufferFormat__Force8BitsPerChannel = 0,
	EGBufferFormat__Default        = 1,
	EGBufferFormat__HighPrecisionNormals = 2,
	EGBufferFormat__Force16BitsPerChannel = 3,
	EGBufferFormat__EGBufferFormat_MAX = 4
};



enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_NewComposite              = 3,
	SCCM_MAX                       = 4
};



enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_FastColorLDR               = 8,
	SCS_FinalColorHDR              = 9,
	SCS_MAX                        = 10
};



enum class ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	ETranslucentSortPolicy__SortByProjectedZ = 1,
	ETranslucentSortPolicy__SortAlongAxis = 2,
	ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3
};



enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};



enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};



enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};



enum class EOITBlendMode : uint8_t
{
	OIT_None                       = 0,
	OIT_McGuire                    = 1,
	OIT_McGuireWithDepth           = 2,
	OIT_MAX                        = 3
};



enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6
};



enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};



enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};



enum class EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3
};



enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};



enum class EFeatureSetType : uint8_t
{
	EFeatureSetType__DedicateServer = 0,
	EFeatureSetType__Autonomous    = 1,
	EFeatureSetType__Simulate_Team = 2,
	EFeatureSetType__Simulate_NonTeam = 3,
	EFeatureSetType__DedicateServer_AI = 4,
	EFeatureSetType__DedicateServer_MLAI = 5,
	EFeatureSetType__Simulate_AI   = 6,
	EFeatureSetType__Standalone    = 7,
	EFeatureSetType__Standalone_AI = 8,
	EFeatureSetType__Max           = 9
};



enum class EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	EFontCacheType__Runtime        = 1,
	EFontCacheType__EFontCacheType_MAX = 2
};



enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};



enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};



enum class ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3
};



enum class EWindowMode : uint8_t
{
	EWindowMode__Fullscreen        = 0,
	EWindowMode__WindowedFullscreen = 1,
	EWindowMode__Windowed          = 2,
	EWindowMode__EWindowMode_MAX   = 3
};



enum class EImportanceWeight : uint8_t
{
	EImportanceWeight__Luminance   = 0,
	EImportanceWeight__Red         = 1,
	EImportanceWeight__Green       = 2,
	EImportanceWeight__Blue        = 3,
	EImportanceWeight__Alpha       = 4,
	EImportanceWeight__EImportanceWeight_MAX = 5
};



enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};



enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};



enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};



enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};



enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};



enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};



enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};



enum class ESlateGesture : uint8_t
{
	ESlateGesture__None            = 0,
	ESlateGesture__Scroll          = 1,
	ESlateGesture__Magnify         = 2,
	ESlateGesture__Swipe           = 3,
	ESlateGesture__Rotate          = 4,
	ESlateGesture__LongPress       = 5,
	ESlateGesture__ESlateGesture_MAX = 6
};



enum class ELerpInterpolationMode : uint8_t
{
	ELerpInterpolationMode__QuatInterp = 0,
	ELerpInterpolationMode__EulerInterp = 1,
	ELerpInterpolationMode__DualQuatInterp = 2,
	ELerpInterpolationMode__ELerpInterpolationMode_MAX = 3
};



enum class EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	EEasingFunc__Step              = 1,
	EEasingFunc__SinusoidalIn      = 2,
	EEasingFunc__SinusoidalOut     = 3,
	EEasingFunc__SinusoidalInOut   = 4,
	EEasingFunc__EaseIn            = 5,
	EEasingFunc__EaseOut           = 6,
	EEasingFunc__EaseInOut         = 7,
	EEasingFunc__ExpoIn            = 8,
	EEasingFunc__ExpoOut           = 9,
	EEasingFunc__ExpoInOut         = 10,
	EEasingFunc__CircularIn        = 11,
	EEasingFunc__CircularOut       = 12,
	EEasingFunc__CircularInOut     = 13,
	EEasingFunc__EEasingFunc_MAX   = 14
};



enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};



enum class ELevelDisableReason : uint8_t
{
	ELevelDisableReason__GameLogic = 0,
	ELevelDisableReason__Performance = 1,
	ELevelDisableReason__ELevelDisableReason_MAX = 2
};



enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};



enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};



enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_MAX                        = 12
};



enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};



enum class EMaterialAttributeBlend : uint8_t
{
	EMaterialAttributeBlend__Blend = 0,
	EMaterialAttributeBlend__UseA  = 1,
	EMaterialAttributeBlend__UseB  = 2,
	EMaterialAttributeBlend__EMaterialAttributeBlend_MAX = 3
};



enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};



enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};



enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};



enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MaterialAttributes = 7,
	FunctionInput_MAX              = 8
};



enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};



enum class EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2
};



enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_CustomStencil              = 24,
	PPI_StoredBaseColor            = 25,
	PPI_StoredSpecular             = 26,
	PPI_MAX                        = 27
};



enum class EMaterialExpressionScreenPositionMapping : uint8_t
{
	MESP_SceneTextureUV            = 0,
	MESP_ViewportUV                = 1,
	MESP_Max                       = 2
};



enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};



enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};



enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};



enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};



enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};



enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};



enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};



enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_BigWorldTranslated = 6,
	TRANSFORMPOSSOURCE_MAX         = 7
};



enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};



enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_MAX                       = 7
};



enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4
};



enum class EMaterialFunctionUsage : uint8_t
{
	EMaterialFunctionUsage__Default = 0,
	EMaterialFunctionUsage__MaterialLayer = 1,
	EMaterialFunctionUsage__MaterialLayerBlend = 2,
	EMaterialFunctionUsage__EMaterialFunctionUsage_MAX = 3
};



enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_InstancedSplineMeshes = 8,
	MATUSAGE_ColorInstancedStaticMeshes = 9,
	MATUSAGE_Clothing              = 10,
	MATUSAGE_NiagaraSprites        = 11,
	MATUSAGE_NiagaraRibbons        = 12,
	MATUSAGE_NiagaraMeshParticles  = 13,
	MATUSAGE_IBL                   = 14,
	MATUSAGE_GFur                  = 15,
	MATUSAGE_VertexPointLight      = 16,
	MATUSAGE_DestructibleHide      = 17,
	MATUSAGE_DestructibleDetach    = 18,
	MATUSAGE_DestructibleSlide     = 19,
	MATUSAGE_HeterogeneousVolumes  = 20,
	MATUSAGE_MAX                   = 21
};



enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter                 = 0,
	BlendParameter                 = 1,
	GlobalParameter                = 2,
	EMaterialParameterAssociation_MAX = 3
};



enum class ESimplygonMaterialChannel : uint8_t
{
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AMBIENT = 0,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_DIFFUSE = 1,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_SPECULAR = 2,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_OPACITY = 3,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_EMISSIVE = 4,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_NORMALS = 5,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_BASECOLOR = 7,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_ROUGHNESS = 8,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_METALLIC = 9,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AO = 10,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_SUBSURFACE = 11,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_OPACITYMASK = 12,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_MAX = 13
};



enum class ESimplygonTextureResolution : uint8_t
{
	ESimplygonTextureResolution__TextureResolution = 0,
	ESimplygonTextureResolution__TextureResolution01 = 1,
	ESimplygonTextureResolution__TextureResolution02 = 2,
	ESimplygonTextureResolution__TextureResolution03 = 3,
	ESimplygonTextureResolution__TextureResolution04 = 4,
	ESimplygonTextureResolution__TextureResolution05 = 5,
	ESimplygonTextureResolution__TextureResolution06 = 6,
	ESimplygonTextureResolution__TextureResolution07 = 7,
	ESimplygonTextureResolution__TextureResolution_MAX = 8
};



enum class ESimplygonColorChannels : uint8_t
{
	ESimplygonColorChannels__RGBA  = 0,
	ESimplygonColorChannels__RGB   = 1,
	ESimplygonColorChannels__L     = 2,
	ESimplygonColorChannels__ESimplygonColorChannels_MAX = 3
};



enum class ESimplygonTextureSamplingQuality : uint8_t
{
	ESimplygonTextureSamplingQuality__Poor = 0,
	ESimplygonTextureSamplingQuality__Low = 1,
	ESimplygonTextureSamplingQuality__Medium = 2,
	ESimplygonTextureSamplingQuality__High = 3,
	ESimplygonTextureSamplingQuality__ESimplygonTextureSamplingQuality_MAX = 4
};



enum class ESimplygonCasterType : uint8_t
{
	ESimplygonCasterType__None     = 0,
	ESimplygonCasterType__Color    = 1,
	ESimplygonCasterType__Normals  = 2,
	ESimplygonCasterType__Opacity  = 3,
	ESimplygonCasterType__ESimplygonCasterType_MAX = 4
};



enum class ESimplygonTextureStrech : uint8_t
{
	ESimplygonTextureStrech__None  = 0,
	ESimplygonTextureStrech__VerySmall = 1,
	ESimplygonTextureStrech__Small = 2,
	ESimplygonTextureStrech__Medium = 3,
	ESimplygonTextureStrech__Large = 4,
	ESimplygonTextureStrech__VeryLarge = 5,
	ESimplygonTextureStrech__ESimplygonTextureStrech_MAX = 6
};



enum class EMaterialLODType : uint8_t
{
	EMaterialLODType__Off          = 0,
	EMaterialLODType__BakeTexture  = 1,
	EMaterialLODType__BakeVertexColor = 2,
	EMaterialLODType__Replace      = 3,
	EMaterialLODType__EMaterialLODType_MAX = 4
};



enum class ESimplygonLODType : uint8_t
{
	ESimplygonLODType__Reduction   = 0,
	ESimplygonLODType__Remeshing   = 1,
	ESimplygonLODType__ESimplygonLODType_MAX = 2
};



enum class EOptimizationMetric : uint8_t
{
	EOptimizationMetric__TrianglePercentage = 0,
	EOptimizationMetric__OnScreenSize = 1,
	EOptimizationMetric__MaxDeviation = 2,
	EOptimizationMetric__EOptimizationMetric_MAX = 3
};



enum class EMaterialProxySmaplingQuality : uint8_t
{
	EMaterialProxySmaplingQuality__Poor = 0,
	EMaterialProxySmaplingQuality__Low = 1,
	EMaterialProxySmaplingQuality__Medium = 2,
	EMaterialProxySmaplingQuality__High = 3,
	EMaterialProxySmaplingQuality__EMaterialProxySmaplingQuality_MAX = 4
};



enum class EUVStrech : uint8_t
{
	EUVStrech__Small               = 0,
	EUVStrech__Medium              = 1,
	EUVStrech__Large               = 2,
	EUVStrech__VeryLarge           = 3,
	EUVStrech__EUVStrech_MAX       = 4
};



enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};



enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};



enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6
};



enum class EPlaneDir : uint8_t
{
	EPlaneDir__Top                 = 0,
	EPlaneDir__Down                = 1,
	EPlaneDir__Left                = 2,
	EPlaneDir__Right               = 3,
	EPlaneDir__EPlaneDir_MAX       = 4
};



enum class EMeshInstancingReplacementMethod : uint8_t
{
	EMeshInstancingReplacementMethod__RemoveOriginalActors = 0,
	EMeshInstancingReplacementMethod__KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod__EMeshInstancingReplacementMethod_MAX = 2
};



enum class EUVStrategy : uint8_t
{
	EUVStrategy__Default           = 0,
	EUVStrategy__Conservative      = 1,
	EUVStrategy__Aggressive        = 2,
	EUVStrategy__MultiUV           = 3,
	EUVStrategy__EUVStrategy_MAX   = 4
};



enum class EUVOutput : uint8_t
{
	EUVOutput__DoNotOutputChannel  = 0,
	EUVOutput__OutputChannel       = 1,
	EUVOutput__EUVOutput_MAX       = 2
};



enum class EMeshMergeType : uint8_t
{
	EMeshMergeType__MeshMergeType_Default = 0,
	EMeshMergeType__MeshMergeType_MergeActor = 1,
	EMeshMergeType__MeshMergeType_MAX = 2
};



enum class EMeshLODSelectionType : uint8_t
{
	EMeshLODSelectionType__AllLODs = 0,
	EMeshLODSelectionType__SpecificLOD = 1,
	EMeshLODSelectionType__CalculateLOD = 2,
	EMeshLODSelectionType__LowestDetailLOD = 3,
	EMeshLODSelectionType__EMeshLODSelectionType_MAX = 4
};



enum class ELandscapeCullingPrecision : uint8_t
{
	ELandscapeCullingPrecision__High = 0,
	ELandscapeCullingPrecision__Medium = 1,
	ELandscapeCullingPrecision__Low = 2,
	ELandscapeCullingPrecision__ELandscapeCullingPrecision_MAX = 3
};



enum class EChartAggregationMode : uint8_t
{
	EChartAggregationMode__TextureSize = 0,
	EChartAggregationMode__SurfaceArea = 1,
	EChartAggregationMode__PixelDensity = 2,
	EChartAggregationMode__UVSize  = 3,
	EChartAggregationMode__EChartAggregationMode_MAX = 4
};



enum class EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	EMeshFeatureImportance__Lowest = 1,
	EMeshFeatureImportance__Low    = 2,
	EMeshFeatureImportance__Normal = 3,
	EMeshFeatureImportance__High   = 4,
	EMeshFeatureImportance__Highest = 5,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6
};



enum class EVertexPaintAxis : uint8_t
{
	EVertexPaintAxis__X            = 0,
	EVertexPaintAxis__Y            = 1,
	EVertexPaintAxis__Z            = 2,
	EVertexPaintAxis__EVertexPaintAxis_MAX = 3
};



enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};



enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};



enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4
};



enum class EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	FNavigationSystemRunMode__GameMode = 1,
	FNavigationSystemRunMode__EditorMode = 2,
	FNavigationSystemRunMode__SimulationMode = 3,
	FNavigationSystemRunMode__PIEMode = 4,
	FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5
};



enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3
};



enum class ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	ENavigationQueryResult__Error  = 1,
	ENavigationQueryResult__Fail   = 2,
	ENavigationQueryResult__Success = 3,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 4
};



enum class ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	ENavDataGatheringModeConfig__Instant = 1,
	ENavDataGatheringModeConfig__Lazy = 2,
	ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 3
};



enum class ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	ENavDataGatheringMode__Instant = 1,
	ENavDataGatheringMode__Lazy    = 2,
	ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3
};



enum class ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	ENavigationOptionFlag__Enable  = 1,
	ENavigationOptionFlag__Disable = 2,
	ENavigationOptionFlag__MAX     = 3
};



enum class ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	ENavLinkDirection__LeftToRight = 1,
	ENavLinkDirection__RightToLeft = 2,
	ENavLinkDirection__ENavLinkDirection_MAX = 3
};



enum class EObjectPoolFenceType : uint8_t
{
	EObjectPoolFenceType__Spawning = 0,
	EObjectPoolFenceType__Ticking  = 1,
	EObjectPoolFenceType__Recycling = 2,
	EObjectPoolFenceType__Max      = 3
};



enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};



enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};



enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};



enum class EParticleEngineVectorParamTags : uint8_t
{
	EngineVector_Position          = 0,
	EngineVector_Velocity          = 1,
	EngineVector_XAxis             = 2,
	EngineVector_YAxis             = 3,
	EngineVector_ZAxis             = 4,
	EngineVector_Scale             = 5,
	EngineVector_MAX               = 6
};



enum class EParticleEngineFloatParamTags : uint8_t
{
	EngineFloat_VelocityMagnitude  = 0,
	EngineFloat_DeltaTime          = 1,
	EngineFloat_Time               = 2,
	EngineFloat_RealTime           = 3,
	EngineFloat_TimeSinceRendered  = 4,
	EngineFloat_QualityLevel       = 5,
	EngineFloat_MAX                = 6
};



enum class EParticleSystemInsignificanceReaction : uint8_t
{
	EParticleSystemInsignificanceReaction__Auto = 0,
	EParticleSystemInsignificanceReaction__Complete = 1,
	EParticleSystemInsignificanceReaction__DisableTick = 2,
	EParticleSystemInsignificanceReaction__DisableTickAndKill = 3,
	EParticleSystemInsignificanceReaction__Num = 4,
	EParticleSystemInsignificanceReaction__EParticleSystemInsignificanceReaction_MAX = 5
};



enum class EParticleSignificanceLevel : uint8_t
{
	EParticleSignificanceLevel__Low = 0,
	EParticleSignificanceLevel__Medium = 1,
	EParticleSignificanceLevel__High = 2,
	EParticleSignificanceLevel__Critical = 3,
	EParticleSignificanceLevel__Num = 4,
	EParticleSignificanceLevel__EParticleSignificanceLevel_MAX = 5
};



enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};



enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};



enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};



enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};



enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};



enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};



enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};



enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};



enum class EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	EParticleCollisionResponse__Stop = 1,
	EParticleCollisionResponse__Kill = 2,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3
};



enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};



enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};



enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};



enum class EPrimitiveVelocityDirection : uint8_t
{
	EPrimitiveVelocityDirection__PVD_None = 0,
	EPrimitiveVelocityDirection__PVD_Outward = 1,
	EPrimitiveVelocityDirection__PVD_Inward = 2,
	EPrimitiveVelocityDirection__PVD_MAX = 3
};



enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};



enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};



enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};



enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};



enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};



enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};



enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};



enum class EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	EParticleUVFlipMode__FlipUV    = 1,
	EParticleUVFlipMode__FlipUOnly = 2,
	EParticleUVFlipMode__FlipVOnly = 3,
	EParticleUVFlipMode__RandomFlipUV = 4,
	EParticleUVFlipMode__RandomFlipUOnly = 5,
	EParticleUVFlipMode__RandomFlipVOnly = 6,
	EParticleUVFlipMode__RandomFlipUVIndependent = 7,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8
};



enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};



enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};



enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};



enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};



enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};



enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};



enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};



enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};



enum class EParticleSystemMeshCameraFacingScaleMode : uint8_t
{
	PSMCFSM_Legacy                 = 0,
	PSMCFSM_PositiveComponentScale = 1,
	PSMCFSM_MAX                    = 2
};



enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};



enum class EParticleSimulatedProxyTickMethod : uint8_t
{
	Tick                           = 0,
	NoTickLowDevices               = 1,
	NoTickMiddleDevices            = 2,
	NoTickHighDevices              = 3,
	ParticleSimulatedProxyTickMethod_MAX = 4
};



enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};



enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};



enum class EParticleCurveParamType : uint8_t
{
	PCPT_None                      = 0,
	PCPT_Float                     = 1,
	PCPT_Vector                    = 2,
	PCPT_LinearColor               = 3,
	PCPT_Float_MT                  = 4,
	PCPT_Vector_MT                 = 5,
	PCPT_LinearColor_MT            = 6,
	PCPT_MAX                       = 7
};



enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};



enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};



enum class EParticleShapeInOut : uint8_t
{
	EParticleShapeInOut__None      = 0,
	EParticleShapeInOut__Outward   = 1,
	EParticleShapeInOut__Inward    = 2,
	EParticleShapeInOut__EParticleShapeInOut_MAX = 3
};



enum class EParticleShapeStyle : uint8_t
{
	EParticleShapeStyle__Volume    = 0,
	EParticleShapeStyle__Surface   = 1,
	EParticleShapeStyle__EParticleShapeStyle_MAX = 2
};



enum class EParticleFaceCameraMode : uint8_t
{
	EParticleFaceCameraMode__FaceToCamera = 0,
	EParticleFaceCameraMode__WorldX = 1,
	EParticleFaceCameraMode__WorldY = 2,
	EParticleFaceCameraMode__WorldZ = 3,
	EParticleFaceCameraMode__EParticleFaceCameraMode_MAX = 4
};



enum class ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	ESettingsLockedAxis__X         = 1,
	ESettingsLockedAxis__Y         = 2,
	ESettingsLockedAxis__Z         = 3,
	ESettingsLockedAxis__Invalid   = 4,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5
};



enum class ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	ESettingsDOF__YZPlane          = 1,
	ESettingsDOF__XZPlane          = 2,
	ESettingsDOF__XYPlane          = 3,
	ESettingsDOF__ESettingsDOF_MAX = 4
};



enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	EFrictionCombineMode__Min      = 1,
	EFrictionCombineMode__Multiply = 2,
	EFrictionCombineMode__Max      = 3
};



enum class ERecastWithoutLayerCachePartitioning : uint8_t
{
	ERecastWithoutLayerCachePartitioning__Watershed = 0,
	ERecastWithoutLayerCachePartitioning__Monotone = 1,
	ERecastWithoutLayerCachePartitioning__LayerRegion = 2,
	ERecastWithoutLayerCachePartitioning__ERecastWithoutLayerCachePartitioning_MAX = 3
};



enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3
};



enum class EReflectionSourceType : uint8_t
{
	EReflectionSourceType__CapturedScene = 0,
	EReflectionSourceType__SpecifiedCubemap = 1,
	EReflectionSourceType__EReflectionSourceType_MAX = 2
};



enum class EAutoDormancyType : uint8_t
{
	EAutoDormancyType__None        = 0,
	EAutoDormancyType__ActorTickClient = 1,
	EAutoDormancyType__ComponentsTickClient = 2,
	EAutoDormancyType__ActorTickServer = 3,
	EAutoDormancyType__ComponentsTickServer = 4,
	EAutoDormancyType__Net         = 5,
	EAutoDormancyType__EAutoDormancyType_MAX = 6
};



enum class EAutoExposureMethodUI : uint8_t
{
	EAutoExposureMethodUI__AEM_Histogram = 0,
	EAutoExposureMethodUI__AEM_Basic = 1,
	EAutoExposureMethodUI__AEM_MAX = 2
};



enum class EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	EEarlyZPass__OpaqueOnly        = 1,
	EEarlyZPass__OpaqueAndMasked   = 2,
	EEarlyZPass__Auto              = 3,
	EEarlyZPass__EEarlyZPass_MAX   = 4
};



enum class ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	ECustomDepthStencil__Enabled   = 1,
	ECustomDepthStencil__EnabledOnDemand = 2,
	ECustomDepthStencil__EnabledWithStencil = 3,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 4
};



enum class EMobileMSAASampleCount : uint8_t
{
	EMobileMSAASampleCount__One    = 0,
	EMobileMSAASampleCount__Two    = 1,
	EMobileMSAASampleCount__Four   = 2,
	EMobileMSAASampleCount__Eight  = 3,
	EMobileMSAASampleCount__EMobileMSAASampleCount_MAX = 4
};



enum class ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	ECompositingSampleCount__Two   = 1,
	ECompositingSampleCount__Four  = 2,
	ECompositingSampleCount__Eight = 3,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 4
};



enum class EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	EClearSceneOptions__HardwareClear = 1,
	EClearSceneOptions__QuadAtMaxZ = 2,
	EClearSceneOptions__EClearSceneOptions_MAX = 3
};



enum class EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	EReporterLineStyle__Dash       = 1,
	EReporterLineStyle__EReporterLineStyle_MAX = 2
};



enum class ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	ELegendPosition__Inside        = 1,
	ELegendPosition__ELegendPosition_MAX = 2
};



enum class EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	EGraphDataStyle__Filled        = 1,
	EGraphDataStyle__EGraphDataStyle_MAX = 2
};



enum class EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	EGraphAxisStyle__Notches       = 1,
	EGraphAxisStyle__Grid          = 2,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 3
};



enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};



enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};



enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};



enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};



enum class EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	EConstraintTransform__Relative = 1,
	EConstraintTransform__EConstraintTransform_MAX = 2
};



enum class EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	EControlConstraint__Translation = 1,
	EControlConstraint__MAX        = 2
};



enum class ERootMotionFinishVelocityMode : uint8_t
{
	ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
	ERootMotionFinishVelocityMode__SetVelocity = 1,
	ERootMotionFinishVelocityMode__ClampVelocity = 2,
	ERootMotionFinishVelocityMode__ERootMotionFinishVelocityMode_MAX = 3
};



enum class ERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck = 0,
	ERootMotionSourceSettingsFlags__DisablePartialEndTick = 1,
	ERootMotionSourceSettingsFlags__ERootMotionSourceSettingsFlags_MAX = 2
};



enum class ERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags__Prepared = 0,
	ERootMotionSourceStatusFlags__Finished = 1,
	ERootMotionSourceStatusFlags__MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 3
};



enum class ERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode__Override = 0,
	ERootMotionAccumulateMode__Additive = 1,
	ERootMotionAccumulateMode__ERootMotionAccumulateMode_MAX = 2
};



enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4
};



enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	ESceneCapturePrimitiveRenderMode__PRM_LegacySceneCapture = 0,
	ESceneCapturePrimitiveRenderMode__PRM_RenderScenePrimitives = 1,
	ESceneCapturePrimitiveRenderMode__PRM_UseShowOnlyList = 2,
	ESceneCapturePrimitiveRenderMode__PRM_MAX = 3
};



enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Normal                      = 9,
	MP_WorldPositionOffset         = 10,
	MP_WorldDisplacement           = 11,
	MP_TessellationMultiplier      = 12,
	MP_SubsurfaceColor             = 13,
	MP_CustomData0                 = 14,
	MP_CustomData1                 = 15,
	MP_AmbientOcclusion            = 16,
	MP_Refraction                  = 17,
	MP_CustomizedUVs0              = 18,
	MP_CustomizedUVs1              = 19,
	MP_CustomizedUVs2              = 20,
	MP_CustomizedUVs3              = 21,
	MP_CustomizedUVs4              = 22,
	MP_CustomizedUVs5              = 23,
	MP_CustomizedUVs6              = 24,
	MP_CustomizedUVs7              = 25,
	MP_PixelDepthOffset            = 26,
	MP_CustomizedVertexColor       = 27,
	MP_PlanarReflectionOffsetScale = 28,
	MP_MaterialAttributes          = 29,
	MP_CustomOutput                = 30,
	MP_MAX                         = 31
};



enum class EWindowTitleBarMode : uint8_t
{
	EWindowTitleBarMode__Overlay   = 0,
	EWindowTitleBarMode__VerticalBox = 1,
	EWindowTitleBarMode__EWindowTitleBarMode_MAX = 2
};



enum class ESkeletalMeshLODType : uint8_t
{
	ESkeletalMeshLODType__Reduction = 0,
	ESkeletalMeshLODType__Proxy    = 1,
	ESkeletalMeshLODType__ESkeletalMeshLODType_MAX = 2
};



enum class ELODDropResult : uint8_t
{
	ELODDropResult__Success        = 0,
	ELODDropResult__DisabledByCVar = 1,
	ELODDropResult__InvalidIndex   = 2,
	ELODDropResult__AlreadyInRequestedState = 3,
	ELODDropResult__ProtectedLOD   = 4,
	ELODDropResult__NoValidLODRemaining = 5,
	ELODDropResult__CPUDataUnavailable = 6,
	ELODDropResult__NotOnGameThread = 7,
	ELODDropResult__PendingStreamingLoad = 8,
	ELODDropResult__DisabledByFreeSkeletalMeshBuffers = 9,
	ELODDropResult__ELODDropResult_MAX = 10
};



enum class EBoneFilterActionOption : uint8_t
{
	EBoneFilterActionOption__Remove = 0,
	EBoneFilterActionOption__Keep  = 1,
	EBoneFilterActionOption__Invalid = 2,
	EBoneFilterActionOption__EBoneFilterActionOption_MAX = 3
};



enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};



enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_TriangleOrDeviation       = 2,
	SMOT_ScreenSize                = 3,
	SMOT_MAX                       = 4
};



enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};



enum class ESkeletaTickMode : uint8_t
{
	ESkeletaTickMode__TICK_ALL     = 0,
	ESkeletaTickMode__TICK_ANI_NOT_LOD = 1,
	ESkeletaTickMode__TICK_NONE    = 2,
	ESkeletaTickMode__TICK_LOD_NOT_ANI = 3,
	ESkeletaTickMode__TICK_MAX     = 4
};



enum class EPhysicsTransformUpdateMode : uint8_t
{
	EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
	EPhysicsTransformUpdateMode__ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode__EPhysicsTransformUpdateMode_MAX = 2
};



enum class ESkeletalMeshGroupRole : uint8_t
{
	ESkeletalMeshGroupRole__None   = 0,
	ESkeletalMeshGroupRole__Group1_Leader = 1,
	ESkeletalMeshGroupRole__Group1_Member = 2,
	ESkeletalMeshGroupRole__Group2_Leader = 3,
	ESkeletalMeshGroupRole__Group2_Member = 4,
	ESkeletalMeshGroupRole__Group3_Leader = 5,
	ESkeletalMeshGroupRole__Group3_Member = 6,
	ESkeletalMeshGroupRole__Group4_Leader = 7,
	ESkeletalMeshGroupRole__Group4_Member = 8,
	ESkeletalMeshGroupRole__Group5_Leader = 9,
	ESkeletalMeshGroupRole__Group5_Member = 10,
	ESkeletalMeshGroupRole__Group6_Leader = 11,
	ESkeletalMeshGroupRole__Group6_Member = 12,
	ESkeletalMeshGroupRole__Group7_Leader = 13,
	ESkeletalMeshGroupRole__Group7_Member = 14,
	ESkeletalMeshGroupRole__Group8_Leader = 15,
	ESkeletalMeshGroupRole__Group8_Member = 16,
	ESkeletalMeshGroupRole__Group9_Leader = 17,
	ESkeletalMeshGroupRole__Group9_Member = 18,
	ESkeletalMeshGroupRole__Group10_Leader = 19,
	ESkeletalMeshGroupRole__Group10_Member = 20,
	ESkeletalMeshGroupRole__ESkeletalMeshGroupRole_MAX = 21
};



enum class EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	EAnimationMode__AnimationSingleNode = 1,
	EAnimationMode__AnimationCustomMode = 2,
	EAnimationMode__EAnimationMode_MAX = 3
};



enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2
};



enum class EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	EBoneTranslationRetargetingMode__Skeleton = 1,
	EBoneTranslationRetargetingMode__AnimationScaled = 2,
	EBoneTranslationRetargetingMode__AnimationRelative = 3,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 4
};



enum class EGlobalUROExcludeFlags : uint8_t
{
	EGlobalUROExcludeFlags__URO_Exclude_None = 0,
	EGlobalUROExcludeFlags__URO_Exclude_MinURO = 1,
	EGlobalUROExcludeFlags__URO_Exclude_Bias = 2,
	EGlobalUROExcludeFlags__URO_Exclude_All = 3,
	EGlobalUROExcludeFlags__URO_Exclude_MAX = 4
};



enum class EMeshComponentUpdateFlag : uint8_t
{
	EMeshComponentUpdateFlag__AlwaysTickPoseAndRefreshBones = 0,
	EMeshComponentUpdateFlag__AlwaysTickPose = 1,
	EMeshComponentUpdateFlag__OnlyTickMontagesWhenNotRendered = 2,
	EMeshComponentUpdateFlag__OnlyTickPoseWhenRendered = 3,
	EMeshComponentUpdateFlag__EMeshComponentUpdateFlag_MAX = 4
};



enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};



enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};



enum class ESkyAtmosphereTransformMode : uint8_t
{
	ESkyAtmosphereTransformMode__PlanetTopAtAbsoluteWorldOrigin = 0,
	ESkyAtmosphereTransformMode__PlanetTopAtComponentTransform = 1,
	ESkyAtmosphereTransformMode__PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode__ESkyAtmosphereTransformMode_MAX = 3
};



enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};



enum class EReverbSendMethod : uint8_t
{
	EReverbSendMethod__Linear      = 0,
	EReverbSendMethod__CustomCurve = 1,
	EReverbSendMethod__Manual      = 2,
	EReverbSendMethod__EReverbSendMethod_MAX = 3
};



enum class EAirAbsorptionMethod : uint8_t
{
	EAirAbsorptionMethod__Linear   = 0,
	EAirAbsorptionMethod__CustomCurve = 1,
	EAirAbsorptionMethod__EAirAbsorptionMethod_MAX = 2
};



enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};



enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};



enum class EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	EAudioOutputTarget__Controller = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 3
};



enum class EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	EMaxConcurrentResolutionRule__StopOldest = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule__StopLowestPriority = 4,
	EMaxConcurrentResolutionRule__StopQuietest = 5,
	EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 7
};



enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};



enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};



enum class ESourceBusChannels : uint8_t
{
	ESourceBusChannels__Mono       = 0,
	ESourceBusChannels__Stereo     = 1,
	ESourceBusChannels__ESourceBusChannels_MAX = 2
};



enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};



enum class ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	ESplineCoordinateSpace__World  = 1,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2
};



enum class ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	ESplinePointType__Curve        = 1,
	ESplinePointType__Constant     = 2,
	ESplinePointType__CurveClamped = 3,
	ESplinePointType__CurveCustomTangent = 4,
	ESplinePointType__ESplinePointType_MAX = 5
};



enum class ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	ESplineMeshAxis__Y             = 1,
	ESplineMeshAxis__Z             = 2,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 3
};



enum class EStaticMeshLODType : uint8_t
{
	EStaticMeshLODType__Reduction  = 0,
	EStaticMeshLODType__Proxy      = 1,
	EStaticMeshLODType__EStaticMeshLODType_MAX = 2
};



enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};



enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};



enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};



enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_MAX                       = 3
};



enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};



enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};



enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};



enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};



enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};



enum class ETextureBasisSetting : uint8_t
{
	TCS_BasisDefault               = 0,
	TCS_EnableBasisCompression     = 1,
	TCS_DisableBasisCompression    = 2,
	TCS_MAX                        = 3
};



enum class ETextureCrunchSetting : uint8_t
{
	TCS_Default                    = 0,
	TCS_EnableCrunchCompression    = 1,
	TCS_DisableCrunchCompression   = 2
};



enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default                    = 0,
	TCQ_Lowest                     = 1,
	TCQ_Low                        = 2,
	TCQ_Medium                     = 3,
	TCQ_High                       = 4,
	TCQ_Highest                    = 5,
	TCQ_MAX                        = 6
};



enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_MAX                        = 8
};



enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};



enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};



enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};



enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};



enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};



enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12
};



enum class ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	ETextureSamplerFilter__Bilinear = 1,
	ETextureSamplerFilter__Trilinear = 2,
	ETextureSamplerFilter__AnisotropicPoint = 3,
	ETextureSamplerFilter__AnisotropicLinear = 4,
	ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5
};



enum class ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3
};



enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};



enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_TerrainAlbedo     = 30,
	TEXTUREGROUP_MaskedBillboard   = 31,
	TEXTUREGROUP_CharacterHD       = 32,
	TEXTUREGROUP_CharacterNormalMapHD = 33,
	TEXTUREGROUP_CharacterSpecularHD = 34,
	TEXTUREGROUP_WeaponHD          = 35,
	TEXTUREGROUP_WeaponNormalMapHD = 36,
	TEXTUREGROUP_WeaponSpecularHD  = 37,
	TEXTUREGROUP_WorldHD           = 38,
	TEXTUREGROUP_WorldNormalMapHD  = 39,
	TEXTUREGROUP_WorldSpecularHD   = 40,
	TEXTUREGROUP_WorldAniso        = 41,
	TEXTUREGROUP_GamePOI           = 42,
	TEXTUREGROUP_MAX               = 43
};



enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_R16f                       = 3,
	RTF_RG16f                      = 4,
	RTF_RGBA16f                    = 5,
	RTF_R32f                       = 6,
	RTF_RG32f                      = 7,
	RTF_RGBA32f                    = 8,
	RTF_MAX                        = 9
};



enum class ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	ETimelineDirection__Backward   = 1,
	ETimelineDirection__ETimelineDirection_MAX = 2
};



enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};



enum class ETimeStretchCurveMapping : uint8_t
{
	ETimeStretchCurveMapping__T_Original = 0,
	ETimeStretchCurveMapping__T_TargetMin = 1,
	ETimeStretchCurveMapping__T_TargetMax = 2,
	ETimeStretchCurveMapping__MAX  = 3
};



enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};



enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};



enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};



enum class EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	EUIScalingRule__LongestSide    = 1,
	EUIScalingRule__Horizontal     = 2,
	EUIScalingRule__Vertical       = 3,
	EUIScalingRule__Custom         = 4,
	EUIScalingRule__EUIScalingRule_MAX = 5
};



enum class ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	ERenderFocusRule__NonPointer   = 1,
	ERenderFocusRule__NavigationOnly = 2,
	ERenderFocusRule__Never        = 3,
	ERenderFocusRule__ERenderFocusRule_MAX = 4
};



enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};



enum class EWindSourceType : uint8_t
{
	EWindSourceType__Directional   = 0,
	EWindSourceType__Point         = 1,
	EWindSourceType__EWindSourceType_MAX = 2
};



enum class EIdeaBakingLayout : uint8_t
{
	EIdeaBakingLayout__Sun3Sky     = 0,
	EIdeaBakingLayout__Sun1SkyLocal1 = 1,
	EIdeaBakingLayout__Sun3SkyLocal3 = 2,
	EIdeaBakingLayout__Sun2SkyLocal1 = 3,
	EIdeaBakingLayout__Local3Sky   = 4,
	EIdeaBakingLayout__Sun1PortalSkyLocal1 = 5,
	EIdeaBakingLayout__Sun1OccLocal1 = 6,
	EIdeaBakingLayout__Sun1SkyLocal1Occ = 7,
	EIdeaBakingLayout__Sun3SkyLocal3Occ = 8,
	EIdeaBakingLayout__EIdeaBakingLayout_MAX = 9
};



enum class EIdeaBakingMode : uint8_t
{
	EIdeaBakingMode__BruteForce    = 0,
	EIdeaBakingMode__TwoPass       = 1,
	EIdeaBakingMode__EIdeaBakingMode_MAX = 2
};



enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap         = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX                        = 2
};



enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};









struct FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	unsigned char                                      bTickEvenWhenPaused : 1;                                  
	unsigned char                                      bCanEverTick : 1;                                         
	unsigned char                                      bStartWithTickEnabled : 1;                                
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          
	unsigned char                                      UnknownData02[0x33];                                      
	float                                              TickInterval;                                             
	unsigned char                                      UnknownData03[0x6C];                                      
};



struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                           
	struct FVector                                     AngularVelocity;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	struct FName                                       LocationQuantizationLODGroup;                             
	EVectorQuantization                                LocationQuantizationLevel;                                
	EVectorQuantization                                VelocityQuantizationLevel;                                
	ERotatorQuantization                               RotationQuantizationLevel;                                
	unsigned char                                      bSimulatedPhysicSleep : 1;                                
	unsigned char                                      bRepPhysics : 1;                                          
	unsigned char                                      bPhysicsHit : 1;                                          
	unsigned char                                      LocationQuantizationLODEnabled : 1;                       
	unsigned char                                      ForcedLocationQuantizationLOD;                            
	unsigned char                                      UnknownData00[0xB];                                       
};



struct FVector_NetQuantize100 : public FVector
{

};



struct FRepAttachment
{
	class AActor*                                      AttachParent;                                             
	struct FVector_NetQuantize100                      LocationOffset;                                           
	struct FVector_NetQuantize100                      RelativeScale3D;                                          
	struct FRotator                                    RotationOffset;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       AttachSocket;                                             
	class USceneComponent*                             AttachComponent;                                          
	unsigned char                                      ExtraData;                                                
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FVector_NetQuantize : public FVector
{

};



struct FVector_NetQuantizeNormal : public FVector
{

};



struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                         
	unsigned char                                      bStartPenetrating : 1;                                    
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Time;                                                     
	float                                              Distance;                                                 
	struct FVector_NetQuantize                         Location;                                                 
	struct FVector_NetQuantize                         ImpactPoint;                                              
	struct FVector_NetQuantizeNormal                   Normal;                                                   
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             
	struct FVector_NetQuantize                         TraceStart;                                               
	struct FVector_NetQuantize                         TraceEnd;                                                 
	float                                              PenetrationDepth;                                         
	int                                                Item;                                                     
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             
	TWeakObjectPtr<class AActor>                       Actor;                                                    
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       BoneName;                                                 
	int                                                FaceIndex;                                                
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FTriggerEvent
{
	ETriggerAction                                     Action;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
	TWeakObjectPtr<class AActor>                       TriggerActor;                                             
	TWeakObjectPtr<class UPrimitiveComponent>          TriggerComponent;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       TriggerBoneName;                                          
	int                                                TriggerInstanceIndex;                                     
	TWeakObjectPtr<class AActor>                       OtherActor;                                               
	TWeakObjectPtr<class UPrimitiveComponent>          OtherComponent;                                           
	unsigned char                                      UnknownData02[0x4];                                       
	struct FName                                       OtherBoneName;                                            
	int                                                OtherInstanceIndex;                                       
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FGeomSelection
{
	int                                                Type;                                                     
	int                                                Index;                                                    
	int                                                SelectionIndex;                                           
};



struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                             
	struct FName                                       MemberName;                                               
	struct FGuid                                       MemberGuid;                                               
};



struct FBlueprintComponentChangedPropertyInfo
{
	struct FName                                       PropertyName;                                             
	int                                                ArrayIndex;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	class UStruct*                                     PropertyScope;                                            
};



struct FBlueprintCookedComponentInstancingData
{
	bool                                               bIsValid;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                                      
	unsigned char                                      UnknownData01[0x38];                                      
};



struct FLightingChannels
{
	unsigned char                                      bChannel0 : 1;                                            
	unsigned char                                      bChannel1 : 1;                                            
	unsigned char                                      bChannel2 : 1;                                            
};



struct FCollisionResponseContainer
{
	TEnumAsByte<ECollisionResponse>                    WorldStatic;                                              
	TEnumAsByte<ECollisionResponse>                    WorldDynamic;                                             
	TEnumAsByte<ECollisionResponse>                    Pawn;                                                     
	TEnumAsByte<ECollisionResponse>                    Visibility;                                               
	TEnumAsByte<ECollisionResponse>                    Camera;                                                   
	TEnumAsByte<ECollisionResponse>                    PhysicsBody;                                              
	TEnumAsByte<ECollisionResponse>                    Vehicle;                                                  
	TEnumAsByte<ECollisionResponse>                    Destructible;                                             
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel1;                                      
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel2;                                      
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel3;                                      
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel4;                                      
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel5;                                      
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel6;                                      
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel1;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel2;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel3;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel4;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel5;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel6;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel7;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel8;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel9;                                        
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel10;                                       
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel11;                                       
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel12;                                       
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel13;                                       
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel14;                                       
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel15;                                       
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel16;                                       
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel17;                                       
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel18;                                       
};



struct FResponseChannel
{
	struct FName                                       Channel;                                                  
	TEnumAsByte<ECollisionResponse>                    Response;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                       
	TArray<struct FResponseChannel>                    ResponseArray;                                            
};



struct FWalkableSlopeOverride
{
	TEnumAsByte<EWalkableSlopeBehavior>                WalkableSlopeBehavior;                                    
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              WalkableSlopeAngle;                                       
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FPhysicsDisplayPose
{
	struct FVector                                     Location;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FQuat                                       Rotation;                                                 
	unsigned char                                      bValid : 1;                                               
	unsigned char                                      UnknownData01[0xF];                                       
};



struct FPhysicsDisplayPoseHistory
{
	struct FPhysicsDisplayPose                         Previous;                                                 
	struct FPhysicsDisplayPose                         Current;                                                  
	unsigned char                                      bInitialized : 1;                                         
	unsigned char                                      bResetRequested : 1;                                      
	unsigned char                                      UnknownData00[0xF];                                       
};



struct FBodyInstance
{
	unsigned char                                      UnknownData00[0x19];                                      
	ESleepFamily                                       SleepFamily;                                              
	TEnumAsByte<EDOFMode>                              DOFMode;                                                  
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       CollisionProfileName;                                     
	struct FCollisionResponse                          CollisionResponses;                                       
	unsigned char                                      UnknownData02[0x1];                                       
	unsigned char                                      bRecreatePhysicsStateWhenChangeCollision : 1;             
	unsigned char                                      bUseMinCollisionEnabled : 1;                              
	unsigned char                                      bUseCCD : 1;                                              
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            
	unsigned char                                      bSimulatePhysics : 1;                                     
	unsigned char                                      bOverrideMass : 1;                                        
	unsigned char                                      bEnableGravity : 1;                                       
	unsigned char                                      bAutoWeld : 1;                                            
	unsigned char                                      bStartAwake : 1;                                          
	unsigned char                                      bGenerateWakeEvents : 1;                                  
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                          
	unsigned char                                      bLockTranslation : 1;                                     
	unsigned char                                      bLockRotation : 1;                                        
	unsigned char                                      bLockXTranslation : 1;                                    
	unsigned char                                      bLockYTranslation : 1;                                    
	unsigned char                                      bLockZTranslation : 1;                                    
	unsigned char                                      bLockXRotation : 1;                                       
	unsigned char                                      bLockYRotation : 1;                                       
	unsigned char                                      bLockZRotation : 1;                                       
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          
	unsigned char                                      UnknownData03 : 1;                                        
	unsigned char                                      bUseAsyncScene : 1;                                       
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     
	unsigned char                                      UnknownData04[0x4];                                       
	float                                              MaxDepenetrationVelocity;                                 
	unsigned char                                      UnknownData05[0x8];                                       
	float                                              MassInKgOverride;                                         
	float                                              LinearDamping;                                            
	float                                              AngularDamping;                                           
	struct FVector                                     CustomDOFPlaneNormal;                                     
	struct FVector                                     COMNudge;                                                 
	float                                              MassScale;                                                
	struct FVector                                     InertiaTensorScale;                                       
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               
	unsigned char                                      UnknownData06[0x17];                                      
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    
	class UPhysicalMaterial*                           PhysMaterialOverride;                                     
	float                                              MaxAngularVelocity;                                       
	float                                              CustomSleepThresholdMultiplier;                           
	float                                              StabilizationThresholdMultiplier;                         
	float                                              PhysicsBlendWeight;                                       
	int                                                PositionSolverIterationCount;                             
	unsigned char                                      UnknownData07[0x2C];                                      
	uint64_t                                           RigidActorSyncId;                                         
	uint64_t                                           RigidActorAsyncId;                                        
	int                                                VelocitySolverIterationCount;                             
	unsigned char                                      UnknownData08[0xC];                                       
	struct FPhysicsDisplayPoseHistory                  PhysicsDisplayPoseHistory;                                
	unsigned char                                      UnknownData09[0x70];                                      
};



struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FPaintedVertex
{
	struct FVector                                     Position;                                                 
	struct FPackedNormal                               Normal;                                                   
	struct FColor                                      Color;                                                    
};



struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x20];                                      
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          
	unsigned char                                      UnknownData01[0x80];                                      
};



struct FStreamingTextureBuildInfo
{
	uint32_t                                           PackedRelativeBox;                                        
	int                                                TextureLevelIndex;                                        
	float                                              TexelFactor;                                              
};



struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                 
	unsigned char                                      bShadowIndirectOnly : 1;                                  
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              EmissiveLightFalloffExponent;                             
	float                                              EmissiveLightExplicitInfluenceRadius;                     
	float                                              EmissiveBoost;                                            
	float                                              DiffuseBoost;                                             
	float                                              FullyOccludedSamplesFraction;                             
};



struct FIdeaBakingPrimitiveSettings
{
	float                                              IdeaMaterialDiffuse;                                      
	float                                              LightmapBoost;                                            
	float                                              DiscardPixelFrontfaceFactor;                              
	float                                              SunIntensity;                                             
	float                                              LocalLightsAffectMaxDistance;                             
};



struct FStaticMeshPointLightVertexDataBuffer
{
	TArray<unsigned char>                              VertexData;                                               
};



struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                             
	bool                                               Enabled;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FWeightedBlendable
{
	float                                              Weight;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	class UObject*                                     Object;                                                   
};



struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                    
};



struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  
	unsigned char                                      bOverride_WhiteTint : 1;                                  
	unsigned char                                      bOverride_ColorSaturation : 1;                            
	unsigned char                                      bOverride_ColorContrast : 1;                              
	unsigned char                                      bOverride_ColorGamma : 1;                                 
	unsigned char                                      bOverride_ColorGain : 1;                                  
	unsigned char                                      bOverride_ColorOffset : 1;                                
	unsigned char                                      bOverride_ColorSaturationShadows : 1;                     
	unsigned char                                      bOverride_ColorContrastShadows : 1;                       
	unsigned char                                      bOverride_ColorGammaShadows : 1;                          
	unsigned char                                      bOverride_ColorGainShadows : 1;                           
	unsigned char                                      bOverride_ColorOffsetShadows : 1;                         
	unsigned char                                      bOverride_ColorSaturationMidtones : 1;                    
	unsigned char                                      bOverride_ColorContrastMidtones : 1;                      
	unsigned char                                      bOverride_ColorGammaMidtones : 1;                         
	unsigned char                                      bOverride_ColorGainMidtones : 1;                          
	unsigned char                                      bOverride_ColorOffsetMidtones : 1;                        
	unsigned char                                      bOverride_ColorSaturationHighlights : 1;                  
	unsigned char                                      bOverride_ColorContrastHighlights : 1;                    
	unsigned char                                      bOverride_ColorGammaHighlights : 1;                       
	unsigned char                                      bOverride_ColorGainHighlights : 1;                        
	unsigned char                                      bOverride_ColorOffsetHighlights : 1;                      
	unsigned char                                      bOverride_ColorCorrectionShadowsMax : 1;                  
	unsigned char                                      bOverride_ColorCorrectionHighlightsMin : 1;               
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             
	unsigned char                                      bOverride_FilmSaturation : 1;                             
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                        
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                      
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                       
	unsigned char                                      bOverride_FilmContrast : 1;                               
	unsigned char                                      bOverride_FilmDynamicRange : 1;                           
	unsigned char                                      bOverride_FilmHealAmount : 1;                             
	unsigned char                                      bOverride_FilmToeAmount : 1;                              
	unsigned char                                      bOverride_FilmShadowTint : 1;                             
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                        
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                       
	unsigned char                                      bOverride_FilmSlope : 1;                                  
	unsigned char                                      bOverride_FilmToe : 1;                                    
	unsigned char                                      bOverride_FilmShoulder : 1;                               
	unsigned char                                      bOverride_FilmBlackClip : 1;                              
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              
	unsigned char                                      bOverride_SceneColorTint : 1;                             
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    
	unsigned char                                      bOverride_BloomMethod : 1;                                
	unsigned char                                      bOverride_BloomIntensity : 1;                             
	unsigned char                                      bOverride_BloomThreshold : 1;                             
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 
	unsigned char                                      bOverride_Bloom1Size : 1;                                 
	unsigned char                                      bOverride_Bloom2Size : 1;                                 
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 
	unsigned char                                      bOverride_Bloom3Size : 1;                                 
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 
	unsigned char                                      bOverride_Bloom4Size : 1;                                 
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 
	unsigned char                                      bOverride_Bloom5Size : 1;                                 
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 
	unsigned char                                      bOverride_Bloom6Size : 1;                                 
	unsigned char                                      bOverride_BloomSizeScale : 1;                             
	unsigned char                                      bOverride_BloomConvolutionTexture : 1;                    
	unsigned char                                      bOverride_BloomConvolutionSize : 1;                       
	unsigned char                                      bOverride_BloomConvolutionCenterUV : 1;                   
	unsigned char                                      bOverride_BloomConvolutionPreFilter : 1;                  
	unsigned char                                      bOverride_BloomConvolutionPreFilterMin : 1;               
	unsigned char                                      bOverride_BloomConvolutionPreFilterMax : 1;               
	unsigned char                                      bOverride_BloomConvolutionPreFilterMult : 1;              
	unsigned char                                      bOverride_BloomConvolutionBufferScale : 1;                
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          
	unsigned char                                      bOverride_BloomDirtMask : 1;                              
	unsigned char                                      bOverride_RadialBlurCenterPos : 1;                        
	unsigned char                                      bOverride_RadialBlurIntensity : 1;                        
	unsigned char                                      bOverride_RadialBlurDistance : 1;                         
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      
	unsigned char                                      bOverride_AutoExposureBias : 1;                           
	unsigned char                                      bOverride_HistogramLogMin : 1;                            
	unsigned char                                      bOverride_HistogramLogMax : 1;                            
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         
	unsigned char                                      bOverride_LensFlareTint : 1;                              
	unsigned char                                      bOverride_LensFlareTints : 1;                             
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         
	unsigned char                                      bOverride_VignetteIntensity : 1;                          
	unsigned char                                      bOverride_GrainIntensity : 1;                             
	unsigned char                                      bOverride_GrainJitter : 1;                                
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               
	unsigned char                                      bOverride_LPVIntensity : 1;                               
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              
	unsigned char                                      bOverride_LPVSize : 1;                                    
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              
	unsigned char                                      bOverride_LPVFadeRange : 1;                               
	unsigned char                                      bOverride_LPVDirectionalOcclusionFadeRange : 1;           
	unsigned char                                      bOverride_SRTIndirectLightingColor : 1;                   
	unsigned char                                      bOverride_SRTIndirectLightingIntensity : 1;               
	unsigned char                                      bOverride_SRTMaxOcclusionDistance : 1;                    
	unsigned char                                      bOverride_SRTMinOcclusion : 1;                            
	unsigned char                                      bOverride_SRTDefaultOcclusion : 1;                        
	unsigned char                                      bOverride_SRTSkyLightScale : 1;                           
	unsigned char                                      bOverride_SRTDirectionalLightScale : 1;                   
	unsigned char                                      bOverride_SRTFilterSmoothness : 1;                        
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          
	unsigned char                                      bOverride_DepthOfFieldSensorWidth : 1;                    
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                   
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                         
	unsigned char                                      bOverride_MobileHQGaussian : 1;                           
	unsigned char                                      bOverride_BackgroundBlur : 1;                             
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                     
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                 
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                  
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;                   
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           
	unsigned char                                      bOverride_MotionBlurMax : 1;                              
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    
	unsigned char                                      bOverride_ScreenPercentage : 1;                           
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        
	unsigned char                                      bOverride_FxaaConsoleEdgeSharpness : 1;                   
	unsigned char                                      bOverride_FxaaConsoleEdgeThreshold : 1;                   
	unsigned char                                      bOverride_FxaaConsoleEdgeThresholdMin : 1;                
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              WhiteTemp;                                                
	float                                              WhiteTint;                                                
	struct FVector4                                    ColorSaturation;                                          
	struct FVector4                                    ColorContrast;                                            
	struct FVector4                                    ColorGamma;                                               
	struct FVector4                                    ColorGain;                                                
	struct FVector4                                    ColorOffset;                                              
	struct FVector4                                    ColorSaturationShadows;                                   
	struct FVector4                                    ColorContrastShadows;                                     
	struct FVector4                                    ColorGammaShadows;                                        
	struct FVector4                                    ColorGainShadows;                                         
	struct FVector4                                    ColorOffsetShadows;                                       
	float                                              ColorCorrectionShadowsMax;                                
	unsigned char                                      UnknownData01[0xC];                                       
	struct FVector4                                    ColorSaturationMidtones;                                  
	struct FVector4                                    ColorContrastMidtones;                                    
	struct FVector4                                    ColorGammaMidtones;                                       
	struct FVector4                                    ColorGainMidtones;                                        
	struct FVector4                                    ColorOffsetMidtones;                                      
	struct FVector4                                    ColorSaturationHighlights;                                
	struct FVector4                                    ColorContrastHighlights;                                  
	struct FVector4                                    ColorGammaHighlights;                                     
	struct FVector4                                    ColorGainHighlights;                                      
	struct FVector4                                    ColorOffsetHighlights;                                    
	float                                              ColorCorrectionHighlightsMin;                             
	float                                              FilmSlope;                                                
	float                                              FilmToe;                                                  
	float                                              FilmShoulder;                                             
	float                                              FilmBlackClip;                                            
	float                                              FilmWhiteClip;                                            
	struct FLinearColor                                FilmWhitePoint;                                           
	struct FLinearColor                                FilmShadowTint;                                           
	float                                              FilmShadowTintBlend;                                      
	float                                              FilmShadowTintAmount;                                     
	float                                              FilmSaturation;                                           
	struct FLinearColor                                FilmChannelMixerRed;                                      
	struct FLinearColor                                FilmChannelMixerGreen;                                    
	struct FLinearColor                                FilmChannelMixerBlue;                                     
	float                                              FilmContrast;                                             
	float                                              FilmToeAmount;                                            
	float                                              FilmHealAmount;                                           
	float                                              FilmDynamicRange;                                         
	struct FLinearColor                                SceneColorTint;                                           
	float                                              SceneFringeIntensity;                                     
	TEnumAsByte<EBloomMethod>                          BloomMethod;                                              
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              BloomIntensity;                                           
	float                                              BloomThreshold;                                           
	float                                              BloomSizeScale;                                           
	float                                              Bloom1Size;                                               
	float                                              Bloom2Size;                                               
	float                                              Bloom3Size;                                               
	float                                              Bloom4Size;                                               
	float                                              Bloom5Size;                                               
	float                                              Bloom6Size;                                               
	struct FLinearColor                                Bloom1Tint;                                               
	struct FLinearColor                                Bloom2Tint;                                               
	struct FLinearColor                                Bloom3Tint;                                               
	struct FLinearColor                                Bloom4Tint;                                               
	struct FLinearColor                                Bloom5Tint;                                               
	struct FLinearColor                                Bloom6Tint;                                               
	class UTexture2D*                                  BloomConvolutionTexture;                                  
	float                                              BloomConvolutionSize;                                     
	struct FVector2D                                   BloomConvolutionCenterUV;                                 
	struct FVector                                     BloomConvolutionPreFilter;                                
	float                                              BloomConvolutionPreFilterMin;                             
	float                                              BloomConvolutionPreFilterMax;                             
	float                                              BloomConvolutionPreFilterMult;                            
	float                                              BloomConvolutionBufferScale;                              
	class UTexture*                                    BloomDirtMask;                                            
	float                                              BloomDirtMaskIntensity;                                   
	struct FLinearColor                                BloomDirtMaskTint;                                        
	struct FVector2D                                   RadialBlurCenterPos;                                      
	float                                              RadialBlurIntensity;                                      
	float                                              RadialBlurDistance;                                       
	struct FLinearColor                                AmbientCubemapTint;                                       
	float                                              AmbientCubemapIntensity;                                  
	class UTextureCube*                                AmbientCubemap;                                           
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                       
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              AutoExposureLowPercent;                                   
	float                                              AutoExposureHighPercent;                                  
	float                                              AutoExposureMinBrightness;                                
	float                                              AutoExposureMaxBrightness;                                
	float                                              AutoExposureSpeedUp;                                      
	float                                              AutoExposureSpeedDown;                                    
	unsigned char                                      BlindWatermarking : 1;                                    
	unsigned char                                      ShowFFTResult : 1;                                        
	unsigned char                                      UnknownData04[0x3];                                       
	class UTexture2D*                                  BlindWatermarkingTexture;                                 
	unsigned char                                      bOverride_BlindWatermarking : 1;                          
	unsigned char                                      bOverride_ShowFFTResult : 1;                              
	unsigned char                                      bOverride_BlindWatermarkingTexture : 1;                   
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              AutoExposureBias;                                         
	float                                              HistogramLogMin;                                          
	float                                              HistogramLogMax;                                          
	float                                              LensFlareIntensity;                                       
	struct FLinearColor                                LensFlareTint;                                            
	float                                              LensFlareBokehSize;                                       
	int                                                LensFlareCount;                                           
	float                                              LensFlareThreshold;                                       
	class UTexture*                                    LensFlareBokehShape;                                      
	struct FLinearColor                                LensFlareTints[0x8];                                      
	float                                              VignetteIntensity;                                        
	float                                              GrainJitter;                                              
	float                                              GrainIntensity;                                           
	float                                              AmbientOcclusionIntensity;                                
	float                                              AmbientOcclusionStaticFraction;                           
	float                                              AmbientOcclusionRadius;                                   
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           
	unsigned char                                      UnknownData06[0x3];                                       
	float                                              AmbientOcclusionFadeDistance;                             
	float                                              AmbientOcclusionFadeRadius;                               
	float                                              AmbientOcclusionDistance;                                 
	float                                              AmbientOcclusionPower;                                    
	float                                              AmbientOcclusionBias;                                     
	float                                              AmbientOcclusionQuality;                                  
	float                                              AmbientOcclusionMipBlend;                                 
	float                                              AmbientOcclusionMipScale;                                 
	float                                              AmbientOcclusionMipThreshold;                             
	struct FLinearColor                                SRTIndirectLightingColor;                                 
	float                                              SRTIndirectLightingIntensity;                             
	float                                              SRTMaxOcclusionDistance;                                  
	float                                              SRTMinOcclusion;                                          
	float                                              SRTDefaultOcclusion;                                      
	float                                              SRTSkyLightScale;                                         
	float                                              SRTDirectionalLightScale;                                 
	float                                              SRTFilterSmoothness;                                      
	struct FLinearColor                                IndirectLightingColor;                                    
	float                                              IndirectLightingIntensity;                                
	float                                              ColorGradingIntensity;                                    
	unsigned char                                      UnknownData07[0x4];                                       
	class UTexture*                                    ColorGradingLUT;                                          
	TEnumAsByte<EDepthOfFieldMethod>                   DepthOfFieldMethod;                                       
	unsigned char                                      bMobileHQGaussian : 1;                                    
	unsigned char                                      bBackgroundBlur : 1;                                      
	unsigned char                                      UnknownData08[0x2];                                       
	float                                              DepthOfFieldFstop;                                        
	float                                              DepthOfFieldSensorWidth;                                  
	float                                              DepthOfFieldFocalDistance;                                
	float                                              DepthOfFieldDepthBlurAmount;                              
	float                                              DepthOfFieldDepthBlurRadius;                              
	float                                              DepthOfFieldFocalRegion;                                  
	float                                              DepthOfFieldNearTransitionRegion;                         
	float                                              DepthOfFieldFarTransitionRegion;                          
	float                                              DepthOfFieldScale;                                        
	float                                              DepthOfFieldMaxBokehSize;                                 
	float                                              DepthOfFieldNearBlurSize;                                 
	float                                              DepthOfFieldFarBlurSize;                                  
	unsigned char                                      UnknownData09[0x4];                                       
	class UTexture*                                    DepthOfFieldBokehShape;                                   
	float                                              DepthOfFieldOcclusion;                                    
	float                                              DepthOfFieldColorThreshold;                               
	float                                              DepthOfFieldSizeThreshold;                                
	float                                              DepthOfFieldSkyFocusDistance;                             
	float                                              DepthOfFieldVignetteSize;                                 
	float                                              MotionBlurAmount;                                         
	float                                              MotionBlurMax;                                            
	float                                              MotionBlurPerObjectSize;                                  
	float                                              LPVIntensity;                                             
	float                                              LPVVplInjectionBias;                                      
	float                                              LPVSize;                                                  
	float                                              LPVSecondaryOcclusionIntensity;                           
	float                                              LPVSecondaryBounceIntensity;                              
	float                                              LPVGeometryVolumeBias;                                    
	float                                              LPVEmissiveInjectionIntensity;                            
	float                                              LPVDirectionalOcclusionIntensity;                         
	float                                              LPVDirectionalOcclusionRadius;                            
	float                                              LPVDiffuseOcclusionExponent;                              
	float                                              LPVSpecularOcclusionExponent;                             
	float                                              LPVDiffuseOcclusionIntensity;                             
	float                                              LPVSpecularOcclusionIntensity;                            
	float                                              ScreenSpaceReflectionIntensity;                           
	float                                              ScreenSpaceReflectionQuality;                             
	float                                              ScreenSpaceReflectionMaxRoughness;                        
	float                                              LPVFadeRange;                                             
	float                                              LPVDirectionalOcclusionFadeRange;                         
	float                                              ScreenPercentage;                                         
	unsigned char                                      UnknownData10[0x4];                                       
	struct FWeightedBlendables                         WeightedBlendables;                                       
	float                                              FxaaConsoleEdgeSharpness;                                 
	float                                              FxaaConsoleEdgeThreshold;                                 
	float                                              FxaaConsoleEdgeThresholdMin;                              
	unsigned char                                      UnknownData11[0x4];                                       
	TArray<class UObject*>                             Blendables;                                               
	unsigned char                                      UnknownData12[0x8];                                       
};



struct FExpressionOutput
{
	struct FString                                     OutputName;                                               
	int                                                Mask;                                                     
	int                                                MaskR;                                                    
	int                                                MaskG;                                                    
	int                                                MaskB;                                                    
	int                                                MaskA;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                
};



struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FSkelMeshSkinWeightInfo
{
	int                                                Bones[0x8];                                               
	unsigned char                                      Weights[0x8];                                             
};



struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                               
	unsigned char                                      bSavedLooping : 1;                                        
	unsigned char                                      bSavedPlaying : 1;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SavedPosition;                                            
	float                                              SavedPlayRate;                                            
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FContainerObject
{
	class UAnimInstanceContainer*                      AnimInstanceContainer;                                    
	TArray<class UAnimInstance*>                       FromInstance;                                             
};



struct FPoseSnapshot
{
	TArray<struct FTransform>                          LocalTransforms;                                          
	TArray<struct FName>                               BoneNames;                                                
	struct FName                                       SkeletalMeshName;                                         
	struct FName                                       SnapshotName;                                             
	bool                                               bIsValid;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 
	struct FVector                                     SrcActorOffset;                                           
	struct FVector                                     SrcActorDesiredOffset;                                    
	struct FString                                     DebugText;                                                
	float                                              TimeRemaining;                                            
	float                                              Duration;                                                 
	struct FColor                                      TextColor;                                                
	unsigned char                                      bAbsoluteLocation : 1;                                    
	unsigned char                                      bKeepAttachedToActor : 1;                                 
	unsigned char                                      bDrawShadow : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     OrigActorLocation;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	class UFont*                                       Font;                                                     
	float                                              FontScale;                                                
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                             
	struct FName                                       BoneName;                                                 
	bool                                               bNearPushBase;                                            
	bool                                               bPushedByBase;                                            
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector_NetQuantize100                      Location;                                                 
	struct FRotator                                    Rotation;                                                 
	bool                                               bServerHasBaseComponent;                                  
	bool                                               bRelativeRotation;                                        
	bool                                               bServerHasVelocity;                                       
	unsigned char                                      UnknownData01[0x1];                                       
};



struct FVector_NetQuantize10 : public FVector
{

};



struct FRootMotionSourceSettings
{
	unsigned char                                      Flags;                                                    
};



struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0xE8];                                      
	bool                                               bHasAdditiveSources;                                      
	bool                                               bHasOverrideSources;                                      
	unsigned char                                      UnknownData01[0x2];                                       
	struct FVector_NetQuantize10                       LastPreAdditiveVelocity;                                  
	bool                                               bIsAdditiveVelocityApplied;                               
	struct FRootMotionSourceSettings                   LastAccumulatedSettings;                                  
	unsigned char                                      UnknownData02[0x6];                                       
};



struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BlendWeight;                                              
	unsigned char                                      UnknownData01[0x8];                                       
	struct FTransform                                  RootMotionTransform;                                      
};



struct FRepRootMotionMontage
{
	bool                                               bIsActive;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	class UAnimMontage*                                AnimMontage;                                              
	float                                              Position;                                                 
	struct FVector_NetQuantize100                      Location;                                                 
	struct FRotator                                    Rotation;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	class UPrimitiveComponent*                         MovementBase;                                             
	struct FName                                       MovementBaseBoneName;                                     
	bool                                               bRelativePosition;                                        
	bool                                               bRelativeRotation;                                        
	unsigned char                                      UnknownData02[0x6];                                       
	struct FRootMotionSourceGroup                      AuthoritativeRootMotion;                                  
	struct FVector_NetQuantize10                       Acceleration;                                             
	struct FVector_NetQuantize10                       LinearVelocity;                                           
};



struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FRepRootMotionMontage                       RootMotion;                                               
};



struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BlendExp;                                                 
	unsigned char                                      bLockOutgoing : 1;                                        
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x17];                                      
};



struct FLatentActionInfo
{
	int                                                Linkage;                                                  
	int                                                UUID;                                                     
	struct FName                                       ExecutionFunction;                                        
	class UObject*                                     CallbackTarget;                                           
};



struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UAnimMontage*                                LinkedMontage;                                            
	int                                                SlotIndex;                                                
	int                                                SegmentIndex;                                             
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                               
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                         
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              SegmentBeginTime;                                         
	float                                              SegmentLength;                                            
	float                                              LinkValue;                                                
	class UAnimSequenceBase*                           LinkedSequence;                                           
};



struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                              
	float                                              TriggerTimeOffset;                                        
	float                                              EndTriggerTimeOffset;                                     
	float                                              TriggerWeightThreshold;                                   
	struct FName                                       NotifyName;                                               
	class UAnimNotify*                                 Notify;                                                   
	class UAnimNotifyState*                            NotifyStateClass;                                         
	float                                              Duration;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FAnimLinkableElement                        EndLink;                                                  
	bool                                               bConvertedFromBranchingPoint;                             
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                          
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              NotifyTriggerChance;                                      
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                NotifyFilterLOD;                                          
	bool                                               bTriggerOnDedicatedServer;                                
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                TrackIndex;                                               
};



struct FMarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                                       
	struct FName                                       NextMarkerName;                                           
	float                                              PositionBetweenMarkers;                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                           
	unsigned char                                      bCanJump : 1;                                             
	unsigned char                                      bCanWalk : 1;                                             
	unsigned char                                      bCanSwim : 1;                                             
	unsigned char                                      bCanFly : 1;                                              
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FNavAgentProperties : public FMovementProperties
{
	float                                              AgentRadius;                                              
	float                                              AgentHeight;                                              
	float                                              AgentStepHeight;                                          
	float                                              NavWalkingSearchHeightScale;                              
	unsigned char                                      UnknownData00[0x4];                                       
	class UClass*                                      PreferredNavData;                                         
};



struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                         
	unsigned char                                      bWalkableFloor : 1;                                       
	unsigned char                                      bLineTrace : 1;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FloorDist;                                                
	float                                              LineDist;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	struct FHitResult                                  HitResult;                                                
};



struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                              
	unsigned char                                      bGroup1 : 1;                                              
	unsigned char                                      bGroup2 : 1;                                              
	unsigned char                                      bGroup3 : 1;                                              
	unsigned char                                      bGroup4 : 1;                                              
	unsigned char                                      bGroup5 : 1;                                              
	unsigned char                                      bGroup6 : 1;                                              
	unsigned char                                      bGroup7 : 1;                                              
	unsigned char                                      bGroup8 : 1;                                              
	unsigned char                                      bGroup9 : 1;                                              
	unsigned char                                      bGroup10 : 1;                                             
	unsigned char                                      bGroup11 : 1;                                             
	unsigned char                                      bGroup12 : 1;                                             
	unsigned char                                      bGroup13 : 1;                                             
	unsigned char                                      bGroup14 : 1;                                             
	unsigned char                                      bGroup15 : 1;                                             
	unsigned char                                      bGroup16 : 1;                                             
	unsigned char                                      bGroup17 : 1;                                             
	unsigned char                                      bGroup18 : 1;                                             
	unsigned char                                      bGroup19 : 1;                                             
	unsigned char                                      bGroup20 : 1;                                             
	unsigned char                                      bGroup21 : 1;                                             
	unsigned char                                      bGroup22 : 1;                                             
	unsigned char                                      bGroup23 : 1;                                             
	unsigned char                                      bGroup24 : 1;                                             
	unsigned char                                      bGroup25 : 1;                                             
	unsigned char                                      bGroup26 : 1;                                             
	unsigned char                                      bGroup27 : 1;                                             
	unsigned char                                      bGroup28 : 1;                                             
	unsigned char                                      bGroup29 : 1;                                             
	unsigned char                                      bGroup30 : 1;                                             
	unsigned char                                      bGroup31 : 1;                                             
};



struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                 
	struct FVector                                     LocationLocalSpace;                                       
	struct FRotator                                    Rotation;                                                 
	float                                              FOV;                                                      
	float                                              OrthoWidth;                                               
	float                                              OrthoNearClipPlane;                                       
	float                                              OrthoFarClipPlane;                                        
	float                                              AspectRatio;                                              
	unsigned char                                      bConstrainAspectRatio : 1;                                
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              PostProcessBlendWeight;                                   
	struct FPostProcessSettings                        PostProcessSettings;                                      
	struct FVector2D                                   OffCenterProjectionOffset;                                
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FParticleSysParam
{
	struct FName                                       Name;                                                     
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Scalar;                                                   
	float                                              Scalar_Low;                                               
	struct FVector                                     Vector;                                                   
	struct FVector                                     Vector_Low;                                               
	struct FColor                                      Color;                                                    
	class AActor*                                      Actor;                                                    
	class UMaterialInterface*                          Material;                                                 
	unsigned char                                      UnknownData01[0x40];                                      
};



struct FParticleMultiCurveParam
{
	struct FName                                       Name;                                                     
	int                                                ActiveCurveIndex;                                         
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FParticleCurveParam
{
	struct FName                                       Name;                                                     
	TEnumAsByte<EParticleCurveParamType>               ParamType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	struct FInterpCurveFloat                           FloatCurve;                                               
	struct FInterpCurveVector                          VectorCurve;                                              
	struct FInterpCurveLinearColor                     ColorCurve;                                               
};



struct FSplineCurves
{
	struct FInterpCurveVector                          Position;                                                 
	struct FInterpCurveQuat                            Rotation;                                                 
	struct FInterpCurveVector                          Scale;                                                    
	struct FInterpCurveFloat                           ReparamTable;                                             
};



struct FSplinePoint
{
	float                                              InputKey;                                                 
	struct FVector                                     Position;                                                 
	struct FVector                                     ArriveTangent;                                            
	struct FVector                                     LeaveTangent;                                             
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
	TEnumAsByte<ESplinePointType>                      Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                 
	struct FVector                                     StartTangent;                                             
	struct FVector2D                                   StartScale;                                               
	float                                              StartRoll;                                                
	struct FVector2D                                   StartOffset;                                              
	struct FVector                                     EndPos;                                                   
	struct FVector                                     EndTangent;                                               
	struct FVector2D                                   EndScale;                                                 
	float                                              EndRoll;                                                  
	struct FVector2D                                   EndOffset;                                                
};



struct FMeshUVChannelInfo
{
	bool                                               bInitialized;                                             
	bool                                               bOverrideDensities;                                       
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              LocalUVDensities[0x4];                                    
};



struct FStaticMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        
	struct FName                                       MaterialSlotName;                                         
	struct FMeshUVChannelInfo                          UVChannelData;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	struct FSoftObjectPath                             MaterialSoftRef;                                          
};



struct FClusterNode_Mesh
{
	struct FVector                                     BoundMin;                                                 
	int                                                FirstChild;                                               
	struct FVector                                     BoundMax;                                                 
	int                                                LastChild;                                                
	int                                                FirstInstance;                                            
	int                                                LastInstance;                                             
};



struct FDistributionLookupTable
{
	unsigned char                                      Op;                                                       
	unsigned char                                      EntryCount;                                               
	unsigned char                                      EntryStride;                                              
	unsigned char                                      SubEntryStride;                                           
	float                                              TimeScale;                                                
	float                                              TimeBias;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<float>                                      Values;                                                   
	unsigned char                                      LockFlag;                                                 
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                    
};



struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                 
	float                                              MaxValue;                                                 
	struct FVector                                     MinValueVec;                                              
	struct FVector                                     MaxValueVec;                                              
	class UDistributionVector*                         Distribution;                                             
};



struct FExpressionInput
{
	int                                                OutputIndex;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     InputName;                                                
	int                                                Mask;                                                     
	int                                                MaskR;                                                    
	int                                                MaskG;                                                    
	int                                                MaskB;                                                    
	int                                                MaskA;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       ExpressionName;                                           
};



struct FRPCSharedSerializationCacheManager
{
	unsigned char                                      UnknownData00[0xF0];                                      
};



struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                  
	TArray<class UDialogueVoice*>                      Targets;                                                  
};



struct FPredictProjectilePathParams
{
	struct FVector                                     StartLocation;                                            
	struct FVector                                     LaunchVelocity;                                           
	struct FVector                                     LaunchAcceleration;                                       
	bool                                               bTraceWithCollision;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ProjectileRadius;                                         
	float                                              MaxSimTime;                                               
	bool                                               bTraceWithChannel;                                        
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	TArray<class AActor*>                              ActorsToIgnore;                                           
	float                                              SimFrequency;                                             
	float                                              OverrideGravityZ;                                         
	float                                              GravityScale;                                             
	float                                              IgnoreGravityDis;                                         
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              DrawDebugTime;                                            
	bool                                               bTraceComplex;                                            
	unsigned char                                      UnknownData03[0x17];                                      
};



struct FPredictProjectilePathPointData
{
	struct FVector                                     Location;                                                 
	struct FVector                                     Velocity;                                                 
	float                                              Time;                                                     
};



struct FPredictProjectilePathResult
{
	TArray<struct FPredictProjectilePathPointData>     PathData;                                                 
	struct FPredictProjectilePathPointData             LastTraceDestination;                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FHitResult                                  HitResult;                                                
};



struct FDecalParameter
{
	class UTexture2D*                                  DecalTexture;                                             
	unsigned char                                      UnknownData00[0x88];                                      
};



struct FDecalBakingRequest
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UObject*                                     Mesh;                                                     
	unsigned char                                      UnknownData01[0x8];                                       
	TArray<struct FDecalParameter>                     DecalParams;                                              
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	class UTexture*                                    OriginTexture;                                            
	unsigned char                                      UnknownData02[0x8];                                       
};



struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                     
	bool                                               bPositionIsRelative;                                      
	unsigned char                                      UnknownData00[0xF];                                       
};



struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                      
	unsigned char                                      bSupportsAgent1 : 1;                                      
	unsigned char                                      bSupportsAgent2 : 1;                                      
	unsigned char                                      bSupportsAgent3 : 1;                                      
	unsigned char                                      bSupportsAgent4 : 1;                                      
	unsigned char                                      bSupportsAgent5 : 1;                                      
	unsigned char                                      bSupportsAgent6 : 1;                                      
	unsigned char                                      bSupportsAgent7 : 1;                                      
	unsigned char                                      bSupportsAgent8 : 1;                                      
	unsigned char                                      bSupportsAgent9 : 1;                                      
	unsigned char                                      bSupportsAgent10 : 1;                                     
	unsigned char                                      bSupportsAgent11 : 1;                                     
	unsigned char                                      bSupportsAgent12 : 1;                                     
	unsigned char                                      bSupportsAgent13 : 1;                                     
	unsigned char                                      bSupportsAgent14 : 1;                                     
	unsigned char                                      bSupportsAgent15 : 1;                                     
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                        
	float                                              MaxFallDownLength;                                        
	TEnumAsByte<ENavLinkDirection>                     Direction;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	float                                              SnapRadius;                                               
	float                                              SnapHeight;                                               
	struct FNavAgentSelector                           SupportedAgents;                                          
	unsigned char                                      bSupportsAgent0 : 1;                                      
	unsigned char                                      bSupportsAgent1 : 1;                                      
	unsigned char                                      bSupportsAgent2 : 1;                                      
	unsigned char                                      bSupportsAgent3 : 1;                                      
	unsigned char                                      bSupportsAgent4 : 1;                                      
	unsigned char                                      bSupportsAgent5 : 1;                                      
	unsigned char                                      bSupportsAgent6 : 1;                                      
	unsigned char                                      bSupportsAgent7 : 1;                                      
	unsigned char                                      bSupportsAgent8 : 1;                                      
	unsigned char                                      bSupportsAgent9 : 1;                                      
	unsigned char                                      bSupportsAgent10 : 1;                                     
	unsigned char                                      bSupportsAgent11 : 1;                                     
	unsigned char                                      bSupportsAgent12 : 1;                                     
	unsigned char                                      bSupportsAgent13 : 1;                                     
	unsigned char                                      bSupportsAgent14 : 1;                                     
	unsigned char                                      bSupportsAgent15 : 1;                                     
	unsigned char                                      UnknownData01[0x2];                                       
	unsigned char                                      bUseSnapHeight : 1;                                       
	unsigned char                                      bSnapToCheapestArea : 1;                                  
	unsigned char                                      bCustomFlag0 : 1;                                         
	unsigned char                                      bCustomFlag1 : 1;                                         
	unsigned char                                      bCustomFlag2 : 1;                                         
	unsigned char                                      bCustomFlag3 : 1;                                         
	unsigned char                                      bCustomFlag4 : 1;                                         
	unsigned char                                      bCustomFlag5 : 1;                                         
	unsigned char                                      bCustomFlag6 : 1;                                         
	unsigned char                                      bCustomFlag7 : 1;                                         
	unsigned char                                      UnknownData02[0x6];                                       
	class UClass*                                      AreaClass;                                                
	unsigned char                                      UnknownData03[0x8];                                       
};



struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     
	struct FVector                                     Right;                                                    
};



struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                
	struct FVector                                     LeftEnd;                                                  
	struct FVector                                     RightStart;                                               
	struct FVector                                     RightEnd;                                                 
};



struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                
	float                                              TravelCostOverride;                                       
	float                                              EnteringCostOverride;                                     
	unsigned char                                      bIsExcluded : 1;                                          
	unsigned char                                      bOverrideTravelCost : 1;                                  
	unsigned char                                      bOverrideEnteringCost : 1;                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                            
	unsigned char                                      bNavFlag1 : 1;                                            
	unsigned char                                      bNavFlag2 : 1;                                            
	unsigned char                                      bNavFlag3 : 1;                                            
	unsigned char                                      bNavFlag4 : 1;                                            
	unsigned char                                      bNavFlag5 : 1;                                            
	unsigned char                                      bNavFlag6 : 1;                                            
	unsigned char                                      bNavFlag7 : 1;                                            
	unsigned char                                      bNavFlag8 : 1;                                            
	unsigned char                                      bNavFlag9 : 1;                                            
	unsigned char                                      bNavFlag10 : 1;                                           
	unsigned char                                      bNavFlag11 : 1;                                           
	unsigned char                                      bNavFlag12 : 1;                                           
	unsigned char                                      bNavFlag13 : 1;                                           
	unsigned char                                      bNavFlag14 : 1;                                           
	unsigned char                                      bNavFlag15 : 1;                                           
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FFOscillator
{
	float                                              Amplitude;                                                
	float                                              Frequency;                                                
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FROscillator
{
	struct FFOscillator                                Pitch;                                                    
	struct FFOscillator                                Yaw;                                                      
	struct FFOscillator                                Roll;                                                     
};



struct FVOscillator
{
	struct FFOscillator                                X;                                                        
	struct FFOscillator                                Y;                                                        
	struct FFOscillator                                Z;                                                        
};



struct FRollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UObject*                                     Archetype;                                                
	unsigned char                                      UnknownData01[0x28];                                      
	class ULevel*                                      Level;                                                    
};



struct FObjectPoolConfig
{
	unsigned char                                      UnknownData00[0x28];                                      
	bool                                               bIsPlayerPawn;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                InitCapacity;                                             
	int                                                MaxCapacity;                                              
	float                                              AutoReduceTime;                                           
	struct FString                                     ExcludeLevelNames;                                        
	int                                                BackendSwitcherCBit;                                      
	unsigned char                                      ClientSwitcher;                                           
	bool                                               bPreCreateObject;                                         
	bool                                               bRecyclable;                                              
	bool                                               bRecordTemplateParams;                                    
	bool                                               bRecreateWhenRecycle;                                     
	bool                                               bReconstructWhenRecycle;                                  
	bool                                               bPreRegisterComps;                                        
	bool                                               bPreInitComps;                                            
	bool                                               bPostInitComps;                                           
	bool                                               bNeedAutoExpand;                                          
	bool                                               bEnableForChildClasses;                                   
	unsigned char                                      UnknownData02[0x1];                                       
	struct FString                                     CustomPoolClass;                                          
};



struct FObjectPoolItemWrapper
{
	class UObject*                                     Obj;                                                      
	float                                              TotalTimeToBeRemove;                                      
	float                                              RemoveTimer;                                              
	bool                                               bNeedReconstruct;                                         
	bool                                               bRecycledOnce;                                            
	bool                                               bNeedPostInit;                                            
	bool                                               bNeedRegisterComp;                                        
	int                                                IndexOfSkipGCObjectIndicesSet;                            
	uint64_t                                           MarkRecyleFrame;                                          
};



struct FCameraCacheEntry
{
	float                                              TimeStamp;                                                
	unsigned char                                      UnknownData00[0xC];                                       
	struct FMinimalViewInfo                            POV;                                                      
};



struct FTViewTarget
{
	class AActor*                                      Target;                                                   
	unsigned char                                      UnknownData00[0x8];                                       
	struct FMinimalViewInfo                            POV;                                                      
	class APlayerState*                                PlayerState;                                              
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FObjectPool
{
	class UClass*                                      ObjectClass;                                              
	TArray<class UObject*>                             Pool;                                                     
	TMap<class UObject*, uint32_t>                     RecycleTime;                                              
	unsigned char                                      UnknownData00[0x50];                                      
	int                                                Size;                                                     
	bool                                               bAutoDestroy;                                             
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                ObjectLifePeriodTime;                                     
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FObjectPoolClassConfig
{
	struct FName                                       ObjectClassName;                                          
	bool                                               ObjectPoolEnable;                                         
	bool                                               ObjectPoolEnableForComponents;                            
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                PoolSize;                                                 
	int                                                LifePeriodTime;                                           
	bool                                               UseOldPoolLogic;                                          
	bool                                               DisableOnLowMemDevice;                                    
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                BackendSwitchType;                                        
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FObjectPoolManager
{
	bool                                               bUseGMCommand;                                            
	bool                                               bEnabled;                                                 
	bool                                               bEnabledAutoDestroy;                                      
	unsigned char                                      UnknownData00[0x5];                                       
	TMap<class UClass*, struct FObjectPool>            Pools;                                                    
	TMap<struct FName, struct FObjectPoolClassConfig>  mapClassConfigs;                                          
	unsigned char                                      UnknownData01[0x8];                                       
	class AActor*                                      Holder;                                                   
};



struct FRegionID
{
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FRegionObjectItem
{
	class UObject*                                     Target;                                                   
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     TargetName;                                               
};



struct FRegionObjectItemList
{
	TArray<struct FRegionObjectItem>                   List;                                                     
};



struct FWorldRegionManager
{
	unsigned char                                      UnknownData00[0xF8];                                      
	class UWorld*                                      World;                                                    
	TMap<struct FRegionID, struct FRegionObjectItemList> RegionIDToObjectList_Static;                              
	TMap<struct FRegionID, struct FRegionObjectItemList> RegionIDToObjectList_NonStatic;                           
	TMap<class UObject*, struct FRegionID>             ObjectToRegionID_NonStatic;                               
	unsigned char                                      UnknownData01[0x68];                                      
};



struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x8];                                       
	class AGameStateBase*                              GameState;                                                
	class UNetDriver*                                  NetDriver;                                                
	class UDemoNetDriver*                              DemoNetDriver;                                            
	class ULevel*                                      PersistentLevel;                                          
	unsigned char                                      UnknownData01[0x50];                                      
	unsigned char                                      UnknownData02[0x8];                                       
};



struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                     
	struct FColor                                      Color;                                                    
	struct FVector                                     DefaultQueryExtent;                                       
	class UClass*                                      NavigationDataClass;                                      
	struct FSoftClassPath                              NavigationDataClassName;                                  
};



struct FDynamicGenerateTargetNavigation
{
	struct FVector                                     TargetLocation;                                           
	float                                              GenerateRadiusMin;                                        
	float                                              GenerateRadiusMax;                                        
};



struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                            
	int                                                AreaID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	class UClass*                                      AreaClass;                                                
};



struct FStatColorMapEntry
{
	float                                              In;                                                       
	struct FColor                                      Out;                                                      
};



struct FStatColorMapping
{
	struct FString                                     StatName;                                                 
	TArray<struct FStatColorMapEntry>                  colorMap;                                                 
	unsigned char                                      DisableBlend : 1;                                         
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FGameNameRedirect
{
	struct FName                                       OldGameName;                                              
	struct FName                                       NewGameName;                                              
};



struct FClassRedirect
{
	struct FName                                       ObjectName;                                               
	struct FName                                       OldClassName;                                             
	struct FName                                       NewClassName;                                             
	struct FName                                       OldSubobjName;                                            
	struct FName                                       NewSubobjName;                                            
	struct FName                                       NewClassClass;                                            
	struct FName                                       NewClassPackage;                                          
	bool                                               InstanceOnly;                                             
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                            
	struct FString                                     NewPluginName;                                            
};



struct FStructRedirect
{
	struct FName                                       OldStructName;                                            
	struct FName                                       NewStructName;                                            
};



struct FDirectoryPath
{
	struct FString                                     Path;                                                     
};



struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	struct FString                                     Comment;                                                  
};



struct FRigidBodyErrorCorrection
{
	float                                              PingExtrapolation;                                        
	float                                              PingLimit;                                                
	float                                              ErrorPerLinearDifference;                                 
	float                                              ErrorPerAngularDifference;                                
	float                                              MaxRestoredStateError;                                    
	float                                              MaxLinearHardSnapDistance;                                
	float                                              PositionLerp;                                             
	float                                              AngleLerp;                                                
	float                                              LinearVelocityCoefficient;                                
	float                                              LinearDampingCoefficient;                                 
	float                                              AngularVelocityCoefficient;                               
	float                                              AngularDampingCoefficient;                                
	float                                              ErrorAccumulationSeconds;                                 
	float                                              ErrorAccumulationDistanceSq;                              
	float                                              ErrorAccumulationSimilarity;                              
	float                                              LinearDeltaThresholdSq;                                   
	float                                              LinearInterpAlpha;                                        
	float                                              LinearRecipFixTime;                                       
	float                                              AngularDeltaThreshold;                                    
	float                                              AngularInterpAlpha;                                       
	float                                              AngularRecipFixTime;                                      
	float                                              BodySpeedThresholdSq;                                     
	float                                              AngularSpeedThresholdSq;                                  
};



struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                  
	struct FName                                       DriverClassName;                                          
	struct FName                                       DriverClassNameFallback;                                  
};



struct FSplineMeshInstanceParams
{
	bool                                               bHide;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
	class UBodySetup*                                  BodySetup;                                                
	struct FBoxSphereBounds                            InstanceBound;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	struct FVector4                                    InstanceParams[0x3];                                      
	struct FMatrix                                     InstanceTransform;                                        
};



struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                                  
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              EmissiveBoost;                                            
	float                                              DiffuseBoost;                                             
	float                                              ExportResolutionScale;                                    
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          
	unsigned char                                      bOverrideEmissiveBoost : 1;                               
	unsigned char                                      bOverrideDiffuseBoost : 1;                                
	unsigned char                                      bOverrideExportResolutionScale : 1;                       
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FMaterialTextureInfo
{
	float                                              SamplingScale;                                            
	int                                                UVChannelIndex;                                           
	struct FName                                       TextureName;                                              
};



struct FFontParameterValue
{
	struct FName                                       ParameterName;                                            
	class UFont*                                       FontValue;                                                
	int                                                FontPage;                                                 
	struct FGuid                                       ExpressionGUID;                                           
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                            
	float                                              ParameterValue;                                           
	struct FGuid                                       ExpressionGUID;                                           
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                            
	class UTexture*                                    ParameterValue;                                           
	struct FGuid                                       ExpressionGUID;                                           
};



struct FSparseVolumeTextureParameterValue
{
	struct FName                                       ParameterName;                                            
	class USparseVolumeTexture*                        ParameterValue;                                           
	struct FGuid                                       ExpressionGUID;                                           
};



struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                ParameterValue;                                           
	struct FGuid                                       ExpressionGUID;                                           
};



struct FMaterialInstanceBasePropertyOverrides
{
	bool                                               bOverride_OpacityMaskClipValue;                           
	bool                                               bOverride_BlendMode;                                      
	bool                                               bOverride_ShadingModel;                                   
	bool                                               bOverride_ShadingRate;                                    
	bool                                               bOverride_DitheredLODTransition;                          
	bool                                               bOverride_CastDynamicShadowAsMasked;                      
	bool                                               bOverride_TwoSided;                                       
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              OpacityMaskClipValue;                                     
	TEnumAsByte<EBlendMode>                            BlendMode;                                                
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             
	TEnumAsByte<ERenderShadingRate>                    ShadingRate;                                              
	unsigned char                                      TwoSided : 1;                                             
	unsigned char                                      DitheredLODTransition : 1;                                
	unsigned char                                      bCastDynamicShadowAsMasked : 1;                           
};



struct FMaterialParameterInfo
{
	struct FName                                       Name;                                                     
	TEnumAsByte<EMaterialParameterAssociation>         Association;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                Index;                                                    
};



struct FMaterialLayersFunctions
{
	TArray<class UMaterialFunction*>                   Layers;                                                   
	TArray<class UMaterialFunction*>                   Blends;                                                   
	TArray<bool>                                       LayerStates;                                              
	struct FString                                     KeyString;                                                
};



struct FStaticMaterialLayersParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            
	bool                                               bOverride;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FGuid                                       ExpressionGUID;                                           
	unsigned char                                      UnknownData01[0x4];                                       
	struct FMaterialLayersFunctions                    Value;                                                    
};



struct FInterpolationParameter
{
	float                                              InterpolationTime;                                        
	TEnumAsByte<EFilterInterpolationType>              InterpolationType;                                        
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FBoneReference
{
	struct FName                                       BoneName;                                                 
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                            
	float                                              InterpolationSpeedPerSec;                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                
	struct FVector                                     SampleValue;                                              
	float                                              RateScale;                                                
};



struct FEditorElement
{
	int                                                Indices[0x3];                                             
	float                                              Weights[0x3];                                             
};



struct FBlendParameter
{
	struct FString                                     DisplayName;                                              
	float                                              Min;                                                      
	float                                              Max;                                                      
	int                                                GridNum;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimGroupInfo
{
	struct FName                                       Name;                                                     
	struct FLinearColor                                Color;                                                    
};



struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                     
	int                                                CustomResultNodeIndex;                                    
	int                                                TransitionIndex;                                          
	bool                                               bDesiredTransitionReturnValue;                            
	bool                                               bAutomaticRemainingTimeRule;                              
	unsigned char                                      UnknownData00[0x2];                                       
	TArray<int>                                        PoseEvaluatorLinks;                                       
};



struct FBakedAnimationState
{
	struct FName                                       StateName;                                                
	TArray<struct FBakedStateExitTransition>           Transitions;                                              
	int                                                StateRootNodeIndex;                                       
	int                                                StartNotify;                                              
	int                                                EndNotify;                                                
	int                                                FullyBlendedNotify;                                       
	bool                                               bIsAConduit;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                EntryRuleNodeIndex;                                       
	TArray<int>                                        PlayerNodeIndices;                                        
	bool                                               bAlwaysResetOnEntry;                                      
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FAnimationStateBase
{
	struct FName                                       StateName;                                                
};



struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                            
	int                                                NextState;                                                
	float                                              CrossfadeDuration;                                        
	int                                                StartNotify;                                              
	int                                                EndNotify;                                                
	int                                                InterruptNotify;                                          
	EAlphaBlendOption                                  BlendMode;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	class UCurveFloat*                                 CustomCurve;                                              
	class UBlendProfile*                               BlendProfile;                                             
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                              
	int                                                InitialState;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FBakedAnimationState>                States;                                                   
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                              
};



struct FSmartName
{
	struct FName                                       DisplayName;                                              
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FAnimCurveBase
{
	struct FName                                       LastObservedName;                                         
	struct FSmartName                                  Name;                                                     
	int                                                CurveTypeFlags;                                           
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      
};



struct FRichCurveKey
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              Time;                                                     
	float                                              Value;                                                    
	float                                              ArriveTangent;                                            
	float                                              ArriveTangentWeight;                                      
	float                                              LeaveTangent;                                             
	float                                              LeaveTangentWeight;                                       
};



struct FRichCurve : public FIndexedCurve
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              DefaultValue;                                             
	TArray<struct FRichCurveKey>                       Keys;                                                     
};



struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                               
};



struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              
};



struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                            
	float                                              StartPos;                                                 
	float                                              AnimStartTime;                                            
	float                                              AnimEndTime;                                              
	float                                              AnimPlayRate;                                             
	int                                                LoopingCount;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                             
};



struct FAlphaBlend
{
	EAlphaBlendOption                                  BlendOption;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	class UCurveFloat*                                 CustomCurve;                                              
	float                                              BlendTime;                                                
	unsigned char                                      UnknownData01[0x24];                                      
};



struct FAnimSyncMarker
{
	struct FName                                       MarkerName;                                               
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMarkerSyncData
{
	TArray<struct FAnimSyncMarker>                     AuthoredSyncMarkers;                                      
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                              
	float                                              StartTime;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       NextSectionName;                                          
	TArray<class UAnimMetaData*>                       MetaData;                                                 
};



struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                 
	struct FAnimTrack                                  AnimTrack;                                                
};



struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                
	float                                              DisplayTime;                                              
	float                                              TriggerTimeOffset;                                        
};



struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                              
	float                                              TriggerTime;                                              
	TEnumAsByte<EAnimNotifyEventType>                  NotifyEventType;                                          
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FTimeStretchCurveMarker
{
	float                                              Time[0x3];                                                
	float                                              Alpha;                                                    
};



struct FTimeStretchCurve
{
	float                                              SamplingRate;                                             
	float                                              CurveValueMinPrecision;                                   
	TArray<struct FTimeStretchCurveMarker>             Markers;                                                  
	float                                              Sum_dT_i_by_C_i[0x3];                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            
};



struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         
};



struct FPrimaryAssetRules
{
	int                                                Priority;                                                 
	bool                                               bApplyRecursively;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                ChunkId;                                                  
	EPrimaryAssetCookRule                              CookRule;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FPrimaryAssetTypeInfo
{
	struct FName                                       PrimaryAssetType;                                         
	unsigned char                                      UnknownData00[0x28];                                      
	class UClass*                                      AssetBaseClassLoaded;                                     
	bool                                               bHasBlueprintClasses;                                     
	bool                                               bIsEditorOnly;                                            
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<struct FDirectoryPath>                      Directories;                                              
	TArray<struct FSoftObjectPath>                     SpecificAssets;                                           
	struct FPrimaryAssetRules                          Rules;                                                    
	TArray<struct FString>                             AssetScanPaths;                                           
	bool                                               bIsDynamicAsset;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                NumberOfAssets;                                           
};



struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           
	struct FPrimaryAssetRules                          Rules;                                                    
};



struct FAssetManagerRedirect
{
	struct FString                                     Old;                                                      
	struct FString                                     New;                                                      
};



struct FAssetMapping
{
	class UAnimationAsset*                             SourceAsset;                                              
	class UAnimationAsset*                             TargetAsset;                                              
};



struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                            
	float                                              DecayHeight;                                              
	int                                                MaxScatteringOrder;                                       
	int                                                TransmittanceTexWidth;                                    
	int                                                TransmittanceTexHeight;                                   
	int                                                IrradianceTexWidth;                                       
	int                                                IrradianceTexHeight;                                      
	int                                                InscatterAltitudeSampleNum;                               
	int                                                InscatterMuNum;                                           
	int                                                InscatterMuSNum;                                          
	int                                                InscatterNuNum;                                           
};



struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                
	float                                              FloatParam;                                               
	bool                                               BoolParam;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                IntParam;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	class USoundWave*                                  SoundWaveParam;                                           
};



struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                          
	class UCurveFloat*                                 ExternalCurve;                                            
};



struct FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x8];                                       
	EAttenuationDistanceModel                          DistanceAlgorithm;                                        
	unsigned char                                      UnknownData01[0x7];                                       
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              dBAttenuationAtMax;                                       
	struct FVector                                     AttenuationShapeExtents;                                  
	float                                              ConeOffset;                                               
	float                                              FalloffDistance;                                          
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                           
	unsigned char                                      bSpatialize : 1;                                          
	unsigned char                                      bAttenuateWithLPF : 1;                                    
	unsigned char                                      bEnableListenerFocus : 1;                                 
	unsigned char                                      bEnableFocusInterpolation : 1;                            
	unsigned char                                      bEnableOcclusion : 1;                                     
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;                     
	unsigned char                                      bEnableReverbSend : 1;                                    
	unsigned char                                      bApplyNormalizationToStereoSounds : 1;                    
	unsigned char                                      bEnableLogFrequencyScaling : 1;                           
	TEnumAsByte<ESoundDistanceCalc>                    DistanceType;                                             
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              OmniRadius;                                               
	float                                              StereoSpread;                                             
	TEnumAsByte<ESoundSpatializationAlgorithm>         SpatializationAlgorithm;                                  
	unsigned char                                      UnknownData01[0x7];                                       
	class USpatializationPluginSourceSettingsBase*     SpatializationPluginSettings;                             
	float                                              RadiusMin;                                                
	float                                              RadiusMax;                                                
	float                                              LPFRadiusMin;                                             
	float                                              LPFRadiusMax;                                             
	EAirAbsorptionMethod                               AbsorptionMethod;                                         
	unsigned char                                      UnknownData02[0x7];                                       
	struct FRuntimeFloatCurve                          CustomLowpassAirAbsorptionCurve;                          
	struct FRuntimeFloatCurve                          CustomHighpassAirAbsorptionCurve;                         
	float                                              LPFFrequencyAtMin;                                        
	float                                              LPFFrequencyAtMax;                                        
	float                                              HPFFrequencyAtMin;                                        
	float                                              HPFFrequencyAtMax;                                        
	float                                              FocusAzimuth;                                             
	float                                              NonFocusAzimuth;                                          
	float                                              FocusDistanceScale;                                       
	float                                              NonFocusDistanceScale;                                    
	float                                              FocusPriorityScale;                                       
	float                                              NonFocusPriorityScale;                                    
	float                                              FocusVolumeAttenuation;                                   
	float                                              NonFocusVolumeAttenuation;                                
	float                                              FocusAttackInterpSpeed;                                   
	float                                              FocusReleaseInterpSpeed;                                  
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                    
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              OcclusionLowPassFilterFrequency;                          
	float                                              OcclusionVolumeAttenuation;                               
	float                                              OcclusionInterpolationTime;                               
	class UOcclusionPluginSourceSettingsBase*          OcclusionPluginSettings;                                  
	EReverbSendMethod                                  ReverbSendMethod;                                         
	unsigned char                                      UnknownData04[0x7];                                       
	class UReverbPluginSourceSettingsBase*             ReverbPluginSettings;                                     
	float                                              ReverbWetLevelMin;                                        
	float                                              ReverbWetLevelMax;                                        
	float                                              ReverbDistanceMin;                                        
	float                                              ReverbDistanceMax;                                        
	struct FRuntimeFloatCurve                          CustomReverbSendCurve;                                    
	float                                              ManualReverbSendLevel;                                    
	unsigned char                                      UnknownData05[0x4];                                       
};



struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                              
	int                                                MaxChannels;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FReverbSettings
{
	unsigned char                                      bApplyReverb : 1;                                         
	TEnumAsByte<EReverbPreset>                         ReverbType;                                               
	unsigned char                                      UnknownData00[0x6];                                       
	class UReverbEffect*                               ReverbEffect;                                             
	float                                              Volume;                                                   
	float                                              FadeTime;                                                 
};



struct FInteriorSettings
{
	unsigned char                                      bIsWorldSettings : 1;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ExteriorVolume;                                           
	float                                              ExteriorTime;                                             
	float                                              ExteriorLPF;                                              
	float                                              ExteriorLPFTime;                                          
	float                                              InteriorVolume;                                           
	float                                              InteriorTime;                                             
	float                                              InteriorLPF;                                              
	float                                              InteriorLPFTime;                                          
};



struct FEditorMapPerformanceTestDefinition
{
	struct FSoftObjectPath                             PerformanceTestmap;                                       
	int                                                TestTimer;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FFilePath
{
	struct FString                                     FilePath;                                                 
};



struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                              
	struct FString                                     Value;                                                    
};



struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                           
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          
};



struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                  
	struct FEditorImportWorkflowDefinition             Normal;                                                   
	struct FEditorImportWorkflowDefinition             StaticMesh;                                               
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                       
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                           
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                             
	struct FEditorImportWorkflowDefinition             Animation;                                                
	struct FEditorImportWorkflowDefinition             Sound;                                                    
	struct FEditorImportWorkflowDefinition             SurroundSound;                                            
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                      
};



struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                           
	struct FFilePath                                   MaterialAsset;                                            
	struct FFilePath                                   ParticleSystemAsset;                                      
	struct FFilePath                                   SkeletalMeshAsset;                                        
	struct FFilePath                                   StaticMeshAsset;                                          
	struct FFilePath                                   TextureAsset;                                             
};



struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                 
	struct FString                                     NewProjectNameOverride;                                   
};



struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                   
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                           
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                               
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                       
	struct FFilePath                                   SourceControlMaterial;                                    
};



struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                     
	struct FFilePath                                   DefaultDiffuseTexture;                                    
	struct FFilePath                                   DefaultNormalTexture;                                     
};



struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                     
};



struct FBlueprintEditorPromotionSettings
{
	struct FFilePath                                   FirstMeshPath;                                            
	struct FFilePath                                   SecondMeshPath;                                           
	struct FFilePath                                   DefaultParticleAsset;                                     
};



struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                 
	struct FFilePath                                   ExecutablePath;                                           
	struct FString                                     CommandLineOptions;                                       
	struct FDirectoryPath                              WorkingDirectory;                                         
	struct FString                                     ScriptExtension;                                          
	struct FDirectoryPath                              ScriptDirectory;                                          
};



struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                           
	struct FString                                     ExportFileExtension;                                      
	bool                                               bSkipExport;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          
};



struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                          
	struct FString                                     DeviceID;                                                 
};



struct FBoneNode
{
	struct FName                                       Name;                                                     
	int                                                ParentIndex;                                              
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                               
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FVirtualBone
{
	struct FName                                       SourceBoneName;                                           
	struct FName                                       TargetBoneName;                                           
	struct FName                                       VirtualBoneName;                                          
};



struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                
	TArray<struct FName>                               SlotNames;                                                
};



struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                            
	float                                              BlendScale;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FKSphereElem : public FKShapeElem
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FMatrix                                     TM;                                                       
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
};



struct FKBoxElem : public FKShapeElem
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FMatrix                                     TM;                                                       
	struct FQuat                                       Orientation;                                              
	struct FVector                                     Center;                                                   
	struct FRotator                                    Rotation;                                                 
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	unsigned char                                      UnknownData01[0xC];                                       
};



struct FKSphylElem : public FKShapeElem
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FMatrix                                     TM;                                                       
	struct FQuat                                       Orientation;                                              
	struct FVector                                     Center;                                                   
	struct FRotator                                    Rotation;                                                 
	float                                              Radius;                                                   
	float                                              Length;                                                   
};



struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                               
	struct FBox                                        ElemBox;                                                  
	unsigned char                                      UnknownData00[0xC];                                       
	struct FTransform                                  Transform;                                                
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              
	TArray<TEnumAsByte<EShapeUsage>>                   SphereUsages;                                             
	TArray<bool>                                       SphereConsiderForMass;                                    
	TArray<struct FKBoxElem>                           BoxElems;                                                 
	TArray<TEnumAsByte<EShapeUsage>>                   BoxUsages;                                                
	TArray<bool>                                       BoxConsiderForMass;                                       
	TArray<struct FKSphylElem>                         SphylElems;                                               
	TArray<TEnumAsByte<EShapeUsage>>                   SphylUsages;                                              
	TArray<bool>                                       SphylConsiderForMass;                                     
	TArray<struct FKConvexElem>                        ConvexElems;                                              
	TArray<TEnumAsByte<EShapeUsage>>                   ConvexUsages;                                             
	TArray<bool>                                       ConvexConsiderForMass;                                    
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FBranchFilter
{
	struct FName                                       BoneName;                                                 
	int                                                BlendDepth;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                            
};



struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                            
	int                                                Direction;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       ItemName;                                                 
	int                                                PolyFlags;                                                
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FActiveCameraShakeInfo
{
	class UCameraShake*                                ShakeInstance;                                            
};



struct FPooledCameraShakes
{
	TArray<class UCameraShake*>                        PooledShakes;                                             
};



struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   
	struct FVector2D                                   V0_UV;                                                    
	struct FLinearColor                                V0_Color;                                                 
	struct FVector2D                                   V1_Pos;                                                   
	struct FVector2D                                   V1_UV;                                                    
	struct FLinearColor                                V1_Color;                                                 
	struct FVector2D                                   V2_Pos;                                                   
	struct FVector2D                                   V2_UV;                                                    
	struct FLinearColor                                V2_Color;                                                 
};



struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                
};



struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                     
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       ObjectTypeName;                                           
	TArray<struct FResponseChannel>                    CustomResponses;                                          
	struct FString                                     HelpMessage;                                              
	bool                                               bCanModify;                                               
	unsigned char                                      UnknownData01[0x27];                                      
};



struct FCustomChannelSetup
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       Name;                                                     
	TEnumAsByte<ECollisionResponse>                    DefaultResponse;                                          
	bool                                               bTraceType;                                               
	bool                                               bStaticObject;                                            
	unsigned char                                      UnknownData01[0x5];                                       
};



struct FCustomProfile
{
	struct FName                                       Name;                                                     
	TArray<struct FResponseChannel>                    CustomResponses;                                          
};



struct FRedirector
{
	struct FName                                       OldName;                                                  
	struct FName                                       NewName;                                                  
};



struct FCustomShapeUsageSetup
{
	TEnumAsByte<EShapeUsage>                           ShapeUsage;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       Name;                                                     
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FDPProfileMatchItem
{
	TEnumAsByte<EDPSourceType>                         SourceType;                                               
	TEnumAsByte<EDPCompareType>                        CompareType;                                              
	unsigned char                                      UnknownData00[0x6];                                       
	struct FString                                     MatchString;                                              
};



struct FDPProfileMatch
{
	struct FString                                     Profile;                                                  
	TArray<struct FDPProfileMatchItem>                 Match;                                                    
};



struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                    
	struct FName                                       DelegatePropertyName;                                     
	struct FName                                       FunctionNameToBind;                                       
};



struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                      
	class UClass*                                      WithinClass;                                              
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FCullDistanceSizePair
{
	float                                              Size;                                                     
	float                                              CullDistance;                                             
};



struct FNamedCurveValue
{
	struct FName                                       Name;                                                     
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FTextureLODGroup
{
	TEnumAsByte<ETextureGroup>                         Group;                                                    
	unsigned char                                      UnknownData00[0xB];                                       
	int                                                LODBias;                                                  
	unsigned char                                      UnknownData01[0x4];                                       
	int                                                NumStreamedMips;                                          
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                MinLODSize;                                               
	int                                                MaxLODSize;                                               
	unsigned char                                      UnknownData03[0x4];                                       
	struct FName                                       MinMagFilter;                                             
	struct FName                                       MipFilter;                                                
};



struct FSoundConcurrencySettings
{
	int                                                MaxCount;                                                 
	unsigned char                                      bLimitToOwner : 1;                                        
	TEnumAsByte<EMaxConcurrentResolutionRule>          ResolutionRule;                                           
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              VolumeScale;                                              
};



struct FSoundSubmixSendInfo
{
	float                                              SendLevel;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	class USoundSubmix*                                SoundSubmix;                                              
};



struct FSoundSourceBusSendInfo
{
	float                                              SendLevel;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	class USoundSourceBus*                             SoundSourceBus;                                           
};



struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                  
	class USoundWave*                                  SoundWave;                                                
	struct FString                                     LocalizationKeyFormat;                                    
	class UDialogueSoundWaveProxy*                     Proxy;                                                    
};



struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               
	float                                              ShadowExponent;                                           
	bool                                               bUseAreaShadowsForStationaryLight;                        
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                         
};



struct FACESParameter
{
	struct FLinearColor                                TintColor;                                                
	float                                              Bright;                                                   
	float                                              Gray;                                                     
	float                                              ShoulderStrength;                                         
	float                                              ToeStrength;                                              
	float                                              LinearStrength;                                           
	float                                              LinearAngle;                                              
};



struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                 
	float                                              MaxValue;                                                 
	class UDistributionFloat*                          Distribution;                                             
};



struct FEdGraphTerminalType
{
	struct FString                                     TerminalCategory;                                         
	struct FString                                     TerminalSubCategory;                                      
	TWeakObjectPtr<class UObject>                      TerminalSubCategoryObject;                                
	bool                                               bTerminalIsConst;                                         
	bool                                               bTerminalIsWeakPointer;                                   
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FEdGraphPinType
{
	struct FString                                     PinCategory;                                              
	struct FString                                     PinSubCategory;                                           
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                            
	struct FEdGraphTerminalType                        PinValueType;                                             
	EPinContainerType                                  ContainerType;                                            
	unsigned char                                      bIsArray : 1;                                             
	unsigned char                                      bIsReference : 1;                                         
	unsigned char                                      bIsConst : 1;                                             
	unsigned char                                      bIsWeakPointer : 1;                                       
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FCustomHeightFog
{
	float                                              Height;                                                   
	float                                              DensityCoefficient;                                       
	struct FLinearColor                                CustomFogInscatteringColor;                               
};



struct FBoneValueRangeInfo
{
	struct FVector                                     PositionMinValue;                                         
	struct FVector                                     PositionMaxValue;                                         
	struct FVector                                     RotationMinValue;                                         
	struct FVector                                     RotationMaxValue;                                         
	struct FVector                                     ScaleMinValue;                                            
	struct FVector                                     ScaleMaxValue;                                            
};



struct FSymmetryBone
{
	struct FName                                       LBoneName;                                                
	struct FName                                       RBoneName;                                                
	struct FBoneValueRangeInfo                         RangeInfo;                                                
};



struct FUnsymmetryBone
{
	struct FName                                       BoneName;                                                 
	struct FBoneValueRangeInfo                         RangeInfo;                                                
};



struct FFaceController
{
	struct FName                                       Name;                                                     
	TArray<struct FSymmetryBone>                       SymmetryBoneList;                                         
	TArray<struct FUnsymmetryBone>                     UnsymmetryBoneList;                                       
	TArray<struct FVector>                             SymmetryBonePositionMinValueList;                         
	TArray<struct FQuat>                               SymmetryBoneqRotationMinValueList;                        
	TArray<struct FVector>                             SymmetryBoneScaleMinValueList;                            
	TArray<struct FVector>                             SymmetryBonePositionMaxValueList;                         
	TArray<struct FQuat>                               SymmetryBoneqRotationMaxValueList;                        
	TArray<struct FVector>                             SymmetryBoneScaleMaxValueList;                            
	TArray<struct FVector>                             UnsymmetryBonePositionMinValueList;                       
	TArray<struct FQuat>                               UnsymmetryBoneqRotationMinValueList;                      
	TArray<struct FVector>                             UnsymmetryBoneScaleMinValueList;                          
	TArray<struct FVector>                             UnsymmetryBonePositionMaxValueList;                       
	TArray<struct FQuat>                               UnsymmetryBoneqRotationMaxValueList;                      
	TArray<struct FVector>                             UnsymmetryBoneScaleMaxValueList;                          
};



struct FFontCharacter
{
	int                                                StartU;                                                   
	int                                                StartV;                                                   
	int                                                USize;                                                    
	int                                                VSize;                                                    
	unsigned char                                      TextureIndex;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                VerticalOffset;                                           
};



struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                 
	float                                              Height;                                                   
	unsigned char                                      bEnableAntialiasing : 1;                                  
	unsigned char                                      bEnableBold : 1;                                          
	unsigned char                                      bEnableItalic : 1;                                        
	unsigned char                                      bEnableUnderline : 1;                                     
	unsigned char                                      bAlphaOnly : 1;                                           
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	struct FString                                     Chars;                                                    
	struct FString                                     UnicodeRange;                                             
	struct FString                                     CharsFilePath;                                            
	struct FString                                     CharsFileWildcard;                                        
	unsigned char                                      bCreatePrintableOnly : 1;                                 
	unsigned char                                      bIncludeASCIIRange : 1;                                   
	unsigned char                                      UnknownData01[0x3];                                       
	struct FLinearColor                                ForegroundColor;                                          
	unsigned char                                      bEnableDropShadow : 1;                                    
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                TexturePageWidth;                                         
	int                                                TexturePageMaxHeight;                                     
	int                                                XPadding;                                                 
	int                                                YPadding;                                                 
	int                                                ExtendBoxTop;                                             
	int                                                ExtendBoxBottom;                                          
	int                                                ExtendBoxRight;                                           
	int                                                ExtendBoxLeft;                                            
	unsigned char                                      bEnableLegacyMode : 1;                                    
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                Kerning;                                                  
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                DistanceFieldScaleFactor;                                 
	float                                              DistanceFieldScanRadiusScale;                             
	unsigned char                                      UnknownData05[0x4];                                       
};



struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{

};



struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                    
	unsigned char                                      bAffectsLeftSmall : 1;                                    
	unsigned char                                      bAffectsRightLarge : 1;                                   
	unsigned char                                      bAffectsRightSmall : 1;                                   
	unsigned char                                      UnknownData00[0x7];                                       
	struct FRuntimeFloatCurve                          Curve;                                                    
};



struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve                          Frequency;                                                
	struct FRuntimeFloatCurve                          Amplitude;                                                
};



struct FInstancedStaticMeshColorInstanceData
{
	struct FColor                                      Color;                                                    
};



struct FHLODProxyMesh
{
	class UStaticMesh*                                 StaticMesh;                                               
	float                                              DrawDistance;                                             
	TLazyObjectPtr<class ALODActor>                    LODActor;                                                 
	struct FName                                       Key;                                                      
};



struct FImportanceTexture
{
	struct FIntPoint                                   Size;                                                     
	int                                                NumMips;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<float>                                      MarginalCDF;                                              
	TArray<float>                                      ConditionalCDF;                                           
	TArray<struct FColor>                              TextureData;                                              
	TWeakObjectPtr<class UTexture2D>                   Texture;                                                  
	TEnumAsByte<EImportanceWeight>                     Weighting;                                                
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FComponentKey
{
	class UClass*                                      OwnerClass;                                               
	struct FName                                       SCSVariableName;                                          
	struct FGuid                                       AssociatedGuid;                                           
};



struct FComponentOverrideRecord
{
	class UClass*                                      ComponentClass;                                           
	class UActorComponent*                             ComponentTemplate;                                        
	struct FComponentKey                               ComponentKey;                                             
	struct FBlueprintCookedComponentInstancingData     CookedComponentInstancingData;                            
};



struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                        
	unsigned char                                      bExecuteWhenPaused : 1;                                   
	unsigned char                                      bOverrideParentBinding : 1;                               
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       InputActionName;                                          
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	struct FName                                       FunctionNameToBind;                                       
};



struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       InputAxisName;                                            
	struct FName                                       FunctionNameToBind;                                       
};



struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FKey                                        AxisKey;                                                  
	struct FName                                       FunctionNameToBind;                                       
};



struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FInputChord                                 InputChord;                                               
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	struct FName                                       FunctionNameToBind;                                       
};



struct FInputAxisProperties
{
	float                                              DeadZone;                                                 
	float                                              Sensitivity;                                              
	float                                              Exponent;                                                 
	unsigned char                                      bInvert : 1;                                              
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                              
	struct FInputAxisProperties                        AxisProperties;                                           
};



struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                               
	struct FKey                                        Key;                                                      
	unsigned char                                      bShift : 1;                                               
	unsigned char                                      bCtrl : 1;                                                
	unsigned char                                      bAlt : 1;                                                 
	unsigned char                                      bCmd : 1;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 
	struct FKey                                        Key;                                                      
	float                                              Scale;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            
	unsigned char                                      UnknownData00[0x6];                                       
	struct FName                                       FunctionNameToBind;                                       
};



struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              
	struct FColor                                      CurveColor;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     CurveName;                                                
	int                                                bHideCurve;                                               
	int                                                bColorCurve;                                              
	int                                                bFloatingPointColorCurve;                                 
	int                                                bClamp;                                                   
	float                                              ClampLow;                                                 
	float                                              ClampHigh;                                                
};



struct FCurveEdTab
{
	struct FString                                     TabName;                                                  
	TArray<struct FCurveEdEntry>                       Curves;                                                   
	float                                              ViewStartInput;                                           
	float                                              ViewEndInput;                                             
	float                                              ViewStartOutput;                                          
	float                                              ViewEndOutput;                                            
};



struct FAnimControlTrackKey
{
	float                                              StartTime;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	class UAnimSequence*                               AnimSeq;                                                  
	float                                              AnimStartOffset;                                          
	float                                              AnimEndOffset;                                            
	float                                              AnimPlayRate;                                             
	unsigned char                                      bLooping : 1;                                             
	unsigned char                                      bReverse : 1;                                             
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FBoolTrackKey
{
	float                                              Time;                                                     
	unsigned char                                      Value : 1;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FDirectorTrackCut
{
	float                                              Time;                                                     
	float                                              TransitionTime;                                           
	struct FName                                       TargetCamGroup;                                           
	int                                                ShotNumber;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FEventTrackKey
{
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       EventName;                                                
};



struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                
	class UDecalComponent*                             Decal;                                                    
	int                                                ElementIndex;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   
};



struct FParticleReplayTrackKey
{
	float                                              Time;                                                     
	float                                              Duration;                                                 
	int                                                ClipIDNumber;                                             
};



struct FSoundTrackKey
{
	float                                              Time;                                                     
	float                                              Volume;                                                   
	float                                              Pitch;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	class USoundBase*                                  Sound;                                                    
};



struct FToggleTrackKey
{
	float                                              Time;                                                     
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FVisibilityTrackKey
{
	float                                              Time;                                                     
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FVectorSpringState
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FFloatSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FDrawToRenderTargetContext
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FUserActivity
{
	struct FString                                     ActionName;                                               
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FGenericStruct
{
	int                                                Data;                                                     
};



struct FCollisionProfileName
{
	struct FName                                       Name;                                                     
};



struct FTimerHandle
{
	uint64_t                                           Handle;                                                   
};



struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                  
	float                                              MaxSamples;                                               
	float                                              MinValue;                                                 
	float                                              MaxValue;                                                 
	bool                                               bAutoAdjustMinMax;                                        
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FFormatArgumentData
{
	struct FString                                     ArgumentName;                                             
	TEnumAsByte<EFormatArgumentType>                   ArgumentValueType;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	struct FText                                       ArgumentValue;                                            
	int                                                ArgumentValueInt;                                         
	float                                              ArgumentValueFloat;                                       
	ETextGender                                        ArgumentValueGender;                                      
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FLayerActorStats
{
	class UClass*                                      Type;                                                     
	int                                                Total;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMaterialInput
{
	int                                                OutputIndex;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     InputName;                                                
	int                                                Mask;                                                     
	int                                                MaskR;                                                    
	int                                                MaskG;                                                    
	int                                                MaskB;                                                    
	int                                                MaskA;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       ExpressionName;                                           
};



struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FColor                                      Constant;                                                 
};



struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Constant;                                                 
};



struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     Constant;                                                 
};



struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ConstantX;                                                
	float                                              ConstantY;                                                
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FMaterialAttributesInput : public FExpressionInput
{
	int                                                PropertyConnectedBitmask;                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FVector4MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          
	unsigned char                                      UnknownData00[0x7];                                       
	struct FVector4                                    Constant;                                                 
};



struct FMaterialFunctionInfo
{
	struct FGuid                                       stateID;                                                  
	class UMaterialFunction*                           Function;                                                 
};



struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       stateID;                                                  
	class UMaterialParameterCollection*                ParameterCollection;                                      
};



struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                 
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BaseSizeX;                                                
	float                                              BaseSizeY;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	class UCurveFloat*                                 DistanceToSizeCurve;                                      
};



struct FCustomInput
{
	struct FString                                     InputName;                                                
	struct FExpressionInput                            Input;                                                    
};



struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          
	struct FGuid                                       ExpressionInputId;                                        
	struct FExpressionInput                            Input;                                                    
};



struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         
	struct FGuid                                       ExpressionOutputId;                                       
	struct FExpressionOutput                           Output;                                                   
};



struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                            
	struct FGuid                                       ID;                                                       
};



struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                             
};



struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                               
	TArray<class AActor*>                              Actors;                                                   
};



struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 
	float                                              TimeStamp;                                                
};



struct FPurchaseInfo
{
	struct FString                                     Identifier;                                               
	struct FString                                     DisplayName;                                              
	struct FString                                     DisplayDescription;                                       
	struct FString                                     DisplayPrice;                                             
};



struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                   
	float                                              Radius;                                                   
	float                                              Height;                                                   
};



struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                   
	struct FVector                                     Extent;                                                   
};



struct FNavGraphNode
{
	class UObject*                                     Owner;                                                    
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FNetBudgetStageDef
{
	struct FName                                       Name;                                                     
	float                                              Order;                                                    
	float                                              Weight;                                                   
	float                                              MinRatio;                                                 
	float                                              MaxRatio;                                                 
};



struct FActorReplicateFreqLODConfig
{
	float                                              DistSquared;                                              
	float                                              NetUpdateFreq;                                            
};



struct FActorReplicateFreqLODGroup
{
	struct FName                                       Category;                                                 
	unsigned char                                      LODEnabled : 1;                                           
	unsigned char                                      LODDistEnhancedOnBack : 1;                                
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              LODBackEnhanceMinDistSq;                                  
	float                                              LODBackEnhanceFactor;                                     
	float                                              LODLongDistViewFactor;                                    
	TArray<struct FActorReplicateFreqLODConfig>        LODDistConfigs;                                           
};



struct FLocationNetSerializeLODDetailInfo
{
	float                                              DistSqLOD1;                                               
	float                                              DistSqLOD2;                                               
};



struct FObjectPoolDefaultFence
{
	EObjectPoolFenceType                               FenceType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     FenceNames;                                               
};



struct FNodeMap
{
	struct FName                                       TargetNodeName;                                           
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  SourceToTargetTransform;                                  
};



struct FGerstnerWave
{
	float                                              WaveLength;                                               
	float                                              Amplitude;                                                
	float                                              Steepness;                                                
	float                                              GerstnerAngle;                                            
	struct FVector2D                                   WaveVector;                                               
	float                                              WaveSpeed;                                                
	float                                              WKA;                                                      
	float                                              Q;                                                        
	float                                              PhaseOffset;                                              
};



struct FGerstnerWaterWaveGeneratorSimple
{
	int                                                NumWaves;                                                 
	int                                                Seed;                                                     
	float                                              Randomness;                                               
	float                                              MinWavelength;                                            
	float                                              MaxWavelength;                                            
	float                                              WavelengthFalloff;                                        
	float                                              MinAmplitude;                                             
	float                                              MaxAmplitude;                                             
	float                                              AmplitudeFalloff;                                         
	float                                              DirectionAngularSpreadDeg;                                
	float                                              SmallWaveSteepness;                                       
	float                                              LargeWaveSteepness;                                       
	float                                              SteepnessFalloff;                                         
	float                                              WaveSpeed;                                                
	float                                              Gerstnersamplesize;                                       
	float                                              GerstnerParallelness;                                     
	TArray<struct FGerstnerWave>                       GerstnerWaves;                                            
};



struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                              
	unsigned char                                      bScale : 1;                                               
	unsigned char                                      bLock : 1;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            
	unsigned char                                      bGetSeedFromInstance : 1;                                 
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           
	unsigned char                                      bRandomlySelectSeedArray : 1;                             
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<int>                                        RandomSeeds;                                              
};



struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                Frequency;                                                
	int                                                ParticleFrequency;                                        
	unsigned char                                      FirstTimeOnly : 1;                                        
	unsigned char                                      LastTimeOnly : 1;                                         
	unsigned char                                      UseReflectedImpactVector : 1;                             
	unsigned char                                      bUseOrbitOffset : 1;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	struct FName                                       CustomName;                                               
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         
};



struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           
	struct FVector                                     Offset;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                  
	unsigned char                                      bProcessDuringUpdate : 1;                                 
	unsigned char                                      bUseEmitterTime : 1;                                      
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                
	unsigned char                                      bUseEmitterTime : 1;                                      
	unsigned char                                      bSpawnTimeOnly : 1;                                       
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              
	unsigned char                                      bScaleVelocityByParamValue : 1;                           
	unsigned char                                      UnknownData00[0x5];                                       
	struct FRawDistributionFloat                       ParamValue;                                               
};



struct FParticleBurst
{
	int                                                Count;                                                    
	int                                                CountLow;                                                 
	float                                              Time;                                                     
};



struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                    
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  Transform;                                                
	struct FRotator                                    MinInitialRotation;                                       
	struct FRotator                                    MaxInitialRotation;                                       
	struct FRotator                                    RotationRate;                                             
	float                                              Intensity;                                                
	float                                              Tightness;                                                
	unsigned char                                      bIgnoreComponentTransform : 1;                            
	unsigned char                                      bTileX : 1;                                               
	unsigned char                                      bTileY : 1;                                               
	unsigned char                                      bTileZ : 1;                                               
	unsigned char                                      bUseFixDT : 1;                                            
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                    
};



struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                           
	class UParticleModuleSpawn*                        SpawnModule;                                              
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                       
	TArray<class UParticleModule*>                     SpawnModules;                                             
	unsigned char                                      UnknownData00[0x8];                                       
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                         
	struct FFloatDistribution                          VectorFieldScale;                                         
	struct FFloatDistribution                          DragCoefficient;                                          
	struct FFloatDistribution                          PointAttractorStrength;                                   
	struct FFloatDistribution                          Resilience;                                               
	struct FVector                                     ConstantAcceleration;                                     
	struct FVector                                     PointAttractorPosition;                                   
	float                                              PointAttractorRadiusSq;                                   
	struct FVector                                     OrbitOffsetBase;                                          
	struct FVector                                     OrbitOffsetRange;                                         
	struct FVector2D                                   InvMaxSize;                                               
	float                                              InvRotationRateScale;                                     
	float                                              MaxLifetime;                                              
	int                                                MaxParticleCount;                                         
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             
	unsigned char                                      bEnableCollision : 1;                                     
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            
	unsigned char                                      bRemoveHMDRoll : 1;                                       
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              MinFacingCameraBlendDistance;                             
	float                                              MaxFacingCameraBlendDistance;                             
	struct FRawDistributionVector                      DynamicColor;                                             
	struct FRawDistributionFloat                       DynamicAlpha;                                             
	struct FRawDistributionVector                      DynamicColorScale;                                        
	struct FRawDistributionFloat                       DynamicAlphaScale;                                        
	struct FRawDistributionVector                      DynamicColorHDR;                                          
	struct FRawDistributionFloat                       DynamicAlphaHDR;                                          
	struct FRawDistributionVector                      DynamicColorScaleHDR;                                     
	struct FRawDistributionFloat                       DynamicAlphaScaleHDR;                                     
	unsigned char                                      UnknownData02[0x8];                                       
};



struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                    
	TArray<struct FColor>                              QuantizedMiscSamples;                                     
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           
	struct FVector4                                    ColorScale;                                               
	struct FVector4                                    ColorBias;                                                
	TArray<struct FColor>                              QuantizedColorSamplesHDR;                                 
	struct FVector4                                    ColorScaleHDR;                                            
	struct FVector4                                    ColorBiasHDR;                                             
	struct FVector4                                    MiscScale;                                                
	struct FVector4                                    MiscBias;                                                 
	struct FVector4                                    SimulationAttrCurveScale;                                 
	struct FVector4                                    SimulationAttrCurveBias;                                  
	struct FVector4                                    SubImageSize;                                             
	struct FVector4                                    SizeBySpeed;                                              
	struct FVector                                     ConstantAcceleration;                                     
	struct FVector                                     OrbitOffsetBase;                                          
	struct FVector                                     OrbitOffsetRange;                                         
	struct FVector                                     OrbitFrequencyBase;                                       
	struct FVector                                     OrbitFrequencyRange;                                      
	struct FVector                                     OrbitPhaseBase;                                           
	struct FVector                                     OrbitPhaseRange;                                          
	float                                              GlobalVectorFieldScale;                                   
	float                                              GlobalVectorFieldTightness;                               
	float                                              PerParticleVectorFieldScale;                              
	float                                              PerParticleVectorFieldBias;                               
	float                                              DragCoefficientScale;                                     
	float                                              DragCoefficientBias;                                      
	float                                              ResilienceScale;                                          
	float                                              ResilienceBias;                                           
	float                                              CollisionRadiusScale;                                     
	float                                              CollisionRadiusBias;                                      
	float                                              CollisionTimeBias;                                        
	float                                              CollisionRandomSpread;                                    
	float                                              CollisionRandomDistribution;                              
	float                                              OneMinusFriction;                                         
	float                                              RotationRateScale;                                        
	float                                              CameraMotionBlurAmount;                                   
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector2D                                   PivotOffset;                                              
	unsigned char                                      bRemoveHMDRoll : 1;                                       
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              MinFacingCameraBlendDistance;                             
	float                                              MaxFacingCameraBlendDistance;                             
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        
};



struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                     
	class UMaterialInterface*                          Material;                                                 
};



struct FPhysicalAnimationData
{
	struct FName                                       BodyName;                                                 
	unsigned char                                      bIsLocalSimulation : 1;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              OrientationStrength;                                      
	float                                              AngularVelocityStrength;                                  
	float                                              PositionStrength;                                         
	float                                              VelocityStrength;                                         
	float                                              MaxLinearForce;                                           
	float                                              MaxAngularForce;                                          
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                 
	float                                              FrictionScale;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPhysicalAnimationProfile
{
	struct FName                                       ProfileName;                                              
	struct FPhysicalAnimationData                      PhysicalAnimationData;                                    
};



struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            
};



struct FConstraintBaseParams
{
	float                                              Stiffness;                                                
	float                                              Damping;                                                  
	float                                              Restitution;                                              
	float                                              ContactDistance;                                          
	unsigned char                                      bSoftConstraint : 1;                                      
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FLinearConstraint : public FConstraintBaseParams
{
	float                                              Limit;                                                    
	TEnumAsByte<ELinearConstraintMotion>               XMotion;                                                  
	TEnumAsByte<ELinearConstraintMotion>               YMotion;                                                  
	TEnumAsByte<ELinearConstraintMotion>               ZMotion;                                                  
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FConeConstraint : public FConstraintBaseParams
{
	float                                              Swing1LimitDegrees;                                       
	float                                              Swing2LimitDegrees;                                       
	TEnumAsByte<EAngularConstraintMotion>              Swing1Motion;                                             
	TEnumAsByte<EAngularConstraintMotion>              Swing2Motion;                                             
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FTwistConstraint : public FConstraintBaseParams
{
	float                                              TwistLimitDegrees;                                        
	TEnumAsByte<EAngularConstraintMotion>              TwistMotion;                                              
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FConstraintDrive
{
	float                                              Stiffness;                                                
	float                                              Damping;                                                  
	float                                              MaxForce;                                                 
	unsigned char                                      bEnablePositionDrive : 1;                                 
	unsigned char                                      bEnableVelocityDrive : 1;                                 
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FLinearDriveConstraint
{
	struct FVector                                     PositionTarget;                                           
	struct FVector                                     VelocityTarget;                                           
	struct FConstraintDrive                            XDrive;                                                   
	struct FConstraintDrive                            YDrive;                                                   
	struct FConstraintDrive                            ZDrive;                                                   
	unsigned char                                      bEnablePositionDrive : 1;                                 
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FAngularDriveConstraint
{
	struct FConstraintDrive                            TwistDrive;                                               
	struct FConstraintDrive                            SwingDrive;                                               
	struct FConstraintDrive                            SlerpDrive;                                               
	struct FRotator                                    OrientationTarget;                                        
	struct FVector                                     AngularVelocityTarget;                                    
	TEnumAsByte<EAngularDriveMode>                     AngularDriveMode;                                         
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FConstraintProfileProperties
{
	float                                              ProjectionLinearTolerance;                                
	float                                              ProjectionAngularTolerance;                               
	float                                              LinearBreakThreshold;                                     
	float                                              AngularBreakThreshold;                                    
	struct FLinearConstraint                           LinearLimit;                                              
	struct FConeConstraint                             ConeLimit;                                                
	struct FTwistConstraint                            TwistLimit;                                               
	struct FLinearDriveConstraint                      LinearDrive;                                              
	struct FAngularDriveConstraint                     AngularDrive;                                             
	unsigned char                                      bDisableCollision : 1;                                    
	unsigned char                                      bParentDominates : 1;                                     
	unsigned char                                      bEnableProjection : 1;                                    
	unsigned char                                      bAngularBreakable : 1;                                    
	unsigned char                                      bLinearBreakable : 1;                                     
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x18];                                      
	struct FName                                       JointName;                                                
	struct FName                                       ConstraintBone1;                                          
	struct FName                                       ConstraintBone2;                                          
	struct FVector                                     Pos1;                                                     
	struct FVector                                     PriAxis1;                                                 
	struct FVector                                     SecAxis1;                                                 
	struct FVector                                     Pos2;                                                     
	struct FVector                                     PriAxis2;                                                 
	struct FVector                                     SecAxis2;                                                 
	struct FRotator                                    AngularRotationOffset;                                    
	unsigned char                                      bScaleLinearLimits : 1;                                   
	unsigned char                                      UnknownData01[0x7];                                       
	struct FConstraintProfileProperties                ProfileInstance;                                          
	unsigned char                                      UnknownData02[0x28];                                      
};



struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties                ProfileProperties;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       ProfileName;                                              
};



struct FPhysicalSurfaceName
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       Name;                                                     
};



struct FKeyBind
{
	struct FKey                                        Key;                                                      
	struct FString                                     Command;                                                  
	unsigned char                                      Control : 1;                                              
	unsigned char                                      Shift : 1;                                                
	unsigned char                                      Alt : 1;                                                  
	unsigned char                                      Cmd : 1;                                                  
	unsigned char                                      bIgnoreCtrl : 1;                                          
	unsigned char                                      bIgnoreShift : 1;                                         
	unsigned char                                      bIgnoreAlt : 1;                                           
	unsigned char                                      bIgnoreCmd : 1;                                           
	unsigned char                                      bDisabled : 1;                                            
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};



struct FPoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                           
	TArray<bool>                                       LocalSpacePoseMask;                                       
	TArray<float>                                      CurveData;                                                
};



struct FPoseDataContainer
{
	TArray<struct FSmartName>                          PoseNames;                                                
	TArray<struct FPoseData>                           Poses;                                                    
	TArray<struct FName>                               Tracks;                                                   
	TMap<struct FName, int>                            TrackMap;                                                 
	TArray<struct FAnimCurveBase>                      Curves;                                                   
};



struct FPreviewMeshCollectionEntry
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FCollectionReference
{
	struct FName                                       CollectionName;                                           
};



struct FRigTransformConstraint
{
	TEnumAsByte<EConstraintTransform>                  TranformType;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       ParentSpace;                                              
	float                                              Weight;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                     
};



struct FTransformBase
{
	struct FName                                       Node;                                                     
	struct FTransformBaseConstraint                    Constraints[0x2];                                         
};



struct FNode
{
	struct FName                                       Name;                                                     
	struct FName                                       ParentName;                                               
	struct FTransform                                  Transform;                                                
	struct FString                                     DisplayName;                                              
	bool                                               bAdvanced;                                                
	unsigned char                                      UnknownData00[0xF];                                       
};



struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                  
	struct FString                                     DataValue;                                                
};



struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        
	bool                                               bEnableShadowCasting;                                     
	bool                                               bRecomputeTangent;                                        
	unsigned char                                      UnknownData00[0x6];                                       
	struct FName                                       MaterialSlotName;                                         
	struct FMeshUVChannelInfo                          UVChannelData;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	struct FSoftObjectPath                             MaterialSoftRef;                                          
};



struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FTriangleSortSettings
{
	TEnumAsByte<ETriangleSortOption>                   TriangleSorting;                                          
	TEnumAsByte<ETriangleSortAxis>                     CustomLeftRightAxis;                                      
	unsigned char                                      UnknownData00[0x6];                                       
	struct FName                                       CustomLeftRightBoneName;                                  
};



struct FSimplygonChannelCastingSettings
{
	TEnumAsByte<ESimplygonMaterialChannel>             MaterialChannel;                                          
	TEnumAsByte<ESimplygonCasterType>                  Caster;                                                   
	bool                                               bActive;                                                  
	TEnumAsByte<ESimplygonColorChannels>               ColorChannels;                                            
	int                                                BitsPerChannel;                                           
	bool                                               bUseSRGB;                                                 
	bool                                               bBakeVertexColors;                                        
	bool                                               bFlipBackfacingNormals;                                   
	bool                                               bUseTangentSpaceNormals;                                  
	bool                                               bFlipGreenChannel;                                        
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FOutputMaterialInfo
{
	unsigned char                                      UnknownData00[0x58];                                      
};



struct FSimplygonMaterialLODSettings
{
	bool                                               bActive;                                                  
	TEnumAsByte<EMaterialLODType>                      MaterialLODType;                                          
	bool                                               bUseAutomaticSizes;                                       
	TEnumAsByte<ESimplygonTextureResolution>           TextureWidth;                                             
	TEnumAsByte<ESimplygonTextureResolution>           TextureHeight;                                            
	TEnumAsByte<ESimplygonTextureSamplingQuality>      SamplingQuality;                                          
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                GutterSpace;                                              
	TEnumAsByte<ESimplygonTextureStrech>               TextureStrech;                                            
	bool                                               bReuseExistingCharts;                                     
	unsigned char                                      UnknownData01[0x2];                                       
	TArray<struct FSimplygonChannelCastingSettings>    ChannelsToCast;                                           
	bool                                               bBakeVertexData;                                          
	bool                                               bBakeActorData;                                           
	bool                                               bAllowMultiMaterial;                                      
	bool                                               bPreferTwoSideMaterials;                                  
	bool                                               bUseVertexWeights;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	struct FOutputMaterialInfo                         OutputMaterialInfo;                                       
};



struct FMaterialProxySettings
{
	struct FIntPoint                                   TextureSize;                                              
	TEnumAsByte<ETextureSizingType>                    TextureSizingType;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              GutterSpace;                                              
	EMaterialProxySmaplingQuality                      SamplingQuality;                                          
	EUVStrech                                          UVStrech;                                                 
	bool                                               bSplitProxyMaterialBasedOnType;                           
	bool                                               bUseTangentSpace;                                         
	bool                                               bNormalMap;                                               
	bool                                               bMetallicMap;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              MetallicConstant;                                         
	bool                                               bRoughnessMap;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              RoughnessConstant;                                        
	bool                                               bSpecularMap;                                             
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              SpecularConstant;                                         
	bool                                               bEmissiveMap;                                             
	bool                                               bOpacityMap;                                              
	unsigned char                                      UnknownData04[0x2];                                       
	float                                              OpacityConstant;                                          
	float                                              AOConstant;                                               
	bool                                               bOpacityMaskMap;                                          
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              OpacityMaskConstant;                                      
	bool                                               bAmbientOcclusionMap;                                     
	unsigned char                                      UnknownData06[0x3];                                       
	float                                              AmbientOcclusionConstant;                                 
	struct FIntPoint                                   DiffuseTextureSize;                                       
	struct FIntPoint                                   NormalTextureSize;                                        
	struct FIntPoint                                   MetallicTextureSize;                                      
	struct FIntPoint                                   RoughnessTextureSize;                                     
	struct FIntPoint                                   SpecularTextureSize;                                      
	struct FIntPoint                                   EmissiveTextureSize;                                      
	struct FIntPoint                                   OpacityTextureSize;                                       
	struct FIntPoint                                   OpacityMaskTextureSize;                                   
	struct FIntPoint                                   AmbientOcclusionTextureSize;                              
	TEnumAsByte<EMaterialMergeType>                    MaterialMergeType;                                        
	TEnumAsByte<EBlendMode>                            BlendMode;                                                
	unsigned char                                      UnknownData07[0x2];                                       
};



struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              NumOfTrianglesPercentage;                                 
	float                                              MaxDeviationPercentage;                                   
	int                                                ScreenSize;                                               
	float                                              WeldingThreshold;                                         
	bool                                               bRecalcNormals;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              NormalsThreshold;                                         
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       
	float                                              BoneReductionRatio;                                       
	int                                                MaxBonesPerVertex;                                        
	bool                                               bTransferMorphTarget;                                     
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FBoneReference>                      BonesToRemove;                                            
	int                                                BaseLOD;                                                  
	int                                                LODChainLastIndex;                                        
	bool                                               bUseVertexWeights;                                        
	bool                                               bUseVertexWeightsForMaterial;                             
	bool                                               bSimplifyMaterials;                                       
	unsigned char                                      UnknownData03[0x5];                                       
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      
	struct FMaterialProxySettings                      MaterialSettings;                                         
	bool                                               bForceRebuild;                                            
	unsigned char                                      UnknownData04[0x3];                                       
	class UAnimSequence*                               BakePose;                                                 
};



struct FSimplygonRemeshingSettings
{
	bool                                               bActive;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                ScreenSize;                                               
	bool                                               bRecalculateNormals;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              HardAngleThreshold;                                       
	int                                                MergeDistance;                                            
	bool                                               bUseClippingPlane;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              ClippingLevel;                                            
	int                                                AxisIndex;                                                
	bool                                               bPlaneNegativeHalfspace;                                  
	bool                                               bUseMassiveLOD;                                           
	bool                                               bUseAggregateLOD;                                         
	unsigned char                                      UnknownData03[0x5];                                       
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      
};



struct FMeshProxySettings
{
	int                                                ScreenSize;                                               
	struct FMaterialProxySettings                      MaterialSettings;                                         
	int                                                TextureWidth;                                             
	int                                                TextureHeight;                                            
	bool                                               bExportNormalMap;                                         
	bool                                               bExportMetallicMap;                                       
	bool                                               bExportRoughnessMap;                                      
	bool                                               bExportSpecularMap;                                       
	bool                                               bCalculateCorrectLODModel;                                
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MergeDistance;                                            
	float                                              HardAngleThreshold;                                       
	int                                                LightMapResolution;                                       
	bool                                               bComputeLightMapResolution;                               
	bool                                               bRecalculateNormals;                                      
	bool                                               bBakeVertexData;                                          
	bool                                               bUseLandscapeCulling;                                     
	TEnumAsByte<ELandscapeCullingPrecision>            LandscapeCullingPrecision;                                
	bool                                               bAssignLODGroup;                                          
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                LODGroupIndex;                                            
	bool                                               bAggregateMeshes;                                         
	EChartAggregationMode                              AggregatorMode;                                           
	bool                                               bUseCustomHemisphere;                                     
	unsigned char                                      UnknownData02[0x1];                                       
};



struct FGroupedSkeletalOptimizationSettings
{
	bool                                               bAutoComputeLODDistance;                                  
	ESkeletalMeshLODType                               LevelOfDetailType;                                        
	unsigned char                                      UnknownData00[0x6];                                       
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        
	struct FMeshProxySettings                          ProxySettings;                                            
	bool                                               bForceLODRebuild;                                         
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FSkeletalMeshLODInfo
{
	float                                              ScreenSize;                                               
	float                                              LODHysteresis;                                            
	TArray<int>                                        LODMaterialMap;                                           
	TArray<bool>                                       bEnableShadowCasting;                                     
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                     
	unsigned char                                      bHasBeenSimplified : 1;                                   
	unsigned char                                      UnknownData00[0x7];                                       
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                        
	struct FGroupedSkeletalOptimizationSettings        OptimizationSettings;                                     
	TArray<struct FName>                               RemovedBones;                                             
	TArray<struct FBoneReference>                      BonesToRemove;                                            
	class UAnimSequence*                               BakePose;                                                 
	struct FString                                     SourceImportFilename;                                     
	unsigned char                                      bHasPerLODVertexColors : 1;                               
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FClothPhysicsProperties_Legacy
{
	float                                              VerticalResistance;                                       
	float                                              HorizontalResistance;                                     
	float                                              BendResistance;                                           
	float                                              ShearResistance;                                          
	float                                              Friction;                                                 
	float                                              Damping;                                                  
	float                                              TetherStiffness;                                          
	float                                              TetherLimit;                                              
	float                                              Drag;                                                     
	float                                              StiffnessFrequency;                                       
	float                                              GravityScale;                                             
	float                                              MassScale;                                                
	float                                              InertiaBlend;                                             
	float                                              SelfCollisionThickness;                                   
	float                                              SelfCollisionSquashScale;                                 
	float                                              SelfCollisionStiffness;                                   
	float                                              SolverFrequency;                                          
	float                                              FiberCompression;                                         
	float                                              FiberExpansion;                                           
	float                                              FiberResistance;                                          
};



struct FClothingAssetData_Legacy
{
	struct FName                                       AssetName;                                                
	struct FString                                     ApexFileName;                                             
	bool                                               bClothPropertiesChanged;                                  
	unsigned char                                      UnknownData00[0x3];                                       
	struct FClothPhysicsProperties_Legacy              PhysicsProperties;                                        
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FSkinWeightProfileInfo
{
	struct FName                                       Name;                                                     
	bool                                               DefaultProfile;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                DefaultProfileFromLODIndex;                               
};



struct FSkeletalMeshLODGroupSettings
{
	float                                              ScreenSize;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FSkeletalMeshOptimizationSettings           OptimizationSettings;                                     
};



struct FTentDistribution
{
	float                                              TipAltitude;                                              
	float                                              TipValue;                                                 
	float                                              Width;                                                    
};



struct FSoundClassProperties
{
	float                                              Volume;                                                   
	float                                              Pitch;                                                    
	float                                              StereoBleed;                                              
	float                                              LFEBleed;                                                 
	float                                              VoiceCenterChannelVolume;                                 
	float                                              RadioFilterVolume;                                        
	float                                              RadioFilterVolumeThreshold;                               
	unsigned char                                      bApplyEffects : 1;                                        
	unsigned char                                      bAlwaysPlay : 1;                                          
	unsigned char                                      bIsUISound : 1;                                           
	unsigned char                                      bIsMusic : 1;                                             
	unsigned char                                      bReverb : 1;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Default2DReverbSendAmount;                                
	unsigned char                                      bCenterChannelOnly : 1;                                   
	unsigned char                                      bApplyAmbientVolumes : 1;                                 
	TEnumAsByte<EAudioOutputTarget>                    OutputTarget;                                             
	unsigned char                                      UnknownData01[0x2];                                       
};



struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                 
	float                                              MinVolumeThreshold;                                       
	float                                              MaxVolumeThreshold;                                       
};



struct FSourceEffectChainEntry
{
	class USoundEffectSourcePreset*                    Preset;                                                   
	unsigned char                                      bBypass : 1;                                              
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FSoundGroup
{
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     DisplayName;                                              
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              DecompressedDuration;                                     
};



struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                                       
	float                                              FrequencyCenter0;                                         
	float                                              Gain0;                                                    
	float                                              Bandwidth0;                                               
	float                                              FrequencyCenter1;                                         
	float                                              Gain1;                                                    
	float                                              Bandwidth1;                                               
	float                                              FrequencyCenter2;                                         
	float                                              Gain2;                                                    
	float                                              Bandwidth2;                                               
	float                                              FrequencyCenter3;                                         
	float                                              Gain3;                                                    
	float                                              Bandwidth3;                                               
};



struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                         
	float                                              VolumeAdjuster;                                           
	float                                              PitchAdjuster;                                            
	unsigned char                                      bApplyToChildren : 1;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              VoiceCenterChannelVolumeAdjuster;                         
};



struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                             
	struct FDialogueContext                            Context;                                                  
};



struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                      
	float                                              FadeInDistanceEnd;                                        
	float                                              FadeOutDistanceStart;                                     
	float                                              FadeOutDistanceEnd;                                       
	float                                              Volume;                                                   
};



struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            
	float                                              Default;                                                  
	float                                              MinInput;                                                 
	float                                              MaxInput;                                                 
	float                                              MinOutput;                                                
	float                                              MaxOutput;                                                
	TEnumAsByte<EModulationParamMode>                  ParamMode;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FSubtitleCue
{
	struct FText                                       Text;                                                     
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                              
	TArray<struct FSubtitleCue>                        Subtitles;                                                
	unsigned char                                      bMature : 1;                                              
	unsigned char                                      bManualWordWrap : 1;                                      
	unsigned char                                      bSingleLine : 1;                                          
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                            
	struct FLinearColor                                SubsurfaceColor;                                          
	struct FLinearColor                                FalloffColor;                                             
};



struct FCollectionBoolParameter : public FCollectionParameterBase
{
	bool                                               DefaultValue;                                             
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FCollectionIntParameter : public FCollectionParameterBase
{
	int                                                DefaultValue;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCollectionStructParameter
{
	struct FString                                     MatchRules;                                               
	TArray<struct FCollectionScalarParameter>          ScalarParameters;                                         
	TArray<struct FCollectionVectorParameter>          VectorParameters;                                         
	TArray<struct FCollectionBoolParameter>            BoolParameters;                                           
	TArray<struct FCollectionIntParameter>             IntParameters;                                            
};



struct FTimelineEventEntry
{
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FScriptDelegate                             EventFunc;                                                
};



struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                              
	struct FScriptDelegate                             InterpFunc;                                               
	struct FName                                       TrackName;                                                
	struct FName                                       VectorPropertyName;                                       
	class UStructProperty*                             VectorProperty;                                           
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                               
	struct FScriptDelegate                             InterpFunc;                                               
	struct FName                                       TrackName;                                                
	struct FName                                       FloatPropertyName;                                        
	class UFloatProperty*                              FloatProperty;                                            
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                         
	struct FScriptDelegate                             InterpFunc;                                               
	struct FName                                       TrackName;                                                
	struct FName                                       LinearColorPropertyName;                                  
	class UStructProperty*                             LinearColorProperty;                                      
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FTimeline
{
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Length;                                                   
	unsigned char                                      bLooping : 1;                                             
	unsigned char                                      bReversePlayback : 1;                                     
	unsigned char                                      bPlayIng : 1;                                             
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              PlayRate;                                                 
	float                                              Position;                                                 
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FTimelineEventEntry>                 Events;                                                   
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                            
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                             
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                       
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                   
	struct FScriptDelegate                             TimelineFinishedFunc;                                     
	unsigned char                                      UnknownData03[0x10];                                      
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        
	struct FName                                       DirectionPropertyName;                                    
	class UProperty*                                   DirectionProperty;                                        
};



struct FTTTrackBase
{
	struct FName                                       TrackName;                                                
	bool                                               bIsExternalCurve;                                         
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FTTEventTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveKeys;                                                
};



struct FTTFloatTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveFloat;                                               
};



struct FTTVectorTrack : public FTTTrackBase
{
	class UCurveVector*                                CurveVector;                                              
};



struct FTTLinearColorTrack : public FTTTrackBase
{
	class UCurveLinearColor*                           CurveLinearColor;                                         
};



struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                   
	class UTexture2D*                                  Image2;                                                   
	struct FSlateBrush                                 Brush1;                                                   
	struct FSlateBrush                                 Brush2;                                                   
	struct FVector2D                                   Center;                                                   
	struct FVector2D                                   VisualSize;                                               
	struct FVector2D                                   ThumbSize;                                                
	struct FVector2D                                   InteractionSize;                                          
	struct FVector2D                                   InputScale;                                               
	struct FKey                                        MainInputKey;                                             
	struct FKey                                        AltInputKey;                                              
};



struct FHardwareCursorReference
{
	struct FName                                       CursorPath;                                               
	struct FVector2D                                   HotSpot;                                                  
};



struct FPrimitiveComponentConfig
{
	struct FString                                     Name;                                                     
	unsigned char                                      ShadingStratety;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FOVAdaptiveShadingFactor;                                 
	unsigned char                                      FixShadingRate;                                           
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FMaterialBaseConfig
{
	struct FString                                     Name;                                                     
	unsigned char                                      ShadingRate;                                              
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMaterialInstanceConfig
{
	struct FString                                     Name;                                                     
	unsigned char                                      ShadingRate;                                              
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMeshMergingSettings
{
	bool                                               bGenerateLightMapUV;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                TargetLightMapResolution;                                 
	bool                                               bComputedLightMapResolution;                              
	bool                                               bImportVertexColors;                                      
	bool                                               bPivotPointAtZero;                                        
	bool                                               bMergePhysicsData;                                        
	bool                                               bAssignLODGroup;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                LODGroupIndex;                                            
	bool                                               bMergeMaterials;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	struct FMaterialProxySettings                      MaterialSettings;                                         
	bool                                               bBakeVertexDataToMesh;                                    
	bool                                               bUseVertexDataForBakingMaterial;                          
	bool                                               bUseTextureBinning;                                       
	bool                                               bReuseMeshLightmapUVs;                                    
	bool                                               bMergeEquivalentMaterials;                                
	bool                                               bCheckUV;                                                 
	bool                                               bCheckAllUV;                                              
	EUVStrategy                                        UVStrategy;                                               
	EUVOutput                                          OutputUVs[0x8];                                           
	int                                                GutterSize;                                               
	bool                                               bCalculateCorrectLODModel;                                
	EMeshLODSelectionType                              LODSelectionType;                                         
	unsigned char                                      UnknownData03[0x2];                                       
	int                                                ExportSpecificLOD;                                        
	int                                                SpecificLOD;                                              
	bool                                               bUseLandscapeCulling;                                     
	bool                                               bIncludeImposters;                                        
	bool                                               bAllowDistanceField;                                      
	bool                                               bExportNormalMap;                                         
	bool                                               bExportMetallicMap;                                       
	bool                                               bExportRoughnessMap;                                      
	bool                                               bExportSpecularMap;                                       
	unsigned char                                      UnknownData04[0x1];                                       
	int                                                MergedMaterialAtlasResolution;                            
	unsigned char                                      UnknownData05[0x4];                                       
};



struct FHierarchicalSimplification
{
	unsigned char                                      UnknownData00[0x4];                                       
	float                                              TransitionScreenSize;                                     
	float                                              OverrideDrawDistance;                                     
	bool                                               bUseOverrideDrawDistance;                                 
	unsigned char                                      bAllowSpecificExclusion : 1;                              
	bool                                               bSimplifyMesh;                                            
	unsigned char                                      UnknownData01[0x1];                                       
	struct FMeshProxySettings                          ProxySetting;                                             
	struct FMeshMergingSettings                        MergeSetting;                                             
	float                                              DesiredBoundRadius;                                       
	float                                              DesiredFillingPercentage;                                 
	int                                                MinNumberOfActorsToBuild;                                 
	bool                                               bOnlyGenerateClustersForVolumes;                          
	bool                                               bReusePreviousLevelClusters;                              
	unsigned char                                      UnknownData02[0x2];                                       
};



struct FDSPVSParameter
{
	unsigned char                                      bUsePrecomputedVolume : 1;                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                DSVisibilityCellSize;                                     
	TEnumAsByte<EDSPVSConfigCategory>                  DSVisibilityAggressiveness;                               
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<int>                                        DSDebugGroups;                                            
};



struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 
	int                                                NumIndirectLightingBounces;                               
	int                                                NumSkyLightingBounces;                                    
	float                                              IndirectLightingQuality;                                  
	float                                              IndirectLightingSmoothness;                               
	struct FColor                                      EnvironmentColor;                                         
	float                                              EnvironmentIntensity;                                     
	float                                              EmissiveBoost;                                            
	float                                              DiffuseBoost;                                             
	TEnumAsByte<EVolumeLightingMethod>                 VolumeLightingMethod;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              VolumetricLightmapDetailCellSize;                         
	float                                              VolumetricLightmapMaximumBrickMemoryMb;                   
	float                                              VolumeLightSamplePlacementScale;                          
	unsigned char                                      bUseAmbientOcclusion : 1;                                 
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              DirectIlluminationOcclusionFraction;                      
	float                                              IndirectIlluminationOcclusionFraction;                    
	float                                              OcclusionExponent;                                        
	float                                              FullyOccludedSamplesFraction;                             
	float                                              MaxOcclusionDistance;                                     
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           
	unsigned char                                      bCompressLightmaps : 1;                                   
	unsigned char                                      bUseSimpleLightmap : 1;                                   
	unsigned char                                      UnknownData02[0x3];                                       
};



struct FIdeaBakingWorldInfoSettings
{
	EIdeaBakingLayout                                  BakingLayout;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                NumCoarseSamples;                                         
	int                                                NumSamples;                                               
	int                                                NumLightingBounces;                                       
	float                                              LightmapBoost;                                            
	float                                              SunHardness;                                              
	EIdeaBakingMode                                    BakingMode;                                               
	unsigned char                                      bUseParallelBaking : 1;                                   
	unsigned char                                      bUseConservativeRasterization : 1;                        
	unsigned char                                      bUseLocalOcclusion : 1;                                   
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              LocalOcclusionRadius;                                     
	float                                              LocalOcclusionFallOff;                                    
	float                                              LocalOcclusionDistribution;                               
	float                                              LocalOcclusionFadeRatio;                                  
	int                                                LocalOcclusionRes;                                        
	int                                                LocalOcclusionMultiple;                                   
	float                                              LocalOcclusionPower;                                      
	int                                                LocalOcclusionDenoising;                                  
	int                                                LocalOcclusionDilation;                                   
	int                                                NumDenoisingIterators;                                    
	int                                                NumDilationIterators;                                     
	int                                                DirectLightDenoising;                                     
	float                                              RayTraceMaxDistance;                                      
	float                                              RayTraceBias;                                             
	float                                              RetraceDistance;                                          
	float                                              SmallestTexelRadius;                                      
	uint32_t                                           AreaLightSampleCount;                                     
	unsigned char                                      bWithPortalDirectLighting : 1;                            
	unsigned char                                      bWithGrayDiffuse : 1;                                     
	unsigned char                                      UnknownData02[0x3];                                       
};



struct FSurfelRayTracingSettings
{
	unsigned char                                      bAllowSurfelRayTracing : 1;                               
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     SurfelVoxelSize;                                          
	struct FIntVector                                  SurfelHierarchyDimension;                                 
	struct FVector                                     IrradianceVolumeCellSize;                                 
	struct FIntVector                                  IrradianceVolumeDimension;                                
	uint32_t                                           IrradianceVolumeCellDim;                                  
	uint32_t                                           SurfelInjectSingleSize;                                   
	uint32_t                                           SurfelPoolInitScale;                                      
};



struct FNetViewer
{
	class UNetConnection*                              Connection;                                               
	class AActor*                                      InViewer;                                                 
	class AActor*                                      ViewTarget;                                               
	struct FVector                                     ViewLocation;                                             
	struct FVector                                     ViewDir;                                                  
};



struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                    
};



struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                    
};



struct FFloatRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        
	float                                              DampeningRatio;                                           
};



struct FVectorRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        
	float                                              DampeningRatio;                                           
};



struct FBranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                 
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                IntValue;                                                 
	float                                              FloatValue;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     StringValue;                                              
	class UObject*                                     ObjectValue;                                              
};



struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	struct FPlatformInterfaceData                      Data;                                                     
};



struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                            
	int                                                ReplicationKey;                                           
	int                                                MostRecentArrayReplicationKey;                            
};



struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                               
	struct FName                                       RowName;                                                  
};



struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0xB0];                                      
};



struct FRepAttributeModify
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UClass*                                      DamageTypeClass;                                          
};



struct FRadialDamageParams
{
	float                                              BaseDamage;                                               
	float                                              MinimumDamage;                                            
	float                                              InnerRadius;                                              
	float                                              OuterRadius;                                              
	float                                              DamageFalloff;                                            
};



struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                   
	struct FVector                                     Origin;                                                   
	TArray<struct FHitResult>                          ComponentHits;                                            
};



struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                   
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            
	struct FHitResult                                  HitInfo;                                                  
};



struct FRepMovementKeyLoc
{
	unsigned char                                      UnknownData00[0x1C];                                      
	EVectorQuantization                                LocationQuantizationLevel;                                
	EVectorQuantization                                VelocityQuantizationLevel;                                
	unsigned char                                      UnknownData01[0xA];                                       
};



struct FVector_NetQuantizeWithDelta : public FVector
{
	unsigned char                                      UnknownData00[0x14];                                      
};



struct FPhysicsTimeStep
{
	bool                                               bFixedTimeStep;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              DeltaTime;                                                
	float                                              SubTime;                                                  
	float                                              Fps;                                                      
	unsigned char                                      NumSubSteps;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ExtraTimeBank;                                            
};



struct FUserDetailSetting
{
	int                                                DeviceQualityLevel;                                       
	int                                                TCQualityGrade;                                           
	int                                                DeviceMaxSoundEffectLevel;                                
	int                                                DeviceMaxQualityLevel;                                    
	int                                                UserQualitySetting;                                       
	int                                                DeviceSupportHDR;                                         
	int                                                IsOpenHDR;                                                
	int                                                UserHDRSetting;                                           
	int                                                IsSupportMSAA;                                            
	bool                                               UserMsaaSetting;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                UserMSAAValue;                                            
	float                                              UserMCSSetting;                                           
	int                                                UserShadowSetting;                                        
	int                                                UserShadowSwitch;                                         
	int                                                UserTeamQualityEnhanceSetting;                            
	int                                                PUBGLimitSetting;                                         
	int                                                PUBGDeviceUpdateFlag;                                     
	int                                                PUBGDeviceFPSDef;                                         
	int                                                PUBGDeviceFPSVerySmooth;                                  
	int                                                PUBGDeviceFPSLow;                                         
	int                                                PUBGDeviceFPSMid;                                         
	int                                                PUBGDeviceFPSHigh;                                        
	int                                                PUBGDeviceFPSHDR;                                         
	int                                                PUBGDeviceFPSUltralHigh;                                  
	int                                                PUBGDeviceFPSUltimateHigh;                                
	int                                                PUBGDeviceFPSUltimateHighTA;                              
	bool                                               IsSupportTagCulling;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                PUBGTeamQualityEnhance;                                   
	int                                                UserVulkanSetting;                                        
	int                                                UserEnergySaving;                                         
	int                                                PUBGDeviceFPSVerySmoothExpand;                            
	int                                                PUBGDeviceFPSLowExpand;                                   
	int                                                PUBGDeviceFPSMidExpand;                                   
	int                                                PUBGDeviceFPSHighExpand;                                  
	int                                                PUBGDeviceFPSHDRExpand;                                   
	int                                                PUBGDeviceFPSUltralHighExpand;                            
	int                                                PUBGDeviceFPSUltimateHighExpand;                          
};



struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x5B8];                                     
	TArray<class UAnimInstance*>                       SubAnimInstances;                                         
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FIntegralKey
{
	float                                              Time;                                                     
	int                                                Value;                                                    
};



struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                     
	int                                                DefaultValue;                                             
	bool                                               bUseDefaultValueBeforeFirstKey;                           
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FExposedValueCopyRecord
{
	class UProperty*                                   SourceProperty;                                           
	struct FName                                       SourcePropertyName;                                       
	struct FName                                       SourceSubPropertyName;                                    
	int                                                SourceArrayIndex;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	class UProperty*                                   DestProperty;                                             
	int                                                DestArrayIndex;                                           
	int                                                Size;                                                     
	bool                                               bInstanceIsTarget;                                        
	EPostCopyOperation                                 PostCopyOperation;                                        
	ECopyType                                          CopyType;                                                 
	unsigned char                                      UnknownData01[0x5];                                       
	class UProperty*                                   CachedSourceProperty;                                     
	unsigned char                                      UnknownData02[0x20];                                      
};



struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                            
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                              
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                               
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FInputScaleBias
{
	float                                              Scale;                                                    
	float                                              Bias;                                                     
};



struct FPoseLinkBase
{
	int                                                LinkID;                                                   
	unsigned char                                      UnknownData00[0x14];                                      
};



struct FComponentSpacePoseLink : public FPoseLinkBase
{

};



struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	bool                                               bIgnoreForRelevancyTest;                                  
	unsigned char                                      UnknownData00[0x1];                                       
	int                                                GroupIndex;                                               
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              BlendWeight;                                              
	float                                              InternalTimeAccumulator;                                  
	unsigned char                                      UnknownData02[0x14];                                      
};



struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 
	bool                                               bLoopAnimation;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              PlayRate;                                                 
	float                                              StartPosition;                                            
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FBlendSampleData
{
	int                                                SampleDataIndex;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	class UAnimSequence*                               Animation;                                                
	float                                              TotalWeight;                                              
	float                                              Time;                                                     
	float                                              PreviousTime;                                             
	float                                              SamplePlayRate;                                           
	unsigned char                                      UnknownData01[0x20];                                      
};



struct FPoseLink : public FPoseLinkBase
{

};



struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                              
	float                                              BlendWeight;                                              
};



struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x90];                                      
};



struct FAnimCurveParam
{
	struct FName                                       Name;                                                     
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FStringCurveKey
{
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Value;                                                    
};



struct FStringCurve : public FIndexedCurve
{
	struct FString                                     DefaultValue;                                             
	TArray<struct FStringCurveKey>                     Keys;                                                     
};



struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x80];                                      
};



struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                              
	unsigned char                                      UnknownData00[0x40];                                      
};



struct FAnimationRecordingSettings
{
	bool                                               bRecordInWorldSpace;                                      
	bool                                               bRemoveRootAnimation;                                     
	bool                                               bAutoSaveAsset;                                           
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              SampleRate;                                               
	float                                              Length;                                                   
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              
	unsigned char                                      UnknownData01[0x2];                                       
};



struct FComponentSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               
	TArray<struct FName>                               Names;                                                    
};



struct FLocalSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               
	TArray<struct FName>                               Names;                                                    
};



struct FNamedTransform
{
	struct FTransform                                  Value;                                                    
	struct FName                                       Name;                                                     
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FNamedColor
{
	struct FColor                                      Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       Name;                                                     
};



struct FNamedVector
{
	struct FVector                                     Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       Name;                                                     
};



struct FNamedFloat
{
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       Name;                                                     
};



struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                 
	struct FGuid                                       ParentNodeGuid;                                           
};



struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      
};



struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                             
	float                                              StartPosition;                                            
	float                                              EndPosition;                                              
};



struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                         
};



struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                         
	struct FVectorCurve                                RotationCurve;                                            
	struct FVectorCurve                                ScaleCurve;                                               
};



struct FSlotEvaluationPose
{
	TEnumAsByte<EAdditiveAnimationType>                AdditiveType;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Weight;                                                   
	unsigned char                                      UnknownData01[0x38];                                      
};



struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    
};



struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<unsigned char>                              ComponentSpaceFlags;                                      
};



struct FQueuedDrawDebugItem
{
	TEnumAsByte<EDrawDebugItemType>                    itemType;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     StartLoc;                                                 
	struct FVector                                     EndLoc;                                                   
	struct FVector                                     Center;                                                   
	struct FRotator                                    Rotation;                                                 
	float                                              Radius;                                                   
	float                                              Size;                                                     
	int                                                Segments;                                                 
	struct FColor                                      Color;                                                    
	bool                                               bPersistentLines;                                         
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              LifeTime;                                                 
	float                                              Thickness;                                                
	struct FString                                     Message;                                                  
	struct FVector2D                                   TextScale;                                                
};



struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                  
	unsigned char                                      UnknownData00[0x20];                                      
	bool                                               bPlayIng;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              DefaultBlendTimeMultiplier;                               
	unsigned char                                      UnknownData02[0xB8];                                      
	TArray<int>                                        NextSections;                                             
	TArray<int>                                        PrevSections;                                             
	unsigned char                                      UnknownData03[0x10];                                      
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                               
	float                                              Position;                                                 
	float                                              PlayRate;                                                 
	struct FAlphaBlend                                 Blend;                                                    
	unsigned char                                      UnknownData04[0x20];                                      
	int                                                DisableRootMotionCount;                                   
	unsigned char                                      UnknownData05[0x24];                                      
};



struct FAnimNode_AnimInstanceContainer : public FAnimNode_Base
{
	class UAnimInstanceContainer*                      Container;                                                
	TArray<struct FPoseLink>                           InputPoses;                                               
	unsigned char                                      UnknownData00[0x30];                                      
	class UAnimInstance*                               ParentAnimInstance;                                       
	class UAnimInstance*                               CurrentAnimInstance;                                      
	bool                                               bResetChildOnActivation;                                  
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     
	struct FPoseLink                                   Additive;                                                 
	float                                              Alpha;                                                    
	struct FInputScaleBias                             AlphaScaleBias;                                           
	int                                                LODThreshold;                                             
	float                                              ActualAlpha;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimNode_Inertialization : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   
	unsigned char                                      UnknownData00[0x58];                                      
};



struct FInertializationPoseDiff
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FInertializationCurveDiff
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FInertializationBoneDiff
{
	unsigned char                                      UnknownData00[0x3C];                                      
};



struct FInertializationPose
{
	unsigned char                                      UnknownData00[0x90];                                      
};



struct FAnimNode_InputPose : public FAnimNode_Base
{
	struct FName                                       InputPoseName;                                            
	unsigned char                                      UnknownData00[0x38];                                      
};



struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   Pose;                                                     
	struct FName                                       CachePoseName;                                            
	float                                              GlobalWeight;                                             
	unsigned char                                      UnknownData00[0x64];                                      
};



struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                 
	int                                                MaxTransitionsPerFrame;                                   
	bool                                               bSkipFirstUpdateTransition;                               
	bool                                               bReinitializeOnBecomingRelevant;                          
	unsigned char                                      UnknownData00[0xA];                                       
	int                                                CurrentState;                                             
	float                                              ElapsedTime;                                              
	unsigned char                                      UnknownData01[0x88];                                      
};



struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                                      
};



struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0x90];                                      
	class UBlendProfile*                               BlendProfile;                                             
	unsigned char                                      UnknownData01[0x38];                                      
};



struct FAnimNode_SubInput : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x38];                                      
};



struct FAnimNode_SubInstance : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                                   
	struct FName                                       SubInstanceSlotName;                                      
	class UClass*                                      InstanceClass;                                            
	class UAnimInstance*                               InstanceToRun;                                            
	TArray<class UProperty*>                           InstanceProperties;                                       
	TArray<class UProperty*>                           SubInstanceProperties;                                    
	TArray<struct FName>                               SourcePropertyNames;                                      
	TArray<struct FName>                               DestPropertyNames;                                        
	unsigned char                                      UnknownData00[0x30];                                      
	bool                                               bHasCacheOriginInstance;                                  
	unsigned char                                      UnknownData01[0x7];                                       
	class UClass*                                      CacheOriginInstanceClass;                                 
	class UAnimInstance*                               CacheOriginInstanceToRun;                                 
	unsigned char                                      UnknownData02[0x8];                                       
};



struct FAnimNode_SubInstanceContainer : public FAnimNode_Base
{
	class UClass*                                      DefaultLinkedInstance;                                    
	struct FName                                       ContainerTag;                                             
	struct FPoseLink                                   SourcePose;                                               
	TArray<struct FName>                               InputPoseNames;                                           
	TArray<struct FPoseLink>                           InputPoses;                                               
	bool                                               bResetChildOnActivation;                                  
	bool                                               bRequestBlendOnInstanceChanged;                           
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              BlendTime;                                                
	class UAnimInstanceContainer*                      Container;                                                
	class UAnimInstance*                               ParentAnimInstance;                                       
	class UAnimInstance*                               InstanceToRun;                                            
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                       
	TArray<class UProperty*>                           InstanceProperties;                                       
	TArray<class UProperty*>                           SubInstanceProperties;                                    
	TArray<struct FName>                               PropagatedPropertyNames;                                  
	unsigned char                                      UnknownData01[0x38];                                      
};



struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<EEvaluatorDataSource>                  DataSource;                                               
	TEnumAsByte<EEvaluatorMode>                        EvaluatorMode;                                            
	int                                                FramesToCachePose;                                        
	unsigned char                                      UnknownData00[0x38];                                      
	int                                                CacheFramesRemaining;                                     
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                      
	unsigned char                                      UnknownData00[0x15];                                      
};



struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                        
	struct FName                                       CachePoseName;                                            
};



struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                
};



struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            
};



struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               
	TArray<float>                                      Times;                                                    
	float                                              Mins[0x3];                                                
	float                                              Ranges[0x3];                                              
};



struct FCurveTrack
{
	struct FName                                       CurveName;                                                
	TArray<float>                                      CurveWeights;                                             
};



struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                
	TArray<float>                                      Times;                                                    
};



struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  
	TArray<float>                                      Times;                                                    
};



struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  
	TArray<float>                                      Times;                                                    
};



struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  
	TArray<struct FQuat>                               RotKeys;                                                  
	TArray<struct FVector>                             ScaleKeys;                                                
};



struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                          
	TArray<struct FName>                               TrackNames;                                               
};



struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x190];                                     
};



struct FAnimNode_SingleNode : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                            
	bool                                               TransitionReturnVal;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                TransitionIndex;                                          
};



struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                              
	int                                                StateRootNodeIndex;                                       
	int                                                StartNotify;                                              
	int                                                EndNotify;                                                
	int                                                FullyBlendedNotify;                                       
};



struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                
	struct FLinearColor                                TrackColor;                                               
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                         
};



struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      
};



struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                              
	float                                              BlendWeight;                                              
};



struct FEditedDocumentInfo
{
	class UObject*                                     EditedObject;                                             
	struct FVector2D                                   SavedViewOffset;                                          
	float                                              SavedZoomAmount;                                          
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                
	TArray<class UEdGraph*>                            Graphs;                                                   
};



struct FBPVariableDescription
{
	struct FName                                       VarName;                                                  
	struct FGuid                                       VarGuid;                                                  
	struct FEdGraphPinType                             VarType;                                                  
	struct FString                                     FriendlyName;                                             
	struct FText                                       Category;                                                 
	uint64_t                                           PropertyFlags;                                            
	struct FName                                       RepNotifyFunc;                                            
	TEnumAsByte<ELifetimeCondition>                    ReplicationCondition;                                     
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            
	struct FString                                     DefaultValue;                                             
};



struct FBlueprintMacroCosmeticInfo
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FCompilerNativizationOptions
{
	struct FName                                       PlatformName;                                             
	bool                                               ServerOnlyPlatform;                                       
	bool                                               ClientOnlyPlatform;                                       
	unsigned char                                      UnknownData00[0x6];                                       
	TArray<struct FName>                               ExcludedModules;                                          
	unsigned char                                      UnknownData01[0x50];                                      
	TArray<struct FString>                             ExcludedFolderPaths;                                      
};



struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                          
	int                                                EventGraphCallOffset;                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x1E0];                                     
};



struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      
};



struct FCachedAnimTransitionData
{
	struct FName                                       StateMachineName;                                         
	struct FName                                       FromStateName;                                            
	struct FName                                       ToStateName;                                              
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FCachedAnimRelevancyData
{
	struct FName                                       StateMachineName;                                         
	struct FName                                       StateName;                                                
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FCachedAnimAssetPlayerData
{
	struct FName                                       StateMachineName;                                         
	struct FName                                       StateName;                                                
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCachedAnimStateData
{
	struct FName                                       StateMachineName;                                         
	struct FName                                       StateName;                                                
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FCachedAnimStateArray
{
	TArray<struct FCachedAnimStateData>                States;                                                   
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  
	float                                              U;                                                        
	float                                              V;                                                        
	float                                              UL;                                                       
	float                                              VL;                                                       
};



struct FWrappedStringElement
{
	struct FString                                     Value;                                                    
	struct FVector2D                                   LineExtent;                                               
};



struct FTextSizingParameters
{
	float                                              DrawX;                                                    
	float                                              DrawY;                                                    
	float                                              DrawXL;                                                   
	float                                              DrawYL;                                                   
	struct FVector2D                                   Scaling;                                                  
	class UFont*                                       DrawFont;                                                 
	struct FVector2D                                   SpacingAdjust;                                            
};



struct FExternalPositionChange
{
	bool                                               bHasExternalChange;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     DeltaLocation;                                            
};



struct FAutoCompleteNode
{
	int                                                IndexChar;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        AutoCompleteListIndices;                                  
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                         
	class UCurveLinearColor*                           ExternalCurve;                                            
};



struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                
	struct FName                                       ColumnName;                                               
	struct FName                                       RowContents;                                              
};



struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                
	struct FName                                       RowName;                                                  
};



struct FDelayObserveCheckPoint
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FLevelNameAndTime
{
	struct FString                                     LevelName;                                                
	uint32_t                                           LevelChangeTimeInMS;                                      
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTextureGroupBiasOption
{
	int                                                GroupID;                                                  
	bool                                               SkipResetLodBais;                                         
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                               
	class UBlueprint*                                  GraphBlueprint;                                           
	struct FGuid                                       GraphGuid;                                                
};



struct FEdGraphPinReference
{
	TWeakObjectPtr<class UEdGraphNode>                 OwningNode;                                               
	struct FGuid                                       PinId;                                                    
};



struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FText                                       MenuDescription;                                          
	struct FText                                       TooltipDescription;                                       
	struct FText                                       Category;                                                 
	struct FText                                       Keywords;                                                 
	int                                                Grouping;                                                 
	int                                                SectionID;                                                
	TArray<struct FString>                             MenuDescriptionArray;                                     
	TArray<struct FString>                             FullSearchTitlesArray;                                    
	TArray<struct FString>                             FullSearchKeywordsArray;                                  
	TArray<struct FString>                             FullSearchCategoryArray;                                  
	TArray<struct FString>                             LocalizedMenuDescriptionArray;                            
	TArray<struct FString>                             LocalizedFullSearchTitlesArray;                           
	TArray<struct FString>                             LocalizedFullSearchKeywordsArray;                         
	TArray<struct FString>                             LocalizedFullSearchCategoryArray;                         
	struct FString                                     SearchText;                                               
};



struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                             
};



struct FScreenMessageString
{
	uint64_t                                           Key;                                                      
	struct FString                                     ScreenMessage;                                            
	struct FColor                                      DisplayColor;                                             
	float                                              TimeToDisplay;                                            
	float                                              CurrentTimeDisplayed;                                     
	struct FVector2D                                   TextScale;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FURL
{
	struct FString                                     Protocol;                                                 
	struct FString                                     Host;                                                     
	int                                                Port;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Map;                                                      
	struct FString                                     RedirectURL;                                              
	TArray<struct FString>                             Op;                                                       
	struct FString                                     Portal;                                                   
	int                                                Valid;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     Tag;                                                      
	TArray<struct FName>                               PackagesToLoad;                                           
	TArray<class UObject*>                             LoadedObjects;                                            
};



struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              
	unsigned char                                      bShouldBeLoaded : 1;                                      
	unsigned char                                      bShouldBeVisible : 1;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           LODIndex;                                                 
};



struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FWorldContext
{
	unsigned char                                      UnknownData00[0xE8];                                      
	struct FURL                                        LastURL;                                                  
	struct FURL                                        LastRemoteURL;                                            
	class UPendingNetGame*                             PendingNetGame;                                           
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                      
	unsigned char                                      UnknownData01[0x10];                                      
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                          
	unsigned char                                      UnknownData02[0x18];                                      
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                        
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                       
	class UGameViewportClient*                         GameViewport;                                             
	class UGameInstance*                               OwningGameInstance;                                       
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                         
	unsigned char                                      UnknownData03[0x50];                                      
};



struct FExposureSettings
{
	int                                                LogOffset;                                                
	bool                                               bFixed;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FRepAttributeModifyItem
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FLinearColor                                GlowColor;                                                
	struct FVector2D                                   GlowOuterRadius;                                          
	struct FVector2D                                   GlowInnerRadius;                                          
};



struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                            
	unsigned char                                      bEnableShadow : 1;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 
};



struct FComponentReference
{
	class AActor*                                      OtherActor;                                               
	struct FName                                       ComponentProperty;                                        
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FMeshBuildSettings
{
	bool                                               bUseMikkTSpace;                                           
	bool                                               bRecomputeNormals;                                        
	bool                                               bRecomputeTangents;                                       
	bool                                               bRemoveDegenerates;                                       
	bool                                               bBuildAdjacencyBuffer;                                    
	bool                                               bBuildReversedIndexBuffer;                                
	bool                                               bIgnoreTriangleOrderOptimization;                         
	bool                                               bUseHighPrecisionTangentBasis;                            
	bool                                               bUseFullPrecisionUVs;                                     
	bool                                               bGenerateLightmapUVs;                                     
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                MinLightmapResolution;                                    
	int                                                SrcLightmapIndex;                                         
	int                                                DstLightmapIndex;                                         
	float                                              BuildScale;                                               
	struct FVector                                     BuildScale3D;                                             
	float                                              DistanceFieldResolutionScale;                             
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                       
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              DistanceFieldBias;                                        
	unsigned char                                      UnknownData02[0x4];                                       
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                             
};



struct FPOV
{
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	float                                              FOV;                                                      
};



struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x4];                                       
	int                                                UpdateRate;                                               
	int                                                EvaluationRate;                                           
	unsigned char                                      bInterpolateSkippedFrames : 1;                            
	unsigned char                                      bShouldUseLodMap : 1;                                     
	unsigned char                                      bShouldUseMinLod : 1;                                     
	unsigned char                                      bSkipUpdate : 1;                                          
	unsigned char                                      bSkipEvaluation : 1;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              TickedPoseOffestTime;                                     
	float                                              AdditionalTime;                                           
	unsigned char                                      UnknownData02[0x4];                                       
	int                                                BaseNonRenderedUpdateRate;                                
	int                                                BaseNonRenderedShouldUpdateRate;                          
	int                                                MinDistFromMainChar;                                      
	int                                                MaxDistFromMainChar;                                      
	unsigned char                                      bUseSkipMapForDistanceFactor : 1;                         
	unsigned char                                      UnknownData03[0x3];                                       
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       
	TMap<int, int>                                     LODToFrameSkipMap;                                        
	int                                                MaxEvalRateForInterpolation;                              
	EUpdateRateShiftBucket                             ShiftBucket;                                              
	unsigned char                                      UnknownData04[0x3];                                       
};



struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 
	int                                                NumChannels;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 
	TArray<float>                                      ChannelWeights;                                           
};



struct FMTDResult
{
	struct FVector                                     Direction;                                                
	float                                              Distance;                                                 
};



struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	unsigned char                                      bBlockingHit : 1;                                         
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                 
	unsigned char                                      bForceContentExport : 1;                                  
	unsigned char                                      bInitialized : 1;                                         
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                           
	unsigned char                                      bStatsEnabled : 1;                                        
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CoplanarTolerance;                                        
	unsigned char                                      bUseImmediateImport : 1;                                  
	unsigned char                                      bImmediateProcessMappings : 1;                            
	unsigned char                                      bSortMappings : 1;                                        
	unsigned char                                      bDumpBinaryFiles : 1;                                     
	unsigned char                                      bDebugMaterials : 1;                                      
	unsigned char                                      bPadMappings : 1;                                         
	unsigned char                                      bDebugPaddings : 1;                                       
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          
	unsigned char                                      bUseRandomColors : 1;                                     
	unsigned char                                      bColorBordersGreen : 1;                                   
	unsigned char                                      bColorByExecutionTime : 1;                                
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              ExecutionTimeDivisor;                                     
};



struct FBasedPosition
{
	class AActor*                                      Base;                                                     
	struct FVector                                     Position;                                                 
	struct FVector                                     CachedBaseLocation;                                       
	struct FRotator                                    CachedBaseRotation;                                       
	struct FVector                                     CachedTransPosition;                                      
};



struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                           
	class USoundBase*                                  Sound;                                                    
};



struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          
	struct FVector                                     ContactNormal;                                            
	float                                              ContactPenetration;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        
};



struct FCollisionImpactData
{
	EPhysicsContactState                               ContactState;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             
	struct FVector                                     TotalNormalImpulse;                                       
	struct FVector                                     TotalFrictionImpulse;                                     
};



struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FQuat                                       Quaternion;                                               
	struct FVector_NetQuantize100                      LinVel;                                                   
	struct FVector_NetQuantize100                      AngVel;                                                   
	unsigned char                                      Flags;                                                    
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FFaceControllerList
{
	TArray<struct FFaceController>                     Controllers;                                              
};



struct FFaceBoneList
{
	TArray<struct FSymmetryBone>                       SymmetryBoneList;                                         
	TArray<struct FUnsymmetryBone>                     UnsymmetryBoneList;                                       
};



struct FSymBoneCustomData
{
	struct FName                                       LBoneName;                                                
	struct FName                                       RBoneName;                                                
	struct FVector                                     LPositionValue;                                           
	struct FVector                                     RPositionValue;                                           
	struct FVector                                     LRotationValue;                                           
	struct FVector                                     RRotationValue;                                           
	struct FVector                                     LScaleValue;                                              
	struct FVector                                     RScaleValue;                                              
};



struct FUnsymBoneCustomData
{
	struct FName                                       BoneName;                                                 
	struct FVector                                     PositionValue;                                            
	struct FVector                                     RotationValue;                                            
	struct FVector                                     ScaleValue;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FFaceBoneCustomData
{
	TArray<struct FSymBoneCustomData>                  SymBoneCustomDataList;                                    
	TArray<struct FUnsymBoneCustomData>                UnsymBoneCustomDataList;                                  
};



struct FPredictBulletPathPointData
{
	struct FVector                                     Location;                                                 
	struct FVector                                     Velocity;                                                 
	float                                              Time;                                                     
};



struct FPredictBulletPathResult
{
	TArray<struct FPredictBulletPathPointData>         PathData;                                                 
	struct FPredictBulletPathPointData                 LastTraceDestination;                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FHitResult                                  HitResult;                                                
};



struct FPredictBulletPathParams
{
	struct FVector                                     StartLocation;                                            
	struct FVector                                     LaunchVelocity;                                           
	bool                                               bTraceWithCollision;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BulletRadius;                                             
	float                                              MaxSimTime;                                               
	bool                                               bTraceWithChannel;                                        
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              
	TArray<class AActor*>                              ActorsToIgnore;                                           
	float                                              SimFrequency;                                             
	float                                              GravityScale;                                             
	float                                              IgnoreGravityDis;                                         
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              DrawDebugTime;                                            
	bool                                               bTraceComplex;                                            
	unsigned char                                      UnknownData03[0x3];                                       
};



struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FClusterNode
{
	struct FVector                                     BoundMin;                                                 
	int                                                FirstChild;                                               
	struct FVector                                     BoundMax;                                                 
	int                                                LastChild;                                                
	int                                                FirstInstance;                                            
	int                                                LastInstance;                                             
};



struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    
	class UInterpTrack*                                Track;                                                    
	int                                                KeyIndex;                                                 
	float                                              UnsnappedPosition;                                        
};



struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                
	class UAnimSequence*                               AnimSeq;                                                  
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	class APawn*                                       PawnInst;                                                 
};



struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                
	TArray<int>                                        TrackIndices;                                             
	unsigned char                                      bIsCollapsed : 1;                                         
	unsigned char                                      bIsSelected : 1;                                          
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           
	struct FString                                     SubTrackName;                                             
	int                                                GroupIndex;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0xF0];                                      
};



struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              DetailsPercentage;                                        
	bool                                               bIncludeInstanceMesh;                                     
	bool                                               bUseScreenSize;                                           
	unsigned char                                      UnknownData01[0x2];                                       
	uint32_t                                           ScreenSize;                                               
	struct FMaterialProxySettings                      StaticMeshMaterialSettings;                               
	EMeshLODSelectionType                              LODSelectionType;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                SpecificLOD;                                              
	struct FColor                                      UnresolvedGeometryColor;                                  
	bool                                               bOverrideLandscapeExportLOD;                              
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                LandscapeExportLOD;                                       
	struct FMaterialProxySettings                      LandscapeMaterialSettings;                                
	bool                                               bBakeFoliageToLandscape;                                  
	bool                                               bBakeGrassToLandscape;                                    
	bool                                               bGenerateMeshNormalMap;                                   
	bool                                               bGenerateMeshMetallicMap;                                 
	bool                                               bGenerateMeshRoughnessMap;                                
	bool                                               bGenerateMeshSpecularMap;                                 
	bool                                               bGenerateLandscapeNormalMap;                              
	bool                                               bGenerateLandscapeMetallicMap;                            
	bool                                               bGenerateLandscapeRoughnessMap;                           
	bool                                               bGenerateLandscapeSpecularMap;                            
	bool                                               bUseLandscapeCulling;                                     
	TEnumAsByte<ELandscapeCullingPrecision>            LandscapeCullingPrecision;                                
};



struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                                  
	bool                                               bAttached;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              OriginalRadius;                                           
};



struct FBatchedPoint
{
	struct FVector                                     Position;                                                 
	struct FLinearColor                                Color;                                                    
	float                                              PointSize;                                                
	float                                              RemainingLifeTime;                                        
	unsigned char                                      DepthPriority;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FBatchedLine
{
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	struct FLinearColor                                Color;                                                    
	float                                              Thickness;                                                
	float                                              RemainingLifeTime;                                        
	unsigned char                                      DepthPriority;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                  
	struct FName                                       MessageType;                                              
	int                                                MessageIndex;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     MessageString;                                            
	class APlayerState*                                RelatedPlayerState_2;                                     
	class APlayerState*                                RelatedPlayerState_3;                                     
	class UObject*                                     OptionalObject;                                           
};



struct FParameterGroupData
{
	struct FString                                     GroupName;                                                
	int                                                GroupSortPriority;                                        
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMemberReference
{
	class UObject*                                     MemberParent;                                             
	struct FString                                     MemberScope;                                              
	struct FName                                       MemberName;                                               
	struct FGuid                                       MemberGuid;                                               
	bool                                               bSelfContext;                                             
	bool                                               bWasDeprecated;                                           
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FMeshInstancingSettings
{
	class UClass*                                      ActorClassToUse;                                          
	int                                                InstanceReplacementThreshold;                             
	EMeshInstancingReplacementMethod                   MeshReplacementMethod;                                    
	unsigned char                                      UnknownData00[0x3];                                       
	bool                                               bSkipMeshesWithVertexColors;                              
	bool                                               bUseHLODVolumes;                                          
	unsigned char                                      UnknownData01[0x6];                                       
};



struct FMeshReductionSettings
{
	int                                                BaseLODModel;                                             
	EOptimizationMetric                                MetricToUse;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              PercentTriangles;                                         
	float                                              ScreenSize;                                               
	float                                              MaxDeviation;                                             
	float                                              PixelError;                                               
	float                                              WeldingThreshold;                                         
	TEnumAsByte<EMeshFeatureImportance>                SilhouetteImportance;                                     
	TEnumAsByte<EMeshFeatureImportance>                TextureImportance;                                        
	TEnumAsByte<EMeshFeatureImportance>                ShadingImportance;                                        
	TEnumAsByte<EMeshFeatureImportance>                VertexColorImportance;                                    
	bool                                               bRecalculateNormals;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              HardAngleThreshold;                                       
	bool                                               bActive;                                                  
	bool                                               bGenerateUniqueLightmapUVs;                               
	bool                                               bKeepSymmetry;                                            
	bool                                               bVisibilityAided;                                         
	bool                                               bCullOccluded;                                            
	TEnumAsByte<EMeshFeatureImportance>                VisibilityAggressiveness;                                 
	bool                                               bUseVertexWeights;                                        
	bool                                               bSimplifyMaterials;                                       
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      
	struct FMaterialProxySettings                      MaterialProxySettings;                                    
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FNameCurveKey
{
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       Value;                                                    
};



struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                     
};



struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FPacketSimulationSettings
{
	int                                                PktLoss;                                                  
	int                                                PktOrder;                                                 
	int                                                PktDup;                                                   
	int                                                PktLag;                                                   
	int                                                PktLagVariance;                                           
};



struct FRPCFunctionCallInfoCacheEntry
{
	unsigned char                                      UnknownData00[0x14];                                      
};



struct FRPCSerializationCacheEntry
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FVector4_NetQuantize10 : public FVector4
{

};



struct FVector4_NetQuantize : public FVector4
{

};



struct FCDLODMeshNodeData
{
	class UMaterialInterface*                          Material;                                                 
	class UMaterialInstanceConstant*                   MaterialInstance;                                         
	class UMaterialInstance*                           MobileMaterialInterface;                                  
};



struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                
	class UObject*                                     CurveObject;                                              
};



struct FBeamTargetData
{
	struct FName                                       TargetName;                                               
	float                                              TargetPercentage;                                         
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x30];                                      
	bool                                               bHasVoiceHandshakeCompleted;                              
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                VoiceChannelIdx;                                          
};



struct FPreviewAttachedObjectPair
{
	unsigned char                                      UnknownData00[0x28];                                      
	class UObject*                                     Object;                                                   
	struct FName                                       AttachedTo;                                               
};



struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                          
};



struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                 
	struct FText                                       DisplayName;                                              
	struct FText                                       Description;                                              
};



struct FRootMotionSourceStatus
{
	unsigned char                                      Flags;                                                    
};



struct FRootMotionFinishVelocitySettings
{
	ERootMotionFinishVelocityMode                      Mode;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     SetVelocity;                                              
	float                                              ClampVelocity;                                            
};



struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x8];                                       
	uint16_t                                           Priority;                                                 
	uint16_t                                           LocalID;                                                  
	ERootMotionAccumulateMode                          AccumulateMode;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	struct FName                                       InstanceName;                                             
	float                                              StartTime;                                                
	float                                              CurrentTime;                                              
	float                                              PreviousTime;                                             
	float                                              Duration;                                                 
	struct FRootMotionSourceStatus                     status;                                                   
	struct FRootMotionSourceSettings                   Settings;                                                 
	bool                                               bInLocalSpace;                                            
	unsigned char                                      UnknownData02[0x5];                                       
	struct FRootMotionMovementParams                   RootMotionParams;                                         
	struct FRootMotionFinishVelocitySettings           FinishVelocityParams;                                     
	unsigned char                                      UnknownData03[0xC];                                       
};



struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                                 
	float                                              Distance;                                                 
	float                                              Height;                                                   
	bool                                               bDisableTimeout;                                          
	unsigned char                                      UnknownData00[0x7];                                       
	class UCurveVector*                                PathOffsetCurve;                                          
	class UCurveFloat*                                 TimeMappingCurve;                                         
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            
	struct FVector                                     InitialTargetLocation;                                    
	struct FVector                                     TargetLocation;                                           
	bool                                               bRestrictSpeedToExpected;                                 
	unsigned char                                      UnknownData00[0x7];                                       
	class UCurveVector*                                PathOffsetCurve;                                          
	class UCurveFloat*                                 TimeMappingCurve;                                         
};



struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            
	struct FVector                                     TargetLocation;                                           
	bool                                               bRestrictSpeedToExpected;                                 
	unsigned char                                      UnknownData00[0x3];                                       
	class UCurveVector*                                PathOffsetCurve;                                          
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                                 
	class AActor*                                      LocationActor;                                            
	float                                              Radius;                                                   
	float                                              Strength;                                                 
	bool                                               bIsPush;                                                  
	bool                                               bNoZForce;                                                
	unsigned char                                      UnknownData00[0x6];                                       
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  
	class UCurveFloat*                                 StrengthOverTime;                                         
	bool                                               bUseFixedWorldDirection;                                  
	unsigned char                                      UnknownData01[0x3];                                       
	struct FRotator                                    FixedWorldDirection;                                      
	unsigned char                                      UnknownData02[0x8];                                       
};



struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	struct FVector                                     Force;                                                    
	class UCurveFloat*                                 StrengthOverTime;                                         
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCameraExposureSettings
{
	TEnumAsByte<EAutoExposureMethod>                   method;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              LowPercent;                                               
	float                                              HighPercent;                                              
	float                                              MinBrightness;                                            
	float                                              MaxBrightness;                                            
	float                                              SpeedUp;                                                  
	float                                              SpeedDown;                                                
	float                                              Bias;                                                     
	float                                              HistogramLogMin;                                          
	float                                              HistogramLogMax;                                          
};



struct FGaussianSumBloomSettings
{
	float                                              Intensity;                                                
	float                                              Threshold;                                                
	float                                              SizeScale;                                                
	float                                              Filter1Size;                                              
	float                                              Filter2Size;                                              
	float                                              Filter3Size;                                              
	float                                              Filter4Size;                                              
	float                                              Filter5Size;                                              
	float                                              Filter6Size;                                              
	struct FLinearColor                                Filter1Tint;                                              
	struct FLinearColor                                Filter2Tint;                                              
	struct FLinearColor                                Filter3Tint;                                              
	struct FLinearColor                                Filter4Tint;                                              
	struct FLinearColor                                Filter5Tint;                                              
	struct FLinearColor                                Filter6Tint;                                              
};



struct FConvolutionBloomSettings
{
	class UTexture2D*                                  Texture;                                                  
	float                                              Size;                                                     
	struct FVector2D                                   CenterUV;                                                 
	float                                              PreFilterMin;                                             
	float                                              PreFilterMax;                                             
	float                                              PreFilterMult;                                            
	float                                              BufferScale;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FLensBloomSettings
{
	struct FGaussianSumBloomSettings                   GaussianSum;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FConvolutionBloomSettings                   Convolution;                                              
	TEnumAsByte<EBloomMethod>                          method;                                                   
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FLensImperfectionSettings
{
	class UTexture*                                    DirtMask;                                                 
	float                                              DirtMaskIntensity;                                        
	struct FLinearColor                                DirtMaskTint;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FLensSettings
{
	struct FLensBloomSettings                          Bloom;                                                    
	struct FLensImperfectionSettings                   Imperfections;                                            
	float                                              ChromaticAberration;                                      
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FFilmStockSettings
{
	float                                              Slope;                                                    
	float                                              Toe;                                                      
	float                                              Shoulder;                                                 
	float                                              BlackClip;                                                
	float                                              WhiteClip;                                                
};



struct FColorGradePerRangeSettings
{
	struct FVector4                                    Saturation;                                               
	struct FVector4                                    Contrast;                                                 
	struct FVector4                                    Gamma;                                                    
	struct FVector4                                    Gain;                                                     
	struct FVector4                                    Offset;                                                   
};



struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings                 Global;                                                   
	struct FColorGradePerRangeSettings                 Shadows;                                                  
	struct FColorGradePerRangeSettings                 Midtones;                                                 
	struct FColorGradePerRangeSettings                 Highlights;                                               
	float                                              ShadowsMax;                                               
	float                                              HighlightsMin;                                            
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSkeletalMeshClothBuildParams
{
	TWeakObjectPtr<class UClothingAssetBase>           TargetAsset;                                              
	int                                                TargetLod;                                                
	bool                                               bRemapParameters;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	struct FString                                     AssetName;                                                
	int                                                LODIndex;                                                 
	int                                                SourceSection;                                            
	bool                                               bRemoveFromMesh;                                          
	unsigned char                                      UnknownData01[0x7];                                       
	unsigned char                                      UnknownData02[0x28];                                      
};



struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                 
	struct FName                                       SourceBoneName;                                           
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBoneFilter
{
	bool                                               bExcludeSelf;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       BoneName;                                                 
};



struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FNameMapping
{
	struct FName                                       NodeName;                                                 
	struct FName                                       BoneName;                                                 
};



struct FRigConfiguration
{
	class URig*                                        Rig;                                                      
	TArray<struct FNameMapping>                        BoneMappingTable;                                         
};



struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            
};



struct FReferencePose
{
	struct FName                                       PoseName;                                                 
	TArray<struct FTransform>                          ReferencePose;                                            
};



struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                      
	TArray<int>                                        MeshToSkeletonTable;                                      
};



struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0x60];                                      
};



struct FCurveMetaData
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FAnimCurveType
{
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FMaterialRemapIndex
{
	uint32_t                                           ImportVersionKey;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        MaterialRemap;                                            
};



struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     CamOrbitPoint;                                            
	struct FVector                                     CamOrbitZoom;                                             
	struct FRotator                                    CamOrbitRotation;                                         
};



struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                            
	bool                                               bEnableCollision;                                         
	bool                                               bCastShadow;                                              
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FMeshSectionInfoMap
{
	TMap<uint32_t, struct FMeshSectionInfo>            Map;                                                      
};



struct FGroupedStaticMeshOptimizationSettings
{
	EStaticMeshLODType                                 LevelOfDetailType;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	struct FMeshReductionSettings                      ReductionSettings;                                        
	struct FMeshProxySettings                          ProxySettings;                                            
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                            
	struct FMeshReductionSettings                      ReductionSettings;                                        
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                        
	bool                                               bHasBeenSimplified;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	struct FGroupedStaticMeshOptimizationSettings      OptimizationSettings;                                     
	float                                              LODDistance;                                              
	float                                              ScreenSize;                                               
	TArray<int>                                        FaceIndex2FragmentIndex;                                  
	struct FString                                     SourceImportFilename;                                     
};



struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<EOptimizationType>                     ReductionMethod;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              NumOfTrianglesPercentage;                                 
	float                                              MaxDeviationPercentage;                                   
	float                                              WeldingThreshold;                                         
	bool                                               bRecalcNormals;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              NormalsThreshold;                                         
	unsigned char                                      SilhouetteImportance;                                     
	unsigned char                                      TextureImportance;                                        
	unsigned char                                      ShadingImportance;                                        
	unsigned char                                      UnknownData02[0x1];                                       
};



struct FStreamingStaticMeshPrimitiveInfo
{
	class UStaticMesh*                                 StaticMesh;                                               
	struct FBoxSphereBounds                            Bounds;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FTextureSource
{
	unsigned char                                      UnknownData00[0x80];                                      
};



struct FMeshMaterialSlot
{
	unsigned char                                      UnknownData00[0x58];                                      
	class UMaterialInstanceDynamic*                    TextureArrayMatInstance;                                  
	class UMaterialInterface*                          baseMat;                                                  
};



struct FStreamingTexturePrimitiveInfo
{
	class UTexture2D*                                  Texture;                                                  
	struct FBoxSphereBounds                            Bounds;                                                   
	float                                              TexelFactor;                                              
	uint32_t                                           PackedRelativeBox;                                        
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FTimeStretchCurveInstance
{
	bool                                               bHasValidData;                                            
	unsigned char                                      UnknownData00[0x2F];                                      
};



struct FStartAsyncSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                              
	struct FRotator                                    CamRotation;                                              
	float                                              CamOrthoZoom;                                             
	bool                                               CamUpdated;                                               
	unsigned char                                      UnknownData00[0x3];                                       
};

}

