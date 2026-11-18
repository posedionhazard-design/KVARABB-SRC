#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	struct FGameplayTag                                Tag;                                                      
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
{
	struct FGameplayTag                                A;                                                        
	struct FString                                     B;                                                        
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        
	struct FString                                     B;                                                        
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        
	struct FGameplayTagContainer                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
{
	struct FGameplayTag                                A;                                                        
	struct FGameplayTag                                B;                                                        
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_MatchesTag_Params
{
	struct FGameplayTag                                TagOne;                                                   
	struct FGameplayTag                                TagTwo;                                                   
	bool                                               bExactMatch;                                              
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_MatchesAnyTags_Params
{
	struct FGameplayTag                                TagOne;                                                   
	struct FGameplayTagContainer                       OtherContainer;                                           
	bool                                               bExactMatch;                                              
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       Value;                                                    
	struct FGameplayTagContainer                       ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
	struct FGameplayTag                                Value;                                                    
	struct FGameplayTag                                ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
	struct FGameplayTagQuery                           TagQuery;                                                 
	struct FGameplayTagQuery                           ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
{
	struct FGameplayTag                                SingleTag;                                                
	struct FGameplayTagContainer                       ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
{
	TArray<struct FGameplayTag>                        GameplayTags;                                             
	struct FGameplayTagContainer                       ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
{
	struct FGameplayTag                                GameplayTag;                                              
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_HasTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	struct FGameplayTag                                Tag;                                                      
	bool                                               bExactMatch;                                              
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_HasAnyTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	struct FGameplayTagContainer                       OtherContainer;                                           
	bool                                               bExactMatch;                                              
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_HasAllTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	struct FGameplayTagContainer                       OtherContainer;                                           
	bool                                               bExactMatch;                                              
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    
	struct FGameplayTagContainer                       OtherContainer;                                           
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_GetTagName_Params
{
	struct FGameplayTag                                GameplayTag;                                              
	struct FName                                       ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	int                                                ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	struct FString                                     ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
{
	struct FGameplayTag                                GameplayTag;                                              
	struct FString                                     ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      ActorClass;                                               
	struct FGameplayTagQuery                           GameplayTagQuery;                                         
	TArray<class AActor*>                              OutActors;                                                
};


struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        
	struct FGameplayTagContainer                       B;                                                        
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
{
	struct FGameplayTag                                A;                                                        
	struct FGameplayTag                                B;                                                        
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    
	struct FGameplayTag                                Tag;                                                      
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	struct FGameplayTagQuery                           TagQuery;                                                 
	bool                                               ReturnValue;                                              
};


struct UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     
	TArray<struct FGameplayTag>                        GameplayTags;                                             
};


struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
	struct FGameplayTagContainer                       InOutTagContainer;                                        
	struct FGameplayTagContainer                       InTagContainer;                                           
};


struct UBlueprintGameplayTagLibrary_AddGameplayTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	struct FGameplayTag                                Tag;                                                      
};


struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
	struct FGameplayTag                                TagToCheck;                                               
	bool                                               ReturnValue;                                              
};


struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	bool                                               ReturnValue;                                              
};


struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
	bool                                               ReturnValue;                                              
};


struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             
};

}

