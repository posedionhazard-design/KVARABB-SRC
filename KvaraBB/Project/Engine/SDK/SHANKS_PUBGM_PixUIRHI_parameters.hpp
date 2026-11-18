#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UPxRHIImage_GetHandleObject_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UPxRHIMgr_RHIImageUpdate_Params
{
	class UPxRHIMgr*                                   pPxRHIImage;                                              
	bool                                               ReturnValue;                                              
};


struct UPxRHIMgr_RHIImageFindByObject_Params
{
	class UObject*                                     pCoreObject;                                              
	class UPxRHIMgr*                                   ReturnValue;                                              
};


struct UPxRHIMgr_RHIImageDestroy_Params
{
	class UPxRHIMgr*                                   pPxRHIImage;                                              
	bool                                               ReturnValue;                                              
};


struct UPxRHIMgr_RHIImageCreate_Params
{
	class UPxRHIImage*                                 ReturnValue;                                              
};


struct UPxRHIMgr_Get_Params
{
	class UPxRHIMgr*                                   ReturnValue;                                              
};

}

