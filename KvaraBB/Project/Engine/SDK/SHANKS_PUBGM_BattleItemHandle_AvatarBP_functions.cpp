
 
#include "../SDK.hpp"

namespace SDK
{









bool UBattleItemHandle_AvatarBP_C::IsSwimConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.IsSwimConfig");

	UBattleItemHandle_AvatarBP_C_IsSwimConfig_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBattleItemHandle_AvatarBP_C::BPNeedCheckCapacityInHandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.BPNeedCheckCapacityInHandleDisuse");

	UBattleItemHandle_AvatarBP_C_BPNeedCheckCapacityInHandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBattleItemHandle_AvatarBP_C::GetWrapperClass(class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWrapperClass");

	UBattleItemHandle_AvatarBP_C_GetWrapperClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}







struct FBattleItemData UBattleItemHandle_AvatarBP_C::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.ExtractItemData");

	UBattleItemHandle_AvatarBP_C_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBattleItemHandle_AvatarBP_C::LocalHandleDisuse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.LocalHandleDisuse");

	UBattleItemHandle_AvatarBP_C_LocalHandleDisuse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UWorld* UBattleItemHandle_AvatarBP_C::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWorldInternal");

	UBattleItemHandle_AvatarBP_C_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBattleItemHandle_AvatarBP_C::SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.SpawnWrapperOnGround");

	UBattleItemHandle_AvatarBP_C_SpawnWrapperOnGround_Params params;
	params.WrapperClass = WrapperClass;
	params.bUseRandomLoc = bUseRandomLoc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBattleItemHandle_AvatarBP_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDisuse");

	UBattleItemHandle_AvatarBP_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBattleItemHandle_AvatarBP_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDrop");

	UBattleItemHandle_AvatarBP_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBattleItemHandle_AvatarBP_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandlePickup");

	UBattleItemHandle_AvatarBP_C_HandlePickup_Params params;
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









bool UBattleItemHandle_AvatarBP_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleUse");

	UBattleItemHandle_AvatarBP_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

