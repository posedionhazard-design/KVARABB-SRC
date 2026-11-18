
 
#include "../SDK.hpp"

namespace SDK
{









struct FName UVehicleAdvanceAvatarComp_BP_C::GetReflectionCubeName_Lobby()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.GetReflectionCubeName_Lobby");

	UVehicleAdvanceAvatarComp_BP_C_GetReflectionCubeName_Lobby_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UVehicleAdvanceAvatarComp_BP_C::PutOnItemIDInLobby(int InItemID, int ColorID, int PatternID, int Particle_ID, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.PutOnItemIDInLobby");

	UVehicleAdvanceAvatarComp_BP_C_PutOnItemIDInLobby_Params params;
	params.InItemID = InItemID;
	params.ColorID = ColorID;
	params.PatternID = PatternID;
	params.Particle_ID = Particle_ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}








void UVehicleAdvanceAvatarComp_BP_C::PutOffSlotInLobby(unsigned char InSlotType, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.PutOffSlotInLobby");

	UVehicleAdvanceAvatarComp_BP_C_PutOffSlotInLobby_Params params;
	params.InSlotType = InSlotType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}







void UVehicleAdvanceAvatarComp_BP_C::BP_ProcessStyleUnequipped(int OldStyleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_ProcessStyleUnequipped");

	UVehicleAdvanceAvatarComp_BP_C_BP_ProcessStyleUnequipped_Params params;
	params.OldStyleID = OldStyleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVehicleAdvanceAvatarComp_BP_C::Bp_ProcessAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_ProcessAvatarLogicUnequipped");

	UVehicleAdvanceAvatarComp_BP_C_Bp_ProcessAvatarLogicUnequipped_Params params;
	params.SlotID = SlotID;
	params.OldItemID = OldItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVehicleAdvanceAvatarComp_BP_C::BP_ProcessStyleEquipped(int NewStyleID, int OldStyleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_ProcessStyleEquipped");

	UVehicleAdvanceAvatarComp_BP_C_BP_ProcessStyleEquipped_Params params;
	params.NewStyleID = NewStyleID;
	params.OldStyleID = OldStyleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UVehicleAdvanceAvatarComp_BP_C::Bp_ProcessAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_ProcessAvatarLogicEquipped");

	UVehicleAdvanceAvatarComp_BP_C_Bp_ProcessAvatarLogicEquipped_Params params;
	params.SlotID = SlotID;
	params.NewItemID = NewItemID;
	params.OldItemID = OldItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UVehicleAdvanceAvatarComp_BP_C::BPCreateAvatarCustomHandle(int* SlotID, int* ItemId, struct FAvatarCustom* InCostomInfo, TArray<class UAvatarCustomBase*>* OutCustomHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BPCreateAvatarCustomHandle");

	UVehicleAdvanceAvatarComp_BP_C_BPCreateAvatarCustomHandle_Params params;
	params.SlotID = SlotID;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InCostomInfo != nullptr)
		*InCostomInfo = params.InCostomInfo;
	if (OutCustomHandle != nullptr)
		*OutCustomHandle = params.OutCustomHandle;
}








struct FVehicleStyleData UVehicleAdvanceAvatarComp_BP_C::MakeVehicleStyleData(int* InStyleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.MakeVehicleStyleData");

	UVehicleAdvanceAvatarComp_BP_C_MakeVehicleStyleData_Params params;
	params.InStyleID = InStyleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UVehicleAdvanceAvatarComp_BP_C::GenerateDefaultAvatarConfig(int* InBaseSkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.GenerateDefaultAvatarConfig");

	UVehicleAdvanceAvatarComp_BP_C_GenerateDefaultAvatarConfig_Params params;
	params.InBaseSkinID = InBaseSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UVehicleAdvanceAvatarComp_BP_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.ReceiveBeginPlay");

	UVehicleAdvanceAvatarComp_BP_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UVehicleAdvanceAvatarComp_BP_C::Bp_EventAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_EventAvatarLogicEquipped");

	UVehicleAdvanceAvatarComp_BP_C_Bp_EventAvatarLogicEquipped_Params params;
	params.SlotID = SlotID;
	params.NewItemID = NewItemID;
	params.OldItemID = OldItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVehicleAdvanceAvatarComp_BP_C::Bp_EventAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_EventAvatarLogicUnequipped");

	UVehicleAdvanceAvatarComp_BP_C_Bp_EventAvatarLogicUnequipped_Params params;
	params.SlotID = SlotID;
	params.OldItemID = OldItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVehicleAdvanceAvatarComp_BP_C::BP_EventStyleEquipped(int NewStyleID, int OldStyleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_EventStyleEquipped");

	UVehicleAdvanceAvatarComp_BP_C_BP_EventStyleEquipped_Params params;
	params.NewStyleID = NewStyleID;
	params.OldStyleID = OldStyleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAdvanceAvatarComp_BP_C::BP_EventStyleUnequipped(int OldStyleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_EventStyleUnequipped");

	UVehicleAdvanceAvatarComp_BP_C_BP_EventStyleUnequipped_Params params;
	params.OldStyleID = OldStyleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAdvanceAvatarComp_BP_C::ExecuteUbergraph_VehicleAdvanceAvatarComp_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.ExecuteUbergraph_VehicleAdvanceAvatarComp_BP");

	UVehicleAdvanceAvatarComp_BP_C_ExecuteUbergraph_VehicleAdvanceAvatarComp_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

