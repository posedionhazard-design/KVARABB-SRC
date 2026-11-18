#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UPxLogMgr_PxLogToggleSwitchLevel_Params
{
	EPxLogLevels                                       eLogLevel;                                                
	bool                                               beOpen;                                                   
};


struct UPxLogMgr_PxLogToggleSwitchGroup_Params
{
	EPxLogGroups                                       eLogGroup;                                                
	bool                                               beOpen;                                                   
};


struct UPxLogMgr_PxLogToggleForceLocalOutPut_Params
{
	bool                                               beOpen;                                                   
};


struct UPxLogMgr_PxLogEnable_Params
{
	bool                                               beEnable;                                                 
};


struct UPxLogMgr_Get_Params
{
	class UPxLogMgr*                                   ReturnValue;                                              
};


struct UPxLogMgr_DispatchLog_Params
{
	EPxLogGroups                                       eLogGroup;                                                
	EPxLogLevels                                       eLogLevel;                                                
	struct FString                                     strLogContent;                                            
};

}

