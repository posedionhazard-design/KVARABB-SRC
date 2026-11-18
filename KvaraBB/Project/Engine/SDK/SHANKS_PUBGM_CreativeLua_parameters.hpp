#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCreativeBridgeLuaVM_UGCLuaError_Params
{
	int                                                errCode;                                                  
};


struct UCreativeBridgeLuaVM_SetUGCSuspendStateFix_Params
{
	bool                                               bEnable;                                                  
};


struct UCreativeBridgeLuaVM_RegisterSluaCallUgcluaEventHandler_Params
{
};


struct UCreativeBridgeLuaVM_PostInit_Params
{
};


struct UCreativeBridgeLuaVM_GetUGCSuspendStateFix_Params
{
	bool                                               ReturnValue;                                              
};

}

