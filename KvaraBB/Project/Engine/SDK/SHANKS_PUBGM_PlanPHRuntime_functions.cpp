
 
#include "../SDK.hpp"

namespace SDK
{











int UBinFileHelper::Init(int z4BufferSize, int zeroListSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.BinFileHelper.Init");

	UBinFileHelper_Init_Params params;
	params.z4BufferSize = z4BufferSize;
	params.zeroListSize = zeroListSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UMapBarrierWidget::SetMapStructureData(TArray<struct FStructureData> InMapStructureData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetMapStructureData");

	UMapBarrierWidget_SetMapStructureData_Params params;
	params.InMapStructureData = InMapStructureData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMapBarrierWidget::SetMapMidPoint(struct FVector2D* InMapMidPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetMapMidPoint");

	UMapBarrierWidget_SetMapMidPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InMapMidPoint != nullptr)
		*InMapMidPoint = params.InMapMidPoint;
}







void UMapBarrierWidget::SetLevelBoundExtent(int InLevelBoundExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetLevelBoundExtent");

	UMapBarrierWidget_SetLevelBoundExtent_Params params;
	params.InLevelBoundExtent = InLevelBoundExtent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMapBarrierWidget::SetGridSize(float InGridSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetGridSize");

	UMapBarrierWidget_SetGridSize_Params params;
	params.InGridSize = InGridSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APlanPH_GameMode::HandleNavigationInfo(class AController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.HandleNavigationInfo");

	APlanPH_GameMode_HandleNavigationInfo_Params params;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class ASTExtraPlayerStart* APlanPH_GameMode::GetPlayerStart(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.GetPlayerStart");

	APlanPH_GameMode_GetPlayerStart_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void APlanPH_GameMode::DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.DSPlayerKickOut");

	APlanPH_GameMode_DSPlayerKickOut_Params params;
	params.UID = UID;
	params.PlayerType = PlayerType;
	params.ExitReason = ExitReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanPH_GameState::OnRep_PartyDanceLeadInfo_5()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_5");

	APlanPH_GameState_OnRep_PartyDanceLeadInfo_5_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanPH_GameState::OnRep_PartyDanceLeadInfo_4()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_4");

	APlanPH_GameState_OnRep_PartyDanceLeadInfo_4_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanPH_GameState::OnRep_PartyDanceLeadInfo_3()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_3");

	APlanPH_GameState_OnRep_PartyDanceLeadInfo_3_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanPH_GameState::OnRep_PartyDanceLeadInfo_2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_2");

	APlanPH_GameState_OnRep_PartyDanceLeadInfo_2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APlanPH_GameState::LuaOnRep_PartyDanceLeadInfo(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.LuaOnRep_PartyDanceLeadInfo");

	APlanPH_GameState_LuaOnRep_PartyDanceLeadInfo_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void APlanPH_GameState::ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID, bool bIsWedding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.ChangePartyLeadInfo");

	APlanPH_GameState_ChangePartyLeadInfo_Params params;
	params.LandId = LandId;
	params.bOccupied = bOccupied;
	params.BeginTime = BeginTime;
	params.EndTime = EndTime;
	params.PlayerUID = PlayerUID;
	params.bIsWedding = bIsWedding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void APlanPH_PlayerState::RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.RequestPaintDecal");

	APlanPH_PlayerState_RequestPaintDecal_Params params;
	params.DecalId = DecalId;
	params.TargetTransform = TargetTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanPH_PlayerState::OnRep_LandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.OnRep_LandId");

	APlanPH_PlayerState_OnRep_LandId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanPH_PlayerState::InitLandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.InitLandId");

	APlanPH_PlayerState_InitLandId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool APlanPH_PlayerState::CanPaintDecal(int DecalId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.CanPaintDecal");

	APlanPH_PlayerState_CanPaintDecal_Params params;
	params.DecalId = DecalId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPlanPHCustomStaticMeshComponent::BPPreSetStaticMesh(class UStaticMesh* NewMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHCustomStaticMeshComponent.BPPreSetStaticMesh");

	UPlanPHCustomStaticMeshComponent_BPPreSetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPlanPHCustomStaticMeshComponent::BPPostSetStaticMesh(class UStaticMesh* NewMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHCustomStaticMeshComponent.BPPostSetStaticMesh");

	UPlanPHCustomStaticMeshComponent_BPPostSetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void APlanPHDoor::Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHDoor.Refresh_DoorCollisionChanel");

	APlanPHDoor_Refresh_DoorCollisionChanel_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.bEnableCollision = bEnableCollision;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void APlanPHDoor::DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHDoor.DoorAniFinish");

	APlanPHDoor_DoorAniFinish_Params params;
	params.InDoorCheckBox = InDoorCheckBox;
	params.Bright = Bright;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









float UPlanPHGameplayStatics::SpinEvaluate(float S, float T)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.SpinEvaluate");

	UPlanPHGameplayStatics_SpinEvaluate_Params params;
	params.S = S;
	params.T = T;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UPlanPHGameplayStatics::SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.SetPlayerMovementBlendTime");

	UPlanPHGameplayStatics_SetPlayerMovementBlendTime_Params params;
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








void UPlanPHGameplayStatics::GetActorBound(class AActor* Actor, struct FVector* Size)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.GetActorBound");

	UPlanPHGameplayStatics_GetActorBound_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}








void UPlanPHGameplayStatics::ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.ChangeLightChannel");

	UPlanPHGameplayStatics_ChangeLightChannel_Params params;
	params.InComponent = InComponent;
	params.InChannelBitMask = InChannelBitMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void APlanPHHomeArea::UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHHomeArea.UpdateEditableArea");

	APlanPHHomeArea_UpdateEditableArea_Params params;
	params.InMinGridIndexXYZ = InMinGridIndexXYZ;
	params.InMaxGridIndexXYZ = InMaxGridIndexXYZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPlanPHHomeAreaVisualizationComponent::ShowGrids(bool InBShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHHomeAreaVisualizationComponent.ShowGrids");

	UPlanPHHomeAreaVisualizationComponent_ShowGrids_Params params;
	params.InBShow = InBShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPlanPHMapData::RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHMapData.RemovePlayerItem");

	UPlanPHMapData_RemovePlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UPlanPHMapData::AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHMapData.AddPlayerItem");

	UPlanPHMapData_AddPlayerItem_Params params;
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





void UPlanPHProjectionComponent::SubmitProjection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SubmitProjection");

	UPlanPHProjectionComponent_SubmitProjection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UPlanPHProjectionComponent::SetReceiverMeshExcluded(class UStaticMesh* Mesh, bool bExcluded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SetReceiverMeshExcluded");

	UPlanPHProjectionComponent_SetReceiverMeshExcluded_Params params;
	params.Mesh = Mesh;
	params.bExcluded = bExcluded;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UPlanPHProjectionComponent::SetReceiverActorExcluded(class AActor* Actor, bool bExcluded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SetReceiverActorExcluded");

	UPlanPHProjectionComponent_SetReceiverActorExcluded_Params params;
	params.Actor = Actor;
	params.bExcluded = bExcluded;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPlanPHProjectionComponent::SetProjectionIntensity(float Intensity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SetProjectionIntensity");

	UPlanPHProjectionComponent_SetProjectionIntensity_Params params;
	params.Intensity = Intensity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPlanPHProjectionComponent::SetProjectionEnabled(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SetProjectionEnabled");

	UPlanPHProjectionComponent_SetProjectionEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPlanPHProjectionComponent::ResumeProjectionWorld(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.ResumeProjectionWorld");

	UPlanPHProjectionComponent_ResumeProjectionWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UPlanPHProjectionComponent::ReleaseProjection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.ReleaseProjection");

	UPlanPHProjectionComponent_ReleaseProjection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPlanPHProjectionComponent::CleanupProjectionWorld(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.CleanupProjectionWorld");

	UPlanPHProjectionComponent_CleanupProjectionWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UPlanPHProjectionComponent::BeginProjection(class UObject* BatchHelper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.BeginProjection");

	UPlanPHProjectionComponent_BeginProjection_Params params;
	params.BatchHelper = BatchHelper;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPlanPHProjectionComponent::AddReceiverActor(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.AddReceiverActor");

	UPlanPHProjectionComponent_AddReceiverActor_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPlanPHProjectionComponent::AddDecorationActor(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.AddDecorationActor");

	UPlanPHProjectionComponent_AddDecorationActor_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APlanPHSpectatorPawn::OnSpectatorRestart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.OnSpectatorRestart");

	APlanPHSpectatorPawn_OnSpectatorRestart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APlanPHSpectatorPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.MoveRight");

	APlanPHSpectatorPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APlanPHSpectatorPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.MoveForward");

	APlanPHSpectatorPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPlanPHVisualGridComponent::ShowGrids(bool InBShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHVisualGridComponent.ShowGrids");

	UPlanPHVisualGridComponent_ShowGrids_Params params;
	params.InBShow = InBShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPlanPHVisualGridComponent::RefreshGrids()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHVisualGridComponent.RefreshGrids");

	UPlanPHVisualGridComponent_RefreshGrids_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

