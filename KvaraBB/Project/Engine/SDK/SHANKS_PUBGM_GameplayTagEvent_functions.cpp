
 
#include "../SDK.hpp"

namespace SDK
{










void UUAEGameplayTagEventNodeBase::Validate(class AActor* NodeTarget, class UObject* Observer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Validate");

	UUAEGameplayTagEventNodeBase_Validate_Params params;
	params.NodeTarget = NodeTarget;
	params.Observer = Observer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEGameplayTagEventNodeBase::OnUnregistered(class AActor* NodeTarget, class UObject* Observer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnUnregistered");

	UUAEGameplayTagEventNodeBase_OnUnregistered_Params params;
	params.NodeTarget = NodeTarget;
	params.Observer = Observer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEGameplayTagEventNodeBase::OnRegistered(class AActor* NodeTarget, class UObject* Observer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagEventNodeBase.OnRegistered");

	UUAEGameplayTagEventNodeBase_OnRegistered_Params params;
	params.NodeTarget = NodeTarget;
	params.Observer = Observer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEGameplayTagEventNodeBase::Invalidate(class AActor* NodeTarget, class UObject* Observer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagEventNodeBase.Invalidate");

	UUAEGameplayTagEventNodeBase_Invalidate_Params params;
	params.NodeTarget = NodeTarget;
	params.Observer = Observer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEGameplayTagImposerSubsystem::UntagActor(class AActor* Actor, TArray<struct FGameplayTag> InTags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UntagActor");

	UUAEGameplayTagImposerSubsystem_UntagActor_Params params;
	params.Actor = Actor;
	params.InTags = InTags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEGameplayTagImposerSubsystem::UnregisterActorTagQueryUpdatedEvent(class AActor* Actor, int Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagQueryUpdatedEvent");

	UUAEGameplayTagImposerSubsystem_UnregisterActorTagQueryUpdatedEvent_Params params;
	params.Actor = Actor;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UUAEGameplayTagImposerSubsystem::UnregisterActorTagChangedEvent(class AActor* Actor, const struct FGameplayTag& InTag, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.UnregisterActorTagChangedEvent");

	UUAEGameplayTagImposerSubsystem_UnregisterActorTagChangedEvent_Params params;
	params.Actor = Actor;
	params.InTag = InTag;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UUAEGameplayTagImposerSubsystem::TagActor(class AActor* Actor, TArray<struct FGameplayTag> InTags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.TagActor");

	UUAEGameplayTagImposerSubsystem_TagActor_Params params;
	params.Actor = Actor;
	params.InTags = InTags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEGameplayTagImposerSubsystem::RemoveAllMatchingTags(class AActor* Actor, const struct FGameplayTag& Tag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllMatchingTags");

	UUAEGameplayTagImposerSubsystem_RemoveAllMatchingTags_Params params;
	params.Actor = Actor;
	params.Tag = Tag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEGameplayTagImposerSubsystem::RemoveAllActorTagEventNode(class AActor* TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveAllActorTagEventNode");

	UUAEGameplayTagImposerSubsystem_RemoveAllActorTagEventNode_Params params;
	params.TargetActor = TargetActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEGameplayTagImposerSubsystem::RemoveActorTagEventNode(class UObject* WorldContextObject, int Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RemoveActorTagEventNode");

	UUAEGameplayTagImposerSubsystem_RemoveActorTagEventNode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










int UUAEGameplayTagImposerSubsystem::RegisterActorTagQueryUpdatedEvent(class AActor* Actor, const struct FGameplayTagQuery& Query, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagQueryUpdatedEvent");

	UUAEGameplayTagImposerSubsystem_RegisterActorTagQueryUpdatedEvent_Params params;
	params.Actor = Actor;
	params.Query = Query;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UUAEGameplayTagImposerSubsystem::RegisterActorTagChangedEvent(class AActor* Actor, const struct FGameplayTag& InTag, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.RegisterActorTagChangedEvent");

	UUAEGameplayTagImposerSubsystem_RegisterActorTagChangedEvent_Params params;
	params.Actor = Actor;
	params.InTag = InTag;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UUAEGameplayTagImposerSubsystem::OnActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.OnActorEndPlay");

	UUAEGameplayTagImposerSubsystem_OnActorEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UUAEGameplayTagImposerSubsystem* UUAEGameplayTagImposerSubsystem::Get(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.Get");

	UUAEGameplayTagImposerSubsystem_Get_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class AActor* UUAEGameplayTagImposerSubsystem::FindFirstActorWithTag(class UObject* WorldContextObject, const struct FGameplayTag& SearchTag, bool bExactMatch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.FindFirstActorWithTag");

	UUAEGameplayTagImposerSubsystem_FindFirstActorWithTag_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SearchTag = SearchTag;
	params.bExactMatch = bExactMatch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











int UUAEGameplayTagImposerSubsystem::FindActorsWithTag(class UObject* WorldContextObject, const struct FGameplayTag& SearchTag, bool bExactMatch, TArray<class AActor*>* OutActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.FindActorsWithTag");

	UUAEGameplayTagImposerSubsystem_FindActorsWithTag_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SearchTag = SearchTag;
	params.bExactMatch = bExactMatch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}








void UUAEGameplayTagImposerSubsystem::ClearActorTags(class AActor* Actor, bool bNotifyAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ClearActorTags");

	UUAEGameplayTagImposerSubsystem_ClearActorTags_Params params;
	params.Actor = Actor;
	params.bNotifyAll = bNotifyAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










int UUAEGameplayTagImposerSubsystem::ApplyActorTagEventNode(class AActor* TargetActor, class UObject* NodeOwner, class UUAEGameplayTagEventNodeBase* NodeBase)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ApplyActorTagEventNode");

	UUAEGameplayTagImposerSubsystem_ApplyActorTagEventNode_Params params;
	params.TargetActor = TargetActor;
	params.NodeOwner = NodeOwner;
	params.NodeBase = NodeBase;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UUAEGameplayTagImposerSubsystem::ActorHasMatchingTag(class AActor* Actor, const struct FGameplayTag& TagToCheck, bool bExactMatch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasMatchingTag");

	UUAEGameplayTagImposerSubsystem_ActorHasMatchingTag_Params params;
	params.Actor = Actor;
	params.TagToCheck = TagToCheck;
	params.bExactMatch = bExactMatch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UUAEGameplayTagImposerSubsystem::ActorHasAnyTags(class AActor* Actor, TArray<struct FGameplayTag> InTags, bool bExactMatch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAnyTags");

	UUAEGameplayTagImposerSubsystem_ActorHasAnyTags_Params params;
	params.Actor = Actor;
	params.InTags = InTags;
	params.bExactMatch = bExactMatch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UUAEGameplayTagImposerSubsystem::ActorHasAllTags(class AActor* Actor, TArray<struct FGameplayTag> InTags, bool bExactMatch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameplayTagEvent.UAEGameplayTagImposerSubsystem.ActorHasAllTags");

	UUAEGameplayTagImposerSubsystem_ActorHasAllTags_Params params;
	params.Actor = Actor;
	params.InTags = InTags;
	params.bExactMatch = bExactMatch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

