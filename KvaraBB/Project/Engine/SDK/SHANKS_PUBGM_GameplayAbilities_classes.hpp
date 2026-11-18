#pragma once


 
namespace SDK
{






class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return pStaticClass;
	}


	static bool TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static bool TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	static bool TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static bool TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	static struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	static struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	static void SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	static bool NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	static struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	static struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& filter, class AActor* FilterActor);
	static bool IsValid(const struct FGameplayAttribute& Attribute);
	static bool IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	static bool IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	static bool HasHitResult(const struct FGameplayCueParameters& Parameters);
	static struct FTransform GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FTransform GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FVector GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static struct FVector GetOrigin(const struct FGameplayCueParameters& Parameters);
	static float GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
	static struct FTransform GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	static class AActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	static struct FHitResult GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	static struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
	static bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	static bool GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	static float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static float GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static float GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	static struct FGameplayEffectContextHandle GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	static int GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	static TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
	static TArray<class AActor*> GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	static int GetActorCount(const struct FGameplayCueParameters& Parameters);
	static class AActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index);
	static float GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static float GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static int GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static int GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);
	static float GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static struct FString GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	static class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
	static void ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	static struct FGameplayAbilityTargetDataHandle FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	static float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float baseValue, bool* bSuccess);
	static float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess);
	static bool EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	static void EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
	static bool EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
	static bool EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	static bool EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	static class UObject* EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	static struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	static struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	static class AActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	static void EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
	static bool DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor);
	static bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs);
	static struct FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
	static struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);
	static struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);
	static struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* LinkedGameplayEffect);
	static struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	static struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	static struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	static struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};




class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                      
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                        
	unsigned char                                      UnknownData01[0xC8];                                      
	float                                              OutgoingDuration;                                         
	float                                              IncomingDuration;                                         
	unsigned char                                      UnknownData02[0x28];                                      
	TArray<struct FString>                             ClientDebugStrings;                                       
	TArray<struct FString>                             ServerDebugStrings;                                       
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                     
	unsigned char                                      UnknownData03[0x50];                                      
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                          
	unsigned char                                      UnknownData04[0x238];                                     
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                      
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                       
	unsigned char                                      UnknownData05[0x8];                                       
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                     
	unsigned char                                      UnknownData06[0xB8];                                      
	class AActor*                                      OwnerActor;                                               
	class AActor*                                      AvatarActor;                                              
	unsigned char                                      UnknownData07[0x18];                                      
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                    
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                       
	struct FActiveGameplayCueContainer                 MinimalReplicationGameplayCues;                           
	unsigned char                                      UnknownData08[0x128];                                     
	TArray<unsigned char>                              BlockedAbilityBindings;                                   
	unsigned char                                      UnknownData09[0x128];                                     
	struct FMinimalReplicationTagCountMap              MinimalReplicationTags;                                   
	unsigned char                                      UnknownData10[0x10];                                      
	struct FReplicatedPredictionKeyMap                 ReplicatedPredictionKeyMap;                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return pStaticClass;
	}


	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int NewLevel);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	int RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
	int RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(const struct FGameplayEffectQuery& Query);
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};




class AAbilitySystemDebugHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return pStaticClass;
	}

};




class UAbilitySystemGlobals : public UObject
{
public:
	struct FSoftClassPath                              AbilitySystemGlobalsClassName;                            
	unsigned char                                      UnknownData00[0x28];                                      
	struct FGameplayTag                                ActivateFailCooldownTag;                                  
	struct FName                                       ActivateFailCooldownName;                                 
	struct FGameplayTag                                ActivateFailCostTag;                                      
	struct FName                                       ActivateFailCostName;                                     
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                               
	struct FName                                       ActivateFailTagsBlockedName;                              
	struct FGameplayTag                                ActivateFailTagsMissingTag;                               
	struct FName                                       ActivateFailTagsMissingName;                              
	struct FGameplayTag                                ActivateFailNetworkingTag;                                
	struct FName                                       ActivateFailNetworkingName;                               
	int                                                MinimalReplicationTagCountBits;                           
	bool                                               bAllowGameplayModEvaluationChannels;                      
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                      
	unsigned char                                      UnknownData01[0x2];                                       
	struct FName                                       GameplayModEvaluationChannelAliases[0xA];                 
	struct FSoftObjectPath                             GlobalCurveTableName;                                     
	struct FSoftObjectPath                             GlobalAttributeMetaDataTableName;                         
	struct FSoftObjectPath                             GlobalAttributeSetDefaultsTableName;                      
	TArray<struct FSoftObjectPath>                     GlobalAttributeSetDefaultsTableNames;                     
	struct FSoftObjectPath                             GlobalGameplayCueManagerClass;                            
	struct FSoftObjectPath                             GlobalGameplayCueManagerName;                             
	TArray<struct FString>                             GameplayCueNotifyPaths;                                   
	struct FSoftObjectPath                             GameplayTagResponseTableName;                             
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                 
	bool                                               PredictTargetGameplayEffects;                             
	unsigned char                                      UnknownData02[0x7];                                       
	class UCurveTable*                                 GlobalCurveTable;                                         
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                            
	class UDataTable*                                  GlobalAttributeMetaDataTable;                             
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                 
	unsigned char                                      UnknownData03[0x40];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return pStaticClass;
	}


	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};




class UAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return pStaticClass;
	}

};




class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return pStaticClass;
	}

};




class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              Health;                                                   
	float                                              Mana;                                                     
	float                                              MaxMana;                                                  
	float                                              Damage;                                                   
	float                                              SpellDamage;                                              
	float                                              PhysicalDamage;                                           
	float                                              CritChance;                                               
	float                                              CritMultiplier;                                           
	float                                              ArmorDamageReduction;                                     
	float                                              DodgeChance;                                              
	float                                              LifeSteal;                                                
	float                                              Strength;                                                 
	float                                              StackingAttribute1;                                       
	float                                              StackingAttribute2;                                       
	float                                              NoStackAttribute;                                         
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return pStaticClass;
	}

};




class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return pStaticClass;
	}

};




class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                            Ability;                                                  
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return pStaticClass;
	}

};




class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	struct FName                                       ForceName;                                                
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     FinishSetVelocity;                                        
	float                                              FinishClampVelocity;                                      
	unsigned char                                      UnknownData01[0x4];                                       
	class UCharacterMovementComponent*                 MovementComponent;                                        
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base");
		return pStaticClass;
	}

};




class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 
	struct FVector                                     WorldDirection;                                           
	float                                              Strength;                                                 
	float                                              Duration;                                                 
	bool                                               bIsAdditive;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	class UCurveFloat*                                 StrengthOverTime;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return pStaticClass;
	}


	static class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};




class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 
	struct FScriptMulticastDelegate                    OnLanded;                                                 
	struct FRotator                                    Rotation;                                                 
	float                                              Distance;                                                 
	float                                              Height;                                                   
	float                                              Duration;                                                 
	float                                              MinimumLandedTriggerTime;                                 
	bool                                               bFinishOnLanded;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	class UCurveVector*                                PathOffsetCurve;                                          
	class UCurveFloat*                                 TimeMappingCurve;                                         
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return pStaticClass;
	}


	void OnLandedCallback(const struct FHitResult& Hit);
	void Finish();
	static class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};




class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               
	unsigned char                                      UnknownData00[0x8];                                       
	struct FVector                                     StartLocation;                                            
	struct FVector                                     TargetLocation;                                           
	class AActor*                                      TargetActor;                                              
	struct FVector                                     TargetLocationOffset;                                     
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              Duration;                                                 
	bool                                               bDisableDestinationReachedInterrupt;                      
	bool                                               bSetNewMovementMode;                                      
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	bool                                               bRestrictSpeedToExpected;                                 
	class UCurveVector*                                PathOffsetCurve;                                          
	class UCurveFloat*                                 TimeMappingCurve;                                         
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                           
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                             
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
		return pStaticClass;
	}


	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
	void OnRep_TargetLocation();
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int TargetDataIndex, int TargetActorIndex, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};




class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnTimedOut;                                               
	struct FScriptMulticastDelegate                    OnTimedOutAndDestinationReached;                          
	struct FVector                                     StartLocation;                                            
	struct FVector                                     TargetLocation;                                           
	float                                              Duration;                                                 
	bool                                               bSetNewMovementMode;                                      
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          
	bool                                               bRestrictSpeedToExpected;                                 
	unsigned char                                      UnknownData00[0x1];                                       
	class UCurveVector*                                PathOffsetCurve;                                          
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return pStaticClass;
	}


	static class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};




class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 
	struct FVector                                     Location;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	class AActor*                                      LocationActor;                                            
	float                                              Strength;                                                 
	float                                              Duration;                                                 
	float                                              Radius;                                                   
	bool                                               bIsPush;                                                  
	bool                                               bIsAdditive;                                              
	bool                                               bNoZForce;                                                
	unsigned char                                      UnknownData01[0x1];                                       
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  
	class UCurveFloat*                                 StrengthOverTime;                                         
	bool                                               bUseFixedWorldDirection;                                  
	unsigned char                                      UnknownData02[0x3];                                       
	struct FRotator                                    FixedWorldDirection;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return pStaticClass;
	}


	static class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};




class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnTargetLocationReached;                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVector                                     StartLocation;                                            
	struct FVector                                     TargetLocation;                                           
	float                                              DurationOfMovement;                                       
	unsigned char                                      UnknownData01[0x8];                                       
	class UCurveFloat*                                 LerpCurve;                                                
	class UCurveVector*                                LerpCurveVector;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return pStaticClass;
	}


	static class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};




class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnSync;                                                   
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return pStaticClass;
	}


	static class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};




class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              
	struct FScriptMulticastDelegate                    OnBlendOut;                                               
	struct FScriptMulticastDelegate                    OnInterrupted;                                            
	struct FScriptMulticastDelegate                    OnCancelled;                                              
	unsigned char                                      UnknownData00[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return pStaticClass;
	}


	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	static class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};




class UAbilityTask_Repeat : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPerformAction;                                          
	struct FScriptMulticastDelegate                    OnFinished;                                               
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return pStaticClass;
	}


	static class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount);
};




class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return pStaticClass;
	}


	static class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
};




class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                             
	struct FScriptMulticastDelegate                    OnStateInterrupted;                                       
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return pStaticClass;
	}


	static class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, const struct FName& StateName, bool bEndCurrentState);
};




class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    TimeElapsed;                                              
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return pStaticClass;
	}


	static class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);
	static class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, const struct FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};




class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                               
	unsigned char                                      UnknownData00[0xA8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return pStaticClass;
	}


	static class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};




class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCommit;                                                 
	unsigned char                                      UnknownData00[0x68];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return pStaticClass;
	}


	static class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce);
	static class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};




class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 
	unsigned char                                      UnknownData00[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return pStaticClass;
	}


	static class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce);
	static class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce);
};




class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 
	unsigned char                                      UnknownData00[0x78];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
		return pStaticClass;
	}


	static class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce);
};




class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 
	unsigned char                                      UnknownData00[0x40];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
		return pStaticClass;
	}


	static class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce);
};




class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCancel;                                                 
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return pStaticClass;
	}


	static class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};




class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return pStaticClass;
	}


	static class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};




class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                
	struct FScriptMulticastDelegate                    OnCancel;                                                 
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return pStaticClass;
	}


	static class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};




class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return pStaticClass;
	}


	static class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};




class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x128];                                     
	class UAbilitySystemComponent*                     ExternalOwner;                                            
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return pStaticClass;
	}


	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};




class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return pStaticClass;
	}


	static class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	static class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};




class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return pStaticClass;
	}


	static class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	static class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};




class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    bLocked;                                                  
	unsigned char                                      UnknownData00[0x88];                                      
	class UAbilitySystemComponent*                     ExternalOwner;                                            
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
		return pStaticClass;
	}


	static class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};




class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                
	struct FScriptMulticastDelegate                    InvalidHandle;                                            
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return pStaticClass;
	}


	static class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};




class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 
	struct FScriptMulticastDelegate                    InvalidHandle;                                            
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return pStaticClass;
	}


	static class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount);
};




class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    EventReceived;                                            
	unsigned char                                      UnknownData00[0x8];                                       
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return pStaticClass;
	}


	static class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};




class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return pStaticClass;
	}


	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);
};




class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return pStaticClass;
	}


	static class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};




class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return pStaticClass;
	}


	static class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};




class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPress;                                                  
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return pStaticClass;
	}


	static class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};




class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRelease;                                                
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return pStaticClass;
	}


	static class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};




class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                 
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return pStaticClass;
	}


	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	static class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
};




class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnOverlap;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return pStaticClass;
	}


	static class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};




class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                
	struct FScriptMulticastDelegate                    Cancelled;                                                
	unsigned char                                      UnknownData00[0x8];                                       
	class AGameplayAbilityTargetActor*                 TargetActor;                                              
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return pStaticClass;
	}


	static class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	static class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};




class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityChage;                                          
	class UMovementComponent*                          CachedMovementComponent;                                  
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return pStaticClass;
	}


	static class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
};




class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      
	struct FGameplayTagContainer                       AbilityTags;                                              
	unsigned char                                      UnknownData01[0x18];                                      
	bool                                               bReplicateInputDirectly;                                  
	unsigned char                                      UnknownData02[0x28];                                      
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                        
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                         
	bool                                               bServerRespectsRemoteAbilityCancellation;                 
	bool                                               bRetriggerInstancedAbility;                               
	unsigned char                                      UnknownData03[0x3];                                       
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                    
	struct FGameplayEventData                          CurrentEventData;                                         
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                       
	unsigned char                                      UnknownData04[0x7];                                       
	class UClass*                                      CostGameplayEffectClass;                                  
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                          
	class UClass*                                      CooldownGameplayEffectClass;                              
	struct FGameplayTagQuery                           CancelAbilitiesMatchingTagQuery;                          
	struct FGameplayTagQuery                           ConstTagQuery;                                            
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                   
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                    
	struct FGameplayTagContainer                       ActivationOwnedTags;                                      
	struct FGameplayTagContainer                       ActivationRequiredTags;                                   
	struct FGameplayTagContainer                       ActivationBlockedTags;                                    
	struct FGameplayTagContainer                       SourceRequiredTags;                                       
	struct FGameplayTagContainer                       SourceBlockedTags;                                        
	struct FGameplayTagContainer                       TargetRequiredTags;                                       
	struct FGameplayTagContainer                       TargetBlockedTags;                                        
	TArray<class UGameplayTask*>                       ActiveTasks;                                              
	unsigned char                                      UnknownData05[0x70];                                      
	class UAnimMontage*                                CurrentMontage;                                           
	bool                                               bIsActive;                                                
	bool                                               bIsCancelable;                                            
	unsigned char                                      UnknownData06[0x16];                                      
	bool                                               bIsBlockingOtherAbilities;                                
	unsigned char                                      UnknownData07[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return pStaticClass;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void MontageJumpToSection(const struct FName& SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void InvalidateClientPredictionKey();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCooldownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const struct FName& InstanceName);
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const struct FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
};




class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return pStaticClass;
	}

};




class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                                MontageToPlay;                                            
	float                                              PlayRate;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       SectionName;                                              
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                      
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return pStaticClass;
	}

};




class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return pStaticClass;
	}

};




class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return pStaticClass;
	}

};




class AGameplayAbilityTargetActor : public AActor
{
public:
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                            
	unsigned char                                      UnknownData00[0x30];                                      
	class APlayerController*                           MasterPC;                                                 
	class UGameplayAbility*                            OwningAbility;                                            
	bool                                               bDestroyOnConfirmation;                                   
	unsigned char                                      UnknownData01[0x7];                                       
	class AActor*                                      SourceActor;                                              
	struct FWorldReticleParameters                     ReticleParams;                                            
	unsigned char                                      UnknownData02[0x4];                                       
	class UClass*                                      ReticleClass;                                             
	struct FGameplayTargetDataFilterHandle             filter;                                                   
	bool                                               bDebug;                                                   
	unsigned char                                      UnknownData03[0x17];                                      
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                  
	unsigned char                                      UnknownData04[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return pStaticClass;
	}


	void ConfirmTargeting();
	void CancelTargeting();
};




class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	struct FCollisionProfileName                       TraceProfile;                                             
	bool                                               bTraceAffectsAimPitch;                                    
	unsigned char                                      UnknownData00[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return pStaticClass;
	}

};




class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return pStaticClass;
	}

};




class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UMaterialInterface*                          PlacedActorMaterial;                                      
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return pStaticClass;
	}

};




class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return pStaticClass;
	}

};




class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return pStaticClass;
	}

};




class AGameplayAbilityWorldReticle : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bFaceOwnerFlat;                                           
	bool                                               bSnapToTargetedActor;                                     
	bool                                               bIsTargetValid;                                           
	bool                                               bIsTargetAnActor;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	class APlayerController*                           MasterPC;                                                 
	class AActor*                                      TargetingActor;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return pStaticClass;
	}


	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};




class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       
	TArray<class UActorComponent*>                     VisualizationComponents;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return pStaticClass;
	}

};




class UGameplayCueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return pStaticClass;
	}


	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};




class UGameplayCueManager : public UDataAsset
{
public:
	struct FGameplayCueObjectLibrary                   RuntimeGameplayCueObjectLibrary;                          
	struct FGameplayCueObjectLibrary                   EditorGameplayCueObjectLibrary;                           
	unsigned char                                      UnknownData00[0x1B8];                                     
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                           
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                       
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                       
	int                                                GameplayCueSendContextCount;                              
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FPreallocationInfo>                  PreallocationInfoList_Internal;                           
	unsigned char                                      UnknownData02[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return pStaticClass;
	}

};




class AGameplayCueNotify_Actor : public AActor
{
public:
	bool                                               WarnIfTimelineIsStillRunning;                             
	bool                                               WarnIfLatentActionIsStillRunning;                         
	unsigned char                                      UnknownData00[0x6];                                       
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FGameplayTagReferenceHelper                 ReferenceHelper;                                          
	struct FName                                       GameplayCueName;                                          
	bool                                               bAutoAttachToOwner;                                       
	bool                                               IsOverride;                                               
	bool                                               bUniqueInstancePerInstigator;                             
	bool                                               bUniqueInstancePerSourceObject;                           
	bool                                               bAllowMultipleOnActiveEvents;                             
	bool                                               bAllowMultipleWhileActiveEvents;                          
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                NumPreallocatedInstances;                                 
	unsigned char                                      UnknownData02[0x34];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return pStaticClass;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void K2_EndGameplayCue();
};




class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FGameplayTagReferenceHelper                 ReferenceHelper;                                          
	struct FName                                       GameplayCueName;                                          
	bool                                               IsOverride;                                               
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return pStaticClass;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};




class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                    
	class UParticleSystem*                             ParticleSystem;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return pStaticClass;
	}

};




class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                          
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return pStaticClass;
	}

};




class UGameplayCueTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator");
		return pStaticClass;
	}

};




class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator_Test");
		return pStaticClass;
	}

};




class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	EGameplayEffectDurationType                        DurationPolicy;                                           
	unsigned char                                      UnknownData01[0x7];                                       
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                        
	struct FScalableFloat                              Period;                                                   
	bool                                               bExecutePeriodicEffectOnApplication;                      
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                               
	struct FScalableFloat                              ChanceToApplyToTarget;                                    
	TArray<class UClass*>                              ApplicationRequirements;                                  
	TArray<class UClass*>                              TargetEffectClasses;                                      
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               
	TArray<class UClass*>                              OverflowEffects;                                          
	bool                                               bDenyOverflowApplication;                                 
	bool                                               bClearStackOnOverflow;                                    
	unsigned char                                      UnknownData03[0x6];                                       
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                         
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                           
	bool                                               bRequireModifierSuccessToTriggerCues;                     
	bool                                               bSuppressStackingCues;                                    
	unsigned char                                      UnknownData04[0x6];                                       
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                             
	class UGameplayEffectUIData*                       UIData;                                                   
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                            
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                            
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                   
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                               
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                            
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                           
	struct FGameplayEffectQuery                        GrantedApplicationImmunityQuery;                          
	unsigned char                                      UnknownData05[0x1];                                       
	EGameplayEffectStackingType                        StackingType;                                             
	unsigned char                                      UnknownData06[0x2];                                       
	int                                                StackLimitCount;                                          
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                               
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                   
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                    
	unsigned char                                      UnknownData07[0x5];                                       
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return pStaticClass;
	}

};




class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return pStaticClass;
	}

};




class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement");
		return pStaticClass;
	}


	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};




class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags;                                    
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return pStaticClass;
	}


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};




class UGameplayEffectTemplate : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectTemplate");
		return pStaticClass;
	}

};




class UGameplayEffectUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return pStaticClass;
	}

};




class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return pStaticClass;
	}

};




class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;              
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return pStaticClass;
	}


	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
};




class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                  
	unsigned char                                      UnknownData00[0x190];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return pStaticClass;
	}


	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx);
};




class UTickableAttributeSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return pStaticClass;
	}

};


}

