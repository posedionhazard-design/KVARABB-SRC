#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ABP_LobbyVehicle_C_TrySetHighLight_Params
{
	float                                              NewParam;                                                 
	float                                              NewParam1;                                                
	float                                              NewParam2;                                                
};


struct ABP_LobbyVehicle_C_SetHighLight_Params
{
	float                                              invincible;                                               
	float                                              FreExp;                                                   
	float                                              Speed;                                                    
};


struct ABP_LobbyVehicle_C_SetDMIParam_Params
{
	class UMaterialInstanceDynamic*                    Target;                                                   
	struct FName                                       Name;                                                     
	float                                              Value;                                                    
};


struct ABP_LobbyVehicle_C_GetVehicleMasterPath_Params
{
	int                                                VehicleSkinID;                                            
	struct FString                                     MeshBasePath;                                             
};


struct ABP_LobbyVehicle_C_UserConstructionScript_Params
{
};

}

