#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UOMobileFBPL_IsRunningOnBattery_Params
{
	bool                                               ReturnValue;                                              
};


struct UOMobileFBPL_IsBatteryStateCharging_Params
{
	bool                                               ReturnValue;                                              
};


struct UOMobileFBPL_GetVolumeState_Params
{
	int                                                ReturnValue;                                              
};


struct UOMobileFBPL_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UOMobileFBPL_GetBatteryTemperature_Params
{
	float                                              ReturnValue;                                              
};


struct UOMobileFBPL_GetBatteryLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UOMobileFBPL_AreHeadphonesPluggedIn_Params
{
	bool                                               ReturnValue;                                              
};

}

