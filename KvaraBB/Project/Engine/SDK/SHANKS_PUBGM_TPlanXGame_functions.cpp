
 
#include "../SDK.hpp"

namespace SDK
{













bool UBackpackComponentTPlanX::PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.PickupItemFromWrapperDetail");

	UBackpackComponentTPlanX_PickupItemFromWrapperDetail_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBackpackComponentTPlanX::PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.PickItem_IntoSafetyBox");

	UBackpackComponentTPlanX_PickItem_IntoSafetyBox_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBackpackComponentTPlanX::NotifyItemUpdated(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.NotifyItemUpdated");

	UBackpackComponentTPlanX_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponentTPlanX::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.NotifyItemRemoved");

	UBackpackComponentTPlanX_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackComponentTPlanX::NotifyItemListUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.NotifyItemListUpdated");

	UBackpackComponentTPlanX_NotifyItemListUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UBackpackComponentTPlanX::ChangeItemStoreAreaNewInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaNewInner");

	UBackpackComponentTPlanX_ChangeItemStoreAreaNewInner_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBackpackComponentTPlanX::ChangeItemStoreAreaNew(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaNew");

	UBackpackComponentTPlanX_ChangeItemStoreAreaNew_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBackpackComponentTPlanX::ChangeItemStoreAreaInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaInner");

	UBackpackComponentTPlanX_ChangeItemStoreAreaInner_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBackpackComponentTPlanX::ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreArea");

	UBackpackComponentTPlanX_ChangeItemStoreArea_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBackpackTPlanXUtils::UnRegisterInvokeClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackTPlanXUtils.UnRegisterInvokeClass");

	UBackpackTPlanXUtils_UnRegisterInvokeClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackTPlanXUtils::RegisterInvokeClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackTPlanXUtils.RegisterInvokeClass");

	UBackpackTPlanXUtils_RegisterInvokeClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UBackpackBlueprintTPlanXUtils* UBackpackTPlanXUtils::RealGetBPUtils()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackTPlanXUtils.RealGetBPUtils");

	UBackpackTPlanXUtils_RealGetBPUtils_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ATPlanXGameMode::SetStateLeftTime(int LeftTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.SetStateLeftTime");

	ATPlanXGameMode_SetStateLeftTime_Params params;
	params.LeftTime = LeftTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ATPlanXGameMode::SetPlayerStartOccupied(class AActor* PlayerStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.SetPlayerStartOccupied");

	ATPlanXGameMode_SetPlayerStartOccupied_Params params;
	params.PlayerStart = PlayerStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void ATPlanXGameMode::RevisePlayerTombBoxDropWrapperList(class ASTExtraBaseCharacter* Character, class ASTExtraBaseCharacter* DamageCauser, int InstanceIDCnt, TArray<struct FPickUpItemData>* OutItemDataList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.RevisePlayerTombBoxDropWrapperList");

	ATPlanXGameMode_RevisePlayerTombBoxDropWrapperList_Params params;
	params.Character = Character;
	params.DamageCauser = DamageCauser;
	params.InstanceIDCnt = InstanceIDCnt;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutItemDataList != nullptr)
		*OutItemDataList = params.OutItemDataList;
}









void ATPlanXGameMode::NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.NotifyPlayerExitWhenNotStarted");

	ATPlanXGameMode_NotifyPlayerExitWhenNotStarted_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void ATPlanXGameMode::NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.NotifyPlayerExit");

	ATPlanXGameMode_NotifyPlayerExit_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.bDestroyPlayerController = bDestroyPlayerController;
	params.bDestroyCharacter = bDestroyCharacter;
	params.bSendFailure = bSendFailure;
	params.FailureMessage = FailureMessage;
	params.ParamState = ParamState;
	params.ParamReason = ParamReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXGameMode::NotifyGameModeInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.NotifyGameModeInit");

	ATPlanXGameMode_NotifyGameModeInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXGameMode::LoadMapFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.LoadMapFinished");

	ATPlanXGameMode_LoadMapFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool ATPlanXGameMode::IsNeedRestPlayerStart(class AController* Player)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.IsNeedRestPlayerStart");

	ATPlanXGameMode_IsNeedRestPlayerStart_Params params;
	params.Player = Player;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void ATPlanXGameMode::GMShowSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GMShowSpawner");

	ATPlanXGameMode_GMShowSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXGameMode::GMShowEnterExit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GMShowEnterExit");

	ATPlanXGameMode_GMShowEnterExit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXGameMode::GMShowAssetBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GMShowAssetBox");

	ATPlanXGameMode_GMShowAssetBox_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ATPlanXGameMode::GMSetPVEAIMax(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GMSetPVEAIMax");

	ATPlanXGameMode_GMSetPVEAIMax_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<class AActor*> ATPlanXGameMode::GetOccupiedPlayerStartGroupList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GetOccupiedPlayerStartGroupList");

	ATPlanXGameMode_GetOccupiedPlayerStartGroupList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ATPlanXGameMode::CheckNoHumanExist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.CheckNoHumanExist");

	ATPlanXGameMode_CheckNoHumanExist_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void ATPlanXGameMode::CheckAIActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.CheckAIActive");

	ATPlanXGameMode_CheckAIActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXGameState::ResetLeftTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.ResetLeftTime");

	ATPlanXGameState_ResetLeftTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXGameState::PreLoadPreciousItemsMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.PreLoadPreciousItemsMap");

	ATPlanXGameState_PreLoadPreciousItemsMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXGameState::OnRep_LastLeaveTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.OnRep_LastLeaveTime");

	ATPlanXGameState_OnRep_LastLeaveTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







int ATPlanXGameState::GetPlayerMilitartyOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.GetPlayerMilitartyOnClient");

	ATPlanXGameState_GetPlayerMilitartyOnClient_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int ATPlanXGameState::CheckPreciousItemPrice(int TypeSpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.CheckPreciousItemPrice");

	ATPlanXGameState_CheckPreciousItemPrice_Params params;
	params.TypeSpecificID = TypeSpecificID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void ATPlanXGameState::BroadcastClimbHelicopter(class ASTExtraPlayerCharacter* Character, class AActor* ExitActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.BroadcastClimbHelicopter");

	ATPlanXGameState_BroadcastClimbHelicopter_Params params;
	params.Character = Character;
	params.ExitActor = ExitActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTPlanXMetroStoreComponent::OnRep_StoreID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_StoreID");

	UTPlanXMetroStoreComponent_OnRep_StoreID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTPlanXMetroStoreComponent::OnRep_Status()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_Status");

	UTPlanXMetroStoreComponent_OnRep_Status_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTPlanXMetroStoreComponent::OnRep_GoodsNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsNum");

	UTPlanXMetroStoreComponent_OnRep_GoodsNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTPlanXMetroStoreComponent::OnRep_GoodsListNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsListNum");

	UTPlanXMetroStoreComponent_OnRep_GoodsListNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTPlanXMetroStoreComponent::OnRep_GoodsList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsList");

	UTPlanXMetroStoreComponent_OnRep_GoodsList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTPlanXMetroStoreComponent::OnRep_CurrencyList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_CurrencyList");

	UTPlanXMetroStoreComponent_OnRep_CurrencyList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTPlanXMetroStoreComponent::OnRep_BuyFrequence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_BuyFrequence");

	UTPlanXMetroStoreComponent_OnRep_BuyFrequence_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRepXTBetrayInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRepXTBetrayInfo");

	ATPlanXPlayerState_OnRepXTBetrayInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRepRelevantPlayerTaskNotifyBP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRepRelevantPlayerTaskNotifyBP");

	ATPlanXPlayerState_OnRepRelevantPlayerTaskNotifyBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRepEscapePosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRepEscapePosition");

	ATPlanXPlayerState_OnRepEscapePosition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRepAssetPointsCheckedByTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRepAssetPointsCheckedByTeammate");

	ATPlanXPlayerState_OnRepAssetPointsCheckedByTeammate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRep_RelevantPlayerTaskNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_RelevantPlayerTaskNotify");

	ATPlanXPlayerState_OnRep_RelevantPlayerTaskNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRep_IsRunAway()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_IsRunAway");

	ATPlanXPlayerState_OnRep_IsRunAway_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRep_IsEscaped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_IsEscaped");

	ATPlanXPlayerState_OnRep_IsEscaped_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRep_Gold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_Gold");

	ATPlanXPlayerState_OnRep_Gold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRep_EscapePosiNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_EscapePosiNotify");

	ATPlanXPlayerState_OnRep_EscapePosiNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRep_BetrayInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_BetrayInfo");

	ATPlanXPlayerState_OnRep_BetrayInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnRep_AssetPointsCheckedByTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_AssetPointsCheckedByTeammate");

	ATPlanXPlayerState_OnRep_AssetPointsCheckedByTeammate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ATPlanXPlayerState::OnPlayerEscaped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnPlayerEscaped");

	ATPlanXPlayerState_OnPlayerEscaped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ATPlanXPlayerState::IsInGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.IsInGame");

	ATPlanXPlayerState_IsInGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ATPlanXPlayerState::IsInBetrayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.IsInBetrayState");

	ATPlanXPlayerState_IsInBetrayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FPreciousItem> ATPlanXPlayerState::GetAllPreciousItemsList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.GetAllPreciousItemsList");

	ATPlanXPlayerState_GetAllPreciousItemsList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UWorldPositionDisplayWidget::UpdatePosition(class UCanvasPanelSlot* PanelSlot, const struct FVector& InWorldPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.WorldPositionDisplayWidget.UpdatePosition");

	UWorldPositionDisplayWidget_UpdatePosition_Params params;
	params.PanelSlot = PanelSlot;
	params.InWorldPosition = InWorldPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UWorldPositionDisplayWidget::SetWorldLocation(const struct FVector& InWorldLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.WorldPositionDisplayWidget.SetWorldLocation");

	UWorldPositionDisplayWidget_SetWorldLocation_Params params;
	params.InWorldLocation = InWorldLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FVector UWorldPositionDisplayWidget::GetWorldLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.WorldPositionDisplayWidget.GetWorldLocation");

	UWorldPositionDisplayWidget_GetWorldLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector2D UWorldPositionDisplayWidget::GetScreenOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.WorldPositionDisplayWidget.GetScreenOffset");

	UWorldPositionDisplayWidget_GetScreenOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

