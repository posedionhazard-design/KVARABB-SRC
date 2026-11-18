#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAndroidPermissionFunctionLibrary_CheckPermission_Params
{
	struct FString                                     permission;                                               
	bool                                               ReturnValue;                                              
};


struct UAndroidPermissionFunctionLibrary_AcquirePermissions_Params
{
	TArray<struct FString>                             Permissions;                                              
	class UAndroidPermissionCallbackProxy*             ReturnValue;                                              
};

}

