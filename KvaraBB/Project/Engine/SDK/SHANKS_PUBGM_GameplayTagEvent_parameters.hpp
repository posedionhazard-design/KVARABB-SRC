#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UUAEGameplayTagEventNodeBase_Validate_Params
{
	class AActor*                                      NodeTarget;                                               
	class UObject*                                     Observer;                                                 
};


struct UUAEGameplayTagEventNodeBase_OnUnregistered_Params
{
	class AActor*                                      NodeTarget;                                               
	class UObject*                                     Observer;                                                 
};


struct UUAEGameplayTagEventNodeBase_OnRegistered_Params
{
	class AActor*                                      NodeTarget;                                               
	class UObject*                                     Observer;                                                 
};


struct UUAEGameplayTagEventNodeBase_Invalidate_Params
{
	class AActor*                                      NodeTarget;                                               
	class UObject*                                     Observer;                                                 
};


struct UUAEGameplayTagImposerSubsystem_UntagActor_Params
{
	class AActor*                                      Actor;                                                    
	TArray<struct FGameplayTag>                        InTags;                                                   
};


struct UUAEGameplayTagImposerSubsystem_UnregisterActorTagQueryUpdatedEvent_Params
{
	class AActor*                                      Actor;                                                    
	int                                                Handle;                                                   
};


struct UUAEGameplayTagImposerSubsystem_UnregisterActorTagChangedEvent_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayTag                                InTag;                                                    
	struct FScriptDelegate                             InDelegate;                                               
	bool                                               ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_TagActor_Params
{
	class AActor*                                      Actor;                                                    
	TArray<struct FGameplayTag>                        InTags;                                                   
};


struct UUAEGameplayTagImposerSubsystem_RemoveAllMatchingTags_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayTag                                Tag;                                                      
};


struct UUAEGameplayTagImposerSubsystem_RemoveAllActorTagEventNode_Params
{
	class AActor*                                      TargetActor;                                              
};


struct UUAEGameplayTagImposerSubsystem_RemoveActorTagEventNode_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                Handle;                                                   
};


struct UUAEGameplayTagImposerSubsystem_RegisterActorTagQueryUpdatedEvent_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayTagQuery                           Query;                                                    
	struct FScriptDelegate                             InDelegate;                                               
	int                                                ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_RegisterActorTagChangedEvent_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayTag                                InTag;                                                    
	struct FScriptDelegate                             InDelegate;                                               
	bool                                               ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_OnActorEndPlay_Params
{
	class AActor*                                      Actor;                                                    
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            
};


struct UUAEGameplayTagImposerSubsystem_Get_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UUAEGameplayTagImposerSubsystem*             ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_FindFirstActorWithTag_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FGameplayTag                                SearchTag;                                                
	bool                                               bExactMatch;                                              
	class AActor*                                      ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_FindActorsWithTag_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FGameplayTag                                SearchTag;                                                
	TArray<class AActor*>                              OutActors;                                                
	bool                                               bExactMatch;                                              
	int                                                ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_ClearActorTags_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               bNotifyAll;                                               
};


struct UUAEGameplayTagImposerSubsystem_ApplyActorTagEventNode_Params
{
	class AActor*                                      TargetActor;                                              
	class UObject*                                     NodeOwner;                                                
	class UUAEGameplayTagEventNodeBase*                NodeBase;                                                 
	int                                                ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_ActorHasMatchingTag_Params
{
	class AActor*                                      Actor;                                                    
	struct FGameplayTag                                TagToCheck;                                               
	bool                                               bExactMatch;                                              
	bool                                               ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_ActorHasAnyTags_Params
{
	class AActor*                                      Actor;                                                    
	TArray<struct FGameplayTag>                        InTags;                                                   
	bool                                               bExactMatch;                                              
	bool                                               ReturnValue;                                              
};


struct UUAEGameplayTagImposerSubsystem_ActorHasAllTags_Params
{
	class AActor*                                      Actor;                                                    
	TArray<struct FGameplayTag>                        InTags;                                                   
	bool                                               bExactMatch;                                              
	bool                                               ReturnValue;                                              
};

}

