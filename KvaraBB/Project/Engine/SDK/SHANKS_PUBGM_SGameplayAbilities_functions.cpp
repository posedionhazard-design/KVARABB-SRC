
 
#include "../SDK.hpp"

namespace SDK
{













class UAbilityTask_Tick_WaitAbilityActivate* UAbilityTask_Tick_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirementsInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirementsInTick");

	UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirementsInTick_Params params;
	params.OwningAbility = OwningAbility;
	params.TagRequirements = TagRequirements;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











class UAbilityTask_Tick_WaitAbilityActivate* UAbilityTask_Tick_WaitAbilityActivate::WaitForAbilityActivateInTick_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick_Query");

	UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateInTick_Query_Params params;
	params.OwningAbility = OwningAbility;
	params.Query = Query;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












class UAbilityTask_Tick_WaitAbilityActivate* UAbilityTask_Tick_WaitAbilityActivate::WaitForAbilityActivateInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate.WaitForAbilityActivateInTick");

	UAbilityTask_Tick_WaitAbilityActivate_WaitForAbilityActivateInTick_Params params;
	params.OwningAbility = OwningAbility;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FGameplayTag USAbilitySystemBlueprintLibrary::RequestGameplayTag(const struct FString& InTagName, bool ErrorIfNotFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.RequestGameplayTag");

	USAbilitySystemBlueprintLibrary_RequestGameplayTag_Params params;
	params.InTagName = InTagName;
	params.ErrorIfNotFound = ErrorIfNotFound;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FGameplayTagContainer USAbilitySystemBlueprintLibrary::CreateGameplayTagContainer(TArray<struct FGameplayTag> SourceTags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemBlueprintLibrary.CreateGameplayTagContainer");

	USAbilitySystemBlueprintLibrary_CreateGameplayTagContainer_Params params;
	params.SourceTags = SourceTags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool USAbilitySystemComponent::TryActivateAbilitiesByTagString(const struct FString& AbilityTag, bool bAllowRemoteActivation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemComponent.TryActivateAbilitiesByTagString");

	USAbilitySystemComponent_TryActivateAbilitiesByTagString_Params params;
	params.AbilityTag = AbilityTag;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void USAbilitySystemComponent::ReloadAbilities()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemComponent.ReloadAbilities");

	USAbilitySystemComponent_ReloadAbilities_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FGameplayAbilitySpecHandle USAbilitySystemComponent::GiveAbilityByClass(class UClass* AbilityClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemComponent.GiveAbilityByClass");

	USAbilitySystemComponent_GiveAbilityByClass_Params params;
	params.AbilityClass = AbilityClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void USAbilitySystemComponent::CancelAbilitiesByTagString(const struct FString& AbilityTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SAbilitySystemComponent.CancelAbilitiesByTagString");

	USAbilitySystemComponent_CancelAbilitiesByTagString_Params params;
	params.AbilityTag = AbilityTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void USGameplayAbility::K2_OnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.K2_OnGiveAbility");

	USGameplayAbility_K2_OnGiveAbility_Params params;
	params.ActorInfo = ActorInfo;
	params.Spec = Spec;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddTargetRequiredTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddTargetRequiredTag");

	USGameplayAbility_AddTargetRequiredTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddTargetBlockedTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddTargetBlockedTag");

	USGameplayAbility_AddTargetBlockedTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddSourceRequiredTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddSourceRequiredTag");

	USGameplayAbility_AddSourceRequiredTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddSourceBlockedTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddSourceBlockedTag");

	USGameplayAbility_AddSourceBlockedTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddCancelAbilityTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddCancelAbilityTag");

	USGameplayAbility_AddCancelAbilityTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddBlockAbilityTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddBlockAbilityTag");

	USGameplayAbility_AddBlockAbilityTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddActivationRequiredTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddActivationRequiredTag");

	USGameplayAbility_AddActivationRequiredTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddActivationOwnedTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddActivationOwnedTag");

	USGameplayAbility_AddActivationOwnedTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddActivationBlockedTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddActivationBlockedTag");

	USGameplayAbility_AddActivationBlockedTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USGameplayAbility::AddAbilityTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SGameplayAbilities.SGameplayAbility.AddAbilityTag");

	USGameplayAbility_AddAbilityTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

