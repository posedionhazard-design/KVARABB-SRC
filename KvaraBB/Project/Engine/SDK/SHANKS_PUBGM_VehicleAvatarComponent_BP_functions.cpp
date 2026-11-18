
 
#include "../SDK.hpp"

namespace SDK
{









struct FName UVehicleAvatarComponent_BP_C::GetReflectionCubeName_Lobby()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.GetReflectionCubeName_Lobby");

	UVehicleAvatarComponent_BP_C_GetReflectionCubeName_Lobby_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UVehicleAvatarComponent_BP_C::TryAddLightEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.TryAddLightEffect");

	UVehicleAvatarComponent_BP_C_TryAddLightEffect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UVehicleAvatarComponent_BP_C::GetItemAvatarHandlePath(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.GetItemAvatarHandlePath");

	UVehicleAvatarComponent_BP_C_GetItemAvatarHandlePath_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UBackpackCommonAvatarHandle* UVehicleAvatarComponent_BP_C::GetItemAvatarHandle(int* ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.GetItemAvatarHandle");

	UVehicleAvatarComponent_BP_C_GetItemAvatarHandle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UVehicleAvatarComponent_BP_C::OnLoaded_F4972C3D46F3CFC0E0742D8E88D4527B(class UObject* Loaded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.OnLoaded_F4972C3D46F3CFC0E0742D8E88D4527B");

	UVehicleAvatarComponent_BP_C_OnLoaded_F4972C3D46F3CFC0E0742D8E88D4527B_Params params;
	params.Loaded = Loaded;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAvatarComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.ReceiveBeginPlay");

	UVehicleAvatarComponent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAvatarComponent_BP_C::OnAddLightEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.OnAddLightEffect");

	UVehicleAvatarComponent_BP_C_OnAddLightEffect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAvatarComponent_BP_C::LoadedBrokenMat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.LoadedBrokenMat");

	UVehicleAvatarComponent_BP_C_LoadedBrokenMat_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAvatarComponent_BP_C::ClearVehicleLightEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.ClearVehicleLightEffect");

	UVehicleAvatarComponent_BP_C_ClearVehicleLightEffect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAvatarComponent_BP_C::ExecuteUbergraph_VehicleAvatarComponent_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.ExecuteUbergraph_VehicleAvatarComponent_BP");

	UVehicleAvatarComponent_BP_C_ExecuteUbergraph_VehicleAvatarComponent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

