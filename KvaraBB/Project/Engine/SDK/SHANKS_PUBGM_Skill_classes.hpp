#pragma once


 
namespace SDK
{






class UPrivateNodeLuaInterface : public ULuaOverriderInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.PrivateNodeLuaInterface");
		return pStaticClass;
	}


	void SetPrivateUniqueKey(const struct FString& NewKey);
	struct FString GetPrivateUniqueKey();
};




class UUniqueKeyOwnerLuaInterface : public ULuaOverriderInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UniqueKeyOwnerLuaInterface");
		return pStaticClass;
	}

};




class USharedDelegate : public UObject
{
public:
	class UObject*                                     FunctionOuter;                                            
	struct FName                                       FunctionName;                                             
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SharedDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};




class ULuaEventSharedDelegate : public USharedDelegate
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.LuaEventSharedDelegate");
		return pStaticClass;
	}

};




class USharedDelegateManager : public UWorldSubsystem
{
public:
	TMap<struct FSharedDelegateWrap, class USharedDelegate*> DelegateMap;                                              
	TMap<struct FMultiSharedDelegateWrap, class USharedDelegate*> MultiDelegateMap;                                         
	TMap<struct FLuaEventRegistWrap, class ULuaEventSharedDelegate*> LuaEventRegistMap;                                        
	TArray<class USharedDelegate*>                     CacheSharedDelegates;                                     
	TArray<class ULuaEventSharedDelegate*>             CacheLuaEventSharedDelegates;                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SharedDelegateManager");
		return pStaticClass;
	}

};




class USkillNodeLuaInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SkillNodeLuaInterface");
		return pStaticClass;
	}

};




class UUTSkillBaseWidget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	bool                                               bWidgetEnabled;                                           
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     EffectName;                                               
	class AActor*                                      BuffTargetActor;                                          
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               
	class UActorComponent*                             CurOwnerActorComponent;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillBaseWidget");
		return pStaticClass;
	}


	bool IsSetValueAsNewDataWhenNotExist(const struct FName& KeyName);
	class UUAEBlackboard* GetUAEBlackboard();
	class UUTSkillManagerComponent* GetOwnerSkillManager();
	int GetOwnerSkillID();
	class AActor* GetOwnerPawn();
};




class USkillTriggerData : public UUTSkillBaseWidget
{
public:
	TArray<struct FUAEBlackboardKeySelector>           UploadSkillTriggerData;                                   
	TEnumAsByte<EUTSkillEventType>                     CurSkillEvent;                                            
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SkillTriggerData");
		return pStaticClass;
	}


	TEnumAsByte<EUTSkillEventType> GetSkillEventType();
};




class USkillTriggerData_Lua : public USkillTriggerData
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      
	TMap<struct FString, struct FString>               ActionParams;                                             
	bool                                               bEnableLuaPrivateData;                                    
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SkillTriggerData_Lua");
		return pStaticClass;
	}

};




class AUTSkill : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	bool                                               bNeedSync;                                                
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     SkillName;                                                
	struct FName                                       SkillGroup;                                               
	bool                                               bSinglePhaseRep;                                          
	ESkillCastType                                     SkillCastType;                                            
	bool                                               bShouldMonopolize;                                        
	bool                                               bMonopolizeSelf;                                          
	bool                                               bConsumeDelayTask;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                SkillID;                                                  
	int                                                SkillTemplateID;                                          
	unsigned char                                      UnknownData03[0x50];                                      
	bool                                               bMeleeSkill;                                              
	bool                                               bMoveSkill;                                               
	bool                                               bCheckFirstPhaseConditions;                               
	bool                                               bNeedCheckSimulateCondition;                              
	bool                                               bNeedAutonomousClientSimulate;                            
	bool                                               bAutoShowRegisteredSkillUI;                               
	bool                                               bKeepCastingWhenDisconnect;                               
	unsigned char                                      UnknownData04[0x1];                                       
	struct FUTSkillCreateData                          BaseData;                                                 
	bool                                               bCoolDownWhenStop;                                        
	unsigned char                                      UnknownData05[0x3];                                       
	int                                                CoolDownWhenStopIndex;                                    
	bool                                               bUseNewSkillCD;                                           
	unsigned char                                      UnknownData06[0x7];                                       
	TArray<struct FUTSkillBlackboardParameter>         SkillBlackboardParamList;                                 
	bool                                               bSetBlackboardDefaultData;                                
	bool                                               bGsListener;                                              
	bool                                               bRecycleWhenStop;                                         
	bool                                               bHasBlackboradSync;                                       
	unsigned char                                      UnknownData07[0x4];                                       
	struct FString                                     SkillTimeScaleAttrName;                                   
	struct FName                                       SkillTimeScaleBlackboardKey;                              
	class USkillTriggerData*                           SkillTriggerData;                                         
	bool                                               bNeedTick;                                                
	unsigned char                                      UnknownData08[0x7];                                       
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             
	int                                                InstancedNodesTotalSize;                                  
	unsigned char                                      UnknownData09[0x4];                                       
	TArray<struct FString>                             ParentFolderPath;                                         
	int                                                CurComponentNameIndex;                                    
	unsigned char                                      UnknownData10[0xA4];                                      
	TWeakObjectPtr<class UUTSkillManagerComponent>     SpecificSkillCompRef;                                     
	TWeakObjectPtr<class UUAEBlackboard>               SpecificBlackBlackRef;                                    
	class UActorComponent*                             CurOwnerActorComponent;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkill");
		return pStaticClass;
	}


	bool VerifyServerSkillData(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> InEventType);
	void StopSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	void ResetSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	bool OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType, int PhaseIndex);
	bool JumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId);
	bool IsMeleeSkill();
	bool IsEnableSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent);
	bool IsCDOK(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	void HandleVerifyServerSkillDataFail(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> InEventType);
	class UUTSkillManagerComponent* GetSpecificSkillManager();
	class UUAEBlackboard* GetSpecificBlackboard();
	class UUTSkillPhase* GetSkillPhaseByName(const struct FString& PhaseName);
	class UUTSkillPhase* GetSkillPhase(int PhaseIndex);
	int GetSkillID();
	class UUTSkillBaseWidget* GetSkillEffectByPhaseName(const struct FString& PhaseName, const struct FString& EffectName);
	class UUTSkillBaseWidget* GetSkillEffectByPhaseIndex(int PhaseIndex, const struct FString& EffectName);
	float GetSkillDurationScale(class UUTSkillManagerComponent* SkillManagerComponent);
	int GetCurSkillPhaseIndex(class UUTSkillManagerComponent* SkillManagerComponent);
	class UUTSkillPhase* GetCurSkillPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	float GetCoolDownTime(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	void DoSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex);
	ESkillCanBePlayedResult CanBePlayed(class UUTSkillManagerComponent* SkillManagerComponent);
};




class UUTSkillEffect : public UUTSkillBaseWidget
{
public:
	bool                                               bNeedTick;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UObject*>                             CacheSoftObject;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEffect");
		return pStaticClass;
	}


	void UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void OnAsyncLoadSoftPathDone();
	class AUTSkill* GetOwnerSkill();
	void DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool DoAction(class UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped);
};




class UUTSkillAction : public UUTSkillEffect
{
public:
	struct FUTSkillActionCreateData                    BaseData;                                                 
	class UUTSkillAction*                              OwnerPeriodAction;                                        
	unsigned char                                      UnknownData00[0x8];                                       
	class UObject*                                     EventObj;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillAction");
		return pStaticClass;
	}


	void UpdateAction_Internal(float DeltaSeconds);
	void UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoAction_Internal();
	void UndoAction(class UUTSkillManagerComponent* SkillManagerComponent);
	void TimerRealDoAction(class UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped);
	void Reset_Internal();
	void Reset(class UActorComponent* SkillManagerComponent);
	void RealDoHurtAppearance_Internal(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	void RealDoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool RealDoAction_Internal();
	bool RealDoAction(class UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped);
	void OnAsyncLoadAssetDone(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* SkillAppearanceVictim, bool bSkillAppearance);
	bool JudgeNeedPhaseWait();
	void DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool DoAction(class UUTSkillManagerComponent* SkillManagerComponent, bool bCheckSkillStopped);
};




class UUTSkillAction_Lua : public UUTSkillAction
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      
	TMap<struct FString, struct FString>               ActionParams;                                             
	bool                                               bEnableLuaPrivateData;                                    
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillAction_Lua");
		return pStaticClass;
	}


	void ClearLuaPrivateData(class AActor* Actor);
};




class UUTSkillAction_LuaContainer : public UUTSkillAction_Lua
{
public:
	class UUTSkillAction*                              Action;                                                   
	bool                                               bDefaultDoAction;                                         
	bool                                               bDefaultUpdateAction;                                     
	bool                                               bDefaultResetAction;                                      
	bool                                               bDefaultUndoAction;                                       
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillAction_LuaContainer");
		return pStaticClass;
	}


	void UpdateActionInContainer(class UActorComponent* SkillManagerComponent, float DeltaSeconds);
	void UndoActionInContainer(class UActorComponent* SkillManagerComponent);
	void ResetActionInContainer(class UActorComponent* SkillManagerComponent);
	bool RealDoActionInContainer(class UActorComponent* SkillManagerComponent);
};




class UUTSkillBlackboardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillBlackboardInterface");
		return pStaticClass;
	}


	void SetValueAsWeakObject(int SkillID, const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsVector(int SkillID, const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsUInt(int SkillID, const struct FName& KeyName, uint32_t UIntValue);
	void SetValueAsString(int SkillID, const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(int SkillID, const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(int SkillID, const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(int SkillID, const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(int SkillID, const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(int SkillID, const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(int SkillID, const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(int SkillID, const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(int SkillID, const struct FName& KeyName, bool BoolValue);
	bool IsExistWeakObject(int SkillID, const struct FName& KeyName);
	bool IsExistVector(int SkillID, const struct FName& KeyName);
	bool IsExistUInt(int SkillID, const struct FName& KeyName);
	bool IsExistString(int SkillID, const struct FName& KeyName);
	bool IsExistRotator(int SkillID, const struct FName& KeyName);
	bool IsExistObject(int SkillID, const struct FName& KeyName);
	bool IsExistName(int SkillID, const struct FName& KeyName);
	bool IsExistInt(int SkillID, const struct FName& KeyName);
	bool IsExistFloat(int SkillID, const struct FName& KeyName);
	bool IsExistEnum(int SkillID, const struct FName& KeyName);
	bool IsExistClass(int SkillID, const struct FName& KeyName);
	bool IsExistBool(int SkillID, const struct FName& KeyName);
	class UObject* GetValueAsWeakObject(int SkillID, const struct FName& KeyName);
	class AActor* GetValueAsWeakActor(int SkillID, const struct FName& KeyName);
	struct FVector GetValueAsVector(int SkillID, const struct FName& KeyName);
	uint32_t GetValueAsUInt(int SkillID, const struct FName& KeyName);
	struct FString GetValueAsString(int SkillID, const struct FName& KeyName);
	struct FRotator GetValueAsRotator(int SkillID, const struct FName& KeyName);
	class UObject* GetValueAsObject(int SkillID, const struct FName& KeyName);
	struct FName GetValueAsName(int SkillID, const struct FName& KeyName);
	int GetValueAsInt(int SkillID, const struct FName& KeyName);
	float GetValueAsFloat(int SkillID, const struct FName& KeyName);
	unsigned char GetValueAsEnum(int SkillID, const struct FName& KeyName);
	class UClass* GetValueAsClass(int SkillID, const struct FName& KeyName);
	bool GetValueAsBool(int SkillID, const struct FName& KeyName);
	class AActor* GetValueAsActor(int SkillID, const struct FName& KeyName);
	class UUAEBlackboard* GetUAEBlackboardBySkillID(int SkillID);
};




class UUTSkillCDBase : public ULuaObject
{
public:
	TWeakObjectPtr<class UUTSkillManagerComponent>     OwnerSkillManager;                                        
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               
	float                                              TimeScale;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<unsigned char>                              SyncContent;                                              
	bool                                               bIgnoreCastSkillCheck;                                    
	ECDRole                                            CDRole;                                                   
	unsigned char                                      UnknownData01[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillCDBase");
		return pStaticClass;
	}


	void BindLua(const struct FString& luaPath);
};




class UUTSkillCondition : public UUTSkillBaseWidget
{
public:
	bool                                               bTickCheckCondition;                                      
	TEnumAsByte<ESkillConditionRole>                   ConditionRole;                                            
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition");
		return pStaticClass;
	}


	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	bool IsTargetOK(class UActorComponent* SkillManagerComponent, class AActor* Target);
	bool IsOK_Internal();
	bool IsOK(class UActorComponent* SkillManagerComponent);
	class AUTSkill* GetOwnerSkill();
};




class UUTSkillCondition_Lua : public UUTSkillCondition
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      
	TMap<struct FString, struct FString>               ConditionParams;                                          
	bool                                               bEnableLuaPrivateData;                                    
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition_Lua");
		return pStaticClass;
	}

};




class UUTSkillEvent : public UObject
{
public:
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEvent");
		return pStaticClass;
	}

};




class UUTSkillEventEffectMapForEditor : public UUTSkillBaseWidget
{
public:
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FName>                               InterestedOwnerTags;                                      
	class UUTSkillEffect*                              SkillEffect;                                              
	bool                                               bUndoExecute;                                             
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<struct FSkillConditionWarpper>              Conditions;                                               
	TArray<struct FSkillConditionWarpper>              TargetConditions;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEventEffectMapForEditor");
		return pStaticClass;
	}

};




class UUTSkillInstancedNodeContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillInstancedNodeContainerInterface");
		return pStaticClass;
	}

};




class UUTSkillInstancedNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillInstancedNodeInterface");
		return pStaticClass;
	}


	void PostOverrideLua();
};




class UUTSkillInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillInterface");
		return pStaticClass;
	}


	bool IsNeedCheckAutoSkill();
	bool HasSkillToken(int SkillID);
	void HandleSkillStart(int SkillID);
	void HandleSkillEnd(int SkillID, EUTSkillStopReason Reason);
	class UUTSkillManagerComponent* GetSkillManager();
	void ClearSkillToken(int SkillID);
	void ClearAllSkillToken();
	void AddSkillToken(int SkillID);
};




class UUTSkillLocationPickerFilter : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillLocationPickerFilter");
		return pStaticClass;
	}


	bool CheckAdjustLocation(const struct FSkillLocationFilterContext& Context, const struct FVector& InLocation, struct FVector* OutLocation);
};




class UUTSkillLocationPicker : public UUTSkillBaseWidget
{
public:
	TArray<class UUTSkillLocationPickerFilter*>        CheckAdjustFilters;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillLocationPicker");
		return pStaticClass;
	}

};




class UUTSkillManagerComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	class APawn*                                       OwnerPawn;                                                
	unsigned char                                      UnknownData01[0x14];                                      
	int                                                NetAutoSkillID;                                           
	unsigned char                                      UnknownData02[0x8];                                       
	bool                                               bEnableSkillCoolDown;                                     
	bool                                               bGMDirectTriggerSkill;                                    
	unsigned char                                      UnknownData03[0x6];                                       
	class AActor*                                      OwnerActor;                                               
	bool                                               DestroySkillsOnDie;                                       
	unsigned char                                      UnknownData04[0x7];                                       
	TMap<int, TWeakObjectPtr<class AUTSkill>>          SkillIDToSkills;                                          
	TMap<int, class UUAEBlackboard*>                   SkillIDBlackboardMap;                                     
	TMap<TWeakObjectPtr<class AActor>, class UUAEBlackboard*> ActorBlackboardMap;                                       
	struct FScriptMulticastDelegate                    ChangeActorBlackboard;                                    
	TMap<int, struct FUTSkillRuntimeData>              SkillBaseDataMaps;                                        
	TArray<struct FUTSkillLastCastInfo>                LastCastArray;                                            
	struct FScriptMulticastDelegate                    OnSkillCast;                                              
	struct FSkillActiveRepData                         SyncSkillActiveStateDatas;                                
	struct FSkillAttrRepData                           SyncSkillAttrRepData;                                     
	struct FSkillDynamicRepData                        SyncDynamicRepData;                                       
	TMap<int, int>                                     IDToSyncSkillCDDatas;                                     
	TMap<int, int>                                     ButtonSlotToSkillID;                                      
	struct FTeammateSkillCDRepData                     TeammateSkillCDRepData;                                   
	TMap<int, int>                                     SkillID2PackageIndex;                                     
	unsigned char                                      UnknownData05[0x8];                                       
	TArray<struct FSkillCDRepData>                     SyncSkillCDDatas;                                         
	unsigned char                                      UnknownData06[0x90];                                      
	struct FUTSkillHitInfo                             SkillHitInfo;                                             
	struct FUTSkillHitEnvInfo                          SkillHitEnvInfo;                                          
	TArray<struct FString>                             MutexMontageGroupBeenPlayed;                              
	unsigned char                                      UnknownData07[0x4];                                       
	int                                                SkillSynRandomSeed;                                       
	struct FRandomStream                               SkillSynRandStream;                                       
	int                                                SkillSynRandomSeedExpireCount;                            
	unsigned char                                      UnknownData08[0x4];                                       
	TArray<struct FSkillParamater>                     SkillParamaters;                                          
	struct FScriptMulticastDelegate                    OnSkillInitSignature;                                     
	struct FScriptMulticastDelegate                    InitOneSkillEvent;                                        
	struct FScriptMulticastDelegate                    DeleteOneSkillEvent;                                      
	struct FScriptMulticastDelegate                    SkillStartEvent;                                          
	struct FScriptMulticastDelegate                    SkillStopEvent;                                           
	struct FScriptMulticastDelegate                    SkillPhaseChangeEvent;                                    
	struct FScriptMulticastDelegate                    SkillLevelChangeEvent;                                    
	struct FScriptMulticastDelegate                    SkillSkinIDChangeEvent;                                   
	struct FScriptMulticastDelegate                    SkillDoCoolDownEvent;                                     
	struct FScriptMulticastDelegate                    SkillUpdateCDEvent;                                       
	TArray<int>                                        PendingRemoveSkillID;                                     
	unsigned char                                      UnknownData09[0x50];                                      
	TArray<struct FUTReplaceSkillData>                 ReplacedSkillDatas;                                       
	TMap<int, struct FSkillDisableKeySet>              DisableSkillTagsMap;                                      
	TMap<int, struct FSkillDisableKeySet>              DisableSkillIDsMap;                                       
	struct FScriptMulticastDelegate                    OnSkillDisableChangeDelegate;                             
	TMap<int, struct FSkillLimitKeySet>                LimitSkillTagsMap;                                        
	TMap<int, struct FSkillLimitKeySet>                LimitSkillIDMap;                                          
	struct FMultiSkillSynData                          NewSkillSynData;                                          
	struct FSkillSinglePhaseData                       NewSkillSinglePhaseData;                                  
	unsigned char                                      UnknownData10[0x8];                                       
	struct FScriptMulticastDelegate                    OnSkillEventDelegate;                                     
	TMap<uint64_t, struct FUTSkillSimulateData>        SkillSimulateDataMap;                                     
	unsigned char                                      UnknownData11[0x50];                                      
	struct FUTSkillExecQueue                           SkillExecQueue;                                           
	struct FUTSkillEventHistory                        SkillEventHistory;                                        
	struct FUTSkillComboState                          SkillComboState;                                          
	int                                                AsyncSkillComboSkillID;                                   
	int                                                AsyncSkillComboCount;                                     
	uint64_t                                           NetClientSimulateInstID;                                  
	unsigned char                                      UnknownData12[0x10];                                      
	struct FScriptMulticastDelegate                    CreativeSkillDelegate;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillManagerComponent");
		return pStaticClass;
	}


	void UpdateSyncSkillCDData(int SkillID, int CDIndex);
	void UnRegisterActorBlackBorad(class AActor* InActor);
	void TryDeleteOneSkill(int SkillID, bool IsImmediately, bool bResetCD);
	void TryAddOneSkill(int SkillID, bool bActive, int ButtonSlot);
	bool TriggerSkillWithParams(int SkillID, TArray<struct FString> InKeyStrings, bool bEnable);
	bool TriggerSkillWithID(int SkillID, bool bEnable);
	bool TriggerLocalEventWithID(TEnumAsByte<EUTSkillEventType> SkillEventType, int SkillID);
	bool TriggerEventWithID(TEnumAsByte<EUTSkillEventType> SkillEventType, int SkillID);
	void TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	bool TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class AActor** TargetActor);
	void SyncOneSkillState(bool RepSkillCD, bool RepSkillActiveState, int RequestID);
	void StopSkillAll(EUTSkillStopReason StopReason);
	void StopSkill(int SkillID, EUTSkillStopReason StopReason);
	void StopCurSkill(EUTSkillStopReason StopReason);
	void StopAllMonopolizeSkill(EUTSkillStopReason StopReason);
	bool SetupOwnerAndSystem();
	void SetSkillTagsLimit(TArray<int> SkillTags, bool bLimit, const struct FString& TriggerKey);
	void SetSkillTagsDisable(TArray<int> SkillTags, bool bDisable, const struct FString& TriggerKey);
	bool SetSkillSkinID(int SkillID, int InSkillSkinID);
	void SetSkillOwner(class AActor* tempActor);
	bool SetSkillLevel(int SkillID, int SkillLevel);
	void SetSkillIDsLimit(TArray<int> SkillIDs, bool bLimit, const struct FString& TriggerKey);
	void SetSkillIDsDisable(TArray<int> SkillIDs, bool bDisable, const struct FString& TriggerKey);
	void SetSkillCDTimeScale(int SkillID, float Scale, int ScaleType);
	void SetSkillCDIndexTimeScale(int SkillID, int SkillCDIndex, float Scale, int ScaleType);
	bool SetSkillActive(int SkillID, bool bActive, bool bForceSet, int ButtonSlot);
	void SetAutoSkillID(int InSkillID);
	void SetAllSkillCDTimeScale(float Scale);
	void ServerTriggerEvent_WithParamsAndTssData(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> Content, TArray<unsigned char> TssData, uint64_t PackageIndex);
	void ServerTriggerEvent_WithParams(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> Content, uint64_t PackageIndex);
	void ServerTriggerEvent_WithIDAndTssData(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> TssData, uint64_t PackageIndex);
	void ServerTriggerEvent_WithID(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, uint64_t PackageIndex);
	void ServerTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void ServerStopSkillCombo(int SkillID);
	void ServerStopSkill(int SkillID, EUTSkillStopReason StopReason);
	void ServerStopAllSkill(EUTSkillStopReason StopReason);
	void ServerStopAllMonopolizeSkill(EUTSkillStopReason StopReason);
	bool ServerStartSkill(int SkillID, bool bAutoCast);
	void ServerNotifyRandomSeed(int Seed);
	void ResetTeammateSkillCDData();
	void ResetSkillCoolDown(int SkillID, int CDIndex);
	void ResetSkill(bool bStopAllSkill, bool bDeactivateAllSkill, bool bResetSkillCD);
	void ResetAllSkillCoolDown();
	void RequestSkillStates(bool RepSkillCD, bool RepSkillActiveState);
	void RepSkillHitInfo();
	void RepLastCastTime();
	void ReplaceSkill(int OldSkillID, int NewSkillID);
	void RemoveReplacedSkill(int OldSkillID);
	void RemoveAllSkillUIWidget();
	void RegisterActorBlackBorad(class AActor* InActor, class UUAEBlackboard* RegisterBlackboard);
	void RefreshSkillRepData();
	void RecordSkillException(class AActor* InActor, int InSkillID, TEnumAsByte<ENetRole> InRole, const struct FString& InNetMode, const struct FString& InFuncName);
	int RandRangeSyn(int StartIndex, int EndIndex);
	class AUTSkill* QuerySkill(int SkillID);
	class AUTSkill* QueryOrNewSkill(int SkillID);
	void PreTriggerSkillEvent(int InSkillID);
	void PostTriggerSkillEvent(int InSkillID);
	void PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo);
	void OnStopSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	void OnRespawned();
	void OnRep_SkillHitInfo();
	void OnRep_SkillCDDatas();
	void OnRep_SkillAttrRepData();
	void OnRep_SkillActiveState();
	void OnRep_ReplaceSkill();
	void OnRep_NewSkillSynData();
	void OnRep_NewSkillSinglePhaseData();
	void OnRep_NetClientSimulateInstID();
	void OnRep_NetAutoSkillID();
	void OnRep_EnableSkillEncrypt();
	void OnRep_DynamicRepData();
	void OnRep_AsyncSkillComboSkillID();
	void OnRep_AsyncSkillComboCount();
	void OnRecycled();
	void OnInterruptSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason);
	void NewUAEBlackboard(int SkillID);
	bool NeedSimulateStoppedNewSkill(int InSkillID);
	void LocalTriggerNewSkillFail(class AUTSkill* InNewSkill, uint64_t InstID);
	void LocalStopSkillAllWithExcludeArray(TArray<int> InExcludeArry, EUTSkillStopReason StopReason);
	bool IsSkillNeedPackageVerify(int SkillID);
	bool IsSkillInit(int InSkillID);
	bool IsSkillIDDisable(int InSkillID);
	bool IsSkillCanUse();
	bool IsSkillActived(int SkillID);
	bool IsReadyToCastSkill(int SkillID);
	bool IsPendingCastSkillID(int InSkillID);
	bool IsPendingCastSkill();
	bool IsEnableSkillCoolDown();
	bool IsCurrentUseSkillID(int InSkillID);
	bool IsCastingSkillTag(int InSkillTag);
	bool IsCastingSkillID(int InSkillID);
	bool IsCastingSkill();
	bool HasSkillEventFromLastCast(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void HandleTriggerParamsEventFail(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	bool HandleTriggerParamsEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void HandleSkillStop(int SkillID, class AUTSkill* InSkill, EUTSkillStopReason StopReason);
	void HandleSkillStart(int SkillID, class AUTSkill* InSkill);
	bool HandleGMDirectTriggerSkillEvent(int SkillID, int SkillPlayRet);
	class UUAEBlackboard* GetUAEBlackboardBySkillID(int SkillID);
	class UUAEBlackboard* GetUAEBlackboard(class AUTSkill* InSkill);
	class UUTSkillWidget* GetSkillWidget(int SkillID);
	TArray<struct FString> GetSkillSynDataString(const struct FString& PrefixText, bool bWithLastData);
	int GetSkillSlotBySkillID(int SkillID);
	int GetSkillSlotBySkill(class AUTSkill* Skill);
	int GetSkillSkinID(int SkillID);
	TArray<struct FString> GetSkillSinglePhaseDataString(const struct FString& PrefixText, bool bWithLastData);
	TArray<class AUTSkill*> GetSkillsByGroup(const struct FName& SkillGroup);
	int GetSkillLevel(int SkillID);
	int GetSkillIDByClass(class UClass* SkillClass);
	TArray<struct FString> GetSkillExecString();
	bool GetSkillEventTimestamp(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, float* OutTimestamp);
	int GetSkillCurPhase(class AUTSkill* Skill);
	class AUTSkill* GetSkillByName(const struct FString& SkillName);
	class AUTSkill* GetSkillByClassName(const struct FString& SkillClassName);
	int GetSkillButtonSlot(int SkillID);
	struct FUTSkillRuntimeData GetSkillBaseData(int SkillID);
	class AUTSkill* GetSkill(int SkillID);
	int GetReplacedSkill(int OldSkillID);
	TEnumAsByte<ENetRole> GetRealOwnerRoleSafety();
	TEnumAsByte<ESkillMutexType> GetMutexRelation(class AUTSkill* CurSkill, class AUTSkill* NewSkill);
	float GetLastCastTime(int SkillID);
	float GetLastCastFinishTime(int SkillID);
	TArray<class AUTSkill*> GetCurSkills();
	class UUTSkillPhase* GetCurSkillPhase();
	int GetCurSkillID(class AUTSkill* Skill);
	class AUTSkill* GetCurSkill();
	TArray<int> GetCurMonopolizeSkills();
	class UUTSkillPhase* GetCurMonopolizedSkillPhase();
	class AUTSkill* GetCurMonopolizedSkill();
	TArray<int> GetCurAllSkillIDs();
	float GetCoolDownTime(int SkillID, int CoolDownIndex);
	TArray<int> GetCastingSkillIDs();
	int GetButtonSlotSkillID(int ButtonSlot);
	void DynamicRemoveSkill(int InSkillID);
	void DynamicAddSkill(int InSkillID);
	void ClientTriggerEventSuccess_WithID(int SkillID, uint64_t PackageIndex);
	void ClientTriggerEventFailed_WithID(int SkillID, ETriggerSkillFailed FailedReason, uint64_t PackageIndex);
	void ClientStopPreActionSkill(int SkillID, uint64_t InstID);
	void ClientStopOneSkill(uint64_t InstID, bool bSinglePhaseRep, EUTSkillStopReason StopReason);
	void ClientStartSkill(int SkillID, bool bAutoCast);
	void ClientSimulateOneSkill(uint64_t InstID, int SkillID, int PhaseIndex, bool bSinglePhaseRep);
	void ClearSkill(bool bStopAllSkill, bool bDeactivateAllSkill, bool bResetSkillCD);
	void ClearRepParams();
	void ClearInitParams();
	bool CheckAIIsCDOKBySkillID(int SkillID, int CoolDownIndex);
	void CacheSkillWidget(int SkillID, class UUTSkillWidget* Widget);
	void AddOrRemoveIngoreSkillIDWhenStopAllSkills(EUTSkillStopReason InStopReason, int InSkillID, bool bAdd);
};




class UUTSkillNodeBlackboardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillNodeBlackboardInterface");
		return pStaticClass;
	}


	void SetValueAsWeakObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsUInt(const struct FName& KeyName, uint32_t UIntValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsSetValueAsNewDataWhenNotExist(const struct FName& KeyName);
	bool IsExistWeakObject(const struct FName& KeyName);
	bool IsExistVector(const struct FName& KeyName);
	bool IsExistUInt(const struct FName& KeyName);
	bool IsExistString(const struct FName& KeyName);
	bool IsExistRotator(const struct FName& KeyName);
	bool IsExistObject(const struct FName& KeyName);
	bool IsExistName(const struct FName& KeyName);
	bool IsExistInt(const struct FName& KeyName);
	bool IsExistFloat(const struct FName& KeyName);
	bool IsExistEnum(const struct FName& KeyName);
	bool IsExistClass(const struct FName& KeyName);
	bool IsExistBool(const struct FName& KeyName);
	class UObject* GetValueAsWeakObject(const struct FName& KeyName);
	class AActor* GetValueAsWeakActor(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	uint32_t GetValueAsUInt(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	class AActor* GetValueAsActor(const struct FName& KeyName);
	class UUAEBlackboard* GetUAEBlackboard();
	void AddValueByKeySelector(TEnumAsByte<EUAEBlackboardType> BBType, const struct FUAEBlackboardKeySelector& Key);
	void AddValueByKeName(TEnumAsByte<EUAEBlackboardType> BBType, const struct FName& KeyName);
};




class UUTSkillPhase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	struct FString                                     PhaseName;                                                
	bool                                               bPhaseEnabled;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               
	int                                                PhaseIndex;                                               
	int                                                ActionsTopHalfCount;                                      
	unsigned char                                      UnknownData02[0x4];                                       
	struct FUTSkillPhaseCreateData                     BaseData;                                                 
	bool                                               bNeedTick;                                                
	unsigned char                                      UnknownData03[0x7];                                       
	class UUTSkillPicker*                              InEffectPickerOnAction;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillPhase");
		return pStaticClass;
	}


	bool TryJumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId);
	void StopPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void StartPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	void RepeatPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	bool PlaySkillHurtEffect(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	bool PlaySkillHurtAppearances(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim);
	void PickTargets(class UUTSkillManagerComponent* SkillManagerComponent);
	bool OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType);
	bool OnCustomEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType);
	bool ForceStopPhase(class UUTSkillManagerComponent* SkillManagerComponent);
	bool ClearAttachments();
};




class UUTSkillPickerFilter : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillPickerFilter");
		return pStaticClass;
	}


	bool IsValidFilterActor(class AActor* InActor, class AActor* Owner);
	void HandleFilterArray(class AActor* Owner, TArray<struct FUTSkillPickedTarget>* inArray);
};




class UUTSkillPicker : public UUTSkillBaseWidget
{
public:
	struct FUTSkillPickerCreateData                    BaseData;                                                 
	TArray<class UClass*>                              FilterTemplates;                                          
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<struct FUTSkillPickedTarget>                PickedResultTargets;                                      
	TArray<class UUTSkillPickerFilter*>                Filters;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillPicker");
		return pStaticClass;
	}


	bool PickTargetsInner(const struct FVector& OriginPoint);
	bool PickTargets(const struct FVector& OriginPoint);
};




class UUTSkillFunctionBase : public UUTSkillBaseWidget
{
public:
	struct FSkillFuncNameSelector                      DoActionFuncKey;                                          
	struct FSkillFuncNameSelector                      UndoActionFuncKey;                                        
	struct FSkillFuncNameSelector                      ConditionFuncKey;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillFunctionBase");
		return pStaticClass;
	}

};




class UUTSkillSpecificAction : public UUTSkillAction
{
public:
	struct FSkillFuncNameSelector                      DoActionFuncKey;                                          
	struct FSkillFuncNameSelector                      ResetActionFuncKey;                                       
	struct FSkillFuncNameSelector                      UndoActionFuncKey;                                        
	struct FString                                     DoActionLuaFunc;                                          
	struct FString                                     ResetActionLuaFunc;                                       
	struct FString                                     UndoActionLuaFunc;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillSpecificAction");
		return pStaticClass;
	}


	void UpdateAction_Internal(float DeltaSeconds);
	void UndoAction_Internal();
	void Reset_Internal();
	bool RealDoAction_Internal();
	void PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
	void PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill);
};




class UUTSkillSpecificCondition : public UUTSkillCondition
{
public:
	struct FSkillFuncNameSelector                      ConditionFuncKey;                                         
	struct FString                                     LuaConditionFunc;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillSpecificCondition");
		return pStaticClass;
	}

};




class USkillUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.SkillUtil");
		return pStaticClass;
	}

};




class UUTSkillWidget : public ULuaUAEUserWidget
{
public:
	class UUTSkillManagerComponent*                    SkillManager;                                             
	int                                                SkillID;                                                  
	float                                              TickInterval;                                             
	bool                                               bEnableTick;                                              
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillWidget");
		return pStaticClass;
	}


	void SetSkillManager(class UUTSkillManagerComponent* Manager);
	void SetSkillID(int InSkillID);
	void RemoveSelf();
	class UUTSkillManagerComponent* GetSkillManager();
	int GetSkillID();
	TArray<class UUTSkillCDBase*> GetSkillCDBases();
	class AUTSkill* GetSkill();
	class APlayerController* GetLocalPlayerController();
	void BindLua(const struct FString& luaPath);
};


}

