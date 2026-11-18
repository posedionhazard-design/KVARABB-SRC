
 
#include "../SDK.hpp"

namespace SDK
{











bool UBattleItemHandleWeaponBase_Handle_C::CanDisuseOldWeapon(bool* bDisuseResult, EBattleItemUseReason* InReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.CanDisuseOldWeapon");

	UBattleItemHandleWeaponBase_Handle_C_CanDisuseOldWeapon_Params params;
	params.bDisuseResult = bDisuseResult;
	params.InReason = InReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBattleItemHandleWeaponBase_Handle_C::GetBulletNumSaveToWrapper(int* Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetBulletNumSaveToWrapper");

	UBattleItemHandleWeaponBase_Handle_C_GetBulletNumSaveToWrapper_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}







void UBattleItemHandleWeaponBase_Handle_C::ConditionalAddAdditionalData(TArray<struct FBattleItemAdditionalData>* InAdditionalData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalData");

	UBattleItemHandleWeaponBase_Handle_C_ConditionalAddAdditionalData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InAdditionalData != nullptr)
		*InAdditionalData = params.InAdditionalData;
}







void UBattleItemHandleWeaponBase_Handle_C::ConditionalAddAdditionalDataToWrapper(class APickUpWrapperActor* PickUpWrapper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ConditionalAddAdditionalDataToWrapper");

	UBattleItemHandleWeaponBase_Handle_C_ConditionalAddAdditionalDataToWrapper_Params params;
	params.PickUpWrapper = PickUpWrapper;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBattleItemHandleWeaponBase_Handle_C::GetWeaponClassFromTable(bool* found, class UClass** WeaponClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWeaponClassFromTable");

	UBattleItemHandleWeaponBase_Handle_C_GetWeaponClassFromTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WeaponClass != nullptr)
		*WeaponClass = params.WeaponClass;
}







void UBattleItemHandleWeaponBase_Handle_C::EnableWeaponAttachmentBindDropToWeaponWrapper(bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.EnableWeaponAttachmentBindDropToWeaponWrapper");

	UBattleItemHandleWeaponBase_Handle_C_EnableWeaponAttachmentBindDropToWeaponWrapper_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}







void UBattleItemHandleWeaponBase_Handle_C::ParseAdditionalData(const struct FBattleItemPickupInfo& PickupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ParseAdditionalData");

	UBattleItemHandleWeaponBase_Handle_C_ParseAdditionalData_Params params;
	params.PickupInfo = PickupInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBattleItemHandleWeaponBase_Handle_C::GetOwingtWeapon(class ASTExtraWeapon** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetOwingtWeapon");

	UBattleItemHandleWeaponBase_Handle_C_GetOwingtWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}










void UBattleItemHandleWeaponBase_Handle_C::SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc, const struct FItemDefineID& InDefineID, class APickUpWrapperActor** TargetWrapper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.SpawnWrapperOnGround");

	UBattleItemHandleWeaponBase_Handle_C_SpawnWrapperOnGround_Params params;
	params.WrapperClass = WrapperClass;
	params.bUseRandomLoc = bUseRandomLoc;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TargetWrapper != nullptr)
		*TargetWrapper = params.TargetWrapper;
}







class UWorld* UBattleItemHandleWeaponBase_Handle_C::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.GetWorldInternal");

	UBattleItemHandleWeaponBase_Handle_C_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBattleItemHandleWeaponBase_Handle_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDisuse");

	UBattleItemHandleWeaponBase_Handle_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBattleItemHandleWeaponBase_Handle_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleUse");

	UBattleItemHandleWeaponBase_Handle_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBattleItemHandleWeaponBase_Handle_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandleDrop");

	UBattleItemHandleWeaponBase_Handle_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBattleItemHandleWeaponBase_Handle_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.HandlePickup");

	UBattleItemHandleWeaponBase_Handle_C_HandlePickup_Params params;
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







struct FBattleItemData UBattleItemHandleWeaponBase_Handle_C::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C.ExtractItemData");

	UBattleItemHandleWeaponBase_Handle_C_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

