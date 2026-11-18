#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UTweenManager_TweenScale_Params
{
	class UWidget*                                     Widget;                                                   
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Timespan;                                                 
	int                                                Type;                                                     
};


struct UTweenManager_TweenPosition_Params
{
	class UWidget*                                     Widget;                                                   
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Timespan;                                                 
	int                                                Type;                                                     
};


struct UTweenManager_TweenAlpha_Params
{
	class UWidget*                                     Widget;                                                   
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Timespan;                                                 
	int                                                Type;                                                     
};


struct UTweenManager_Tick_Params
{
	float                                              DeltaTime;                                                
};

}

