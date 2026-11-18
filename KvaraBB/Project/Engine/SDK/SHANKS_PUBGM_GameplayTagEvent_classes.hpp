#pragma once


 
namespace SDK
{






class UUAEGameplayTagEventNodeBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FGameplayTagQuery                           Requirements;                                             
	struct FString                                     LuaFilePath;                                              
	bool                                               bInitialAutoVerify;                                       
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTagEvent.UAEGameplayTagEventNodeBase");
		return pStaticClass;
	}


	void Validate(class AActor* NodeTarget, class UObject* Observer);
	void OnUnregistered(class AActor* NodeTarget, class UObject* Observer);
	void OnRegistered(class AActor* NodeTarget, class UObject* Observer);
	void Invalidate(class AActor* NodeTarget, class UObject* Observer);
};




class UUAEGameplayTagImposerSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x140];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTagEvent.UAEGameplayTagImposerSubsystem");
		return pStaticClass;
	}


	static void UntagActor(class AActor* Actor, TArray<struct FGameplayTag> InTags);
	static void UnregisterActorTagQueryUpdatedEvent(class AActor* Actor, int Handle);
	static bool UnregisterActorTagChangedEvent(class AActor* Actor, const struct FGameplayTag& InTag, const struct FScriptDelegate& InDelegate);
	static void TagActor(class AActor* Actor, TArray<struct FGameplayTag> InTags);
	static void RemoveAllMatchingTags(class AActor* Actor, const struct FGameplayTag& Tag);
	void RemoveAllActorTagEventNode(class AActor* TargetActor);
	static void RemoveActorTagEventNode(class UObject* WorldContextObject, int Handle);
	static int RegisterActorTagQueryUpdatedEvent(class AActor* Actor, const struct FGameplayTagQuery& Query, const struct FScriptDelegate& InDelegate);
	static bool RegisterActorTagChangedEvent(class AActor* Actor, const struct FGameplayTag& InTag, const struct FScriptDelegate& InDelegate);
	void OnActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	static class UUAEGameplayTagImposerSubsystem* Get(class UObject* WorldContextObject);
	static class AActor* FindFirstActorWithTag(class UObject* WorldContextObject, const struct FGameplayTag& SearchTag, bool bExactMatch);
	static int FindActorsWithTag(class UObject* WorldContextObject, const struct FGameplayTag& SearchTag, bool bExactMatch, TArray<class AActor*>* OutActors);
	static void ClearActorTags(class AActor* Actor, bool bNotifyAll);
	static int ApplyActorTagEventNode(class AActor* TargetActor, class UObject* NodeOwner, class UUAEGameplayTagEventNodeBase* NodeBase);
	static bool ActorHasMatchingTag(class AActor* Actor, const struct FGameplayTag& TagToCheck, bool bExactMatch);
	static bool ActorHasAnyTags(class AActor* Actor, TArray<struct FGameplayTag> InTags, bool bExactMatch);
	static bool ActorHasAllTags(class AActor* Actor, TArray<struct FGameplayTag> InTags, bool bExactMatch);
};


}

