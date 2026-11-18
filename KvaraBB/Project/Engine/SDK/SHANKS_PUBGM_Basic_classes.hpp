#pragma once


 
namespace SDK
{






class APlayerActorChannelExActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PlayerActorChannelExActor");
		return pStaticClass;
	}

};




class APlayerReliableSequentialSyncActor : public APlayerActorChannelExActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class APlayerController*                           OwningController;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PlayerReliableSequentialSyncActor");
		return pStaticClass;
	}


	void OnActorSpawned(class AActor* Actor);
};




class AUAENetActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	int                                                iRegionActor;                                             
	bool                                               bStaticAddNetworkActor;                                   
	unsigned char                                      AutoDormancyType;                                         
	unsigned char                                      UnknownData01[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetActor");
		return pStaticClass;
	}


	void ReceivedPlayerActiveRegionsChanged(bool bEnter);
};




class UOnlyActorComponent : public UActorComponent
{
public:
	unsigned char                                      bCanEverUpdate;                                           
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OnlyActorComponent");
		return pStaticClass;
	}

};




class UUAEAnimListComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      
	TMap<int, struct FAnimListMapValueData>            AnimListMap;                                              
	TArray<class UAnimationAsset*>                     AnimationCacheList;                                       
	unsigned char                                      UnknownData01[0x38];                                      
	bool                                               bDisableAnimListOnDS;                                     
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEAnimListComponentBase");
		return pStaticClass;
	}

};




class UItemHandleBase : public UObject
{
public:
	int                                                Count;                                                    
	int                                                MaxCount;                                                 
	bool                                               bUnique;                                                  
	bool                                               bStackable;                                               
	bool                                               bSingle;                                                  
	bool                                               bDisableUse;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<int, struct FItemAssociation>                 AssociationMap;                                           
	struct FItemDefineID                               DefineID;                                                 
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemHandleBase");
		return pStaticClass;
	}


	void SetAssociation(int AssociationType, const struct FItemAssociation& Association);
	void RemoveAssociation(int AssociationType);
	void Init(const struct FItemDefineID& InDefineID);
	struct FItemDefineID GetDefineID();
	TMap<int, struct FItemAssociation> GetAssociationMap();
	TArray<struct FItemAssociation> GetAssociationListByTargetType(int Type);
	struct FItemAssociation GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID);
	struct FItemAssociation GetAssociation(int AssociationType);
	void Constuct(const struct FItemDefineID& InDefineID);
	void CollectionNeedLoadSoftPath(TArray<struct FSoftObjectPath>* OutSoftPathList);
	void AddAssociation(int AssociationType, const struct FItemAssociation& Association);
};




class UBattleItemHandleBase : public UItemHandleBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	bool                                               bEquipping;                                               
	EItemStoreArea                                     ItemStoreArea;                                            
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           
	bool                                               bDropOnDead;                                              
	bool                                               bDropWhenDisuse;                                          
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              UnitWeight;                                               
	bool                                               bEquippable;                                              
	bool                                               bConsumable;                                              
	bool                                               bAutoEquipAndDrop;                                        
	unsigned char                                      UnknownData03[0x1];                                       
	int                                                ItemAttrsFlag;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BattleItemHandleBase");
		return pStaticClass;
	}


	void UpdateAttributeModify(bool bEnable);
	bool UnEquip();
	bool ShouldDropInDisuse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FItemDefineID& CurrentPickupItemDefineID, const struct FItemDefineID& ThisItemDefineID, int KeptCount, EBattleItemDisuseReason Reason);
	bool HanldePickupAssociationData(TArray<struct FBattleItemAdditionalData> PickupAdditionalData);
	bool HanldeDropAssociationData();
	bool HanldeCleared();
	bool HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	bool HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	bool HandleEnable(bool bEnable);
	bool HandleDrop(int InCount, EBattleItemDropReason Reason);
	bool HandleDisuse(EBattleItemDisuseReason Reason);
	bool HandleChangeItemStoreArea(EItemStoreArea InItemStoreArea);
	bool HandleBindToTargetItem();
	class UWorld* GetWorldInternal();
	class UWorld* GetCurrentWorld();
	struct FBattleItemData ExtractItemData();
	void ClearAdditionalDataByType(EBattleItemAdditionalDataType DataType);
	void ClearAdditionalData();
	bool CheckCanUse(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
};




class UUAEGameInstance : public UGameInstance
{
public:
	struct FClientBaseInfo                             ClientBaseInfo;                                           
	struct FScriptMulticastDelegate                    EnginePreTick;                                            
	unsigned char                                      UnknownData00[0x68];                                      
	class UFrontendHUD*                                AssociatedFrontendHUD;                                    
	unsigned char                                      UnknownData01[0x8];                                       
	class ULuaStateWrapper*                            LuaStateWrapper;                                          
	bool                                               bStandAloneFromLobby;                                     
	unsigned char                                      UnknownData02[0x27];                                      
	struct FScriptMulticastDelegate                    OnPreBattleResult;                                        
	unsigned char                                      UnknownData03[0x10];                                      
	TArray<struct FString>                             HighWeatherNames;                                         
	int                                                HighWeatherMinRenderQuality;                              
	int                                                HighWeatherMaxRenderQuality;                              
	int                                                ModeID;                                                   
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     ModType;                                                  
	struct FString                                     ModType2;                                                 
	TArray<struct FString>                             ExtraModules;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEGameInstance");
		return pStaticClass;
	}


	void SetModeID(int InModeID);
	void SetLuaStateWrapper(class ULuaStateWrapper* TLuaStateWrapper);
	void SetExtraModules(TArray<struct FString> InExtraModules);
	void OpenAssetLoadLog();
	void OnPreBattleResult__DelegateSignature();
	void LuaLeakDetect();
	void LuaDoString(const struct FString& LuaString);
	float GetWeatherTime();
	struct FString GetWeatherLevelName();
	int GetWeatherID();
	struct FString GetModType2();
	struct FString GetModType();
	int GetModeID();
	class ULuaStateWrapper* GetLuaStateWrapper();
	struct FString GetLoadWeatherName(const struct FString& InWeatherName);
	bool GetIsHighWeatherLevel(const struct FString& InWeatherLevelName);
	struct FString GetGameID();
	struct FString GetExtraModulesString();
	TArray<struct FString> GetExtraModules();
	int GetDeviceLevel();
	class UUAEDataTable* GetDataTable_Mod(const struct FString& tableName);
	class UUAEDataTable* GetDataTable(const struct FString& tableName);
	class UFrontendHUD* GetAssociatedFrontendHUD();
	void CloseAssetLoadLog();
};




class UUAENetBunchQueueSystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetBunchQueueSystem");
		return pStaticClass;
	}

};




class UUAEBaseSkillCondition : public UUTSkillCondition
{
public:
	class APawn*                                       OwnerPawnForBuff;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEBaseSkillCondition");
		return pStaticClass;
	}

};




class UAttrModifyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      
	int                                                ConfigAutoAddAttId;                                       
	unsigned char                                      UnknownData01[0xA4];                                      
	TArray<struct FAttrModifyItem>                     ConfigAttrModifyList;                                     
	unsigned char                                      UnknownData02[0xA0];                                      
	uint32_t                                           AttrModifyStateList;                                      
	unsigned char                                      UnknownData03[0x74];                                      
	struct FRepAttributeModify                         DynamicModifierRep;                                       
	struct FRepAttributeModify                         DynamicModifierRepOnlyOwner;                              
	unsigned char                                      UnknownData04[0x20];                                      
	struct FScriptMulticastDelegate                    OnAttrModified;                                           
	struct FScriptMulticastDelegate                    OnAttrRemoved;                                            
	struct FAttrDynamicModifier                        DynamicModifier;                                          
	unsigned char                                      UnknownData05[0x50];                                      
	TArray<struct FAttributeExpand>                    AttributeExpands;                                         
	bool                                               bAddReserveNum;                                           
	unsigned char                                      UnknownData06[0x7];                                       
	TMap<struct FString, struct FRelateAttributeGroup> RelateAttributeGroup;                                     
	EActorRegAttrTableType                             ActorAttrType;                                            
	unsigned char                                      UnknownData07[0x10F];                                     
	TArray<struct FModAttrSimulateSyncItem>            ModSimulateSyncList;                                      
	unsigned char                                      UnknownData08[0x108];                                     
	struct FScriptMulticastDelegate                    OnNeedSetSpeedOverLimit;                                  
	unsigned char                                      UnknownData09[0xF8];                                      
	TArray<struct FAttrModifyRecordItem>               ExceptionAttrModifyRecords_DS;                            
	TArray<struct FAttrModifyRecordItem>               ExceptionAttrModifyRecords_Client;                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.AttrModifyComponent");
		return pStaticClass;
	}


	bool SwitchAttrModifierByIndex(int ModifyConfigIndex, bool Enable);
	bool SwitchAttrModifier(const struct FString& AttrModifyItemName, bool Enable);
	void StartTimerToSyncRecordAttrValue(float Time);
	void SetValueToAttributeSafety(const struct FString& AttrName, float Value, int ModifyRecordType);
	void SetOrignalValueToAttribute(const struct FString& AttrName, float Value);
	void SetOrignalValueAndBaseValue(const struct FString& AttrName, float Value);
	void SetAttrModifyStateValue(int Index, bool Value);
	void SetAttributeMinValue(const struct FString& AttrName, float MinValue);
	void SetAttributeMaxValue(const struct FString& AttrName, float MaxValue);
	void ServerSendExceptionType(const struct FString& AttrName, int ExceptionType);
	void ServerRequestRecordAttrValue(const struct FString& AttrName);
	void ResponeAttrValue(const struct FString& AttrName, float FinalValue);
	void RequestAttrValue(const struct FString& AttrName);
	bool RemoveModifyItemFromCache(uint32_t ModifyUID);
	void RemoveAttrListener(const struct FString& AttrName, const struct FSluaBPVar& Listener);
	void RemoveAllDynamicModifier(bool bForce);
	bool RegisterModifyAbleAttr(bool bSetAttrByOrigin, TArray<struct FAttrRegisterItem>* AttrRegists);
	void RegistAttrModifyRecordList(const struct FString& AttrName, int RecordLen);
	void RegCurrentModAttrs();
	void RefreshAttributeModify(const struct FString& AttrName);
	void PushAttrModifyRecordItem(const struct FString& AttrName, float PreValue, float CurValue, int ModifyRecordType, const struct FString& ModifyDesc);
	void OnRep_ModSimulateSyncList();
	void OnRep_ExceptionAttrModifyRecords();
	void OnRep_DynamicModifier();
	void OnRep_AttrModifyStateList();
	void OnNeedSetSpeedOverLimit__DelegateSignature();
	void OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS);
	void LuaSetValueToAttributeSafety(const struct FString& AttrName, float Value);
	bool IsAttrModifyStateValidIndex(int Index);
	void InitializeRelateAttributeExpands();
	bool HasDynamicModifier(const struct FString& AttrModifyId);
	void HandleExceptionAttrModify(const struct FString& AttrName, int ExceptionType);
	class UAttrModifyModDataSubsystem* GetSubsystem();
	struct FString GetMaxAttrName(const struct FString& AttrName);
	bool GetAttrModifyStateValue(int Index);
	int GetAttrModifyStateNum();
	struct FAttrModifyItem GetAttrModifyItemByItemName(const struct FString& ItemName);
	float GetAttributeValue(const struct FString& AttrName);
	float GetAttributeOrignalValue(const struct FString& AttrName);
	float GetAttributeMaxValue(const struct FString& AttrName);
	struct FString GetAttrDynamicModifyTargetString(const struct FAttrDynamicModifyTarget& DynamicModifyTarget);
	struct FString GetAttrDynamicModifyItemString(const struct FAttrDynamicModifyItem& DynamicModifyItem);
	bool EnableAttrModifierByIndex(int ModifyConfigIndex);
	bool EnableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAttrModifierByIndex(int ModifyConfigIndex);
	bool DisableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAllAttrModifier(bool bForce);
	void ConditionSyncRecordAttrValue();
	void ClientSyncRecordAttrValue(TArray<struct FAttrDesc> AttrDescs);
	void ClientSendRecordData(const struct FAttrModifyRecordItem& RecordItem, int ExceptionType);
	void ClearAllAttrModify();
	void AddValueToAttribute(const struct FString& AttrName, float Value);
	uint32_t AddModifyItemAndCache(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue, bool bEnable, class UObject* Causer, bool bOldModify);
	void AddDynamicModifier(bool RepOnlyOwner, struct FAttrModifyItem* AttrModifyItem);
	uint32_t AddBModifyAndCacheWithCParam(const struct FString& AttrName, EAttrModifyRefType CModifyType, float CValue, bool ClientSimulate);
	uint32_t AddBModifyAndCache(const struct FString& AttrName, EAttrOperator ModifyType, float Value, bool ClientSimulate);
	void AddAttrListener(const struct FString& AttrName, const struct FSluaBPVar& Listener);
};




class UAttrModifyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.AttrModifyInterface");
		return pStaticClass;
	}


	void SetAttrValue(const struct FString& AttrName, float NewVal, int Reason);
	void RequestAttrValue(const struct FString& AttrName);
	void RegisterModifiedAttributes();
	float GetAttrValue(const struct FString& AttrName);
	TArray<class AActor*> GetAttrModifyRelevantActors();
	class UAttrModifyComponent* GetAttrModifyComponent();
	float GetAttributeValue(const struct FString& AttrName);
	void AddAttrValue(const struct FString& AttrName, float AddVal, int Reason);
};




class UAttrModifyModDataSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x158];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.AttrModifyModDataSubsystem");
		return pStaticClass;
	}

};




class UBCDataTable : public UObject
{
public:
	class UScriptStruct*                               BigRowStruct;                                             
	unsigned char                                      UnknownData00[0x68];                                      
	class UUAEDataTable*                               FixedTable;                                               
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BCDataTable");
		return pStaticClass;
	}

};




class UBlueprintFunctionOverride : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BlueprintFunctionOverride");
		return pStaticClass;
	}

};




class ULuaDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaDataAsset");
		return pStaticClass;
	}

};




class UBPClassManager : public ULuaDataAsset
{
public:
	TArray<struct FBPClassItem>                        BPClassList;                                              
	unsigned char                                      UnknownData00[0x50];                                      
	TMap<class UClass*, struct FBPClassItemMap>        BPClassLookUpOverride;                                    
	unsigned char                                      UnknownData01[0x50];                                      
	TMap<struct FString, struct FBPClassItemMap>       BPClassNameLookUpOverride;                                
	struct FString                                     BPClassManagerPath;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BPClassManager");
		return pStaticClass;
	}


	void ModifyClass(class UClass* InNativeClass, const struct FString& BPClassPath, const struct FString& ModTag);
	class UClass* GetUClass(int KeyIndex);
	class UClass* GetBPClassOverrideByName(const struct FString& ClassTagName, const struct FString& ModTag);
	class UClass* GetBPClassOverride(class UClass* InNativeClass, const struct FString& ModTag);
	static class UBPClassManager* Get();
};




class UBudgetSchedulerSettings : public UDeveloperSettings
{
public:
	TArray<struct FBudgetSchedulerChannelConfig>       Channels;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BudgetSchedulerSettings");
		return pStaticClass;
	}

};




class UBuffConfigSubsystem : public UBattleSubsystem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	TMap<struct FString, class UClass*>                BuffClassMap;                                             
	unsigned char                                      UnknownData01[0x110];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BuffConfigSubsystem");
		return pStaticClass;
	}


	void ReloadTable(class UWorld* World);
	void ClearTable();
};




class UBuffNodeLuaInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BuffNodeLuaInterface");
		return pStaticClass;
	}

};




class UBuffUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BuffUtils");
		return pStaticClass;
	}


	static bool IsRoleOK(EBuffEnabledRole EnabledRole, class UActorComponent* OwnerComponent);
};




class UCommonMessageDataLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.CommonMessageDataLibrary");
		return pStaticClass;
	}


	static void SetVectorArray(unsigned char Index, TArray<struct FVector> Values, struct FCommonMessageData* Target);
	static void SetVector4Array(unsigned char Index, TArray<struct FVector4> Values, struct FCommonMessageData* Target);
	static void SetVector4(unsigned char Index, const struct FVector4& Value, struct FCommonMessageData* Target);
	static void SetVector2DArray(unsigned char Index, TArray<struct FVector2D> Values, struct FCommonMessageData* Target);
	static void SetVector2D(unsigned char Index, const struct FVector2D& Value, struct FCommonMessageData* Target);
	static void SetVector(unsigned char Index, const struct FVector& Value, struct FCommonMessageData* Target);
	static void SetTransformArray(unsigned char Index, TArray<struct FTransform> Values, struct FCommonMessageData* Target);
	static void SetTransform(unsigned char Index, const struct FTransform& Value, struct FCommonMessageData* Target);
	static void SetStringArray(unsigned char Index, TArray<struct FString> Values, struct FCommonMessageData* Target);
	static void SetString(unsigned char Index, const struct FString& Value, struct FCommonMessageData* Target);
	static void SetRotatorArray(unsigned char Index, TArray<struct FRotator> Values, struct FCommonMessageData* Target);
	static void SetRotator(unsigned char Index, const struct FRotator& Value, struct FCommonMessageData* Target);
	static void SetQuatArray(unsigned char Index, TArray<struct FQuat> Values, struct FCommonMessageData* Target);
	static void SetQuat(unsigned char Index, const struct FQuat& Value, struct FCommonMessageData* Target);
	static void SetObjectArray(unsigned char Index, TArray<class UObject*> Values, struct FCommonMessageData* Target);
	static void SetObject(unsigned char Index, class UObject* Value, struct FCommonMessageData* Target);
	static void SetNameArray(unsigned char Index, TArray<struct FName> Values, struct FCommonMessageData* Target);
	static void SetName(unsigned char Index, const struct FName& Value, struct FCommonMessageData* Target);
	static void SetLinearColorArray(unsigned char Index, TArray<struct FLinearColor> Values, struct FCommonMessageData* Target);
	static void SetLinearColor(unsigned char Index, const struct FLinearColor& Value, struct FCommonMessageData* Target);
	static void SetIntVectorArray(unsigned char Index, TArray<struct FIntVector> Values, struct FCommonMessageData* Target);
	static void SetIntVector(unsigned char Index, const struct FIntVector& Value, struct FCommonMessageData* Target);
	static void SetIntPointArray(unsigned char Index, TArray<struct FIntPoint> Values, struct FCommonMessageData* Target);
	static void SetIntPoint(unsigned char Index, const struct FIntPoint& Value, struct FCommonMessageData* Target);
	static void SetInt64Array(unsigned char Index, TArray<int64_t> Values, struct FCommonMessageData* Target);
	static void SetInt64(unsigned char Index, int64_t Value, struct FCommonMessageData* Target);
	static void SetInt32Array(unsigned char Index, TArray<int> Values, struct FCommonMessageData* Target);
	static void SetInt32(unsigned char Index, int Value, struct FCommonMessageData* Target);
	static void SetFloatArray(unsigned char Index, TArray<float> Values, struct FCommonMessageData* Target);
	static void SetFloat(unsigned char Index, float Value, struct FCommonMessageData* Target);
	static void SetColorArray(unsigned char Index, TArray<struct FColor> Values, struct FCommonMessageData* Target);
	static void SetColor(unsigned char Index, const struct FColor& Value, struct FCommonMessageData* Target);
	static void SetClassArray(unsigned char Index, TArray<class UClass*> Values, struct FCommonMessageData* Target);
	static void SetClass(unsigned char Index, class UClass* Value, struct FCommonMessageData* Target);
	static void SetByteArray(unsigned char Index, TArray<unsigned char> Values, struct FCommonMessageData* Target);
	static void SetByte(unsigned char Index, unsigned char Value, struct FCommonMessageData* Target);
	static void SetBoolArray(unsigned char Index, TArray<bool> Values, struct FCommonMessageData* Target);
	static void SetBool(unsigned char Index, bool Value, struct FCommonMessageData* Target);
	static void SetActorArray(unsigned char Index, TArray<class AActor*> Values, struct FCommonMessageData* Target);
	static void SetActor(unsigned char Index, class AActor* Value, struct FCommonMessageData* Target);
	static bool Remove(unsigned char Index, struct FCommonMessageData* Target);
	static bool GetVectorArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FVector>* OutValues);
	static bool GetVector4Array(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FVector4>* OutValues);
	static bool GetVector4(const struct FCommonMessageData& Target, unsigned char Index, struct FVector4* OutValue);
	static bool GetVector2DArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FVector2D>* OutValues);
	static bool GetVector2D(const struct FCommonMessageData& Target, unsigned char Index, struct FVector2D* OutValue);
	static bool GetVector(const struct FCommonMessageData& Target, unsigned char Index, struct FVector* OutValue);
	static bool GetTransformArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FTransform>* OutValues);
	static bool GetTransform(const struct FCommonMessageData& Target, unsigned char Index, struct FTransform* OutValue);
	static bool GetStringArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FString>* OutValues);
	static bool GetString(const struct FCommonMessageData& Target, unsigned char Index, struct FString* OutValue);
	static bool GetRotatorArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FRotator>* OutValues);
	static bool GetRotator(const struct FCommonMessageData& Target, unsigned char Index, struct FRotator* OutValue);
	static bool GetQuatArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FQuat>* OutValues);
	static bool GetQuat(const struct FCommonMessageData& Target, unsigned char Index, struct FQuat* OutValue);
	static bool GetObjectArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<class UObject*>* OutValues);
	static bool GetObject(const struct FCommonMessageData& Target, unsigned char Index, class UObject** OutValue);
	static bool GetNameArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FName>* OutValues);
	static bool GetName(const struct FCommonMessageData& Target, unsigned char Index, struct FName* OutValue);
	static bool GetLinearColorArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FLinearColor>* OutValues);
	static bool GetLinearColor(const struct FCommonMessageData& Target, unsigned char Index, struct FLinearColor* OutValue);
	static bool GetIntVectorArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FIntVector>* OutValues);
	static bool GetIntVector(const struct FCommonMessageData& Target, unsigned char Index, struct FIntVector* OutValue);
	static bool GetIntPointArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FIntPoint>* OutValues);
	static bool GetIntPoint(const struct FCommonMessageData& Target, unsigned char Index, struct FIntPoint* OutValue);
	static bool GetInt64Array(const struct FCommonMessageData& Target, unsigned char Index, TArray<int64_t>* OutValues);
	static bool GetInt64(const struct FCommonMessageData& Target, unsigned char Index, int64_t* OutValue);
	static bool GetInt32Array(const struct FCommonMessageData& Target, unsigned char Index, TArray<int>* OutValues);
	static bool GetInt32(const struct FCommonMessageData& Target, unsigned char Index, int* OutValue);
	static bool GetFloatArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<float>* OutValues);
	static bool GetFloat(const struct FCommonMessageData& Target, unsigned char Index, float* OutValue);
	static struct FCommonMessageData GetEmptyCommonMessageData();
	static bool GetColorArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<struct FColor>* OutValues);
	static bool GetColor(const struct FCommonMessageData& Target, unsigned char Index, struct FColor* OutValue);
	static bool GetClassArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<class UClass*>* OutValues);
	static bool GetClass(const struct FCommonMessageData& Target, unsigned char Index, class UClass** OutValue);
	static bool GetByteArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<unsigned char>* OutValues);
	static bool GetByte(const struct FCommonMessageData& Target, unsigned char Index, unsigned char* OutValue);
	static bool GetBoolArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<bool>* OutValues);
	static bool GetBool(const struct FCommonMessageData& Target, unsigned char Index, bool* OutValue);
	static bool GetActorArray(const struct FCommonMessageData& Target, unsigned char Index, TArray<class AActor*>* OutValues);
	static bool GetActor(const struct FCommonMessageData& Target, unsigned char Index, class AActor** OutValue);
	static void Clear(struct FCommonMessageData* Target);
};




class UDelayReplicationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DelayReplicationInterface");
		return pStaticClass;
	}


	void ReSendRPCAfterBeginPlay();
	void ReCallRepAfterBeginPlay();
};




class UEnvLuaVM : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.EnvLuaVM");
		return pStaticClass;
	}

};




class UEnvLuaVMFactory : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.EnvLuaVMFactory");
		return pStaticClass;
	}


	static class UEnvLuaVM* CreateEnvLuaVM(const struct FString& InLuaFilePath, class UObject* WorldContextObject);
};




class UPathCompressionRef : public UDataAsset
{
public:
	TArray<struct FName>                               NodeNames;                                                
	TArray<uint32_t>                                   ParentIndices;                                            
	struct FString                                     Dict;                                                     
	struct FSoftObjectPath                             DataTableRef;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PathCompressionRef");
		return pStaticClass;
	}

};




class UGameModeEnvInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.GameModeEnvInterface");
		return pStaticClass;
	}

};




class UGameModeEnvUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.GameModeEnvUtil");
		return pStaticClass;
	}


	static int GetModeID(const struct FString& GameModeClassPath);
	static bool GetGameModeEnvData(int InModeID, struct FGameModeEnvData* OutData);
};




class UStackModifyAttrInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.StackModifyAttrInterface");
		return pStaticClass;
	}


	void PushVectorModify(int ModifyKey, const struct FName& PropertyName, const struct FVector& InValue);
	void PushVector4Modify(int ModifyKey, const struct FName& PropertyName, const struct FVector4& InValue);
	void PushVector2DModify(int ModifyKey, const struct FName& PropertyName, const struct FVector2D& InValue);
	void PushTransformModify(int ModifyKey, const struct FName& PropertyName, const struct FTransform& InValue);
	void PushStringModify(int ModifyKey, const struct FName& PropertyName, const struct FString& InValue);
	void PushRotatorModify(int ModifyKey, const struct FName& PropertyName, const struct FRotator& InValue);
	void PushQuatModify(int ModifyKey, const struct FName& PropertyName, const struct FQuat& InValue);
	void PushNameModify(int ModifyKey, const struct FName& PropertyName, const struct FName& InValue);
	void PushLinearColorModify(int ModifyKey, const struct FName& PropertyName, const struct FLinearColor& InValue);
	void PushIntVectorModify(int ModifyKey, const struct FName& PropertyName, const struct FIntVector& InValue);
	void PushIntPointModify(int ModifyKey, const struct FName& PropertyName, const struct FIntPoint& InValue);
	void PushInt32Modify(int ModifyKey, const struct FName& PropertyName, int InValue);
	void PushFloatModify(int ModifyKey, const struct FName& PropertyName, float InValue);
	void PushColorModify(int ModifyKey, const struct FName& PropertyName, const struct FColor& InValue);
	void PushByteModify(int ModifyKey, const struct FName& PropertyName, unsigned char InValue);
	void PushBoolModify(int ModifyKey, const struct FName& PropertyName, bool InValue);
	bool PopStackModifyAttr(int ModifyKey, const struct FName& PropertyName);
	bool HasStackModify(const struct FName& PropertyName);
	struct FVector4 GetModifiedVector4(const struct FName& PropertyName, const struct FVector4& OriginalValue);
	struct FVector2D GetModifiedVector2D(const struct FName& PropertyName, const struct FVector2D& OriginalValue);
	struct FVector GetModifiedVector(const struct FName& PropertyName, const struct FVector& OriginalValue);
	struct FTransform GetModifiedTransform(const struct FName& PropertyName, const struct FTransform& OriginalValue);
	struct FString GetModifiedString(const struct FName& PropertyName, const struct FString& OriginalValue);
	struct FRotator GetModifiedRotator(const struct FName& PropertyName, const struct FRotator& OriginalValue);
	struct FQuat GetModifiedQuat(const struct FName& PropertyName, const struct FQuat& OriginalValue);
	struct FName GetModifiedName(const struct FName& PropertyName, const struct FName& OriginalValue);
	struct FLinearColor GetModifiedLinearColor(const struct FName& PropertyName, const struct FLinearColor& OriginalValue);
	struct FIntVector GetModifiedIntVector(const struct FName& PropertyName, const struct FIntVector& OriginalValue);
	struct FIntPoint GetModifiedIntPoint(const struct FName& PropertyName, const struct FIntPoint& OriginalValue);
	int GetModifiedInt32(const struct FName& PropertyName, int OriginalValue);
	float GetModifiedFloat(const struct FName& PropertyName, float OriginalValue);
	struct FColor GetModifiedColor(const struct FName& PropertyName, const struct FColor& OriginalValue);
	unsigned char GetModifiedByte(const struct FName& PropertyName, unsigned char OriginalValue);
	bool GetModifiedBool(const struct FName& PropertyName, bool OriginalValue);
};




class UItemContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemContainerInterface");
		return pStaticClass;
	}


	class UObject* GetOwningObject();
	TArray<class UItemHandleBase*> GetItemHandleListByDefineID(const struct FItemDefineID& DefineID);
	class UItemHandleBase* GetItemHandleByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FItemDefineID> GetItemDefineIDList();
	struct FItemDefineID GetFirstItemDefineBySpecificID(int ID);
};




class UItemContainerOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemContainerOwnerInterface");
		return pStaticClass;
	}


	void NotifyUpdateCustomAccessoriesData(int WeaponItemId, int Index, int ItemId, bool bIsSetOrRemove);
	void NotifyUpdateCapacity(float InBackPackCapacity, float InOccupiedCapacity, float InSafetyBoxCapacity, float InSafetyBoxOccupiedCapacity);
	void NotifyItemUpdated(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
	void NotifyItemEmpty();
	void NotifyItemAdded(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
};




class UItemFactoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemFactoryInterface");
		return pStaticClass;
	}

};




class ULuaAsyncTasksSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaAsyncTasksSubsystem");
		return pStaticClass;
	}


	bool IsNeedClear(float ClearMemorySize, float ClearArrayObjectSize, const struct FSluaBPVar& Callback);
};




class ULuaAsyncTaskSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaAsyncTaskSubsystem");
		return pStaticClass;
	}


	bool IsNeedClear(class UFrontendHUD* FrontendHUD, const struct FSluaBPVar& Callback);
};




class ULuaEventBridgeFunction : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaEventBridgeFunction");
		return pStaticClass;
	}


	static void UnRegisterEventByTarget(class UObject* ObjContext);
	static void UnRegisterEvent(const struct FString& FEventType, const struct FString& EventID, class UObject* ObjContext, int EventHandle);
	static int RegistEvent(const struct FString& EventType, const struct FString& EventID, class UObject* ObjContext, const struct FString& FunctionName);
};




class ULuaEventBridge : public UObject
{
public:
	TWeakObjectPtr<class ULuaStateWrapper>             LuaStateWrapper;                                          
	unsigned char                                      UnknownData00[0x8];                                       
	TMap<struct FString, struct FEventTypeContainer>   RegisterEventMap;                                         
	TMap<struct FString, struct FLuaEventTypeContainer> LuaRegisterEventMap;                                      
	TMap<uint32_t, struct FLuaEventTypeToIDSet>        FilterKeyRegisterMap;                                     
	TArray<class ULuaTemBPData*>                       CurrentParamArray;                                        
	TArray<class UProperty*>                           Params;                                                   
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaEventBridge");
		return pStaticClass;
	}


	void SyncLuaRegisterEventNum(const struct FString& EventType, const struct FString& EventID, int Number);
	TArray<class ULuaTemBPData*> GetCurrentParam();
	void DeactivateEventsByFilterKey(uint32_t FilterKey);
	bool CheckNeedPostEventWithFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventID, bool bCheckNeedPostLua);
	void ActiveEventByFilterKey(uint32_t FilterKey, const struct FString& EventType, const struct FString& EventID, bool bActive);
};




class ULuaEventSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x80];                                      
	TArray<class ULuaTemBPData*>                       CurrentParamArray;                                        
	unsigned char                                      UnknownData01[0xA0];                                      
	struct FName                                       LastEventTriggerObjectName;                               
	struct FName                                       LastEventTriggerFunctionName;                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.LuaEventSubsystem");
		return pStaticClass;
	}


	void UnRegistEvent(int EventHandle);
	void SetBridgeFunction(const struct FSluaBPVar& OnRegistEvent, const struct FSluaBPVar& OnUnRegistEvent, const struct FSluaBPVar& OnPostEvent, const struct FSluaBPVar& OnPostBlueprintEvent);
	int RegistEvent(const struct FString& EventID, const struct FString& EventType, class UObject* Object, const struct FString& FunctionName);
};




class UModTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ModTable");
		return pStaticClass;
	}

};




class UNetRelevancyGroup : public UObject
{
public:
	struct FNetRelevancyGroupID                        GroupID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<class UUAENetConnection*>                   Connections;                                              
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.NetRelevancyGroup");
		return pStaticClass;
	}

};




class UOnlyActorCompManagerComponent : public UActorComponent
{
public:
	TMap<struct FString, class UOnlyActorComponent*>   CacheComponents;                                          
	TArray<class UOnlyActorComponent*>                 CacheUpdateComponents;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OnlyActorCompManagerComponent");
		return pStaticClass;
	}

};




class UOnlyActorComponentManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OnlyActorComponentManagerInterface");
		return pStaticClass;
	}

};




class UOwnerRelevancyDependencyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OwnerRelevancyDependencyInterface");
		return pStaticClass;
	}

};




class UPlayerActorChannelEx : public UActorChannel
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PlayerActorChannelEx");
		return pStaticClass;
	}

};




class UPlayerReliableSequentialSyncActorChannel : public UPlayerActorChannelEx
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PlayerReliableSequentialSyncActorChannel");
		return pStaticClass;
	}

};




class URenderFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.RenderFunctionLibrary");
		return pStaticClass;
	}


	static void MarkComponentRenderStateDirty(class UActorComponent* Comp);
};




class URepPropertyModOptim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.RepPropertyModOptim");
		return pStaticClass;
	}

};




class USTBaseBuffCarrierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffCarrierInterface");
		return pStaticClass;
	}


	bool SetEndTime(int InstID, float EndTime);
	bool RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer);
	bool RemoveBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID);
	bool HasSkillID(int SkillID);
	bool HasBuffID(int BuffID);
	TArray<int> GetBuffIDsBySkillID(int SkillID);
	float GetBuffDuration(int InstID, int CauseSkillID);
	class USTBuffSystemComponent* GetBuffComponent();
	bool ChangeBuffDuration(int InstID, float Duration);
	bool AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer, int Level);
	int AddBuffByID(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level);
};




class USTBuff : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	int                                                BuffID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     BuffName;                                                 
	struct FString                                     Desc;                                                     
	int                                                LayerMax;                                                 
	float                                              Duration;                                                 
	float                                              ClientSyncInterval;                                       
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<float>                                      CDConfigArray;                                            
	bool                                               bNeedSyncCD;                                              
	EBuffClientSyncType                                ClientSyncType;                                           
	EBuffTargetType                                    TargetType;                                               
	EBuffRefreshType                                   RefreshType;                                              
	EBuffReActionType                                  ReActionType;                                             
	EMultiCauserHandleType                             MultiCauserHandleType;                                    
	EMultiSkillHandleType                              MultiSkillHandleType;                                     
	bool                                               IsExecuteOnece;                                           
	bool                                               RemoveAllLayer;                                           
	unsigned char                                      UnknownData03[0x7];                                       
	TArray<class USTBuffTriggerBase*>                  TriggerBases;                                             
	TArray<class USTBuffCheckConditionWrapper*>        Conditions;                                               
	TArray<class USTBuffAction*>                       Actions;                                                  
	EBuffShowInUIType                                  NeedShowBuffTypeInBuffList;                               
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                LocalizeDescID;                                           
	struct FString                                     IconPath;                                                 
	bool                                               IsClientOwnLife;                                          
	bool                                               ExistForever;                                             
	unsigned char                                      UnknownData05[0x2];                                       
	int                                                TipsOnAddBuff;                                            
	struct FString                                     TimeFormula;                                              
	bool                                               bNeedTick;                                                
	unsigned char                                      UnknownData06[0x7];                                       
	TMap<class UObject*, int>                          InstancedNodeNameToMemoryMap;                             
	int                                                InstancedNodesTotalSize;                                  
	unsigned char                                      UnknownData07[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuff");
		return pStaticClass;
	}


	void Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime, float TimeSeconds, TArray<int>* TickActionList);
	void ResetActionExecute(class UActorComponent* BuffSystemComponent, int InstID);
	void OnCreate(class UActorComponent* BuffSystemComponent, int InstID);
	void Initialize(class UActorComponent* BuffSystemComponent, int InstID);
	void InitBuffAction();
	void End(class UActorComponent* BuffSystemComponent, int InstID);
	void Destroy(class UActorComponent* BuffSystemComponent, int InstID);
	bool ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID);
};




class USTBuffNodeInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	class UActorComponent*                             CurOwnerActorComponent;                                   
	int                                                CurInstID;                                                
	TWeakObjectPtr<class USTBuff>                      OwnerBuff;                                                
	int                                                ArrayIndex;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffNodeInstanceData");
		return pStaticClass;
	}


	int GetBuffInstLevel();
};




class USTBuffAction : public USTBuffNodeInstanceData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	EBuffEnabledRole                                   ActionRole;                                               
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ExecuteDelay;                                             
	TArray<struct FBuffCheckConditionWrapperItem>      ConditionSettings;                                        
	TArray<struct FBuffTriggerWrapperItem>             TriggerSettings;                                          
	bool                                               bEnableTick;                                              
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              Interval;                                                 
	float                                              FirstTickStartTime;                                       
	bool                                               bTickByPeriod;                                            
	bool                                               AutoEnabled;                                              
	unsigned char                                      UnknownData03[0x2];                                       
	TArray<class UObject*>                             CacheSoftObject;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffAction");
		return pStaticClass;
	}


	struct FString ToString();
	void Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime);
	void SetEnabled(class UActorComponent* BuffSystemComponent, int InstID, bool Enabled);
	void ResetExecute(class UActorComponent* BuffSystemComponent, int InstID, bool IgnoreEnd);
	void OnTick(float DetalTime);
	void OnResetExecute(bool IgnoreEnd);
	void OnInitialize();
	void OnExecute();
	void OnEnd();
	void OnDestroy();
	void OnCheckLinkActionEnabled();
	void OnChangeNotify();
	void OnAsyncLoadSoftPathDone();
	bool IsRoleOK(class UActorComponent* OwnerComponent);
	void Initialize(class UActorComponent* BuffSystemComponent, int InstID);
	TEnumAsByte<ENetRole> GetRealOwnerRole();
	class AActor* GetOwner();
	class AActor* GetCauser();
	void Execute(class UActorComponent* BuffSystemComponent, int InstID);
	void End(class UActorComponent* BuffSystemComponent, int InstID);
	void Destroy(class UActorComponent* BuffSystemComponent, int InstID);
	void CheckLinkActionEnabled(class UActorComponent* BuffSystemComponent, int InstID);
	void ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID);
};




class USTBuffAction_Lua : public USTBuffAction
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
            pStaticClass = UObject::FindClass("Class Basic.STBuffAction_Lua");
		return pStaticClass;
	}


	struct FString ToString();
	void OnTick(float DetalTime);
	void OnInitialize();
	void OnExecute();
	void OnEnd();
	void OnDestroy();
	void OnChangeNotify();
};




class USTBuffCheckConditionWrapper : public USTBuffNodeInstanceData
{
public:
	EBuffEnabledRole                                   ExecuteRole;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	class USTBuffCondition*                            Condition;                                                
	float                                              ConditionTickInterval;                                    
	float                                              Probality;                                                
	EBuffConditionExecuteTimeType                      ExecuteTimeType;                                          
	bool                                               IsDoOnFalse;                                              
	bool                                               IsNeedTick;                                               
	bool                                               IsNeedExecute;                                            
	bool                                               IsSetFalseWhenExecute;                                    
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ExecuteDelay;                                             
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffCheckConditionWrapper");
		return pStaticClass;
	}


	void Tick(class UActorComponent* BuffSystemComponent, int InstID, float DetalTime);
	void ResetExecute(class UActorComponent* BuffSystemComponent, int InstID, bool IgnoreEnd);
	void OnTick(float DetalTime);
	void OnInitialize();
	void OnDestroy();
	void OnConditionTrue();
	void OnConditionFalse();
	void OnChangeNotify();
	bool IsRoleOK(class UActorComponent* OwnerComponent);
	void InitLinkActionEnableState(class UActorComponent* BuffSystemComponent, int InstID);
	void Initialize(class UActorComponent* BuffSystemComponent, int InstID);
	TEnumAsByte<ENetRole> GetRealOwnerRole();
	void Execute(class UActorComponent* BuffSystemComponent, int InstID);
	void End(class UActorComponent* BuffSystemComponent, int InstID);
	void Destroy(class UActorComponent* BuffSystemComponent, int InstID);
	void CheckCondition();
	void ChangeNotify(class UActorComponent* BuffSystemComponent, int InstID);
};




class USTBuffCondition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	EBuffConditionAndOr                                AndOrPrev;                                                
	unsigned char                                      UnknownData01[0x7];                                       
	class USTBuffNodeInstanceData*                     OwnerInstanceData;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffCondition");
		return pStaticClass;
	}


	void OnResetExecute(bool IgnoreEnd);
	void OnInitialize();
	void OnEnd();
	void OnDestroy();
	class AActor* GetOwner();
	class AActor* GetCauser();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
	void ChangeNotify();
};




class USTBuffConditionComplex : public USTBuffCondition
{
public:
	TArray<class USTBuffCondition*>                    Conditions;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffConditionComplex");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};




class USTBuffConditionNot : public USTBuffCondition
{
public:
	class USTBuffCondition*                            Condition;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffConditionNot");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	class USTBuffCondition* Copy(class UObject* Outer);
	bool CheckIsTrue();
};




class USTBuffCondition_Lua : public USTBuffCondition
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
            pStaticClass = UObject::FindClass("Class Basic.STBuffCondition_Lua");
		return pStaticClass;
	}


	void OnInitialize();
	void OnDestroy();
	bool CheckIsTrue();
};




class USTBuffConditionAction : public USTBuffAction
{
public:
	class USTBuffCondition*                            Condition;                                                
	float                                              ConditionTickInterval;                                    
	float                                              Probality;                                                
	EBuffConditionExecuteTimeType                      ExecuteTimeType;                                          
	bool                                               IsDoOnFalse;                                              
	bool                                               IsNeedTick;                                               
	bool                                               IsNeedExecute;                                            
	bool                                               IsSetFalseWhenExecute;                                    
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<struct FBuffConditionActionItem>            LinkActions;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffConditionAction");
		return pStaticClass;
	}


	void OnTick(float DetalTime);
	void OnInitialize();
	void OnDestroy();
	void OnConditionTrue();
	void OnConditionFalse();
	void OnChangeNotify();
	void CheckCondition();
};




class USTBuffEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	class USTBuffNodeInstanceData*                     OwnerInstanceData;                                        
	EBuffEnabledRole                                   ExecuteRole;                                              
	bool                                               bStateEvent;                                              
	unsigned char                                      UnknownData01[0x6];                                       
	struct FString                                     StateSharedKey;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffEvent");
		return pStaticClass;
	}


	void TriggerEvent();
	struct FString ToString();
	void SetTimer(const struct FName& FunctionName, float InRate, bool InbLoop, float InFirstDelay);
	void OnInitialize();
	void OnEnd();
	void OnDestroy();
	bool IsRoleOK(class UActorComponent* OwnerComponent);
	TEnumAsByte<ENetRole> GetRealOwnerRole();
	class AActor* GetOwner();
	class AActor* GetCauser();
	class USTBuffEvent* Copy(class UObject* Outer);
	void ClearTimer(const struct FName& FunctionName);
	void ClearAllTimer();
};




class USTBuffEvent_Lua : public USTBuffEvent
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
            pStaticClass = UObject::FindClass("Class Basic.STBuffEvent_Lua");
		return pStaticClass;
	}


	struct FString ToString();
};




class USTBuffEvent_Multi : public USTBuffEvent
{
public:
	TArray<class USTBuffEvent*>                        Events;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffEvent_Multi");
		return pStaticClass;
	}


	void OnInitialize();
	void OnEnd();
	void OnDestroy();
	class USTBuffEvent* Copy(class UObject* Outer);
};




class USTBuffEvent_OnEnd : public USTBuffEvent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffEvent_OnEnd");
		return pStaticClass;
	}

};




class USTBuffSharedInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffSharedInterface");
		return pStaticClass;
	}


	void SetVectorShared(const struct FString& SharedName, const struct FVector& InValue);
	void SetUInt8Shared(const struct FString& SharedName, unsigned char InValue);
	void SetTargetShared(const struct FString& SharedName, TArray<class AActor*> InActors);
	void SetStringShared(const struct FString& SharedName, const struct FString& InValue);
	void SetRotatorShared(const struct FString& SharedName, const struct FRotator& InValue);
	void SetNameShared(const struct FString& SharedName, const struct FName& InValue);
	void SetInt32Shared(const struct FString& SharedName, int InValue);
	void SetFloatShared(const struct FString& SharedName, float InValue);
	void SetBooleanShared(const struct FString& SharedName, bool InValue);
	void RemoveShared(const struct FString& SharedName);
	bool GetVectorShared(const struct FString& SharedName, struct FVector* OutValue);
	bool GetUInt8Shared(const struct FString& SharedName, unsigned char* OutValue);
	bool GetTargetShared(const struct FString& SharedName, TArray<class AActor*>* OutActors);
	bool GetStringShared(const struct FString& SharedName, struct FString* OutValue);
	bool GetRotatorShared(const struct FString& SharedName, struct FRotator* OutValue);
	bool GetNameShared(const struct FString& SharedName, struct FName* OutValue);
	bool GetInt32Shared(const struct FString& SharedName, int* OutValue);
	bool GetFloatShared(const struct FString& SharedName, float* OutValue);
	bool GetBooleanShared(const struct FString& SharedName, bool* OutValue);
};




class USTBuffSystemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	float                                              RPCSyncInterval;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	struct FScriptMulticastDelegate                    OnClientAddBuffEvent;                                     
	struct FScriptMulticastDelegate                    OnClientRemoveBuffEvent;                                  
	struct FScriptMulticastDelegate                    OnClientUpdateBuffEvent;                                  
	struct FScriptMulticastDelegate                    OnAddBuffEvent;                                           
	struct FScriptMulticastDelegate                    OnRemoveBuffEvent;                                        
	struct FScriptMulticastDelegate                    OnUpdateBuffEvent;                                        
	TMap<int, class UUAEBlackboard*>                   BuffBlackboardMap;                                        
	struct FBuffIncNetArray                            SyncBriefs;                                               
	struct FBuffIncNetArray                            SyncRefBriefs;                                            
	struct FBuffIncNetArray                            OwnerSyncBriefs;                                          
	struct FBuffIncNetArray                            OwnerSyncRefBriefs;                                       
	struct FBuffIncNetArray                            DsBuffBriefs;                                             
	unsigned char                                      UnknownData02[0x50];                                      
	TMap<struct FBuffReplaceData, struct FBuffReplaceData> BuffReplaceData;                                          
	unsigned char                                      UnknownData03[0x128];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffSystemComponent");
		return pStaticClass;
	}


	void UpdateClientBuff(struct FBuffSyncBrief* Brief);
	bool SetEndTime(int InstID, float EndTime);
	bool SetBuffReplaceData(const struct FBuffReplaceData& From, const struct FBuffReplaceData& To);
	bool RemoveBuffBySkill(int SkillID, int LayerCount, class AActor* Causer);
	void RemoveBuff(int BuffID, int LayerCount, class AActor* Causer, int CauseSkillID);
	void RemoveAllBuffsWithExcludeArray(TArray<int> InExcludeArry);
	void RemoveAllBuffs(bool bClearAll);
	void OnUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnRep_SyncBriefs();
	void OnRep_OwnerSyncBriefs();
	void OnRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientUpdateBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientRemoveBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnClientAddBuffEvent__DelegateSignature(int BuffID, int SkillID, int InstID);
	void OnAddBuffEvent__DelegateSignature(int BuffID, int SkillID, bool IsExist, class AActor* Causer);
	bool IsCDOK(int InstID, int Index);
	bool IsBuffInstExist(int InstID);
	bool HasSkillID(int SkillID);
	bool HasBuff(int BuffID);
	class UBuffConfigSubsystem* GetSubsystem();
	class USTBuff* GetSTBuffByBuffID(int BuffID);
	TEnumAsByte<ENetRole> GetRealOwnerRoleSafety();
	struct FBuffReplaceData GetBuffReplaceDataByID(int ID, bool bBuffInst);
	int GetBuffLayerCount(int InstID, int CauseSkillID);
	TArray<struct FBuffSyncBrief> GetBuffInfoBySkillID(int SkillID);
	TArray<struct FBuffSyncBrief> GetBuffInfoByBuffID(int BuffID);
	bool GetBuffInfo(int InstID, struct FBuffSyncBrief* OutBuff);
	TArray<int> GetBuffIDsBySkillID(int SkillID);
	float GetBuffDuration(int InstID, int CauseSkillID);
	float GetBuffDSEndTime(int InstID, int CauseSkillID);
	TArray<float> GetBuffCDInfo(int InstID);
	TArray<struct FBuffSyncBrief> GetAllBuffInfo();
	void DoCooldown(int InstID, int Index, bool bReset);
	void ClearBuffs();
	bool ChangeLevel(int InstID, int NewLevel);
	bool ChangeDuration(int InstID, float Duration);
	bool AddBuffBySkill(int SkillID, int LayerCount, class AActor* Causer, int Level);
	int AddBuff(int BuffID, class AActor* Causer, int LayerCount, int CauseSkillID, int Level);
};




class USTBuffTriggerBase : public USTBuffNodeInstanceData
{
public:
	bool                                               bTriggerOnCreate;                                         
	EBuffEnabledRole                                   ExecuteRole;                                              
	unsigned char                                      UnknownData00[0x6];                                       
	struct FTriggerConditionConfig                     ConditionConfig;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffTriggerBase");
		return pStaticClass;
	}


	void Tick(class UActorComponent* BuffSystemComponent, int InstID, float DeltaTime);
	void ResetExecute(class UActorComponent* BuffSystemComponent, int InstID);
	void OnTriggerCreate();
	void OnTick(float DeltaTime);
	void OnInitialize();
	void OnEnd();
	void OnDestroy();
	void OnCreate(class UActorComponent* BuffSystemComponent, int InstID);
	bool IsRoleOK(class UActorComponent* OwnerComponent);
	bool IsNeedTick();
	void InitLinkActionEnableState(class UActorComponent* BuffSystemComponent, int InstID);
	void Initialize(class UActorComponent* BuffSystemComponent, int InstID);
	TEnumAsByte<ENetRole> GetRealOwnerRole();
	void End(class UActorComponent* BuffSystemComponent, int InstID);
	void Destroy(class UActorComponent* BuffSystemComponent, int InstID);
};




class USTBuffTrigger_Event : public USTBuffTriggerBase
{
public:
	class USTBuffEvent*                                Event;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffTrigger_Event");
		return pStaticClass;
	}

};




class USTBuffTrigger_OnAdd : public USTBuffTriggerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffTrigger_OnAdd");
		return pStaticClass;
	}

};




class USTBuffTrigger_Timer : public USTBuffTriggerBase
{
public:
	float                                              TickInterval;                                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBuffTrigger_Timer");
		return pStaticClass;
	}

};




class UUStringMap : public UObject
{
public:
	struct FStringMap                                  Map;                                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UStringMap");
		return pStaticClass;
	}

};




class USTExtraNetPriorityConfig : public UWorldSubsystem
{
public:
	bool                                               ExtraNetPriorityEnabled;                                  
	unsigned char                                      UnknownData00[0x7];                                       
	TMap<ESTExtraNetPriorityFlags, float>              ExtraNetPriorityFactor;                                   
	bool                                               EnemyExtraNetPriorityEnabled;                             
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              EnemyExtraNetPriorityFactor;                              
	TMap<ESTExtraNetPriorityIssueID, ESTExtraNetPriorityFlags> NetPriorityIssue;                                         
	float                                              MoveExtraNetPriorityVelocitySquared;                      
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STExtraNetPriorityConfig");
		return pStaticClass;
	}

};




class USTExtraNetPriorityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STExtraNetPriorityInterface");
		return pStaticClass;
	}

};




class UDataTableRowDesc : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DataTableRowDesc");
		return pStaticClass;
	}

};




class UDataTableProxy : public UObject
{
public:
	TArray<class UDataTable*>                          ModDataTables;                                            
	class UDataTable*                                  DataTable;                                                
	class UBCDataTable*                                BlockTable;                                               
	unsigned char                                      UnknownData00[0x140];                                     
	class UDataTableRowDesc*                           Desc;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DataTableProxy");
		return pStaticClass;
	}

};




class UTableManagerSubsystem : public UGameInstanceSubsystem
{
public:
	struct FString                                     BaseTableRelativeDir;                                     
	struct FString                                     ModTableRelativeDir;                                      
	struct FString                                     TableRelativeDir;                                         
	struct FString                                     ManualTableDirectory;                                     
	struct FString                                     CurrentModName;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.TableManagerSubsystem");
		return pStaticClass;
	}


	static bool SetTableStringDataField(const struct FName& tableName, const struct FString& Key, const struct FString& Field, const struct FString& NewValue);
	void SetModName(const struct FString& ModName);
	class UDataTableProxy* GetTableProxy(const struct FName& tableName, bool bTempory, const struct FName& SystemName, const struct FName& SubModName, bool bPreLoadPathCompression);
	static bool GetTableDataField(const struct FString& tableName, const struct FTableRowBase& Key, const struct FString& Field, struct FTableRowBase* Out);
	static bool GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow);
};




class UTickOptimizationAnimComponent : public UActorComponent
{
public:
	bool                                               EnableTickOptimization;                                   
	ETickOptimizationAnimUROMode                       AnimUpdateRateOptimizationsMode;                          
	unsigned char                                      UnknownData00[0x6];                                       
	TArray<float>                                      FramesSkippedScreenSizeThresholds;                        
	TArray<int>                                        LODToFramesSkipped;                                       
	int                                                NonRenderedFramesSkipped;                                 
	int                                                MaxFramesSkippedForInterpolation;                         
	bool                                               bForceEnableAnimUpdateRateOptimizations;                  
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.TickOptimizationAnimComponent");
		return pStaticClass;
	}


	bool ShouldForceEnableAnimUpdateRateOptimizations();
	void SetNonRenderedFramesSkipped(int InNonRenderedFramesSkipped);
	void SetMaxFramesSkippedForInterpolation(int InMaxFramesSkippedForInterpolation);
	void SetLODToFramesSkipped(TArray<int> InLODToFramesSkipped);
	void SetFramesSkippedScreenSizeThresholds(TArray<float> InFramesSkippedScreenSizeThresholds);
	void SetForceEnableAnimUpdateRateOptimizations(bool bInForceEnableAnimUpdateRateOptimizations);
	void SetAnimUpdateRateOptimizationsMode(ETickOptimizationAnimUROMode InAnimUpdateRateOptimizationsMode);
	void RegisterDynamicSkinnedMeshComponent(class USkinnedMeshComponent* SkinnedMeshComponent);
	int GetNonRenderedFramesSkipped();
	int GetMaxFramesSkippedForInterpolation();
	TArray<int> GetLODToFramesSkipped();
	TArray<float> GetFramesSkippedScreenSizeThresholds();
	ETickOptimizationAnimUROMode GetAnimUpdateRateOptimizationsMode();
};




class UTickOptimizationFocusComponent : public USceneComponent
{
public:
	class UTickOptimizationSubsystem*                  Subsystem;                                                
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.TickOptimizationFocusComponent");
		return pStaticClass;
	}


	bool ShouldTrack();
};




class UTickOptimizationSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<class UTickOptimizationFocusComponent*>     Focuses;                                                  
	TArray<class UTickOptimizationTargetComponent*>    SphereRangeTargets;                                       
	unsigned char                                      UnknownData01[0x20];                                      
	TArray<class UTickOptimizationTargetComponent*>    SphereZoneTargets;                                        
	unsigned char                                      UnknownData02[0x10];                                      
	TArray<class UTickOptimizationTargetComponent*>    UpdatedTargets;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.TickOptimizationSubsystem");
		return pStaticClass;
	}

};




class UTickOptimizationTargetComponent : public USceneComponent
{
public:
	class UTickOptimizationSubsystem*                  Subsystem;                                                
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<class UActorComponent*>                     TickControlledComponents;                                 
	bool                                               EnableTickOptimization;                                   
	ETickOptimizationDistanceMode                      DistanceMode;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              SphereRadius;                                             
	float                                              BufferSize;                                               
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<float>                                      MidZoneSizes;                                             
	bool                                               bActorTickControl;                                        
	bool                                               bActorTickChange;                                         
	bool                                               bComponentsTickControl;                                   
	bool                                               bComponentsTickChange;                                    
	bool                                               bForceExecuteFirstTick;                                   
	unsigned char                                      UnknownData03[0x3];                                       
	TArray<struct FTickOptimizationTickSettings>       TickSettings;                                             
	bool                                               bForced;                                                  
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                TickZone;                                                 
	struct FScriptMulticastDelegate                    OnTickChanged;                                            
	struct FScriptMulticastDelegate                    OnTickZoneChanged;                                        
	struct FScriptMulticastDelegate                    OnTickEnabledChanged;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.TickOptimizationTargetComponent");
		return pStaticClass;
	}


	bool ShouldForceExecuteFirstTick();
	void SetTickSettings(TArray<struct FTickOptimizationTickSettings> InTickSettings);
	void SetSphereRadius(float InRadius);
	void SetMidZoneSizes(TArray<float> InMidZoneSizes);
	void SetForceExecuteFirstTick(bool bInForceExecuteFirstTick);
	void SetDistanceMode(ETickOptimizationDistanceMode InDistanceMode);
	void SetComponentsTickControl(bool bInComponentsTickControl);
	void SetBufferSize(float InBufferSize);
	void SetActorTickControl(bool bInActorTickControl);
	void RemoveComponentTickControl(class UActorComponent* Component);
	void Release();
	bool IsForced();
	bool IsComponentsTickControl();
	bool IsActorTickControl();
	int GetTickZone();
	TArray<struct FTickOptimizationTickSettings> GetTickSettings();
	float GetSphereRadius();
	TArray<float> GetMidZoneSizes();
	ETickOptimizationDistanceMode GetDistanceMode();
	float GetBufferSize();
	void Force(int InZone);
	void AddComponentTickControl(class UActorComponent* Component);
};




class UUAEBuffPoolSubsystem : public UWorldSubsystem
{
public:
	TMap<struct FString, class USTBuff*>               BuffInstancedTemplateMap;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEBuffPoolSubsystem");
		return pStaticClass;
	}

};




class UUAEGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	class UBackendHUD*                                 AssociatedBackendHUD;                                     
	unsigned char                                      UnknownData01[0xC];                                       
	bool                                               bEnableAutoStat;                                          
	bool                                               bEnableAutoTickDeltaThreshold;                            
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              AutoTickDeltaThresholdFactor;                             
	float                                              StatCollection_AvgTickDeltaThreshold;                     
	float                                              AutoStat_AvgTickDeltaThreshold;                           
	float                                              AutoStat_StartTime;                                       
	unsigned char                                      UnknownData03[0x4];                                       
	float                                              AutoStat_Duration_Engine;                                 
	float                                              AutoStat_Duration_PhysX;                                  
	unsigned char                                      UnknownData04[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEGameEngine");
		return pStaticClass;
	}

};




class UBPTable : public UObject
{
public:
	struct FString                                     BPTableName;                                              
	TMap<int, struct FBPTableItem>                     BPTableItemMap;                                           
	TMap<int, struct FBPTableItem>                     BPTableItemMap_Mod;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BPTable");
		return pStaticClass;
	}


	struct FString GetWrapperPath(int ID);
	class UClass* GetWrapperClass(int ID);
	struct FString GetPath(int ID, bool IsLobby, bool bForceLobby);
	class UObject* GetObject(int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice);
	class UObject* GetModObject(int ID, class UObject* Outer, bool IsLobby);
	class UClass* GetModClass(int ID, bool IsLobby);
	class UClass* GetCustom1Class(int ID);
	class UClass* GetClass(int ID, bool IsLobby, bool IsLowDevice);
	void ConvertPath(int ID);
};




class UUAELoadedClassManager : public UObject
{
public:
	TMap<struct FString, class UBPTable*>              BPTableMap;                                               
	TMap<struct FString, class UBPTable*>              BPTableMap_Mod;                                           
	TMap<int, struct FString>                          BPTableNameMap;                                           
	TMap<struct FName, struct FTableNameToName>        BPTableNameToNameMap;                                     
	struct FString                                     LoadedClassManagerClassName;                              
	unsigned char                                      UnknownData00[0x1C8];                                     
	TMap<class UObject*, struct FSoftClassPath>        AsyncLoadClassDict;                                       
	unsigned char                                      UnknownData01[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAELoadedClassManager");
		return pStaticClass;
	}


	void InitTableData();
	void InitialModTableItemMap();
	void InitBPTableMap_Mod();
	void InitBPTableMap();
	void HandleTableModNameChanged(const struct FString& InModName);
	struct FString GetWrapperPath(const struct FString& BPTableName, int ID);
	class UClass* GetWrapperClass(const struct FString& BPTableName, int ID);
	struct FString GetPath(const struct FString& BPTableName, int ID, bool IsLobby, bool bForceLobby);
	class UObject* GetObject(const struct FString& BPTableName, int ID, class UObject* Outer, bool IsLobby, bool IsLowDevice);
	static int GetExactDeviceLevel();
	static int GetDeviceLevel();
	class UClass* GetCustom1Class(const struct FString& BPTableName, int ID);
	struct FString GetClassLoadingPath(const struct FString& BPTableName, int ID, bool IsLobby);
	class UClass* GetClass(const struct FString& BPTableName, int ID, bool IsLobby, bool IsLowDevice);
	struct FString GetBPTableName(int Type);
	void GetAssetByAssetReferenceAsync(const struct FSoftObjectPath& AssetReference, const struct FScriptDelegate& AssetLoadSuccessDelegate);
	void GetAssetAsyncWithStringForManage(const struct FSoftObjectPath& AssetReference, const struct FString& InputString, const struct FScriptDelegate& AssetLoadSuccessDelegate);
	static class UUAELoadedClassManager* Get();
	class UBPTable* CreateAndAddBPTable_Mod(const struct FString& BPTableName);
	class UBPTable* CreateAndAddBPTable(const struct FString& BPTableName);
	void ClearModTableItemMap();
	void ClearBPTable_Mod();
	void ClearBPTable();
	void ClearAssetByAssetReferenceAsync(const struct FScriptDelegate& AssetLoadSuccessDelegate);
	void ClearAllHandle();
	void ClearAllData();
};




class UUAEMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEMeshComponent");
		return pStaticClass;
	}


	void TriggerCacheMaterialParameterNameIndices();
	void RemoveDisableClothRequest(const struct FString& InSource);
	int GetPredictedLODLevel();
	struct FString GetAnimUpdateParamsInfo();
	void AddDisableClothRequest(const struct FString& InSource);
};




class UUAENetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x104];                                     
	int                                                InitialHandshakeTimeoutNumThreshold;                      
	unsigned char                                      UnknownData01[0x4];                                       
	int                                                ActorChannelProcessBunchErrorNumThreshold_Server_Global;  
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_Global;  
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_PerActor;
	unsigned char                                      UnknownData02[0x50];                                      
	bool                                               bEnableHTTPDNS;                                           
	unsigned char                                      UnknownData03[0x7];                                       
	struct FString                                     HTTPDNSServerAddr;                                        
	float                                              HTTPDNSResponseTimeout;                                   
	unsigned char                                      UnknownData04[0xC];                                       
	float                                              CheckLevelInitializedTime;                                
	float                                              CheckLevelActorsOvertime;                                 
	float                                              TempCheckLevelInitializedTime;                            
	unsigned char                                      UnknownData05[0x4];                                       
	TMap<struct FName, struct FUnLoadLevelActorCollection> UnLevelInitActors;                                        
	class UNetRelevancyGroup*                          RelevancyGroup;                                           
	unsigned char                                      UnknownData06[0x100];                                     
	TArray<struct FPendingRegionNetworkObject>         PendingRegionNetworkObjects;                              
	float                                              MinRegionActorTickDelta;                                  
	float                                              MaxRegionActorTickDelta;                                  
	unsigned char                                      UnknownData07[0xC];                                       
	bool                                               EnableWeakNetUpdate;                                      
	unsigned char                                      UnknownData08[0x3];                                       
	float                                              MinWeakNetUpdateDelay;                                    
	float                                              MaxWeakNetUpdateDelay;                                    
	float                                              SquareSegmentSize;                                        
	float                                              MaxSegmentDistance;                                       
	int                                                MaxObjectNumInSegments;                                   
	unsigned char                                      UnknownData09[0x15];                                      
	bool                                               bRecreateSocketOnLost;                                    
	unsigned char                                      UnknownData10[0x12];                                      
	float                                              UpdateClientPingTimeThreshold;                            
	unsigned char                                      UnknownData11[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetConnection");
		return pStaticClass;
	}


	bool IsClosed();
	bool HasSameRegion(const struct FVector& OldLoc, const struct FVector& NewLoc);
	void ForceRefreshRegionWeakNetUpdateObjects(float WeakNetConsiderFrequency);
};




class UUAENetDriver : public UIpNetDriver
{
public:
	float                                              NetCullChangeTime;                                        
	bool                                               bEnableCollectNetStats;                                   
	bool                                               bEnableResetNetStats;                                     
	unsigned char                                      UnknownData00[0x2];                                       
	TArray<struct FRPCShareSerializationFunctionPresetConfig> RPCShareSerializationFunctionPresetConfigs;               
	unsigned char                                      UnknownData01[0x150];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetDriver");
		return pStaticClass;
	}

};




class UUAETableManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     TableRelativeDir;                                         
	TArray<struct FName>                               TablesNeedReleasedInBattle;                               
	struct FString                                     ManualTableDirectory;                                     
	unsigned char                                      UnknownData01[0x2C0];                                     
	TArray<class UUAEDataTable*>                       TableObjList;                                             
	class UWorld*                                      CurWorld;                                                 
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap;                                              
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap_Mod;                                          
	struct FScriptMulticastDelegate                    OnTableCreateInFighting;                                  
	unsigned char                                      UnknownData02[0x168];                                     
	struct FString                                     PathCompressionConfigsPath;                               
	bool                                               bIsPathCompression;                                       
	bool                                               bIsPathCompressionCache;                                  
	unsigned char                                      UnknownData03[0x2];                                       
	int                                                PathCompressionCacheMaxSize;                              
	bool                                               bTranslationFallBackUnloadDuplicate;                      
	bool                                               bShrinkTranslationMap;                                    
	bool                                               bSpeedUpLoadLocalizationText;                             
	bool                                               bAsyncLoadLocalizationTable;                              
	bool                                               bLoadPathCompressionCfgWhenReadTable;                     
	bool                                               bGenerateTrieTreeFromDict;                                
	unsigned char                                      UnknownData04[0x2];                                       
	TArray<struct FString>                             TableToPreLoadPathCompression;                            
	bool                                               bEnableTablePreload;                                      
	unsigned char                                      UnknownData05[0x7];                                       
	TArray<struct FName>                               TableToPreLoad;                                           
	TArray<struct FName>                               TableToMmapMigrate;                                       
	int                                                TablePreloadMaxRetryCount;                                
	unsigned char                                      UnknownData06[0xC];                                       
	struct FString                                     BaseTableRelativeDir;                                     
	struct FString                                     ModTableRelativeDir;                                      
	struct FString                                     SplitModTableRelativeDir;                                 
	TArray<struct FString>                             BaseModTableConfig;                                       
	TArray<struct FName>                               LobbyTableToLoadInMainCity;                               
	TArray<struct FString>                             ModListToLoadTranslation;                                 
	TMap<struct FName, class UModTable*>               ModTableMap;                                              
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> ModTableObjMap;                                           
	TArray<class UUAEDataTable*>                       InGameTableObjList;                                       
	TMap<struct FName, bool>                           CheckNeedModMap;                                          
	struct FString                                     CurrentModName;                                           
	struct FString                                     EmptyModName;                                             
	TMap<struct FString, class UBaseTableResMap*>      LoadedTableMap;                                           
	TMap<struct FString, bool>                         CheckMapTable;                                            
	unsigned char                                      UnknownData07[0x100];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAETableManager");
		return pStaticClass;
	}


	void ReleaseTable(const struct FName& TableFName);
	void PreloadDataTablesAsync();
	class UUAEDataTable* GetTablePtr_Mod(const struct FName& tableName);
	class UUAEDataTable* GetTablePtr(const struct FName& tableName, bool bCheckModTable);
	class UBaseTableResMap* GetTableMap(const struct FString& tableName);
	static bool GetTableData(const struct FString& tableName, const struct FString& Key, struct FTableRowBase* OutRow);
	static class UUAETableManager* GetInstance();
	static struct FString GetDomainByID(int ID);
	static class UUAEDataTable* GetDataTableStatic_Mod(const struct FString& tableName);
	static class UUAEDataTable* GetDataTableStatic(const struct FString& tableName);
	class UDataTableProxy* GetDataTableProxy(const struct FName& tableName, bool bTempory, const struct FName& SystemName, const struct FName& SubModName);
};




class UUELanguageUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UELanguageUtilityMethods");
		return pStaticClass;
	}


	static void SetDownLoadLanguageName(const struct FString& Language);
	static bool IsJaguar();
	static struct FString GetPublishRegion();
	static struct FString GetDownLoadLanguageName();
	static struct FString GetCurrentLanguageName();
	static struct FString ConvertLanguageName(const struct FString& prelanguage);
	static bool CheckLocalizationExist();
};




class UUEMathUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UEMathUtilityMethods");
		return pStaticClass;
	}


	static void VectorNormalizeMultiple(const struct FVector& v1, float Multiple, struct FVector* Out);
	static void VectorMultiple(const struct FVector& v1, float Multiple, struct FVector* Out);
	static void VectorMinus(const struct FVector& v1, const struct FVector& v2, struct FVector* Out);
	static void VectorAdditive(const struct FVector& v1, const struct FVector& v2, struct FVector* Out);
	static bool FilterOKForCurrentMode(unsigned char ModeType, int ModeOpenFlag, const struct FString& ModeTypes);
	static void Conv_VectorToRotator(const struct FVector& Vec, struct FRotator* Out);
	static float CalculateAngleToTargetAngle(float StartAngle, float targetAngle, float StepAngle, EAngleRotationDirectionType Dir);
	static int BKDRHash(const struct FString& StrToHash, int Mod);
	static float AngleDis(float angleA, float angleB);
};




class UUEPathUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UEPathUtilityMethods");
		return pStaticClass;
	}


	static bool IsPathExist(const struct FString& HandlePath);
	static bool IsAvatarResPathExistRetODPakName(const struct FString& HandlePath, struct FString* OutODPakName);
	static bool IsAvatarResPathExist(const struct FString& HandlePath);
	static TArray<struct FString> GetPassiveDownloadResourcePaths();
	static TArray<int> GetPassiveDownloadResourceIDList();
	static struct FString GetODPakFileName(const struct FString& InODPakPath);
	static struct FString GetModName(class UObject* WorldContext);
	static void GetFullModName(class UObject* WorldContext, struct FString* MainMod, struct FString* SubMod);
	static bool FilterOKForCurrentModeString(const struct FString& CurrentModeString, const struct FString& CurrentExtraModeString, const struct FString& ModStringInfo, unsigned char ModeType, int ModeOpenFlag);
	static void ClearPassiveDownloadResourcePaths();
	static void ClearPassiveDownloadResourceIDList();
	static void AddPassiveResourceDownloadFlag(int ItemId);
};




class UVisionOptimizationDataProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.VisionOptimizationDataProviderInterface");
		return pStaticClass;
	}

};


}

