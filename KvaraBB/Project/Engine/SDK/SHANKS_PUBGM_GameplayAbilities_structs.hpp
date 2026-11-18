#pragma once


 
namespace SDK
{





enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};



enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2
};



enum class EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__Rejected = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 5
};



enum class EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__GameCustom6 = 11,
	EAbilityGenericReplicatedEvent__MAX = 12
};



enum class EReplicationMode : uint8_t
{
	EReplicationMode__Minimal      = 0,
	EReplicationMode__Mixed        = 1,
	EReplicationMode__Full         = 2,
	EReplicationMode__EReplicationMode_MAX = 3
};



enum class EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame = 0,
	EAbilityTaskWaitState__WaitingOnUser = 1,
	EAbilityTaskWaitState__WaitingOnAvatar = 2,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX = 3
};



enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3
};



enum class EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3
};



enum class EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7
};



enum class EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9
};



enum class ETargetAbilitySelfSelection : uint8_t
{
	ETargetAbilitySelfSelection__TASS_Permit = 0,
	ETargetAbilitySelfSelection__TASS_Forbid = 1,
	ETargetAbilitySelfSelection__TASS_Require = 2,
	ETargetAbilitySelfSelection__TASS_MAX = 3
};



enum class ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3
};



enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3
};



enum class EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4
};



enum class EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3
};



enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2
};



enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4
};



enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3
};



enum class EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__EffectContext = 0,
	EGameplayCuePayloadType__CueParameters = 1,
	EGameplayCuePayloadType__FromSpec = 2,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 3
};



enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3
};



enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2
};



enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2
};



enum class EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3
};



enum class EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 4
};



enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4
};



enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2
};



enum class EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4
};



enum class EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3
};



enum class EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4
};



enum class EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0 = 0,
	EGameplayModEvaluationChannel__Channel1 = 1,
	EGameplayModEvaluationChannel__Channel2 = 2,
	EGameplayModEvaluationChannel__Channel3 = 3,
	EGameplayModEvaluationChannel__Channel4 = 4,
	EGameplayModEvaluationChannel__Channel5 = 5,
	EGameplayModEvaluationChannel__Channel6 = 6,
	EGameplayModEvaluationChannel__Channel7 = 7,
	EGameplayModEvaluationChannel__Channel8 = 8,
	EGameplayModEvaluationChannel__Channel9 = 9,
	EGameplayModEvaluationChannel__Channel_MAX = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX = 11
};









struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FGameplayEventData
{
	struct FGameplayTag                                EventTag;                                                 
	class AActor*                                      Instigator;                                               
	class AActor*                                      Target;                                                   
	class UObject*                                     OptionalObject;                                           
	class UObject*                                     OptionalObject2;                                          
	struct FGameplayEffectContextHandle                ContextHandle;                                            
	struct FGameplayTagContainer                       InstigatorTags;                                           
	struct FGameplayTagContainer                       TargetTags;                                               
	float                                              EventMagnitude;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
};



struct FGameplayAttribute
{
	struct FString                                     AttributeName;                                            
	class UProperty*                                   Attribute;                                                
	class UStruct*                                     AttributeOwner;                                           
};



struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData00[0x8];                                       
	class AActor*                                      SelfActor;                                                
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	class UClass*                                      RequiredActorClass;                                       
	bool                                               bReverseFilter;                                           
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                      
	float                                              RawMagnitude;                                             
	struct FGameplayEffectContextHandle                EffectContext;                                            
	struct FGameplayTag                                MatchedTagName;                                           
	struct FGameplayTag                                OriginalTag;                                              
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     
	struct FVector_NetQuantize10                       Location;                                                 
	struct FVector_NetQuantizeNormal                   Normal;                                                   
	TWeakObjectPtr<class AActor>                       Instigator;                                               
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             
	TWeakObjectPtr<class UObject>                      SourceObject;                                             
	TWeakObjectPtr<class UPhysicalMaterial>            PhysicalMaterial;                                         
	int                                                GameplayEffectLevel;                                      
	int                                                AbilityLevel;                                             
	TWeakObjectPtr<class USceneComponent>              TargetAttachComponent;                                    
};



struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                   
	bool                                               bPassedFiltersAndWasExecuted;                             
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                              
	struct FGameplayTagContainer                       IgnoreTags;                                               
};



struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData00[0x8];                                       
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                             
	unsigned char                                      UnknownData01[0x7];                                       
	struct FTransform                                  LiteralTransform;                                         
	class AActor*                                      SourceActor;                                              
	class UMeshComponent*                              SourceComponent;                                          
	class UGameplayAbility*                            SourceAbility;                                            
	struct FName                                       SourceSocketName;                                         
};



struct FAttributeDefaults
{
	class UClass*                                      Attributes;                                               
	class UDataTable*                                  DefaultStartingTable;                                     
};



struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                   
};



struct FPredictionKey
{
	int16_t                                            Current;                                                  
	int16_t                                            Base;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	class UPackageMap*                                 PredictiveConnection;                                     
	bool                                               bIsStale;                                                 
	bool                                               bIsServerInitiated;                                       
	unsigned char                                      UnknownData01[0x6];                                       
};



struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                           
	unsigned char                                      bCanBeEndedByOtherInstance : 1;                           
	unsigned char                                      UnknownData00[0x6];                                       
	struct FPredictionKey                              PredictionKeyWhenActivated;                               
};



struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   
	class UGameplayAbility*                            Ability;                                                  
	int                                                Level;                                                    
	int                                                InputID;                                                  
	class UObject*                                     SourceObject;                                             
	unsigned char                                      ActiveCount;                                              
	unsigned char                                      InputPressed : 1;                                         
	unsigned char                                      RemoveAfterActivation : 1;                                
	unsigned char                                      PendingRemove : 1;                                        
	unsigned char                                      UnknownData00[0x6];                                       
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                   
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                      
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                     
};



struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                    
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              
	float                                              PlayRate;                                                 
	float                                              Position;                                                 
	float                                              BlendTime;                                                
	unsigned char                                      NextSectionID;                                            
	unsigned char                                      IsStopped : 1;                                            
	unsigned char                                      ForcePlayBit : 1;                                         
	unsigned char                                      UnknownData00[0x2];                                       
	struct FPredictionKey                              PredictionKey;                                            
};



struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              
	bool                                               PlayBit;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FPredictionKey                              PredictionKey;                                            
	class UGameplayAbility*                            AnimatingAbility;                                         
};



struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute                          Attribute;                                                
	float                                              TotalMagnitude;                                           
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute                          AttributeToCapture;                                       
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                          
	bool                                               bSnapshot;                                                
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                        
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                         
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                         
	bool                                               bHasNonSnapshottedAttributes;                             
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                        
	struct FGameplayTagContainer                       CapturedSpecTags;                                         
	struct FGameplayTagContainer                       ScopedTags;                                               
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                       
};



struct FScalableFloat
{
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FCurveTableRowHandle                        Curve;                                                    
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FGameplayAbilitySpecDef
{
	class UClass*                                      Ability;                                                  
	int                                                Level;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FScalableFloat                              LevelScalableFloat;                                       
	int                                                InputID;                                                  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	class UObject*                                     SourceObject;                                             
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                           
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FGameplayEffectSpec
{
	class UGameplayEffect*                             Def;                                                      
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                               
	unsigned char                                      UnknownData00[0x10];                                      
	float                                              Duration;                                                 
	float                                              Period;                                                   
	float                                              ChanceToApplyToTarget;                                    
	unsigned char                                      UnknownData01[0x4];                                       
	struct FTagContainerAggregator                     CapturedSourceTags;                                       
	struct FTagContainerAggregator                     CapturedTargetTags;                                       
	struct FGameplayTagContainer                       DynamicGrantedTags;                                       
	struct FGameplayTagContainer                       DynamicAssetTags;                                         
	TArray<struct FModifierSpec>                       Modifiers;                                                
	int                                                StackCount;                                               
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                     
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                     
	unsigned char                                      bDurationLocked : 1;                                      
	unsigned char                                      UnknownData02[0x3];                                       
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                      
	unsigned char                                      UnknownData03[0xA0];                                      
	struct FGameplayEffectContextHandle                EffectContext;                                            
	float                                              Level;                                                    
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       
	struct FGameplayEffectSpec                         Spec;                                                     
	struct FPredictionKey                              PredictionKey;                                            
	float                                              StartServerWorldTime;                                     
	float                                              CachedStartServerWorldTime;                               
	float                                              StartWorldTime;                                           
	bool                                               bIsInhibited;                                             
	unsigned char                                      UnknownData01[0x83];                                      
};



struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x30];                                      
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                 
	unsigned char                                      UnknownData01[0x310];                                     
	TArray<class UGameplayEffect*>                     ApplicationImmunityQueryEffects;                          
	unsigned char                                      UnknownData02[0x18];                                      
};



struct FActiveGameplayCue : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               bPredictivelyRemoved;                                     
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                             
	class UAbilitySystemComponent*                     Owner;                                                    
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FMinimalReplicationTagCountMap
{
	unsigned char                                      UnknownData00[0x50];                                      
	class UAbilitySystemComponent*                     Owner;                                                    
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FPredictionKey                              PredictionKey;                                            
};



struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
	TArray<struct FReplicatedPredictionKeyItem>        PredictionKeys;                                           
};



struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x10];                                      
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                   
	struct FGameplayTagQuery                           OwningTagQuery;                                           
	struct FGameplayTagQuery                           EffectTagQuery;                                           
	struct FGameplayTagQuery                           SourceTagQuery;                                           
	struct FGameplayAttribute                          ModifyingAttribute;                                       
	class UObject*                                     EffectSource;                                             
	class UClass*                                      EffectDefinition;                                         
	unsigned char                                      UnknownData01[0x10];                                      
};



struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect*                             Def;                                                      
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       
	struct FGameplayEffectContextHandle                EffectContext;                                            
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     
	float                                              Level;                                                    
	float                                              AbilityLevel;                                             
};



struct FGameplayEffectRemovalInfo
{
	bool                                               bPrematureRemoval;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                StackCount;                                               
	struct FGameplayEffectContextHandle                EffectContext;                                            
};



struct FAbilityTriggerData
{
	struct FGameplayTag                                TriggerTag;                                               
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                            
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               
	TWeakObjectPtr<class AActor>                       AvatarActor;                                              
	TWeakObjectPtr<class APlayerController>            PlayerController;                                         
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                   
	TWeakObjectPtr<class USkeletalMeshComponent>       SkeletalMeshComponent;                                    
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                             
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                        
};



struct FGameplayAbilityBindInfo
{
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	class UClass*                                      GameplayAbilityClass;                                     
};



struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                 
};



struct FGameplayCueObjectLibrary
{
	TArray<struct FString>                             Paths;                                                    
	unsigned char                                      UnknownData00[0x20];                                      
	class UObjectLibrary*                              ActorObjectLibrary;                                       
	class UObjectLibrary*                              StaticObjectLibrary;                                      
	unsigned char                                      UnknownData01[0x4];                                       
	bool                                               bShouldSyncScan;                                          
	bool                                               bShouldAsyncLoad;                                         
	bool                                               bShouldSyncLoad;                                          
	unsigned char                                      UnknownData02[0x1];                                       
	class UGameplayCueSet*                             CueSet;                                                   
	bool                                               bHasBeenInitialized;                                      
	unsigned char                                      UnknownData03[0x7];                                       
};



struct FGameplayCuePendingExecute
{
	unsigned char                                      UnknownData00[0x18];                                      
	struct FPredictionKey                              PredictionKey;                                            
	EGameplayCuePayloadType                            PayloadType;                                              
	unsigned char                                      UnknownData01[0x7];                                       
	class UAbilitySystemComponent*                     OwningComponent;                                          
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                 
	struct FGameplayCueParameters                      CueParameters;                                            
};



struct FPreallocationInfo
{
	unsigned char                                      UnknownData00[0x50];                                      
	TArray<class UClass*>                              ClassesNeedingPreallocation;                              
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FSoftObjectPath                             GameplayCueNotifyObj;                                     
	class UClass*                                      LoadedGameplayCueClass;                                   
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FAttributeBasedFloat
{
	struct FScalableFloat                              Coefficient;                                              
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                         
	struct FCurveTableRowHandle                        AttributeCurve;                                           
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                 
	EGameplayModEvaluationChannel                      FinalChannel;                                             
	unsigned char                                      UnknownData00[0x6];                                       
	struct FGameplayTagContainer                       SourceTagFilter;                                          
	struct FGameplayTagContainer                       TargetTagFilter;                                          
};



struct FCustomCalculationBasedFloat
{
	class UClass*                                      CalculationClassMagnitude;                                
	struct FScalableFloat                              Coefficient;                                              
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                
	struct FCurveTableRowHandle                        FinalLookupCurve;                                         
};



struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                 
	struct FGameplayTag                                DataTag;                                                  
};



struct FGameplayEffectModifierMagnitude
{
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FScalableFloat                              ScalableFloatMagnitude;                                   
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                  
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                          
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                     
};



struct FGameplayModEvaluationChannelSettings
{
	EGameplayModEvaluationChannel                      Channel;                                                  
};



struct FGameplayModifierInfo
{
	struct FGameplayAttribute                          Attribute;                                                
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FScalableFloat                              Magnitude;                                                
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                
	unsigned char                                      UnknownData01[0x7];                                       
	struct FGameplayTagRequirements                    SourceTags;                                               
	struct FGameplayTagRequirements                    TargetTags;                                               
};



struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                        
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                
	unsigned char                                      UnknownData01[0x7];                                       
	struct FGameplayTagRequirements                    SourceTags;                                               
	struct FGameplayTagRequirements                    TargetTags;                                               
};



struct FConditionalGameplayEffect
{
	class UClass*                                      EffectClass;                                              
	struct FGameplayTagContainer                       RequiredSourceTags;                                       
};



struct FGameplayEffectExecutionDefinition
{
	class UClass*                                      CalculationClass;                                         
	struct FGameplayTagContainer                       PassedInTags;                                             
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                     
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                         
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               
};



struct FGameplayEffectCue
{
	struct FGameplayAttribute                          MagnitudeAttribute;                                       
	float                                              MinLevel;                                                 
	float                                              MaxLevel;                                                 
	struct FGameplayTagContainer                       GameplayCueTags;                                          
};



struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       CombinedTags;                                             
	struct FGameplayTagContainer                       Added;                                                    
	struct FGameplayTagContainer                       Removed;                                                  
};



struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData00[0xA8];                                      
};



struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute                          Attribute;                                                
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Magnitude;                                                
	struct FActiveGameplayEffectHandle                 Handle;                                                   
	bool                                               IsValid;                                                  
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FGameplayEffectCustomExecutionOutput
{
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                          
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                   
	unsigned char                                      bHandledStackCountManually : 1;                           
	unsigned char                                      bHandledGameplayCuesManually : 1;                         
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FGameplayTagReponsePair
{
	struct FGameplayTag                                Tag;                                                      
	class UClass*                                      ResponseGameplayEffect;                                   
	TArray<class UClass*>                              ResponseGameplayEffects;                                  
	int                                                SoftCountCap;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Positive;                                                 
	struct FGameplayTagReponsePair                     Negative;                                                 
};



struct FAttributeMetaData : public FTableRowBase
{
	float                                              baseValue;                                                
	float                                              MinValue;                                                 
	float                                              MaxValue;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     DerivedAttributeInfo;                                     
	bool                                               bCanStack;                                                
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FGlobalCurveDataOverride
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FGameplayAttributeData
{
	unsigned char                                      UnknownData00[0x8];                                       
	float                                              baseValue;                                                
	float                                              CurrentValue;                                             
};



struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                
};



struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                         
};



struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           
};



struct FAbilityTaskDebugMessage
{
	class UGameplayTask*                               FromTask;                                                 
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FAbilityEndedData
{
	class UGameplayAbility*                            AbilityThatEnded;                                         
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        
	bool                                               bReplicateEndAbility;                                     
	bool                                               bWasCancelled;                                            
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            
	int                                                PredictionKeyAtCreation;                                  
};



struct FGameplayCueTag
{
	struct FGameplayTag                                GameplayCueTag;                                           
};



struct FGameplayCueTranslationLink
{
	class UGameplayCueTranslator*                      RulesCDO;                                                 
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FGameplayCueTranslatorNodeIndex
{
	int                                                Index;                                                    
};



struct FGameplayCueTranslatorNode
{
	TArray<struct FGameplayCueTranslationLink>         Links;                                                    
	struct FGameplayCueTranslatorNodeIndex             CachedIndex;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FGameplayTag                                CachedGameplayTag;                                        
	struct FName                                       CachedGameplayTagName;                                    
	unsigned char                                      UnknownData01[0x50];                                      
};



struct FGameplayCueTranslationManager
{
	TArray<struct FGameplayCueTranslatorNode>          TranslationLUT;                                           
	TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                                
	class UGameplayTagsManager*                        TagManager;                                               
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x70];                                      
};



struct FGameplayEffectContext
{
	unsigned char                                      UnknownData00[0x8];                                       
	TWeakObjectPtr<class AActor>                       Instigator;                                               
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             
	TWeakObjectPtr<class UGameplayAbility>             AbilityCDO;                                               
	TWeakObjectPtr<class UGameplayAbility>             AbilityInstanceNotReplicated;                             
	int                                                AbilityLevel;                                             
	TWeakObjectPtr<class UObject>                      SourceObject;                                             
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                         
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   
	unsigned char                                      UnknownData02[0x10];                                      
	struct FVector                                     WorldOrigin;                                              
	bool                                               bHasWorldOrigin;                                          
	unsigned char                                      UnknownData03[0x3];                                       
};

}

