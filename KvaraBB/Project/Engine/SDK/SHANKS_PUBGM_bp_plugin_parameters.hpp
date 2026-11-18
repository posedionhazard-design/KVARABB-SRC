#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct Ubp_pluginBPLibrary_bp_pluginSendEvent_Params
{
	struct FString                                     jsonEventCmd;                                             
};


struct Ubp_pluginBPLibrary_bp_pluginRequestInstallWidget_Params
{
	int                                                wigetType;                                                
	struct FString                                     authInfo;                                                 
	int                                                ReturnValue;                                              
};


struct Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params
{
	struct FString                                     Param;                                                    
	float                                              ReturnValue;                                              
};


struct Ubp_pluginBPLibrary_bp_pluginIsInForeground_Params
{
	bool                                               ReturnValue;                                              
};


struct Ubp_pluginBPLibrary_bp_pluginGetInstalledWidgetType_Params
{
	int                                                ReturnValue;                                              
};

}

