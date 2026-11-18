
 
#include "../SDK.hpp"

namespace SDK
{










void UCarryBackMCAnimInstance::HandlePlayerPoseChange(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CarryBackMCAnimInstance.HandlePlayerPoseChange");

	UCarryBackMCAnimInstance_HandlePlayerPoseChange_Params params;
	params.LastPose = LastPose;
	params.NewPose = NewPose;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCharLocomotionMCAnimInstance::SwitchingPoseFinishCallback()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharLocomotionMCAnimInstance.SwitchingPoseFinishCallback");

	UCharLocomotionMCAnimInstance_SwitchingPoseFinishCallback_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCharLocomotionMCAnimInstance::SetViewPointLimitByPoseStatus(ECharacterAnimBlendPoseType InPoseType, bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharLocomotionMCAnimInstance.SetViewPointLimitByPoseStatus");

	UCharLocomotionMCAnimInstance_SetViewPointLimitByPoseStatus_Params params;
	params.InPoseType = InPoseType;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCharLocomotionMCAnimInstance::SetInterruptPose(bool bUseInterruptPose, TEnumAsByte<ECharacterPoseType> InterruptPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharLocomotionMCAnimInstance.SetInterruptPose");

	UCharLocomotionMCAnimInstance_SetInterruptPose_Params params;
	params.bUseInterruptPose = bUseInterruptPose;
	params.InterruptPose = InterruptPose;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCharLocomotionMCAnimInstance::LeaveStateCallback()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharLocomotionMCAnimInstance.LeaveStateCallback");

	UCharLocomotionMCAnimInstance_LeaveStateCallback_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCharLocomotionMCAnimInstance::HandleStateLeave(EPawnState LeaveState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharLocomotionMCAnimInstance.HandleStateLeave");

	UCharLocomotionMCAnimInstance_HandleStateLeave_Params params;
	params.LeaveState = LeaveState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCharLocomotionMCAnimInstance::HandlePlayerPoseChange(TEnumAsByte<ESTEPoseState> LastPose, TEnumAsByte<ESTEPoseState> NewPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharLocomotionMCAnimInstance.HandlePlayerPoseChange");

	UCharLocomotionMCAnimInstance_HandlePlayerPoseChange_Params params;
	params.LastPose = LastPose;
	params.NewPose = NewPose;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCharMainMCAnimInstance::SetClimbAnimation(class UAnimSequence* AnimSequence, bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharMainMCAnimInstance.SetClimbAnimation");

	UCharMainMCAnimInstance_SetClimbAnimation_Params params;
	params.AnimSequence = AnimSequence;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













void UCharMainMCAnimInstance::HandlePlayerAnimMontagePlayExtraDelegate(class UAnimMontage* MontageToPlay, bool bWantsPlay, float PlayRate, const struct FName& StartSection, float StartPos, bool bOnlyJumpToSectionWhilePlaying, const struct FName& IgnoreStopSection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharMainMCAnimInstance.HandlePlayerAnimMontagePlayExtraDelegate");

	UCharMainMCAnimInstance_HandlePlayerAnimMontagePlayExtraDelegate_Params params;
	params.MontageToPlay = MontageToPlay;
	params.bWantsPlay = bWantsPlay;
	params.PlayRate = PlayRate;
	params.StartSection = StartSection;
	params.StartPos = StartPos;
	params.bOnlyJumpToSectionWhilePlaying = bOnlyJumpToSectionWhilePlaying;
	params.IgnoreStopSection = IgnoreStopSection;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UCharMainMCAnimInstance::HandlePlayerAnimMontagePlayDelegate(class UAnimMontage* MontageToPlay, bool bWantsPlay, float PlayRate, const struct FName& StartSection, float StartPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharMainMCAnimInstance.HandlePlayerAnimMontagePlayDelegate");

	UCharMainMCAnimInstance_HandlePlayerAnimMontagePlayDelegate_Params params;
	params.MontageToPlay = MontageToPlay;
	params.bWantsPlay = bWantsPlay;
	params.PlayRate = PlayRate;
	params.StartSection = StartSection;
	params.StartPos = StartPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UCharMainMCAnimInstance::HandleAnimPlaySlotAnimDelegate(class UAnimSequenceBase* AnimSequence, bool bWantsPlay, const struct FName& SlotName, float PlayRate, float BlendTime, unsigned char InLoopCount, float InStartPos, float LoopStartPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.CharMainMCAnimInstance.HandleAnimPlaySlotAnimDelegate");

	UCharMainMCAnimInstance_HandleAnimPlaySlotAnimDelegate_Params params;
	params.AnimSequence = AnimSequence;
	params.bWantsPlay = bWantsPlay;
	params.SlotName = SlotName;
	params.PlayRate = PlayRate;
	params.BlendTime = BlendTime;
	params.InLoopCount = InLoopCount;
	params.InStartPos = InStartPos;
	params.LoopStartPos = LoopStartPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AMainCityGameMode::ReplayRecoverGenerateDSCheckpoint(const struct FString& InReplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityGameMode.ReplayRecoverGenerateDSCheckpoint");

	AMainCityGameMode_ReplayRecoverGenerateDSCheckpoint_Params params;
	params.InReplayName = InReplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AMainCityGameMode::PreInitGameState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityGameMode.PreInitGameState");

	AMainCityGameMode_PreInitGameState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AMainCityGameMode::InternalNotifyPlayerExit(class ASTExtraPlayerController* PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityGameMode.InternalNotifyPlayerExit");

	AMainCityGameMode_InternalNotifyPlayerExit_Params params;
	params.PlayerController = PlayerController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AMainCityGameMode::InitConsoleVar(const struct FString& Command)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityGameMode.InitConsoleVar");

	AMainCityGameMode_InitConsoleVar_Params params;
	params.Command = Command;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AMainCityGameMode::GenReplayDone(const struct FString& ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityGameMode.GenReplayDone");

	AMainCityGameMode_GenReplayDone_Params params;
	params.ErrorMsg = ErrorMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AMainCityGameMode::DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityGameMode.DSPlayerKickOut");

	AMainCityGameMode_DSPlayerKickOut_Params params;
	params.UID = UID;
	params.PlayerType = PlayerType;
	params.ExitReason = ExitReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UMainCityGameplayStatics::GetProjectSavedDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityGameplayStatics.GetProjectSavedDir");

	UMainCityGameplayStatics_GetProjectSavedDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UMainCityHelper::SetSwapRolesForReplay(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityHelper.SetSwapRolesForReplay");

	UMainCityHelper_SetSwapRolesForReplay_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AMainCityPlayerState::RefreshAliasInfo(struct FGameModePlayerAliasInfo* PlayerAliasInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCityPlayerState.RefreshAliasInfo");

	AMainCityPlayerState_RefreshAliasInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayerAliasInfo != nullptr)
		*PlayerAliasInfo = params.PlayerAliasInfo;
}





void UMainCitySeesawAnimInstance::SyncAttachedActorAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySeesawAnimInstance.SyncAttachedActorAnimation");

	UMainCitySeesawAnimInstance_SyncAttachedActorAnimation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMainCitySubsystem::SetHasInitLobbyAvatar(class ASTExtraPlayerController* InController, bool bInValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.SetHasInitLobbyAvatar");

	UMainCitySubsystem_SetHasInitLobbyAvatar_Params params;
	params.InController = InController;
	params.bInValue = bInValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMainCitySubsystem::ResetMainCityGameState(class ASTExtraGameStateBase* InGameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.ResetMainCityGameState");

	UMainCitySubsystem_ResetMainCityGameState_Params params;
	params.InGameState = InGameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMainCitySubsystem::PreShutdownUnrealNetwork()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PreShutdownUnrealNetwork");

	UMainCitySubsystem_PreShutdownUnrealNetwork_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMainCitySubsystem::PreEnterMainCityBattle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PreEnterMainCityBattle");

	UMainCitySubsystem_PreEnterMainCityBattle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMainCitySubsystem::PreDestroyAutonomousChar(class ASTExtraBaseCharacter* Character)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PreDestroyAutonomousChar");

	UMainCitySubsystem_PreDestroyAutonomousChar_Params params;
	params.Character = Character;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMainCitySubsystem::PostShutdownUnrealNetwork()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PostShutdownUnrealNetwork");

	UMainCitySubsystem_PostShutdownUnrealNetwork_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMainCitySubsystem::PostPlayerActorChannelOpen()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PostPlayerActorChannelOpen");

	UMainCitySubsystem_PostPlayerActorChannelOpen_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMainCitySubsystem::PostInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PostInitialize");

	UMainCitySubsystem_PostInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMainCitySubsystem::PostEnterMainCityBattle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PostEnterMainCityBattle");

	UMainCitySubsystem_PostEnterMainCityBattle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMainCitySubsystem::PostDeinitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PostDeinitialize");

	UMainCitySubsystem_PostDeinitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMainCitySubsystem::PostClearActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.PostClearActors");

	UMainCitySubsystem_PostClearActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMainCitySubsystem::KeepActor(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.KeepActor");

	UMainCitySubsystem_KeepActor_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










class ASTExtraBaseCharacter* UMainCitySubsystem::InitStandalonePawn(class UClass* InClass, const struct FVector& InLocation, const struct FRotator& InRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.InitStandalonePawn");

	UMainCitySubsystem_InitStandalonePawn_Params params;
	params.InClass = InClass;
	params.InLocation = InLocation;
	params.InRotation = InRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UMainCitySubsystem::ClearActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.MainCitySubsystem.ClearActors");

	UMainCitySubsystem_ClearActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UReplayRecoverSubsystem::WriteLuaInfo(TArray<unsigned char> InData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.WriteLuaInfo");

	UReplayRecoverSubsystem_WriteLuaInfo_Params params;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UReplayRecoverSubsystem::SetReplayName(const struct FString& InReplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.SetReplayName");

	UReplayRecoverSubsystem_SetReplayName_Params params;
	params.InReplayName = InReplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<unsigned char> UReplayRecoverSubsystem::ReadLuaInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.ReadLuaInfo");

	UReplayRecoverSubsystem_ReadLuaInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UReplayRecoverSubsystem::PreInitializeWithParams(class UWorld* InWorld, class UNetDriver* InDriver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.PreInitializeWithParams");

	UReplayRecoverSubsystem_PreInitializeWithParams_Params params;
	params.InWorld = InWorld;
	params.InDriver = InDriver;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UReplayRecoverSubsystem::PreInitializeForWorld(const struct FString& InURLStr, class UWorld* InWorld, class USTExtraGameInstance* InGameInstance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.PreInitializeForWorld");

	UReplayRecoverSubsystem_PreInitializeForWorld_Params params;
	params.InURLStr = InURLStr;
	params.InWorld = InWorld;
	params.InGameInstance = InGameInstance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UReplayRecoverSubsystem::PreInitializeForGameMode(const struct FString& InURLStr, class UWorld* InWorld, class AGameStateBase* InGameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.PreInitializeForGameMode");

	UReplayRecoverSubsystem_PreInitializeForGameMode_Params params;
	params.InURLStr = InURLStr;
	params.InWorld = InWorld;
	params.InGameState = InGameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UReplayRecoverSubsystem::PreDemoPlaybackEnded(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.PreDemoPlaybackEnded");

	UReplayRecoverSubsystem_PreDemoPlaybackEnded_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UReplayRecoverSubsystem::PostInitializeWithParams(class UWorld* InWorld, class UNetDriver* InDriver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.PostInitializeWithParams");

	UReplayRecoverSubsystem_PostInitializeWithParams_Params params;
	params.InWorld = InWorld;
	params.InDriver = InDriver;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UReplayRecoverSubsystem::PostInitializeForWorld(const struct FString& InURLStr, class UWorld* InWorld, class USTExtraGameInstance* InGameInstance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.PostInitializeForWorld");

	UReplayRecoverSubsystem_PostInitializeForWorld_Params params;
	params.InURLStr = InURLStr;
	params.InWorld = InWorld;
	params.InGameInstance = InGameInstance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UReplayRecoverSubsystem::PostInitializeForGameMode(const struct FString& InURLStr, class UWorld* InWorld, class AGameStateBase* InGameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.PostInitializeForGameMode");

	UReplayRecoverSubsystem_PostInitializeForGameMode_Params params;
	params.InURLStr = InURLStr;
	params.InWorld = InWorld;
	params.InGameState = InGameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UReplayRecoverSubsystem::LuaSaveLuaInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.LuaSaveLuaInfo");

	UReplayRecoverSubsystem_LuaSaveLuaInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UReplayRecoverSubsystem::LoadReplayDone(const struct FString& ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.LoadReplayDone");

	UReplayRecoverSubsystem_LoadReplayDone_Params params;
	params.ErrorMsg = ErrorMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UReplayRecoverSubsystem::IsVersionValid(const struct FString& RecordVersion, const struct FString& PlayerVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.IsVersionValid");

	UReplayRecoverSubsystem_IsVersionValid_Params params;
	params.RecordVersion = RecordVersion;
	params.PlayerVersion = PlayerVersion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UReplayRecoverSubsystem::IsTimeValid(int64_t RecordTime, int64_t PlayTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.IsTimeValid");

	UReplayRecoverSubsystem_IsTimeValid_Params params;
	params.RecordTime = RecordTime;
	params.PlayTime = PlayTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UReplayRecoverSubsystem::GenReplayDone(const struct FString& ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.GenReplayDone");

	UReplayRecoverSubsystem_GenReplayDone_Params params;
	params.ErrorMsg = ErrorMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UReplayRecoverSubsystem::DeleteExpiredFiles(float MaxKeepHours)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.DeleteExpiredFiles");

	UReplayRecoverSubsystem_DeleteExpiredFiles_Params params;
	params.MaxKeepHours = MaxKeepHours;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UReplayRecoverSubsystem::ClearRecoverFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MainCity.ReplayRecoverSubsystem.ClearRecoverFile");

	UReplayRecoverSubsystem_ClearRecoverFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

