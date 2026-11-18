#pragma once


 
namespace SDK
{





enum class EAnchorsType : uint8_t
{
	EAnchorsType__TopLeft          = 0,
	EAnchorsType__TopCenter        = 1,
	EAnchorsType__TopRight         = 2,
	EAnchorsType__MidLeft          = 3,
	EAnchorsType__MidCenter        = 4,
	EAnchorsType__MidRight         = 5,
	EAnchorsType__BottomLeft       = 6,
	EAnchorsType__BottomCenter     = 7,
	EAnchorsType__BottomRight      = 8,
	EAnchorsType__Other            = 9,
	EAnchorsType__EAnchorsType_MAX = 10
};



enum class ESCPDisplayState : uint8_t
{
	ESCPDisplayState__Foreground   = 0,
	ESCPDisplayState__Background   = 1,
	ESCPDisplayState__Hidden       = 2,
	ESCPDisplayState__ESCPDisplayState_MAX = 3
};









struct FCustomLayoutBlueprintCode
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FUIElemLayoutDetail
{
	int                                                Type;                                                     
	float                                              Opacity;                                                  
	float                                              Scale;                                                    
	struct FAnchors                                    AnchorType;                                               
	struct FVector2D                                   RelativePos;                                              
	bool                                               Invalid;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FTouchStatInfo
{
	int                                                CustomType;                                               
	uint16_t                                           ScreenSpaceX;                                             
	uint16_t                                           ScreenSpaceY;                                             
};



struct FDynamicCustomInfo
{
	unsigned char                                      UnknownData00[0x28];                                      
	class UClass*                                      DynamicCustomAsset;                                       
	TArray<int>                                        CustomTypes;                                              
};



struct FDynamicCustomConfig
{
	bool                                               bIsShowInLobby;                                           
	bool                                               bIgnoreDPIScale;                                          
};

}

