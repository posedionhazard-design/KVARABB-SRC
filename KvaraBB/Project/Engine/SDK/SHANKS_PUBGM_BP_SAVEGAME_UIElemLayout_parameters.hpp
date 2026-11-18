#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBP_SAVEGAME_UIElemLayout_C_BPStructToCPP_Params
{
	struct FBP_STRUCT_UIElemLayoutDetail               In;                                                       
	struct FUIElemLayoutDetail                         Out;                                                      
};


struct UBP_SAVEGAME_UIElemLayout_C_CPPStructToBP_Params
{
	struct FUIElemLayoutDetail                         In;                                                       
	struct FBP_STRUCT_UIElemLayoutDetail               Out;                                                      
};

}

