#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UActorSequenceComponent_StopPlay_Params
{
};


struct UActorSequenceComponent_StartPlay_Params
{
	float                                              StartTime;                                                
};


struct UActorSequenceComponent_OnStopOrFinsh_Params
{
};


struct UActorSequenceComponent_GetLength_Params
{
	float                                              ReturnValue;                                              
};

}

