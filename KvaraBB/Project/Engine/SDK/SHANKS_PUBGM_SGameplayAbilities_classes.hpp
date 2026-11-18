#pragma once


 
namespace SDK
{






class UAbilityTask_Tick_WaitAbilityActivate : public UAbilityTask_WaitAbilityActivate
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate");
		return pStaticClass;
	}


	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirementsInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateInTick_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
};




class USAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SAbilitySystemBlueprintLibrary");
		return pStaticClass;
	}


	static struct FGameplayTag RequestGameplayTag(const struct FString& InTagName, bool ErrorIfNotFound);
	static struct FGameplayTagContainer CreateGameplayTagContainer(TArray<struct FGameplayTag> SourceTags);
};




class USAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	TArray<class UClass*>                              PreloadedAbilities;                                       
	TArray<struct FGameplayAbilitySpecHandle>          PreloadedAbilityHandles;                                  
	struct FLuaNetSerialization                        LuaNetSerialization;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SAbilitySystemComponent");
		return pStaticClass;
	}


	bool TryActivateAbilitiesByTagString(const struct FString& AbilityTag, bool bAllowRemoteActivation);
	void ReloadAbilities();
	struct FGameplayAbilitySpecHandle GiveAbilityByClass(class UClass* AbilityClass);
	void CancelAbilitiesByTagString(const struct FString& AbilityTag);
};




class USGameplayAbility : public UGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SGameplayAbility");
		return pStaticClass;
	}


	void K2_OnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec);
	void AddTargetRequiredTag(const struct FString& TagName);
	void AddTargetBlockedTag(const struct FString& TagName);
	void AddSourceRequiredTag(const struct FString& TagName);
	void AddSourceBlockedTag(const struct FString& TagName);
	void AddCancelAbilityTag(const struct FString& TagName);
	void AddBlockAbilityTag(const struct FString& TagName);
	void AddActivationRequiredTag(const struct FString& TagName);
	void AddActivationOwnedTag(const struct FString& TagName);
	void AddActivationBlockedTag(const struct FString& TagName);
	void AddAbilityTag(const struct FString& TagName);
};


}

