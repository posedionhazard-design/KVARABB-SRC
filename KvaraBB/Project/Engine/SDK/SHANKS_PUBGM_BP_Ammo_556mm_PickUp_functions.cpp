
 
#include "../SDK.hpp"

namespace SDK
{







void ABP_Ammo_556mm_Pickup_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_Ammo_556mm_PickUp.BP_Ammo_556mm_Pickup_C.UserConstructionScript");

	ABP_Ammo_556mm_Pickup_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

