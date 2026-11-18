#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UGameFrameworkComponentManager_RemoveReceiver_Params
{
	class AActor*                                      Receiver;                                                 
};


struct UGameFrameworkComponentManager_AddReceiver_Params
{
	class AActor*                                      Receiver;                                                 
	bool                                               bAddOnlyInGameWorlds;                                     
};

}

