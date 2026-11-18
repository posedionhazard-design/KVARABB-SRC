
 
#include "../SDK.hpp"

namespace SDK
{







void ABackpackRepActor::OnRep_ItemListNet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackRepActor.OnRep_ItemListNet");

	ABackpackRepActor_OnRep_ItemListNet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ABackpackRepActor::NotifyItemUpdated(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackRepActor.NotifyItemUpdated");

	ABackpackRepActor_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ABackpackRepActor::NotifyItemRemoved(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackRepActor.NotifyItemRemoved");

	ABackpackRepActor_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABackpackRepActor::NotifyItemEmpty(int Slack)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackRepActor.NotifyItemEmpty");

	ABackpackRepActor_NotifyItemEmpty_Params params;
	params.Slack = Slack;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ABackpackRepActor::NotifyItemAdded(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackRepActor.NotifyItemAdded");

	ABackpackRepActor_NotifyItemAdded_Params params;
	params.DefineID = DefineID;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::WriteStatistics()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.WriteStatistics");

	AUAEGameMode_WriteStatistics_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::SyncPlayerNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SyncPlayerNames");

	AUAEGameMode_SyncPlayerNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::SyncNewCorpsData(TArray<struct FDSCorpsInfo> OutCorpsData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SyncNewCorpsData");

	AUAEGameMode_SyncNewCorpsData_Params params;
	params.OutCorpsData = OutCorpsData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class APawn* AUAEGameMode::SpawnUAEPawnFor(class AController* NewPlayer, const struct FTransform& Trans)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SpawnUAEPawnFor");

	AUAEGameMode_SpawnUAEPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.Trans = Trans;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AUAEGameMode::SetVehicleReportEntry(uint32_t InUniqueID, const struct FVehicleReportEntry& InEntry)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetVehicleReportEntry");

	AUAEGameMode_SetVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;
	params.InEntry = InEntry;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::SetPlayerOpenId(uint32_t InPlayerKey, const struct FString& InPlayerOpenID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetPlayerOpenId");

	AUAEGameMode_SetPlayerOpenId_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InPlayerOpenID = InPlayerOpenID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::SetMaxWeaponReportNum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetMaxWeaponReportNum");

	AUAEGameMode_SetMaxWeaponReportNum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::SetKillerPlayerKey(class AController* VictimPlayer, uint32_t KillerPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetKillerPlayerKey");

	AUAEGameMode_SetKillerPlayerKey_Params params;
	params.VictimPlayer = VictimPlayer;
	params.KillerPlayerKey = KillerPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::SetGameEndReportData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.SetGameEndReportData");

	AUAEGameMode_SetGameEndReportData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FGameModeTeamBattleResultData AUAEGameMode::RetrieveTeamBattleResultData(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RetrieveTeamBattleResultData");

	AUAEGameMode_RetrieveTeamBattleResultData_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AUAEGameMode::RetrieveBattleData(struct FBattleData* OutBattleData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RetrieveBattleData");

	AUAEGameMode_RetrieveBattleData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBattleData != nullptr)
		*OutBattleData = params.OutBattleData;
}








void AUAEGameMode::RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RestartPlayerAtPlayerStart");

	AUAEGameMode_RestartPlayerAtPlayerStart_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::ResetGameParamsFromGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ResetGameParamsFromGameMode");

	AUAEGameMode_ResetGameParamsFromGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::Rescue(class APawn* RescueWho, class APawn* Hero)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Rescue");

	AUAEGameMode_Rescue_Params params;
	params.RescueWho = RescueWho;
	params.Hero = Hero;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::RegisterItemGroupSpotsByTag(const struct FName& Tag, class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RegisterItemGroupSpotsByTag");

	AUAEGameMode_RegisterItemGroupSpotsByTag_Params params;
	params.Tag = Tag;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::RegisterItemGroupSpots(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RegisterItemGroupSpots");

	AUAEGameMode_RegisterItemGroupSpots_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::RefreshWorldActiveRange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshWorldActiveRange");

	AUAEGameMode_RefreshWorldActiveRange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::RefreshWatchTeammates(class AUAEPlayerController* InController, int InTeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshWatchTeammates");

	AUAEGameMode_RefreshWatchTeammates_Params params;
	params.InController = InController;
	params.InTeamID = InTeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void AUAEGameMode::RefreshPlayerNames(uint32_t InPlayerKey, const struct FString& InPlayerName, int TeamID, bool IsLogin, uint64_t UID, int IdxInTeam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RefreshPlayerNames");

	AUAEGameMode_RefreshPlayerNames_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InPlayerName = InPlayerName;
	params.TeamID = TeamID;
	params.IsLogin = IsLogin;
	params.UID = UID;
	params.IdxInTeam = IdxInTeam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







int AUAEGameMode::RecoardAlivePlayerNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.RecoardAlivePlayerNum");

	AUAEGameMode_RecoardAlivePlayerNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class APlayerController* AUAEGameMode::PreCreatePlayerController(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.PreCreatePlayerController");

	AUAEGameMode_PreCreatePlayerController_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AUAEGameMode::OnStandAloneGameEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnStandAloneGameEnd");

	AUAEGameMode_OnStandAloneGameEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::OnReportNetworkData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnReportNetworkData");

	AUAEGameMode_OnReportNetworkData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::OnPlayerFiring(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnPlayerFiring");

	AUAEGameMode_OnPlayerFiring_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::OnPlayerControlDestroyEnd(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnPlayerControlDestroyEnd");

	AUAEGameMode_OnPlayerControlDestroyEnd_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::OnPlayerBreathChange(uint32_t InPlayerKey, float InBreath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnPlayerBreathChange");

	AUAEGameMode_OnPlayerBreathChange_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InBreath = InBreath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::OnObserverLogout(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnObserverLogout");

	AUAEGameMode_OnObserverLogout_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::OnObserverLogin(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnObserverLogin");

	AUAEGameMode_OnObserverLogin_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::OnMsg(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnMsg");

	AUAEGameMode_OnMsg_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::OnAirDropBoxLanded(int boxId, const struct FVector& pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnAirDropBoxLanded");

	AUAEGameMode_OnAirDropBoxLanded_Params params;
	params.boxId = boxId;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::OnAirDropBoxEmpty(int boxId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.OnAirDropBoxEmpty");

	AUAEGameMode_OnAirDropBoxEmpty_Params params;
	params.boxId = boxId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEGameMode::NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerExitWhenNotStarted");

	AUAEGameMode_NotifyPlayerExitWhenNotStarted_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void AUAEGameMode::NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerExit");

	AUAEGameMode_NotifyPlayerExit_Params params;
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








void AUAEGameMode::NotifyPlayerAbleToExitSafely(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyPlayerAbleToExitSafely");

	AUAEGameMode_NotifyPlayerAbleToExitSafely_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::NotifyGameModeParamsChanged(const struct FGameModeParams& GameModeParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeParamsChanged");

	AUAEGameMode_NotifyGameModeParamsChanged_Params params;
	params.GameModeParams = GameModeParams;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::NotifyGameModeLuckmate(int64_t MyUID, int64_t LuckmateUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeLuckmate");

	AUAEGameMode_NotifyGameModeLuckmate_Params params;
	params.MyUID = MyUID;
	params.LuckmateUID = LuckmateUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::NotifyGameModeInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyGameModeInit");

	AUAEGameMode_NotifyGameModeInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::NotifyExistPlayerReEnter(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyExistPlayerReEnter");

	AUAEGameMode_NotifyExistPlayerReEnter_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEGameMode::NotifyAIPlayerEnter(uint32_t PlayerKey, bool IsMLAI, bool bTeammateAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyAIPlayerEnter");

	AUAEGameMode_NotifyAIPlayerEnter_Params params;
	params.PlayerKey = PlayerKey;
	params.IsMLAI = IsMLAI;
	params.bTeammateAI = bTeammateAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::NotifyAIDropInfo(int NewAI, const struct FDSAIDropInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.NotifyAIDropInfo");

	AUAEGameMode_NotifyAIDropInfo_Params params;
	params.NewAI = NewAI;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












float AUAEGameMode::ModifyVehicleDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* VictimVehicle, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ModifyVehicleDamage");

	AUAEGameMode_ModifyVehicleDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.VictimVehicle = VictimVehicle;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












float AUAEGameMode::ModifyDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AController* VictimController, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ModifyDamage");

	AUAEGameMode_ModifyDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.VictimController = VictimController;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void AUAEGameMode::Killed(class AController* Killer, class AController* VictimPlayer, class AActor* DamageCauser, class APawn* VictimPawn, const struct FDamageEvent& DamageEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Killed");

	AUAEGameMode_Killed_Params params;
	params.Killer = Killer;
	params.VictimPlayer = VictimPlayer;
	params.DamageCauser = DamageCauser;
	params.VictimPawn = VictimPawn;
	params.DamageEvent = DamageEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool AUAEGameMode::IsStandAloneGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsStandAloneGameMode");

	AUAEGameMode_IsStandAloneGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool AUAEGameMode::IsSatisfyGeneratorArea(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsSatisfyGeneratorArea");

	AUAEGameMode_IsSatisfyGeneratorArea_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEGameMode::IsCollectingOBData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.IsCollectingOBData");

	AUAEGameMode_IsCollectingOBData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AUAEGameMode::InitWorldActiveRange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitWorldActiveRange");

	AUAEGameMode_InitWorldActiveRange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::InitSeasonStatue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitSeasonStatue");

	AUAEGameMode_InitSeasonStatue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::InitMissionBoard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitMissionBoard");

	AUAEGameMode_InitMissionBoard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::InitGenerator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitGenerator");

	AUAEGameMode_InitGenerator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::InitGameParamsFromGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitGameParamsFromGameMode");

	AUAEGameMode_InitGameParamsFromGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::InitDynamicTriggers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitDynamicTriggers");

	AUAEGameMode_InitDynamicTriggers_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::InitDynamicBuildingGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitDynamicBuildingGroups");

	AUAEGameMode_InitDynamicBuildingGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::InitBornWithApple()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.InitBornWithApple");

	AUAEGameMode_InitBornWithApple_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::Heartbeat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.Heartbeat");

	AUAEGameMode_Heartbeat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool AUAEGameMode::HasVehicleReportEntry(uint32_t InUniqueID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HasVehicleReportEntry");

	AUAEGameMode_HasVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEGameMode::HasDynamicBuildingGroup()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HasDynamicBuildingGroup");

	AUAEGameMode_HasDynamicBuildingGroup_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void AUAEGameMode::HandlePlayerPaintDecalResponse(uint32_t PlayerKey, const struct FName& PlayerType, int Result, int DecalId, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.HandlePlayerPaintDecalResponse");

	AUAEGameMode_HandlePlayerPaintDecalResponse_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Result = Result;
	params.DecalId = DecalId;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::GotoNearDeath(class AController* DamageInstigator, class APawn* VictimPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GotoNearDeath");

	AUAEGameMode_GotoNearDeath_Params params;
	params.DamageInstigator = DamageInstigator;
	params.VictimPawn = VictimPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FOnePlayerWeapon AUAEGameMode::GetWeaponReportByWeaponRecord(const struct FString& PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetWeaponReportByWeaponRecord");

	AUAEGameMode_GetWeaponReportByWeaponRecord_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float AUAEGameMode::GetWeaponDamageFromRecord(const struct FString& PlayerKey, int TargetWeaponType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetWeaponDamageFromRecord");

	AUAEGameMode_GetWeaponDamageFromRecord_Params params;
	params.PlayerKey = PlayerKey;
	params.TargetWeaponType = TargetWeaponType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVehicleReportEntry AUAEGameMode::GetVehicleReportEntry(uint32_t InUniqueID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetVehicleReportEntry");

	AUAEGameMode_GetVehicleReportEntry_Params params;
	params.InUniqueID = InUniqueID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAEGameMode::GetSurvivingTeamCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetSurvivingTeamCount");

	AUAEGameMode_GetSurvivingTeamCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAEGameMode::GetSurvivingCharacterCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetSurvivingCharacterCount");

	AUAEGameMode_GetSurvivingCharacterCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float AUAEGameMode::GetRescueDuration(class AActor* WhoRescue, class AActor* RescueWho)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetRescueDuration");

	AUAEGameMode_GetRescueDuration_Params params;
	params.WhoRescue = WhoRescue;
	params.RescueWho = RescueWho;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int AUAEGameMode::GetPlayerTotalShootNum(const struct FString& PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerTotalShootNum");

	AUAEGameMode_GetPlayerTotalShootNum_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<class AUAEPlayerState*> AUAEGameMode::GetPlayerStateListWithTeamID(int TeamID, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerStateListWithTeamID");

	AUAEGameMode_GetPlayerStateListWithTeamID_Params params;
	params.TeamID = TeamID;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AUAEGameMode::GetPlayerRealtimeVerifyInfo(uint32_t PlayerKey, struct FRealtimeVerifyInfo* RealtimeVerifyInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerRealtimeVerifyInfo");

	AUAEGameMode_GetPlayerRealtimeVerifyInfo_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RealtimeVerifyInfo != nullptr)
		*RealtimeVerifyInfo = params.RealtimeVerifyInfo;
}








class AUAEPlayerController* AUAEGameMode::GetPlayerControllerWithUID(uint64_t UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerControllerWithUID");

	AUAEGameMode_GetPlayerControllerWithUID_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<class AUAEPlayerController*> AUAEGameMode::GetPlayerControllerListWithTeamID(int TeamID, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerControllerListWithTeamID");

	AUAEGameMode_GetPlayerControllerListWithTeamID_Params params;
	params.TeamID = TeamID;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AUAEGameMode::GetPlayerAndRealAiNum(struct FHeartBeatData* Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetPlayerAndRealAiNum");

	AUAEGameMode_GetPlayerAndRealAiNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}







TArray<class AUAEPlayerController*> AUAEGameMode::GetObserverControllerList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetObserverControllerList");

	AUAEGameMode_GetObserverControllerList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AUAEGameMode::GetMonsterNum(struct FHeartBeatData* Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetMonsterNum");

	AUAEGameMode_GetMonsterNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}







int AUAEGameMode::GetMaxWeaponReportNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetMaxWeaponReportNum");

	AUAEGameMode_GetMaxWeaponReportNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector AUAEGameMode::GetClassicPlaneDirection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.GetClassicPlaneDirection");

	AUAEGameMode_GetClassicPlaneDirection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class AUAEPlayerState* AUAEGameMode::FindPlayerStateWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerStateWithPlayerKey");

	AUAEGameMode_FindPlayerStateWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class AUAEPlayerController* AUAEGameMode::FindPlayerControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerControllerWithPlayerKey");

	AUAEGameMode_FindPlayerControllerWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class APlayerController* AUAEGameMode::FindPlayerControllerByUId(uint64_t UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindPlayerControllerByUId");

	AUAEGameMode_FindPlayerControllerByUId_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class AController* AUAEGameMode::FindControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.FindControllerWithPlayerKey");

	AUAEGameMode_FindControllerWithPlayerKey_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AUAEGameMode::DestroyNoActiveWorldActor(struct FVector* Location, float* Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyNoActiveWorldActor");

	AUAEGameMode_DestroyNoActiveWorldActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Radius != nullptr)
		*Radius = params.Radius;
}







void AUAEGameMode::DestroyCharacterForPlayerController(class APlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyCharacterForPlayerController");

	AUAEGameMode_DestroyCharacterForPlayerController_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::DestroyAllPickUpObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DestroyAllPickUpObjs");

	AUAEGameMode_DestroyAllPickUpObjs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::DeleteSeasonStatue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DeleteSeasonStatue");

	AUAEGameMode_DeleteSeasonStatue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEGameMode::DeleteDynamicLoadItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DeleteDynamicLoadItem");

	AUAEGameMode_DeleteDynamicLoadItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::DebugEnterFriendObserver(class AUAEPlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.DebugEnterFriendObserver");

	AUAEGameMode_DebugEnterFriendObserver_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEGameMode::CreateDynamicBuildingGroups(const struct FVector& Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.CreateDynamicBuildingGroups");

	AUAEGameMode_CreateDynamicBuildingGroups_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEGameMode::ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.ChangeName");

	AUAEGameMode_ChangeName_Params params;
	params.Controller = Controller;
	params.NewName = NewName;
	params.bNameChange = bNameChange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameMode::AddAirDropBox(int boxId, const struct FVector& pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameMode.AddAirDropBox");

	AUAEGameMode_AddAirDropBox_Params params;
	params.boxId = boxId;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameState::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.SendLuaDSToClient");

	AUAEGameState_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEGameState::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.RPC_LuaDSToClient");

	AUAEGameState_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool AUAEGameState::HasTimeIDSwitch(int TimeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.HasTimeIDSwitch");

	AUAEGameState_HasTimeIDSwitch_Params params;
	params.TimeID = TimeID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool AUAEGameState::CheckDSSwitchOpen(int SwitchId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameState.CheckDSSwitchOpen");

	AUAEGameState_CheckDSSwitchOpen_Params params;
	params.SwitchId = SwitchId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBaseGeneratorComponent::RegisterWorldTileSpot(class USpotSceneComponent* Spot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterWorldTileSpot");

	UBaseGeneratorComponent_RegisterWorldTileSpot_Params params;
	params.Spot = Spot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBaseGeneratorComponent::RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterSpotComponentToTick");

	UBaseGeneratorComponent_RegisterSpotComponentToTick_Params params;
	params.SpotComponent = SpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBaseGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.RegisterGroupSpotComponent");

	UBaseGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UBaseGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GetRandomCategory");

	UBaseGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBaseGeneratorComponent::GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GeneratorWorldTileSpots");

	UBaseGeneratorComponent_GeneratorWorldTileSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotArray != nullptr)
		*SpotArray = params.SpotArray;
}





void UBaseGeneratorComponent::GenerateSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GenerateSpots");

	UBaseGeneratorComponent_GenerateSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBaseGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GenerateSpotOnTick");

	UBaseGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












class AActor* UBaseGeneratorComponent::GeneratePickupActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, const struct FItemGenerateSpawnClass& ItemData, struct FVector* ActorLocation, struct FRotator* ActorRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.GeneratePickupActor");

	UBaseGeneratorComponent_GeneratePickupActor_Params params;
	params.ActorClass = ActorClass;
	params.SpawnActorCollisionHandlingMethod = SpawnActorCollisionHandlingMethod;
	params.ItemData = ItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
	if (ActorRotator != nullptr)
		*ActorRotator = params.ActorRotator;

	return params.ReturnValue;
}





void UBaseGeneratorComponent::CheckTileLevelsVisible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BaseGeneratorComponent.CheckTileLevelsVisible");

	UBaseGeneratorComponent_CheckTileLevelsVisible_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::WriteItemSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemSpotStatisticsDatas");

	UItemGeneratorComponent_WriteItemSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::WriteItemClassStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas_V15");

	UItemGeneratorComponent_WriteItemClassStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::WriteItemClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteItemClassStatisticsDatas");

	UItemGeneratorComponent_WriteItemClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::WriteGroupStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteGroupStatisticsDatas");

	UItemGeneratorComponent_WriteGroupStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::WriteBuildingStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteBuildingStatisticsDatas");

	UItemGeneratorComponent_WriteBuildingStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::WriteAreaItemStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAreaItemStatisticsDatas");

	UItemGeneratorComponent_WriteAreaItemStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::WriteAllStatisticsDatasToLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatasToLog");

	UItemGeneratorComponent_WriteAllStatisticsDatasToLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::WriteAllStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.WriteAllStatisticsDatas");

	UItemGeneratorComponent_WriteAllStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UItemGeneratorComponent::TryLoadItemSpawnTableByTableMgr(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.TryLoadItemSpawnTableByTableMgr");

	UItemGeneratorComponent_TryLoadItemSpawnTableByTableMgr_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UItemGeneratorComponent::SetRandomSeed(int Seed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.SetRandomSeed");

	UItemGeneratorComponent_SetRandomSeed_Params params;
	params.Seed = Seed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UItemGeneratorComponent::SetCatetoryRate(TMap<struct FString, float> Rates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.SetCatetoryRate");

	UItemGeneratorComponent_SetCatetoryRate_Params params;
	params.Rates = Rates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UItemGeneratorComponent::RemoveSpotInfo(bool bFirstEnterState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RemoveSpotInfo");

	UItemGeneratorComponent_RemoveSpotInfo_Params params;
	params.bFirstEnterState = bFirstEnterState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UItemGeneratorComponent::RemoveItemOnTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RemoveItemOnTick");

	UItemGeneratorComponent_RemoveItemOnTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UItemGeneratorComponent::RemoveDropGround(bool bFirstEnterState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RemoveDropGround");

	UItemGeneratorComponent_RemoveDropGround_Params params;
	params.bFirstEnterState = bFirstEnterState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UItemGeneratorComponent::RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RegisterItemGenerateSpawnData");

	UItemGeneratorComponent_RegisterItemGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UItemGeneratorComponent::RegisterBornIslandItem(class AActor* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RegisterBornIslandItem");

	UItemGeneratorComponent_RegisterBornIslandItem_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UUAEDataTable* UItemGeneratorComponent::ReadItemGenerateTable(const struct FString& TablePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.ReadItemGenerateTable");

	UItemGeneratorComponent_ReadItemGenerateTable_Params params;
	params.TablePath = TablePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UItemGeneratorComponent::ReAddAllSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.ReAddAllSpot");

	UItemGeneratorComponent_ReAddAllSpot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UItemGroupSpotSceneComponent* UItemGeneratorComponent::RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomSingleGroup");

	UItemGeneratorComponent_RandomSingleGroup_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;

	return params.ReturnValue;
}







void UItemGeneratorComponent::RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomGroupsByType");

	UItemGeneratorComponent_RandomGroupsByType_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::RandomBornIslandGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.RandomBornIslandGroups");

	UItemGeneratorComponent_RandomBornIslandGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UItemGeneratorComponent::OnAsyncLoadItemClassFinish(const struct FItemGenerateSpawnClass& SpawnClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.OnAsyncLoadItemClassFinish");

	UItemGeneratorComponent_OnAsyncLoadItemClassFinish_Params params;
	params.SpawnClass = SpawnClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UItemGeneratorComponent::LuaCustomFunctionAfterGenerate(class AActor* ItemActor, struct FItemGenerateSpawnClass* SpawnClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.LuaCustomFunctionAfterGenerate");

	UItemGeneratorComponent_LuaCustomFunctionAfterGenerate_Params params;
	params.ItemActor = ItemActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpawnClass != nullptr)
		*SpawnClass = params.SpawnClass;
}








bool UItemGeneratorComponent::LuaAddRandomItemClassArray(const struct FItemGenerateSpawnClass& SpawnClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.LuaAddRandomItemClassArray");

	UItemGeneratorComponent_LuaAddRandomItemClassArray_Params params;
	params.SpawnClass = SpawnClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UItemGeneratorComponent::LoadItemGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.LoadItemGenerateTable");

	UItemGeneratorComponent_LoadItemGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UItemGeneratorComponent::IsCatetoryEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.IsCatetoryEnabled");

	UItemGeneratorComponent_IsCatetoryEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UItemGeneratorComponent::InitCatetorys()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.InitCatetorys");

	UItemGeneratorComponent_InitCatetorys_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::InitCategoryEx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.InitCategoryEx");

	UItemGeneratorComponent_InitCategoryEx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













TArray<struct FVector> UItemGeneratorComponent::GMTrackGroundCheck(class UClass* CheckClass, float FloatUp, float FloatDown, float SinkUp, float SinkTop, bool bCheckBounds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GMTrackGroundCheck");

	UItemGeneratorComponent_GMTrackGroundCheck_Params params;
	params.CheckClass = CheckClass;
	params.FloatUp = FloatUp;
	params.FloatDown = FloatDown;
	params.SinkUp = SinkUp;
	params.SinkTop = SinkTop;
	params.bCheckBounds = bCheckBounds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UItemGeneratorComponent::GMGenerateAllSpot(const struct FString& ItemPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GMGenerateAllSpot");

	UItemGeneratorComponent_GMGenerateAllSpot_Params params;
	params.ItemPath = ItemPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UItemGeneratorComponent::GMEnableRefreshAllSpotWithSeed(int Seed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GMEnableRefreshAllSpotWithSeed");

	UItemGeneratorComponent_GMEnableRefreshAllSpotWithSeed_Params params;
	params.Seed = Seed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FString> UItemGeneratorComponent::GetSpotTags()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotTags");

	UItemGeneratorComponent_GetSpotTags_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FVector> UItemGeneratorComponent::GetSpotLocsByTag(const struct FString& ExTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotLocsByTag");

	UItemGeneratorComponent_GetSpotLocsByTag_Params params;
	params.ExTag = ExTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int UItemGeneratorComponent::GetSpotLocInPolygon(TArray<struct FVector> Anchors, int RandomNum, TArray<struct FVector>* OutLocs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotLocInPolygon");

	UItemGeneratorComponent_GetSpotLocInPolygon_Params params;
	params.Anchors = Anchors;
	params.RandomNum = RandomNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocs != nullptr)
		*OutLocs = params.OutLocs;

	return params.ReturnValue;
}











int UItemGeneratorComponent::GetSpotLocInCircle(const struct FVector& Center, float Radius, int RandomNum, TArray<struct FVector>* OutLocs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotLocInCircle");

	UItemGeneratorComponent_GetSpotLocInCircle_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.RandomNum = RandomNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocs != nullptr)
		*OutLocs = params.OutLocs;

	return params.ReturnValue;
}








struct FSpotGroupProperty UItemGeneratorComponent::GetSpotGroupPropertyByGroupType(TEnumAsByte<ESpotGroupType> SpotGroupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetSpotGroupPropertyByGroupType");

	UItemGeneratorComponent_GetSpotGroupPropertyByGroupType_Params params;
	params.SpotGroupType = SpotGroupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












bool UItemGeneratorComponent::GetRandomItemClassArray(bool RepeatGenerateItem, class UItemSpotSceneComponent* SpotComponent, struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetRandomItemClassArray");

	UItemGeneratorComponent_GetRandomItemClassArray_Params params;
	params.RepeatGenerateItem = RepeatGenerateItem;
	params.SpotComponent = SpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Category != nullptr)
		*Category = params.Category;
	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}








struct FString UItemGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetRandomCategory");

	UItemGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UItemGeneratorComponent::GetItemDefineID(class UClass* PickUpClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetItemDefineID");

	UItemGeneratorComponent_GetItemDefineID_Params params;
	params.PickUpClass = PickUpClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UItemGeneratorComponent::GetCatetoryRate(const struct FString& Catetory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GetCatetoryRate");

	UItemGeneratorComponent_GetCatetoryRate_Params params;
	params.Catetory = Catetory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UItemGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GenerateSpotOnTick");

	UItemGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::GenerateNewRandomSeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.GenerateNewRandomSeed");

	UItemGeneratorComponent_GenerateNewRandomSeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FVector UItemGeneratorComponent::FindASpawnLoc(class UWorld* InWorld, const struct FVector& TraceStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.FindASpawnLoc");

	UItemGeneratorComponent_FindASpawnLoc_Params params;
	params.InWorld = InWorld;
	params.TraceStart = TraceStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UItemGeneratorComponent::EnableRemoveItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnableRemoveItem");

	UItemGeneratorComponent_EnableRemoveItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::EnableRefreshAllSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnableRefreshAllSpot");

	UItemGeneratorComponent_EnableRefreshAllSpot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UItemGeneratorComponent::EnablePrimeItemPolygon(TArray<struct FVector> Anchors, int PrimeConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnablePrimeItemPolygon");

	UItemGeneratorComponent_EnablePrimeItemPolygon_Params params;
	params.Anchors = Anchors;
	params.PrimeConfigIndex = PrimeConfigIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UItemGeneratorComponent::EnablePrimeItemCircle(const struct FVector& Center, float Radius, int PrimeConfigIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnablePrimeItemCircle");

	UItemGeneratorComponent_EnablePrimeItemCircle_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.PrimeConfigIndex = PrimeConfigIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UItemGeneratorComponent::EnableDynamicSpotConfigByIndex(int DynamicIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.EnableDynamicSpotConfigByIndex");

	UItemGeneratorComponent_EnableDynamicSpotConfigByIndex_Params params;
	params.DynamicIndex = DynamicIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UItemGeneratorComponent::DoPickUp(int ItemSpotDataIndex, const struct FString& Value, const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.DoPickUp");

	UItemGeneratorComponent_DoPickUp_Params params;
	params.ItemSpotDataIndex = ItemSpotDataIndex;
	params.Value = Value;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGeneratorComponent::DeleteBornIslandItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.DeleteBornIslandItems");

	UItemGeneratorComponent_DeleteBornIslandItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UItemGeneratorComponent::CheckShouldGenerateItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckShouldGenerateItem");

	UItemGeneratorComponent_CheckShouldGenerateItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UItemGeneratorComponent::CheckRecoverItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckRecoverItems");

	UItemGeneratorComponent_CheckRecoverItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UItemGeneratorComponent::CheckInPolygon(const struct FVector& pos, TArray<struct FVector> Anchors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckInPolygon");

	UItemGeneratorComponent_CheckInPolygon_Params params;
	params.pos = pos;
	params.Anchors = Anchors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UItemGeneratorComponent::CheckInCircle(const struct FVector& pos, const struct FVector& Center, float* Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.CheckInCircle");

	UItemGeneratorComponent_CheckInCircle_Params params;
	params.pos = pos;
	params.Center = Center;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;

	return params.ReturnValue;
}







void UItemGeneratorComponent::AddIgnoreItemClassPath(TArray<struct FString> IgnoreItemClassList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.AddIgnoreItemClassPath");

	UItemGeneratorComponent_AddIgnoreItemClassPath_Params params;
	params.IgnoreItemClassList = IgnoreItemClassList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UItemGeneratorComponent::AddDropGround(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGeneratorComponent.AddDropGround");

	UItemGeneratorComponent_AddDropGround_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::SetRankAndPersonalRank(int TempRank, int TempPersonalRank)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetRankAndPersonalRank");

	AUAEPlayerState_SetRankAndPersonalRank_Params params;
	params.TempRank = TempRank;
	params.TempPersonalRank = TempPersonalRank;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::SetGVMemberIDServerCall(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetGVMemberIDServerCall");

	AUAEPlayerState_SetGVMemberIDServerCall_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::SetGVMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetGVMemberID");

	AUAEPlayerState_SetGVMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerState::SetDeliveryResult(uint32_t InDeliverPlayerKey, bool bInSuccess, int EventTypeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SetDeliveryResult");

	AUAEPlayerState_SetDeliveryResult_Params params;
	params.InDeliverPlayerKey = InDeliverPlayerKey;
	params.bInSuccess = bInSuccess;
	params.EventTypeId = EventTypeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.SendLuaDSToClient");

	AUAEPlayerState_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerState::RPC_ServerAddGeneralCount(int ID, int InCount, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RPC_ServerAddGeneralCount");

	AUAEPlayerState_RPC_ServerAddGeneralCount_Params params;
	params.ID = ID;
	params.InCount = InCount;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RPC_LuaDSToClient");

	AUAEPlayerState_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::RPC_ChangeOnlyTeamChat(int NewPreTeamChatState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RPC_ChangeOnlyTeamChat");

	AUAEPlayerState_RPC_ChangeOnlyTeamChat_Params params;
	params.NewPreTeamChatState = NewPreTeamChatState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::ReportTaskExtInfo(int TaskID, const struct FString& ExtInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportTaskExtInfo");

	AUAEPlayerState_ReportTaskExtInfo_Params params;
	params.TaskID = TaskID;
	params.ExtInfo = ExtInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::ReportTaskData(int TaskID, int process)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportTaskData");

	AUAEPlayerState_ReportTaskData_Params params;
	params.TaskID = TaskID;
	params.process = process;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::ReportSpecialCollection(int ItemId, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportSpecialCollection");

	AUAEPlayerState_ReportSpecialCollection_Params params;
	params.ItemId = ItemId;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::ReportSecretAreaID(int SecretAreaID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportSecretAreaID");

	AUAEPlayerState_ReportSecretAreaID_Params params;
	params.SecretAreaID = SecretAreaID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::ReportLikeTeammate(int64_t BeLikeUID, int LikeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeTeammate");

	AUAEPlayerState_ReportLikeTeammate_Params params;
	params.BeLikeUID = BeLikeUID;
	params.LikeType = LikeType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::ReportLikeSwitch(int SwitchSetting)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeSwitch");

	AUAEPlayerState_ReportLikeSwitch_Params params;
	params.SwitchSetting = SwitchSetting;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::ReportLikeSelf(int LikeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLikeSelf");

	AUAEPlayerState_ReportLikeSelf_Params params;
	params.LikeType = LikeType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::ReportLandLocType(int TouchDownLocType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandLocType");

	AUAEPlayerState_ReportLandLocType_Params params;
	params.TouchDownLocType = TouchDownLocType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::ReportLandAreaList(TArray<int>* TouchDownAreaIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandAreaList");

	AUAEPlayerState_ReportLandAreaList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchDownAreaIDs != nullptr)
		*TouchDownAreaIDs = params.TouchDownAreaIDs;
}







void AUAEPlayerState::ReportLandArea(int TouchDownArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLandArea");

	AUAEPlayerState_ReportLandArea_Params params;
	params.TouchDownArea = TouchDownArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::ReportLabelCheck(int TeammateUID, int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ReportLabelCheck");

	AUAEPlayerState_ReportLabelCheck_Params params;
	params.TeammateUID = TeammateUID;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerState::RecordUseHelicoper(uint32_t UseHelicoperId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.RecordUseHelicoper");

	AUAEPlayerState_RecordUseHelicoper_Params params;
	params.UseHelicoperId = UseHelicoperId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRepCampIDBP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRepCampIDBP");

	AUAEPlayerState_OnRepCampIDBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_VeteranRecruitIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_VeteranRecruitIndex");

	AUAEPlayerState_OnRep_VeteranRecruitIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_UpdateKillMonsterNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_UpdateKillMonsterNum");

	AUAEPlayerState_OnRep_UpdateKillMonsterNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_UID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_UID");

	AUAEPlayerState_OnRep_UID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_TeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_TeamID");

	AUAEPlayerState_OnRep_TeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_RescueTimesChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_RescueTimesChange");

	AUAEPlayerState_OnRep_RescueTimesChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_PreTeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_PreTeamID");

	AUAEPlayerState_OnRep_PreTeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_PlayerKillsChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_PlayerKillsChange");

	AUAEPlayerState_OnRep_PlayerKillsChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_PlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_PlayerKey");

	AUAEPlayerState_OnRep_PlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_MLAIDisplayUID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_MLAIDisplayUID");

	AUAEPlayerState_OnRep_MLAIDisplayUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_MatchLabel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_MatchLabel");

	AUAEPlayerState_OnRep_MatchLabel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_CollectItemRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_CollectItemRecord");

	AUAEPlayerState_OnRep_CollectItemRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_CampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_CampID");

	AUAEPlayerState_OnRep_CampID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_bOnlyPreTeamChat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_bOnlyPreTeamChat");

	AUAEPlayerState_OnRep_bOnlyPreTeamChat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnRep_AliasInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnRep_AliasInfo");

	AUAEPlayerState_OnRep_AliasInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::OnClientVeteranRecruitIndexUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.OnClientVeteranRecruitIndexUpdated");

	AUAEPlayerState_OnClientVeteranRecruitIndexUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool AUAEPlayerState::IsSpecialPickItemCollectionCompleted(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsSpecialPickItemCollectionCompleted");

	AUAEPlayerState_IsSpecialPickItemCollectionCompleted_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool AUAEPlayerState::IsSpecialPickItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsSpecialPickItem");

	AUAEPlayerState_IsSpecialPickItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerState::IsNearDeathDamageInfoValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsNearDeathDamageInfoValid");

	AUAEPlayerState_IsNearDeathDamageInfoValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool AUAEPlayerState::IsItemForbidMerge(int ItemResId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsItemForbidMerge");

	AUAEPlayerState_IsItemForbidMerge_Params params;
	params.ItemResId = ItemResId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerState::IsDeathDamageInfoValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.IsDeathDamageInfoValid");

	AUAEPlayerState_IsDeathDamageInfoValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FOnePlayerWeapon AUAEPlayerState::GetWeaponReportByWeaponRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetWeaponReportByWeaponRecord");

	AUAEPlayerState_GetWeaponReportByWeaponRecord_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AUAEPlayerState::GetWeaponRecordData(struct FOnePlayerWeapon* OutWeaponInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetWeaponRecordData");

	AUAEPlayerState_GetWeaponRecordData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutWeaponInfo != nullptr)
		*OutWeaponInfo = params.OutWeaponInfo;
}







int AUAEPlayerState::GetVeteranPlayerLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetVeteranPlayerLevel");

	AUAEPlayerState_GetVeteranPlayerLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








uint32_t AUAEPlayerState::GetUserIDByMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetUserIDByMemberID");

	AUAEPlayerState_GetUserIDByMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString AUAEPlayerState::GetUIDString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetUIDString");

	AUAEPlayerState_GetUIDString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FGameModeTeammateBattleResultData AUAEPlayerState::GetTeammateBattleResultData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetTeammateBattleResultData");

	AUAEPlayerState_GetTeammateBattleResultData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAEPlayerState::GetTeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetTeamID");

	AUAEPlayerState_GetTeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAEPlayerState::GetRank()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetRank");

	AUAEPlayerState_GetRank_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAEPlayerState::GetPlayerTotalShootNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerTotalShootNum");

	AUAEPlayerState_GetPlayerTotalShootNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t AUAEPlayerState::GetPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerKey");

	AUAEPlayerState_GetPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FGameModePlayerBattleResultData_SuperCold AUAEPlayerState::GetPlayerBattleResultData_SuperCold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerBattleResultData_SuperCold");

	AUAEPlayerState_GetPlayerBattleResultData_SuperCold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FGameModePlayerBattleResultData AUAEPlayerState::GetPlayerBattleResultData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetPlayerBattleResultData");

	AUAEPlayerState_GetPlayerBattleResultData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







EMentorPlayerType AUAEPlayerState::GetMentorPlayerType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.GetMentorPlayerType");

	AUAEPlayerState_GetMentorPlayerType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AUAEPlayerState::ForceUpdateCampCharacterList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ForceUpdateCampCharacterList");

	AUAEPlayerState_ForceUpdateCampCharacterList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::CopyNearDeathDamageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.CopyNearDeathDamageInfo");

	AUAEPlayerState_CopyNearDeathDamageInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::CopyDeathDamageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.CopyDeathDamageInfo");

	AUAEPlayerState_CopyDeathDamageInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::ClearTlogData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ClearTlogData");

	AUAEPlayerState_ClearTlogData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerState::ClearKillNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ClearKillNum");

	AUAEPlayerState_ClearKillNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerState::ChangeCollectItemRecord(int InItemID, bool InNewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.ChangeCollectItemRecord");

	AUAEPlayerState_ChangeCollectItemRecord_Params params;
	params.InItemID = InItemID;
	params.InNewState = InNewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerState::AddGeneralTLogJustForDelegate(int ID, int DeltaCnt, int CurrValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.AddGeneralTLogJustForDelegate");

	AUAEPlayerState_AddGeneralTLogJustForDelegate_Params params;
	params.ID = ID;
	params.DeltaCnt = DeltaCnt;
	params.CurrValue = CurrValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerState::AddGeneralCount(int ID, int InCount, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.AddGeneralCount");

	AUAEPlayerState_AddGeneralCount_Params params;
	params.ID = ID;
	params.InCount = InCount;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerState::AddEventCount(unsigned char EventID, int InCount, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerState.AddEventCount");

	AUAEPlayerState_AddEventCount_Params params;
	params.EventID = EventID;
	params.InCount = InCount;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UBackpackComponent::UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UseItem");

	UBackpackComponent_UseItem_Params params;
	params.DefineID = DefineID;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float UBackpackComponent::UpdateStoreAreaOccupiedCapacity(EItemStoreArea InItemStoreArea, float* StoreAreaOccupiedCapacity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UpdateStoreAreaOccupiedCapacity");

	UBackpackComponent_UpdateStoreAreaOccupiedCapacity_Params params;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (StoreAreaOccupiedCapacity != nullptr)
		*StoreAreaOccupiedCapacity = params.StoreAreaOccupiedCapacity;

	return params.ReturnValue;
}





void UBackpackComponent::UpdateOccupiedCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UpdateOccupiedCapacity");

	UBackpackComponent_UpdateOccupiedCapacity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float UBackpackComponent::UpdateCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UpdateCapacity");

	UBackpackComponent_UpdateCapacity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBackpackComponent::UnlockUpdateItemListReceive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.UnlockUpdateItemListReceive");

	UBackpackComponent_UnlockUpdateItemListReceive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBackpackComponent::TryMergeItemHandles(const struct FItemDefineID& DefineID, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.TryMergeItemHandles");

	UBackpackComponent_TryMergeItemHandles_Params params;
	params.DefineID = DefineID;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










int UBackpackComponent::TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.TakeItem");

	UBackpackComponent_TakeItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.bCallHandleDrop = bCallHandleDrop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SwapItem");

	UBackpackComponent_SwapItem_Params params;
	params.DefineID1 = DefineID1;
	params.DefineID2 = DefineID2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBackpackComponent::SetSpecialCountLimitFromLua(TArray<struct FSpecialPickInfo> InSpecialCountLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SetSpecialCountLimitFromLua");

	UBackpackComponent_SetSpecialCountLimitFromLua_Params params;
	params.InSpecialCountLimit = InSpecialCountLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UBackpackComponent::SetItemSourceContext(int Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SetItemSourceContext");

	UBackpackComponent_SetItemSourceContext_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UBackpackComponent::SetItemSource(const struct FItemDefineID& DefineID, int Source, bool bAmmoSource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SetItemSource");

	UBackpackComponent_SetItemSource_Params params;
	params.DefineID = DefineID;
	params.Source = Source;
	params.bAmmoSource = bAmmoSource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::SetForceAutoEquipAim(bool bInAutoEquipAim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SetForceAutoEquipAim");

	UBackpackComponent_SetForceAutoEquipAim_Params params;
	params.bInAutoEquipAim = bInAutoEquipAim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::SetDisableItemsArray(TArray<int> InDisableItems)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SetDisableItemsArray");

	UBackpackComponent_SetDisableItemsArray_Params params;
	params.InDisableItems = InDisableItems;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::SetChangeWeaponSchemeState(bool bInIsChangeWeaponScheme)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.SetChangeWeaponSchemeState");

	UBackpackComponent_SetChangeWeaponSchemeState_Params params;
	params.bInIsChangeWeaponScheme = bInIsChangeWeaponScheme;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::ServerSetShowBounty(bool bInShowBounty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerSetShowBounty");

	UBackpackComponent_ServerSetShowBounty_Params params;
	params.bInShowBounty = bInShowBounty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::ServerSetDropMeelWeapon(bool NewValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerSetDropMeelWeapon");

	UBackpackComponent_ServerSetDropMeelWeapon_Params params;
	params.NewValue = NewValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBackpackComponent::ServerSetCustomAccessories(int WeaponItemId, int Index, int ItemId, bool bIsSetOrRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerSetCustomAccessories");

	UBackpackComponent_ServerSetCustomAccessories_Params params;
	params.WeaponItemId = WeaponItemId;
	params.Index = Index;
	params.ItemId = ItemId;
	params.bIsSetOrRemove = bIsSetOrRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBackpackComponent::ServerEnableItem(const struct FItemDefineID& DefineID, bool bUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ServerEnableItem");

	UBackpackComponent_ServerEnableItem_Params params;
	params.DefineID = DefineID;
	params.bUse = bUse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::RPC_Multicast_AllItem(const struct FIncNetArray& Items)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.RPC_Multicast_AllItem");

	UBackpackComponent_RPC_Multicast_AllItem_Params params;
	params.Items = Items;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










int UBackpackComponent::ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReturnItem");

	UBackpackComponent_ReturnItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.bCallHandlePickup = bCallHandlePickup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::RemoveItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.RemoveItemHandle");

	UBackpackComponent_RemoveItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBackpackComponent::ReceiveItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReceiveItemList");

	UBackpackComponent_ReceiveItemList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackComponent::ReceiveCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ReceiveCapacity");

	UBackpackComponent_ReceiveCapacity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










int UBackpackComponent::PreCheckCanPickupBagAvatar(class UBattleItemHandleBase* NewHandle, class UBattleItemHandleBase* OldHandle, EBattleItemUseReason reson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PreCheckCanPickupBagAvatar");

	UBackpackComponent_PreCheckCanPickupBagAvatar_Params params;
	params.NewHandle = NewHandle;
	params.OldHandle = OldHandle;
	params.reson = reson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBackpackComponent::PostItemHandleEquippingState(const struct FItemDefineID& DefineID, bool bEquipping)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PostItemHandleEquippingState");

	UBackpackComponent_PostItemHandleEquippingState_Params params;
	params.DefineID = DefineID;
	params.bEquipping = bEquipping;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











bool UBackpackComponent::PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupItemFromWrapperDetail");

	UBackpackComponent_PickupItemFromWrapperDetail_Params params;
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










bool UBackpackComponent::PickUpItem_Default(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickUpItem_Default");

	UBackpackComponent_PickUpItem_Default_Params params;
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











bool UBackpackComponent::PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupItem");

	UBackpackComponent_PickupItem_Params params;
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





void UBackpackComponent::PickupBattleItemOnPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickupBattleItemOnPlane");

	UBackpackComponent_PickupBattleItemOnPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UBackpackComponent::PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickItem_IntoSafetyBox");

	UBackpackComponent_PickItem_IntoSafetyBox_Params params;
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










bool UBackpackComponent::PickItem_IntoBackpack(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.PickItem_IntoBackpack");

	UBackpackComponent_PickItem_IntoBackpack_Params params;
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





void UBackpackComponent::OnRep_specialCountLimit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_specialCountLimit");

	UBackpackComponent_OnRep_specialCountLimit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackComponent::OnRep_ItemListNet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_ItemListNet");

	UBackpackComponent_OnRep_ItemListNet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackComponent::OnRep_CoinsNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_CoinsNum");

	UBackpackComponent_OnRep_CoinsNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackComponent::OnRep_Capacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.OnRep_Capacity");

	UBackpackComponent_OnRep_Capacity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::NotifyItemUpdated(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemUpdated");

	UBackpackComponent_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemRemoved");

	UBackpackComponent_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackComponent::NotifyItemListUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyItemListUpdated");

	UBackpackComponent_NotifyItemListUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackComponent::NotifyCapacityUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NotifyCapacityUpdated");

	UBackpackComponent_NotifyCapacityUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UBattleItemHandleBase* UBackpackComponent::NewItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NewItemHandle");

	UBackpackComponent_NewItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FItemDefineID UBackpackComponent::NewItemDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.NewItemDefineID");

	UBackpackComponent_NewItemDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBackpackComponent::ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyItemHandleEquippingState");

	UBackpackComponent_ModifyItemHandleEquippingState_Params params;
	params.ItemHandle = ItemHandle;
	params.bEquipping = bEquipping;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBackpackComponent::ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyItemHandleCount");

	UBackpackComponent_ModifyItemHandleCount_Params params;
	params.ItemHandle = ItemHandle;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::ModifyAutoPickClipType(int InAutoPickClipType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyAutoPickClipType");

	UBackpackComponent_ModifyAutoPickClipType_Params params;
	params.InAutoPickClipType = InAutoPickClipType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::ModifyAimNotAutoUse(bool bAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ModifyAimNotAutoUse");

	UBackpackComponent_ModifyAimNotAutoUse_Params params;
	params.bAdd = bAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBackpackComponent::LockUpdateItemListReceive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.LockUpdateItemListReceive");

	UBackpackComponent_LockUpdateItemListReceive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBattleItemData UBackpackComponent::ItemNet2Data(const struct FNetArrayUnit& NetItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ItemNet2Data");

	UBackpackComponent_ItemNet2Data_Params params;
	params.NetItem = NetItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsNeedToShowInBackpack(int TypeDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsNeedToShowInBackpack");

	UBackpackComponent_IsNeedToShowInBackpack_Params params;
	params.TypeDefineID = TypeDefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBackpackComponent::IsItemSourceTrackingEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemSourceTrackingEnabled");

	UBackpackComponent_IsItemSourceTrackingEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsItemListUpdatedHasSomeItemTypes(TArray<int> ItemTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItemTypes");

	UBackpackComponent_IsItemListUpdatedHasSomeItemTypes_Params params;
	params.ItemTypes = ItemTypes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsItemListUpdatedHasSomeItemSubTypes(TArray<int> ItemSubTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItemSubTypes");

	UBackpackComponent_IsItemListUpdatedHasSomeItemSubTypes_Params params;
	params.ItemSubTypes = ItemSubTypes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsItemListUpdatedHasSomeItems(TArray<int> ItemTypeSpecificIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasSomeItems");

	UBackpackComponent_IsItemListUpdatedHasSomeItems_Params params;
	params.ItemTypeSpecificIDs = ItemTypeSpecificIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsItemListUpdatedHasOneItemType(int itemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItemType");

	UBackpackComponent_IsItemListUpdatedHasOneItemType_Params params;
	params.itemType = itemType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsItemListUpdatedHasOneItemSubType(int ItemSubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItemSubType");

	UBackpackComponent_IsItemListUpdatedHasOneItemSubType_Params params;
	params.ItemSubType = ItemSubType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsItemListUpdatedHasOneItem(int ItemTypeSpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemListUpdatedHasOneItem");

	UBackpackComponent_IsItemListUpdatedHasOneItem_Params params;
	params.ItemTypeSpecificID = ItemTypeSpecificID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsItemExist(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemExist");

	UBackpackComponent_IsItemExist_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsItemDisabled(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsItemDisabled");

	UBackpackComponent_IsItemDisabled_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBackpackComponent::IsEnableWeaponAttachmentBindToWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsEnableWeaponAttachmentBindToWeapon");

	UBackpackComponent_IsEnableWeaponAttachmentBindToWeapon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBackpackComponent::IsEnableBackpackRepActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsEnableBackpackRepActor");

	UBackpackComponent_IsEnableBackpackRepActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::IsCustomIgnoreAccessories(int WeaponId, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsCustomIgnoreAccessories");

	UBackpackComponent_IsCustomIgnoreAccessories_Params params;
	params.WeaponId = WeaponId;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::IsCustomAccessories(int WeaponId, int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsCustomAccessories");

	UBackpackComponent_IsCustomAccessories_Params params;
	params.WeaponId = WeaponId;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBackpackComponent::IsChangeWeaponScheme()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsChangeWeaponScheme");

	UBackpackComponent_IsChangeWeaponScheme_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsBackPackContainItemId(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsBackPackContainItemId");

	UBackpackComponent_IsBackPackContainItemId_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::IsAutoUse(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.IsAutoUse");

	UBackpackComponent_IsAutoUse_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::HasUnEquipItemByDefindIdRange(int LowValue, int HighValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasUnEquipItemByDefindIdRange");

	UBackpackComponent_HasUnEquipItemByDefindIdRange_Params params;
	params.LowValue = LowValue;
	params.HighValue = HighValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::HasTagSub(int ItemId, const struct FName& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasTagSub");

	UBackpackComponent_HasTagSub_Params params;
	params.ItemId = ItemId;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::HasItemBySubType(int SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemBySubType");

	UBackpackComponent_HasItemBySubType_Params params;
	params.SubType = SubType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::HasItemBySpecificID(int SpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemBySpecificID");

	UBackpackComponent_HasItemBySpecificID_Params params;
	params.SpecificID = SpecificID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::HasItemByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemByDefineID");

	UBackpackComponent_HasItemByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::HasItemByDefindIdRange(int LowValue, int HighValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasItemByDefindIdRange");

	UBackpackComponent_HasItemByDefindIdRange_Params params;
	params.LowValue = LowValue;
	params.HighValue = HighValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<int> UBackpackComponent::HasAllItem(TArray<struct FBattleItemData> ItemDataArray, bool bExcludeEquippingItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HasAllItem");

	UBackpackComponent_HasAllItem_Params params;
	params.ItemDataArray = ItemDataArray;
	params.bExcludeEquippingItem = bExcludeEquippingItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void UBackpackComponent::HandleDropInDisuse(const struct FItemDefineID& DefineID, class UBattleItemHandleBase* ItemHandle, EBattleItemDisuseReason Reason, float OccupiedCapacityBeforeDisuse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.HandleDropInDisuse");

	UBackpackComponent_HandleDropInDisuse_Params params;
	params.DefineID = DefineID;
	params.ItemHandle = ItemHandle;
	params.Reason = Reason;
	params.OccupiedCapacityBeforeDisuse = OccupiedCapacityBeforeDisuse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UWorld* UBackpackComponent::GetWorld_BP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetWorld_BP");

	UBackpackComponent_GetWorld_BP_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBackpackComponent::GetUnEquipItemNumByItemId(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetUnEquipItemNumByItemId");

	UBackpackComponent_GetUnEquipItemNumByItemId_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FSpecialPickInfo UBackpackComponent::GetSpecialItemNow(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetSpecialItemNow");

	UBackpackComponent_GetSpecialItemNow_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FSpecialPickInfo UBackpackComponent::GetSpecialItemBefore(int ItemResId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetSpecialItemBefore");

	UBackpackComponent_GetSpecialItemBefore_Params params;
	params.ItemResId = ItemResId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBackpackComponent::GetSafetyBoxCapacity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetSafetyBoxCapacity");

	UBackpackComponent_GetSafetyBoxCapacity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FBattleItemData UBackpackComponent::GetLeastElectrictyBattleItemData(const struct FItemDefineID& DefineID, EBattleItemAdditionalDataType AdditionalDataNameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetLeastElectrictyBattleItemData");

	UBackpackComponent_GetLeastElectrictyBattleItemData_Params params;
	params.DefineID = DefineID;
	params.AdditionalDataNameType = AdditionalDataNameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBackpackComponent::GetLastTakenItemSource()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetLastTakenItemSource");

	UBackpackComponent_GetLastTakenItemSource_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBackpackComponent::GetItemSubType(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemSubType");

	UBackpackComponent_GetItemSubType_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBackpackComponent::GetItemSourceContext()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemSourceContext");

	UBackpackComponent_GetItemSourceContext_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UBackpackComponent::GetItemSource(const struct FItemDefineID& DefineID, bool bAmmoSource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemSource");

	UBackpackComponent_GetItemSource_Params params;
	params.DefineID = DefineID;
	params.bAmmoSource = bAmmoSource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










TArray<struct FBattleItemData> UBackpackComponent::GetItemListBySpecialID(TArray<int> SpecialIDArray, bool bIgnoreEquipping, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemListBySpecialID");

	UBackpackComponent_GetItemListBySpecialID_Params params;
	params.SpecialIDArray = SpecialIDArray;
	params.bIgnoreEquipping = bIgnoreEquipping;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FBattleItemData> UBackpackComponent::GetItemListByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemListByDefineID");

	UBackpackComponent_GetItemListByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TMap<struct FItemDefineID, class UItemHandleBase*> UBackpackComponent::GetItemHandleMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemHandleMap");

	UBackpackComponent_GetItemHandleMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UItemHandleBase*> UBackpackComponent::GetItemHandleList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemHandleList");

	UBackpackComponent_GetItemHandleList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBackpackComponent::GetItemCountByType(int InItemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemCountByType");

	UBackpackComponent_GetItemCountByType_Params params;
	params.InItemType = InItemType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBackpackComponent::GetItemCountByItemSpecialID(int InItemSpecialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemCountByItemSpecialID");

	UBackpackComponent_GetItemCountByItemSpecialID_Params params;
	params.InItemSpecialID = InItemSpecialID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UBackpackComponent::GetItemCountByDefineIDUnEquip(const struct FItemDefineID& DefineID, bool bOnlyInstance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemCountByDefineIDUnEquip");

	UBackpackComponent_GetItemCountByDefineIDUnEquip_Params params;
	params.DefineID = DefineID;
	params.bOnlyInstance = bOnlyInstance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UBackpackComponent::GetItemCountByDefineID(const struct FItemDefineID& DefineID, bool bOnlyInstance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemCountByDefineID");

	UBackpackComponent_GetItemCountByDefineID_Params params;
	params.DefineID = DefineID;
	params.bOnlyInstance = bOnlyInstance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBattleItemData UBackpackComponent::GetItemByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemByDefineID");

	UBackpackComponent_GetItemByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBackpackComponent::GetItemAttrsFlag(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemAttrsFlag");

	UBackpackComponent_GetItemAttrsFlag_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UBackpackComponent::GetItemAssociateWeights(const struct FBattleItemData& InItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetItemAssociateWeights");

	UBackpackComponent_GetItemAssociateWeights_Params params;
	params.InItemData = InItemData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBattleItemData UBackpackComponent::GetFirstItemBySubType(int SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetFirstItemBySubType");

	UBackpackComponent_GetFirstItemBySubType_Params params;
	params.SubType = SubType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBattleItemData UBackpackComponent::GetFirstItemByDefineIDIgnoreInstance(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetFirstItemByDefineIDIgnoreInstance");

	UBackpackComponent_GetFirstItemByDefineIDIgnoreInstance_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FItemDefineID UBackpackComponent::GetCurrentPickupItemDefineID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetCurrentPickupItemDefineID");

	UBackpackComponent_GetCurrentPickupItemDefineID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBattleItemFeatureData UBackpackComponent::GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetBattleItemFeatureDataByDefineID");

	UBackpackComponent_GetBattleItemFeatureDataByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FBattleItemData> UBackpackComponent::GetAllItemList(EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetAllItemList");

	UBackpackComponent_GetAllItemList_Params params;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








EBattleItemClientPickupType UBackpackComponent::GetAIPickupType(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.GetAIPickupType");

	UBackpackComponent_GetAIPickupType_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBackpackComponent::ForceNetUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ForceNetUpdate");

	UBackpackComponent_ForceNetUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UBackpackComponent::DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.DropItem");

	UBackpackComponent_DropItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.DisuseItem");

	UBackpackComponent_DisuseItem_Params params;
	params.DefineID = DefineID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UBattleItemHandleBase* UBackpackComponent::CreateItemHandleInternal(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CreateItemHandleInternal");

	UBackpackComponent_CreateItemHandleInternal_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UItemHandleBase* UBackpackComponent::CreateItemHandle(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CreateItemHandle");

	UBackpackComponent_CreateItemHandle_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UBackpackComponent::ConsumeItem(const struct FItemDefineID& DefineID, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ConsumeItem");

	UBackpackComponent_ConsumeItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UBackpackComponent::ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemOperationFailedDelegate");

	UBackpackComponent_ClientBroadcastItemOperationFailedDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.FailedReason = FailedReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBackpackComponent::ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemOperationDelegate");

	UBackpackComponent_ClientBroadcastItemOperationDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBackpackComponent::ClientBroadcastItemChangeAreaDelegate(int TypeSpecificID, EBattleItemChangeAreaType OperationType, int Num, bool bToSafeBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ClientBroadcastItemChangeAreaDelegate");

	UBackpackComponent_ClientBroadcastItemChangeAreaDelegate_Params params;
	params.TypeSpecificID = TypeSpecificID;
	params.OperationType = OperationType;
	params.Num = Num;
	params.bToSafeBox = bToSafeBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









int UBackpackComponent::CheckSpecialMaxCountForItem(const struct FItemDefineID& DefineID, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckSpecialMaxCountForItem");

	UBackpackComponent_CheckSpecialMaxCountForItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::CheckSkillPropItemCanBePickup(class UBackpackComponent* BackpackComp, const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckSkillPropItemCanBePickup");

	UBackpackComponent_CheckSkillPropItemCanBePickup_Params params;
	params.BackpackComp = BackpackComp;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBackpackComponent::CheckPickUpItemDefaultSuccess(const struct FItemDefineID& DefineID, bool bPickupSucc, bool bAutoEquip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckPickUpItemDefaultSuccess");

	UBackpackComponent_CheckPickUpItemDefaultSuccess_Params params;
	params.DefineID = DefineID;
	params.bPickupSucc = bPickupSucc;
	params.bAutoEquip = bAutoEquip;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UBackpackComponent::CheckLeftLimitCountForItem(int InItemID, int InCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckLeftLimitCountForItem");

	UBackpackComponent_CheckLeftLimitCountForItem_Params params;
	params.InItemID = InItemID;
	params.InCount = InCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBackpackComponent::CheckItemEmptyInBackpack(int InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckItemEmptyInBackpack");

	UBackpackComponent_CheckItemEmptyInBackpack_Params params;
	params.InItemID = InItemID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UBackpackComponent::CheckItemAttrsFlag(int ItemId, EItemAttrs ItemAttrEnum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckItemAttrsFlag");

	UBackpackComponent_CheckItemAttrsFlag_Params params;
	params.ItemId = ItemId;
	params.ItemAttrEnum = ItemAttrEnum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int UBackpackComponent::CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CheckCapacityForItem");

	UBackpackComponent_CheckCapacityForItem_Params params;
	params.DefineID = DefineID;
	params.Count = Count;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UBackpackComponent::ChangeItemStoreAreaNew(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ChangeItemStoreAreaNew");

	UBackpackComponent_ChangeItemStoreAreaNew_Params params;
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










bool UBackpackComponent::ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.ChangeItemStoreArea");

	UBackpackComponent_ChangeItemStoreArea_Params params;
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







bool UBackpackComponent::CantDrop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CantDrop");

	UBackpackComponent_CantDrop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBackpackComponent::CanDisuseToBackpack(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CanDisuseToBackpack");

	UBackpackComponent_CanDisuseToBackpack_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBackpackComponent::CacheItemAssociationBeforeDisuse(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.CacheItemAssociationBeforeDisuse");

	UBackpackComponent_CacheItemAssociationBeforeDisuse_Params params;
	params.DefineID = DefineID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UBackpackComponent::BroadcastItemOperCountDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperCountDelegate");

	UBackpackComponent_BroadcastItemOperCountDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBackpackComponent::BroadcastItemOperationInfoDelegate(const struct FItemOperationInfo& ItemOperationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationInfoDelegate");

	UBackpackComponent_BroadcastItemOperationInfoDelegate_Params params;
	params.ItemOperationInfo = ItemOperationInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBackpackComponent::BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationFailedDelegate");

	UBackpackComponent_BroadcastItemOperationFailedDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.FailedReason = FailedReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBackpackComponent::BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemOperationDelegate");

	UBackpackComponent_BroadcastItemOperationDelegate_Params params;
	params.DefineID = DefineID;
	params.OperationType = OperationType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBackpackComponent::BroadcastItemChangeAreaDelegate(int TypeSpecificID, EBattleItemChangeAreaType OperationType, int Num, bool bToSafeBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.BroadcastItemChangeAreaDelegate");

	UBackpackComponent_BroadcastItemChangeAreaDelegate_Params params;
	params.TypeSpecificID = TypeSpecificID;
	params.OperationType = OperationType;
	params.Num = Num;
	params.bToSafeBox = bToSafeBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBackpackComponent::AlternativePickupItem(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.AlternativePickupItem");

	UBackpackComponent_AlternativePickupItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}









bool UBackpackComponent::AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.AddItemHandle");

	UBackpackComponent_AddItemHandle_Params params;
	params.DefineID = DefineID;
	params.ItemHandle = ItemHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void UBackpackComponent::AddBattleItemPickupOnPlane(EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType, struct FItemDefineID* DefineID, struct FBattleItemPickupInfo* PickupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.BackpackComponent.AddBattleItemPickupOnPlane");

	UBackpackComponent_AddBattleItemPickupOnPlane_Params params;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;
	if (PickupInfo != nullptr)
		*PickupInfo = params.PickupInfo;
}







void AUAECharacter::SetNetCullDistanceSquared(float fNetCullDistanceSquared)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.SetNetCullDistanceSquared");

	AUAECharacter_SetNetCullDistanceSquared_Params params;
	params.fNetCullDistanceSquared = fNetCullDistanceSquared;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAECharacter::SetMEnsure(bool bMValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.SetMEnsure");

	AUAECharacter_SetMEnsure_Params params;
	params.bMValue = bMValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAECharacter::SetEnsure(bool bValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.SetEnsure");

	AUAECharacter_SetEnsure_Params params;
	params.bValue = bValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAECharacter::SendLuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.SendLuaDSToClient");

	AUAECharacter_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAECharacter::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.RPC_LuaDSToClient");

	AUAECharacter_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAECharacter::PostRep_PlayerUID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.PostRep_PlayerUID");

	AUAECharacter_PostRep_PlayerUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAECharacter::OnRep_UseWholeModel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_UseWholeModel");

	AUAECharacter_OnRep_UseWholeModel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAECharacter::OnRep_TeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_TeamID");

	AUAECharacter_OnRep_TeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAECharacter::OnRep_ResId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_ResId");

	AUAECharacter_OnRep_ResId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAECharacter::OnRep_PlayerUID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_PlayerUID");

	AUAECharacter_OnRep_PlayerUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAECharacter::OnRep_PlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_PlayerKey");

	AUAECharacter_OnRep_PlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAECharacter::OnRep_CampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.OnRep_CampID");

	AUAECharacter_OnRep_CampID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool AUAECharacter::IsDefaultCharType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.IsDefaultCharType");

	AUAECharacter_IsDefaultCharType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAECharacter::GetTeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetTeamID");

	AUAECharacter_GetTeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAECharacter::GetRepMEnsure()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetRepMEnsure");

	AUAECharacter_GetRepMEnsure_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAECharacter::GetRepEnsure()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetRepEnsure");

	AUAECharacter_GetRepEnsure_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString AUAECharacter::GetPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetPlayerKey");

	AUAECharacter_GetPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAECharacter::GetPhysicsType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetPhysicsType");

	AUAECharacter_GetPhysicsType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents_OnFighting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents_OnFighting");

	AUAECharacter_GetNonSimulatedComponents_OnFighting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents_NonTeammates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents_NonTeammates");

	AUAECharacter_GetNonSimulatedComponents_NonTeammates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UActorComponent*> AUAECharacter::GetNonSimulatedComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonSimulatedComponents");

	AUAECharacter_GetNonSimulatedComponents_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UActorComponent*> AUAECharacter::GetNonDedicatedComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetNonDedicatedComponents");

	AUAECharacter_GetNonDedicatedComponents_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPrimitiveComponent* AUAECharacter::GetMovementBaseComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetMovementBaseComponent");

	AUAECharacter_GetMovementBaseComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAECharacter::GetMEnsure()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetMEnsure");

	AUAECharacter_GetMEnsure_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAECharacter::GetEnsure()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetEnsure");

	AUAECharacter_GetEnsure_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAECharacter::GetCampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.GetCampID");

	AUAECharacter_GetCampID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AUAECharacter::ClientAcknowledgeReconnection_3(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacter.ClientAcknowledgeReconnection_3");

	AUAECharacter_ClientAcknowledgeReconnection_3_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGroupSpotSceneComponent::SetGroupValid(bool Valid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.SetGroupValid");

	UGroupSpotSceneComponent_SetGroupValid_Params params;
	params.Valid = Valid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UGroupSpotSceneComponent::IsValidGroup()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.IsValidGroup");

	UGroupSpotSceneComponent_IsValidGroup_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UGroupSpotSceneComponent::FindWorldCompositionID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.FindWorldCompositionID");

	UGroupSpotSceneComponent_FindWorldCompositionID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGroupSpotSceneComponent::DoPickUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GroupSpotSceneComponent.DoPickUp");

	UGroupSpotSceneComponent_DoPickUp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UItemGroupSpotSceneComponent::SetGroupProperty(class UItemGeneratorComponent* Generator, const struct FSpotGroupProperty& Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.SetGroupProperty");

	UItemGroupSpotSceneComponent_SetGroupProperty_Params params;
	params.Generator = Generator;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGroupSpotSceneComponent::RepeatSpots()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RepeatSpots");

	UItemGroupSpotSceneComponent_RepeatSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UItemGroupSpotSceneComponent::RepeatSingleSpot(class UItemSpotSceneComponent* Spot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RepeatSingleSpot");

	UItemGroupSpotSceneComponent_RepeatSingleSpot_Params params;
	params.Spot = Spot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UItemGroupSpotSceneComponent::RandomSpotByType(TEnumAsByte<ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomSpotByType");

	UItemGroupSpotSceneComponent_RandomSpotByType_Params params;
	params.SpotType = SpotType;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
}








void UItemGroupSpotSceneComponent::RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomSingleSpot");

	UItemGroupSpotSceneComponent_RandomSingleSpot_Params params;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Spots != nullptr)
		*Spots = params.Spots;
}








float UItemGroupSpotSceneComponent::RandomRepeatGenerateItemCD(const struct FSpotGroupProperty& GroupProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupSpotSceneComponent.RandomRepeatGenerateItemCD");

	UItemGroupSpotSceneComponent_RandomRepeatGenerateItemCD_Params params;
	params.GroupProperty = GroupProperty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void USpotSceneComponent::SetSpotValid(bool Valid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.SetSpotValid");

	USpotSceneComponent_SetSpotValid_Params params;
	params.Valid = Valid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














bool USpotSceneComponent::LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.LineTraceSingle");

	USpotSceneComponent_LineTraceSingle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}







bool USpotSceneComponent::IsSpotValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.IsSpotValid");

	USpotSceneComponent_IsSpotValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString USpotSceneComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GetRandomCategory");

	USpotSceneComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool USpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GenerateSpot");

	USpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











class AActor* USpotSceneComponent::GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.SpotSceneComponent.GenerateActor");

	USpotSceneComponent_GenerateActor_Params params;
	params.ActorClass = ActorClass;
	params.SpawnActorCollisionHandlingMethod = SpawnActorCollisionHandlingMethod;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
	if (ActorRotator != nullptr)
		*ActorRotator = params.ActorRotator;

	return params.ReturnValue;
}












void UItemSpotSceneComponent::SetSpotProperty(int CompositionID, TEnumAsByte<ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property, class UGroupSpotSceneComponent* Component, bool RepeatGenerateItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.SetSpotProperty");

	UItemSpotSceneComponent_SetSpotProperty_Params params;
	params.CompositionID = CompositionID;
	params.GroupType = GroupType;
	params.Generator = Generator;
	params.Property = Property;
	params.Component = Component;
	params.RepeatGenerateItem = RepeatGenerateItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UItemSpotSceneComponent::RepeatSpotProperty(const struct FSpotTypeProperty& Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.RepeatSpotProperty");

	UItemSpotSceneComponent_RepeatSpotProperty_Params params;
	params.Property = Property;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UItemSpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.GenerateSpot");

	UItemSpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UItemSpotSceneComponent::GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.GenerateItems");

	UItemSpotSceneComponent_GenerateItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllItemClass != nullptr)
		*AllItemClass = params.AllItemClass;
}








void UItemSpotSceneComponent::DoPickUp(const struct FString& ItemValue, const struct FString& ItemCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.DoPickUp");

	UItemSpotSceneComponent_DoPickUp_Params params;
	params.ItemValue = ItemValue;
	params.ItemCategory = ItemCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







int UItemSpotSceneComponent::CountCacheItemValeCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.CountCacheItemValeCategory");

	UItemSpotSceneComponent_CountCacheItemValeCategory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UItemSpotSceneComponent::ClearCacheItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemSpotSceneComponent.ClearCacheItems");

	UItemSpotSceneComponent_ClearCacheItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEHouseActor::RecordBreakWindowTlog(class APlayerController* EventInstigator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.RecordBreakWindowTlog");

	AUAEHouseActor_RecordBreakWindowTlog_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEHouseActor::ProcessWindowCreateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.ProcessWindowCreateList");

	AUAEHouseActor_ProcessWindowCreateList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEHouseActor::OnRep_WindowList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.OnRep_WindowList");

	AUAEHouseActor_OnRep_WindowList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEHouseActor::ClearWindowList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.ClearWindowList");

	AUAEHouseActor_ClearWindowList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEHouseActor::BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEHouseActor.BroadcastWindowRepDataUpdated");

	AUAEHouseActor_BroadcastWindowRepDataUpdated_Params params;
	params.InRepData = InRepData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UGameplayDelegates* UUAEGameplayStatics::GetGameBridge(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEGameplayStatics.GetGameBridge");

	UUAEGameplayStatics_GetGameBridge_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AUAEProjectile::WorkAsBuffApplierEvent(const struct FString& BuffName, class APawn* BuffTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.WorkAsBuffApplierEvent");

	AUAEProjectile_WorkAsBuffApplierEvent_Params params;
	params.BuffName = BuffName;
	params.BuffTarget = BuffTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::TimeoutExplodeMulticast_CPP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_CPP");

	AUAEProjectile_TimeoutExplodeMulticast_CPP_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::TimeoutExplodeMulticast_BPEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.TimeoutExplodeMulticast_BPEvent");

	AUAEProjectile_TimeoutExplodeMulticast_BPEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void AUAEProjectile::SetActorInitialRelativeOffset(const struct FVector& Offset, const struct FVector& StandOffset, const struct FVector& CrouchOffset, const struct FVector& ProneOffset, TEnumAsByte<ECharacterPoseType> PrevoisOwnerPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.SetActorInitialRelativeOffset");

	AUAEProjectile_SetActorInitialRelativeOffset_Params params;
	params.Offset = Offset;
	params.StandOffset = StandOffset;
	params.CrouchOffset = CrouchOffset;
	params.ProneOffset = ProneOffset;
	params.PrevoisOwnerPose = PrevoisOwnerPose;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::ServerNotifyGroundEventOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.ServerNotifyGroundEventOnClient");

	AUAEProjectile_ServerNotifyGroundEventOnClient_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::OnRep_IsServerAlreadyExplodedCpp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnRep_IsServerAlreadyExplodedCpp");

	AUAEProjectile_OnRep_IsServerAlreadyExplodedCpp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::OnRep_IsGroundedOnServerCpp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnRep_IsGroundedOnServerCpp");

	AUAEProjectile_OnRep_IsGroundedOnServerCpp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::OnProjectileStopOnServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnProjectileStopOnServer");

	AUAEProjectile_OnProjectileStopOnServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::OnProjectileStopOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.OnProjectileStopOnClient");

	AUAEProjectile_OnProjectileStopOnClient_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::IsServerAlreadyExplodedCppNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.IsServerAlreadyExplodedCppNotify");

	AUAEProjectile_IsServerAlreadyExplodedCppNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool AUAEProjectile::IsOwnerAutomous()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.IsOwnerAutomous");

	AUAEProjectile_IsOwnerAutomous_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AUAEProjectile::GlassDetect(const struct FVector& Start, const struct FVector& End)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.GlassDetect");

	AUAEProjectile_GlassDetect_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float AUAEProjectile::GetRemainingEffectTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.GetRemainingEffectTime");

	AUAEProjectile_GetRemainingEffectTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AUAEProjectile::ChangeGrenadeMarkerState(bool bNewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.ChangeGrenadeMarkerState");

	AUAEProjectile_ChangeGrenadeMarkerState_Params params;
	params.bNewState = bNewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::CallExplode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.CallExplode");

	AUAEProjectile_CallExplode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEProjectile::BroadcastClientExplode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEProjectile.BroadcastClientExplode");

	AUAEProjectile_BroadcastClientExplode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool AUAEPlayerController::UseingWeaponScheme()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.UseingWeaponScheme");

	AUAEPlayerController_UseingWeaponScheme_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AUAEPlayerController::TestShowLongTimeNoOperation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestShowLongTimeNoOperation");

	AUAEPlayerController_TestShowLongTimeNoOperation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerController::TestCastUIMsgWithPara(const struct FString& strMsg, const struct FString& module, int TestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.TestCastUIMsgWithPara");

	AUAEPlayerController_TestCastUIMsgWithPara_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.TestID = TestID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::SyncDailyTaskStoreInfo(TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SyncDailyTaskStoreInfo");

	AUAEPlayerController_SyncDailyTaskStoreInfo_Params params;
	params.NewDailyTaskStoreList = NewDailyTaskStoreList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::SetUsedSimulationCVar(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetUsedSimulationCVar");

	AUAEPlayerController_SetUsedSimulationCVar_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::SetTargetMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetTargetMsgReceiveDelegate");

	AUAEPlayerController_SetTargetMsgReceiveDelegate_Params params;
	params.InGameInstance = InGameInstance;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::SetPanels(TArray<class UUAEUserWidget*> panels)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetPanels");

	AUAEPlayerController_SetPanels_Params params;
	params.panels = panels;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::SetIsInPetSpectator(bool inIsInPetSpectator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetIsInPetSpectator");

	AUAEPlayerController_SetIsInPetSpectator_Params params;
	params.inIsInPetSpectator = inIsInPetSpectator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::SetDSMsgReceiveDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetDSMsgReceiveDelegate");

	AUAEPlayerController_SetDSMsgReceiveDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::SetClientMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SetClientMsgReceiveDelegate");

	AUAEPlayerController_SetClientMsgReceiveDelegate_Params params;
	params.InGameInstance = InGameInstance;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::ServerUpdateLevelVisibility(const struct FName& PackageName, bool bIsVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerUpdateLevelVisibility");

	AUAEPlayerController_ServerUpdateLevelVisibility_Params params;
	params.PackageName = PackageName;
	params.bIsVisible = bIsVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::ServerSetVoiceId(int VoiceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerSetVoiceId");

	AUAEPlayerController_ServerSetVoiceId_Params params;
	params.VoiceID = VoiceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::ServerRepListDispatch(class UObject* InObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerRepListDispatch");

	AUAEPlayerController_ServerRepListDispatch_Params params;
	params.InObject = InObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::ServerRepComponentsDispatch(class UObject* InObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerRepComponentsDispatch");

	AUAEPlayerController_ServerRepComponentsDispatch_Params params;
	params.InObject = InObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ServerKickSelf()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerKickSelf");

	AUAEPlayerController_ServerKickSelf_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ServerExitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerExitGame");

	AUAEPlayerController_ServerExitGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::ServerAcknowledgeReconnection_2(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ServerAcknowledgeReconnection_2");

	AUAEPlayerController_ServerAcknowledgeReconnection_2_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::SendNetRPCIndexMappingHashToServer(uint32_t VersionHash)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendNetRPCIndexMappingHashToServer");

	AUAEPlayerController_SendNetRPCIndexMappingHashToServer_Params params;
	params.VersionHash = VersionHash;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::SendNetObjectPathNameMappingHashToServer(uint32_t VersionHash)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendNetObjectPathNameMappingHashToServer");

	AUAEPlayerController_SendNetObjectPathNameMappingHashToServer_Params params;
	params.VersionHash = VersionHash;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerController::SendLuaDSToClient(int ID, TArray<unsigned char> Content, bool IsUnreliable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendLuaDSToClient");

	AUAEPlayerController_SendLuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;
	params.IsUnreliable = IsUnreliable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerController::SendLuaClientToDS(int ID, TArray<unsigned char> Content, bool IsUnreliable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.SendLuaClientToDS");

	AUAEPlayerController_SendLuaClientToDS_Params params;
	params.ID = ID;
	params.Content = Content;
	params.IsUnreliable = IsUnreliable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerController::RPC_Server_SyncClientNetInfo(int InLoss, int OutLoss, int InNetworkType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_Server_SyncClientNetInfo");

	AUAEPlayerController_RPC_Server_SyncClientNetInfo_Params params;
	params.InLoss = InLoss;
	params.OutLoss = OutLoss;
	params.InNetworkType = InNetworkType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}















void AUAEPlayerController::RPC_Server_ReportClientNetInfo(int AvgPing, int MaxPing, int MinPing, int LostPackRate, int AvgNoOutlier, int StdNoOutlier, int NumNoOutlier, int InLoss, int OutLoss)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_Server_ReportClientNetInfo");

	AUAEPlayerController_RPC_Server_ReportClientNetInfo_Params params;
	params.AvgPing = AvgPing;
	params.MaxPing = MaxPing;
	params.MinPing = MinPing;
	params.LostPackRate = LostPackRate;
	params.AvgNoOutlier = AvgNoOutlier;
	params.StdNoOutlier = StdNoOutlier;
	params.NumNoOutlier = NumNoOutlier;
	params.InLoss = InLoss;
	params.OutLoss = OutLoss;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::RPC_LuaDSToClient_NR(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_LuaDSToClient_NR");

	AUAEPlayerController_RPC_LuaDSToClient_NR_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::RPC_LuaDSToClient(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_LuaDSToClient");

	AUAEPlayerController_RPC_LuaDSToClient_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::RPC_LuaClientToDS_NR(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_LuaClientToDS_NR");

	AUAEPlayerController_RPC_LuaClientToDS_NR_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::RPC_LuaClientToDS(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.RPC_LuaClientToDS");

	AUAEPlayerController_RPC_LuaClientToDS_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::Respawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.Respawn");

	AUAEPlayerController_Respawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ResetUsedSimulationCVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ResetUsedSimulationCVar");

	AUAEPlayerController_ResetUsedSimulationCVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ReleaseInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ReleaseInGameUI");

	AUAEPlayerController_ReleaseInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ReceivePostLoginInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ReceivePostLoginInit");

	AUAEPlayerController_ReceivePostLoginInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::PrintStatistics()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PrintStatistics");

	AUAEPlayerController_PrintStatistics_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::PlayerStartIDReceived()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.PlayerStartIDReceived");

	AUAEPlayerController_PlayerStartIDReceived_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_WeaponAvatarDataList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_WeaponAvatarDataList");

	AUAEPlayerController_OnRep_WeaponAvatarDataList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_UsingOodleNetworkDicPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_UsingOodleNetworkDicPath");

	AUAEPlayerController_OnRep_UsingOodleNetworkDicPath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_UsingNetObjectPathNameMappingCSV()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_UsingNetObjectPathNameMappingCSV");

	AUAEPlayerController_OnRep_UsingNetObjectPathNameMappingCSV_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_UsedSimulation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_UsedSimulation");

	AUAEPlayerController_OnRep_UsedSimulation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_PveLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_PveLevel");

	AUAEPlayerController_OnRep_PveLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_PlayerOBInfoList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_PlayerOBInfoList");

	AUAEPlayerController_OnRep_PlayerOBInfoList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_PlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_PlayerKey");

	AUAEPlayerController_OnRep_PlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_LobbyWatchInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_LobbyWatchInfo");

	AUAEPlayerController_OnRep_LobbyWatchInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_LastGameResultTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_LastGameResultTime");

	AUAEPlayerController_OnRep_LastGameResultTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_IsSpectatingEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsSpectatingEnemy");

	AUAEPlayerController_OnRep_IsSpectatingEnemy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_IsSpectating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsSpectating");

	AUAEPlayerController_OnRep_IsSpectating_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_IsObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_IsObserver");

	AUAEPlayerController_OnRep_IsObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_InitialWeaponSchemeInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialWeaponSchemeInfo");

	AUAEPlayerController_OnRep_InitialWeaponSchemeInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_InitialEquipmentAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialEquipmentAvatar");

	AUAEPlayerController_OnRep_InitialEquipmentAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_InitialEffectItemInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialEffectItemInfo");

	AUAEPlayerController_OnRep_InitialEffectItemInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_InitialConsumableAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_InitialConsumableAvatar");

	AUAEPlayerController_OnRep_InitialConsumableAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_FriendObservers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_FriendObservers");

	AUAEPlayerController_OnRep_FriendObservers_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_CurWeaponSchemeIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_CurWeaponSchemeIndex");

	AUAEPlayerController_OnRep_CurWeaponSchemeIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnRep_bRoomOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnRep_bRoomOwner");

	AUAEPlayerController_OnRep_bRoomOwner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnPlayerKeyRepDelegate__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Gameplay.UAEPlayerController.OnPlayerKeyRepDelegate__DelegateSignature");

	AUAEPlayerController_OnPlayerKeyRepDelegate__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnNetRPCIndexMappingTableAsyncLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnNetRPCIndexMappingTableAsyncLoad");

	AUAEPlayerController_OnNetRPCIndexMappingTableAsyncLoad_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::OnNetObjectPathNameMappingTableAsyncLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnNetObjectPathNameMappingTableAsyncLoad");

	AUAEPlayerController_OnNetObjectPathNameMappingTableAsyncLoad_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerController::OnMemberVoice(int Member, int status, const struct FString& UserInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.OnMemberVoice");

	AUAEPlayerController_OnMemberVoice_Params params;
	params.Member = Member;
	params.status = status;
	params.UserInfo = UserInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::NotifyEnterBattle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.NotifyEnterBattle");

	AUAEPlayerController_NotifyEnterBattle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::LuaDSToClient_Implementation(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.LuaDSToClient_Implementation");

	AUAEPlayerController_LuaDSToClient_Implementation_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::LuaClientToDS_Implementation(int ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.LuaClientToDS_Implementation");

	AUAEPlayerController_LuaClientToDS_Implementation_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::KickSelf()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.KickSelf");

	AUAEPlayerController_KickSelf_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool AUAEPlayerController::IsTeammateSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsTeammateSpectator");

	AUAEPlayerController_IsTeammateSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsSpectatorOrDemoPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsSpectatorOrDemoPlayer");

	AUAEPlayerController_IsSpectatorOrDemoPlayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsSpectator");

	AUAEPlayerController_IsSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsRoomMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsRoomMode");

	AUAEPlayerController_IsRoomMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsPureSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsPureSpectator");

	AUAEPlayerController_IsPureSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsObserver");

	AUAEPlayerController_IsObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsInSpectatingEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInSpectatingEnemy");

	AUAEPlayerController_IsInSpectatingEnemy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsInSpectating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInSpectating");

	AUAEPlayerController_IsInSpectating_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsInPetSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsInPetSpectator");

	AUAEPlayerController_IsInPetSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsHawkEyeSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsHawkEyeSpectator");

	AUAEPlayerController_IsHawkEyeSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsFriendOrEnemySpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsFriendOrEnemySpectator");

	AUAEPlayerController_IsFriendOrEnemySpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsFriendObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsFriendObserver");

	AUAEPlayerController_IsFriendObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsFriendNotHawkEyeObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsFriendNotHawkEyeObserver");

	AUAEPlayerController_IsFriendNotHawkEyeObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsExited()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsExited");

	AUAEPlayerController_IsExited_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsDemoRecSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoRecSpectator");

	AUAEPlayerController_IsDemoRecSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsDemoPlaySpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoPlaySpectator");

	AUAEPlayerController_IsDemoPlaySpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsDemoPlayGlobalObserver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDemoPlayGlobalObserver");

	AUAEPlayerController_IsDemoPlayGlobalObserver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AUAEPlayerController::IsDeathSpectator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.IsDeathSpectator");

	AUAEPlayerController_IsDeathSpectator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AUAEPlayerController::InitWithPlayerParams(const struct FGameModePlayerParams& Params)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitWithPlayerParams");

	AUAEPlayerController_InitWithPlayerParams_Params params;
	params.Params = Params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::InitWeaponAvatarItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitWeaponAvatarItems");

	AUAEPlayerController_InitWeaponAvatarItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::InitVehicleMusicList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleMusicList");

	AUAEPlayerController_InitVehicleMusicList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::InitVehicleAvatarSkinList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleAvatarSkinList");

	AUAEPlayerController_InitVehicleAvatarSkinList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::InitVehicleAvatarList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleAvatarList");

	AUAEPlayerController_InitVehicleAvatarList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::InitVehicleAdvanceAvatarList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitVehicleAdvanceAvatarList");

	AUAEPlayerController_InitVehicleAdvanceAvatarList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::InitIngameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitIngameUI");

	AUAEPlayerController_InitIngameUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::InitGrenadeAvatarList(bool ReInitial)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.InitGrenadeAvatarList");

	AUAEPlayerController_InitGrenadeAvatarList_Params params;
	params.ReInitial = ReInitial;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool AUAEPlayerController::HasAnySpectatorReplayFlag(uint32_t InFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.HasAnySpectatorReplayFlag");

	AUAEPlayerController_HasAnySpectatorReplayFlag_Params params;
	params.InFlag = InFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int AUAEPlayerController::GotoSpectating(int PlayerID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GotoSpectating");

	AUAEPlayerController_GotoSpectating_Params params;
	params.PlayerID = PlayerID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool AUAEPlayerController::GetWeaponPandentReflect(int wraponID, int* pendantID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetWeaponPandentReflect");

	AUAEPlayerController_GetWeaponPandentReflect_Params params;
	params.wraponID = wraponID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pendantID != nullptr)
		*pendantID = params.pendantID;

	return params.ReturnValue;
}








int AUAEPlayerController::GetWeaponAvatarItemId(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetWeaponAvatarItemId");

	AUAEPlayerController_GetWeaponAvatarItemId_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AUAEPlayerController::GetVisibleLevelsLoadedName(TArray<struct FString>* VisibleLevels)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetVisibleLevelsLoadedName");

	AUAEPlayerController_GetVisibleLevelsLoadedName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (VisibleLevels != nullptr)
		*VisibleLevels = params.VisibleLevels;
}







struct FString AUAEPlayerController::GetLobbyWatchedPlayerKeyAsString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetLobbyWatchedPlayerKeyAsString");

	AUAEPlayerController_GetLobbyWatchedPlayerKeyAsString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FPlayerEffectItemInfo AUAEPlayerController::GetEffectItemBySlot(unsigned char SlotIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetEffectItemBySlot");

	AUAEPlayerController_GetEffectItemBySlot_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FDailyTaskStoreInfo AUAEPlayerController::GetDailyTaskStoreInfoByTaskId(int TaskID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetDailyTaskStoreInfoByTaskId");

	AUAEPlayerController_GetDailyTaskStoreInfoByTaskId_Params params;
	params.TaskID = TaskID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAEPlayerController::GetCurrentWeaponSchemeMainSlotItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentWeaponSchemeMainSlotItemId");

	AUAEPlayerController_GetCurrentWeaponSchemeMainSlotItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FGameModePlayerPetInfo AUAEPlayerController::GetCurrentPetInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentPetInfo");

	AUAEPlayerController_GetCurrentPetInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t AUAEPlayerController::GetCurrentOBPlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentOBPlayerKey");

	AUAEPlayerController_GetCurrentOBPlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int AUAEPlayerController::GetCurrentOBPlayerInfoIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GetCurrentOBPlayerInfoIndex");

	AUAEPlayerController_GetCurrentOBPlayerInfoIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int AUAEPlayerController::GenerateKillBroadcastItemID(int ClothAvatarID, int PlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.GenerateKillBroadcastItemID");

	AUAEPlayerController_GenerateKillBroadcastItemID_Params params;
	params.ClothAvatarID = ClothAvatarID;
	params.PlayerUID = PlayerUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AUAEPlayerController::ForceNetReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ForceNetReady");

	AUAEPlayerController_ForceNetReady_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ExitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExitGame");

	AUAEPlayerController_ExitGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ExhaustCPU()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExhaustCPU");

	AUAEPlayerController_ExhaustCPU_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::ExecDSCommand(const struct FString& DSCommand)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExecDSCommand");

	AUAEPlayerController_ExecDSCommand_Params params;
	params.DSCommand = DSCommand;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::ExcuteIntRecord(const struct FString& Key, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExcuteIntRecord");

	AUAEPlayerController_ExcuteIntRecord_Params params;
	params.Key = Key;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::ExcuteIntCounterRecord(const struct FString& Key, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ExcuteIntCounterRecord");

	AUAEPlayerController_ExcuteIntCounterRecord_Params params;
	params.Key = Key;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::EnableInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.EnableInGameUI");

	AUAEPlayerController_EnableInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DumpUAENetActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpUAENetActors");

	AUAEPlayerController_DumpUAENetActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DumpRegions()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpRegions");

	AUAEPlayerController_DumpRegions_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DumpNetActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpNetActors");

	AUAEPlayerController_DumpNetActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DumpCharacters()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpCharacters");

	AUAEPlayerController_DumpCharacters_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DumpAllUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllUI");

	AUAEPlayerController_DumpAllUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DumpAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllObjects");

	AUAEPlayerController_DumpAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DumpAllActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DumpAllActors");

	AUAEPlayerController_DumpAllActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DoCrash()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DoCrash");

	AUAEPlayerController_DoCrash_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DisableInGameUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DisableInGameUI");

	AUAEPlayerController_DisableInGameUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::DelayEnterBattleCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DelayEnterBattleCheck");

	AUAEPlayerController_DelayEnterBattleCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::DealWithPickUpFailed(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.DealWithPickUpFailed");

	AUAEPlayerController_DealWithPickUpFailed_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ClientShowTeammateEscapeNotice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientShowTeammateEscapeNotice");

	AUAEPlayerController_ClientShowTeammateEscapeNotice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ClientSendOodleNetworkAckToServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientSendOodleNetworkAckToServer");

	AUAEPlayerController_ClientSendOodleNetworkAckToServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void AUAEPlayerController::ClientRPC_CastUIMsgWithStrings(const struct FString& strMsg, const struct FString& module, int TipsID, const struct FString& Param1, const struct FString& Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgWithStrings");

	AUAEPlayerController_ClientRPC_CastUIMsgWithStrings_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.TipsID = TipsID;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAEPlayerController::ClientRPC_CastUIMsgParams(const struct FString& strMsg, const struct FString& module, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsgParams");

	AUAEPlayerController_ClientRPC_CastUIMsgParams_Params params;
	params.strMsg = strMsg;
	params.module = module;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEPlayerController::ClientRPC_CastUIMsg(const struct FString& strMsg, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRPC_CastUIMsg");

	AUAEPlayerController_ClientRPC_CastUIMsg_Params params;
	params.strMsg = strMsg;
	params.module = module;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::ClientRepListReq(class UObject* InObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRepListReq");

	AUAEPlayerController_ClientRepListReq_Params params;
	params.InObject = InObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::ClientRepComponentsReq(class UObject* InObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientRepComponentsReq");

	AUAEPlayerController_ClientRepComponentsReq_Params params;
	params.InObject = InObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ClientInitPlayerOBInfoButton()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientInitPlayerOBInfoButton");

	AUAEPlayerController_ClientInitPlayerOBInfoButton_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ClientBroadcastRespawnComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientBroadcastRespawnComplete");

	AUAEPlayerController_ClientBroadcastRespawnComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::ClientBroadcastReconnectionSuccessful()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientBroadcastReconnectionSuccessful");

	AUAEPlayerController_ClientBroadcastReconnectionSuccessful_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEPlayerController::ClientAcknowledgeReconnection_4(uint32_t Token)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.ClientAcknowledgeReconnection_4");

	AUAEPlayerController_ClientAcknowledgeReconnection_4_Params params;
	params.Token = Token;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::CheckPlayerOBInfoButtonInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CheckPlayerOBInfoButtonInit");

	AUAEPlayerController_CheckPlayerOBInfoButtonInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool AUAEPlayerController::CheckAcknowledgedPawn(class APawn* InPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CheckAcknowledgedPawn");

	AUAEPlayerController_CheckAcknowledgedPawn_Params params;
	params.InPawn = InPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AUAEPlayerController::CastUIMsg(const struct FString& strMsg, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CastUIMsg");

	AUAEPlayerController_CastUIMsg_Params params;
	params.strMsg = strMsg;
	params.module = module;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








EPickUpCheckResult AUAEPlayerController::CanPickUpItem(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.CanPickUpItem");

	AUAEPlayerController_CanPickUpItem_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void AUAEPlayerController::BroadcastUIMessage(const struct FString& MessageName, int TipsIDOrType, const struct FString& Param1, const struct FString& Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.BroadcastUIMessage");

	AUAEPlayerController_BroadcastUIMessage_Params params;
	params.MessageName = MessageName;
	params.TipsIDOrType = TipsIDOrType;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEPlayerController::BroadcastRespawnComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEPlayerController.BroadcastRespawnComplete");

	AUAEPlayerController_BroadcastRespawnComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCameraRecordSequenceHelper::WriteRotation(float Time, const struct FRotator& Rotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.WriteRotation");

	UCameraRecordSequenceHelper_WriteRotation_Params params;
	params.Time = Time;
	params.Rotation = Rotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCameraRecordSequenceHelper::WriteLocation(float Time, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.WriteLocation");

	UCameraRecordSequenceHelper_WriteLocation_Params params;
	params.Time = Time;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCameraRecordSequenceHelper::WriteFOV(float Time, float FOV)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.WriteFOV");

	UCameraRecordSequenceHelper_WriteFOV_Params params;
	params.Time = Time;
	params.FOV = FOV;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCameraRecordSequenceHelper::WriteFocalLength(float Time, float FocalLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.WriteFocalLength");

	UCameraRecordSequenceHelper_WriteFocalLength_Params params;
	params.Time = Time;
	params.FocalLength = FocalLength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCameraRecordSequenceHelper::SetDuration(float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.SetDuration");

	UCameraRecordSequenceHelper_SetDuration_Params params;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCameraRecordSequenceHelper::MarkSequenceChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.MarkSequenceChanged");

	UCameraRecordSequenceHelper_MarkSequenceChanged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCameraRecordSequenceHelper::ForceTemplateRefresh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.ForceTemplateRefresh");

	UCameraRecordSequenceHelper_ForceTemplateRefresh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCameraRecordSequenceHelper::FixSpawnTrack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.FixSpawnTrack");

	UCameraRecordSequenceHelper_FixSpawnTrack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCameraRecordSequenceHelper::ExtendCameraCutToPlaybackRange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.ExtendCameraCutToPlaybackRange");

	UCameraRecordSequenceHelper_ExtendCameraCutToPlaybackRange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCameraRecordSequenceHelper::DumpSequenceStructure(const struct FString& SequencePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.DumpSequenceStructure");

	UCameraRecordSequenceHelper_DumpSequenceStructure_Params params;
	params.SequencePath = SequencePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCameraRecordSequenceHelper::DumpBlueprintSCS(const struct FString& BlueprintPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.DumpBlueprintSCS");

	UCameraRecordSequenceHelper_DumpBlueprintSCS_Params params;
	params.BlueprintPath = BlueprintPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCameraRecordSequenceHelper* UCameraRecordSequenceHelper::CreateCameraRecordSessionFromSequence(class ULevelSequence* Sequence)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.CreateCameraRecordSessionFromSequence");

	UCameraRecordSequenceHelper_CreateCameraRecordSessionFromSequence_Params params;
	params.Sequence = Sequence;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCameraRecordSequenceHelper* UCameraRecordSequenceHelper::CreateCameraRecordSession(const struct FString& SequencePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.CreateCameraRecordSession");

	UCameraRecordSequenceHelper_CreateCameraRecordSession_Params params;
	params.SequencePath = SequencePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCameraRecordSequenceHelper::ClearFrames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.CameraRecordSequenceHelper.ClearFrames");

	UCameraRecordSequenceHelper_ClearFrames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UDynamicSpotContainerComponent::UseSerializeData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.DynamicSpotContainerComponent.UseSerializeData");

	UDynamicSpotContainerComponent_UseSerializeData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGeneratorActorAIInterface::RegisterAIPickupPoint(const struct FVector& BuildingLoc, const struct FVector& SpotLoc, class AActor* PickUpActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorAIInterface.RegisterAIPickupPoint");

	UGeneratorActorAIInterface_RegisterAIPickupPoint_Params params;
	params.BuildingLoc = BuildingLoc;
	params.SpotLoc = SpotLoc;
	params.PickUpActor = PickUpActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGeneratorActorInterface::SetExtendData(const struct FString& Key, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.SetExtendData");

	UGeneratorActorInterface_SetExtendData_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGeneratorActorInterface::SetAttachedActor(class AActor* AttachedActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.SetAttachedActor");

	UGeneratorActorInterface_SetAttachedActor_Params params;
	params.AttachedActor = AttachedActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGeneratorActorInterface::InitDataNew(int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem, int SpotDataIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.InitDataNew");

	UGeneratorActorInterface_InitDataNew_Params params;
	params.ItemCount = ItemCount;
	params.Value = Value;
	params.Category = Category;
	params.RepeatGenerateItem = RepeatGenerateItem;
	params.SpotDataIndex = SpotDataIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGeneratorActorInterface::InitData(class UItemSpotSceneComponent* ItemSpotSceneComponent, int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.InitData");

	UGeneratorActorInterface_InitData_Params params;
	params.ItemSpotSceneComponent = ItemSpotSceneComponent;
	params.ItemCount = ItemCount;
	params.Value = Value;
	params.Category = Category;
	params.RepeatGenerateItem = RepeatGenerateItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







int UGeneratorActorInterface::GetItemId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorActorInterface.GetItemId");

	UGeneratorActorInterface_GetItemId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UGeneratorVehicleInterface::SetSafeSpawn(bool ab_IsSafeSpawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.SetSafeSpawn");

	UGeneratorVehicleInterface_SetSafeSpawn_Params params;
	params.ab_IsSafeSpawn = ab_IsSafeSpawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGeneratorVehicleInterface::ServerDetachAllPlayerFromSeatByGenerator(bool bMustExit, bool bApplyVehicleVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.ServerDetachAllPlayerFromSeatByGenerator");

	UGeneratorVehicleInterface_ServerDetachAllPlayerFromSeatByGenerator_Params params;
	params.bMustExit = bMustExit;
	params.bApplyVehicleVelocity = bApplyVehicleVelocity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGeneratorVehicleInterface::InitVehicle(int FuelPercent, bool bEngineOn, bool bInHouse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.InitVehicle");

	UGeneratorVehicleInterface_InitVehicle_Params params;
	params.FuelPercent = FuelPercent;
	params.bEngineOn = bEngineOn;
	params.bInHouse = bInHouse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGeneratorVehicleInterface::CheckSpawnLocation(const struct FVector& SpawnLocation, float MaxSpawnDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GeneratorVehicleInterface.CheckSpawnLocation");

	UGeneratorVehicleInterface_CheckSpawnLocation_Params params;
	params.SpawnLocation = SpawnLocation;
	params.MaxSpawnDistance = MaxSpawnDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AGlobalConfigActor::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.GlobalConfigActor.Init");

	AGlobalConfigActor_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FItemRegionCircle UImplItemRegionInterface::GetRegion(const struct FString& Tag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ImplItemRegionInterface.GetRegion");

	UImplItemRegionInterface_GetRegion_Params params;
	params.Tag = Tag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UItemConfigActorComponent::RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RegisterGroupSceneComponent");

	UItemConfigActorComponent_RegisterGroupSceneComponent_Params params;
	params.GroupType = GroupType;
	params.GroupSceneComponent = GroupSceneComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









TArray<struct FItemSpawnClass> UItemConfigActorComponent::RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomItemSpawnClass");

	UItemConfigActorComponent_RandomItemSpawnClass_Params params;
	params.ItemValue = ItemValue;
	params.ItemCategory = ItemCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<class USceneComponent*> UItemConfigActorComponent::RandomGroupSceneComponents(int GroupType, int Persent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponents");

	UItemConfigActorComponent_RandomGroupSceneComponents_Params params;
	params.GroupType = GroupType;
	params.Persent = Persent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class USceneComponent* UItemConfigActorComponent::RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.RandomGroupSceneComponent");

	UItemConfigActorComponent_RandomGroupSceneComponent_Params params;
	params.AllGroups = AllGroups;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UClass* UItemConfigActorComponent::LoadActorClass(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.LoadActorClass");

	UItemConfigActorComponent_LoadActorClass_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FItemSpawnClass> UItemConfigActorComponent::GetItemSpawnClass(const struct FItemSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemConfigActorComponent.GetItemSpawnClass");

	UItemConfigActorComponent_GetItemSpawnClass_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool AItemCountArea::IsInArea(struct FVector* Position)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemCountArea.IsInArea");

	AItemCountArea_IsInArea_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;

	return params.ReturnValue;
}





void UItemGroupRepeatSpotComponent::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.Stop");

	UItemGroupRepeatSpotComponent_Stop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGroupRepeatSpotComponent::SetPropertySpotAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.SetPropertySpotAll");

	UItemGroupRepeatSpotComponent_SetPropertySpotAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class AUAEGameMode* UItemGroupRepeatSpotComponent::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.GetGameMode");

	UItemGroupRepeatSpotComponent_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UItemGroupRepeatSpotComponent::GenerateSpotAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.GenerateSpotAll");

	UItemGroupRepeatSpotComponent_GenerateSpotAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UItemGroupRepeatSpotComponent::ClearAllSpotItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.ItemGroupRepeatSpotComponent.ClearAllSpotItems");

	UItemGroupRepeatSpotComponent_ClearAllSpotItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ULuaBTDecoratorBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveTickAI");

	ULuaBTDecoratorBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTDecoratorBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveTick");

	ULuaBTDecoratorBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTDecoratorBase::ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveObserverDeactivatedAI");

	ULuaBTDecoratorBase_ReceiveObserverDeactivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTDecoratorBase::ReceiveObserverDeactivated(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveObserverDeactivated");

	ULuaBTDecoratorBase_ReceiveObserverDeactivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTDecoratorBase::ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveObserverActivatedAI");

	ULuaBTDecoratorBase_ReceiveObserverActivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTDecoratorBase::ReceiveObserverActivated(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveObserverActivated");

	ULuaBTDecoratorBase_ReceiveObserverActivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTDecoratorBase::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveExecutionStartAI");

	ULuaBTDecoratorBase_ReceiveExecutionStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTDecoratorBase::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveExecutionStart");

	ULuaBTDecoratorBase_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ULuaBTDecoratorBase::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveExecutionFinishAI");

	ULuaBTDecoratorBase_ReceiveExecutionFinishAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTDecoratorBase::ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.ReceiveExecutionFinish");

	ULuaBTDecoratorBase_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool ULuaBTDecoratorBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.PerformConditionCheckAI");

	ULuaBTDecoratorBase_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool ULuaBTDecoratorBase::PerformConditionCheck(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.PerformConditionCheck");

	ULuaBTDecoratorBase_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ULuaBTDecoratorBase::IsDecoratorObserverActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.IsDecoratorObserverActive");

	ULuaBTDecoratorBase_IsDecoratorObserverActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ULuaBTDecoratorBase::IsDecoratorExecutionActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTDecoratorBase.IsDecoratorExecutionActive");

	ULuaBTDecoratorBase_IsDecoratorExecutionActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void ULuaBTNodeInterface::SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsVector");

	ULuaBTNodeInterface_SetValueAsVector_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsString");

	ULuaBTNodeInterface_SetValueAsString_Params params;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& RotatorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsRotator");

	ULuaBTNodeInterface_SetValueAsRotator_Params params;
	params.KeyName = KeyName;
	params.RotatorValue = RotatorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsObject");

	ULuaBTNodeInterface_SetValueAsObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsName");

	ULuaBTNodeInterface_SetValueAsName_Params params;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsInt");

	ULuaBTNodeInterface_SetValueAsInt_Params params;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsFloat");

	ULuaBTNodeInterface_SetValueAsFloat_Params params;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsEnum");

	ULuaBTNodeInterface_SetValueAsEnum_Params params;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsClass");

	ULuaBTNodeInterface_SetValueAsClass_Params params;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTNodeInterface::SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.SetValueAsBool");

	ULuaBTNodeInterface_SetValueAsBool_Params params;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool ULuaBTNodeInterface::IsVectorValueSet(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.IsVectorValueSet");

	ULuaBTNodeInterface_IsVectorValueSet_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector ULuaBTNodeInterface::GetValueAsVector(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsVector");

	ULuaBTNodeInterface_GetValueAsVector_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString ULuaBTNodeInterface::GetValueAsString(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsString");

	ULuaBTNodeInterface_GetValueAsString_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FRotator ULuaBTNodeInterface::GetValueAsRotator(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsRotator");

	ULuaBTNodeInterface_GetValueAsRotator_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* ULuaBTNodeInterface::GetValueAsObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsObject");

	ULuaBTNodeInterface_GetValueAsObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FName ULuaBTNodeInterface::GetValueAsName(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsName");

	ULuaBTNodeInterface_GetValueAsName_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int ULuaBTNodeInterface::GetValueAsInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsInt");

	ULuaBTNodeInterface_GetValueAsInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float ULuaBTNodeInterface::GetValueAsFloat(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsFloat");

	ULuaBTNodeInterface_GetValueAsFloat_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








unsigned char ULuaBTNodeInterface::GetValueAsEnum(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsEnum");

	ULuaBTNodeInterface_GetValueAsEnum_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UClass* ULuaBTNodeInterface::GetValueAsClass(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsClass");

	ULuaBTNodeInterface_GetValueAsClass_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool ULuaBTNodeInterface::GetValueAsBool(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.GetValueAsBool");

	ULuaBTNodeInterface_GetValueAsBool_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ULuaBTNodeInterface::ClearValue(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTNodeInterface.ClearValue");

	ULuaBTNodeInterface_ClearValue_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ULuaBTServiceBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.ReceiveTickAI");

	ULuaBTServiceBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTServiceBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.ReceiveTick");

	ULuaBTServiceBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTServiceBase::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.ReceiveSearchStartAI");

	ULuaBTServiceBase_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTServiceBase::ReceiveSearchStart(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.ReceiveSearchStart");

	ULuaBTServiceBase_ReceiveSearchStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTServiceBase::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.ReceiveDeactivationAI");

	ULuaBTServiceBase_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTServiceBase::ReceiveDeactivation(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.ReceiveDeactivation");

	ULuaBTServiceBase_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTServiceBase::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.ReceiveActivationAI");

	ULuaBTServiceBase_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTServiceBase::ReceiveActivation(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.ReceiveActivation");

	ULuaBTServiceBase_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ULuaBTServiceBase::IsServiceActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTServiceBase.IsServiceActive");

	ULuaBTServiceBase_IsServiceActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void ULuaBTTaskBase::SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.SetFinishOnMessageWithId");

	ULuaBTTaskBase_SetFinishOnMessageWithId_Params params;
	params.MessageName = MessageName;
	params.RequestID = RequestID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTTaskBase::SetFinishOnMessage(const struct FName& MessageName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.SetFinishOnMessage");

	ULuaBTTaskBase_SetFinishOnMessage_Params params;
	params.MessageName = MessageName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ULuaBTTaskBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveTickAI");

	ULuaBTTaskBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTTaskBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveTick");

	ULuaBTTaskBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTTaskBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveExecuteAI");

	ULuaBTTaskBase_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTTaskBase::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveExecute");

	ULuaBTTaskBase_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaBTTaskBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveAbortAI");

	ULuaBTTaskBase_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaBTTaskBase::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.ReceiveAbort");

	ULuaBTTaskBase_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ULuaBTTaskBase::IsTaskExecuting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.IsTaskExecuting");

	ULuaBTTaskBase_IsTaskExecuting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ULuaBTTaskBase::IsTaskAborting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.IsTaskAborting");

	ULuaBTTaskBase_IsTaskAborting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ULuaBTTaskBase::FinishExecute(bool bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.FinishExecute");

	ULuaBTTaskBase_FinishExecute_Params params;
	params.bSuccess = bSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULuaBTTaskBase::FinishAbort()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.LuaBTTaskBase.FinishAbort");

	ULuaBTTaskBase_FinishAbort_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMissionBoardComponent::OnRep_Config()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.MissionBoardComponent.OnRep_Config");

	UMissionBoardComponent_OnRep_Config_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







int UMissionBoardComponent::GetUtcLeftSecondsByConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.MissionBoardComponent.GetUtcLeftSecondsByConfig");

	UMissionBoardComponent_GetUtcLeftSecondsByConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void ANetworkReportActor::RPC_Server_SyncClientPkgLossArrayInfo(TArray<unsigned char> InLoss, TArray<unsigned char> OutLoss)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.NetworkReportActor.RPC_Server_SyncClientPkgLossArrayInfo");

	ANetworkReportActor_RPC_Server_SyncClientPkgLossArrayInfo_Params params;
	params.InLoss = InLoss;
	params.OutLoss = OutLoss;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ANetworkReportActor::ResetAllNetworkData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.NetworkReportActor.ResetAllNetworkData");

	ANetworkReportActor_ResetAllNetworkData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UNewWeatherComponent::LuaInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.NewWeatherComponent.LuaInit");

	UNewWeatherComponent_LuaInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEAdvertisementActor::SetStaticMeshPath(const struct FString& InMeshPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetStaticMeshPath");

	AUAEAdvertisementActor_SetStaticMeshPath_Params params;
	params.InMeshPath = InMeshPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEAdvertisementActor::SetStaticMesh(class UStaticMesh* InStaticMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetStaticMesh");

	AUAEAdvertisementActor_SetStaticMesh_Params params;
	params.InStaticMesh = InStaticMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEAdvertisementActor::SetScale(const struct FVector& InScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetScale");

	AUAEAdvertisementActor_SetScale_Params params;
	params.InScale = InScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEAdvertisementActor::SetId(int InputID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetId");

	AUAEAdvertisementActor_SetId_Params params;
	params.InputID = InputID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEAdvertisementActor::SetCulDistance(float CulDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.SetCulDistance");

	AUAEAdvertisementActor_SetCulDistance_Params params;
	params.CulDistance = CulDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEAdvertisementActor::RequestHttpImageByUrl(const struct FString& PicUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.RequestHttpImageByUrl");

	AUAEAdvertisementActor_RequestHttpImageByUrl_Params params;
	params.PicUrl = PicUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAEAdvertisementActor::ReplaceTexture(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.ReplaceTexture");

	AUAEAdvertisementActor_ReplaceTexture_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAEAdvertisementActor::OnRequestImgSuccess(class UTexture2D* Texture, const struct FString& RequestedURL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRequestImgSuccess");

	AUAEAdvertisementActor_OnRequestImgSuccess_Params params;
	params.Texture = Texture;
	params.RequestedURL = RequestedURL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEAdvertisementActor::OnRep_MeshPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRep_MeshPath");

	AUAEAdvertisementActor_OnRep_MeshPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEAdvertisementActor::OnRep_Id()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnRep_Id");

	AUAEAdvertisementActor_OnRep_Id_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEAdvertisementActor::OnClientLoadMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.OnClientLoadMesh");

	AUAEAdvertisementActor_OnClientLoadMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAEAdvertisementActor::InitImageDownloadUtil()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEAdvertisementActor.InitImageDownloadUtil");

	AUAEAdvertisementActor_InitImageDownloadUtil_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ARegionableAdvertisementActor::ReceivedPlayerActiveRegionsChanged(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.RegionableAdvertisementActor.ReceivedPlayerActiveRegionsChanged");

	ARegionableAdvertisementActor_ReceivedPlayerActiveRegionsChanged_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class AController* AUAEBuffApplierActor::GetTheInstigatorController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEBuffApplierActor.GetTheInstigatorController");

	AUAEBuffApplierActor_GetTheInstigatorController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UUAEChaCustomAnimListComponent::SetCharacterAnimOverrideType(int AnimOverrideType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.SetCharacterAnimOverrideType");

	UUAEChaCustomAnimListComponent_SetCharacterAnimOverrideType_Params params;
	params.AnimOverrideType = AnimOverrideType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUAEChaCustomAnimListComponent::ReleaseCustomAnimAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.ReleaseCustomAnimAssets");

	UUAEChaCustomAnimListComponent_ReleaseCustomAnimAssets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UUAEChaCustomAnimListComponent::HasAnimAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.HasAnimAsyncLoadingFinished");

	UUAEChaCustomAnimListComponent_HasAnimAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UUAEChaCustomAnimListComponent::GetOwnerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetOwnerName");

	UUAEChaCustomAnimListComponent_GetOwnerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UClass* UUAEChaCustomAnimListComponent::GetCharacterCustomAnimInstance(const struct FString& AnimName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetCharacterCustomAnimInstance");

	UUAEChaCustomAnimListComponent_GetCharacterCustomAnimInstance_Params params;
	params.AnimName = AnimName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UAnimationAsset* UUAEChaCustomAnimListComponent::GetCharacterCustomAnim(const struct FString& AnimName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetCharacterCustomAnim");

	UUAEChaCustomAnimListComponent_GetCharacterCustomAnim_Params params;
	params.AnimName = AnimName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UBlendSpace1D* UUAEChaCustomAnimListComponent::GetBlendSpace1D(const struct FString& AnimAssetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetBlendSpace1D");

	UUAEChaCustomAnimListComponent_GetBlendSpace1D_Params params;
	params.AnimAssetName = AnimAssetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UBlendSpace* UUAEChaCustomAnimListComponent::GetBlendSpace(const struct FString& AnimAssetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetBlendSpace");

	UUAEChaCustomAnimListComponent_GetBlendSpace_Params params;
	params.AnimAssetName = AnimAssetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UAnimSequence* UUAEChaCustomAnimListComponent::GetAnimSequence(const struct FString& AnimAssetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetAnimSequence");

	UUAEChaCustomAnimListComponent_GetAnimSequence_Params params;
	params.AnimAssetName = AnimAssetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UAnimMontage* UUAEChaCustomAnimListComponent::GetAnimMontage(const struct FString& AnimAssetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetAnimMontage");

	UUAEChaCustomAnimListComponent_GetAnimMontage_Params params;
	params.AnimAssetName = AnimAssetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UAimOffsetBlendSpace* UUAEChaCustomAnimListComponent::GetAimOffsetBlendSpace(const struct FString& AnimAssetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.GetAimOffsetBlendSpace");

	UUAEChaCustomAnimListComponent_GetAimOffsetBlendSpace_Params params;
	params.AnimAssetName = AnimAssetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UUAEChaCustomAnimListComponent::CallRequestLoadAnimAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaCustomAnimListComponent.CallRequestLoadAnimAssets");

	UUAEChaCustomAnimListComponent_CallRequestLoadAnimAssets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUAEChaParachuteAnimListComponent::ReleaseParachuteAnimAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.ReleaseParachuteAnimAssets");

	UUAEChaParachuteAnimListComponent_ReleaseParachuteAnimAssets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEChaParachuteAnimListComponent::OnParachuteAnimAsyncLoadingFinished(const struct FString& AnimLoaded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.OnParachuteAnimAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_OnParachuteAnimAsyncLoadingFinished_Params params;
	params.AnimLoaded = AnimLoaded;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUAEChaParachuteAnimListComponent::OnAnimListAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.OnAnimListAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_OnAnimListAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UUAEChaParachuteAnimListComponent::HasAnimAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.HasAnimAsyncLoadingFinished");

	UUAEChaParachuteAnimListComponent_HasAnimAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UUAEChaParachuteAnimListComponent::HandleAsyncLoadingFinishedEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.HandleAsyncLoadingFinishedEvent");

	UUAEChaParachuteAnimListComponent_HandleAsyncLoadingFinishedEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UUAEChaParachuteAnimListComponent::GetOwnerName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.GetOwnerName");

	UUAEChaParachuteAnimListComponent_GetOwnerName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UAnimationAsset* UUAEChaParachuteAnimListComponent::GetCharacterParachuteAnim(TEnumAsByte<ECharacterParachuteAnimType> AnimType, int AnimOverrideType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaParachuteAnimListComponent.GetCharacterParachuteAnim");

	UUAEChaParachuteAnimListComponent_GetCharacterParachuteAnim_Params params;
	params.AnimType = AnimType;
	params.AnimOverrideType = AnimOverrideType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UUAECharacterAnimListComponent::SetAnimListMapValueData(struct FAnimListMapValueData* AnimListValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.SetAnimListMapValueData");

	UUAECharacterAnimListComponent_SetAnimListMapValueData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AnimListValue != nullptr)
		*AnimListValue = params.AnimListValue;
}








bool UUAECharacterAnimListComponent::OnPreLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnPreLoadingFinished");

	UUAECharacterAnimListComponent_OnPreLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UUAECharacterAnimListComponent::OnAsyncLoadingFinishedNew2(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew2");

	UUAECharacterAnimListComponent_OnAsyncLoadingFinishedNew2_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAECharacterAnimListComponent::OnAsyncLoadingFinishedNew(const struct FAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.OnAsyncLoadingFinishedNew");

	UUAECharacterAnimListComponent_OnAsyncLoadingFinishedNew_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAECharacterAnimListComponent::InitAnimListMap(bool IsFPP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.InitAnimListMap");

	UUAECharacterAnimListComponent_InitAnimListMap_Params params;
	params.IsFPP = IsFPP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FPlayerAnimData> UUAECharacterAnimListComponent::GetCharacterShovelAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetCharacterShovelAnim");

	UUAECharacterAnimListComponent_GetCharacterShovelAnim_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FPlayerAnimData> UUAECharacterAnimListComponent::GetCharacterJumpAnim(TEnumAsByte<ECharacterJumpType> JumpType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetCharacterJumpAnim");

	UUAECharacterAnimListComponent_GetCharacterJumpAnim_Params params;
	params.JumpType = JumpType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UAnimationAsset* UUAECharacterAnimListComponent::GetAnimationAsset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAECharacterAnimListComponent.GetAnimationAsset");

	UUAECharacterAnimListComponent_GetAnimationAsset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UUAEChaVehAnimListComponent::SetVehCharAnimDataList(TArray<struct FVehCharAnimData> InVehCharAnimDataList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.SetVehCharAnimDataList");

	UUAEChaVehAnimListComponent_SetVehCharAnimDataList_Params params;
	params.InVehCharAnimDataList = InVehCharAnimDataList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUAEChaVehAnimListComponent::OnIdleAnimListAsyncLoadingFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.OnIdleAnimListAsyncLoadingFinished");

	UUAEChaVehAnimListComponent_OnIdleAnimListAsyncLoadingFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEChaVehAnimListComponent::OnAnimListAsyncLoadingFinished(const struct FAsyncLoadCharVehAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.OnAnimListAsyncLoadingFinished");

	UUAEChaVehAnimListComponent_OnAnimListAsyncLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEChaVehAnimListComponent::ChangeAnimData(TArray<struct FVehCharAnimData> InAnimData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEChaVehAnimListComponent.ChangeAnimData");

	UUAEChaVehAnimListComponent_ChangeAnimData_Params params;
	params.InAnimData = InAnimData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::UpdateTrackBindingData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdateTrackBindingData");

	AUAELevelSequenceActor_UpdateTrackBindingData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::UpdateSequence(const struct FString& LevelSequencePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdateSequence");

	AUAELevelSequenceActor_UpdateSequence_Params params;
	params.LevelSequencePath = LevelSequencePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void AUAELevelSequenceActor::UpdatePlayback(bool bRestoreState, bool bDisableMovementInput, bool bDisableLookAtInput, bool bHidePlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdatePlayback");

	AUAELevelSequenceActor_UpdatePlayback_Params params;
	params.bRestoreState = bRestoreState;
	params.bDisableMovementInput = bDisableMovementInput;
	params.bDisableLookAtInput = bDisableLookAtInput;
	params.bHidePlayer = bHidePlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAELevelSequenceActor::UpdateInstanceData(const struct FVector& OffsetVector, const struct FRotator& OffsetRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.UpdateInstanceData");

	AUAELevelSequenceActor_UpdateInstanceData_Params params;
	params.OffsetVector = OffsetVector;
	params.OffsetRotation = OffsetRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::StopMontageParticle(const struct FName& SlotName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.StopMontageParticle");

	AUAELevelSequenceActor_StopMontageParticle_Params params;
	params.SlotName = SlotName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.Stop");

	AUAELevelSequenceActor_Stop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::SetUseSelfTransformOrigin(bool bInUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetUseSelfTransformOrigin");

	AUAELevelSequenceActor_SetUseSelfTransformOrigin_Params params;
	params.bInUse = bInUse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::SetTrackBindingInfo(TMap<struct FString, struct FString> TrackBindingInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetTrackBindingInfo");

	AUAELevelSequenceActor_SetTrackBindingInfo_Params params;
	params.TrackBindingInfo = TrackBindingInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::SetTrackBindingData(TArray<struct FSeqActorBindingData> InTrackBindingData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetTrackBindingData");

	AUAELevelSequenceActor_SetTrackBindingData_Params params;
	params.InTrackBindingData = InTrackBindingData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAELevelSequenceActor::SetNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetNetSyncBinding");

	AUAELevelSequenceActor_SetNetSyncBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::SetLevelSequenceAssetPath(const struct FString& InLevelSequenceAssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetLevelSequenceAssetPath");

	AUAELevelSequenceActor_SetLevelSequenceAssetPath_Params params;
	params.InLevelSequenceAssetPath = InLevelSequenceAssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::SetDisabledTrackNames(TArray<struct FString> InDisabledTrackNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.SetDisabledTrackNames");

	AUAELevelSequenceActor_SetDisabledTrackNames_Params params;
	params.InDisabledTrackNames = InDisabledTrackNames;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::ResetNetSyncBindings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ResetNetSyncBindings");

	AUAELevelSequenceActor_ResetNetSyncBindings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::ResetNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ResetNetSyncBinding");

	AUAELevelSequenceActor_ResetNetSyncBinding_Params params;
	params.Binding = Binding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAELevelSequenceActor::RemoveNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.RemoveNetSyncBinding");

	AUAELevelSequenceActor_RemoveNetSyncBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::ReleaseCameraCutTrack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReleaseCameraCutTrack");

	AUAELevelSequenceActor_ReleaseCameraCutTrack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::ReceiveOnStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnStop");

	AUAELevelSequenceActor_ReceiveOnStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::ReceiveOnPreStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnPreStop");

	AUAELevelSequenceActor_ReceiveOnPreStop_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::ReceiveOnPlayReverse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnPlayReverse");

	AUAELevelSequenceActor_ReceiveOnPlayReverse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::ReceiveOnPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnPlay");

	AUAELevelSequenceActor_ReceiveOnPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::ReceiveOnPause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnPause");

	AUAELevelSequenceActor_ReceiveOnPause_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AUAELevelSequenceActor::ReceiveOnObjectSpawned(class UObject* InObject, const struct FGuid& InBindingID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnObjectSpawned");

	AUAELevelSequenceActor_ReceiveOnObjectSpawned_Params params;
	params.InObject = InObject;
	params.InBindingID = InBindingID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::ReceiveOnFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.ReceiveOnFinished");

	AUAELevelSequenceActor_ReceiveOnFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AUAELevelSequenceActor::Play(float InPlaytime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.Play");

	AUAELevelSequenceActor_Play_Params params;
	params.InPlaytime = InPlaytime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::OnSequencePreStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnSequencePreStop");

	AUAELevelSequenceActor_OnSequencePreStop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::OnSequenceFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnSequenceFinished");

	AUAELevelSequenceActor_OnSequenceFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::OnRep_NetSyncBindingData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_NetSyncBindingData");

	AUAELevelSequenceActor_OnRep_NetSyncBindingData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::OnRep_LevelSequenceAssetPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_LevelSequenceAssetPath");

	AUAELevelSequenceActor_OnRep_LevelSequenceAssetPath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::OnRep_DisabledTrackNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_DisabledTrackNames");

	AUAELevelSequenceActor_OnRep_DisabledTrackNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::OnRep_bUseSelfTransformOrigin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_bUseSelfTransformOrigin");

	AUAELevelSequenceActor_OnRep_bUseSelfTransformOrigin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::OnRep_AuthorityStartPlayTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnRep_AuthorityStartPlayTime");

	AUAELevelSequenceActor_OnRep_AuthorityStartPlayTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AUAELevelSequenceActor::OnObjectSpawnedEvent(class UObject* InObject, const struct FGuid& InBindingID, const struct FMovieSceneSequenceID& InSequenceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.OnObjectSpawnedEvent");

	AUAELevelSequenceActor_OnObjectSpawnedEvent_Params params;
	params.InObject = InObject;
	params.InBindingID = InBindingID;
	params.InSequenceID = InSequenceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool AUAELevelSequenceActor::HasActiveSequenceActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.HasActiveSequenceActor");

	AUAELevelSequenceActor_HasActiveSequenceActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AUAELevelSequenceActor::HandleOwnerReady()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.HandleOwnerReady");

	AUAELevelSequenceActor_HandleOwnerReady_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AUAELevelSequenceActor::GoToEndAndStop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.GoToEndAndStop");

	AUAELevelSequenceActor_GoToEndAndStop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FMovieSceneObjectBindingID AUAELevelSequenceActor::GetPossessableOrSpawnableByName(const struct FString& NameKeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.GetPossessableOrSpawnableByName");

	AUAELevelSequenceActor_GetPossessableOrSpawnableByName_Params params;
	params.NameKeyString = NameKeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FMovieSceneObjectBindingID AUAELevelSequenceActor::GetFirstPossessableTrack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.GetFirstPossessableTrack");

	AUAELevelSequenceActor_GetFirstPossessableTrack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











class ULevelSequencePlayer* AUAELevelSequenceActor::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class AUAELevelSequenceActor** OutActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.CreateLevelSequencePlayer");

	AUAELevelSequenceActor_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InLevelSequence = InLevelSequence;
	params.Settings = Settings;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}







bool AUAELevelSequenceActor::CheckStartPlayValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.CheckStartPlayValid");

	AUAELevelSequenceActor_CheckStartPlayValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void AUAELevelSequenceActor::AddNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequenceActor.AddNetSyncBinding");

	AUAELevelSequenceActor_AddNetSyncBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUAELevelSequencePlayer::EnablePrimitiveComponentTracking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequencePlayer.EnablePrimitiveComponentTracking");

	UUAELevelSequencePlayer_EnablePrimitiveComponentTracking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUAELevelSequencePlayer::DisablePrimitiveComponentTracking()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAELevelSequencePlayer.DisablePrimitiveComponentTracking");

	UUAELevelSequencePlayer_DisablePrimitiveComponentTracking_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAELobbyCharAnimListComp::OnAsyncLoadingFinished(const struct FLobbyAsyncLoadCharAnimParams& LoadingParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.OnAsyncLoadingFinished");

	UAELobbyCharAnimListComp_OnAsyncLoadingFinished_Params params;
	params.LoadingParam = LoadingParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UAELobbyCharAnimListComp::InitPendingList(TArray<struct FLobbyCharacterWeaponAnimData>* animEditList, TArray<struct FSoftObjectPath>* PendingList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.InitPendingList");

	UAELobbyCharAnimListComp_InitPendingList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (animEditList != nullptr)
		*animEditList = params.animEditList;
	if (PendingList != nullptr)
		*PendingList = params.PendingList;
}











class UAnimationAsset* UAELobbyCharAnimListComp::GetCharacterAnim(TEnumAsByte<ELobbyCharacterPosIndex> PosIdx, TEnumAsByte<ELobbyCharacterAnimType> GenderType, int WeaponAnimType, TEnumAsByte<ECharacterShowSceneType> sceneType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.GetCharacterAnim");

	UAELobbyCharAnimListComp_GetCharacterAnim_Params params;
	params.PosIdx = PosIdx;
	params.GenderType = GenderType;
	params.WeaponAnimType = WeaponAnimType;
	params.sceneType = sceneType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UAELobbyCharAnimListComp::BuildAnimMap(TEnumAsByte<ECharacterShowSceneType> sceneType, TArray<struct FLobbyCharacterWeaponAnimData>* AnimList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.AELobbyCharAnimListComp.BuildAnimMap");

	UAELobbyCharAnimListComp_BuildAnimMap_Params params;
	params.sceneType = sceneType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AnimList != nullptr)
		*AnimList = params.AnimList;
}








class AActor* UUAESpawnActorComponent::UAESpawnActor(const struct FUAESpawnActorParam& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.UAESpawnActor");

	UUAESpawnActorComponent_UAESpawnActor_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UClass* UUAESpawnActorComponent::PrepareSpawnData(int TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.PrepareSpawnData");

	UUAESpawnActorComponent_PrepareSpawnData_Params params;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UUAESpawnActorComponent::InitializeActor(class AActor* InActor, int TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAESpawnActorComponent.InitializeActor");

	UUAESpawnActorComponent_InitializeActor_Params params;
	params.InActor = InActor;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEWindowComponent::NotifyServerBroken(class APlayerController* Instigator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.NotifyServerBroken");

	UUAEWindowComponent_NotifyServerBroken_Params params;
	params.Instigator = Instigator;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEWindowComponent::NotifyRepDataUpdated(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.NotifyRepDataUpdated");

	UUAEWindowComponent_NotifyRepDataUpdated_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEWindowComponent::LocalHandleWindowBrokenBP(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.LocalHandleWindowBrokenBP");

	UUAEWindowComponent_LocalHandleWindowBrokenBP_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEWindowComponent::LocalHandleWindowBroken(bool bInitial, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.LocalHandleWindowBroken");

	UUAEWindowComponent_LocalHandleWindowBroken_Params params;
	params.bInitial = bInitial;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEWindowComponent::HandleBroken(class APlayerController* Instigator, bool bLocal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.HandleBroken");

	UUAEWindowComponent_HandleBroken_Params params;
	params.Instigator = Instigator;
	params.bLocal = bLocal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FUAEWindowRepData UUAEWindowComponent::GetRepData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.UAEWindowComponent.GetRepData");

	UUAEWindowComponent_GetRepData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UClass* UVehicleConfigActorComponent::LoadActorClass(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleConfigActorComponent.LoadActorClass");

	UVehicleConfigActorComponent_LoadActorClass_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleSpotStatisticsFromSpotFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsFromSpotFile");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsFromSpotFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleSpotStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleSpotStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleClassStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::WriteVehicleClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteVehicleClassStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatasToLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatasToLog");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatasToLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatas_V15()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas_V15");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_V15_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::WriteAllVehicleStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.WriteAllVehicleStatisticsDatas");

	UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAndTreasureBoxGeneratorComponent::SetAllVehicleNumRate(TMap<struct FString, float> Rates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.SetAllVehicleNumRate");

	UVehicleAndTreasureBoxGeneratorComponent_SetAllVehicleNumRate_Params params;
	params.Rates = Rates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::ResumeGenerate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.ResumeGenerate");

	UVehicleAndTreasureBoxGeneratorComponent_ResumeGenerate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAndTreasureBoxGeneratorComponent::RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterVehicleGenerateSpawnData");

	UVehicleAndTreasureBoxGeneratorComponent_RegisterVehicleGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAndTreasureBoxGeneratorComponent::RegisterSpotFromSingleFile(const struct FString& SpotFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterSpotFromSingleFile");

	UVehicleAndTreasureBoxGeneratorComponent_RegisterSpotFromSingleFile_Params params;
	params.SpotFilePath = SpotFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAndTreasureBoxGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RegisterGroupSpotComponent");

	UVehicleAndTreasureBoxGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVehicleAndTreasureBoxGeneratorComponent::RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSpotsByType");

	UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}








void UVehicleAndTreasureBoxGeneratorComponent::RandomTreasureBoxSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FTreasureBoxSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomTreasureBoxSingleSpots");

	UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}








void UVehicleAndTreasureBoxGeneratorComponent::RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSpotsByType");

	UVehicleAndTreasureBoxGeneratorComponent_RandomSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}








void UVehicleAndTreasureBoxGeneratorComponent::RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomSingleSpots");

	UVehicleAndTreasureBoxGeneratorComponent_RandomSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}





void UVehicleAndTreasureBoxGeneratorComponent::RandomGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.RandomGroups");

	UVehicleAndTreasureBoxGeneratorComponent_RandomGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::PauseGenerate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.PauseGenerate");

	UVehicleAndTreasureBoxGeneratorComponent_PauseGenerate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::LoadVehicleGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.LoadVehicleGenerateTable");

	UVehicleAndTreasureBoxGeneratorComponent_LoadVehicleGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UVehicleAndTreasureBoxGeneratorComponent::GMGenerateAllVehicleSpot(const struct FString& VehiclePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GMGenerateAllVehicleSpot");

	UVehicleAndTreasureBoxGeneratorComponent_GMGenerateAllVehicleSpot_Params params;
	params.VehiclePath = VehiclePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfoWithCategory(const struct FString& Category, struct FVehicleSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoWithCategory");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoWithCategory_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}









struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType, const struct FString& InCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfoBySpotType");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params params;
	params.SpotType = SpotType;
	params.InCategory = InCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetVehicleSpotRandomInfo(const struct FVehicleSpotProperty& SpotProperty, const struct FString& InCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetVehicleSpotRandomInfo");

	UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfo_Params params;
	params.SpotProperty = SpotProperty;
	params.InCategory = InCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVehicleGenerateRandomInfo UVehicleAndTreasureBoxGeneratorComponent::GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTreasureBoxSpotRandomInfo");

	UVehicleAndTreasureBoxGeneratorComponent_GetTreasureBoxSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}









struct FString UVehicleAndTreasureBoxGeneratorComponent::GetTraceLevelName(const struct FString& SpotFileName, int16_t LevelIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetTraceLevelName");

	UVehicleAndTreasureBoxGeneratorComponent_GetTraceLevelName_Params params;
	params.SpotFileName = SpotFileName;
	params.LevelIndex = LevelIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVehicleGenerateSpawnData UVehicleAndTreasureBoxGeneratorComponent::GetRandomVehicleClass(const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomVehicleClass");

	UVehicleAndTreasureBoxGeneratorComponent_GetRandomVehicleClass_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UVehicleAndTreasureBoxGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetRandomCategory");

	UVehicleAndTreasureBoxGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UVehicleAndTreasureBoxGeneratorComponent::GetAlreadyGeneratedVehicleNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GetAlreadyGeneratedVehicleNum");

	UVehicleAndTreasureBoxGeneratorComponent_GetAlreadyGeneratedVehicleNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UVehicleAndTreasureBoxGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.GenerateSpotOnTick");

	UVehicleAndTreasureBoxGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::EndGenerate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.EndGenerate");

	UVehicleAndTreasureBoxGeneratorComponent_EndGenerate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAndTreasureBoxGeneratorComponent::EnableRemovableMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.EnableRemovableMode");

	UVehicleAndTreasureBoxGeneratorComponent_EnableRemovableMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UVehicleAndTreasureBoxGeneratorComponent::DynamicSpawnVehicleBySpotId(int ID, const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DynamicSpawnVehicleBySpotId");

	UVehicleAndTreasureBoxGeneratorComponent_DynamicSpawnVehicleBySpotId_Params params;
	params.ID = ID;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UVehicleAndTreasureBoxGeneratorComponent::DeleteGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.DeleteGroups");

	UVehicleAndTreasureBoxGeneratorComponent_DeleteGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UVehicleAndTreasureBoxGeneratorComponent::CanDynamicSpawnVehicle(const struct FVector& SpawnLocation, const struct FVector& TestLocationOffset, const struct FVector& TestBoxSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.CanDynamicSpawnVehicle");

	UVehicleAndTreasureBoxGeneratorComponent_CanDynamicSpawnVehicle_Params params;
	params.SpawnLocation = SpawnLocation;
	params.TestLocationOffset = TestLocationOffset;
	params.TestBoxSize = TestBoxSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UVehicleAndTreasureBoxGeneratorComponent::AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleSpotCount");

	UVehicleAndTreasureBoxGeneratorComponent_AddVehicleSpotCount_Params params;
	params.SpotType = SpotType;
	params.Path = Path;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UVehicleAndTreasureBoxGeneratorComponent::AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddVehicleClassCount");

	UVehicleAndTreasureBoxGeneratorComponent_AddVehicleClassCount_Params params;
	params.Path = Path;
	params.IsValid = IsValid;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAndTreasureBoxGeneratorComponent::AddIgnoreClassPath(TArray<struct FString> IgnoreItemClassList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleAndTreasureBoxGeneratorComponent.AddIgnoreClassPath");

	UVehicleAndTreasureBoxGeneratorComponent_AddIgnoreClassPath_Params params;
	params.IgnoreItemClassList = IgnoreItemClassList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleGeneratorComponent::WriteVehicleSpotStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteVehicleSpotStatisticsDatas");

	UVehicleGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleGeneratorComponent::WriteVehicleClassStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteVehicleClassStatisticsDatas");

	UVehicleGeneratorComponent_WriteVehicleClassStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleGeneratorComponent::WriteAllVehicleStatisticsDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.WriteAllVehicleStatisticsDatas");

	UVehicleGeneratorComponent_WriteAllVehicleStatisticsDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleGeneratorComponent::RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RegisterVehicleGenerateSpawnData");

	UVehicleGeneratorComponent_RegisterVehicleGenerateSpawnData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleGeneratorComponent::RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RegisterGroupSpotComponent");

	UVehicleGeneratorComponent_RegisterGroupSpotComponent_Params params;
	params.GroupSpotComponent = GroupSpotComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVehicleGeneratorComponent::RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomSpotsByType");

	UVehicleGeneratorComponent_RandomSpotsByType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Property != nullptr)
		*Property = params.Property;
	if (Spots != nullptr)
		*Spots = params.Spots;
}








void UVehicleGeneratorComponent::RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomSingleSpots");

	UVehicleGeneratorComponent_RandomSingleSpots_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllSpots != nullptr)
		*AllSpots = params.AllSpots;
	if (Property != nullptr)
		*Property = params.Property;
}





void UVehicleGeneratorComponent::RandomGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.RandomGroups");

	UVehicleGeneratorComponent_RandomGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleGeneratorComponent::LoadVehicleGenerateTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.LoadVehicleGenerateTable");

	UVehicleGeneratorComponent_LoadVehicleGenerateTable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FVehicleGenerateRandomInfo UVehicleGeneratorComponent::GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfoBySpotType");

	UVehicleGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params params;
	params.SpotType = SpotType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVehicleGenerateRandomInfo UVehicleGeneratorComponent::GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetVehicleSpotRandomInfo");

	UVehicleGeneratorComponent_GetVehicleSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpotProperty != nullptr)
		*SpotProperty = params.SpotProperty;

	return params.ReturnValue;
}








struct FVehicleGenerateSpawnData UVehicleGeneratorComponent::GetRandomVehicleClass(const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetRandomVehicleClass");

	UVehicleGeneratorComponent_GetRandomVehicleClass_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UVehicleGeneratorComponent::GetRandomCategory(TArray<struct FSpotWeight> SpotWeights)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GetRandomCategory");

	UVehicleGeneratorComponent_GetRandomCategory_Params params;
	params.SpotWeights = SpotWeights;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UVehicleGeneratorComponent::GenerateSpotOnTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.GenerateSpotOnTick");

	UVehicleGeneratorComponent_GenerateSpotOnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleGeneratorComponent::DeleteGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.DeleteGroups");

	UVehicleGeneratorComponent_DeleteGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UVehicleGeneratorComponent::AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.AddVehicleSpotCount");

	UVehicleGeneratorComponent_AddVehicleSpotCount_Params params;
	params.SpotType = SpotType;
	params.Path = Path;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UVehicleGeneratorComponent::AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleGeneratorComponent.AddVehicleClassCount");

	UVehicleGeneratorComponent_AddVehicleClassCount_Params params;
	params.Path = Path;
	params.IsValid = IsValid;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleSpotObject::OnVehicleGenerateEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotObject.OnVehicleGenerateEnd");

	UVehicleSpotObject_OnVehicleGenerateEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleSpotObject::OnTraceLevelShown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotObject.OnTraceLevelShown");

	UVehicleSpotObject_OnTraceLevelShown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleSpotSceneComponent::SetSpotRandomInfo(struct FVehicleGenerateRandomInfo* RandomInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.SetSpotRandomInfo");

	UVehicleSpotSceneComponent_SetSpotRandomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RandomInfo != nullptr)
		*RandomInfo = params.RandomInfo;
}







bool UVehicleSpotSceneComponent::GenerateSpot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gameplay.VehicleSpotSceneComponent.GenerateSpot");

	UVehicleSpotSceneComponent_GenerateSpot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

