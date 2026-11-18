#pragma once


 
namespace SDK
{





enum class EUTSkillStopReason : uint8_t
{
	UTSkillStopReason__SkillStopReason_None = 0,
	UTSkillStopReason__SkillStopReason_Finished = 1,
	UTSkillStopReason__SkillStopReason_Failed = 2,
	UTSkillStopReason__SkillStopReason_Interrupted = 3,
	UTSkillStopReason__SkillStopReason_PlayerDieInterrupted = 4,
	UTSkillStopReason__SkillStopReason_PlayerDisconnect = 5,
	UTSkillStopReason__SkillStopReason_PlayerCancel = 6,
	UTSkillStopReason__SkillStopReason_MAX = 7
};



enum class EUTSkillEventType : uint8_t
{
	SET_KEY_DOWN                   = 0,
	SET_KEY_UP                     = 1,
	SET_COLLIDE_TARGET             = 2,
	SET_MISS_TARGET                = 3,
	SET_HIT_TARGET                 = 4,
	SET_KILL_TARGET                = 5,
	SET_COLLIDE_ACTOR              = 6,
	SET_FINDPATH_FINISH            = 7,
	SET_SKILL_ACTIVE               = 8,
	SET_SKILL_CAST                 = 9,
	SET_SKILL_INIT                 = 10,
	SET_PHASE_START                = 11,
	SET_PHASE_FINISH               = 12,
	SET_PHASE_FINISH_EARLY         = 13,
	SET_PHASE_INTERRUPT            = 14,
	SET_SKILL_FINISH               = 15,
	SET_SKILL_CANCEL               = 16,
	SET_SKILL_CLOSE                = 17,
	SET_NO_TARGET                  = 18,
	SET_SKILL_BREAK                = 19,
	SET_NO_LOCATION                = 20,
	SET_ATTEMPT_ACTIVE             = 21,
	SET_SKILL_ACTIVE_AND_BUTTONSLOT = 22,
	SET_SKILL_CLOSE_AND_BUTTONSLOT = 23,
	SET_PHASE_JUMP                 = 24,
	SET_MAX                        = 25
};



enum class ESkillBaseWidgetType : uint8_t
{
	ESkillBaseWidgetType__None     = 0,
	ESkillBaseWidgetType__SkillEffect = 1,
	ESkillBaseWidgetType__SkillCondition = 2,
	ESkillBaseWidgetType__SkillPicker = 3,
	ESkillBaseWidgetType__SkillLocationPicker = 4,
	ESkillBaseWidgetType__ESkillBaseWidgetType_MAX = 5
};



enum class ESkillCanBePlayedResult : uint8_t
{
	ESkillCanBePlayedResult__Success = 0,
	ESkillCanBePlayedResult__Fail_Default = 1,
	ESkillCanBePlayedResult__Fail_ProneUseConsumables = 2,
	ESkillCanBePlayedResult__Fail_PawnState = 3,
	ESkillCanBePlayedResult__Fail_CD = 4,
	ESkillCanBePlayedResult__Fail_Disable = 5,
	ESkillCanBePlayedResult__Fail_NoToken = 6,
	ESkillCanBePlayedResult__Fail_CheckCondition = 7,
	ESkillCanBePlayedResult__ESkillCanBePlayedResult_MAX = 8
};



enum class ESkillCastType : uint8_t
{
	ESkillCastType__Normal         = 0,
	ESkillCastType__Trigger        = 1,
	ESkillCastType__Passive        = 2,
	ESkillCastType__Max            = 3
};



enum class ESkillBlackboardResetRule : uint8_t
{
	ESkillBlackboardResetRule__ESBBRR_None = 0,
	ESkillBlackboardResetRule__ESBBRR_SkillInit = 1,
	ESkillBlackboardResetRule__ESBBRR_SkillStart = 2,
	ESkillBlackboardResetRule__ESBBRR_SkillEnd = 3,
	ESkillBlackboardResetRule__ESBBRR_MAX = 4
};



enum class ECDOperationType : uint8_t
{
	ECDOperationType__CD_Set       = 0,
	ECDOperationType__CD_Add       = 1,
	ECDOperationType__CD_Mul       = 2,
	ECDOperationType__CD_MAX       = 3
};



enum class ECDCompare : uint8_t
{
	ECDCompare__CDC_Bigger         = 0,
	ECDCompare__CDC_Equal          = 1,
	ECDCompare__CDC_Smaller        = 2,
	ECDCompare__CDC_MAX            = 3
};



enum class ECDRole : uint8_t
{
	ECDRole__CDR_Default           = 0,
	ECDRole__CDR_ClientPreAct      = 1,
	ECDRole__CDR_ClientOnly        = 2,
	ECDRole__CDR_MAX               = 3
};



enum class ESkillConditionRole : uint8_t
{
	ESCR_All                       = 0,
	ESCR_Authority                 = 1,
	ESCR_Autonomous                = 2,
	ESCR_Simulated                 = 3,
	ESCR_AutonomousSimulated       = 4,
	ESCR_AutonomousAuthority       = 5,
	ESCR_MAX                       = 6
};



enum class ESkillActionRole : uint8_t
{
	ESAR_All                       = 0,
	ESAR_Authority                 = 1,
	ESAR_Autonomous                = 2,
	ESAR_Simulated                 = 3,
	ESAR_AutonomousSimulated       = 4,
	ESAR_AutonomousAuthority       = 5,
	ESAR_AuthoritySimulated        = 6,
	ESAR_MAX                       = 7
};



enum class ESkillAddForceDirection : uint8_t
{
	ESkillAddForceDirection__ESkillDir_SelfToTarget = 0,
	ESkillAddForceDirection__ESkillDir_TargetToSelf = 1,
	ESkillAddForceDirection__ESkillDir_SelfDir = 2,
	ESkillAddForceDirection__ESkillDir_TargetDir = 3,
	ESkillAddForceDirection__ESkillDir_TargetZ = 4,
	ESkillAddForceDirection__ESkillDir_SelfZ = 5,
	ESkillAddForceDirection__ESkillDir_MAX = 6
};



enum class ESkillStage : uint8_t
{
	ESkillStage__None              = 0,
	ESkillStage__Prepare           = 1,
	ESkillStage__Start             = 2,
	ESkillStage__Stop              = 3,
	ESkillStage__ESkillStage_MAX   = 4
};



enum class ESkillAttrOperator : uint8_t
{
	ESkillAttrOperator__None       = 0,
	ESkillAttrOperator__Plus       = 1,
	ESkillAttrOperator__Multiply   = 2,
	ESkillAttrOperator__Set        = 3,
	ESkillAttrOperator__ESkillAttrOperator_MAX = 4
};



enum class EFSkillType : uint8_t
{
	FSkillType__None               = 0,
	FSkillType__Medicine           = 1,
	FSkillType__Damage             = 2,
	FSkillType__FSkillType_MAX     = 3
};



enum class ESkillIconStatus : uint8_t
{
	ESkillIconStatus__IConBtnNone  = 0,
	ESkillIconStatus__IconBtnNormal = 1,
	ESkillIconStatus__IconBtnActive = 2,
	ESkillIconStatus__IconBtnInCD  = 3,
	ESkillIconStatus__IconBtnDown  = 4,
	ESkillIconStatus__IconBtnUp    = 5,
	ESkillIconStatus__IconBtnClick = 6,
	ESkillIconStatus__IconBtnHovered = 7,
	ESkillIconStatus__IconBtnUnHovered = 8,
	ESkillIconStatus__ESkillIconStatus_MAX = 9
};



enum class EUTSkillTargetType : uint8_t
{
	UTSkillTargetType__STT_FRIEND  = 0,
	UTSkillTargetType__STT_ENEMY   = 1,
	UTSkillTargetType__STT_ALL     = 2,
	UTSkillTargetType__STT_MAX     = 3
};



enum class EUTPickerTargetType : uint8_t
{
	UTPickerTargetType__PTT_FRIEND = 0,
	UTPickerTargetType__PTT_ENEMY  = 1,
	UTPickerTargetType__PTT_ALL    = 2,
	UTPickerTargetType__PTT_Self   = 3,
	UTPickerTargetType__PTT_MAX    = 4
};



enum class ETriggerSkillFailed : uint8_t
{
	ETriggerSkillFailed__TriggerSkillFailed_NoSkill = 0,
	ETriggerSkillFailed__TriggerSkillFailed_VerifyFailed = 1,
	ETriggerSkillFailed__TriggerSkillFailed_MAX = 2
};



enum class ESkillMutexType : uint8_t
{
	ESMT_Y                         = 0,
	ESMT_X                         = 1,
	ESMT_XY                        = 2,
	ESMT_MAX                       = 3
};



enum class ESkillEndConditionType : uint8_t
{
	ESECT_MyHP                     = 0,
	ESECT_MyHPAndSD                = 1,
	ESECT_FrinedHP                 = 2,
	ESECT_ExistsEnemy              = 3,
	ESECT_ExistsEnemy2             = 4,
	ESECT_ExistsEnemyAndFriends    = 5,
	ESECT_AnyTime                  = 6,
	ESECT_None                     = 7,
	ESECT_MAX                      = 8
};



enum class ESkillConditionType : uint8_t
{
	ESCT_MyHP                      = 0,
	ESCT_MyHPAndSD                 = 1,
	ESCT_MyHPAndSDNoEmeny          = 2,
	ESCT_FrinedHP                  = 3,
	ESCT_ExistsEnemy               = 4,
	ESCT_ExistsEnemy2              = 5,
	ESCT_ExistsEnemyAndFriends     = 6,
	ESCT_AnyTime                   = 7,
	ESCT_None                      = 8,
	ESCT_MAX                       = 9
};



enum class EUTSkillPhaseType : uint8_t
{
	UTSkillPhaseType__SPT_SEQUENCE = 0,
	UTSkillPhaseType__SPT_WAIT     = 1,
	UTSkillPhaseType__SPT_FINAL_SKILL_PHASE = 2,
	UTSkillPhaseType__SPT_Keep     = 3,
	UTSkillPhaseType__SPT_JUMP     = 4,
	UTSkillPhaseType__SPT_MAX      = 5
};



enum class EUTSkillPickerRole : uint8_t
{
	UTSkillPickerRole__SPR_Authority = 0,
	UTSkillPickerRole__SPR_Autonomous = 1,
	UTSkillPickerRole__SPR_Both    = 2,
	UTSkillPickerRole__SPR_MAX     = 3
};



enum class EUTSkillPickerType : uint8_t
{
	UTSkillPickerType__SPT_SELF    = 0,
	UTSkillPickerType__SPT_TARGET  = 1,
	UTSkillPickerType__SPT_VIEWPOINT = 2,
	UTSkillPickerType__SPT_VIEWPOINT_STATIC = 3,
	UTSkillPickerType__SPT_RECT    = 4,
	UTSkillPickerType__SPT_CIRCLE  = 5,
	UTSkillPickerType__SPT_CAPSULE = 6,
	UTSkillPickerType__SPT_FAN     = 7,
	UTSkillPickerType__SPT_CROSSHAIR = 8,
	UTSkillPickerType__SPT_CUSTOM  = 9,
	UTSkillPickerType__SPT_DESTINATION = 10,
	UTSkillPickerType__SPT_VIEWPOINT_NORMAL = 11,
	UTSkillPickerType__SPT_BLACKBOARD = 12,
	UTSkillPickerType__SPT_SELFVEHICLE = 13,
	UTSkillPickerType__SPT_DEFAULT = 14,
	UTSkillPickerType__SPT_MAX     = 15
};



enum class ESkillDebugEventType : uint8_t
{
	ES_SkillStart                  = 0,
	ES_SkillPhaseStart             = 1,
	ES_SkillInterrupt              = 2,
	ES_OutputStats                 = 3,
	ES_SkillEnd                    = 4,
	ES_MAX                         = 5
};









struct FSharedDelegateWrap
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UObject*                                     Outer;                                                    
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FMultiSharedDelegateWrap
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UObject*                                     Outer;                                                    
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FLuaEventRegistWrap
{
	unsigned char                                      UnknownData00[0x28];                                      
	class UObject*                                     Outer;                                                    
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FUTSkillComboInfo
{
	int                                                ComboNextSkillID;                                         
	bool                                               bLongPressToCombo;                                        
	bool                                               bClickToCombo;                                            
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              ClickTimeLimitBeforeSkillStop;                            
};



struct FUTSkillCreateData
{
	int                                                SkillGroupIndex;                                          
	float                                              Interval;                                                 
	float                                              IntervalSincePrevFinish;                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     CoolDownMessage;                                          
	int                                                CoolDownMessageID;                                        
	bool                                               bEnableRepeat;                                            
	bool                                               bEnableCombo;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	struct FUTSkillComboInfo                           ComboInfo;                                                
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<class UUTSkillPhase*>                       Phases;                                                   
	class UUTSkillEffect*                              SkillActiveAction;                                        
	class UUTSkillEffect*                              SkillCloseAction;                                         
	TArray<class UUTSkillCDBase*>                      SkillCDs;                                                 
	unsigned char                                      UnknownData03[0x8];                                       
};



struct FUTSkillBlackboardParameter : public FUAEBlackboardParameter
{
	TArray<ESkillBlackboardResetRule>                  ResetRuleArray;                                           
};



struct FUTSkillActionCreateData
{
	TEnumAsByte<ESkillActionRole>                      ActionRole;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              delayTime;                                                
};



struct FSkillConditionWarpper
{
	class UUTSkillCondition*                           SkillCondition;                                           
};



struct FSkillLocationFilterContext
{
	class AActor*                                      OwnerPawn;                                                
	class AUTSkill*                                    OwnerSkill;                                               
};



struct FUTSkillRuntimeData
{
	bool                                               bSkillActived;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                SkillButtonSlot;                                          
	bool                                               bShowSkillMainWidget;                                     
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<class UUTSkillCDBase*>                      SkillCDs;                                                 
};



struct FUTSkillLastCastInfo
{
	int                                                SkillID;                                                  
	float                                              LastCastTime;                                             
	float                                              LastCastFinishTime;                                       
};



struct FSkillActiveData
{
	int                                                SkillID;                                                  
	int                                                SkillButtonSlot;                                          
	bool                                               bActive;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FSkillActiveRepData
{
	TArray<struct FSkillActiveData>                    SkillData;                                                
	unsigned char                                      UnknownData00[0xD0];                                      
};



struct FSkillAttrData
{
	int                                                SkillID;                                                  
	int                                                SkillLevel;                                               
	int                                                SkillSkinID;                                              
};



struct FSkillAttrRepData
{
	TArray<struct FSkillAttrData>                      SkillData;                                                
	unsigned char                                      UnknownData00[0xD0];                                      
};



struct FSkillDynamicRepData
{
	TArray<int>                                        SkillData;                                                
	unsigned char                                      UnknownData00[0xD0];                                      
};



struct FTeammateSkillCDRepData
{
	int                                                SkillID;                                                  
	float                                              CDStartTime;                                              
	float                                              CDEndTime;                                                
	int                                                UseCount;                                                 
};



struct FSkillNetBytesData
{
	TArray<unsigned char>                              Data;                                                     
};



struct FUTSkillSyncData_CD
{
	int                                                SkillCDIndex;                                             
	float                                              SkillTimeScale;                                           
	struct FSkillNetBytesData                          CDSyncDatas;                                              
};



struct FSkillCDRepData
{
	int                                                SkillID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FUTSkillSyncData_CD>                 CDSyncDatas;                                              
};



struct FUTSkillHitInfo
{
	TArray<class AActor*>                              ToPawn;                                                   
	class AActor*                                      FromPawn;                                                 
	int                                                SkillID;                                                  
	int                                                SkillPhaseID;                                             
	float                                              TimeSeconds;                                              
	bool                                               IsHeadShot;                                               
	TEnumAsByte<EPhysicalSurface>                      HitSurfaceType;                                           
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     HitEnvLocation;                                           
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FUTSkillHitEnvInfo
{
	TArray<class AActor*>                              ToPawn;                                                   
	class AActor*                                      FromPawn;                                                 
	int                                                SkillID;                                                  
	int                                                SkillPhaseID;                                             
	TEnumAsByte<EPhysicalSurface>                      HitSurfaceType;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     HitEnvLocation;                                           
};



struct FSkillParamater
{
	bool                                               bUseTag;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       SkillTag;                                                 
	EFSkillType                                        SkillType;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              CDRecoveryScale;                                          
	float                                              SkillRuntimeScale;                                        
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FUTReplaceSkillData
{
	int                                                OldSkillID;                                               
	int                                                NewSkillID;                                               
};



struct FSkillDisableKeySet
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FSkillLimitKeySet
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FUTMultiSkillSynData
{
	bool                                               bEnableRepeat;                                            
	EUTSkillStopReason                                 StopReason;                                               
	unsigned char                                      UnknownData00[0x6];                                       
	uint64_t                                           InstanceID;                                               
	int                                                SkillID;                                                  
	int                                                PhaseIndexes;                                             
	struct FSkillNetBytesData                          PhaseIndexArray;                                          
	struct FSkillNetBytesData                          BlackboardBytesData;                                      
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FMultiSkillSynData
{
	TArray<struct FUTMultiSkillSynData>                SkillData;                                                
	TArray<struct FUTMultiSkillSynData>                LastSkillData;                                            
	unsigned char                                      UnknownData00[0xD0];                                      
};



struct FUTSkillSynSinglePhaseData
{
	uint64_t                                           InstanceID;                                               
	int                                                SkillID;                                                  
	int                                                CurSkillPhase;                                            
	EUTSkillStopReason                                 StopReason;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FSkillNetBytesData                          BlackboardBytesData;                                      
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FSkillSinglePhaseData
{
	TArray<struct FUTSkillSynSinglePhaseData>          SkillData;                                                
	TArray<struct FUTSkillSynSinglePhaseData>          LastSkillData;                                            
	unsigned char                                      UnknownData00[0xD0];                                      
};



struct FUTSkillSimulateData
{
	uint64_t                                           InstanceID;                                               
	int                                                SkillID;                                                  
	bool                                               bSinglePhaseRep;                                          
	EUTSkillStopReason                                 StopReason;                                               
	unsigned char                                      UnknownData00[0x2];                                       
	TArray<int>                                        SimlatePhaseIndexs;                                       
};



struct FUTSkillExecQueue
{
	unsigned char                                      UnknownData00[0xB0];                                      
};



struct FUTSkillEventHistory
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FUTSkillComboState
{
	int                                                CurSkillID;                                               
	int                                                CurInstID;                                                
	struct FTimerHandle                                TimerHandle;                                              
	float                                              LocalStopTime;                                            
	int                                                ComboCount;                                               
};



struct FUTSkillPhaseCreateData
{
	float                                              PhaseDuration;                                            
	float                                              AltPhaseDuration;                                         
	bool                                               bMustHasTarget;                                           
	bool                                               bCoolDown;                                                
	bool                                               bCoolDownAfterPhase;                                      
	bool                                               bAllowSimulateEvent;                                      
	bool                                               bKeepTickState;                                           
	bool                                               bKeepTickStateWithConditionCheck;                         
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                CoolDownIndex;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<class UUTSkillCondition*>                   PhaseConditions;                                          
	class UUTSkillPicker*                              Picker;                                                   
	TArray<class UUTSkillEffect*>                      Actions;                                                  
	TArray<class UUTSkillEffect*>                      HurtAppearances;                                          
	EUTSkillPhaseType                                  PhaseType;                                                
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                JumpPhaseIndex;                                           
	TArray<struct FUAEBlackboardKeySelector>           SyncBBKArray;                                             
	TArray<class UUTSkillEventEffectMapForEditor*>     EditorEventEffectMap;                                     
};



struct FUTSkillPickedTarget
{
	TWeakObjectPtr<class AActor>                       Target;                                                   
	TWeakObjectPtr<class UPrimitiveComponent>          TargetComponent;                                          
	bool                                               IsHeadShot;                                               
	unsigned char                                      HitPos;                                                   
	unsigned char                                      UnknownData00[0x6];                                       
	struct FName                                       BoneName;                                                 
	struct FVector                                     HitEnvLocation;                                           
	float                                              HitAngleCos;                                              
	TEnumAsByte<EPhysicalSurface>                      HitPhysMatType;                                           
	bool                                               IgnoreTakeDamage;                                         
	unsigned char                                      UnknownData01[0x6];                                       
};



struct FUTSkillPickerCreateData
{
	EUTSkillPickerType                                 PickerType;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FUAEBlackboardKeySelector                   PickerOriginBlackboardKey;                                
	EUTPickerTargetType                                PickerTargetType;                                         
	EUTSkillPickerRole                                 PickerTargetRole;                                         
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                PickerMaxCount;                                           
	bool                                               bIncludeOwner;                                            
	bool                                               bIgnoreEnableAnyDamageTagIfOwnerIsSelf;                   
	bool                                               bOnlyHero;                                                
	bool                                               bPickDoor;                                                
	bool                                               bPickImplImpactInterface;                                 
	bool                                               bForceSimPick;                                            
	bool                                               bEnableTrace;                                             
	bool                                               bEnableVehicleTrace;                                      
	bool                                               bIsUsingViewRotation;                                     
	bool                                               bIgnoreViewRotationPitch;                                 
	bool                                               bPickByTrace;                                             
	bool                                               IsCheckHeadshot;                                          
	bool                                               bUseNewOffset;                                            
	bool                                               bIgnoreOwnerVehicleWhenTracePlayer;                       
	bool                                               bIgnoreTargetVehicleWhenTracePlayer;                      
	bool                                               bIgnoreDriverCharacter;                                   
	bool                                               bOwnerActorMustBuilding;                                  
	bool                                               bUse2DAngle;                                              
	bool                                               bSortByDistInNarrowAngle;                                 
	unsigned char                                      UnknownData02[0x1];                                       
	float                                              NarrowAngleInDegree;                                      
	bool                                               bSortByDistInNarrowBox;                                   
	unsigned char                                      UnknownData03[0x3];                                       
	struct FVector                                     NarrowBoxExtent;                                          
	struct FVector                                     TargetLocationOffset;                                     
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FSkillFuncNameSelector
{
	struct FName                                       SelectedKeyName;                                          
	bool                                               bLuaFunction;                                             
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FActionMetaData
{
	ESkillBaseWidgetType                               ActionType;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     Value;                                                    
	int                                                Count;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FActionsMetaData
{
	TMap<struct FString, struct FActionMetaData>       ActionMetaData;                                           
};



struct FSkillMetaData
{
	struct FString                                     SkillName;                                                
	TMap<int, struct FActionsMetaData>                 PhaseToActionsMetaData;                                   
};



struct FUTSkillBBUploadData
{
	TArray<struct FName>                               KeyNames;                                                 
};



struct FUTSkillInstance
{
	int                                                SkillID;                                                  
	int                                                CurPhaseIndex;                                            
	int                                                LastPhaseIndex;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           InstanceID;                                               
	int                                                SkillSlot;                                                
	int                                                Level;                                                    
	int                                                ActiveState;                                              
	int                                                SkillCDIndex;                                             
	EUTSkillStopReason                                 StopReason;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	struct FUTSkillCreateData                          SkillBaseData;                                            
	TWeakObjectPtr<class AUTSkill>                     CurSkill;                                                 
	TWeakObjectPtr<class UUTSkillWidget>               CurSkillWidget;                                           
	TWeakObjectPtr<class UUTSkillManagerComponent>     OwnerComp;                                                
	TArray<TWeakObjectPtr<class AActor>>               SkillActors;                                              
	TArray<TWeakObjectPtr<class AActor>>               SkillSharePickedTargets;                                  
	bool                                               bGsListener;                                              
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FSkillParamaterModifier : public FSkillParamater
{
	ESkillAttrOperator                                 CDRecoveryScaleOP;                                        
	ESkillAttrOperator                                 SkillRuntimeScaleOp;                                      
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FUTSkillAutoTriggerCondition
{
	TEnumAsByte<ESkillConditionType>                   Condition;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                Param_W;                                                  
	int                                                Param_X;                                                  
	int                                                Param_Y;                                                  
	int                                                Param_Z;                                                  
	TEnumAsByte<ESkillEndConditionType>                EndCondition;                                             
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                Param_A;                                                  
	int                                                Param_B;                                                  
	int                                                Param_C;                                                  
	int                                                Param_D;                                                  
};



struct FUTSkillEventActionMap
{
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           
	unsigned char                                      UnknownData00[0x7];                                       
	class UUTSkillEffect*                              Action;                                                   
	TArray<class UUTSkillCondition*>                   Conditions;                                               
	TArray<class UUTSkillCondition*>                   TargetConditions;                                         
};



struct FSkillFlowExecutionStep
{
	unsigned char                                      UnknownData00[0x70];                                      
};



struct FSkillFlowStatsLog
{
	unsigned char                                      UnknownData00[0x20];                                      
};

}

