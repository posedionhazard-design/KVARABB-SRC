
 
#include "../SDK.hpp"

namespace SDK
{









void APlanCH_GameMode::HandleNavigationInfo(class AController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameMode.HandleNavigationInfo");

	APlanCH_GameMode_HandleNavigationInfo_Params params;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class ASTExtraPlayerStart* APlanCH_GameMode::GetPlayerStart(int LandId, int SkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameMode.GetPlayerStart");

	APlanCH_GameMode_GetPlayerStart_Params params;
	params.LandId = LandId;
	params.SkinID = SkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void APlanCH_GameMode::DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameMode.DSPlayerKickOut");

	APlanCH_GameMode_DSPlayerKickOut_Params params;
	params.UID = UID;
	params.PlayerType = PlayerType;
	params.ExitReason = ExitReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanCH_GameState::OnRep_PartyDanceLeadInfo_5()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_5");

	APlanCH_GameState_OnRep_PartyDanceLeadInfo_5_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanCH_GameState::OnRep_PartyDanceLeadInfo_4()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_4");

	APlanCH_GameState_OnRep_PartyDanceLeadInfo_4_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanCH_GameState::OnRep_PartyDanceLeadInfo_3()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_3");

	APlanCH_GameState_OnRep_PartyDanceLeadInfo_3_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanCH_GameState::OnRep_PartyDanceLeadInfo_2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_2");

	APlanCH_GameState_OnRep_PartyDanceLeadInfo_2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APlanCH_GameState::LuaOnRep_PartyDanceLeadInfo(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.LuaOnRep_PartyDanceLeadInfo");

	APlanCH_GameState_LuaOnRep_PartyDanceLeadInfo_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void APlanCH_GameState::ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_GameState.ChangePartyLeadInfo");

	APlanCH_GameState_ChangePartyLeadInfo_Params params;
	params.LandId = LandId;
	params.bOccupied = bOccupied;
	params.BeginTime = BeginTime;
	params.EndTime = EndTime;
	params.PlayerUID = PlayerUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void APlanCH_PlayerState::RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.RequestPaintDecal");

	APlanCH_PlayerState_RequestPaintDecal_Params params;
	params.DecalId = DecalId;
	params.TargetTransform = TargetTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanCH_PlayerState::OnRep_SkinId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.OnRep_SkinId");

	APlanCH_PlayerState_OnRep_SkinId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanCH_PlayerState::OnRep_LandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.OnRep_LandId");

	APlanCH_PlayerState_OnRep_LandId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanCH_PlayerState::InitLandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.InitLandId");

	APlanCH_PlayerState_InitLandId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool APlanCH_PlayerState::CanPaintDecal(int DecalId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCH_PlayerState.CanPaintDecal");

	APlanCH_PlayerState_CanPaintDecal_Params params;
	params.DecalId = DecalId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UPlanCHBinFileHelper::Init(int z4BufferSize, int zeroListSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHBinFileHelper.Init");

	UPlanCHBinFileHelper_Init_Params params;
	params.z4BufferSize = z4BufferSize;
	params.zeroListSize = zeroListSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float UPlanCHGameplayStatics::SpinEvaluate(float S, float T)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHGameplayStatics.SpinEvaluate");

	UPlanCHGameplayStatics_SpinEvaluate_Params params;
	params.S = S;
	params.T = T;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UPlanCHGameplayStatics::SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHGameplayStatics.SetPlayerMovementBlendTime");

	UPlanCHGameplayStatics_SetPlayerMovementBlendTime_Params params;
	params.PlayerChar = PlayerChar;
	params.nType = nType;
	params.BlendTime = BlendTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPlanCHGameplayStatics::GetActorBound(class AActor* Actor, struct FVector* Size)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHGameplayStatics.GetActorBound");

	UPlanCHGameplayStatics_GetActorBound_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}








void UPlanCHGameplayStatics::ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHGameplayStatics.ChangeLightChannel");

	UPlanCHGameplayStatics_ChangeLightChannel_Params params;
	params.InComponent = InComponent;
	params.InChannelBitMask = InChannelBitMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPlanCHMapData::RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHMapData.RemovePlayerItem");

	UPlanCHMapData_RemovePlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UPlanCHMapData::AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHMapData.AddPlayerItem");

	UPlanCHMapData_AddPlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;
	params.PlayerInfoBPItem = PlayerInfoBPItem;
	params.PlayerInfoRotWidgetItem = PlayerInfoRotWidgetItem;
	params.OffsetLocation = OffsetLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void APlanCHSpectatorPawn::OnSpectatorRestart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHSpectatorPawn.OnSpectatorRestart");

	APlanCHSpectatorPawn_OnSpectatorRestart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APlanCHSpectatorPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHSpectatorPawn.MoveRight");

	APlanCHSpectatorPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APlanCHSpectatorPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanCHRuntime.PlanCHSpectatorPawn.MoveForward");

	APlanCHSpectatorPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

