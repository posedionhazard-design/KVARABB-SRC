#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UImgMediaSource_SetSequencePath_Params
{
	struct FString                                     Path;                                                     
};


struct UImgMediaSource_GetSequencePath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UImgMediaSource_GetProxies_Params
{
	TArray<struct FString>                             OutProxies;                                               
};

}

