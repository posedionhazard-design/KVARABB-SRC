#pragma once


 
namespace SDK
{





enum class EWidgetCompareType : uint8_t
{
	EWidgetCompareType__Equal      = 0,
	EWidgetCompareType__NotEqual   = 1,
	EWidgetCompareType__LessThan   = 2,
	EWidgetCompareType__LargeThan  = 3,
	EWidgetCompareType__EqualLessThan = 4,
	EWidgetCompareType__EqualLargeThan = 5,
	EWidgetCompareType__EWidgetCompareType_MAX = 6
};



enum class EUserWidgetNameEqualPolitics : uint8_t
{
	EUserWidgetNameEqualPolitics__Normal = 0,
	EUserWidgetNameEqualPolitics__StartsWith = 1,
	EUserWidgetNameEqualPolitics__Regex = 2,
	EUserWidgetNameEqualPolitics__EUserWidgetNameEqualPolitics_MAX = 3
};



enum class EUserWidgetFadingStatus : uint8_t
{
	EUserWidgetFadingStatus__UserWidgetFadingStatus_None = 0,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingIn = 1,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingOut = 2,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_MAX = 3
};



enum class EUAEUIMsgCallType : uint8_t
{
	EUAEUIMsgCallType__MCT_OnlySelf = 0,
	EUAEUIMsgCallType__MCT_AllFunc = 1,
	EUAEUIMsgCallType__MCT_MAX     = 2
};



enum class EDragYieldToScrollAxis : uint8_t
{
	EDragYieldToScrollAxis__None   = 0,
	EDragYieldToScrollAxis__Vertical = 1,
	EDragYieldToScrollAxis__Horizontal = 2,
	EDragYieldToScrollAxis__EDragYieldToScrollAxis_MAX = 3
};









struct FUserWidgetState
{
	struct FString                                     WidgetName;                                               
	struct FName                                       ContainerName;                                            
	int                                                ZOrder;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	class UUAEUserWidget*                              Widget;                                                   
};



struct FUnixTimestampCallback
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FLogicManagerCreateParams
{
	unsigned char                                      UnknownData00[0x10];                                      
	class UClass*                                      pLogicManagerClass;                                       
};

}

