#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UFBHelper_DelayToSetAutoInitFacebookLog_Params
{
	bool                                               IsAutoInit;                                               
};


struct UFBHelper_DelayToInitFacebookSDK_Params
{
	bool                                               IsAutoInit;                                               
	bool                                               WithLaunchOption;                                         
};

}

