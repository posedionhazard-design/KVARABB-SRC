#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UPrivateNodeLuaInterface_SetPrivateUniqueKey_Params
{
	struct FString                                     NewKey;                                                   
};


struct UPrivateNodeLuaInterface_GetPrivateUniqueKey_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USharedDelegate_EventTrigger_Params
{
};


struct UUTSkillBaseWidget_IsSetValueAsNewDataWhenNotExist_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBaseWidget_GetUAEBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              
};


struct UUTSkillBaseWidget_GetOwnerSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              
};


struct UUTSkillBaseWidget_GetOwnerSkillID_Params
{
	int                                                ReturnValue;                                              
};


struct UUTSkillBaseWidget_GetOwnerPawn_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct USkillTriggerData_GetSkillEventType_Params
{
	TEnumAsByte<EUTSkillEventType>                     ReturnValue;                                              
};


struct AUTSkill_VerifyServerSkillData_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	TEnumAsByte<EUTSkillEventType>                     InEventType;                                              
	bool                                               ReturnValue;                                              
};


struct AUTSkill_StopSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	int                                                CoolDownIndex;                                            
};


struct AUTSkill_ResetSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	int                                                CoolDownIndex;                                            
};


struct AUTSkill_OnEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             
	int                                                PhaseIndex;                                               
	bool                                               ReturnValue;                                              
};


struct AUTSkill_JumpToPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	int                                                PhaseId;                                                  
	bool                                               ReturnValue;                                              
};


struct AUTSkill_IsMeleeSkill_Params
{
	bool                                               ReturnValue;                                              
};


struct AUTSkill_IsEnableSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	bool                                               ReturnValue;                                              
};


struct AUTSkill_IsCDOK_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	int                                                CoolDownIndex;                                            
	bool                                               ReturnValue;                                              
};


struct AUTSkill_HandleVerifyServerSkillDataFail_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	TEnumAsByte<EUTSkillEventType>                     InEventType;                                              
};


struct AUTSkill_GetSpecificSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              
};


struct AUTSkill_GetSpecificBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              
};


struct AUTSkill_GetSkillPhaseByName_Params
{
	struct FString                                     PhaseName;                                                
	class UUTSkillPhase*                               ReturnValue;                                              
};


struct AUTSkill_GetSkillPhase_Params
{
	int                                                PhaseIndex;                                               
	class UUTSkillPhase*                               ReturnValue;                                              
};


struct AUTSkill_GetSkillID_Params
{
	int                                                ReturnValue;                                              
};


struct AUTSkill_GetSkillEffectByPhaseName_Params
{
	struct FString                                     PhaseName;                                                
	struct FString                                     EffectName;                                               
	class UUTSkillBaseWidget*                          ReturnValue;                                              
};


struct AUTSkill_GetSkillEffectByPhaseIndex_Params
{
	int                                                PhaseIndex;                                               
	struct FString                                     EffectName;                                               
	class UUTSkillBaseWidget*                          ReturnValue;                                              
};


struct AUTSkill_GetSkillDurationScale_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	float                                              ReturnValue;                                              
};


struct AUTSkill_GetCurSkillPhaseIndex_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	int                                                ReturnValue;                                              
};


struct AUTSkill_GetCurSkillPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class UUTSkillPhase*                               ReturnValue;                                              
};


struct AUTSkill_GetCoolDownTime_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	int                                                CoolDownIndex;                                            
	float                                              ReturnValue;                                              
};


struct AUTSkill_DoSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	int                                                CoolDownIndex;                                            
};


struct AUTSkill_CanBePlayed_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	ESkillCanBePlayedResult                            ReturnValue;                                              
};


struct UUTSkillEffect_UpdateAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	float                                              DeltaSeconds;                                             
};


struct UUTSkillEffect_UndoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillEffect_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillEffect_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillEffect_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillEffect_OnAsyncLoadSoftPathDone_Params
{
};


struct UUTSkillEffect_GetOwnerSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillEffect_DoHurtAppearance_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AActor*                                      Victim;                                                   
};


struct UUTSkillEffect_DoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	bool                                               bCheckSkillStopped;                                       
	bool                                               ReturnValue;                                              
};


struct UUTSkillAction_UpdateAction_Internal_Params
{
	float                                              DeltaSeconds;                                             
};


struct UUTSkillAction_UpdateAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	float                                              DeltaSeconds;                                             
};


struct UUTSkillAction_UndoAction_Internal_Params
{
};


struct UUTSkillAction_UndoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillAction_TimerRealDoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	bool                                               bCheckSkillStopped;                                       
};


struct UUTSkillAction_Reset_Internal_Params
{
};


struct UUTSkillAction_Reset_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    
};


struct UUTSkillAction_RealDoHurtAppearance_Internal_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AActor*                                      Victim;                                                   
};


struct UUTSkillAction_RealDoHurtAppearance_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AActor*                                      Victim;                                                   
};


struct UUTSkillAction_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillAction_RealDoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	bool                                               bCheckSkillStopped;                                       
	bool                                               ReturnValue;                                              
};


struct UUTSkillAction_OnAsyncLoadAssetDone_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AActor*                                      SkillAppearanceVictim;                                    
	bool                                               bSkillAppearance;                                         
};


struct UUTSkillAction_JudgeNeedPhaseWait_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillAction_DoHurtAppearance_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AActor*                                      Victim;                                                   
};


struct UUTSkillAction_DoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	bool                                               bCheckSkillStopped;                                       
	bool                                               ReturnValue;                                              
};


struct UUTSkillAction_Lua_ClearLuaPrivateData_Params
{
	class AActor*                                      Actor;                                                    
};


struct UUTSkillAction_LuaContainer_UpdateActionInContainer_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    
	float                                              DeltaSeconds;                                             
};


struct UUTSkillAction_LuaContainer_UndoActionInContainer_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    
};


struct UUTSkillAction_LuaContainer_ResetActionInContainer_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    
};


struct UUTSkillAction_LuaContainer_RealDoActionInContainer_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_SetValueAsWeakObject_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	class UObject*                                     ObjectValue;                                              
};


struct UUTSkillBlackboardInterface_SetValueAsVector_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	struct FVector                                     VectorValue;                                              
};


struct UUTSkillBlackboardInterface_SetValueAsUInt_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	uint32_t                                           UIntValue;                                                
};


struct UUTSkillBlackboardInterface_SetValueAsString_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	struct FString                                     StringValue;                                              
};


struct UUTSkillBlackboardInterface_SetValueAsRotator_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	struct FRotator                                    VectorValue;                                              
};


struct UUTSkillBlackboardInterface_SetValueAsObject_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	class UObject*                                     ObjectValue;                                              
};


struct UUTSkillBlackboardInterface_SetValueAsName_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	struct FName                                       NameValue;                                                
};


struct UUTSkillBlackboardInterface_SetValueAsInt_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	int                                                IntValue;                                                 
};


struct UUTSkillBlackboardInterface_SetValueAsFloat_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	float                                              FloatValue;                                               
};


struct UUTSkillBlackboardInterface_SetValueAsEnum_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	unsigned char                                      EnumValue;                                                
};


struct UUTSkillBlackboardInterface_SetValueAsClass_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	class UClass*                                      ClassValue;                                               
};


struct UUTSkillBlackboardInterface_SetValueAsBool_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               BoolValue;                                                
};


struct UUTSkillBlackboardInterface_IsExistWeakObject_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistVector_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistUInt_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistString_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistRotator_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistObject_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistName_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistInt_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistFloat_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistEnum_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistClass_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_IsExistBool_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsWeakObject_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	class UObject*                                     ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsWeakActor_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	class AActor*                                      ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsVector_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsUInt_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	uint32_t                                           ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsString_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsRotator_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	struct FRotator                                    ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsObject_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	class UObject*                                     ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsName_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	struct FName                                       ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsInt_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	int                                                ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsFloat_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	float                                              ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsEnum_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	unsigned char                                      ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsClass_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	class UClass*                                      ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsBool_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetValueAsActor_Params
{
	int                                                SkillID;                                                  
	struct FName                                       KeyName;                                                  
	class AActor*                                      ReturnValue;                                              
};


struct UUTSkillBlackboardInterface_GetUAEBlackboardBySkillID_Params
{
	int                                                SkillID;                                                  
	class UUAEBlackboard*                              ReturnValue;                                              
};


struct UUTSkillCDBase_BindLua_Params
{
	struct FString                                     luaPath;                                                  
};


struct UUTSkillCondition_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillCondition_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillCondition_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillCondition_IsTargetOK_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    
	class AActor*                                      Target;                                                   
	bool                                               ReturnValue;                                              
};


struct UUTSkillCondition_IsOK_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillCondition_IsOK_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    
	bool                                               ReturnValue;                                              
};


struct UUTSkillCondition_GetOwnerSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillInstancedNodeInterface_PostOverrideLua_Params
{
};


struct UUTSkillInterface_IsNeedCheckAutoSkill_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillInterface_HasSkillToken_Params
{
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillInterface_HandleSkillStart_Params
{
	int                                                SkillID;                                                  
};


struct UUTSkillInterface_HandleSkillEnd_Params
{
	int                                                SkillID;                                                  
	EUTSkillStopReason                                 Reason;                                                   
};


struct UUTSkillInterface_GetSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              
};


struct UUTSkillInterface_ClearSkillToken_Params
{
	int                                                SkillID;                                                  
};


struct UUTSkillInterface_ClearAllSkillToken_Params
{
};


struct UUTSkillInterface_AddSkillToken_Params
{
	int                                                SkillID;                                                  
};


struct UUTSkillLocationPickerFilter_CheckAdjustLocation_Params
{
	struct FSkillLocationFilterContext                 Context;                                                  
	struct FVector                                     InLocation;                                               
	struct FVector                                     OutLocation;                                              
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_UpdateSyncSkillCDData_Params
{
	int                                                SkillID;                                                  
	int                                                CDIndex;                                                  
};


struct UUTSkillManagerComponent_UnRegisterActorBlackBorad_Params
{
	class AActor*                                      InActor;                                                  
};


struct UUTSkillManagerComponent_TryDeleteOneSkill_Params
{
	int                                                SkillID;                                                  
	bool                                               IsImmediately;                                            
	bool                                               bResetCD;                                                 
};


struct UUTSkillManagerComponent_TryAddOneSkill_Params
{
	int                                                SkillID;                                                  
	bool                                               bActive;                                                  
	int                                                ButtonSlot;                                               
};


struct UUTSkillManagerComponent_TriggerSkillWithParams_Params
{
	int                                                SkillID;                                                  
	TArray<struct FString>                             InKeyStrings;                                             
	bool                                               bEnable;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_TriggerSkillWithID_Params
{
	int                                                SkillID;                                                  
	bool                                               bEnable;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_TriggerLocalEventWithID_Params
{
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_TriggerEventWithID_Params
{
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_TriggerEvent_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
};


struct UUTSkillManagerComponent_TraceTarget_Params
{
	struct FVector                                     StartTrace;                                               
	struct FVector                                     EndTrace;                                                 
	EUTPickerTargetType                                TargetType;                                               
	float                                              Radius;                                                   
	class AActor*                                      TargetActor;                                              
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_SyncOneSkillState_Params
{
	bool                                               RepSkillCD;                                               
	bool                                               RepSkillActiveState;                                      
	int                                                RequestID;                                                
};


struct UUTSkillManagerComponent_StopSkillAll_Params
{
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_StopSkill_Params
{
	int                                                SkillID;                                                  
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_StopCurSkill_Params
{
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_StopAllMonopolizeSkill_Params
{
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_SetupOwnerAndSystem_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_SetSkillTagsLimit_Params
{
	TArray<int>                                        SkillTags;                                                
	bool                                               bLimit;                                                   
	struct FString                                     TriggerKey;                                               
};


struct UUTSkillManagerComponent_SetSkillTagsDisable_Params
{
	TArray<int>                                        SkillTags;                                                
	bool                                               bDisable;                                                 
	struct FString                                     TriggerKey;                                               
};


struct UUTSkillManagerComponent_SetSkillSkinID_Params
{
	int                                                SkillID;                                                  
	int                                                InSkillSkinID;                                            
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_SetSkillOwner_Params
{
	class AActor*                                      tempActor;                                                
};


struct UUTSkillManagerComponent_SetSkillLevel_Params
{
	int                                                SkillID;                                                  
	int                                                SkillLevel;                                               
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_SetSkillIDsLimit_Params
{
	TArray<int>                                        SkillIDs;                                                 
	bool                                               bLimit;                                                   
	struct FString                                     TriggerKey;                                               
};


struct UUTSkillManagerComponent_SetSkillIDsDisable_Params
{
	TArray<int>                                        SkillIDs;                                                 
	bool                                               bDisable;                                                 
	struct FString                                     TriggerKey;                                               
};


struct UUTSkillManagerComponent_SetSkillCDTimeScale_Params
{
	int                                                SkillID;                                                  
	float                                              Scale;                                                    
	int                                                ScaleType;                                                
};


struct UUTSkillManagerComponent_SetSkillCDIndexTimeScale_Params
{
	int                                                SkillID;                                                  
	int                                                SkillCDIndex;                                             
	float                                              Scale;                                                    
	int                                                ScaleType;                                                
};


struct UUTSkillManagerComponent_SetSkillActive_Params
{
	int                                                SkillID;                                                  
	bool                                               bActive;                                                  
	bool                                               bForceSet;                                                
	int                                                ButtonSlot;                                               
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_SetAutoSkillID_Params
{
	int                                                InSkillID;                                                
};


struct UUTSkillManagerComponent_SetAllSkillCDTimeScale_Params
{
	float                                              Scale;                                                    
};


struct UUTSkillManagerComponent_ServerTriggerEvent_WithParamsAndTssData_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
	uint64_t                                           InstID;                                                   
	TArray<unsigned char>                              Content;                                                  
	TArray<unsigned char>                              TssData;                                                  
	uint64_t                                           PackageIndex;                                             
};


struct UUTSkillManagerComponent_ServerTriggerEvent_WithParams_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
	uint64_t                                           InstID;                                                   
	TArray<unsigned char>                              Content;                                                  
	uint64_t                                           PackageIndex;                                             
};


struct UUTSkillManagerComponent_ServerTriggerEvent_WithIDAndTssData_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
	uint64_t                                           InstID;                                                   
	TArray<unsigned char>                              TssData;                                                  
	uint64_t                                           PackageIndex;                                             
};


struct UUTSkillManagerComponent_ServerTriggerEvent_WithID_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
	uint64_t                                           InstID;                                                   
	uint64_t                                           PackageIndex;                                             
};


struct UUTSkillManagerComponent_ServerTriggerEvent_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
};


struct UUTSkillManagerComponent_ServerStopSkillCombo_Params
{
	int                                                SkillID;                                                  
};


struct UUTSkillManagerComponent_ServerStopSkill_Params
{
	int                                                SkillID;                                                  
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_ServerStopAllSkill_Params
{
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_ServerStopAllMonopolizeSkill_Params
{
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_ServerStartSkill_Params
{
	int                                                SkillID;                                                  
	bool                                               bAutoCast;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_ServerNotifyRandomSeed_Params
{
	int                                                Seed;                                                     
};


struct UUTSkillManagerComponent_ResetTeammateSkillCDData_Params
{
};


struct UUTSkillManagerComponent_ResetSkillCoolDown_Params
{
	int                                                SkillID;                                                  
	int                                                CDIndex;                                                  
};


struct UUTSkillManagerComponent_ResetSkill_Params
{
	bool                                               bStopAllSkill;                                            
	bool                                               bDeactivateAllSkill;                                      
	bool                                               bResetSkillCD;                                            
};


struct UUTSkillManagerComponent_ResetAllSkillCoolDown_Params
{
};


struct UUTSkillManagerComponent_RequestSkillStates_Params
{
	bool                                               RepSkillCD;                                               
	bool                                               RepSkillActiveState;                                      
};


struct UUTSkillManagerComponent_RepSkillHitInfo_Params
{
};


struct UUTSkillManagerComponent_RepLastCastTime_Params
{
};


struct UUTSkillManagerComponent_ReplaceSkill_Params
{
	int                                                OldSkillID;                                               
	int                                                NewSkillID;                                               
};


struct UUTSkillManagerComponent_RemoveReplacedSkill_Params
{
	int                                                OldSkillID;                                               
};


struct UUTSkillManagerComponent_RemoveAllSkillUIWidget_Params
{
};


struct UUTSkillManagerComponent_RegisterActorBlackBorad_Params
{
	class AActor*                                      InActor;                                                  
	class UUAEBlackboard*                              RegisterBlackboard;                                       
};


struct UUTSkillManagerComponent_RefreshSkillRepData_Params
{
};


struct UUTSkillManagerComponent_RecordSkillException_Params
{
	class AActor*                                      InActor;                                                  
	int                                                InSkillID;                                                
	TEnumAsByte<ENetRole>                              InRole;                                                   
	struct FString                                     InNetMode;                                                
	struct FString                                     InFuncName;                                               
};


struct UUTSkillManagerComponent_RandRangeSyn_Params
{
	int                                                StartIndex;                                               
	int                                                EndIndex;                                                 
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_QuerySkill_Params
{
	int                                                SkillID;                                                  
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillManagerComponent_QueryOrNewSkill_Params
{
	int                                                SkillID;                                                  
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillManagerComponent_PreTriggerSkillEvent_Params
{
	int                                                InSkillID;                                                
};


struct UUTSkillManagerComponent_PostTriggerSkillEvent_Params
{
	int                                                InSkillID;                                                
};


struct UUTSkillManagerComponent_PlayHurtSkillEffect_Params
{
	struct FUTSkillHitInfo                             TheSkillHitInfo;                                          
};


struct UUTSkillManagerComponent_OnStopSkill_Params
{
	class AUTSkill*                                    Skill;                                                    
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_OnRespawned_Params
{
};


struct UUTSkillManagerComponent_OnRep_SkillHitInfo_Params
{
};


struct UUTSkillManagerComponent_OnRep_SkillCDDatas_Params
{
};


struct UUTSkillManagerComponent_OnRep_SkillAttrRepData_Params
{
};


struct UUTSkillManagerComponent_OnRep_SkillActiveState_Params
{
};


struct UUTSkillManagerComponent_OnRep_ReplaceSkill_Params
{
};


struct UUTSkillManagerComponent_OnRep_NewSkillSynData_Params
{
};


struct UUTSkillManagerComponent_OnRep_NewSkillSinglePhaseData_Params
{
};


struct UUTSkillManagerComponent_OnRep_NetClientSimulateInstID_Params
{
};


struct UUTSkillManagerComponent_OnRep_NetAutoSkillID_Params
{
};


struct UUTSkillManagerComponent_OnRep_EnableSkillEncrypt_Params
{
};


struct UUTSkillManagerComponent_OnRep_DynamicRepData_Params
{
};


struct UUTSkillManagerComponent_OnRep_AsyncSkillComboSkillID_Params
{
};


struct UUTSkillManagerComponent_OnRep_AsyncSkillComboCount_Params
{
};


struct UUTSkillManagerComponent_OnRecycled_Params
{
};


struct UUTSkillManagerComponent_OnInterruptSkill_Params
{
	class AUTSkill*                                    Skill;                                                    
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_NewUAEBlackboard_Params
{
	int                                                SkillID;                                                  
};


struct UUTSkillManagerComponent_NeedSimulateStoppedNewSkill_Params
{
	int                                                InSkillID;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_LocalTriggerNewSkillFail_Params
{
	class AUTSkill*                                    InNewSkill;                                               
	uint64_t                                           InstID;                                                   
};


struct UUTSkillManagerComponent_LocalStopSkillAllWithExcludeArray_Params
{
	TArray<int>                                        InExcludeArry;                                            
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_IsSkillNeedPackageVerify_Params
{
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsSkillInit_Params
{
	int                                                InSkillID;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsSkillIDDisable_Params
{
	int                                                InSkillID;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsSkillCanUse_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsSkillActived_Params
{
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsReadyToCastSkill_Params
{
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsPendingCastSkillID_Params
{
	int                                                InSkillID;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsPendingCastSkill_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsEnableSkillCoolDown_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsCurrentUseSkillID_Params
{
	int                                                InSkillID;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsCastingSkillTag_Params
{
	int                                                InSkillTag;                                               
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsCastingSkillID_Params
{
	int                                                InSkillID;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_IsCastingSkill_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_HasSkillEventFromLastCast_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_HandleTriggerParamsEventFail_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
};


struct UUTSkillManagerComponent_HandleTriggerParamsEvent_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_HandleSkillStop_Params
{
	int                                                SkillID;                                                  
	class AUTSkill*                                    InSkill;                                                  
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_HandleSkillStart_Params
{
	int                                                SkillID;                                                  
	class AUTSkill*                                    InSkill;                                                  
};


struct UUTSkillManagerComponent_HandleGMDirectTriggerSkillEvent_Params
{
	int                                                SkillID;                                                  
	int                                                SkillPlayRet;                                             
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetUAEBlackboardBySkillID_Params
{
	int                                                SkillID;                                                  
	class UUAEBlackboard*                              ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetUAEBlackboard_Params
{
	class AUTSkill*                                    InSkill;                                                  
	class UUAEBlackboard*                              ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillWidget_Params
{
	int                                                SkillID;                                                  
	class UUTSkillWidget*                              ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillSynDataString_Params
{
	struct FString                                     PrefixText;                                               
	bool                                               bWithLastData;                                            
	TArray<struct FString>                             ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillSlotBySkillID_Params
{
	int                                                SkillID;                                                  
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillSlotBySkill_Params
{
	class AUTSkill*                                    Skill;                                                    
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillSkinID_Params
{
	int                                                SkillID;                                                  
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillSinglePhaseDataString_Params
{
	struct FString                                     PrefixText;                                               
	bool                                               bWithLastData;                                            
	TArray<struct FString>                             ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillsByGroup_Params
{
	struct FName                                       SkillGroup;                                               
	TArray<class AUTSkill*>                            ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillLevel_Params
{
	int                                                SkillID;                                                  
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillIDByClass_Params
{
	class UClass*                                      SkillClass;                                               
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillExecString_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillEventTimestamp_Params
{
	int                                                SkillID;                                                  
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                
	float                                              OutTimestamp;                                             
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillCurPhase_Params
{
	class AUTSkill*                                    Skill;                                                    
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillByName_Params
{
	struct FString                                     SkillName;                                                
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillByClassName_Params
{
	struct FString                                     SkillClassName;                                           
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillButtonSlot_Params
{
	int                                                SkillID;                                                  
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkillBaseData_Params
{
	int                                                SkillID;                                                  
	struct FUTSkillRuntimeData                         ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetSkill_Params
{
	int                                                SkillID;                                                  
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetReplacedSkill_Params
{
	int                                                OldSkillID;                                               
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetRealOwnerRoleSafety_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetMutexRelation_Params
{
	class AUTSkill*                                    CurSkill;                                                 
	class AUTSkill*                                    NewSkill;                                                 
	TEnumAsByte<ESkillMutexType>                       ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetLastCastTime_Params
{
	int                                                SkillID;                                                  
	float                                              ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetLastCastFinishTime_Params
{
	int                                                SkillID;                                                  
	float                                              ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCurSkills_Params
{
	TArray<class AUTSkill*>                            ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCurSkillPhase_Params
{
	class UUTSkillPhase*                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCurSkillID_Params
{
	class AUTSkill*                                    Skill;                                                    
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCurSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCurMonopolizeSkills_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCurMonopolizedSkillPhase_Params
{
	class UUTSkillPhase*                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCurMonopolizedSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCurAllSkillIDs_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCoolDownTime_Params
{
	int                                                SkillID;                                                  
	int                                                CoolDownIndex;                                            
	float                                              ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetCastingSkillIDs_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UUTSkillManagerComponent_GetButtonSlotSkillID_Params
{
	int                                                ButtonSlot;                                               
	int                                                ReturnValue;                                              
};


struct UUTSkillManagerComponent_DynamicRemoveSkill_Params
{
	int                                                InSkillID;                                                
};


struct UUTSkillManagerComponent_DynamicAddSkill_Params
{
	int                                                InSkillID;                                                
};


struct UUTSkillManagerComponent_ClientTriggerEventSuccess_WithID_Params
{
	int                                                SkillID;                                                  
	uint64_t                                           PackageIndex;                                             
};


struct UUTSkillManagerComponent_ClientTriggerEventFailed_WithID_Params
{
	int                                                SkillID;                                                  
	ETriggerSkillFailed                                FailedReason;                                             
	uint64_t                                           PackageIndex;                                             
};


struct UUTSkillManagerComponent_ClientStopPreActionSkill_Params
{
	int                                                SkillID;                                                  
	uint64_t                                           InstID;                                                   
};


struct UUTSkillManagerComponent_ClientStopOneSkill_Params
{
	uint64_t                                           InstID;                                                   
	bool                                               bSinglePhaseRep;                                          
	EUTSkillStopReason                                 StopReason;                                               
};


struct UUTSkillManagerComponent_ClientStartSkill_Params
{
	int                                                SkillID;                                                  
	bool                                               bAutoCast;                                                
};


struct UUTSkillManagerComponent_ClientSimulateOneSkill_Params
{
	uint64_t                                           InstID;                                                   
	int                                                SkillID;                                                  
	int                                                PhaseIndex;                                               
	bool                                               bSinglePhaseRep;                                          
};


struct UUTSkillManagerComponent_ClearSkill_Params
{
	bool                                               bStopAllSkill;                                            
	bool                                               bDeactivateAllSkill;                                      
	bool                                               bResetSkillCD;                                            
};


struct UUTSkillManagerComponent_ClearRepParams_Params
{
};


struct UUTSkillManagerComponent_ClearInitParams_Params
{
};


struct UUTSkillManagerComponent_CheckAIIsCDOKBySkillID_Params
{
	int                                                SkillID;                                                  
	int                                                CoolDownIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UUTSkillManagerComponent_CacheSkillWidget_Params
{
	int                                                SkillID;                                                  
	class UUTSkillWidget*                              Widget;                                                   
};


struct UUTSkillManagerComponent_AddOrRemoveIngoreSkillIDWhenStopAllSkills_Params
{
	EUTSkillStopReason                                 InStopReason;                                             
	int                                                InSkillID;                                                
	bool                                               bAdd;                                                     
};


struct UUTSkillNodeBlackboardInterface_SetValueAsWeakObject_Params
{
	struct FName                                       KeyName;                                                  
	class UObject*                                     ObjectValue;                                              
};


struct UUTSkillNodeBlackboardInterface_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  
	struct FVector                                     VectorValue;                                              
};


struct UUTSkillNodeBlackboardInterface_SetValueAsUInt_Params
{
	struct FName                                       KeyName;                                                  
	uint32_t                                           UIntValue;                                                
};


struct UUTSkillNodeBlackboardInterface_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                  
	struct FString                                     StringValue;                                              
};


struct UUTSkillNodeBlackboardInterface_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  
	struct FRotator                                    VectorValue;                                              
};


struct UUTSkillNodeBlackboardInterface_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  
	class UObject*                                     ObjectValue;                                              
};


struct UUTSkillNodeBlackboardInterface_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                  
	struct FName                                       NameValue;                                                
};


struct UUTSkillNodeBlackboardInterface_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  
	int                                                IntValue;                                                 
};


struct UUTSkillNodeBlackboardInterface_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  
	float                                              FloatValue;                                               
};


struct UUTSkillNodeBlackboardInterface_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  
	unsigned char                                      EnumValue;                                                
};


struct UUTSkillNodeBlackboardInterface_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  
	class UClass*                                      ClassValue;                                               
};


struct UUTSkillNodeBlackboardInterface_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               BoolValue;                                                
};


struct UUTSkillNodeBlackboardInterface_IsSetValueAsNewDataWhenNotExist_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistWeakObject_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistVector_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistUInt_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistString_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistRotator_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistObject_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistName_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistInt_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistFloat_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistEnum_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistClass_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_IsExistBool_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsWeakObject_Params
{
	struct FName                                       KeyName;                                                  
	class UObject*                                     ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsWeakActor_Params
{
	struct FName                                       KeyName;                                                  
	class AActor*                                      ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsUInt_Params
{
	struct FName                                       KeyName;                                                  
	uint32_t                                           ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  
	struct FRotator                                    ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  
	class UObject*                                     ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                  
	struct FName                                       ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  
	int                                                ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  
	float                                              ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  
	unsigned char                                      ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  
	class UClass*                                      ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetValueAsActor_Params
{
	struct FName                                       KeyName;                                                  
	class AActor*                                      ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_GetUAEBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              
};


struct UUTSkillNodeBlackboardInterface_AddValueByKeySelector_Params
{
	TEnumAsByte<EUAEBlackboardType>                    BBType;                                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
};


struct UUTSkillNodeBlackboardInterface_AddValueByKeName_Params
{
	TEnumAsByte<EUAEBlackboardType>                    BBType;                                                   
	struct FName                                       KeyName;                                                  
};


struct UUTSkillPhase_TryJumpToPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	int                                                PhaseId;                                                  
	bool                                               ReturnValue;                                              
};


struct UUTSkillPhase_StopPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillPhase_StartPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillPhase_RepeatPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillPhase_PlaySkillHurtEffect_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AActor*                                      Victim;                                                   
	bool                                               ReturnValue;                                              
};


struct UUTSkillPhase_PlaySkillHurtAppearances_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AActor*                                      Victim;                                                   
	bool                                               ReturnValue;                                              
};


struct UUTSkillPhase_PickTargets_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
};


struct UUTSkillPhase_OnEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             
	bool                                               ReturnValue;                                              
};


struct UUTSkillPhase_OnCustomEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             
	bool                                               ReturnValue;                                              
};


struct UUTSkillPhase_ForceStopPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	bool                                               ReturnValue;                                              
};


struct UUTSkillPhase_ClearAttachments_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillPickerFilter_IsValidFilterActor_Params
{
	class AActor*                                      InActor;                                                  
	class AActor*                                      Owner;                                                    
	bool                                               ReturnValue;                                              
};


struct UUTSkillPickerFilter_HandleFilterArray_Params
{
	TArray<struct FUTSkillPickedTarget>                inArray;                                                  
	class AActor*                                      Owner;                                                    
};


struct UUTSkillPicker_PickTargetsInner_Params
{
	struct FVector                                     OriginPoint;                                              
	bool                                               ReturnValue;                                              
};


struct UUTSkillPicker_PickTargets_Params
{
	struct FVector                                     OriginPoint;                                              
	bool                                               ReturnValue;                                              
};


struct UUTSkillSpecificAction_UpdateAction_Internal_Params
{
	float                                              DeltaSeconds;                                             
};


struct UUTSkillSpecificAction_UndoAction_Internal_Params
{
};


struct UUTSkillSpecificAction_Reset_Internal_Params
{
};


struct UUTSkillSpecificAction_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              
};


struct UUTSkillSpecificAction_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillSpecificAction_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillSpecificAction_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    
	class AUTSkill*                                    CurOwnerSkill;                                            
};


struct UUTSkillWidget_SetSkillManager_Params
{
	class UUTSkillManagerComponent*                    Manager;                                                  
};


struct UUTSkillWidget_SetSkillID_Params
{
	int                                                InSkillID;                                                
};


struct UUTSkillWidget_RemoveSelf_Params
{
};


struct UUTSkillWidget_GetSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              
};


struct UUTSkillWidget_GetSkillID_Params
{
	int                                                ReturnValue;                                              
};


struct UUTSkillWidget_GetSkillCDBases_Params
{
	TArray<class UUTSkillCDBase*>                      ReturnValue;                                              
};


struct UUTSkillWidget_GetSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              
};


struct UUTSkillWidget_GetLocalPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct UUTSkillWidget_BindLua_Params
{
	struct FString                                     luaPath;                                                  
};

}

