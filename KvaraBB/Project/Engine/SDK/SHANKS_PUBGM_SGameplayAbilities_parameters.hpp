#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirementsInTick_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTagRequirements                    TagRequirements;                                          
	bool                                               IncludeTriggeredAbilities;                                
	bool                                               TriggerOnce;                                              
	class UAbilityTask_Tick_WaitAbilityActivate*       ReturnValue;                                              
};


struct UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateInTick_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTagQuery                           Query;                                                    
	bool                                               IncludeTriggeredAbilities;                                
	bool                                               TriggerOnce;                                              
	class UAbilityTask_Tick_WaitAbilityActivate*       ReturnValue;                                              
};


struct UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateInTick_Params
{
	class UGameplayAbility*                            OwningAbility;                                            
	struct FGameplayTag                                WithTag;                                                  
	struct FGameplayTag                                WithoutTag;                                               
	bool                                               IncludeTriggeredAbilities;                                
	bool                                               TriggerOnce;                                              
	class UAbilityTask_Tick_WaitAbilityActivate*       ReturnValue;                                              
};


struct USAbilitySystemBlueprintLibrary_RequestGameplayTag_Params
{
	struct FString                                     InTagName;                                                
	bool                                               ErrorIfNotFound;                                          
	struct FGameplayTag                                ReturnValue;                                              
};


struct USAbilitySystemBlueprintLibrary_CreateGameplayTagContainer_Params
{
	TArray<struct FGameplayTag>                        SourceTags;                                               
	struct FGameplayTagContainer                       ReturnValue;                                              
};


struct USAbilitySystemComponent_TryActivateAbilitiesByTagString_Params
{
	struct FString                                     AbilityTag;                                               
	bool                                               bAllowRemoteActivation;                                   
	bool                                               ReturnValue;                                              
};


struct USAbilitySystemComponent_ReloadAbilities_Params
{
};


struct USAbilitySystemComponent_GiveAbilityByClass_Params
{
	class UClass*                                      AbilityClass;                                             
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                              
};


struct USAbilitySystemComponent_CancelAbilitiesByTagString_Params
{
	struct FString                                     AbilityTag;                                               
};


struct USGameplayAbility_K2_OnGiveAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                
	struct FGameplayAbilitySpec                        Spec;                                                     
};


struct USGameplayAbility_AddTargetRequiredTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddTargetBlockedTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddSourceRequiredTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddSourceBlockedTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddCancelAbilityTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddBlockAbilityTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddActivationRequiredTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddActivationOwnedTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddActivationBlockedTag_Params
{
	struct FString                                     TagName;                                                  
};


struct USGameplayAbility_AddAbilityTag_Params
{
	struct FString                                     TagName;                                                  
};

}

