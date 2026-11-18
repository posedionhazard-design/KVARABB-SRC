#pragma once


 
namespace SDK
{





enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7
};



enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2
};



enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2
};



enum class EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native = 0,
	EGameplayTagSourceType__DefaultTagList = 1,
	EGameplayTagSourceType__TagList = 2,
	EGameplayTagSourceType__DataTable = 3,
	EGameplayTagSourceType__Invalid = 4,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX = 5
};









struct FGameplayTag
{
	struct FName                                       TagName;                                                  
};



struct FGameplayTagContainer
{
	TArray<struct FGameplayTag>                        GameplayTags;                                             
	TArray<struct FGameplayTag>                        ParentTags;                                               
};



struct FGameplayTagQuery
{
	int                                                TokenStreamVersion;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FGameplayTag>                        TagDictionary;                                            
	TArray<unsigned char>                              QueryTokenStream;                                         
	struct FString                                     UserDescription;                                          
	struct FString                                     AutoDescription;                                          
};



struct FGameplayTagSource
{
	struct FName                                       SourceName;                                               
	EGameplayTagSourceType                             SourceType;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	class UGameplayTagsList*                           SourceTagList;                                            
};



struct FGameplayTagTableRow : public FTableRowBase
{
	struct FName                                       Tag;                                                      
	struct FString                                     DevComment;                                               
};



struct FGameplayTagCategoryRemap
{
	struct FString                                     BaseCategory;                                             
	TArray<struct FString>                             RemapCategories;                                          
};



struct FGameplayTagRedirect
{
	struct FName                                       OldTagName;                                               
	struct FName                                       NewTagName;                                               
};



struct FGameplayTagCreationWidgetHelper
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FGameplayTagReferenceHelper
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FGameplayTagNode
{
	unsigned char                                      UnknownData00[0x50];                                      
};

}

