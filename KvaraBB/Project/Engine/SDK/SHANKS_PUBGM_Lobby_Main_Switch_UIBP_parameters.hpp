#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ULobby_Main_Switch_UIBP_C_CheckAdaption_Params
{
	bool                                               bAdapt;                                                   
	float                                              Width;                                                    
	float                                              Height;                                                   
};


struct ULobby_Main_Switch_UIBP_C_GetAdaptWidthHeight_Params
{
	float                                              Width;                                                    
	float                                              Height;                                                   
	float                                              adaptWidth;                                               
	float                                              adaptHeight;                                              
};


struct ULobby_Main_Switch_UIBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               
	float*                                             InDeltaTime;                                              
};


struct ULobby_Main_Switch_UIBP_C_Construct_Params
{
};


struct ULobby_Main_Switch_UIBP_C_ExecuteUbergraph_Lobby_Main_Switch_UIBP_Params
{
	int                                                EntryPoint;                                               
};

}

