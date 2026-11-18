
 
#include "../SDK.hpp"

namespace SDK
{









void ABP_LobbyRefitCloseUp_C::GetCameraWorldLocation(struct FVector* cameraWorldLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.GetCameraWorldLocation");

	ABP_LobbyRefitCloseUp_C_GetCameraWorldLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (cameraWorldLocation != nullptr)
		*cameraWorldLocation = params.cameraWorldLocation;
}





void ABP_LobbyRefitCloseUp_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.UserConstructionScript");

	ABP_LobbyRefitCloseUp_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitCloseUp_C::Timeline_1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.Timeline_1");

	ABP_LobbyRefitCloseUp_C_Timeline_1_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitCloseUp_C::ChanTransformWithBlend(const struct FTransform& B)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.ChanTransformWithBlend");

	ABP_LobbyRefitCloseUp_C_ChanTransformWithBlend_Params params;
	params.B = B;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitCloseUp_C::ExecuteUbergraph_BP_LobbyRefitCloseUp(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.ExecuteUbergraph_BP_LobbyRefitCloseUp");

	ABP_LobbyRefitCloseUp_C_ExecuteUbergraph_BP_LobbyRefitCloseUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

