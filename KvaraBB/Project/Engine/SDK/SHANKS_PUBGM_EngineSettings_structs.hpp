#pragma once


 
namespace SDK
{





enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 2
};



enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2
};









struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                  
	struct FString                                     Desc;                                                     
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FGameModeName
{
	struct FString                                     Name;                                                     
	struct FSoftClassPath                              GameMode;                                                 
};

}

