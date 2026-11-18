#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ULightningComponent_SetWidthDecay_Params
{
	float                                              InDecay;                                                  
};


struct ULightningComponent_SetShrinkWidth_Params
{
	bool                                               InBool;                                                   
};


struct ULightningComponent_SetPatternMask_Params
{
	int                                                InPatternMask;                                            
};


struct ULightningComponent_SetMaxFractalTime_Params
{
	int                                                InMaxFractalTime;                                         
};


struct ULightningComponent_SetLightningWidth_Params
{
	float                                              InWidth;                                                  
};


struct ULightningComponent_SetBrightnessDecay_Params
{
	float                                              InDecay;                                                  
};


struct ULightningComponent_SetAtlasNum_Params
{
	int                                                InVal;                                                    
};


struct ULightningComponent_RefreshLightningMesh_Params
{
};


struct ULightningComponent_IsShrinkWidth_Params
{
	bool                                               ReturnValue;                                              
};


struct ULightningComponent_GetWidthDecay_Params
{
	float                                              ReturnValue;                                              
};


struct ULightningComponent_GetPatternMask_Params
{
	int                                                ReturnValue;                                              
};


struct ULightningComponent_GetMaxFractalTime_Params
{
	int                                                ReturnValue;                                              
};


struct ULightningComponent_GetLightningWidth_Params
{
	float                                              ReturnValue;                                              
};


struct ULightningComponent_GetBrightnessDecay_Params
{
	float                                              ReturnValue;                                              
};


struct ULightningComponent_GetAtlasNum_Params
{
	float                                              ReturnValue;                                              
};

}

