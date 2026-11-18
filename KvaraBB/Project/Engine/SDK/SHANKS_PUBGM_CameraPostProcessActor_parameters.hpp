#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ACameraPostProcessActor_C_UserConstructionScript_Params
{
};


struct ACameraPostProcessActor_C_Timeline_LerpPPSettings__FinishedFunc_Params
{
};


struct ACameraPostProcessActor_C_Timeline_LerpPPSettings__UpdateFunc_Params
{
};


struct ACameraPostProcessActor_C_Event_LerpPostProcessSettings_Params
{
	class APostProcessVolume*                          currentPPVolumn;                                          
	struct FBP_STRUCT_CameraPostProcessSettings_type   targetPPSettingsStruct;                                   
	float                                              Time;                                                     
	int                                                ID;                                                       
	bool                                               isReverse;                                                
};


struct ACameraPostProcessActor_C_ExecuteUbergraph_CameraPostProcessActor_Params
{
	int                                                EntryPoint;                                               
};

}

