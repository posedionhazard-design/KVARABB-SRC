
 
#include "../SDK.hpp"

namespace SDK
{










void UBattleItemHandle_Pistol_C::GetWrapperClass(bool* found, class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetWrapperClass");

	UBattleItemHandle_Pistol_C_GetWrapperClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}







void UBattleItemHandle_Pistol_C::HandleWeaponDestroy(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleWeaponDestroy");

	UBattleItemHandle_Pistol_C_HandleWeaponDestroy_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBattleItemHandle_Pistol_C::IsMainSlotsHaveWeapon(bool* HasWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.IsMainSlotsHaveWeapon");

	UBattleItemHandle_Pistol_C_IsMainSlotsHaveWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (HasWeapon != nullptr)
		*HasWeapon = params.HasWeapon;
}







void UBattleItemHandle_Pistol_C::GetOwingtWeapon(class ASTExtraWeapon** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetOwingtWeapon");

	UBattleItemHandle_Pistol_C_GetOwingtWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}







void UBattleItemHandle_Pistol_C::LocalHandleDisuse(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.LocalHandleDisuse");

	UBattleItemHandle_Pistol_C_LocalHandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBattleItemHandle_Pistol_C::GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableTargetLogicSocketName");

	UBattleItemHandle_Pistol_C_GetAvailableTargetLogicSocketName_Params params;
	params.TargetSocket = TargetSocket;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (bNeedPutDownOldWeapon != nullptr)
		*bNeedPutDownOldWeapon = params.bNeedPutDownOldWeapon;
	if (bAutoUse != nullptr)
		*bAutoUse = params.bAutoUse;
}









void UBattleItemHandle_Pistol_C::GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.GetAvailableInstantLogicSocketName");

	UBattleItemHandle_Pistol_C_GetAvailableInstantLogicSocketName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
	if (bNeedPutDownOldWeapon != nullptr)
		*bNeedPutDownOldWeapon = params.bNeedPutDownOldWeapon;
	if (bAutoUse != nullptr)
		*bAutoUse = params.bAutoUse;
}





void UBattleItemHandle_Pistol_C::CreateWrapperOnGround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.CreateWrapperOnGround");

	UBattleItemHandle_Pistol_C_CreateWrapperOnGround_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UBattleItemHandle_Pistol_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandlePickup");

	UBattleItemHandle_Pistol_C_HandlePickup_Params params;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}









bool UBattleItemHandle_Pistol_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleUse");

	UBattleItemHandle_Pistol_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBattleItemHandle_Pistol_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDrop");

	UBattleItemHandle_Pistol_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBattleItemHandle_Pistol_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_Pistol.BattleItemHandle_Pistol_C.HandleDisuse");

	UBattleItemHandle_Pistol_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

