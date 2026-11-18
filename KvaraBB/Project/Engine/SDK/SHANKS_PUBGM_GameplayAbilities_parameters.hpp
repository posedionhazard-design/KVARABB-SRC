#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	int                                                StackCount;                                               
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_SetDuration_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	float                                              Duration;                                                 
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayTag                                EventTag;                                                 
	struct FGameplayEventData                          Payload;                                                  
};


struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params
{
	struct FGameplayAttribute                          AttributeA;                                               
	struct FGameplayAttribute                          AttributeB;                                               
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
{
	class UGameplayEffect*                             InGameplayEffect;                                         
	class AActor*                                      InInstigator;                                             
	class AActor*                                      InEffectCauser;                                           
	float                                              InLevel;                                                  
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
{
	struct FGameplayTargetDataFilter                   filter;                                                   
	class AActor*                                      FilterActor;                                              
	struct FGameplayTargetDataFilterHandle             ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_IsValid_Params
{
	struct FGameplayAttribute                          Attribute;                                                
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                Index;                                                    
	struct FTransform                                  ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                Index;                                                    
	struct FTransform                                  ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                Index;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	struct FVector                                     ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayAttribute                          Attribute;                                                
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	struct FTransform                                  ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	class AActor*                                      ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                
	int                                                Index;                                                    
	struct FHitResult                                  ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	struct FHitResult                                  ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
{
	class AActor*                                      TargetActor;                                              
	struct FGameplayCueParameters                      Parameters;                                               
	struct FVector                                     Location;                                                 
	struct FVector                                     Normal;                                                   
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
{
	class AActor*                                      TargetActor;                                              
	struct FGameplayCueParameters                      Parameters;                                               
	struct FVector                                     Direction;                                                
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            
	struct FGameplayAttribute                          Attribute;                                                
	bool                                               bSuccessfullyFoundAttribute;                              
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   
	struct FGameplayAttribute                          Attribute;                                                
	bool                                               bSuccessfullyFoundAttribute;                              
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayAttribute                          Attribute;                                                
	bool                                               bSuccessfullyFoundAttribute;                              
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayAttribute                          Attribute;                                                
	bool                                               bSuccessfullyFoundAttribute;                              
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetEffectContext_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayEffectContextHandle                ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	TArray<struct FGameplayEffectSpecHandle>           ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                Index;                                                    
	TArray<class AActor*>                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	int                                                ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	int                                                Index;                                                    
	class AActor*                                      ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
	int                                                ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
	int                                                ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
	struct FString                                     ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
{
	class AActor*                                      Actor;                                                    
	class UAbilitySystemComponent*                     ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
{
	TScriptInterface<class UGameplayCueInterface>      TargetCueInterface;                                       
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                
	struct FGameplayCueParameters                      Parameters;                                               
};


struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                         
	struct FGameplayTargetDataFilterHandle             ActorFilterClass;                                         
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            
	struct FGameplayAttribute                          Attribute;                                                
	struct FGameplayTagContainer                       SourceTags;                                               
	struct FGameplayTagContainer                       TargetTags;                                               
	float                                              baseValue;                                                
	bool                                               bSuccess;                                                 
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            
	struct FGameplayAttribute                          Attribute;                                                
	struct FGameplayTagContainer                       SourceTags;                                               
	struct FGameplayTagContainer                       TargetTags;                                               
	bool                                               bSuccess;                                                 
	float                                              ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params
{
	struct FGameplayAttribute                          AttributeA;                                               
	struct FGameplayAttribute                          AttributeB;                                               
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	struct FVector                                     Origin;                                                   
};


struct UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	class UObject*                                     ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	class AActor*                                      ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	class AActor*                                      ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	struct FHitResult                                  ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	class AActor*                                      ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            
	struct FHitResult                                  HitResult;                                                
	bool                                               bReset;                                                   
};


struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	int                                                Index;                                                    
	class AActor*                                      Actor;                                                    
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
{
	struct FGameplayCueParameters                      Parameters;                                               
	struct FGameplayTagRequirements                    SourceTagReqs;                                            
	struct FGameplayTagRequirements                    TargetTagReqs;                                            
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params
{
	class AActor*                                      InNewInstigator;                                          
	class AActor*                                      InEffectCauser;                                           
	struct FGameplayEffectSpecHandle                   GameplayEffectSpecHandle_Clone;                           
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayTag                                DataTag;                                                  
	float                                              Magnitude;                                                
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FName                                       DataName;                                                 
	float                                              Magnitude;                                                
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetHandle;                                             
	struct FGameplayAbilityTargetDataHandle            HandleToAdd;                                              
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayEffectSpecHandle                   LinkedGameplayEffectSpec;                                 
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	class UClass*                                      LinkedGameplayEffect;                                     
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayTagContainer                       NewGameplayTags;                                          
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayTag                                NewGameplayTag;                                           
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayTagContainer                       NewGameplayTags;                                          
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FGameplayTag                                NewGameplayTag;                                           
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
{
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
{
	struct FHitResult                                  HitResult;                                                
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
{
	TArray<class AActor*>                              ActorArray;                                               
	bool                                               OneTargetPerHandle;                                       
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              
};


struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              
};


struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
{
	class UClass*                                      InAbilityToActivate;                                      
	bool                                               bAllowRemoteActivation;                                   
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     
	bool                                               bAllowRemoteActivation;                                   
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemComponent_TargetConfirm_Params
{
};


struct UAbilitySystemComponent_TargetCancel_Params
{
};


struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
{
	bool                                               NewInhibit;                                               
};


struct UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params
{
	struct FGameplayEffectQuery                        Query;                                                    
	int                                                NewLevel;                                                 
};


struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
	int                                                NewLevel;                                                 
};


struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        
	bool                                               InputPressed;                                             
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayEventData                          TriggerEventData;                                         
};


struct UAbilitySystemComponent_ServerTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        
	bool                                               InputPressed;                                             
	struct FPredictionKey                              PredictionKey;                                            
};


struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             
	struct FPredictionKey                              CurrentPredictionKey;                                     
};


struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             
	struct FGameplayAbilityTargetDataHandle            ReplicatedTargetDataHandle;                               
	struct FGameplayTag                                ApplicationTag;                                           
	struct FPredictionKey                              CurrentPredictionKey;                                     
};


struct UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             
	struct FPredictionKey                              CurrentPredictionKey;                                     
	struct FVector_NetQuantize100                      VectorPayload;                                            
};


struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             
	struct FPredictionKey                              CurrentPredictionKey;                                     
};


struct UAbilitySystemComponent_ServerSetInputReleased_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            
};


struct UAbilitySystemComponent_ServerSetInputPressed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            
};


struct UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params
{
	TArray<struct FString>                             Strings;                                                  
};


struct UAbilitySystemComponent_ServerPrintDebug_Request_Params
{
};


struct UAbilitySystemComponent_ServerEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                             
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           
	struct FPredictionKey                              PredictionKey;                                            
};


struct UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        
	float                                              InPlayRate;                                               
};


struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        
	float                                              ClientPosition;                                           
	struct FName                                       SectionName;                                              
	struct FName                                       NextSectionName;                                          
};


struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        
	struct FName                                       SectionName;                                              
};


struct UAbilitySystemComponent_ServerCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                          
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           
};


struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
{
	class UClass*                                      GameplayEffect;                                           
	class UAbilitySystemComponent*                     InstigatorAbilitySystemComponent;                         
	int                                                StacksToRemove;                                           
};


struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   
	int                                                StacksToRemove;                                           
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     
	int                                                ReturnValue;                                              
};


struct UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     
	int                                                ReturnValue;                                              
};


struct UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     
	int                                                ReturnValue;                                              
};


struct UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     
	int                                                ReturnValue;                                              
};


struct UAbilitySystemComponent_OnRep_ServerDebugString_Params
{
};


struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
{
};


struct UAbilitySystemComponent_OnRep_OwningActor_Params
{
};


struct UAbilitySystemComponent_OnRep_ClientDebugString_Params
{
};


struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
{
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayCueParameters                      GameplayCueParameters;                                    
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayEffectContextHandle                EffectContext;                                            
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayCueParameters                      GameplayCueParameters;                                    
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayCueParameters                      GameplayCueParameters;                                    
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                     
	struct FPredictionKey                              PredictionKey;                                            
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayEffectContextHandle                EffectContext;                                            
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayCueParameters                      GameplayCueParameters;                                    
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                     
	struct FPredictionKey                              PredictionKey;                                            
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayCueParameters                      Parameters;                                               
};


struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayEffectContextHandle                EffectContext;                                            
};


struct UAbilitySystemComponent_MakeOutgoingSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                      
	float                                              Level;                                                    
	struct FGameplayEffectContextHandle                Context;                                                  
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UAbilitySystemComponent_MakeEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              
};


struct UAbilitySystemComponent_K2_InitStats_Params
{
	class UClass*                                      Attributes;                                               
	class UDataTable*                                  DataTable;                                                
};


struct UAbilitySystemComponent_IsGameplayCueActive_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
{
	bool                                               ReturnValue;                                              
};


struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   
	struct FGameplayAttribute                          Attribute;                                                
	float                                              ReturnValue;                                              
};


struct UAbilitySystemComponent_GetGameplayEffectCount_Params
{
	class UClass*                                      SourceGameplayEffect;                                     
	class UAbilitySystemComponent*                     OptionalInstigatorFilterComponent;                        
	bool                                               bEnforceOnGoingCheck;                                     
	int                                                ReturnValue;                                              
};


struct UAbilitySystemComponent_GetActiveEffects_Params
{
	struct FGameplayEffectQuery                        Query;                                                    
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              
};


struct UAbilitySystemComponent_ClientTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        
};


struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             
};


struct UAbilitySystemComponent_ClientPrintDebug_Response_Params
{
	TArray<struct FString>                             Strings;                                                  
	int                                                GameFlags;                                                
};


struct UAbilitySystemComponent_ClientEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                             
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           
};


struct UAbilitySystemComponent_ClientCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                          
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           
};


struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        
	struct FPredictionKey                              PredictionKey;                                            
	struct FGameplayEventData                          TriggerEventData;                                         
};


struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        
	struct FPredictionKey                              PredictionKey;                                            
};


struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        
	int16_t                                            PredictionKey;                                            
};


struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
{
	class UClass*                                      GameplayEffectClass;                                      
	class UAbilitySystemComponent*                     Target;                                                   
	float                                              Level;                                                    
	struct FGameplayEffectContextHandle                Context;                                                  
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              
};


struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
{
	class UClass*                                      GameplayEffectClass;                                      
	float                                              Level;                                                    
	struct FGameplayEffectContextHandle                EffectContext;                                            
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              
};


struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	class UAbilitySystemComponent*                     Target;                                                   
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              
};


struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              
};


struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
{
};


struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
{
	int                                                InputID;                                                  
};


struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
{
};


struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
{
};


struct UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	struct FVector                                     WorldDirection;                                           
	float                                              Strength;                                                 
	float                                              Duration;                                                 
	bool                                               bIsAdditive;                                              
	class UCurveFloat*                                 StrengthOverTime;                                         
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     
	struct FVector                                     SetVelocityOnFinish;                                      
	float                                              ClampVelocityOnFinish;                                    
	class UAbilityTask_ApplyRootMotionConstantForce*   ReturnValue;                                              
};


struct UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
{
	struct FHitResult                                  Hit;                                                      
};


struct UAbilityTask_ApplyRootMotionJumpForce_Finish_Params
{
};


struct UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	struct FRotator                                    Rotation;                                                 
	float                                              Distance;                                                 
	float                                              Height;                                                   
	float                                              Duration;                                                 
	float                                              MinimumLandedTriggerTime;                                 
	bool                                               bFinishOnLanded;                                          
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     
	struct FVector                                     SetVelocityOnFinish;                                      
	float                                              ClampVelocityOnFinish;                                    
	class UCurveVector*                                PathOffsetCurve;                                          
	class UCurveFloat*                                 TimeMappingCurve;                                         
	class UAbilityTask_ApplyRootMotionJumpForce*       ReturnValue;                                              
};


struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params
{
	class AActor*                                      OriginalTarget;                                           
	class AActor*                                      NewTarget;                                                
};


struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params
{
};


struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                         
	int                                                TargetDataIndex;                                          
	int                                                TargetActorIndex;                                         
	struct FVector                                     TargetLocationOffset;                                     
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          
	float                                              Duration;                                                 
	class UCurveFloat*                                 TargetLerpSpeedHorizontal;                                
	class UCurveFloat*                                 TargetLerpSpeedVertical;                                  
	bool                                               bSetNewMovementMode;                                      
	TEnumAsByte<EMovementMode>                         MovementMode;                                             
	bool                                               bRestrictSpeedToExpected;                                 
	class UCurveVector*                                PathOffsetCurve;                                          
	class UCurveFloat*                                 TimeMappingCurve;                                         
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     
	struct FVector                                     SetVelocityOnFinish;                                      
	float                                              ClampVelocityOnFinish;                                    
	bool                                               bDisableDestinationReachedInterrupt;                      
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                              
};


struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	class AActor*                                      TargetActor;                                              
	struct FVector                                     TargetLocationOffset;                                     
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          
	float                                              Duration;                                                 
	class UCurveFloat*                                 TargetLerpSpeedHorizontal;                                
	class UCurveFloat*                                 TargetLerpSpeedVertical;                                  
	bool                                               bSetNewMovementMode;                                      
	TEnumAsByte<EMovementMode>                         MovementMode;                                             
	bool                                               bRestrictSpeedToExpected;                                 
	class UCurveVector*                                PathOffsetCurve;                                          
	class UCurveFloat*                                 TimeMappingCurve;                                         
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     
	struct FVector                                     SetVelocityOnFinish;                                      
	float                                              ClampVelocityOnFinish;                                    
	bool                                               bDisableDestinationReachedInterrupt;                      
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                              
};


struct UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	struct FVector                                     TargetLocation;                                           
	float                                              Duration;                                                 
	bool                                               bSetNewMovementMode;                                      
	TEnumAsByte<EMovementMode>                         MovementMode;                                             
	bool                                               bRestrictSpeedToExpected;                                 
	class UCurveVector*                                PathOffsetCurve;                                          
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     
	struct FVector                                     SetVelocityOnFinish;                                      
	float                                              ClampVelocityOnFinish;                                    
	class UAbilityTask_ApplyRootMotionMoveToForce*     ReturnValue;                                              
};


struct UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	struct FVector                                     Location;                                                 
	class AActor*                                      LocationActor;                                            
	float                                              Strength;                                                 
	float                                              Duration;                                                 
	float                                              Radius;                                                   
	bool                                               bIsPush;                                                  
	bool                                               bIsAdditive;                                              
	bool                                               bNoZForce;                                                
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  
	class UCurveFloat*                                 StrengthOverTime;                                         
	bool                                               bUseFixedWorldDirection;                                  
	struct FRotator                                    FixedWorldDirection;                                      
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     
	struct FVector                                     SetVelocityOnFinish;                                      
	float                                              ClampVelocityOnFinish;                                    
	class UAbilityTask_ApplyRootMotionRadialForce*     ReturnValue;                                              
};


struct UAbilityTask_MoveToLocation_MoveToLocation_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	struct FVector                                     Location;                                                 
	float                                              Duration;                                                 
	class UCurveFloat*                                 OptionalInterpolationCurve;                               
	class UCurveVector*                                OptionalVectorInterpolationCurve;                         
	class UAbilityTask_MoveToLocation*                 ReturnValue;                                              
};


struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	EAbilityTaskNetSyncType                            SyncType;                                                 
	class UAbilityTask_NetworkSyncPoint*               ReturnValue;                                              
};


struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
{
};


struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
{
};


struct UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	class UAnimMontage*                                MontageToPlay;                                            
	float                                              Rate;                                                     
	struct FName                                       StartSection;                                             
	bool                                               bStopWhenAbilityEnds;                                     
	float                                              AnimRootMotionTranslationScale;                           
	class UAbilityTask_PlayMontageAndWait*             ReturnValue;                                              
};


struct UAbilityTask_Repeat_RepeatAction_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	float                                              TimeBetweenActions;                                       
	int                                                TotalActionCount;                                         
	class UAbilityTask_Repeat*                         ReturnValue;                                              
};


struct UAbilityTask_SpawnActor_SpawnActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	class UClass*                                      Class;                                                    
	class UAbilityTask_SpawnActor*                     ReturnValue;                                              
};


struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	class AActor*                                      SpawnedActor;                                             
};


struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	class UClass*                                      Class;                                                    
	class AActor*                                      SpawnedActor;                                             
	bool                                               ReturnValue;                                              
};


struct UAbilityTask_StartAbilityState_StartAbilityState_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       StateName;                                                
	bool                                               bEndCurrentState;                                         
	class UAbilityTask_StartAbilityState*              ReturnValue;                                              
};


struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class AGameplayAbilityTargetActor*                 TargetActor;                                              
	struct FName                                       TaskInstanceName;                                         
	float                                              Duration;                                                 
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                              
};


struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class UClass*                                      Class;                                                    
	struct FName                                       TaskInstanceName;                                         
	float                                              Duration;                                                 
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                              
};


struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             
};


struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class UClass*                                      Class;                                                    
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             
	bool                                               ReturnValue;                                              
};


struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTagRequirements                    TagRequirements;                                          
	bool                                               IncludeTriggeredAbilities;                                
	bool                                               TriggerOnce;                                              
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              
};


struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTagQuery                           Query;                                                    
	bool                                               IncludeTriggeredAbilities;                                
	bool                                               TriggerOnce;                                              
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              
};


struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTag                                WithTag;                                                  
	struct FGameplayTag                                WithoutTag;                                               
	bool                                               IncludeTriggeredAbilities;                                
	bool                                               TriggerOnce;                                              
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              
};


struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         
};


struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTagQuery                           Query;                                                    
	bool                                               TriggerOnce;                                              
	class UAbilityTask_WaitAbilityCommit*              ReturnValue;                                              
};


struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTag                                WithTag;                                                  
	struct FGameplayTag                                WithoutTage;                                              
	bool                                               TriggerOnce;                                              
	class UAbilityTask_WaitAbilityCommit*              ReturnValue;                                              
};


struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         
};


struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayAttribute                          InAttribute;                                              
	struct FGameplayTag                                InWithTag;                                                
	struct FGameplayTag                                InWithoutTag;                                             
	TEnumAsByte<EWaitAttributeChangeComparison>        InComparisonType;                                         
	float                                              InComparisonValue;                                        
	bool                                               TriggerOnce;                                              
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                              
};


struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayAttribute                          Attribute;                                                
	struct FGameplayTag                                WithSrcTag;                                               
	struct FGameplayTag                                WithoutSrcTag;                                            
	bool                                               TriggerOnce;                                              
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                              
};


struct UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayAttribute                          AttributeNumerator;                                       
	struct FGameplayAttribute                          AttributeDenominator;                                     
	TEnumAsByte<EWaitAttributeChangeComparison>        ComparisonType;                                           
	float                                              ComparisonValue;                                          
	bool                                               bTriggerOnce;                                             
	class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;                                              
};


struct UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayAttribute                          Attribute;                                                
	TEnumAsByte<EWaitAttributeChangeComparison>        ComparisonType;                                           
	float                                              ComparisonValue;                                          
	bool                                               bTriggerOnce;                                             
	class UAbilityTask_WaitAttributeChangeThreshold*   ReturnValue;                                              
};


struct UAbilityTask_WaitCancel_WaitCancel_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class UAbilityTask_WaitCancel*                     ReturnValue;                                              
};


struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
{
};


struct UAbilityTask_WaitCancel_OnCancelCallback_Params
{
};


struct UAbilityTask_WaitConfirm_WaitConfirm_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class UAbilityTask_WaitConfirm*                    ReturnValue;                                              
};


struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
{
	class UGameplayAbility*                            InAbility;                                                
};


struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class UAbilityTask_WaitConfirmCancel*              ReturnValue;                                              
};


struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
{
};


struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
{
};


struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
{
};


struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
{
};


struct UAbilityTask_WaitDelay_WaitDelay_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	float                                              Time;                                                     
	class UAbilityTask_WaitDelay*                      ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
{
	class UAbilitySystemComponent*                     Target;                                                   
	struct FGameplayEffectSpec                         SpecApplied;                                              
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             
};


struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             
	struct FGameplayTagQuery                           SourceTagQuery;                                           
	struct FGameplayTagQuery                           TargetTagQuery;                                           
	bool                                               TriggerOnce;                                              
	class AActor*                                      OptionalExternalOwner;                                    
	bool                                               ListenForPeriodicEffect;                                  
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    
	bool                                               TriggerOnce;                                              
	class AActor*                                      OptionalExternalOwner;                                    
	bool                                               ListenForPeriodicEffect;                                  
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             
	struct FGameplayTagQuery                           SourceTagQuery;                                           
	struct FGameplayTagQuery                           TargetTagQuery;                                           
	bool                                               TriggerOnce;                                              
	class AActor*                                      OptionalExternalOwner;                                    
	bool                                               ListenForPeriodicEffect;                                  
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTargetDataFilterHandle             TargetFilter;                                             
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    
	bool                                               TriggerOnce;                                              
	class AActor*                                      OptionalExternalOwner;                                    
	bool                                               ListenForPeriodicEffects;                                 
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    
	class AActor*                                      OptionalExternalTarget;                                   
	bool                                               OnlyTriggerOnce;                                          
	class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FActiveGameplayEffectHandle                 Handle;                                                   
	class UAbilityTask_WaitGameplayEffectRemoved*      ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
{
	struct FGameplayEffectRemovalInfo                  InGameplayEffectRemovalInfo;                              
};


struct UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FActiveGameplayEffectHandle                 Handle;                                                   
	class UAbilityTask_WaitGameplayEffectStackChange*  ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   
	int                                                NewCount;                                                 
	int                                                OldCount;                                                 
};


struct UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTag                                EventTag;                                                 
	class AActor*                                      OptionalExternalTarget;                                   
	bool                                               OnlyTriggerOnce;                                          
	class UAbilityTask_WaitGameplayEvent*              ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
{
	struct FGameplayTag                                Tag;                                                      
	int                                                NewCount;                                                 
};


struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTag                                Tag;                                                      
	class AActor*                                      InOptionalExternalTarget;                                 
	bool                                               OnlyTriggerOnce;                                          
	class UAbilityTask_WaitGameplayTagAdded*           ReturnValue;                                              
};


struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTag                                Tag;                                                      
	class AActor*                                      InOptionalExternalTarget;                                 
	bool                                               OnlyTriggerOnce;                                          
	class UAbilityTask_WaitGameplayTagRemoved*         ReturnValue;                                              
};


struct UAbilityTask_WaitInputPress_WaitInputPress_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	bool                                               bTestAlreadyPressed;                                      
	class UAbilityTask_WaitInputPress*                 ReturnValue;                                              
};


struct UAbilityTask_WaitInputPress_OnPressCallback_Params
{
};


struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	bool                                               bTestAlreadyReleased;                                     
	class UAbilityTask_WaitInputRelease*               ReturnValue;                                              
};


struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
{
};


struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
{
	class ACharacter*                                  Character;                                                
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         
	unsigned char                                      PreviousCustomMode;                                       
};


struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	TEnumAsByte<EMovementMode>                         NewMode;                                                  
	class UAbilityTask_WaitMovementModeChange*         ReturnValue;                                              
};


struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class UAbilityTask_WaitOverlap*                    ReturnValue;                                              
};


struct UAbilityTask_WaitOverlap_OnHitCallback_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         
	class AGameplayAbilityTargetActor*                 TargetActor;                                              
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                              
};


struct UAbilityTask_WaitTargetData_WaitTargetData_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FName                                       TaskInstanceName;                                         
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         
	class UClass*                                      Class;                                                    
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                              
};


struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
{
};


struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     
	struct FGameplayTag                                ActivationTag;                                            
};


struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     
};


struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     
};


struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             
};


struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	class UClass*                                      Class;                                                    
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             
	bool                                               ReturnValue;                                              
};


struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FVector                                     Direction;                                                
	float                                              MinimumMagnitude;                                         
	class UAbilityTask_WaitVelocityChange*             ReturnValue;                                              
};


struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
{
	bool                                               bShouldBlockAbilities;                                    
};


struct UGameplayAbility_SetCanBeCanceled_Params
{
	bool                                               bCanBeCanceled;                                           
};


struct UGameplayAbility_SendGameplayEvent_Params
{
	struct FGameplayTag                                EventTag;                                                 
	struct FGameplayEventData                          Payload;                                                  
};


struct UGameplayAbility_RemoveGrantedByEffect_Params
{
};


struct UGameplayAbility_MontageStop_Params
{
	float                                              OverrideBlendOutTime;                                     
};


struct UGameplayAbility_MontageSetNextSectionName_Params
{
	struct FName                                       FromSectionName;                                          
	struct FName                                       ToSectionName;                                            
};


struct UGameplayAbility_MontageJumpToSection_Params
{
	struct FName                                       SectionName;                                              
};


struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
{
	struct FName                                       SocketName;                                               
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                              
};


struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
{
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                              
};


struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                      
	float                                              Level;                                                    
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              
};


struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                
	struct FGameplayEventData                          Payload;                                                  
	bool                                               ReturnValue;                                              
};


struct UGameplayAbility_K2_RemoveGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
};


struct UGameplayAbility_K2_OnEndAbility_Params
{
};


struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FGameplayCueParameters                      GameplayCueParameters;                                    
};


struct UGameplayAbility_K2_ExecuteGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FGameplayEffectContextHandle                Context;                                                  
};


struct UGameplayAbility_K2_EndAbility_Params
{
};


struct UGameplayAbility_K2_CommitExecute_Params
{
};


struct UGameplayAbility_K2_CommitAbilityCost_Params
{
	bool                                               BroadcastCommitEvent;                                     
	bool                                               ReturnValue;                                              
};


struct UGameplayAbility_K2_CommitAbilityCooldown_Params
{
	bool                                               BroadcastCommitEvent;                                     
	bool                                               ForceCooldown;                                            
	bool                                               ReturnValue;                                              
};


struct UGameplayAbility_K2_CommitAbility_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameplayAbility_K2_CheckAbilityCost_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameplayAbility_K2_CheckAbilityCooldown_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameplayAbility_K2_CancelAbility_Params
{
};


struct UGameplayAbility_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                
	struct FGameplayTagContainer                       RelevantTags;                                             
	bool                                               ReturnValue;                                              
};


struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              
};


struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              
};


struct UGameplayAbility_K2_AddGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           
	struct FGameplayEffectContextHandle                Context;                                                  
	bool                                               bRemoveOnAbilityEnd;                                      
};


struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                
};


struct UGameplayAbility_K2_ActivateAbility_Params
{
};


struct UGameplayAbility_InvalidateClientPredictionKey_Params
{
};


struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              
};


struct UGameplayAbility_GetOwningActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UGameplayAbility_GetGrantedByEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              
};


struct UGameplayAbility_GetCurrentSourceObject_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UGameplayAbility_GetCurrentMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              
};


struct UGameplayAbility_GetCooldownTimeRemaining_Params
{
	float                                              ReturnValue;                                              
};


struct UGameplayAbility_GetContextFromOwner_Params
{
	struct FGameplayAbilityTargetDataHandle            OptionalTargetData;                                       
	struct FGameplayEffectContextHandle                ReturnValue;                                              
};


struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct UGameplayAbility_GetActorInfo_Params
{
	struct FGameplayAbilityActorInfo                   ReturnValue;                                              
};


struct UGameplayAbility_GetAbilityLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UGameplayAbility_EndTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             
};


struct UGameplayAbility_EndAbilityState_Params
{
	struct FName                                       OptionalStateNameToEnd;                                   
};


struct UGameplayAbility_ConfirmTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             
	bool                                               bEndTask;                                                 
};


struct UGameplayAbility_CancelTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             
};


struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
{
	struct FGameplayTagContainer                       WithGrantedTags;                                          
	int                                                StacksToRemove;                                           
};


struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
{
	struct FGameplayTagContainer                       WithAssetTags;                                            
	int                                                StacksToRemove;                                           
};


struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               
	class UClass*                                      GameplayEffectClass;                                      
	int                                                GameplayEffectLevel;                                      
	int                                                Stacks;                                                   
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              
};


struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
{
	class UClass*                                      GameplayEffectClass;                                      
	int                                                GameplayEffectLevel;                                      
	int                                                Stacks;                                                   
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              
};


struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
{
};


struct AGameplayAbilityTargetActor_CancelTargeting_Params
{
};


struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
{
	struct FName                                       ParamName;                                                
	struct FVector                                     Value;                                                    
};


struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
{
	struct FName                                       ParamName;                                                
	float                                              Value;                                                    
};


struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
{
	bool                                               bNewValue;                                                
};


struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
{
	bool                                               bNewValue;                                                
};


struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
{
};


struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
{
	bool                                               bFaceIn2D;                                                
};


struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
{
};


struct UGameplayCueInterface_BlueprintCustomHandler_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                
	struct FGameplayCueParameters                      Parameters;                                               
};


struct AGameplayCueNotify_Actor_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct AGameplayCueNotify_Actor_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           
};


struct AGameplayCueNotify_Actor_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct AGameplayCueNotify_Actor_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                
	struct FGameplayCueParameters                      Parameters;                                               
};


struct AGameplayCueNotify_Actor_K2_EndGameplayCue_Params
{
};


struct UGameplayCueNotify_Static_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct UGameplayCueNotify_Static_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct UGameplayCueNotify_Static_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct UGameplayCueNotify_Static_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 
	struct FGameplayCueParameters                      Parameters;                                               
	bool                                               ReturnValue;                                              
};


struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                
	struct FGameplayCueParameters                      Parameters;                                               
};


struct UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params
{
	class UGameplayEffect*                             GameplayEffect;                                           
	struct FGameplayEffectSpec                         Spec;                                                     
	class UAbilitySystemComponent*                     ASC;                                                      
	bool                                               ReturnValue;                                              
};


struct UGameplayEffectExecutionCalculation_Execute_Params
{
	struct FGameplayEffectCustomExecutionParameters    ExecutionParams;                                          
	struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput;                                       
};


struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     
	float                                              ReturnValue;                                              
};


struct UGameplayTagReponseTable_TagResponseEvent_Params
{
	struct FGameplayTag                                Tag;                                                      
	int                                                NewCount;                                                 
	class UAbilitySystemComponent*                     ASC;                                                      
	int                                                idx;                                                      
};

}

