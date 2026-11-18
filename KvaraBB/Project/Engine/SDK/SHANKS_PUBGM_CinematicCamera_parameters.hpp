#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ACineCameraActor_GetCineCameraComponent_Params
{
	class UCineCameraComponent*                        ReturnValue;                                              
};


struct UCineCameraComponent_SetLensPresetByName_Params
{
	struct FString                                     InPresetName;                                             
};


struct UCineCameraComponent_SetFilmbackPresetByName_Params
{
	struct FString                                     InPresetName;                                             
};


struct UCineCameraComponent_GetVerticalFieldOfView_Params
{
	float                                              ReturnValue;                                              
};


struct UCineCameraComponent_GetLensPresetName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCineCameraComponent_GetHorizontalFieldOfView_Params
{
	float                                              ReturnValue;                                              
};


struct UCineCameraComponent_GetFilmbackPresetName_Params
{
	struct FString                                     ReturnValue;                                              
};

}

