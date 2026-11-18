#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UWebCameraWidget_UnLockScreenOrientation_Params
{
};


struct UWebCameraWidget_SwitchFrontAndBackCamera_Params
{
	bool                                               ReturnValue;                                              
};


struct UWebCameraWidget_SetDeviceId_Params
{
	int                                                ID;                                                       
};


struct UWebCameraWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        
};


struct UWebCameraWidget_SaveAsImage_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UWebCameraWidget_ReleaseVideoGrabber_Params
{
};


struct UWebCameraWidget_LockScreenOrientation_Params
{
};


struct UWebCameraWidget_InitVideoGrabber_Params
{
};


struct UWebCameraWidget_GetFrontCameraId_Params
{
	int                                                ReturnValue;                                              
};


struct UWebCameraWidget_GetBackCameraId_Params
{
	int                                                ReturnValue;                                              
};

}

