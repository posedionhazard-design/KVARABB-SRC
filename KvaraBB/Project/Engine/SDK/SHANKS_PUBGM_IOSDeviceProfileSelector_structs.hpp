#pragma once


 
namespace SDK
{





enum class ECompareType : uint8_t
{
	CMP_Equal                      = 0,
	CMP_Less                       = 1,
	CMP_LessEqual                  = 2,
	CMP_Greater                    = 3,
	CMP_GreaterEqual               = 4,
	CMP_NotEqual                   = 5,
	CMP_Regex                      = 6,
	CMP_MAX                        = 7
};



enum class ESourceType : uint8_t
{
	SRC_PreviousRegexMatch         = 0,
	SRC_DeviceModel                = 1,
	SRC_iOSVersion                 = 2,
	SRC_MAX                        = 3
};









struct FProfileMatchItem
{
	TEnumAsByte<ESourceType>                           SourceType;                                               
	TEnumAsByte<ECompareType>                          CompareType;                                              
	unsigned char                                      UnknownData00[0x6];                                       
	struct FString                                     MatchString;                                              
};



struct FProfileMatch
{
	struct FString                                     Profile;                                                  
	TArray<struct FProfileMatchItem>                   Match;                                                    
};

}

