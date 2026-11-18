#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UActorRepControlComponent_ToggleGroupedRepControlByUID_Params
{
	int64_t                                            UID;                                                      
	int                                                ControlMark;                                              
	int                                                RepControlGroup;                                          
};


struct UActorRepControlComponent_ShouldBlockRepByUID_Params
{
	int64_t                                            UID;                                                      
	int                                                RepControlGroup;                                          
	bool                                               ReturnValue;                                              
};


struct UActorRepControlComponent_GetControlGroupData_Params
{
	int                                                RepControlGroup;                                          
	struct FRepControlGroupData                        OutData;                                                  
	bool                                               ReturnValue;                                              
};


struct ARepControlActorBase_IsNetRelevantForCustomCheck_Params
{
	class AActor*                                      RealViewer;                                               
	class AActor*                                      ViewTarget;                                               
	struct FVector                                     SrcLocation;                                              
	bool                                               ReturnValue;                                              
};

}

