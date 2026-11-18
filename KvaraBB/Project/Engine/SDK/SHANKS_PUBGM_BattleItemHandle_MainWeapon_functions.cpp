
 
#include "../SDK.hpp"

namespace SDK
{










void UBattleItemHandle_MainWeapon_C::MakeBulletInBagOrOnGround(const struct FItemDefineID& BulletDefine, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.MakeBulletInBagOrOnGround");

	UBattleItemHandle_MainWeapon_C_MakeBulletInBagOrOnGround_Params params;
	params.BulletDefine = BulletDefine;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBattleItemHandle_MainWeapon_C::CanDropWeapon(EBattleItemDropReason DropReason, bool* bCanDrop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CanDropWeapon");

	UBattleItemHandle_MainWeapon_C_CanDropWeapon_Params params;
	params.DropReason = DropReason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bCanDrop != nullptr)
		*bCanDrop = params.bCanDrop;
}







void UBattleItemHandle_MainWeapon_C::HandleOnWeaponDestroy(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleOnWeaponDestroy");

	UBattleItemHandle_MainWeapon_C_HandleOnWeaponDestroy_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBattleItemHandle_MainWeapon_C::AutoEquipAttachmentsInArray(bool bReplaceUse, TArray<class UBattleItemHandleBase*>* Array)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachmentsInArray");

	UBattleItemHandle_MainWeapon_C_AutoEquipAttachmentsInArray_Params params;
	params.bReplaceUse = bReplaceUse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}







void UBattleItemHandle_MainWeapon_C::ReturnMultiBullet(int WantReturnCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnMultiBullet");

	UBattleItemHandle_MainWeapon_C_ReturnMultiBullet_Params params;
	params.WantReturnCount = WantReturnCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBattleItemHandle_MainWeapon_C::GetWrapperClass(bool* found, class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWrapperClass");

	UBattleItemHandle_MainWeapon_C_GetWrapperClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}









void UBattleItemHandle_MainWeapon_C::GetBulletWrapperClass(int BulletID, bool* found, class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetBulletWrapperClass");

	UBattleItemHandle_MainWeapon_C_GetBulletWrapperClass_Params params;
	params.BulletID = BulletID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}








void UBattleItemHandle_MainWeapon_C::GetWeaponClass(bool* found, class UClass** WeaponClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetWeaponClass");

	UBattleItemHandle_MainWeapon_C_GetWeaponClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (WeaponClass != nullptr)
		*WeaponClass = params.WeaponClass;
}








void UBattleItemHandle_MainWeapon_C::CreateVirtualPendantItemHandle(const struct FItemDefineID& ItemDefineID, class UBattleItemHandleBase** ItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateVirtualPendantItemHandle");

	UBattleItemHandle_MainWeapon_C_CreateVirtualPendantItemHandle_Params params;
	params.ItemDefineID = ItemDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemHandle != nullptr)
		*ItemHandle = params.ItemHandle;
}





void UBattleItemHandle_MainWeapon_C::AutoEquipPendant()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipPendant");

	UBattleItemHandle_MainWeapon_C_AutoEquipPendant_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBattleItemHandle_MainWeapon_C::EquipPendant(int pendantID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.EquipPendant");

	UBattleItemHandle_MainWeapon_C_EquipPendant_Params params;
	params.pendantID = pendantID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBattleItemHandle_MainWeapon_C::CheckPendantCanAttach(bool* CanAttach)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CheckPendantCanAttach");

	UBattleItemHandle_MainWeapon_C_CheckPendantCanAttach_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CanAttach != nullptr)
		*CanAttach = params.CanAttach;
}







void UBattleItemHandle_MainWeapon_C::GetOwingtWeapon(class ASTExtraWeapon** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetOwingtWeapon");

	UBattleItemHandle_MainWeapon_C_GetOwingtWeapon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}





void UBattleItemHandle_MainWeapon_C::AutoEquipAttachments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.AutoEquipAttachments");

	UBattleItemHandle_MainWeapon_C_AutoEquipAttachments_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBattleItemHandle_MainWeapon_C::ReturnBullets(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnBullets");

	UBattleItemHandle_MainWeapon_C_ReturnBullets_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBattleItemHandle_MainWeapon_C::UpdateEquipedAttach(EWeaponAttachmentSocketType WeapAttachSockType, class UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle, bool IsEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.UpdateEquipedAttach");

	UBattleItemHandle_MainWeapon_C_UpdateEquipedAttach_Params params;
	params.WeapAttachSockType = WeapAttachSockType;
	params.WeapAttachItemHandle = WeapAttachItemHandle;
	params.IsEquip = IsEquip;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBattleItemHandle_MainWeapon_C::LocalHandleDisuse(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalHandleDisuse");

	UBattleItemHandle_MainWeapon_C_LocalHandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBattleItemHandle_MainWeapon_C::CreateWrapperOnGround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.CreateWrapperOnGround");

	UBattleItemHandle_MainWeapon_C_CreateWrapperOnGround_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBattleItemHandle_MainWeapon_C::GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableTargetLogicSocketName");

	UBattleItemHandle_MainWeapon_C_GetAvailableTargetLogicSocketName_Params params;
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









void UBattleItemHandle_MainWeapon_C::GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.GetAvailableInstantLogicSocketName");

	UBattleItemHandle_MainWeapon_C_GetAvailableInstantLogicSocketName_Params params;

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














void UBattleItemHandle_MainWeapon_C::JudgeHasTargetAttachmentSlot(int AttachBPID, EWeaponAttachmentSocketType AttachType, class UBackpackWeaponAttachHandle* AttachHandle, bool CanSwap, int AttachResID, bool* CanEquip, bool* HasOcupied, bool* CanReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.JudgeHasTargetAttachmentSlot");

	UBattleItemHandle_MainWeapon_C_JudgeHasTargetAttachmentSlot_Params params;
	params.AttachBPID = AttachBPID;
	params.AttachType = AttachType;
	params.AttachHandle = AttachHandle;
	params.CanSwap = CanSwap;
	params.AttachResID = AttachResID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CanEquip != nullptr)
		*CanEquip = params.CanEquip;
	if (HasOcupied != nullptr)
		*HasOcupied = params.HasOcupied;
	if (CanReplace != nullptr)
		*CanReplace = params.CanReplace;
}








bool UBattleItemHandle_MainWeapon_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDisuse");

	UBattleItemHandle_MainWeapon_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBattleItemHandle_MainWeapon_C::HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleUse");

	UBattleItemHandle_MainWeapon_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBattleItemHandle_MainWeapon_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandleDrop");

	UBattleItemHandle_MainWeapon_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBattleItemHandle_MainWeapon_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.HandlePickup");

	UBattleItemHandle_MainWeapon_C_HandlePickup_Params params;
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





void UBattleItemHandle_MainWeapon_C::ReturnAllBullets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnAllBullets");

	UBattleItemHandle_MainWeapon_C_ReturnAllBullets_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBattleItemHandle_MainWeapon_C::LocalAutoEquipAttachments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.LocalAutoEquipAttachments");

	UBattleItemHandle_MainWeapon_C_LocalAutoEquipAttachments_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBattleItemHandle_MainWeapon_C::ReturnBullet(int* BulletNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ReturnBullet");

	UBattleItemHandle_MainWeapon_C_ReturnBullet_Params params;
	params.BulletNum = BulletNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBattleItemHandle_MainWeapon_C::ExecuteUbergraph_BattleItemHandle_MainWeapon(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C.ExecuteUbergraph_BattleItemHandle_MainWeapon");

	UBattleItemHandle_MainWeapon_C_ExecuteUbergraph_BattleItemHandle_MainWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

