#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UPxProfilerMgr_StartProfiler_Params
{
};


struct UPxProfilerMgr_PxProfilerCapabilitySwitch_Params
{
	EPxProfilerCapability                              EPxProfilerCapability;                                    
	bool                                               bOpen;                                                    
};


struct UPxProfilerMgr_Print_Params
{
};


struct UPxProfilerMgr_GetPxProfilerCapability_Params
{
	EPxProfilerCapability                              EPxProfilerCapability;                                    
	bool                                               ReturnValue;                                              
};


struct UPxProfilerMgr_EndProfiler_Params
{
};


struct UPxProfilerMgr_Check_Params
{
};

}

