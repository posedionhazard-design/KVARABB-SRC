#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UMediaPlaneComponent_SetMediaPlane_Params
{
	struct FMediaPlaneParameters                       Plane;                                                    
};


struct UMediaPlaneComponent_OnRenderTextureChanged_Params
{
};


struct UMediaPlaneComponent_GetPlane_Params
{
	struct FMediaPlaneParameters                       ReturnValue;                                              
};

}

